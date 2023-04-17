/*program to calculate the salaries*/

#include<stdio.h>
int main()
{
    int count,hours,RatePerHour,salary,sum=0,max=0;
    float average;   //average is taken as float because it can be a decimal number

    for(count=1;count<=10;count++)      //this loop will run as long as count = 10
    {
        printf("\n employee # %d\n",count);

        printf("enter hours:\n");
        scanf("%d",&hours);

        printf("enter rate per hour:\n");
        scanf("%d",&RatePerHour);

        if(RatePerHour<500 || RatePerHour>5000)     //condition checks whether the given salary is within the range
        {
            printf("enter rate per hour in the given range\n");
            scanf("%d",&RatePerHour);
        }
        salary=hours*RatePerHour;       //calculates total salary

        printf("salary is :%d\n",salary);
        sum+=salary;    //calculates the sum of salaries for taking average

        if(max<hours)   //this loop checks for the maximum number of hours
        {
            max=hours;
        }
    }

    average=(float)sum/10;
    printf("average of all the salaries is: %.2f\n",average);

   printf("maximum hours are %d\n",max);

    return 0;
}
