#!/bin/bash
echo "ingrese la ubicacion del archivo"
read path
echo "ingresar string"
read palabra 

cat $path | grep -n $palabra >> salida.out 
echo "-------" >> salida.out
