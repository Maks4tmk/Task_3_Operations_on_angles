// Задача 3. Операции над углами.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <functional>
#include <vector>
#include <math.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");

    double pi = 3.1415926;
    std::vector <double> angles{(30 * pi / 180), (60 * pi / 180), (90 * pi / 180) };

    std::cout << "[Входные данные]: ";
    for (double n : angles) {
        std::cout << n <<"; ";
    }
    std::cout << std::endl;

    auto get_sin = [](double angle) {
        std::cout << "\tsin: " << sin(angle) << "\t";
        };

    auto get_cos = [](double angle) {
        std::cout << "\tcos: " << cos(angle) << "\t";
        };

    std::vector<std::function<void(double)>> functions;
    functions.emplace_back(get_sin);
    functions.emplace_back(get_cos);


    std::cout << "[Выходные данные]:\n";
    for (const auto& angle : angles) {
        std::cout << angle << ": ";
        for (const auto& function : functions)
            function(angle);
        std::cout << std::endl;
    }
}