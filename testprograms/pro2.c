// program to assigmment and increment value by 1
#include<stdio.h>
#include<gmp.h>

int main(){
    mpz_t n, z;
    char s[1000];
    scanf("%1000s", s);
    mpz_init(n);
    mpz_init(z);
    mpz_set_ui(n,0);
    mpz_set_ui(z,0);
    int f;
    f=mpz_set_str(n, s, 10);
    mpz_add_ui(z, n, 1);
    mpz_out_str(stdout, 10, z); 
}