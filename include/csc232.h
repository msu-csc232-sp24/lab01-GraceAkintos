/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.2023.07.27
 * @date    07/27/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef MSU_CSC232_H_
#define MSU_CSC232_H_

#define FALSE 0
#define TRUE 1

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 FALSE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

const int ROSTER_SIZE {5};

const int NUM_COURSES {3};

double grades[ROSTER_SIZE];

double gradeBook[NUM_COURSES][ROSTER_SIZE];

int maxGrade (double arr1[], int num);
 
int indexOfMaxGrade (double arr2[][NUM_COURSES], int row, int col);

int maxGrade (double arr1[], int num){
    int max = 0;
    for(int i = 0; i<num; i++){
      if(arr1[max] < arr1[i]){
        max = arr1[i];
      }
    }
    return arr1[max];
}

// TODO: 3.2 Implement the specified function below
int indexOfMaxGrade (double arr2[][NUM_COURSES], int row, int col){
    int max_row = 0;
    int max_col = 0;
    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; i++){
            if (arr2[max_row][max_col] < arr2[i][j]){
               max_row = i;
               max_col = j;
            }
        }
    }
    return max_row;
}


#endif // MSU_CSC232_H_
