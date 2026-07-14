#include "push_swap.h"
#include <stdio.h> // SOLO PARA TESTING

// Función visual para inspeccionar el estado exacto de tu stack
void	print_stack_debug(t_stack *stack, char name)
{
	printf("--- 🥞 STACK %c ---\n", name);
	if (!stack)
	{
		printf("(vacío)\n");
		return ;
	}
	while (stack)
	{
		printf("[Dirección: %p | Valor: %5d | Índice Simplificado: %2d] -> Siguiente: %p\n",
			(void *)stack, stack->value, stack->index, (void *)stack->next);
		stack = stack->next;
	}
	printf("------------------\n\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	double	disorder;

	// Si ejecutan sin argumentos, el programa finaliza en silencio (requisito de 42)
	if (argc < 2)
	{
		printf("Ejecución sin argumentos. Saliendo en silencio...\n");
		return (0);
	}

	stack_a = NULL;

	printf("============= 🛠️  PROBANDO PARSING Y CREACIÓN DE NODOS =============\n");
	// init_stack procesa los argumentos de la consola a partir de argv[1]
	// Nota: Si hay errores (ej. "hola", duplicados, desbordamiento INT),
	// romperá llamando a error_exit() imprimiendo "Error" en stderr.
	init_stack(&stack_a, argv);
	printf("✅ Parsing completado de forma segura y exitosa.\n\n");

	printf("============= 📊 PROBANDO FUNCIONES UTILS INICIALES =============\n");
	print_stack_debug(stack_a, 'A');
	printf("• Tamaño del stack_a : %d\n", stack_size(stack_a));
	printf("• ¿Ya está ordenado? : %s\n", is_sorted(stack_a) ? "SÍ ✅" : "NO ❌");
	printf("• Valor mínimo       : %d\n", find_min(stack_a));
	printf("• Valor máximo       : %d\n\n", find_max(stack_a));

	printf("============= 📉 PROBANDO ÍNDICE DE DESORDEN =============\n");
	disorder = compute_disorder(stack_a);
	printf("• Índice bruto      : %f\n", disorder);
	// Formateado al estilo de la flag obligatoria --bench
	printf("• [bench] disorder  : %.2f%%\n\n", disorder * 100.0);

	printf("============= 🔢 PROBANDO ASIGNACIÓN DE ÍNDICES =============\n");
	printf("Ejecutando assign_index()...\n");
	assign_index(stack_a);
	// Ahora el índice de cada nodo debería reflejar su posición real si estuviese ordenado (0 a N-1)
	print_stack_debug(stack_a, 'A');

	printf("============= 🧹 LIBERANDO MEMORIA (free_stack) =============\n");
	free_stack(&stack_a);
	printf("• Verificando si stack_a quedó en NULL: %s\n", (stack_a == NULL) ? "SÍ (No hay leaks) ✅" : "NO (Cuidado) ❌");

	return (0);
}
/* int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_config	config;
	int			start;

	a = NULL;
	b = NULL;
	start = parse_flags(argc, argv, &config);
	if (parse_input(&a, argc, argv, start))
		return (1);
	assign_index(a);
	sort(&a, &b);
	free_stack(&a);
	return (0);
}*/
