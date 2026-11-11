#include <iostream>
#include <vector>
#include <iomanip>
#include <clocale>
#include <windows.h>
#include <string>

using namespace std;

struct IStudent {
    string name;
    vector<float> grades;
};

struct IBestAverage {
    string name;
    float average;
};

float calculate_average(const vector<float> &list) {
    float sum = 0;

    for(int i = 0; i < list.size(); i++) {
        sum += list[i];
    }

    return sum / list.size();
}

void get_credential(vector<IStudent> &students) {
    system("cls");

    string name;
    vector<float> grades;
    IStudent student;

    cout << "Nome do(a) estudante: ";
    cin >> name;

    for(int i = 0; i < 3; i++) {
        int grade;

        cout << "Nota " << (i + 1) << " de " << name << ": ";
        cin >> grade;

        grades.push_back(grade);
    }

    student.name = name;
    student.grades = grades;

    students.push_back(student);
}

void get_best_average(const vector<IStudent> &students, IBestAverage &best_average) {
    best_average.name = "";
    best_average.average = 0.0;

    for(int i = 0; i < students.size(); i++) {
        int current_average = calculate_average(students[i].grades);

        if(current_average > best_average.average) {
            best_average.average = current_average;
            best_average.name = students[i].name;
        }
    }
} 

void print_table(const vector<IStudent> &students) {
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

    cout << setw(10) << "NOME"
        << setw(10) << "N1"
        << setw(10) << "N2"
        << setw(10) << "N3"
        << setw(10) << "MÉDIA"
        << setw(15) << "SITUAÇÃO" << endl;
    
    for(int i = 0; i < students.size(); i++) {
        cout << setw(10) << students[i].name
            << setw(10) << students[i].grades[0]
            << setw(10) << students[i].grades[1]
            << setw(10) << students[i].grades[2]
            << setw(10) << calculate_average(students[i].grades)
            << setw(15) << (calculate_average(students[i].grades) >= 7 ? "Aprovado" : "Reprovado") << endl;
    }

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n" << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    vector<IStudent> students;
    IBestAverage best_average;

    for(int i = 0; i < 3; i++) {
        get_credential(students);
    }

    get_best_average(students, best_average);

    system("cls");

    print_table(students);

    cout << "A melhor média foi de " << best_average.name << ", com " << best_average.average << " de pontuação";

    return 0;
}
