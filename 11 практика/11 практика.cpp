#include <iostream>

template<typename T>
int countOccurrences(T arr[], int size, const T& value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "Rus");
    int arr[] = { 1, 2, 3, 2, 4, 2, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int valueToFind = 2;
    int occurrences = countOccurrences(arr, size, valueToFind);
    if (occurrences!=0)
        std::cout << "Количество вхождений " << valueToFind << " = " << occurrences << std::endl;
    else
    {
        std::cout << "Такого символа нет" << std::endl;
    }

    char str[] = "Hello, World!";
    size_t strSize = sizeof(str) / sizeof(str[0]) - 1;
    char targetChar = 'o';
    int charOccurrences = countOccurrences(str, strSize, targetChar);
    if (charOccurrences!=0)
        std::cout << "Количество вхождений '" << targetChar << "' в строке: " << charOccurrences << std::endl;
    else
    {
    std::cout << "Такого символа нет" << std::endl;
    }
    return 0;
}