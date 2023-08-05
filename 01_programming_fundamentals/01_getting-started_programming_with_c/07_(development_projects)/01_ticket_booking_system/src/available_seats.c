#include "../include/available_seats.h"
#include <stdio.h>

int arrays_available_seats[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int total_seat =
    sizeof(arrays_available_seats) / sizeof(arrays_available_seats[0]);

void available_seats() {
  printf("Available Seats = ");
  for (int index_seats = 1; index_seats <= total_seat; index_seats++) {
    printf("[%d] ", index_seats);
  }
}
