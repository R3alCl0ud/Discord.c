#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "Discord.h"

int main() {
  user me;
  me.username = "test";
  printf("%s\n", me.username);
  return 0;
}
