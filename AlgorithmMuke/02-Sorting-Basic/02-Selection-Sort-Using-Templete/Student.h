/**
 * File Name:   Student.h
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/3 15:25
**/

#ifndef ALGORITHMMUKE_STUDENT_H
#define ALGORITHMMUKE_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {

    string name;
    int score;

    bool operator<(const Student &otherStudent) {

        return score != otherStudent.score ? score < otherStudent.score:name<otherStudent.name;
    }

    friend ostream &operator<<(ostream &os, Student &student) {
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }
};

#endif //ALGORITHMMUKE_STUDENT_H
