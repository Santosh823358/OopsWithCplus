// Add two complex numbers. Multiply two complex numbers. Find negative of given complex numbers. using constructors
# include<iostream>
using namespace std;

class Complex {
    int real, imag;

public:
   Complex(int r = 0, int i = 0) {
       real = r;
       imag = i;
   }

   void dispaly() {
       cout << real << " + " <<imag << " i " <<endl;
   }

   Complex add(Complex c) {
       return Complex(real + c.real, imag + c.imag);
   }

   Complex multiply(Complex c) {
       return Complex(real * c.real - imag * c.imag);
                     (real * c.imag + imag * c.real); 
   }

    
   // Negative
   Complex negative() {
       return Complex(-real, -imag);
   }
};

int main() {
    Complex c1(3,2), c2(1,7);

    cout << "First Complex: ";
    c1.dispaly();

    cout << "Second Complex: ";
    c2.dispaly();

    Complex sum = c1.add(c2);
    cout << "Addition: ";
    sum.dispaly();

    Complex product = c1.multiply(c2);
    cout << "Multiplication: ";
    product.dispaly();

    Complex neg = c1.negative();
    cout << "Negative of first: ";
    neg.dispaly();

    return 0;


}

