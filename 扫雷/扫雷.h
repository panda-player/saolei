#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#pragma once
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdlib.h>
#define count 10
void medu();
//初始化棋盘
void Initialize(char arr[ROWS][COLS], int rows, int cols,char set);//因为是char类型的，所以直接写char，再给个形参
//打印棋盘
void print(char arr[ROWS][COLS], int row, int col);
//生成地雷
void serbomm(char arr[ROWS][COLS], int row, int col);
//排地雷
int findboom(char arr1[ROWS][COLS], char arr2[ROWS][COLS] ,int row, int col);
