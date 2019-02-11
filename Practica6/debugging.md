Pasos para obtener la contraseña con gdb
=======================

Lo primero que tenemos que hacer es generar el binario del archivo, en este caso se llamará **"pass"**.
enseguida lo abriremos con gdb con el siguiente comando:
> gdb pass

Enseguida, vamos a usar el comando "list" para mostrar las lineas de codigo
> list

![2](https://user-images.githubusercontent.com/36577863/52541663-47200500-2d5d-11e9-9240-098f3eeea5f8.PNG)

Ahí encontraremos que se va a realizar un **scanf** para que se le introduzca una contraseña, en este caso se guardará en una variable llamada ***pass***.
Vamos a crear un breakpoint con el comando **b** (alias de breackpoint) poco antes de que se ejecute la linea del escaneo y lo vamos a correr con **run**.
> run

![3](https://user-images.githubusercontent.com/36577863/52541664-47200500-2d5d-11e9-8e84-7e5c01c527b3.PNG)

Usamos el comando **n**(alias de next) para seguir poco a poco con la ejecución hasta donde nos pide una entrada (la contraeña) y se la escribimos. En este caso, como contraseña usaré mi nombre.
> n
![4](https://user-images.githubusercontent.com/36577863/52541659-47200500-2d5d-11e9-9fc3-fb87552b166c.PNG)

Antes de seguir con la ejecución, ya puedo ver lo que está escrito en la variable pass (donde se encuentra la contraseña) con el comando **p pass** (p es alias de print).
> p pass

![5](https://user-images.githubusercontent.com/36577863/52541660-47200500-2d5d-11e9-91d1-688a30f61892.PNG)

Para ver su ubicacion en memoria, es necesario acceder al apuntador con:
> p &pass
Y podemos ver el contenido explícitamente con el comando **x** con su respectivo formato para cadenas de la variable donde guardamos con el comando anterior.
> x/1s $2

![6](https://user-images.githubusercontent.com/36577863/52541661-47200500-2d5d-11e9-8d3e-b85868d5b622.PNG)

Asi, si siguimos con la ejecución, podemos introducir con **n**.

![7](https://user-images.githubusercontent.com/36577863/52541662-47200500-2d5d-11e9-8018-6f0c37653ea6.PNG)
