#include "INFO.h"
using namespace std;
using MENU_N = int;


// ������ ����  
OwnerInfo owner;
//����ó ���� �迭  
ContactInfo contacts[100];
// ����ó ���� 
unsigned int contact_number = 1; 
const string incorrect_input_warning = "�߸� �Է��ϼ̾��. �ٽ� ���ּ���\n";
const string border_bar = "=======================\n";

void register_owner_info() {
	cout << border_bar;
	cout << "������ ��: ";
	cin >> owner.name;
	
	cout << "������ ����ó :";
	cin >> owner.phone_number;
	
	cout << "������ e-mail : ";
	cin >> owner.email;
	 
	cout << "������ twitter ���� : ";
	cin >> owner.twitter_account;
	
	cout<< "�Է� �Ϸ�!" << '\n'; 
} 

void edit_owner_info() {
	MENU_N menu_number;
	cout << border_bar;
	
	cout << "1. ������ �̸� ����\n";
	cout << "2. ������ ����ó ����\n";
	cout << "3. ������ �̸��� ����\n";
	cout << "4. ������ �ּ� ����\n";
	cout << "5. ������ Ʈ���� ���� ����\n";
	cout << "6. ���� X ���� �޴���! \n";
	cin >> menu_number;
	
	switch(menu_number) {
		case 1:
			cin >> owner.name;
			cout << "������ �̸��� ����Ǿ����ϴ�!\n";
			break;
		case 2:
			cin >> owner.phone_number;
			cout << "�������� ��ȭ��ȣ�� ����Ǿ����ϴ�!\n";
			break;
		case 3:
			cin >> owner.email;
			cout << " �������� �̸����� ����Ǿ����ϴ�.\n";
			break;
		case 4:
			cin >> owner.address;
			cout << "�������� �ּҰ� ����Ǿ����ϴ�!\n";
			break;
		case 5:
			cin >> owner.twitter_account;
			cout << "�������� Ʈ���� ������ ����Ǿ����ϴ�!\n";
			break;
		case 6:
			cout << "���� �޴��� �̵��մϴ�!\n";
			break;
		default:
			cout << "�ùٸ� �޴� ��ư�� �Է��ϼ���!\n";
	} while (menu_number != 6);
	
}
// ������ ���� ���  
void print_owner_info() {
	cout << border_bar;
	cout << "�����ڸ� : " << owner.name << '\n';
	cout << "������ ����ó : " << owner.phone_number << '\n';
	cout << "������ e-mail : " << owner.email << '\n';
	cout << "������ twitter ����: " << owner.twitter_account << '\n';
}

bool is_empty_contact() {
	return !contact_number; //contact number 0 �� �������� ��!! 
}
// ����ó �߰� 
void register_contact() {
	cout << border_bar;
	cout << "����ó �̸� �Է�: ";
	cin >> contacts[contact_number].name;
	
	cout << "����ó ��ȣ �Է�: ";
	cin >> contacts[contact_number].phone_number;
	
	cout << "����ó �̸��� �Է�: ";
	cin >> contacts[contact_number].email;
	
	cout << "����ó �ּ� �Է�: ";
	cin >> contacts[contact_number].address;	
	
	contact_number++;
	
	cout << "�Է� �Ϸ�! " << '\n';
} 

// user ��� ��� 
void print_contact_list() {
	cout << border_bar;
	for (auto i = 1; i < contact_number; i++) {
		cout << i << " : " << contacts[i].name << '\n';
	}
	cout << border_bar;
}
