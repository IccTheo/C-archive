#ifndef QUADRATICFORMULA_H
#define QUADRATICFORMULA_H

#include <cmath>
#include <conio.h>


double First_X, Second_X;
double discriminant;

int quadratic_formula(float a, float b,float c){
    //return 1 = real and different
    //return 0 = real and equal
    //return -1 = imagenary 
    discriminant = std::pow(b,2) - 4 * a * c;
    if (discriminant > 0){
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;
        return 1;
    }else if (discriminant == 0){
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;
        return 0;
    }else{
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;
        return -1;
    }   
}

void quadratic_formula_OUT(float a, float b,float c){

    //return 1 = real and different
    //return 0 = real and equal
    //return -1 = imagenary 
    discriminant = std::pow(b,2) - 4 * a * c;
    if (discriminant > 0){
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;

    }else if (discriminant == 0){
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;

    }else{
        First_X = (-b + std::sqrt(discriminant)) / 2*a;
        Second_X = (-b - std::sqrt(discriminant)) / 2*a;

    }   
}
#endif