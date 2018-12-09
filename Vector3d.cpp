#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Vector3D {
public:
    Vector3D(int _x, int _y, int _z){
        x = _x;
        y = _y;
        z = _z;
    }

    ~Vector3D() {}

    void set_x(int new_x){
        x = new_x;
    }

    void set_y(int new_y){
        y = new_y;
    }
    void set_z(int new_z){
        z = new_z;
    }

    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
    int get_z() {
        return z;
    }

    string print(){
        stringstream ss;
        ss << "(" << x << ", " << y << ", " << z << ")";
        return ss.str();
    }

    Vector3D add(Vector3D& vector){
        Vector3D new_vector = Vector3D(x + vector.get_x(), y + vector.get_y(), z + vector.get_z());
        return new_vector;
    }

    int scalar_product(Vector3D& vector){
        return x * vector.get_x() + y * vector.get_y() + z * vector.get_z();
    }

    Vector3D vector_product(Vector3D& vector){
        int product_x = y * vector.get_z() - z * vector.get_y();
        int product_y = - x * vector.get_z() + vector.get_x() * z;
        int product_z = x * vector.get_y() - vector.get_x() * y;

        Vector3D product_vector = Vector3D(product_x, product_y, product_z);
        return product_vector;
    }

private:
    int x;
    int y;
    int z;

};
