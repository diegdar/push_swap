                    push_swap
                         │ ▼
                ft_parse_flags()
                         │
                         ▼
                ft_parse_input()
                         │
          ┌──────────────┴──────────────┐
          │                             │
          ▼                             ▼
     Usa argv[]                  Usa ft_split()
          │                             │
          └──────────────┬──────────────┘
                         ▼
                 ft_build_stack()
                         │
                         ▼
              ft_validate_value()
                         │
      ┌──────────┬──────────────┬──────────────┐
      ▼          ▼              ▼              ▼
ft_is_number() ft_atol() ft_has_duplicate() Overflow INT
                         │
                         ▼
                 ft_create_node()
                         │
                         ▼
                  ft_add_back()
                         │
                         ▼
                  Stack A creada
                         │
                         ▼
                 ft_is_sorted()
                         │
            ┌────────────┴────────────┐
            ▼                         ▼
      Ya ordenada               No ordenada
            │                         │
            ▼                         ▼
          Salir              ft_assign_index()
                                        │
                                        ▼
                           Cada nodo recibe un índice
                                        │
                                        ▼
                          ft_compute_disorder()
                                        │
                                        ▼
                    Elegir estrategia de ordenación
                           (simple / medium /
                         complex / adaptive)
