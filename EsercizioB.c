 #include <stdio.h>



int genera_id() {
    static int contatore = 0; // mantiene il valore tra le chiamate
    contatore++;
    return contatore;
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("ID generato: %d\n", genera_id());
    }
    return 0;
}