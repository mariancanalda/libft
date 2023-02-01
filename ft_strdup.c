#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s1) {
  int len = strlen(s1);
  char *result = (char*)malloc((len + 1) * sizeof(char));
  if (result == NULL)
    return NULL;
  for (int i = 0; i <= len; i++)
    result[i] = s1[i];
  return result;
}

int main(void) {
  const char *s1 = "Hello World";
  char *result = ft_strdup(s1);
  if (result == NULL) {
    printf("Error\n");
    return 1;
  }
  printf("%s\n", result);
  free(result);
  return 0;
}