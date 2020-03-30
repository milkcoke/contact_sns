#ifndef CONTACT_OWNER_INFO_H
#define CONTACT_OWNER_INFO_H
typedef struct OwnerInfo {
	char name[10];
	char phone_number[13];
	char email[30];
	char address[50];
//	트위터 계정 
	char twitter_account[20];
} OwnerInfo;

typedef struct ContactInfo {
	char name[10];
	char phone_number[13];
	char email[30];
	char address[50];
} ContactInfo;

#endif
