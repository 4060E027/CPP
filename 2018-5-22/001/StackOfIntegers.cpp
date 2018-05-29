#include "StackOfIntege.h"

StackOfIntegers::StackOfIntegers()        //建構值
{
  size = 0;                               //大小等於零
}

bool StackOfIntegers::isEmpty() const     //判斷isEmpty函數
{
  return (size == 0);                     //大小等於零回傳true否則回傳false
}

int StackOfIntegers::peek() const         //peek函數
{
  return elements[size - 1];              //回傳最上面一位的值
}

void StackOfIntegers::push(int value)     //push函數
{
  elements[size++] = value;               //將一個值放進資料庫
}

int StackOfIntegers::pop()                //pop函數
{
  return elements[--size];                //將最上面的值取出
}

int StackOfIntegers::getSize() const      //getSize函數
{
  return size;                            //會傳目前的大小值
}
