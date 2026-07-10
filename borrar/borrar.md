compilar con: gcc -Wall -Wextra -Werror main.c tu_parser.c tus_utils.c -o test_push_swap

pruebas: 
ordenado 
./test_push_swap 10 20 30 40

desordenado
./test_push_swap 40 30 20 10

valores aletorios
./test_push_swap 5 1 42 -3

máximo desorden
./test_push_swap 4 3 2 1

errores parser
./test_push_swap 1 2 3 2
./test_push_swap 1 2147483648 3
./test_push_swap 1 abc 3
