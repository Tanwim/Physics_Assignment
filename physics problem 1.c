#include <stdio.h>
#include<math.h>
int main() {
    double wavelength, theta, distance;

    printf("Enter wavelength (nm): ");
     while(1) {
        scanf("%lf", &wavelength);
        if(wavelength < 380 || wavelength > 750){
            printf("Out of the range . Please enter a valid number\n") ;
        }
        else{
            break ;
        }
    }

    wavelength = wavelength * 0.000000001;

    printf("Enter theta (degrees): ");
    scanf("%lf", &theta);

    printf("Enter distance (μm): ");
    scanf("%lf", &distance);
    distance = distance * 0.000001;


    double radian = theta * (3.1416/180.0)  ;
    double m =  floor((distance * sin(radian) / wavelength)) ;


    printf("%.10lf th order maxima\n", m);

    return 0;
}
