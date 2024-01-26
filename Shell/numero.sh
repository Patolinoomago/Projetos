#!/bin/bash

echo "Digite um número qualquer:"
read numero;
if [ "$numero" -gt 20 ];
then
	echo "Este número é maior que 20!"
else 
	echo "Este número é menor que 20!"
fi


