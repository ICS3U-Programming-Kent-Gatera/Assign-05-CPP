// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 12 - 9 - 22
// This program calculates the length, width and area of a triangle.

#include <iostream>

float areaCalc(float length, float width) {
    float area;
    area = length * width;
    return area;
}

float widthCalc(float area, float length) {
    float width;
    width = area / length;
    return width;
}
float lengthCalc(float area, float width) {
    float length;
    length = area / width;
    return length;
}

float perimeterCalc(float length, float width) {
    float perimeter;
    perimeter = (length + width)*2;
    return perimeter;
}

int main() {
    int question;
    float ansArea;
    float ansWidth;
    float ansLength;
    float userLength;
    float userWidth;
    float userArea;
    float ansPerimeter;

    try {
        std::cout << "What do you want to calculate?.\n";
        std::cout <<
        "A.Press(1) if you want to calculate the area of the rectangle.\n";
        std::cout <<
        "B.Press(2) if you want to calculate the width of the rectangle.\n";
        std::cout << "C.Press(3) if you want to calculate the length of the rectangle.\n";
        std::cout << "D.Press(4) if you want to calculate the perimeter of the rectangle.\n>> ";
        std::cin >> question;
    } catch (std::invalid_argument) {
        std::cout << "Pick a valid number displayed.";
    }

    if (question == 1) {
        try {
            std::cout << "What is the length of the rectangle? (cm): ";
            std::cin >> userLength;
            std::cout << "What is the width of the rectangle? (cm): ";
            std::cin >> userWidth;
            if (userLength <= 0 || userWidth <= 0) {
                std::cout << "Invalid measurements.\nRestarting...";
                return main();
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid measurements.\nRestarting...";
            return main();
                }
        ansArea = areaCalc(userLength, userWidth);
        std::cout << "The area of a rectangle of (Length) " << userLength <<
        " and (Width) " << userWidth << " is " << ansArea <<"cm^2\n";
    } else if (question == 2) {
        try {
            std::cout << "What is the area of the rectangle? (cm^2): ";
            std::cin >> userArea;
            std::cout << "What is the Length of the rectangle? (cm): ";
            std::cin >> userLength;
            if (userArea <= 0 || userLength <= 0) {
                std::cout << "Invalid measurements.\nRestarting...";
                return main();
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid measurements.\nRestarting...";
            return main();
                }
        ansWidth = widthCalc(userArea, userLength);
        std::cout << "The width of a rectangle of (Length)" << userLength <<
        " cm and (Area) " << userArea << " cm^2 is " << ansWidth << " cm \n";
    } else if (question == 3) {
        try {
            std::cout << "What is the area of the rectangle? (cm^2): ";
            std::cin >> userArea;
            std::cout << "What is the width of the rectangle? (cm): ";
            std::cin >> userWidth;
            if (userArea <= 0 || userWidth <= 0) {
                std::cout << "Invalid measurements.\nRestarting...";
                return main();
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid measurements.\nRestarting...";
            return main();
        }
        ansLength = lengthCalc(userArea, userWidth);
        std::cout << "The Length of a rectangle of (width)" << userWidth <<
        " cm and (Area) " << userArea << " cm^2 is " << ansLength << " cm\n";
    } else if (question == 4) {
        try {
            std::cout << "What is the length of the rectangle? (cm): ";
            std::cin >> userLength;
            std::cout << "What is the width of the rectangle? (cm): ";
            std::cin >> userWidth;
            if (userLength <= 0 || userWidth <= 0) {
                std::cout << "Invalid measurements.\nRestarting...";
                return main();
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid measurements.\nRestarting...";
            return main();
        }
        ansPerimeter = perimeterCalc(userLength, userWidth);
        std::cout << "The perimeter of a rectangle of (Length) " << userLength << " and (Width) " <<
        userWidth << " is " << ansPerimeter << "cm\n";
        } else {
            std::cout << "Pick a valid number displayed.";
        }
    }
