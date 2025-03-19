#include <stdio.h>

void displayData(int numbers[10]);
float displayAverage(int numbers[10]);
int displayHighest(int numbers[10]);
int displayLowest(int numbers[10]);
int displayMedian(int numbers[10], float highest, float lowest);
int displayRange(int highest, int lowest);
int displayMode(int numbers[10]);
void getData(int numbers[10]);

int main()
{
    int numbers[10];
  float median;
    getData(numbers);
    displayData(numbers);
    int highest = displayHighest(numbers);
    int lowest = displayLowest(numbers);
    int range = displayRange(highest, lowest);
    displayAverage(numbers);
  median = displayMedian( numbers,  highest,  lowest);
    int mode = displayMode(numbers);

    return 0;
} //end main

void getData(int numbers[10])
{
    for (int x = 0; x < 10; x++)
    {
        printf("Please enter a number: ");
        scanf("%d", &numbers[x]);
    } //end for

    int highest = displayHighest(numbers);
    int lowest = displayLowest(numbers);

    printf("The largest number entered is %d\n", highest);
    printf("The lowest number entered is %d\n", lowest);

    float average = displayAverage(numbers);
    printf("The average number is %.2f\n", average);
    float median = displayMedian(numbers, highest, lowest);
    printf("The median number is %.2f\n", median);
} //end getData
void displayData(int numbers[10])
{
    for (int x = 0; x < 10; x++)
    {
        printf("%d, ", numbers[x]);
    } //end for
} //end displayData


int displayHighest(int numbers[10])
{
    int max = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    } //endfor

    return max;
} //end displayhighest

int displayLowest(int numbers[10])
{
    int min = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    } //end for

    return min;
} //end displaylowest

float displayAverage(int numbers[10])
{
    int sum = 0;

    for (int i = 0; i < 10; i++) 
    {
        sum += numbers[i];
    }

    return (float)sum / 10;
} //end displayavg

int displayRange(int highest, int lowest)
{
    int range = highest - lowest;
    printf("\nThe range of the numbers is %d\n", range);
    return range;
} //end displayrange

int displayMedian(int numbers[10], float highest, float lowest)
{
  float median;
  if (10%2==0)
  {
    median = numbers[5];
     
  } //end if
  else 
    
    {

      median= (numbers[4] + numbers[5] ) /2.0;
    } //end else

    return median;
} //end displayMedian



int displayMode(int numbers[10])
{
  int mode = numbers[0];
  int count=1;
  for (int x = 0; x<10; ++x)
    {
      int temp = numbers[x];
    for (int i=x+1; i<10; ++i)
      {
      
      if (temp == numbers[i])
      {   
     // temp = numbers[i];
      mode = numbers[i];
      count +=1;
      }
      } //end for
    }//end for

   printf("\nThe mode of the numbers is %d\n", mode);
  return mode;
   
    

}

