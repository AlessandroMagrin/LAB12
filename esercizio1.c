#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int log_messaggio(const char* msg) {
    static int contatore=0;
    static int cont3 =0;
    static int start=0;
    if (start==0) {
        start=time(NULL);
    }
}


int main(void) {
    int numero=rand() % 100;
    for (int i=0; i<numero; i++) {
        log_messaggio("Ciao");
    }
    printf("Hello, World!\n");
    return 0;
}




