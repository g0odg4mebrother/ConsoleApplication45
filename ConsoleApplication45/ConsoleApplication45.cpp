#include <iostream>
#include <string>

using namespace std;  

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    Student() : name(""), age(0), gpa(0.0f) {}

    Student(const string& n, int a, float g) : name(n), age(a), gpa(g) {}

    ~Student() = default;

    const string& getName() const { return name; }
    int getAge() const { return age; }
    float getGPA() const { return gpa; }

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setGPA(float g) { gpa = g; }
};

class Point {
private:
    double x;
    double y;

public:
    Point() : x(0.0), y(0.0) {}

    Point(double _x, double _y) : x(_x), y(_y) {}

    ~Point() = default;

    double getX() const { return x; }
    double getY() const { return y; }

    void setX(double _x) { x = _x; }
    void setY(double _y) { y = _y; }
};

class Car {
private:
    string model;
    int year;
    double price;

public:
    Car() : model(""), year(0), price(0.0) {}

    Car(const string& m, int y, double p) : model(m), year(y), price(p) {}

    ~Car() = default;

    // Геттеры
    const string& getModel() const { return model; }
    int getYear() const { return year; }
    double getPrice() const { return price; }

    void setModel(const string& m) { model = m; }
    void setYear(int y) { year = y; }
    void setPrice(double p) { price = p; }
};

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int den) : numerator(num), denominator(den) {}

    ~Fraction() = default;

    int getNumerator() const { 
        return numerator; 
    }
    int getDenominator() const { 
        return denominator; 
    }

    void setNumerator(int num) { 
        numerator = num; 
    }
    void setDenominator(int den) {
        if (den == 0) {
            throw invalid_argument("Деноминатор не может быть равен нулю");
        }
        denominator = den;
    }

    void simplify();
};

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() : width(0.0), height(0.0) {}

    Rectangle(double w, double h) : width(w), height(h) {}

    ~Rectangle() = default;

    double getWidth() const {
        return width;
    }
    double getHeight() const {
        return height;
    }

    void setWidth(double w)
    { width = w; 
    }
    void setHeight(double h)
    { height = h;
    }

    double area() const {
        return width * height; 
    }
    double perimeter() const { 
        return 2 * (width + height); 
    }
};

int main() {

    setlocale(LC_ALL, "");

    Student student("Иван Иванов", 20, 4.8);
    Point point(10.5, 15.7);
    Car car("Toyota", 2019, 15000.99);
    Fraction fraction(3, 4);
    Rectangle rectangle(6.0, 4.0);

    cout << "Имя студента: " << student.getName() << endl;
    cout << "Координата X точки: " << point.getX() << endl;
    cout << "Модель машины: " << car.getModel() << endl;
    cout << "Числитель дроби: " << fraction.getNumerator() << endl;
    cout << "Площадь прямоугольника: " << rectangle.area() << endl;

    student.setName("Петр Петров");
    point.setX(12.3);
    car.setPrice(20000.50);
    fraction.setNumerator(5);
    rectangle.setWidth(8.0);

    cout << "Новое имя студента: " << student.getName() << endl;
    cout << "Новая координата X точки: " << point.getX() << endl;
    cout << "Новая цена машины: " << car.getPrice() << endl;
    cout << "Новый числитель дроби: " << fraction.getNumerator() << endl;
    cout << "Новая площадь прямоугольника: " << rectangle.area() << endl;

    return 0;
}
