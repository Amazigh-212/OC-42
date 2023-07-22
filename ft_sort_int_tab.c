void ft_sort_int_tab(int *tab, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tab[j] < tab[i])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

/* int tab[] = {5, 2, 8, 1, 3};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    ft_sort_int_tab(tab, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    */