#include<stdio.h>

int main()
{
    system("COLOR 0A");
    int var1 = 3000, var2 = 60, var3 = 360, result;
    printf("RPM = %d \n", var1);
	printf("Seconds = %d \n", var2);
	printf("Degrees = %d \n", var3);

    //Solution
    result = var1 / var2 * var3;
    printf("%d RPM divide %d secs multiply %d degrees is %d degrees per second", var1, var2, var3,result);
    return 0;
}
