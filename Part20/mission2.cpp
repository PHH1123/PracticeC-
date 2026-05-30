#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// mission 파일에서 학생 정보 다시 불러오는 기능 추가

class Student
{
private:
    string name;
    int score;

public:
    Student(string n, int s) : name(n), score(s) {}

    string getName() const { return name; }
    int getScore() const { return score; }
};

class StudentManager
{
private:
    vector<Student> students;
    StudentManager() { cout << "StudentManager 생성" << endl; }

public:
    StudentManager(const StudentManager &) = delete;
    StudentManager &operator=(const StudentManager &) = delete;

    static StudentManager &getInstance()
    {
        static StudentManager instance;
        return instance;
    }

    void addStudent(const string &name, int score)
    {
        students.push_back(Student(name, score));
    }

    void printStudents()
    {
        cout << "--- 학생 목록 ---" << endl;
        for (auto &st : students)
        {
            cout << setw(10) << st.getName() << " : " << st.getScore() << endl;
        }
    }

    double averageScore()
    {
        if (students.empty())
            return 0.0;
        int sum = 0;
        for (auto &st : students)
            sum += st.getScore();
        return (double)sum / students.size();
    }

    void saveToFile(const string &filename)
    {
        ofstream out(filename);
        if (out.is_open())
        {
            for (auto &st : students)
            {
                out << st.getName() << " " << st.getScore() << endl;
            }
            out.close();
        }
    }

    int maxScore()
    {
        int max = 0;
        for (auto &st : students)
        {
            int score = st.getScore();
            if (score > max)
            {
                max = score;
            }
        }
        return max;
    }
    void loadToFile(const string &filename)
    {
        ifstream in(filename);
        if (in.is_open())
        {
            students.clear();
            string name;
            int score;
            while (in >> name >> score)
            {
                students.push_back(Student(name, score));
            }
            in.close();
        }
    }
};

int main()
{
    StudentManager::getInstance();
    int choice;

    while (true)
    {
        cout << "1. 학생 추가\n2. 학생 목록 출력\n3. 평균 점수\n4. 최고 점수\n5. 파일 저장\n6. 파일 로드\n7. 종료\n선택: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            int score;
            cout << "이름 입력: ";
            cin >> name;
            cout << "점수 입력: ";
            cin >> score;
            StudentManager::getInstance().addStudent(name, score);
        }
        else if (choice == 2)
        {
            StudentManager::getInstance().printStudents();
        }
        else if (choice == 3)
        {
            cout << "평균 점수 = " << StudentManager::getInstance().averageScore() << endl;
        }
        else if (choice == 4)
        {
            cout << "최고 점수 = " << StudentManager::getInstance().maxScore() << endl;
        }
        else if (choice == 5)
        {
            StudentManager::getInstance().saveToFile("students.txt");
            cout << "파일 저장 완료!" << endl;
        }
        else if (choice == 6)
        {
            StudentManager::getInstance().loadToFile("students.txt");
            cout << "파일 불러오기 완료!" << endl;
        }
        else if (choice == 7)
        {
            cout << "프로그램 종료" << endl;
            break;
        }
        else
        {
            cout << "잘못된 선택!" << endl;
        }
    }

    return 0;
}