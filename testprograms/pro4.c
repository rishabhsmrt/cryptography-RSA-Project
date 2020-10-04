// to generate a random numbers with seed
// compile gcc -o pro4 pro4.c -lgmp
// run ./pro4
#include<stdio.h>
#include<gmp.h>

void input(mpz_t n){
    mpz_init(n);
    mpz_set_ui(n,0);
    char s[1000];
    scanf("%1000s", s);
    mpz_set_str(n,s,10);
}
void initialise(mpz_t n){
    mpz_init(n);
    mpz_set_ui(n,0);
}
int main(){
    mpz_t n,r;
    input(n);
    initialise(r);
    gmp_randstate_t t;
    gmp_randinit_mt(t);
    for(int i=0;i<10;i++){
        mpz_urandomm(r,t,n);
        mpz_out_str(stdout,10,r);
        printf("\n");
    }
}