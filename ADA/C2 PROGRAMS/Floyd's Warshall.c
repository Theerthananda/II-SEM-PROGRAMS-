// Floyd Warshall Algorithm

#include<stdio.h>

int main()
{
    int a[10][10], n, e, u, v, cost;

    printf("Enter number of nodes\n");
    scanf("%d",&n);

    printf("Enter number of edges\n");
    scanf("%d",&e);

    // Initialize matrix
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=9999;
        }
    }

    // Create graph
    for(int i=1; i<=e; i++)
    {
        printf("Enter the connection\n");
        scanf("%d%d",&u,&v);

        printf("Enter the cost\n");
        scanf("%d",&cost);

        a[u][v]=cost;
    }

    // Display adjacency matrix
    printf("\nAdjacency Matrix\n");

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d\t",a[i][j]);
        }

        printf("\n");
    }

    // Floyd Warshall Logic
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(a[i][k]!=9999 && a[k][j]!=9999)
                {
                    if(a[i][j] > a[i][k] + a[k][j])
                    {
                        a[i][j] = a[i][k] + a[k][j];
                    }
                }
            }
        }

        printf("\nMatrix after k=%d\n",k);

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                printf("%d\t",a[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}