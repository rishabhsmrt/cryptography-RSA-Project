// program to initialise a number
// compile gcc -o pro1 pro1.c -lgmp
// run ./pro1
#include<stdio.h>
#include<gmp.h>

int main(){
    char s[1000];
    mpz_t n;
    int flag;
    printf("n= \n");
    scanf("%1000s", s);
    mpz_init(n);
    mpz_set_ui(n,0);

    flag=mpz_set_str(n, s, 10);
    mpz_out_str(stdout, 10, n);
}