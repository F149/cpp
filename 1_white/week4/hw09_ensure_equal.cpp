////////////////////////////////////////////////////////////////////////////////
//
// Тренировочное задание по программированию: Функция EnsureEqual
// Напишите функцию
//   void EnsureEqual(const string& left, const string& right);
//
//  В случае, если строка left не равна строке right, функция должна
//  выбрасывать исключение runtime_error с содержанием " != ", где
//  и - строки, которые хранятся в переменных left и right соответственно.
//
//   Если left == right, функция должна корректно завершаться.
//
// Например, код
//  int main() {
//    try {
//      EnsureEqual("C++ White", "C++ White");
//      EnsureEqual("C++ White", "C++ Yellow");
//    } catch (runtime_error& e) {
//      cout << e.what() << endl;
//    }
//    return 0;
//   }
//
// Должен выводить
//   C++ White != C++ Yellow
//
////////////////////////////////////////////////////////////////////////////////



