    #include <stdio.h>

    int main()
    {
       int m, n, c, d, matrix[10][10], transpose[10][10];

       printf("Enter the order of the matrix : ");
       scanf("%d%d", &m, &n);

       printf("Enter %d elements of matrix : ", m*n);

       for (c = 0; c < m; ++c)
          for(d = 0; d < n; ++d)
             scanf("%d", &matrix[c][d]);

       printf("The given matrix is :\n");

       for (c = 0; c < m; ++c) {
          for (d = 0; d < n; ++d)
             printf("%d\t", matrix[c][d]);
             printf("\n");

       }

       for (c = 0; c < m; ++c)
          for( d = 0 ; d < n ; ++d )
             transpose[d][c] = matrix[c][d];

       printf("Transpose of the given matrix:\n");

       for (c = 0; c < n; ++c) {
          for (d = 0; d < m; ++d)
             printf("%d\t", transpose[c][d]);
             printf("\n");
       }

    }