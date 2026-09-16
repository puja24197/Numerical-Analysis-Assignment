# Numerical Analysis Assignment 

This repository contains C++ implementations and pseudo codes for solving non-linear equations using four classical numerical methods.

## Problem Statement
* **Error Tolerance (\epsilon$):** 0.001

## Implemented Methods
1. **[Bisection Method](./01-Bisection-Method/)**
 **Equation:** f(x) = x \cdot \tan(x) - 1 = 0
2. **[False Position Method](./02-False-Position-Method/)**
 **Equation:** 3x^2 + 6x - 45 = 0 
4. **[Newton-Raphson Method](./03-Newton-Raphson-Method/)**
    **Equation:** f(x) = x^4 + 3x^3 - 2x^2 - 12x - 8 = 0
6. **[Secant Method](./04-Secant-Method/)**
   **Equation:**  3*x^2 + 6*x - 45 = 0

## Comparison Summary
| Method | Initial Guesses | Iterations to Converge | Final Approximate Root |
| :--- | :--- | :--- | :--- |
| **Bisection** | a = 0.5, b = 1.0 | 10 | 0.859863 |
| **False Position** | x_1 = 2 , x_2 = 4 | 4 | 2.999826 |
| **Newton-Raphson** | x_0 = 1 | 14 | -2.001806  |
| **Secant** | x_1 = , x_2 = | 4 | 3.000000 |
