#ifndef STACK_H
#define STACK_H

class StackOfIntegers
{
public:                        //公開的方法：可以被純取
  StackOfIntegers();           //建構子
  bool isEmpty() const;        //判斷是否為空的函數
  int peek() const;            //取出最上面元數的函數
  void push(int value);        //把資料放入的函數
  int pop();                   //取出最上面資料的函數
  int getSize() const;         //取得堆疊大小的函數

private:                       //將資料庫影藏
  int elements[100];           //大小為100
  int size;                    //設一個值
};

#endif
