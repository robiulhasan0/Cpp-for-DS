#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name; 
    int cls; 
    char s;
    int id;
    int math_marks, eng_marks;
    Student() : cls(0), s('\0'), id(0), math_marks(0), eng_marks(0) {}

    Student(string nm, int cls, char s, int id, int math_marks, int eng_marks) {
        this->name = name;
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }

    int totalMarks() {
        return math_marks + eng_marks;
    }
};
bool cmp(const Student& a, const Student& b) {
    int total_MarksA = a.math_marks + a.eng_marks;
    int total_MarksB = b.math_marks + b.eng_marks;

    if (total_MarksA != total_MarksB) {
        return total_MarksA > total_MarksB;
    }

    return a.id < b.id;
}
int main() 
{
   int N;
    cin >> N;
    Student students[N];
    for (int i = 0; i < N; ++i) 
    {
        cin >> students[i].name >>students[i].cls >>students[i].s >>students[i].id >> students[i].math_marks >>students[i].eng_marks;
    }
    sort(students, students + N, cmp);
    
    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].s << " " <<students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    cout << endl;
    
    return 0;
    
}