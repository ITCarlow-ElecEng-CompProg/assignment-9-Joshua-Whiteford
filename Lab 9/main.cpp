 /**
 *Joshua Whiteford
 *13/11/2017
 *main.c
 *Sphere Calculations
 */



/**< preprocessor directives */
#include <iostream>
#define PI 3.14592654

using namespace std;
void Sphere(double SphereR, int *p_a, int *p_v);
    /**< Starting the function */
int main()
{
    /**< Declaring our main function Variavbles */
    int  A = 0, V = 0;
    int *p_a, *p_v;
    double SphereR = 0;

    /**< Setting our Pointer Variables to the Address Of A & V */
    p_a = &A;

    p_v = &V;

    /**< Welcoming the User & Explaining what the function does  */
    cout << "\tThis program Will Calculate the Volume and Surface Area of a Sphere!" << endl;
    /**< Ensuring the User enters a value not equal to 0 */
    while ( SphereR == 0 )
    {
        /**< Asking & Getting the User to enter a Value for the radius */
        cout << "Please Enter The Radius of the Sphere:";
        cin >> SphereR;
    }

    /**< Sending the program to the Sphere functin */
    Sphere( SphereR, p_a, p_v );

    /**< Displaying the results to the User */
    cout << "\tThe Surface Area is:" << A << "Meters^2 " << endl;
    cout << "\tThe Volume is:" << V << "Meters^3" << endl;

    return 0;
}
/**< Starting the second function */
void Sphere ( double SphereR, int *p_a, int *p_v )
{
    /**< Doing the Equations and setting the variables the Pointers Point to as the result */
    *p_a = 4 * PI *(SphereR*SphereR);
    *p_v = 1.333333333 * PI * (SphereR*SphereR*SphereR);

    return;
}
