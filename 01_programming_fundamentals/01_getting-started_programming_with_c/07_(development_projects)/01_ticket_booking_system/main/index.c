#include "../include/available_seats.h"
#include "../include/ticket.h"
#include <stdio.h>

int main() {

  int chose;
  printf("menu\n0.check available seats.\n1.pesan tiket.");
  scanf("%d", &chose);

  switch (chose) {
  case 0:
    available_seats();
    break;
  case 1:
    create_ticket();
    break;
  default:
    printf("invalid input");
  }

  return 0;
}
