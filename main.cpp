#include <iostream>

using namespace std;

//Modify the above program to handle different size shapes. (Input sizes)

//declare functions
void drawTriangle(int);
void drawSquare(int);
void drawRectangle(int, int);
void drawShapes(int, int);

int main() {

    int userHeight, userRectangleLength;

    cout << "Enter shape height:";
    cin >> userHeight;
    cout << endl;

    cout << "Enter rectangle length:";
    cin >> userRectangleLength;

    drawShapes(userHeight, userRectangleLength);

    return 0;
}

void drawRectangle(int length, int height) {

    //rectangle row
    for (int i = 0; i < height; i++) {

        //rectangle: go to next line
        cout << endl;

        //rectangle column
        for (int j = 0; j < length; j++) {
            cout << "*  ";
        }

    }
}

void drawSquare(int length) {
    drawRectangle(length, length);
}

void drawTriangle(int height) {
    //count num of asterisks i need to print this line
    //start at 1, end when height row num is reached
    int numSpaces = 1;

    //print top to bottom
    //triangle: row
    //iterate row: triangle
    for(int i = 1, j = 0; i <= height; i++, j = 0) {
        //print spaces
        for(numSpaces = 1; numSpaces <= height - i; numSpaces++) {
            cout <<"  ";
        }

        //triangle: column
        //print asterisks
        //i * row - 1 to get the num of asterisks, provides odd number to count up to
        while(j != ((2 * i) - 1)) {
            cout << "* ";
            j++;
        }

        //print next line
        cout << endl;
    }
}

void drawShapes(int height = 5, int rectangleLength = 10) {
    //do logic for all rows in one loop, one after another
    for (int i = 1, j = 0; i <= height; i++, j = 0) {

        //rectangle: go to next line
        cout << endl;

        //do logic for all columns in one loop, one after another in order
        //rectangle column
        for (int k = 0; k < rectangleLength; k++) {
            cout << "*  ";
        }

        cout << "| ";

        //square column
        for (int k = 0; k < height; k++) {
            //changed spacing of this string
            cout << " * ";
        }

        cout << " |  ";

        //triangle column
        int numSpaces = 1;

        for(numSpaces = 1; numSpaces <= height - i; numSpaces++) {
            cout <<"  ";
        }

        while(j != ((2 * i) - 1)) {
            cout << "* ";
            j++;
        }
    }
}