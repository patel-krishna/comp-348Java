#include <stdio.h>
#include <stdlib.h> //to exit the program

//typedef float* aggregates2;
typedef float (*aggregates2)(float[], int);



float min(float arr[], int size);

float max(float arr[], int size);

float sum(float arr[], int size);

float avg(float arr[], int size);

float pseudo_avg(float arr[], int size);

float (*aggregates[5])(float[], int) = { &min, &max, &sum, &avg, &pseudo_avg };

