////////////////////////////////////////////////////////////////////////////////
//
//  Задание по программированию: Работа с файлами
//    В этом задании вам предстоит написать две небольшие программы.
//    Каждый пункт - отдельная задача, решение отправляйте в поле с
//    соответствующим номером.
//
//  Часть 1
//    Ваша программа должна считать содержимое файла input.txt и напечатать
//    его на экран без изменений. Гарантируется, что содержимое файла
//    input.txt заканчивается переводом строки.
//
//    Пример
//     input.txt
//       Kepp calm
//       and
//       learn C++
//
//     stdout
//       Kepp calm
//       and
//       learn C++
//  Часть 2
//    Снова считайте все содержимое файла input.txt, но на этот раз
//    выведите его в файл output.txt. Точно так же гарантируется, что
//    содержимое файла input.txt заканчивается переводом строки.
//
//    Пример
//      input.txt
//        Kepp calm
//        and
//        learn C++
//
//      output.txt
//        Kepp calm
//        and
//        learn C++
//
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ifstream input("input.txt");

    string line;
    if (input.is_open()) {
        while (getline(input, line))
            cout << line << endl;
    }

    return 0;
}

