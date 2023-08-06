#include "../include/available_seats.h"
#include "../include/ticket.h"
#include <stdbool.h>
#include <stdio.h>

int main() {
  int loop = true;
  while (loop) {
    int chose;
    printf("\n\nmenu\n1.check available seats.\n2.order tickets.\n3.exit\n\n");
    scanf("%d", &chose);

    switch (chose) {
    case 1:
      available_seats();
      break;
    case 2:
      create_ticket();
      result_ticket();
      break;
    case 3:
      loop = !true;
      printf("\nexit");
      break;
    default:
      printf("\ninvalid input");
    }
  }
  return 0;
}
