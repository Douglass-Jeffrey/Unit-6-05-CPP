// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

// Created by: Douglass Jeffrey
// Created on: Dec 2019
// This function calculates average of the marks using a list

#include <iostream>
#include <list>


float Average(std::list<int> marks) {
    // This function calculates average of the marks using a list

    // process
    int total = 0;
    float average = 0;
    int numbers = 0;

    for (int number : marks) {
        total = total + number;
        numbers = numbers + 1;
    }

    average = total / numbers;

    return average;
}


int main() {
    // This takes the user's marks and passes them to average() in a list

    std::list<int> marks;
    int mark = 0;
    int average;
    int counter = 0;

    while (mark != -1) {
        // input
        std::cout << "Input Mark " << (counter + 1) << " :" << std::endl;
        std::cin >> mark;
        marks.push_back(mark);
        counter = (counter + 1);
    }

    marks.pop_back();

    average = Average(marks);

    std::cout << "\nThe average of your " << (counter - 1) << " marks is: "
              << average << std::endl;
}
