#include <stdio.h>
#define max 10
#define infinity 10000

int dijikstra(int graph[max][max], int n, int start)
    {
        int cost[max][max], dist[max], pred[max];

        for(int i = 0; i <n; i++)
            {
                for(int j = 0; j<n; j++)
                    {
                        if(graph[i][j] == 0)
                            cost[i][j] = infinity;
                        else
                            cost[i][j] = graph[i][j];
                    }
            }
        int found[max];
        for(int i = 0; i<n; i++)
            {
                dist[i] = cost[start][i];
                pred[i] = start;
                found[i]=0;
            }    
        dist[start] =0; 
        found[start]=0;
        int count = 1;
        int min;
        int next;
        while(count <n)
            {
                for(int i =0; i<n; i++)
                    {
                        if(dist[i] < min && !found[i])
                            {
                                min = dist[i];
                                next = i;
                            }
                    }
                found[next] =1;
                for(int i =0; i<n ; i++)
                    {
                        if(!found[i])
                            {
                                if(min + cost[next][i] < dist[i])
                                {
                                    dist[i] = min+ cost[next][i];
                                    pred[i] = next;
                                }
                            }
                        count++;    
                    }
                for(int i =0; i<n; i++)
                    {
                        if(i!=start)
                            {
                                printf("Distance from source to vetrex %d is: %d\n", i, dist[i]);
                            }
                    }        
            }    
    }

int main()
    {
        int graph[max][max];
        int n;
        printf("Enter size of square matrix: "); scanf("%d", &n);
        for(int i =0; i <n; i++)
            {
                for(int j =0; j<n; j++)
                    {
                        printf("\nEnter the element a%d%d: ",i,j);
                        scanf("%d", &graph[i][j]);
                    }
            }
        int u =0;
        dijikstra(graph, n, u);
    }           

