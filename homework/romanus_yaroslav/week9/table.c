#include <stdio.h>
#include <cstring>
#include <math.h>


int main(){
    char text[10000];
    printf("Input your text: ");
    scanf("%[^\n]", text);
    int length;
    length = strlen(text);
    int num_char=0;
    char space = ' ';
    for (int i=0; i<length; i++){
        if (text[i] != space){
            num_char++;
        }
    }
    printf("Characters total: %d\n", num_char);
    int rows = sqrt(num_char);
    int columns = rows;
    if (rows*columns < num_char){
        columns++;
        if (rows*columns < num_char){
            rows++;
        }
    }
    printf("Rows: %d\n", rows);
    printf("Columns: %d\n\n", columns);
    int count = 0;
    bool t = true;
    for(int i=0; i<length;i++){
        if (text[i] != space){
            printf("%c", text[i]);
            count++;
            t=true;
        }
        if (count % columns == 0 and t){
            printf("\n");
            t = false;
        }
    }
    printf("\n");
}