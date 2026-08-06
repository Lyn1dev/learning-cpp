// We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)

// This is the content of the .h file, which is where the declarations go
//int doubleNumber(int x); // function prototype for doubleNumber.h -- don't forget the semicolon!
//int getInteger();
//void addIntegerAndPrint(int x, int y);

#ifndef IO_H
#define IO_H

int readNumber();
void writeAnswer(int sum);

#endif // IO_H
