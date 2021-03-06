﻿#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
public:
        char* name;
        char* ID;
        int score1;
        int score2;
		int score3;
		int score4;

        Student()
        {
            name = new char[strlen("Anonymous-----") + 1];
            ID = new char[strlen("NoIdInput------") + 1];
            score1 = 0;
            score2 = 0;
			score3 = 0;
			score4 = 0;
        }

        Student(char* pName, char* pID, int pScore1, int Pscore2, int pScore3, int pScore4):score1(pScore1), score2(Pscore2), score3(pScore3),score4(pScore4)
        {
            name = new char[strlen(pName) + 1];
            strcpy(name, pName);
            ID = new char[strlen(pID) + 1];
            strcpy(ID, pID);
        }

        Student(const Student& stu):score1(stu.score1), score2(stu.score2), score3(stu.score3), score4(stu.score4)
        {
            name = new char[strlen(stu.name) + 1];
            strcpy(name, stu.name);
            ID = new char[strlen(stu.ID) + 1];
            strcpy(ID, stu.ID);
        }

        Student& operator = (const Student& stu)
        {
            name = new char[strlen(stu.name) + 1];
            strcpy(name, stu.name);
            ID = new char[strlen(stu.ID) + 1];
            strcpy(ID, stu.ID);
            score1 = stu.score1;
            score2 = stu.score2;
			score3 = stu.score3;
			score4 = stu.score4;

            return *this;
        }

        ~Student()
        {
            delete[] name;
            delete[] ID;
        }

};


#endif // STUDENT_H
