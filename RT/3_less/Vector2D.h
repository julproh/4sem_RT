class Vector2D
{
private:
    double x, y;
public:
    Vector2D();
    Vector2D(double);
    Vector2D(double, double);
    ~Vector2D();
    void set_x(double);
    void set_y(double);
    double get_x();
    double get_y();
    Vector2D* operator*(double);
    double operator*(Vector2D*);
    Vector2D* operator+(Vector2D*);
    friend Vector2D operator+ (Vector2D &, Vector2D &);
    friend Vector2D operator*  (Vector2D &);
    friend Vector2D & operator ++(Vector2D &A);
    friend Vector2D & operator ++(Vector2D &A, int);
    friend Vector2D & operator -- (Vector2D &A);
    friend Vector2D & operator -- (Vector2D &A, int a);
    friend std::ostream operator << (std::ostream &out, const Vector2D &a );
    friend std::istream & operator >> (std::istream& in, Vector2D &a );
    Vector2D* operator-(Vector2D*);
    Vector2D* operator/(double a);

};

Vector2D operator + (Vector2D &, Vector2D &);
Vector2D operator *  (double, Vector2D &);
Vector2D & operator ++(Vector2D &A);
Vector2D & operator ++(Vector2D &A, int);
Vector2D & operator -- (Vector2D &A);
Vector2D & operator -- (Vector2D &A, int a);
std::ostream operator << (std::ostream &out, const Vector2D &a );
std::istream & operator >> (std::istream& in, Vector2D &a );
