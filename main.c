#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int minimumWindSpeed = 74;
  int categoryOne = 95; 
  int categoryTwo = 110;
  int categoryThree = 129;
  int categoryFour = 156;

  char inputSpeed[11];
  int windSpeed;

  printf("Enter the wind speed: ");
  scanf("%s", inputSpeed);
  windSpeed = atoi(inputSpeed);

  if (windSpeed >= minimumWindSpeed) {

    if (windSpeed > categoryFour) {
      printf("\nCategory Five Hurricane.");
    }
    else if (windSpeed > categoryThree) {
      printf("\nCategory Four Hurricane.");
    }
    else if (windSpeed > categoryTwo) {
      printf("\nCategory Three Hurricane.");
    }
    else if (windSpeed > categoryOne) {
      printf("\nCategory Two Hurricane.");
    }
    else {
      printf("\nCategory One Hurricane.");
    }

  }

  else {
    printf("\nNot a hurricane.");
  }

  return 0;
}