#include <stdio.h>
#include <math.h>

int main() {
    /*
    asin(theta) = m*lamda;

    a/lamda = m/sin(theta);

    m=1,theta = 45 degree,sin(45) = 1/sqrt(2)

    a/lamda = 1/sin(45) = sqrt(2)*/

    double ans = sqrt(2);

    printf("The ratio a/lambda for the first minimum at 45 degrees is: %.10lf\n",ans);

    return 0;
}

