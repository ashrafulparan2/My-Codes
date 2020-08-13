#include <stdio.h>

void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   int a[100],n;

  for (int i = 0; i < n; i++)                     //Loop for descending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] < a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}
		}
	}
	printf("\n\nDescending : ");
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}
void main()
{
   int i, count, number[20];

   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");

   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);

   sort_numbers_ascending(number, count);
}
