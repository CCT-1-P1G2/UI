//generate .h file for data_display.c
#ifndef DATA_DISPLAY_H
#define DATA_DISPLAY_H

#include <stdbool.h>

void draw_graph(int size, float *data, float max_val, float threshold);
void print_rating(float data, int threshold);
void print_data(float data[]);

#endif
