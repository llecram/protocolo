#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <NTL/ZZ.h>
using namespace NTL;
using namespace std;
static string alf="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int gcd(int, int);
int gcdext(int, int);
int inversa(int ,int );
int modulo(int, int);
int genera();
int string_to_int(string);
string int_to_string(int);
#endif // OPERACIONES_H_INCLUDED
