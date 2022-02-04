#include "Aggregate.h"

///In case the input array is NULL 



int main()
{

    aggregates2 funcArr[5];
    funcArr[0] = min;
    funcArr[1] = max;
    funcArr[2] = sum;
    funcArr[3] = avg;
    funcArr[4] = pseudo_avg;

    const char* funcnames[] = { "FMIN", "FMAX", "FSUM" , "FAVG" , "FPSEUDO_AVG" };


    float arr2[] = {(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand()};
    float arr3[] = {(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand(),(float)rand()};
    float arr[] = {1, 4, 5, 6, -1};

     // float* arr[10] = {NULL}; //this a NULL array

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%f", aggregates[i](arr, 10));
    // }

    // for(int i = 0; i < 5; i++)
    // {
    //     float result = (*aggregates[i])(arr, 5);
    //     printf("%f \n", result);
    // }

    //using the typedef pointer arr func
    for(int i = 0; i < 5; i++)
    {
        float result = funcArr[i](arr, 5);
        printf("%s : %f \n", funcnames[i], result);
    }

//     float m = min(*arr, 5);
//     printf("%f", m); // -1.000000
//     return 0;
}

float min(float arr[], int size)
{

     if(arr == NULL)
     {
       printf ("FATAL ERROR: "
                "array is NULL "
                  "at %s, line %d.", __FILE__, __LINE__);

         printf("\nProgram is aborted");         

         exit(0);         
     }
    
    if(size < 0)
    {
        printf ("FATAL ERROR: "
                 "size is non-positive "
                 "%d at %s, line %d.", size, __FILE__, __LINE__);

        printf("\nProgram is aborted");  
        exit(0);          
    }

    float small = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
        }
    }

    return small;
}

float max(float arr[], int size)
{
    if(arr == NULL)
    {
        printf ("FATAL ERROR: "
                 "array is NULL "
                 "at %s, line %d.", __FILE__, __LINE__);

        printf("\nProgram is aborted");  
        exit(0);           
    }

    if(size < 0)
    {
        printf ("FATAL ERROR: "
                 "size is non-positive "
                 "%d at %s, line %d.", size, __FILE__, __LINE__);

        printf("\nProgram is aborted");  
        exit(0);           
    }

    float big = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > big)
        {
            big = arr[i];
        }
    }

    return big;
}

float sum(float arr[], int size)
{
     if(arr == NULL)
     {
         printf ("FATAL ERROR: "
                  "array is NULL "
                  "at %s, line %d.", __FILE__, __LINE__);

         printf("\nProgram is aborted");  
         exit(0);           
     }

    if(size < 0)
    {
        printf ("FATAL ERROR: "
                 "size is non-positive "
                 "%d at %s, line %d.", size, __FILE__, __LINE__);

        printf("\nProgram is aborted");  
        exit(0);           
    }

    float total = arr[0];
    for(int i = 1; i < size; i++)
    {
        total += arr[i];
    }

    return total;
}

float avg(float arr[], int size)
{

    return (sum(arr, size) / size);
}

float pseudo_avg(float arr[], int size)
{
    return (min(arr, size) + max(arr, size)) / 2;
}

