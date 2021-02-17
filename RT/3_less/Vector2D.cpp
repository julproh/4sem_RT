#include "Vector2D.h"
#include <iostream>

void Vector2D::set_x(double x)
{
    this->x = x;
}

void Vector2D::set_y(double y)
{
    this->y = y;
}

double Vector2D::get_x()
{
    return x;
}

double Vector2D::get_y()
{
    return y;
}

Vector2D::Vector2D()
{
    x = 0;
    y = 0;
}

Vector2D::Vector2D(double number)
{
    x = number;
    y = number;
}

Vector2D::Vector2D(double x, double y)
{
    this->x = x;
    this->y = y;
}

Vector2D::~Vector2D()
{
    
}

Vector2D* Vector2D::operator*(double a)
{
    Vector2D* newVector = new Vector2D(a * this->get_x(), a * this->get_y());
    return newVector;
}

double Vector2D::operator*(Vector2D* a)
{
    return this->get_x() * a->get_x() + this->get_y() * a->get_y(); 
}

Vector2D* Vector2D::operator+(Vector2D* a)
{
    Vector2D* newVector = new Vector2D(this->get_x() + a->get_x(), this->get_y() + a->get_y());
    return newVector;
}

Vector2D* Vector2D::operator-(Vector2D* a)
{
    Vector2D* newVector = new Vector2D(this->get_x() - a->get_x(), this->get_y() - a->get_y());
    return newVector;
}

Vector2D* Vector2D::operator/(double a)
{
    Vector2D* newVector = new Vector2D(this->get_x() / a, this->get_y() / a);
    return newVector;
}

Vector2D operator +(Vector2D &a, Vector2D &b) {
    Vector2D* newVector = new Vector2D(a.get_x() + b.get_x(), a.get_y() + b.get_y());
    return *newVector;
};

Vector2D operator * (double a, Vector2D &b) {
    Vector2D* newVector = new Vector2D(a * b.get_x(), a *  b.get_y());
    return *newVector;
}

Vector2D & operator ++ (Vector2D &A) {
    return *new Vector2D(A.get_x()+1, A.get_y()+1);
};

Vector2D & operator -- (Vector2D &A) {
    return *new Vector2D(A.get_x()+1, A.get_y()+1);
};

Vector2D & operator ++ (Vector2D &A, int a) {
    Vector2D Temp(A.get_x(), A.get_y());
    double x = A.get_x() + 1;
    double y = A.get_y() + 1;
    A.set_x(x);
    A.set_y(y);
    return Temp;
};

Vector2D & operator -- (Vector2D &A, int a) {
    Vector2D Temp(A.get_x(), A.get_y());
    double x = A.get_x() - 1;
    double y = A.get_y() - 1;
    A.set_x(x);
    A.set_y(y);
    return Temp;
};

std::ostream & operator << (std::ostream& out, Vector2D &a ) {
    out << a.get_x() << " " << a.get_y() << std::endl;
    return out;
}


std::istream & operator >> (std::istream& in, Vector2D &a ) {
    double x, y;
    in >> x  >> y;
    a.set_x(x);
    a.set_y(y);
    return in;
}

//Задание 

//vector 
/*
сделать b+=a; b =-a;
+, -, ++, *, v*N, N*v, V*V, ++, -- - префикс и постфикс, +=, -=, *=N
=, ==, !=, <, >, <=, >=, &&, ||, !, >>, <<, M*V
*/