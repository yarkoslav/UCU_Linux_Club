#include <stdio.h>


char* str_from_sum(int a, int b){
    int sum = a+b;
    char* convert;
    snprintf(convert, 10, "%d", sum);
    return convert;
}


int main(){
    int lenght1;
    printf("Input the length of the first array: ");
    scanf("%d", &lenght1);
    int array1[lenght1];
    for (int i=0; i<lenght1; i++){
        array1[i] = 0;
    }
    printf("Input the numbers: ");
    int num_of_input_numbers1;
    scanf("%d", &num_of_input_numbers1);
    for (int i=0; i< num_of_input_numbers1; i++){
        scanf("%d", &array1[i]);
    }
    printf("\n");
    int lenght2;
    printf("Input the length of the second array: ");
    scanf("%d", &lenght2);
    int array2[lenght2];
    for (int i=0; i<lenght2; i++){
        array2[i] = 0;
    }
    printf("Input the numbers: ");
    int num_of_input_numbers2;
    scanf("%d", &num_of_input_numbers2);
    for (int i=0; i< num_of_input_numbers2; i++){
        scanf("%d", &array2[i]);
    }
    int length;
    if (lenght1 == lenght2){
        length = lenght1;
    }
    char* sum;
    char array[1000];
    int count = 0;
    for (int i=0; i<length; i++){
        sum = str_from_sum(array1[i], array2[i]);
        int c = 0;
        while (sum[c] != '\0'){
            array[count] = sum[c];
            count++;
            c++;
        }
    }
    for (int i=0; i<count; i++){
        printf("%c ", array[i]);
    }
    printf("\n");
    return 0;
}