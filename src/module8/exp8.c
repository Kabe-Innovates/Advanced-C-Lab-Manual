#include <stdio.h>

struct StringStruct{
    char str[10];
};

int main(void){
    int size;
    scanf("%d", &size);
    struct StringStruct inp[size];
    for(int i = 0 ; i < size ; i++)
        scanf("%s", inp[i].str);
    printf("%d Combinations are \n", size);
    if(size % 2 == 0){
        for(int i = 0 ; i < size ; i++){
            for(int j = 0 ; j < size ; j++){
                if(i != j)
                    printf("%s %s ", inp[i].str, inp[j].str);
            }
            printf("\n");
        }
    }
    if(size % 2 != 0){
        for(int i = 0 ; i < size ; i++){
            for(int j = 0 ; j < size ; j++){
                if(i != j){
                    for(int k = 0 ; k < size ; k++)
                        if(i != k && j != k)
                            printf("%s %s %s\n", inp[i].str, inp[j].str, inp[k].str);
                }
            }
        }
    }
    return 0;
}
