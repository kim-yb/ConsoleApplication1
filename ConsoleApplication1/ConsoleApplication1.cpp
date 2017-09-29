// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++) {
			cout << "index i=" << i << " ,j= ", j;
			cout << "\n";
		}
		cout << "\n";
}
    return 0;
}

