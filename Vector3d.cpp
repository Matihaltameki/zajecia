#include <iostream>

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

private:
    int x;
    int y;
    int z;

};

int main()
{
    Vector3D vector = Vector3D(1, 1, 1);
    cout<< vector.get_x() << endl;
    return 0;
}
