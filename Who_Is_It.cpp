#include <bits/stdc++.h>
using namespace std;
struct Student {
    int id;
    string name;
    char section;
    int Marks;
};
bool Students(const Student& s1, const Student& s2) {
    if (s1.Marks != s2.Marks) {
        return s1.Marks > s2.Marks;
    } else {
        return s1.id < s2.id;
    }
}
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            std::cin >> students[i].id >> students[i].name >> 
            students[i].section >> students[i].Marks;
        }
        // Sort students based on marks and ID
        for (int i = 0; i < 2; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                if (Students(students[j], students[i])) {
                    swap(students[i], students[j]);
                }
            }
        }
        // Print details of the student with the highest marks
        cout << students[0].id << " " << students[0].name << " " <<
        students[0].section << " " << students[0].Marks << endl;
    }

    return 0;
}
