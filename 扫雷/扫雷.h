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
//��ʼ������
void Initialize(char arr[ROWS][COLS], int rows, int cols,char set);//��Ϊ��char���͵ģ�����ֱ��дchar���ٸ����β�
//��ӡ����
void print(char arr[ROWS][COLS], int row, int col);
//���ɵ���
void serbomm(char arr[ROWS][COLS], int row, int col);
//�ŵ���
int findboom(char arr1[ROWS][COLS], char arr2[ROWS][COLS] ,int row, int col);
