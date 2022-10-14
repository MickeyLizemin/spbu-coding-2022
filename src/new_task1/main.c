
#include<stdio.h>
#include<math.h>

double integral_sin(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[0])) {
        sum += sin(i) * (1.0 / var[0]);
    }
    return sum;
}

double integral_sin1(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[1])) {
        sum += sin(i) * (1.0 / var[1]);
    }
    return sum;
}

double integral_sin2(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[2])) {
        sum += sin(i) * (1.0 / var[2]);
    }
    return sum;
}

double integral_sin3(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[3])) {
        sum += sin(i) * (1.0 / var[3]);
    }
    return sum;
}

double integral_sin4(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[4])) {
        sum += sin(i) * (1.0 / var[4]);
    }
    return sum;
}

double integral_sin5(double a, double b) {
    double var[] = {5, 10, 20, 100, 500, 1000};
    double sum = 0;
    
    for (double i = a; i <= b; i += (1.0 / var[5])) {
        sum += sin(i) * (1.0 / var[5]);
    }
    return sum;
}

double simpson_integration(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[0];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[0] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}

double simpson_integration1(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[1];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[1] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}

double simpson_integration2(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[2];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[2] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}

double simpson_integration3(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[3];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[3] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}

double simpson_integration4(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[4];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[4] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}

double simpson_integration5(double a, double b){
    double var[] = {5, 10, 20, 100, 500, 1000};
    double h = (b - a) / var[5];
    double s = sin(a) + sin(b);
    
    for (int i = 1; i <= var[5] - 1; ++i) {
        double x = a + h * i;
        s += sin(x) * ((i & 1) ? 4 : 2);
    }
    s *= h / 3;
    return s;
}
int main() {
    double a, b;
    
    printf("Please enter the values of the interval [a,b] a and b respectively (0 <= a < b <= Pi)\n");
    scanf("%lf %lf", &a ,&b);
    
    printf(" 5 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin(a ,b), simpson_integration(a, b));
    printf(" 10 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin1(a ,b), simpson_integration1(a, b));
    printf(" 20 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin2(a ,b), simpson_integration2(a, b));
    printf(" 100 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin3(a ,b), simpson_integration3(a, b));
    printf(" 500 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin4(a ,b), simpson_integration4(a, b));
    printf(" 1000 The Riemann sum integral is %.5f The simpson integral is %.5f\n", integral_sin5(a ,b), simpson_integration5(a, b));
    
    return 0;
}

