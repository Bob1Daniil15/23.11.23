#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL,"RUS");
    // Пример использования вектора (vector)
    vector<int> numbers; // Создание вектора, хранящего целые числа
    numbers.push_back(1); // Добавление элемента в конец вектора
    numbers.push_back(2);
    numbers.push_back(3);

    cout << "Vector content: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Пример использования стека (stack)
    stack<string> names; // Создание стека, хранящего строки
    names.push("Боб"); // Добавление элемента в стек
    names.push("Даниил");

    cout << "Stack content: ";
    while (!names.empty()) {
        cout << names.top() << " "; // Вывод вершины стека
        names.pop(); // Удаление вершины стека
    }
    cout << endl;

    // Пример использования очереди (queue)
    queue<double> values; // Создание очереди, хранящей вещественные числа
    values.push(1.1); // Добавление элемента в конец очереди
    values.push(2.2);
    values.push(3.3);

    cout << "Queue content: ";
    while (!values.empty()) {
        cout << values.front() << " "; // Вывод первого элемента очереди
        values.pop(); // Удаление первого элемента очереди
    }
    cout << endl;

    // Пример использования множества (set)
    set<string> fruits; // Создание множества, хранящего строки
    fruits.insert("Яблоко"); // Добавление элемента в множество
    fruits.insert("Банан");
    fruits.insert("Апельсин");

    cout << "Set content: ";
    for (const string& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    // Пример использования словаря (map)
    map<string, int> ages; // Создание словаря, хранящего пары (строка, целое число)
    ages["Alice"] = 25; // Добавление элемента в словарь
    ages["Bob"] = 30;

    cout << "Map content: ";
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    return 0;
}