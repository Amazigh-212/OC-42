
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while (i < size)
	{
		a = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = a;
		size--;
		i++;
	}
}

/* int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    ft_rev_int_tab(tab, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
*/