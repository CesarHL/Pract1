 #include <iostream>
 #include <string>
 using namespace std;
double babilonico(double x);
 
 int main() {
 	babilonico(10.0);
 }

double babilonico(double x){
    double b = x, h = 0;

    while (b != h) {
        b = (h + b) / 2;
        h = static_cast<double>(x) / b;
    }
    return b;
}
