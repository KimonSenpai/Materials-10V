#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int m[5] = {1, 2, 3};

    for(int i = 0; i < 5; i++)
        cout << m[i] << '\t';
    cout << '\n';


    int* mas = new int[20]{1, 2, 3};
    for(int i = 0; i < 10; i++)
        cout << mas[i] << '\t';
    cout << '\n';


    char str[20] = "qwerty";
    cin >> str;
    cout << str << '\n';
    cout << "Hello world!\n";
    cout << "Hello\0world!\n";
    cout << '\n';
    cout << 1 << '\t' << 2 << '\n'
         << 100 << '\t' << 200 << '\n';

    cout << "Hello\rwor\n";
    cout << "Hello\bworld!\n";
    //  "\\" - \
    // "\"" - "
    int l = 0;
    while(str[l] != '\0')
        l++;
    cout << "\n----------------------------\n\n";
    cout << strlen(str) << ' ' << l << '\n';//длина строки
    strcat(str, "ab");//конкатенация
    cout << str << '\n';
    strcpy(str, "hi");//copy
    cout << str << '\n';
    cout << strcmp(str, "ab") << '\n'; // str - "ab"
}