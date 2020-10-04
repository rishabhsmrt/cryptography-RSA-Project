// find the absolute value
#include<stdio.h>
#include<gmp.h>
void call(mpz_t n){
    mpz_init(n);
    mpz_set_ui(n,0);
}
int main(){
    mpz_t a,b,c;
    char s[1000],t[1000];
    scanf("%1000s %1000s",s,t);
    call(a);call(b);call(c);
    mpz_set_str(b, s, 10);
    mpz_set_str(c, t, 10);
    mpz_out_str(stdout, 10, b);
    printf("\n");
    mpz_out_str(stdout, 10, c);
    printf("\n");
    mpz_abs(b,c);
    mpz_out_str(stdout, 10, b);
    printf("\n");
}