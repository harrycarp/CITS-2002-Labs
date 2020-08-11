#include <stdio.h>
void main(int argc, char *argv[]) {

    char card_str[15] = "349077011123948";
    int card_len = strlen(card_str);
    printf("%d card number: %s \n", card_len, card_str);

    int odd_sum = 0;
    int even_sum = 0;
    for(int i = card_len; i >= 0; --i){
        if(i % 2 == 0){
            odd_sum += card_str[i] - '0';
            printf("odd list: %c\n", card_str[i]);
        } else {
            even_sum += card_str[i] - '0';
            printf("even list: %c\n", card_str[i]);
        }
    }

    printf("Odd Sum: %d \n Even Sum: %d", odd_sum, even_sum);

}
