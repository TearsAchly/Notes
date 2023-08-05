#include "../include/ticket.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char name[50];
  int uniq_number;
  int seats;
} ticket;

ticket generate_ticket;

void create_ticket() {
  printf("masukan nama : ");
  scanf("%s", generate_ticket.name);

  generate_ticket.uniq_number = rand();
  printf("nomor tiket : %d\n", generate_ticket.uniq_number);

  printf("pilih kursi : ");
  scanf("%d", &generate_ticket.seats);
};
