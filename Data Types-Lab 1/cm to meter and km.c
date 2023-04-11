#include <stdio.h>

int main() {
    float length_cm, length_m, length_km;

    printf("Enter length in centimeters: ");
    scanf("%f", &length_cm);

    // Convert centimeters to meters and kilometers
    length_m = length_cm / 100.0;
    length_km = length_cm / 100000.0;

    // Display results
    printf("Length in meters: %.4f m\n", length_m);
    printf("Length in kilometers: %.4f km\n", length_km);

    return 0;
}
