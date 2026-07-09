int stack_size(t_stack *stack)
{
    t_stack *current;
    int count;

    count = 0;
    current = stack;
    while (current)
    {
        count++;
        current = current->next;
    }
    return (count);
}
