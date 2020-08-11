#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc <= 1) return ThrowError();
    int max = 0;
    for(int i = 1; i < argc; ++i){
        int val = atoi(argv[i]);
        if(val > max) max = val;
    }
    printf("Max value is: %d", max);
    return max;
}

int ThrowError(){
    printf("Invalid Argument Count :(");
    return -1;
}