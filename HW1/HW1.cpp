﻿// HW1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
#include <ctime>
#define _USE_MATH_DEFINES
#include <math.h>

double square_trapezoid(double a, double b, double h) {
    return (((a + b) / 2) * h);
}

double square_triangle(double a, double b) {
    return ((a * b) / 2);
}

double hypotenuse(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

double quadratic(double a, double b, double c) {
    double D, x1, x2;
    D = b * b - 4 * a * c; // Рассчитываем дискриминант
    if (D > 0) { // Условие при дискриминанте больше нуля
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        std::cout << "x1 = ";
        return x1;
        std::cout << "x2 = ";
        return x2;
    }
    if (D == 0) { // Условие для дискриминанта равного нулю
        x1 = -(b / (2 * a));
        std::cout << "x = ";
        return x1;
    }
    else {
        std::cout << "There is no solution" << std::endl;
        std::cout << "Diskriminant = ";
        return D;
    }
}

int day(int sec) {
    sec--;//избавляемся от “идущей” незавершившейся секунды
    int hours, min;
    hours = (int)(sec / 3600); // количество полных часов
    min = (int)(sec % 3600) / 60; // количество полных минут
    std::cout << "It is " << hours << " hours " << min << " minutes."<< std::endl;
    return 0;
}

float cost_purchase(double a) {
    if (a > 1000) {
        double x;
        x = a - ((a * 10) / 100);
        std::cout << "Cost of purchase (including 10% discount): "<< x << std::endl;
        return 0;
    }
    else {
        std::cout << "Cost of purchase: "<< a << std::endl;
        return 0;
    }
}

int month_year(int mounth) {
    if (mounth == 1){
        std::cout << "Winter" << std::endl;
        std::cout << "January" << std::endl;
    }
    else if (mounth == 2) {
        std::cout << "Winter" << std::endl;
        std::cout << "February" << std::endl;
    }
    else if (mounth == 12) {
        std::cout << "Winter" << std::endl;
        std::cout << "December" << std::endl;
    }
    else if (mounth == 3) {
        std::cout << "Spring" << std::endl;
        std::cout << "March" << std::endl;
    }
    else if (mounth == 4) {
        std::cout << "Spring" << std::endl;
        std::cout << "April" << std::endl;
    }
    else if (mounth == 5) {
        std::cout << "Spring" << std::endl;
        std::cout << "May" << std::endl;
    }
    else if (mounth == 6) {
        std::cout << "Summer" << std::endl;
        std::cout << "June " << std::endl;
    }
    else if (mounth == 7) {
        std::cout << "Summer" << std::endl;
        std::cout << "July" << std::endl;
    }
    else if (mounth == 8) {
        std::cout << "Summer" << std::endl;
        std::cout << "August" << std::endl;
    }
    else if (mounth == 9) {
        std::cout << "Autumn" << std::endl;
        std::cout << "September" << std::endl;
    }
    else if (mounth == 10) {
        std::cout << "Autumn" << std::endl;
        std::cout << "October " << std::endl;
    }
    else if (mounth == 11) {
        std::cout << "Autumn" << std::endl;
        std::cout << "November" << std::endl;
    }
    else{
        std::cout << "Enter a number from 1 to 12;) " << std::endl;
        return 0;
    }
}

int lacky_number(int part1, int part2) {
    int sum1 = 0, sum2 = 0;
    while (part1 != 0) { //пока число не кончилось
        sum1 += part1 % 10;
        part1 /= 10;
    }
    while (part2 != 0) { //пока число не кончилось
        sum2 += part2 % 10;
        part2 /= 10;
    }
    if (sum1 == sum2) {
        std::cout << "Lucky ticket" << std::endl;
    }
    else {
        std::cout << "Unluky" << std::endl;
    }
    return 0;
}

int penny(int number) {
    int x;
    x = number % 10;//смотрим последнюю цифру
    if (x >= 5 && x <= 9 || x == 0 || number == 11) {
        std::cout << number << " копеек" << std::endl;
    }
    else if (x == 1) {
        std::cout << number << " копейка" << std::endl;
    }
    else if (x >= 2 && x <= 4) {
        std::cout << number << " копейки" << std::endl;
    }
    return 0;
}

int threedigit_number(int number){
    int e, d, s, product;
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    product = e * d * s;
    if (product > number) {
        std::cout << "Произведение цифр числа больше самого числа" << std::endl;
    }
    else if (product == number) {
        std::cout << "Произведение цифр числа равно числу" << std::endl;
    }
    else{
        std::cout << "Произведение цифр числа меньше самого числа" << std::endl;
    }
    return 0;
}
int multiplicity_number(int number) {
    int e, d, s, sum;
    e = number % 10; // единицы 
    d = (number / 10) % 10; // десятки 
    s = number / 100; // сотни 
    sum = e + d + s;
    if (sum % 7 == 0) {
        std::cout << "Сумма цифр числа кратна 7" << std::endl;
    }
    else {
        std::cout << "Сумма цифр числа НЕ кратна 7" << std::endl;
    }
    return 0;
}

double CartesianToPolar(double x, double y) {
    double radius = sqrt((x * x) + (y * y));
    double angle = atan2(y, x);
    std::cout << "Полярный радиус"<< radius << std::endl;
    std::cout << "Полярный угол" << angle << "(радиан)" << std::endl;
    return radius, angle;

}
int Generation(int a, int b, int c) {
    std::cout << ((a * b == c) ? "correct" : "wrong") << std::endl;
    return 0;
}

/*Task2*/
int circle_length(double r) {
    double C = 0;
    double pi = M_PI;
    C = 2 * pi * r;
    return C;
}
int circle_square(double r) {
    double S = 0;
    double pi = M_PI;
    S = pi * pow(r, 2);
    return S;
}

/*Task4*/
int sum_of_digits(int number) {
    int i = 0;
    int sum = 0;
    for (i = 1; i <= 4; i++) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

/*Task6*/
double convert(double x, double y) {
    int x1 = 0;
    int y1 = 0;
    x1 = x * cos(y);
    y1 = x * sin(y);

    std::cout << "Cartesian x: " << x1 << std::endl;
    std::cout << "Cartesian y: " << y1 << std::endl;
    return 0;
}

/*Task8*/
double find_medians(double a, double b, double c) {
    double med1 = 0.;
    double med2 = 0.;
    double med3 = 0.;
    double med4 = 0.;
    double med5 = 0.;
    double med6 = 0.;
    if (a < b + c || b < a + c || c < a + b) {
        med1 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
        med2 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
        med3 = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
        med4 = 0.5 * sqrt(2 * pow(med1, 2) + 2 * pow(med2, 2) - pow(med3, 2));
        med5 = 0.5 * sqrt(2 * pow(med1, 2) + 2 * pow(med3, 2) - pow(med2, 2));
        med6 = 0.5 * sqrt(2 * pow(med2, 2) + 2 * pow(med3, 2) - pow(med1, 2));
        std::cout << "Median 1: " << med4 << std::endl;
        std::cout << "Median 2: " << med5 << std::endl;
        std::cout << "Median 3: " << med6 << std::endl;
    }
    else {
        std::cout << "Enter correct sides of a triangle" << std::endl;
    }
    return 0;
}

/*Task10*/
double identify_triangle(double a1, double b1, double c1) {
    if (a1 < b1 + c1 || b1 < a1 + c1 || c1 < a1 + b1) {
        if (a1 == b1 || a1 == c1 || b1 == c1) {
            std::cout << "Isosceles triangle" << std::endl;
        }
        else {
            std::cout << "Not isosceles triangle" << std::endl;
        }
    }
    else {
        std::cout << "Enter correct sides of a triangle" << std::endl;
    }
    return 0;
}

/*Task12*/
double recommend(double height, double weight) {
    double idealWeight = 0;
    idealWeight = height - 100;
    if (weight < idealWeight) {
        std::cout << "You need to gain weight" << std::endl;
    }
    if (weight > idealWeight) {
        std::cout << "You need to loose weight" << std::endl;
    }
    if (weight == idealWeight) {
        std::cout << "You weight is ideal" << std::endl;
    }
    return 0;
}

/*Task14*/
int cost_of_calls(int time, int day) {
    int costPerMin = 0;
    int cost = 0;
    std::cout << "Enter cost per minute: ";
    std::cin >> costPerMin;
    if (day > 7) {
        std::cout << "Enter correct day of week" << std::endl;
    }
    if (day < 6) {
        cost = time * costPerMin;
    }
    else {
        cost = time * costPerMin * 0.8;
    }
    return cost;
}

/*Task16*/
int identify_number(int number) {
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
    if (number < 100000 || number > 999999) {
        std::cout << "Enter 6-digit number" << std::endl;
    }
    a1 = number / 100000;
    a2 = (number / 10000) % 10;
    a3 = (number / 1000) % 10;
    a4 = (number / 100) % 10;
    a5 = (number / 10) % 10;
    a6 = number % 10;

    if (a1 + a2 + a3 == a4 + a5 + a6) {
        std::cout << "Number is happy" << std::endl;
    }
    else {
        std::cout << "Number is unhappy" << std::endl;
    }
    return 0;
}

/*Task18*/
int check_number(int number) {
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    if (number < 1000 || number > 9999) {
        std::cout << "Enter 4-digit number" << std::endl;
    }
    a1 = number / 1000;
    a2 = (number / 100) % 10;
    a3 = (number / 10) % 10;
    a4 = number % 10;

    if (a1 == a4 and a2 == a3) {
        std::cout << "Number is a polidrom" << std::endl;
    }
    else {
        std::cout << "Number is not a polidrom" << std::endl;
    }
    return 0;
}

/*Task20*/
int check_rectangles(int a, int b, int c, int d) {
    if (a < c && b < d || a < d && b < c) {
        std::cout << "Rectangle AB can be placed in CD" << std::endl;
    }
    else {
        std::cout << "Rectangle AB cannot be placed in CD" << std::endl;
    }
    return 0;
}



int main(){
    setlocale(LC_ALL, "Russian");
    /*Task1*/
    std::cout << "*Task1*/" << std::endl;
    double b1; // инициализируем исходные данные тип double
    double b2;
    double h;
    std::cout << " Enter footing1, footing2, height" << std::endl;
    std::cin >> b1 >> b2 >> h; // вводим стороны и высоту
    std::cout << "Square" << square_trapezoid(b1, b2, h) << std::endl;

    /*Task3*/
    double cathet1, cathet2;
    std::cout << "*Task3*/" << std::endl;
    std::cout << "Cathet1, Cathet2" << std::endl;
    std::cin >> cathet1 >> cathet2 ;
    std::cout << "square" << square_triangle(cathet1, cathet2) << std::endl;
    std::cout << "hypotenuse" << hypotenuse(cathet1, cathet2) << std::endl;
    
    /*Task5*/
    std::cout << "*Task5*/" << std::endl;
    double x, y;
    std::cout << "Введи X, Y (декартовые)" << std::endl;
    std::cin >> x >> y;
    CartesianToPolar(x, y);

    /*Task7*/
    std::cout << "*Task7*/" << std::endl;
    double a, b, c; // Объявляем переменные с плавающей точкой
    std::cout << "Enter a" << std::endl; // Вводим исходные данные
    std::cin >> a;
    std::cout << "Enter b" << std::endl; // Вводим исходные данные
    std::cin >> b;
    std::cout << "Enter c" << std::endl; // Вводим исходные данные
    std::cin >> c;
    std::cout << "The equation: " << a << "x^2" << "+(" << b << ")" << "x" << "+(" << c << ")" << "=0" << std::endl;
    std::cout << quadratic(a, b, c) << std::endl;
    
    /*Task9*/
    std::cout << "*Task9*/" << std::endl;
    int k;
    std::cout << "Enter the second of the day " << std::endl; // Вводим исходные данные
    std::cin >> k;
    day(k);

    /*Task11*/
    std::cout << "*Task11*/" << std::endl;
    double cost;
    std::cout << "Enter cost of purchase " << std::endl; // Вводим исходные данные
    std::cin >> cost;
    cost_purchase(cost);

    /*Task13*/
    std::cout << "*Task13*/" << std::endl;
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int n1, n2, composition;
    n1 = rand() % 10; // генерируем число и берем последнюю цифру
    n2 = rand() % 10; // генерируем число и берем последнюю цифру
    std::cout << n1 << std::endl; //выводим в консоль
    std::cout << n2 << std::endl;
    std::cout << "Введи произведение данных чисел" << std::endl; 
    std::cin >> composition; //ввод произведения с консоли
    Generation(n1, n2, composition);

    /*Task15*/
    std::cout << "*Task15*/" << std::endl;
    int month;
    std::cout << "Enter the mounth number: " << std::endl; // Вводим исходные данные
    std::cin >> month;
    month_year(month);

    /*Task16*/
    std::cout << "*Task16*/" << std::endl;
    int part1, part2 ;
    std::cout << "Enter number XXX XXX: " << std::endl; // Вводим исходные данные
    std::cin >> part1 >> part2;
    lacky_number(part1, part2);

    /*Task17*/
    std::cout << "*Task17*/" << std::endl;
    int number;
    std::cout << "Enter number  from 1 to 99: " << std::endl; // Вводим исходные данные
    std::cin >> number;
    penny(number);

    /*Task19*/
    std::cout << "*Task19*/" << std::endl;
    int n;
    std::cout << "Введи трехзначное число: " << std::endl; // Вводим исходные данные
    std::cin >> n;
    multiplicity_number(n);
    threedigit_number(n);

    /*Task2*/
    double r = 0;
    double pi = M_PI;
    std::cout << "/*Task2*/" << std::endl;
    std::cout << "Radius: ";
    std::cin >> r;
    std::cout << "Length of circle: " << circle_length(r) << std::endl;
    std::cout << "Square of circle: " << circle_square(r) << std::endl;
    std::cout << "" << std::endl;

    /*Task4*/
    int number = 0;
    std::cout << "/*Task4*/" << std::endl;
    std::cout << "Input 4-digit number: ";
    std::cin >> number;
    std::cout << "Summ of digits: " << sum_of_digits(number) << std::endl;
    std::cout << "" << std::endl;

    /*Task6*/
    double x = 0.;
    double y = 0.;
    std::cout << "/*Task6*/" << std::endl;
    std::cout << "Input polar cordinates: ";
    std::cin >> x >> y;
    convert(x, y);
    std::cout << "" << std::endl;

    /*Task8*/
    double a = 0.;
    double b = 0.;
    double c = 0.;
    std::cout << "/*Task8*/" << std::endl;
    std::cout << "Enter sides of triangle: ";
    std::cin >> a >> b >> c;
    find_medians(a, b, c);
    std::cout << "" << std::endl;

    /*Task10*/
    double a1 = 0.;
    double b1 = 0.;
    double c1 = 0.;
    std::cout << "/*Task10*/" << std::endl;
    std::cout << "Enter sides of triangle: ";
    std::cin >> a1 >> b1 >> c1;
    identify_triangle(a1, b1, c1);
    std::cout << "" << std::endl;

    /*Task12*/
    double height = 0.;
    double weight = 0.;
    std::cout << "/*Task12*/" << std::endl;
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << "Enter weight: ";
    std::cin >> weight;
    recommend(height, weight);
    std::cout << "" << std::endl;

    /*Task14*/
    int time = 0;
    int day = 0;
    std::cout << "/*Task14*/" << std::endl;
    std::cout << "Enter time: ";
    std::cin >> time;
    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Cost of your call: " << cost_of_calls(time, day) << std::endl;
    std::cout << "" << std::endl;


    /*Task16*/
    int number1 = 0;
    std::cout << "/*Task16*/" << std::endl;
    std::cout << "Enter 6-digit number: ";
    std::cin >> number1;
    identify_number(number1);
    std::cout << "" << std::endl;

    /*Task18*/
    int number2 = 0;
    std::cout << "/*Task18*/" << std::endl;
    std::cout << "Enter 4-digit number: ";
    std::cin >> number2;
    check_number(number2);
    std::cout << "" << std::endl;

    /*Task20*/
    double a2 = 0.;
    double b2 = 0.;
    double c2 = 0.;
    double d2 = 0.;
    std::cout << "/*Task20*/" << std::endl;
    std::cout << "Enter sides of smaller rectangle: ";
    std::cin >> a2 >> b2;
    std::cout << "Enter sides of bigger rectangle: ";
    std::cin >> c2 >> d2;
    check_rectangles(a2, b2, c2, d2);

    return 0;

}








    