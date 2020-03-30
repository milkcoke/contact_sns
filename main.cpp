#include <iostream>
#include <string>
#include "owner_contact_function.cpp"

using namespace std;
using MENU_N = int;

// 소유자 메뉴 실행 
void run_owner_menu() {
	MENU_N menu_number;
	
	do {
		cout << border_bar;
		cout << "1. 소유자 정보 입력 : " << '\n';
		cout << "2. 소유자 정보 조회 : " << '\n';
		cout << "3. 이전 메뉴! " << '\n';
		
		cin >> menu_number;
		
		switch (menu_number) {
			case 1:
				register_owner_info();
				break;
			case 2:
				print_owner_info();
				break;
			case 3:
				cout << "이전 메뉴로 돌아가요~.\n";
				break;
			default :
				cout << incorrect_input_warning;
		}
//		3입력시 이전 메뉴로 소유자 메뉴 탈출  
	} while (menu_number != 3);
	
}

void run_contact_menu() {
	MENU_N menu_number;
	
	do {
		cout << border_bar;
		cout << "1. 연락처 등록 : \n";
		cout << "2. 연락처 목록 조회\n";
		cout << "3. 이전 메뉴\n"; 
		
		cin >> menu_number;
		
		switch(menu_number) {
			case 1:
				register_contact();
				break;
			case 2:
				print_contact_list();
				break;
			case 3:
				cout << "이전 화면으로 돌아가요~\n";
				break;
			default :
				cout << incorrect_input_warning;
		} 
	} while (menu_number != 3);
}
void run_main_menu() {
	MENU_N menu_number;
	
	do {
		cout << border_bar;
		cout << "1. 소유자 관리 기능" << '\n';
		cout << "2. 연락처 관리 기능" << '\n';
		cout << "-1. 프로그램 종료" << '\n';
		cout << "==========================" << '\n';
		cout << "메뉴 번호 입력 : ";
		cin >> menu_number; 
		
		switch (menu_number) {
			case 1:
				run_owner_menu();
				break;
			case 2:
				run_contact_menu();
				break;
			case -1:
				cout << "프로그램을 종료합니다.\n";
				break;
			default:
				cout << incorrect_input_warning;
		} 
	} while (menu_number != -1);
}


// 전역변수 파티
//  





int main(void){
	run_main_menu();
	return 0;
}
