using namespace std;
#ifndef HELLO_WORLD_VECTOR2_H 
#define HELLO_WORLD_VECTOR2_H


class Vector2{
public:
    double x, y;

    Vector2(); // конструктор - создает атрибуты
    Vector2(double x, double y);

    double len(); // это функция
    double getPhi();

    double getR();

    Vector2 operator+(const Vector2 & vector) const; // для сложения векторов, переопредление +

    void operator+=(const Vector2& vector);
    Vector2 operator*(const int ch) const;
    void operator*=(const int ch);
    Vector2 operator/(const int ch) const;
    void operator/=(const int ch);
    void operator-=(const Vector2& vector);
    Vector2 operator-(const Vector2& vector) const;
    bool operator==(const Vector2& vector) const;
    void norma();
    void povorot(double phi);
    void change_len(const int l);
    pair <double, double> polar();
    double skalar(const Vector2& vector) const;
    double ugol(const Vector2& vector) const;
    double cosoe(const Vector2& vector) const;
    double radtodeg();
private:
    double  R, phi; // нельзя менять
};

#endif //HELLO_WORLD_VECTOR2_H