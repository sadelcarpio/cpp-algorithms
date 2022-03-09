# Loop invariant
Al hacer un insertion sort al array `A[1 ... n]` se tiene una parte ordenada `A[1 ... (j-1)]` y una parte que falta ordenar `A[j ... n]`. `A[1 ... (j-1)]` tiene los elementos originales, pero ordenados. Eso es loop invariant.

## Inicialización
Se cumple antes de la primera iteración del loop   
- `A[1]` es el primer elemento, y está ordenado
## Mantenimiento
Si se cumple antes de la primera iteración, se cumple para las siguientes
- En cada for, se ordena el subarreglo de la izquierda, moviendo cada elemento a la derecha hasta ordenar `A[1 .. (j)]`
## Terminación
La finalización del algoritmo implica que el algoritmo es correcto
- Cuando `j = n + 1`, se tiene que  `A[1 ... n]` debe estar ordenado

# Notación $\Theta$
Denota el orden de crecimiento del tiempo de ejecución de un algoritmo en función del tamaño de la entrada.

- Para el insertion sort, en el peor de los casos (entrada en orden descendente):  
  $$ T(n) = c_1n^2 + c_2n + c_3 $$
  Entonces el tiempo de ejecución es $\Theta(n^2)$

# Loop invariant del Bubble Sort
El bubble sort consiste en cambiar de lugar cada arreglo que vea desordenado, llegando a ordenar los menores a la derecha.

## Pseudo-código
```
para i = 1 hasta A.length - 1:
    para j = A.length hasta i + 1:
        si A[j] < A[j - 1]:
            cambiar A[j] con A[j - 1] 
```
## Segundo loop (`j`)
### Inicialización
Antes del primer loop en `j`, el elemento `A[n]` es el mínimo en el subarreglo `A[n]`
### Mantenimiento
En un loop cualquiera de `j`, `A[j]` se vuelve el mínimo del subarreglo  `A[j ... n]`

### Finalización
Al finalizar el loop en `j`, `A[i]` es el mínimo del subarreglo `A[i ... n]`

## Primer loop (`i`)
### Inicialización
Antes del primer loop, el primer elemento `A[1]` está ordenado
### Mantenimiento
En un loop `i`, se tiene ordenado el subarreglo `A[1 ... i + 1]`.
### Finalización
Al terminal el loop, siendo `i = n - 1`, se tiene ordenado `A[1 ... n]`

# Merge Sort
Es un algoritmo de ordenamiento de tipo recursivo, divide el arreglo en dos, los ordena y luego une (merge) dos arreglos ordenados (complejidad $\Theta(n)$). 
<img src="https://cdn.programiz.com/cdn/farfuture/PRTu8e23Uz212XPrrzN_uqXkVZVY_E0Ta8GZp61-zvw/mtime:1586425911/sites/tutorial2program/files/merge-sort-example_0.png">

La complejidad del algoritmo tiene la forma:
$$
  T(n) = c\cdot n\cdot\log_2(n) + c\cdot n 
$$

Siendo $\Theta(n\cdot \log_2(n))$

# Aclaración de notaciones $\Theta$, $O$ y $\Omega$

$f(n) = \Theta(g(n))$, si $f(n)$ se encuentra acotado entre $c_1g(n)$ y $c_2g(n)$, a partir de cierto $n_0$

$f(n) = O(g(n))$, si $f(n)$ está acotado superiormente por $cg(n)$, a partir de cierto $n_0$

$f(n) = \Omega(g(n))$, si $f(n)$ está acotado inferiormente por $cg(n)$, a partir de cierto $n_0$