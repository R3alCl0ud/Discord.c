#include <stdio.h>
#include <stdbool.h>

typedef struct {
  char *username;
  char *discriminator;
  char *id;
  bool bot;
} user;

typedef struct {
  user User;
  char *token;
  char *email;
  char *password;
} clientUser;

typedef struct {
  char *id;
  int type;
} channel;
