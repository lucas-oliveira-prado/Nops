#include <iostream>
#include <string>
using namespace std;

int main() {
    string teste = "Lucas";
    teste.erase(0, 1);
    teste.erase(1);
    cout<<teste;
    return 0;
}