#Criar uma lista simples
users = {'Hans' : 'active', 'Éléonore' : 'inactive' , '景太郎' : 'active'}

#fazendo uma cópia
for user, status in users.copy().items():
    if status == 'inactive':
        del users[user]

#Criando uma lista nova
active_users = {}
for user, status in users.items():
    if status == 'active':
        active_users[user] = status
