#include <iostream>
#include <string>
//variant #1
using namespace std;

//#1
string delete_all_spaces(string str)
{
    string buffer;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            buffer += str[i];
    }
    return buffer;
}

//#3
string reverse(string str)
{
    string buffer;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        buffer += str[i];
    }
    return buffer;
}

//#6
int cout_of_words(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            if (i + 1 >= str.length() || str[i + 1] == ' ')
                count++;
        }
    }
    return count;
}

int lenght_of_large_word(string str)
{
    int lenght = 0;
    int buf_len = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            buf_len++;
            if (i + 1 >= str.length() || str[i + 1] == ' ')
            {
                if (buf_len > lenght) lenght = buf_len;
                buf_len = 0;
            }
        }
    }
    return lenght;
}

string reverse_each_word(string str)
{
    string result;
    string word;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            word += str[i];
            if (i + 1 >= str.length() || str[i + 1] == ' ')
            {
                result += reverse(word);
                word = "";
            }
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

string remove_word(string str)
{
    string result;
    string word;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            word += str[i];
            if (i + 1 >= str.length() || str[i + 1] == ' ')
            {
                if (word.length() >= 5)
                    result += word;
                word = "";
            }
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    cout << remove_word("dddfff f fdddddg");
}