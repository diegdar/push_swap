# push_swap
                      push_swap
                           │
                           ▼
                     init_stack()
                           │
      ┌────────────────────┼────────────────────┐
      ▼                    ▼                    ▼
 is_number()          ft_atol()          has_duplicate()
                           │
                           ▼
                     create_node()
                           │
                           ▼
                      add_back()
                           │
                           ▼
                     Stack A creada
                           │
                           ▼
                     is_sorted()
                           │
              ┌────────────┴────────────┐
              ▼                         ▼
         Ya ordenado                 No ordenado
              │                         │
              ▼                         ▼
            Salir                assign_index()
                                       │
                                       ▼
                         Cada nodo recibe un índice
                                       │
                                       ▼
                                 sort()/radix_sort()
