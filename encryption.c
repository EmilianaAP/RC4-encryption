#include<stdio.h>
#include<stdlib.h>



int main(){
    FILE *file = fopen("input.txt", "r");

    char ch = getc(file);
    int counter = 0;

    while(ch != EOF){
        counter++;
        printf("%c", ch);
        ch = getc(file);
    }

    int num_blocks;

    if(counter/16 == 0){
        num_blocks = counter/16;
    }else{
        num_blocks = counter/16 + 1;
    }

    printf("\n\n%d", num_blocks);

    return 0;
}
