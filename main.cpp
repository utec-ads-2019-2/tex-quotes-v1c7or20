#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    char cadena[100000];
    int control=0;
    while (gets(cadena)){
        for (int i = 0; i <=strlen(cadena); i++) {
            if(cadena[i] == '"'){
                if (control%2==0){
                    printf("``");
                    control++;
                }else{
                    printf("''");
                    control++;
                }
            }else
                printf("%c",cadena[i]);
        }printf("\n");
    }
    return 0;
}