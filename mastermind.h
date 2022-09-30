// Project #1: Mastermind part b
// 
// Group Members: Lisa Byrne, Alek Tunik, Kaite O'Flaherty
//
// Description: Header file for the mastermind class
// Assumption:

#ifndef MASTERMIND_H_
#define MASTERMIND_H_

#include <iostream>
#include <vector>
#include <stdlib.h>
#include "code.h"
#include "response.h"

using namespace std;

class mastermind
// Class used to create mastermind objects and check functions
{
    public:
        // overloaded constructors and deconstructor
        mastermind();
        mastermind(int n, int m);
        ~mastermind(){};

        // mastermind functions
        void printCode(code& sc);
        bool isSolved(response& response1, response& response2);
        response getResponse(code& guess);
        code humanGuess(code& sc);
    private:
        code _code;
}; // end mastermind class

mastermind::mastermind(int n, int m)
// Constructor for mastermind object
// Passed values n and m from keyboard
// Attributes: "_length" n, and "_range" m
{
    _code = code(n,m);
}

mastermind::mastermind()
// Constructor for mastermind object
// Uses default values of 5 for "_length" and 10 for "_range"
{
    _code = code();
}

void mastermind::printCode(code& sc)
// Function to print a secret code
{
    cout << "The secret code is: ";
    for (int x : sc.getSequence()) // NEEDS EDIT
        cout << x << " ";
} // end printCode

code mastermind::humanGuess(code& sc)
// Function to get a guess code from user
// 
// Limitations: breaks when given a char
{
    code guess = sc.getGuess();
    return guess;
} // end humanGuess

response mastermind::getResponse(code& guess)
{
    response newResponse;
    newResponse.setCorrectCount(guess); // set correct values
    newResponse.setIncorrectCount(guess); // set incorrect values
    return newResponse;
}

bool mastermind::isSolved(response& guessResponse, response& scResponse)
// Function to return true if the user has solved the board
// If the response object has attributes 'correct' and 'incorrect' from the 
// check functions, then we can access these and compare with the length of
// the secret code
{
    
    return guessResponse == scResponse; //syntax is wrong but idea is right
}

void mastermind::playGame()
{
    code sc(int n, int m);
    sc.generateSecret();
    sc.printCode();
    for (int i = 0; i < 11; i++)
        {
            code guess(int n, int m);
            guess.getResponse();
            response.isSolved();
            if response.isSolved()
            {
                break;
            }
        }
    if response.isSolved()
    {
        cout << "You win!";
    }   
    else
    {
        cout << "You suck!";
    }
} // end play game

// end Header file

#endif