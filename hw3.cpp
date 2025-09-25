/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;
    cout << "請輸入3次分數(0~100): ";
    cin >> score1 >> score2 >> score3;

    double averageScore = (score1 + score2 + score3) / 3.0;  // Ensuring division is done in floating-point.

    if (score1 < 40 || score2 < 40 || score3 < 40) {
        cout << "不及格\n";
    } else if (averageScore >= 60) {
        cout << "及格\n";
    } else {
        cout << "不及格\n";
    }

    cout << "你的平均為: " << averageScore << endl;

    return 0;
}
