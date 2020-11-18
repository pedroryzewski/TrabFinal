#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_opt.h"
#include "array.h"
#include "sort.h"
#include "old_main.h"

int sort(int argc, char **argv, int *vet) {
    int i, method, size, array_type, print_vector = 0;

/*  if(!check_opt(argc)){
        fprintf(stderr,"Not enough parameters\n");
        fprintf(stderr,"Expected: -a SORTTYPE -n ARRAYSIZE -s ARRAYSTATE [-P]\n");
        fprintf(stderr,"Please read the doc.\n");
        return 1;
    }

    get_opt(argc, argv, &method, &size, &array_type, &print_vector);
*/

    if(argc < 7 || argc > 8)
    {   
        fprintf(stderr, "Not enough parameters\n");
        return 1;
    }

    method = get_sort_method(argv[2]);
    size = get_array_size(argv[4]);
    array_type = get_array_type(argv[6]);

    if (argc==8)
        if(strcmp(argv[7],"-P")==0)
            print_vector = 1;
    
    // Create the vector with the specified size and situation
    // int *vet = generate_array(size, array_type);

    if(!vet){
        fprintf(stderr,"Memory allocation failed.\n");
        return 1;
    }

    method = get_sort_method(argv[2]);
    size = get_array_size(argv[4]);
    array_type = get_array_type(argv[6]);

    int *vet_aux = (int*)malloc(sizeof(int)*size);
    // Create a copy of the vector to print it berfore and after it is sorted in case this option is enabled
    for(i=0; i<size; i++){
        vet_aux[i] = vet[i];
    }
    // Sort the array
    sort_array(vet, size, method);
    
    if(print_vector){
        printf("\n-- Analysis --\n");
        printf("Sorting algorithm: %s\n", get_method_name(method));
        printf("Array type: %s\n", get_array_type_name(array_type));
        printf("Array size: %d\n", size);
        printf("Original: ");
        for(i=0; i<size; i++){
            printf("%d ", vet_aux[i]);
        }
        printf("\nSorted: ");
        for(i=0; i<size; i++){
            printf("%d ", vet[i]);
        }
        printf("\nTime elapsed: %f s\n", get_elapsed_time());
    }
    //free(vet);
    free(vet_aux);
    //printf("\n\n");
    return 0;
}
