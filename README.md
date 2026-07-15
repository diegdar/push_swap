# push_swap                      push_swap
                                     │
                                     ▼
                             ┌─────────────────┐
                             │     parsing/    │
                             └─────────────────┘
                                     │
                                     ▼
                              parse_flags()
                                     │
Configura el modo de ejecución (--simple, --medium,--complex, --adaptive, --bench)
                                     │
                                     ▼
                              parse_input()
                                     │
                 ┌───────────────────┴───────────────────┐
                 ▼                                       ▼
         Varios argumentos                     Un argumento con espacios
      ./push_swap 4 2 8 5                 ./push_swap "4 2 8 5"
                 │                                       │
                 └───────────────────┬───────────────────┘
                                     ▼
                               validate_value()
                                     │
              ┌──────────────────────┼──────────────────────┐
              ▼                      ▼                      ▼
        is_number()             ft_atol()           has_duplicate()
                                     │
                                     ▼
                             ┌─────────────────┐
                             │     stack/      │
                             └─────────────────┘
                                     │
                                     ▼
                                build_stack()                                
                                     │
                                     ▼
                                create_node()
                                     │
                                     ▼
                                add_back()
                                     │
                                     ▼
                             Stack A construida
                                     │
                                     ▼
                             ┌─────────────────┐
                             │      sort/      │
                             └─────────────────┘
                                     │
                                     ▼
                               is_sorted()
                                     │
                   ┌─────────────────┴─────────────────┐
                   ▼                                   ▼
            Ya ordenada                         No ordenada
                   │                                   │
                   ▼                                   ▼
                Finaliza                       assign_index()
                                                     │
                                                     ▼
                                    Cada nodo recibe un índice
                                                     │
                                                     ▼
                             ┌─────────────────────────────┐
                             │        strategy/            │
                             └─────────────────────────────┘
                                                     │
                                                     ▼
                                          choose_algorithm()
                                                     │
                     ┌───────────────┬───────────────┬───────────────┐
                     ▼               ▼               ▼               ▼
                simple()           medium()       complex()      adaptive()
                                                     │
                                                     ▼
                             			┌─────────────────┐
                             			│  operations/    │
                             			└─────────────────┘
                                                     │
                                                     ▼
                               sa pb ra rb rra rrb ss rr rrr
                                                     │
                                                     ▼
                                               Stack ordenada
