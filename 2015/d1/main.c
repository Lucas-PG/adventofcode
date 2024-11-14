#include <stdio.h>
#include <string.h>

int part1(char *input) {
  int floor = 0;
  for (int i = 0; i < strlen(input); i++) {
    if (input[i] == '(') {
      floor++;
    } else if (input[i] == ')') {
      floor--;
    }
  }

  return floor;
}

int part2(char *input) {}

int main(int argc, char *argv[]) {
  char buff[1024];
  FILE *fp = fopen("input.txt", "r");
  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }
  fgets(buff, 1024, fp);
  printf("Part 1: %d\n", part1(buff));
  return 0;
}
