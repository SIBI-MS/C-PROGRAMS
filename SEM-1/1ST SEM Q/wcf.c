/*Wind chill factor (wcf) is the felt air temperature on
 exposed skin due to wind. The wind chill temperature is
  always lower than the air temperature and is calculated as follows

wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v0.16
where v is wind velocity and t is the temperature.
 Write a program to receive the values of v and t and
  find the wind chill factor (wcf)*/
  #include<stdio.h>
  #include<math.h>
  int main()
  {
    float v,v1,temp,wcf;
    printf("Enter velocity and temperature:");
    scanf("%f%f",&v,&temp);
    v1=pow(v,0.16);
    wcf=35.74+(0.6215*temp)+((0.4275*temp)-35.75)*v1;
    printf("wind chill factor = %f\n",wcf);
  }
