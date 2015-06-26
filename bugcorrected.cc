#include <iostream>
using namespace std;
struct Vec {
int x, y, z;
Vec (int x = 3, int y = 3, int z = 3){
this->x = x;
this->y = y;
this->z = z;
}
};
struct Plane{
Vec v1,v2;
void setVectorV1(Vec _v1){ v1 = _v1; }
void setVectorV2(Vec _v2){ v2 = _v2;  }
int dotProduct(){
return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
}
void printPlane(){
cout << this->v1.x << this->v1.y << this->v1.z << endl;
cout << this->v2.x << this->v2.y << this->v1.z << endl;
}
};

int main(){
int dProd =0;
Plane *p = new Plane;
dProd = p->dotProduct();
cout << "Vector: " << endl;
p->printPlane();
cout << "Dot Product is: " << dProd << endl;
}