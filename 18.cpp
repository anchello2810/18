// 18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Stack
{
private:
    int num = 0;
    int* p_darr = new int[num];
public:
    void Push(int x)
    {
        int* p_newdarr = new int[num + 1];
        std::cout << "Новый элемент" << x;
        for (int i = 0; i < num; i++)
        {
            p_newdarr[i] = p_darr[i];
        }
        p_newdarr[num] = x;
        delete[] p_darr;
        num++;
        p_darr = p_newdarr;

    }
    
    int Pop(int* p_darr)
    {
    return p_darr[num + 1];
    }
    void Print()
    {
        for (int i = 0; i < num; i++)
            std::cout << *(p_darr + i); 
    }
    Stack() 
    {
        delete[] p_darr;

    }
};
int main()
{
    Stack v;
    v.Print();
}

