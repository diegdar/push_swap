AGREGAR ESTE PROYECTO...



\## Descripción



\*\*Push\_swap\*\* es un proyecto de la escuela 42 cuyo objetivo es ordenar una lista de enteros utilizando únicamente un conjunto limitado de operaciones sobre dos pilas (`a` y `b`), minimizando el número total de movimientos.



Este proyecto implementa una estrategia \*\*adaptativa\*\*, capaz de seleccionar automáticamente el algoritmo de ordenación más adecuado en función del \*\*índice de desorden\*\* de la entrada.



\---



\# Características



\* Parsing completo de argumentos.

\* Validación de números.

\* Detección de duplicados.

\* Comprobación de overflow.

\* Asignación de índices.

\* Cuatro algoritmos de ordenación.

\* Selección automática mediante índice de desorden.

\* Contador de operaciones.

\* Modo Benchmark (`--bench`).



\---



\# Estructura del proyecto



├── parsing

├── sort

├── stack

├── strategy

│   ├── simple

│   ├── medium

│   ├── complex

│   └── adaptive

├── utils

├── push\_swap.c

├── push\_swap.h

└── Makefile

```



\\---



\\# Instrucciones



Compilar el proyecto:

make



Eliminar archivos objeto:




make clean



Eliminar archivos objeto y ejecutable:


make fclean



Reconstruir completamente:



make re



\# Uso



\## Ordenación automática



```bash

./push\\\_swap 3 2 1

```



\---



\## Seleccionar algoritmo



\### Algoritmo simple





./push\\\_swap --simple 3 2 1





\### Algoritmo intermedio





./push\\\_swap --medium 3 2 1





\### Algoritmo complejo




./push\\\_swap --complex 3 2 1




\### Selección adaptativa




./push\\\_swap --adaptive 3 2 1





La selección adaptativa es el comportamiento por defecto.



\---



\## Benchmark



./push\\\_swap --bench 5 3 9 1 2



El benchmark muestra en \*\*stderr\*\*:



\* Índice de desorden.

\* Estrategia utilizada.

\* Complejidad teórica.

\* Número total de operaciones.

\* Número de operaciones de cada tipo:



&#x20; \* sa

&#x20; \* sb

&#x20; \* ss

&#x20; \* pa

&#x20; \* pb

&#x20; \* ra

&#x20; \* rb

&#x20; \* rr

&#x20; \* rra

&#x20; \* rrb

&#x20; \* rrr



\---



\# Operaciones permitidas



\## Swap



```

sa

sb

ss

```



Intercambian los dos primeros elementos.



\---



\## Push



```

pa

pb

```



Mueven el primer elemento entre pilas.



\---



\## Rotate



```

ra

rb

rr

```



El primer elemento pasa al final.



\---



\## Reverse Rotate



```

rra

rrb

rrr

```



El último elemento pasa al principio.



\---



\# Índice de desorden



El índice de desorden mide el grado de desorden inicial de la secuencia.



Se calcula contando todas las inversiones posibles:



```

disorder = inversiones / pares\\\_totales

```



Su valor pertenece al intervalo:



```

0.00 ≤ disorder ≤ 1.00

```



\* \*\*0.00\*\* → Secuencia completamente ordenada.

\* \*\*1.00\*\* → Máximo desorden posible.



\---



\# Estrategias implementadas



\## 1. Algoritmo simple



Complejidad:



```

O(n²)

```



Método utilizado:



\* Extracción sucesiva del mínimo.

\* El mínimo se mueve al inicio mediante rotaciones.

\* Se envía temporalmente a la pila B.

\* Finalmente se reconstruye la pila A.



Se utiliza principalmente para entradas pequeñas o casi ordenadas.



\---



\## 2. Algoritmo intermedio



Complejidad:



```

O(n√n)

```



Método utilizado:



\* División de la secuencia en √n bloques (\*chunks\*).

\* Cada bloque se mueve a la pila B.

\* Los elementos se recuperan en orden descendente.



Esta estrategia reduce considerablemente el número de rotaciones respecto al algoritmo simple.



\---



\## 3. Algoritmo complejo



Complejidad:



```

O(n log n)

```



Método utilizado:



\* Adaptación del algoritmo \*\*Radix LSD\*\*.

\* Utiliza los índices previamente asignados.

\* Recorre los bits desde el menos significativo al más significativo.

\* En cada pasada:



&#x20; \* bit = 0 → `pb`

&#x20; \* bit = 1 → `ra`

\* Al finalizar cada bit, todos los elementos vuelven a la pila A.



Es el algoritmo utilizado para secuencias grandes.



\---



\# Estrategia adaptativa



Cuando no se especifica ninguna estrategia mediante flags, el programa selecciona automáticamente el algoritmo según el índice de desorden.



Los umbrales elegidos son:



| Índice de desorden | Estrategia           |

| -----------------: | -------------------- |

|           `< 0.20` | Algoritmo simple     |

|      `0.20 – 0.49` | Algoritmo intermedio |

|           `≥ 0.50` | Algoritmo complejo   |



\## Justificación



\### disorder < 0.20



La secuencia contiene pocas inversiones.



El coste de localizar sucesivamente el mínimo es reducido y evita el coste adicional de algoritmos más complejos.



\---



\### 0.20 ≤ disorder < 0.50



Existe una cantidad moderada de desorden.



La estrategia basada en bloques permite reducir significativamente el número de operaciones manteniendo una implementación sencilla.



\---



\### disorder ≥ 0.50



La secuencia está altamente desordenada.



El algoritmo Radix presenta un crecimiento prácticamente lineal respecto al número de bits y ofrece el mejor comportamiento para entradas grandes.



\---



\# Complejidad



| Estrategia      | Tiempo     | Espacio |

| --------------- | ---------- | ------- |

| Simple          | O(n²)      | O(1)    |

| Medium (Chunks) | O(n√n)     | O(1)    |

| Complex (Radix) | O(n log n) | O(1)    |



\---



\# Organización del código



El proyecto se divide en módulos independientes:



\* \*\*parsing/\*\* → Lectura y validación de argumentos.

\* \*\*stack/\*\* → Gestión de listas enlazadas.

\* \*\*sort/\*\* → Funciones auxiliares de ordenación.

\* \*\*strategy/simple/\*\* → Algoritmo simple.

\* \*\*strategy/medium/\*\* → Algoritmo basado en chunks.

\* \*\*strategy/complex/\*\* → Algoritmo Radix.

\* \*\*strategy/adaptive/\*\* → Selección automática de estrategia.

\* \*\*utils/\*\* → Funciones auxiliares reutilizables.



Esta organización facilita el mantenimiento y la ampliación del proyecto.

