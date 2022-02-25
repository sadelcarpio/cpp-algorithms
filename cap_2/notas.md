# Loop invariant
Al hacer un insertion sort al array $A[1 ... n]$ se tiene una parte ordenada $A[1 ... (j-1)]$ y una parte que falta ordenar $A[j ... n]$. $A[1 ... (j-1)]$ tiene los elementos originales, pero ordenados. Eso es loop invariant.

### Inicialización
Se cumple antes de la primera iteración del loop   
- $A[1]$ es el primer elemento, y está ordenado
### Mantenimiento
i se cumple antes de la primera iteración, se cumple para las siguientes
- En cada for, se ordena el subarreglo de la izquierda, moviendo cada elemento a la derecha hasta ordenar $A[1 .. (j)]$
### Terminación
La finalización del algoritmo implica que el algoritmo es correcto
- Cuando j = n + 1, se tiene que  $A[1 ... n]$ debe estar ordenado
