#include "INFO.h"
using namespace std;
using MENU_N = int;


// 소유자 정보  
OwnerInfo owner;
//연락처 저장 배열  
ContactInfo contacts[100];
// 연락처 갯수 
unsigned int contact_number = 1; 
const string incorrect_input_warning = "잘못 입력하셨어요. 다시 해주세요\n";
const string border_bar = "=======================\n";

void register_owner_info() {
	cout << border_bar;
	cout << "소유자 명: ";
	cin >> owner.name;
	
	cout << "소유자 연락처 :";
	cin >> owner.phone_number;
	
	cout << "소유자 e-mail : ";
	cin >> owner.email;
	 
	cout << "소유자 twitter 계정 : ";
	cin >> owner.twitter_account;
	
	cout<< "입력 완료!" << '\n'; 
} 

void edit_owner_info() {
	MENU_N menu_number;
	cout << border_bar;
	
	cout << "1. 소유자 이름 수정\n";
	cout << "2. 소유자 연락처 수정\n";
	cout << "3. 소유자 이메일 수정\n";
	cout << "4. 소유자 주소 수정\n";
	cout << "5. 소유자 트위터 계정 수정\n";
	cout << "6. 수정 X 이전 메뉴로! \n";
	cin >> menu_number;
	
	switch(menu_number) {
		case 1:
			cin >> owner.name;
			cout << "소유자 이름이 변경되었습니다!\n";
			break;
		case 2:
			cin >> owner.phone_number;
			cout << "소유자의 전화번호가 변경되었습니다!\n";
			break;
		case 3:
			cin >> owner.email;
			cout << " 소유자의 이메일이 변경되었습니다.\n";
			break;
		case 4:
			cin >> owner.address;
			cout << "소유자의 주소가 변경되었습니다!\n";
			break;
		case 5:
			cin >> owner.twitter_account;
			cout << "소유자의 트위터 계정이 변경되었습니다!\n";
			break;
		case 6:
			cout << "이전 메뉴로 이동합니다!\n";
			break;
		default:
			cout << "올바른 메뉴 버튼을 입력하세요!\n";
	} while (menu_number != 6);
	
}
// 소유자 정보 출력  
void print_owner_info() {
	cout << border_bar;
	cout << "소유자명 : " << owner.name << '\n';
	cout << "소유자 연락처 : " << owner.phone_number << '\n';
	cout << "소유자 e-mail : " << owner.email << '\n';
	cout << "소유자 twitter 계정: " << owner.twitter_account << '\n';
}

bool is_empty_contact() {
	return !contact_number; //contact number 0 인 시점에서 끗!! 
}
// 연락처 추가 
void register_contact() {
	cout << border_bar;
	cout << "연락처 이름 입력: ";
	cin >> contacts[contact_number].name;
	
	cout << "연락처 번호 입력: ";
	cin >> contacts[contact_number].phone_number;
	
	cout << "연락처 이메일 입력: ";
	cin >> contacts[contact_number].email;
	
	cout << "연락처 주소 입력: ";
	cin >> contacts[contact_number].address;	
	
	contact_number++;
	
	cout << "입력 완료! " << '\n';
} 

// user 목록 출력 
void print_contact_list() {
	cout << border_bar;
	for (auto i = 1; i < contact_number; i++) {
		cout << i << " : " << contacts[i].name << '\n';
	}
	cout << border_bar;
}
