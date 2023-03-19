#include <stdio.h>
#include <string.h>

int main() {

  char row1[] = "|             ><>              |";
  char row2[] = "|                              |";
  char row3[] = "|                              |";
  char row4[] = "|        <><                   |";
  char row5[] = "|                              |";
  char row6[] = "|      <><      ><>            |";
  char row7[] = "|                              |";
  char row8[] = "|             <><              |";
  char row9[] = "|                              |";
  char row10[] = "|     |\\   o                   |";
  char row11[] = "|     |  \\     o               |";
  char row12[] = "|  |\\/    .\\  o                |";
  char row13[] = "|  | |       (                 |";
  char row14[] = "|  |/ \\     /                  |";
  char row15[] = "|      |  /                    |";
  char row16[] = "|      |/                      |";
  char row17[] = "|                              |";
  char row18[] = "|                              |";
  char row19[] = "|                              |";
  char row20[] = "|______________________________|";

  char newTank[20][33] = {""};

  for (int i = 0; i < 21; i++) {
    strcpy(newTank[i], "|                              |");
    puts(newTank[i]);
  }

  strcpy(newTank[19], "|______________________________|");
  puts(newTank[19]);

  return 0;
}
