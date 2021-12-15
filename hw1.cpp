// Код написан на C++

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <string> 

using namespace std;
int main()
{
    system("chcp 1251"); system("cls");

    printf("Программу выполнил Жигалин Данил Вадимович, гр. 421-1\n\n");

    string pi = to_string(M_PI);

    for (int i = 0; i < pi.length(); i++) {
        if (pi[i] == '0' || pi[i] == '5') {
            pi.erase(i, 1);
        }
    }

    cout << pi;
}