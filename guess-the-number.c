#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool guessed = false;
int mynum;

int main() {
  srand(time(NULL));
  int randnumber = rand() % 10;
  printf("Hello world!\n");
  printf("Guess a number from 1-10:\n");
  while (guessed == false) {
    scanf("%d", &mynum);
    if (mynum == randnumber) {
      printf("You guessed correctly!\n");
      guessed = true;
    } else {
      printf("You were wrong! Try again!\n");
    }
  }

}

