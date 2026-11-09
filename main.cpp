#include <iostream>
#include <limits>
using namespace std;

// ==========================================
// ОГОЛОШЕННЯ ФУНКЦІЙ
// ==========================================

// Proc32
double Calc(double A, double B, int Op);
void task_Calc();

// Proc39
bool DigitN(int K, int N);
void task_DigitN();

// Integer20
bool in_N(int &N);
int calc_hours(int N);
void out_res(int result);
void task_Int20();


// ==========================================
// ГОЛОВНА ФУНКЦІЯ
// ==========================================

int main()
{
    int choice;

    cout << "========== MENU ==========" << endl;
    cout << "1 - Proc32 (Calc)" << endl;
    cout << "2 - Integer20" << endl;
    cout << "3 - Proc39 (DigitN)" << endl;
    cout << "Your choice: ";

    cin >> choice;

    if (cin.fail())
    {
        cout << "Incorrect input!" << endl;
        return 0;
    }

    switch (choice)
    {
        case 1:
            task_Calc();
            break;

        case 2:
            task_Int20();
            break;

        case 3:
            task_DigitN();
            break;

        default:
            cout << "Incorrect menu choice!" << endl;
    }

    return 0;
}


// ==========================================
// PROC32
// Функція виконання арифметичних операцій
// ==========================================

double Calc(double A, double B, int Op)
{
    if (Op == 1)
        return A - B;

    else if (Op == 2)
        return A * B;

    else if (Op == 3)
        return A / B;

    else
        return A + B;
}

void task_Calc()
{
    double A, B;
    int N1, N2, N3;

    cout << "\n========== PROC32 ==========" << endl;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter N1, N2, N3: ";
    cin >> N1 >> N2 >> N3;

    if (cin.fail() || A == 0 || B == 0 ||
        A < -100 || A > 100 ||
        B < -100 || B > 100 ||
        N1 < -100 || N1 > 100 ||
        N2 < -100 || N2 > 100 ||
        N3 < -100 || N3 > 100)
    {
        cout << "Incorrect input data!" << endl;
        return;
    }

    cout << "\nResults:" << endl;

    cout << "Calc(A, B, N1) = "
         << Calc(A, B, N1) << endl;

    cout << "Calc(A, B, N2) = "
         << Calc(A, B, N2) << endl;

    cout << "Calc(A, B, N3) = "
         << Calc(A, B, N3) << endl;
}


// ==========================================
// PROC39
// Перевірка існування N-ї цифри числа
// ==========================================

bool DigitN(int K, int N)
{
    if (K <= 0 || K >= 1000 || N <= 0 || N > 4)
        return false;

    if (N == 1)
        return true;

    else if (N == 2)
        return K >= 10;

    else if (N == 3)
        return K >= 100;

    else
        return false;
}

void task_DigitN()
{
    int K1, K2, K3, K4, K5;
    int N1, N2, N3, N4, N5;

    cout << "\n========== PROC39 ==========" << endl;

    cout << "Enter K1 and N1: ";
    cin >> K1 >> N1;

    cout << "Enter K2 and N2: ";
    cin >> K2 >> N2;

    cout << "Enter K3 and N3: ";
    cin >> K3 >> N3;

    cout << "Enter K4 and N4: ";
    cin >> K4 >> N4;

    cout << "Enter K5 and N5: ";
    cin >> K5 >> N5;

    if (cin.fail())
    {
        cout << "Incorrect input!" << endl;
        return;
    }

    // Перевірка першої пари
    if (K1 <= 0 || K1 >= 1000 || N1 <= 0 || N1 > 4 ||
        K2 <= 0 || K2 >= 1000 || N2 <= 0 || N2 > 4 ||
        K3 <= 0 || K3 >= 1000 || N3 <= 0 || N3 > 4 ||
        K4 <= 0 || K4 >= 1000 || N4 <= 0 || N4 > 4 ||
        K5 <= 0 || K5 >= 1000 || N5 <= 0 || N5 > 4)
    {
        cout << "Incorrect input data!" << endl;
        return;
    }

    cout << "\nResults:" << endl;

    cout << "DigitN(" << K1 << ", " << N1 << ") = "
         << (DigitN(K1, N1) ? "True" : "False") << endl;

    cout << "DigitN(" << K2 << ", " << N2 << ") = "
         << (DigitN(K2, N2) ? "True" : "False") << endl;

    cout << "DigitN(" << K3 << ", " << N3 << ") = "
         << (DigitN(K3, N3) ? "True" : "False") << endl;

    cout << "DigitN(" << K4 << ", " << N4 << ") = "
         << (DigitN(K4, N4) ? "True" : "False") << endl;

    cout << "DigitN(" << K5 << ", " << N5 << ") = "
         << (DigitN(K5, N5) ? "True" : "False") << endl;
}


// ==========================================
// INTEGER20
// Кількість повних годин від початку доби
// ==========================================

bool in_N(int &N)
{
    cout << "\n========== INTEGER20 ==========" << endl;

    cout << "Enter N (seconds): ";
    cin >> N;

    if (cin.fail() || N < 0 || N >= 86400)
        return false;

    return true;
}

int calc_hours(int N)
{
    return N / 3600;
}

void out_res(int result)
{
    cout << "Full hours = " << result << endl;
}

void task_Int20()
{
    int N;

    if (!in_N(N))
    {
        cout << "Incorrect input data!" << endl;
        return;
    }

    out_res(calc_hours(N));
}