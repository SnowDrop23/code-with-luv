//Problem Statement: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
//it has another solution you'll find in the "online-judge-question-solved", hackerEarth Solution repository
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
    // Declare a map where:
    // key = negative of marks (so higher marks come first when iterating)
    // value = multiset of student names (sorted automatically)
    map<int, multiset<string>> marks_map;

    int n;
    cin >> n;  // Read the number of students

    for(int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;  // Read student name and marks

        // Store -marks as key to get decreasing order automatically
        marks_map[-marks].insert(name);
    }

    // Iterate through the map (sorted by increasing key, which is -marks → decreasing marks)
    for(auto &marks_students_pr : marks_map)
    {
        auto &students = marks_students_pr.second;  // Get the set of student names
        int marks = -marks_students_pr.first;       // Convert back to positive marks

        // Print each student with their marks
        for(auto student : students)
            cout << student << " " << marks << endl;
    }

    return 0;
}
