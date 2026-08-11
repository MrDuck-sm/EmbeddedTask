#include"header.h"
void rotation(uint8_t number,uint8_t rotation_number){
    uint8_t rotated_number=0;
    rotated_number=(number<<rotation_number)|number;
    printf("left : %hhd\n",rotated_number);
    rotated_number=(number>>rotation_number)|number;
    printf("right : %hhd",rotated_number);
}