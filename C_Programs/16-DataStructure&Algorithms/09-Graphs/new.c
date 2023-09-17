#include <stdio.h>
#include <stdlib.h>

void printMatrix(int (*ptr)[50],int totalVertices)
{
    for (int i = 0; i < totalVertices; i++)
    {
        for (int j = 0; j < totalVertices; j++)
            printf("%d ", ptr[i][*j]);
        printf("\n");
    }
}


void main()
{
    int totalVertices,u,v,i;
    scanf("%d", &totalVertices);

    // for (int i = 0; i < totalVertices; i++)
    //     adjMatrix[i] = malloc(totalVertices * sizeof(int));  Dynamically allocation 2D Array

    int(*adjMatrix)[totalVertices] = malloc(sizeof *adjMatrix * totalVertices);

     (i = 0; i < totalVertices; i++)
        for (int j = 0; j < totalVertices; j++)
            adjMatrix[i][j] = 0;

    //         myprintf("Enter vertex u and v: ");
    //         scanf("%d %d",&u,&v);
    //         addEdge(adjMatrix,u,v);

}

