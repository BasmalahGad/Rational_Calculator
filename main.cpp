// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: Rational_Calculator_20210264_20210755_20210090.cpp
// Program Description: Rational Calculator Program
// Last Modification Date: 25/3/2022
// Author1 and ID and Group: Omar Khaled Mohamed Hamed, ID: 20210264
// Author2 and ID and Group: Basmala Mohamed Gad, ID: 20210090, Group: S10
// Author3 and ID and Group: Alan Samir Hakkoun, ID: 20210755, Group: S4
// Teaching Assistant:
// Purpose: calculate addition, subtraction, multiplication or division of two rational numbers.

#include <iostream>
#include <numeric>
#include <string>
#include <regex>
#include <bits/stdc++.h>

using namespace std;

void multiplication(string num1, string num2);
void subtraction(string num1, string num2);
void division(string num1, string num2);
void addition(string num1, string num2);
bool isValidRational(string& str);
string simplification(int nom, int den);

int main()
{
    string number1, number2, operation;
    while (true)
    {
        cout << "Please enter a rational number operations (or exit to end):";
        cin >> number1;

        if (number1 == "exit")
        {
            cout << "Thank you for using rational number calculator :)";
            break;
        }

        cin >> operation >> number2;

        if (operation == "+")
        {
            addition(number1, number2);
        }
        else if (operation == "-")
        {
            subtraction(number1, number2);
        }
        else if (operation == "*")
        {
            multiplication(number1, number2);
        }
        else if (operation == "/")
        {
            division(number1, number2);
        }
        else
        {
            cout << "Enter a valid operation" << endl;
        }
    }
    return 0;
}



// Checks if the rational number is valid or not. (3/0 --> not valid)
bool isValidRational(string& str)
{
    regex validInt("[-+]?[0-9]+(/[1-9][0-9]*)?");
    return regex_match(str, validInt);
}


void addition(string num1, string num2)
{
    string den_num1, den_num2, nom_num1, nom_num2;
    int den1_num1, den2_num2, nom1_num1, nom2_num2;

    if (isValidRational(num1) && isValidRational(num2))
    {
        // store the index of "/" to divide num and den + checks if there is den or not.
        int index1 = num1.find("/");
        if (index1 == -1)
        {
            den_num1 = "1";
        }
        else
        {
            den_num1 = num1.substr(index1+1, num1.length());
        }

        int index2 = num2.find("/");
        if (index2 == -1)
        {
            den_num2 = "1";
        }
        else
        {
            den_num2 = num2.substr(index2+1, num2.length());
        }

        nom_num1 = num1.substr(0, index1);
        nom_num2 = num2.substr(0, index2);

        nom1_num1 = stoi(nom_num1);
        den1_num1 = stoi(den_num1);
        nom2_num2 = stoi(nom_num2);
        den2_num2 = stoi(den_num2);

        int den = den1_num1 * den2_num2;
        int nom = ((den1_num1 * nom2_num2)) + (den2_num2 * nom1_num1);

        cout << simplification(nom, den);
    }
    else
    {
        cout << "Please enter a valid number!" << endl;
    }
}


void subtraction(string num1, string num2)
{
    string den_num1, den_num2, nom_num1, nom_num2;
    int den1_num1, den2_num2, nom1_num1, nom2_num2;

    if (isValidRational(num1) && isValidRational(num2))
    {
        int index1 = num1.find("/");
        if (index1 == -1)
        {
            den_num1 = "1";
        }
        else
        {
            den_num1 = num1.substr(index1+1, num1.length());
        }

        int index2 = num2.find("/");
        if (index2 == -1)
        {
            den_num2 = "1";
        }
        else
        {
            den_num2 = num2.substr(index2+1, num2.length());
        }

        nom_num1 = num1.substr(0, index1);
        nom_num2 = num2.substr(0, index2);

        nom1_num1 = stoi(nom_num1);
        den1_num1 = stoi(den_num1);
        nom2_num2 = stoi(nom_num2);
        den2_num2 = stoi(den_num2);

        int den = den1_num1 * den2_num2;
        int nom = (den1_num1 * (-nom2_num2)) + (den2_num2 * nom1_num1);

        cout << simplification(nom, den);
    }
    else
    {
        cout << "Please enter a valid number!" << endl;
    }
}


void multiplication(string num1, string num2)
{
    string den_num1, den_num2, nom_num1, nom_num2;
    int den1_num1, den2_num2, nom1_num1, nom2_num2;

    if (isValidRational(num1) && isValidRational(num2))
    {
        int index1 = num1.find("/");
        if (index1 == -1)
        {
            den_num1 = "1";
        }
        else
        {
            den_num1 = num1.substr(index1+1, num1.length());
        }

        int index2 = num2.find("/");
        if (index2 == -1)
        {
            den_num2 = "1";
        }
        else
        {
            den_num2 = num2.substr(index2+1, num2.length());
        }

        nom_num1 = num1.substr(0, index1);
        nom_num2 = num2.substr(0, index2);

        nom1_num1 = stoi(nom_num1);
        den1_num1 = stoi(den_num1);
        nom2_num2 = stoi(nom_num2);
        den2_num2 = stoi(den_num2);

        int den = den1_num1 * den2_num2;
        int nom = nom1_num1 * nom2_num2;

        cout << simplification(nom, den);
    }
    else
    {
        cout << "Please enter a valid number!" << endl;
    }
}


void division(string num1, string num2)
{
    string den_num1, den_num2, nom_num1, nom_num2;
    int den1_num1, den2_num2, nom1_num1, nom2_num2;

    if (isValidRational(num1) && isValidRational(num2))
    {
        int index1 = num1.find("/");
        if (index1 == -1)
        {
            den_num1 = "1";
        }
        else
        {
            den_num1 = num1.substr(index1+1, num1.length());
        }

        int index2 = num2.find("/");
        if (index2 == -1)
        {
            den_num2 = "1";
        }
        else
        {
            den_num2 = num2.substr(index2+1, num2.length());
        }

        nom_num1 = num1.substr(0, index1);
        nom_num2 = num2.substr(0, index2);

        nom1_num1 = stoi(nom_num1);
        den1_num1 = stoi(den_num1);
        den2_num2 = stoi(nom_num2);
        nom2_num2 = stoi(den_num2);

        if (den2_num2 != 0)
        {
            int den = den1_num1 * den2_num2;
            int nom = nom1_num1 * nom2_num2;
            cout << simplification(nom, den);
        }
        else
        {
            cout << "Math Error!" << endl;
        }
    }
    else
    {
        cout << "Please enter a valid number!" << endl;
    }
}


string simplification(int nom, int den)
{
    string number = "";

    int GCD = gcd(nom, den);
    nom = nom / GCD;
    den = den / GCD;


    if (den == 1)
    {
        number += to_string(nom) + "\n";
    }
    else
    {
        if (nom > den)
        {
            int mod = nom % den;
            int num = (nom-mod) / den;
            number += to_string(num) + " " + to_string(mod) + "/" + to_string(den) + "\n";
        } else
        {

            number += to_string(nom) + "/" + to_string(den) + "\n";
        }
    }

    return number;
}
