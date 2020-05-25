#include<stdio.h>
#define N 60
int main()
{
	int n, a[N], maxzn = 0;
	int c = 0;
	printf("Input the number of digits ");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
    int iteration[N], znachenie[N];
    for (int i = 0; i < n; i++)
	{
		int t = 0;
        for (int w = i; w < n; w++)
        {
        	if (a[i] == a[w])
            {
            	t++;
            }
         }

         znachenie[i] = a[i];
         iteration[i] = t;
     }
     int max=0;
     for (int g = 0; g < n; g++)
     {
     	if (iteration[g] > max)
        {
        	max = iteration[g];
        }
     }
     for (int g = 0; g < n; g++)
     {

     	if (iteration[g] == max)
        {
        	c++;
        }
     }
     for(int i = 0; i < n; i++)
          {
              if(znachenie[i] > maxzn)
              {
                  maxzn = znachenie[i];
              }
          }
     for (int t = 0; t < n; t++)
     {
     	if (c == 0)
        {
          printf("Moda: %d\n", maxzn);
        }
        else if(c > 1 && iteration[t] == max && znachenie[t] == maxzn)
        {
            printf("Moda: %d\n", znachenie[t]);
        }
        else if(c == 1 && iteration[t] == max)
        {
            printf("Moda: %d\n", znachenie[t]);
        }

     }

}
