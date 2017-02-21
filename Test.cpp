#include "Test.h"


void test()
{
    static const char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<char> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    static const int arr2[] = {5, 10, 12, 13, 19, 91};
    vector<int> vec2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );

    map<char,string> res = getHuffman(vec, vec2);

    if(res['f'] == "0"
       && res['c'] == "100"
       && res['d'] == "101"
       && res['a'] == "1100"
       && res['b'] == "1101"
       && res['e'] == "111"
       )
    {
        cout<<"Test: Pass"<<endl;
    }else
    {
        cout<<"Test: Fail"<<endl;
    }

}
