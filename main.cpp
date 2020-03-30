#include <iostream>
#include <string>
#include "owner_contact_function.cpp"

using namespace std;
using MENU_N = int;

// ������ �޴� ���� 
void run_owner_menu() {
	MENU_N menu_number;
	
	do {
		cout << border_bar;
		cout << "1. ������ ���� �Է� : " << '\n';
		cout << "2. ������ ���� ��ȸ : " << '\n';
		cout << "3. ���� �޴�! " << '\n';
		
		cin >> menu_number;
		
		switch (menu_number) {
			case 1:
				register_owner_info();
				break;
			case 2:
				print_owner_info();
				break;
			case 3:
				cout << "���� �޴��� ���ư���~.\n";
				break;
			default :
				cout << incorrect_input_warning;
		}
//		3�Է½� ���� �޴��� ������ �޴� Ż��  
	} while (menu_number != 3);
	
}

void run_contact_menu() {
	MENU_N menu_number;
	
	do {
		cout << border_bar;
		cout << "1. ����ó ��� : \n";
		cout << "2. ����ó ��� ��ȸ\n";
		cout << "3. ���� �޴�\n"; 
		
		cin >> menu_number;
		
		switch(menu_number) {
			case 1:
				register_contact();
				break;
			case 2:
				print_contact_list();
				break;
			case 3:
				cout << "���� ȭ������ ���ư���~\n";
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
		cout << "1. ������ ���� ���" << '\n';
		cout << "2. ����ó ���� ���" << '\n';
		cout << "-1. ���α׷� ����" << '\n';
		cout << "==========================" << '\n';
		cout << "�޴� ��ȣ �Է� : ";
		cin >> menu_number; 
		
		switch (menu_number) {
			case 1:
				run_owner_menu();
				break;
			case 2:
				run_contact_menu();
				break;
			case -1:
				cout << "���α׷��� �����մϴ�.\n";
				break;
			default:
				cout << incorrect_input_warning;
		} 
	} while (menu_number != -1);
}


// �������� ��Ƽ
//  





int main(void){
	run_main_menu();
	return 0;
}
