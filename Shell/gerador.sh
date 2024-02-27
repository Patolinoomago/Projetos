#!/bin/bash

repeat="True"

check_password_pwned() {
    local password="$1"
    local hashed_password
    local hash_prefix
    local hash_suffix
    local response
    local hash_suffix_from_response

    hashed_password=$(echo -n "$password" | sha1sum | awk '{print $1}')  # Obtém o hash SHA-1 da senha
    hash_prefix=${hashed_password:0:5}  # Obtém os primeiros 5 caracteres do hash

    response=$(curl -s "https://api.pwnedpasswords.com/range/$hash_prefix")

    hash_suffix=$(echo -n "$password" | sha1sum | awk '{print toupper($1)}' | cut -c 6-40)

    while IFS= read -r line; do
        hash_suffix_from_response=$(echo "$line" | cut -d ":" -f 1)
        if [ "$hash_suffix" = "$hash_suffix_from_response" ]; then
            echo -e "Mas esta senha foi encontrada em vazamentos conhecidos. Vamos gerar uma nova, aguarde.\n"
            return 1  # Senha comprometida
        fi
    done <<< "$response"

source progressbar

sleep 1
setprogress 8 Verificando...
sleep 1
setprogress 12 Verificando..
sleep 1
setprogress 23 Verificando.
sleep 1
setprogress 37 Verificando..
sleep 1
setprogress 49 Verificando...
sleep 1
setprogress 66 Verificando.
sleep 1
setprogress 72 Verificando..
sleep 1
setprogress 86 Verificando...
    echo "Esta senha não foi encontrada em vazamentos conhecidos."
    return 0  # Senha não comprometida
}

# Função para gerar senha forte
generate_password() {
    local password
    # Usando /dev/urandom para gerar uma senha aleatória de 16 caracteres
    password1=$(tr -dc '[:alnum:]!@#$%^&*()_+=' < /dev/urandom | head -c 6)
    password2=$(tr -dc '[:alnum:]!@#$%^&*()_+=' < /dev/urandom | head -c 6)
    password3=$(tr -dc '[:alnum:]!@#$%^&*()_+=' < /dev/urandom | head -c 6)
    echo "$password1-$password2-$password3"
}

while [[ "$repeat" == "True" ]]; do
    # Gera uma senha forte
    strong_password=$(generate_password)

    echo "Senha forte gerada: $strong_password"
    
    check_password_pwned "$strong_password"
    
    if [ $? -eq 0 ]; then
        repeat="False"
    fi
done
