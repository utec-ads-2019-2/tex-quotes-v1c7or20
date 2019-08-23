#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    string cadena;
    int control=0;
    while (cin>>cadena){
        std::vector<char> cstr(cadena.c_str(), cadena.c_str() + cadena.size() + 1);
        for (int i = 0; i <= cadena.size(); i++) {
            if(cstr.at(i)== '"'){
                if (control%2==0){
                    cout<<"``";
                    control++;
                }else{
                    cout<<"''";
                    control++;
                }
            }else cout<<cstr.at(i);
        }
    }
    return 0;
}