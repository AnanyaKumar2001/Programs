    #include <stdio.h>

    int main()
    {
       int m, n, c, d, i, sum, matrix[10][10];

       printf("Enter row and column sizes : ");
       scanf("%d%d", &m, &n);

       printf("Enter elements of matrix : ");

       for (c = 0; c < m; c++)
          for(d = 0; d < n; d++)
             scanf("%d", &matrix[c][d]);

       printf("The given matrix is :\n");

       for (c = 0; c < n; c++) {
          for (d = 0; d < m; d++)
             printf("%d\t", matrix[c][d]);
          printf("\n");
       }

       for(c = 0; c < m; c++)
       {
            sum = 0;
            for(d = 0; d < n; d++)
            {
                sum = sum + matrix[c][d];
            }
            printf("Sum of Row - %d elements =  %d \n", c, sum );
       }

       return 0;
    }
