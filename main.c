#include <stdio.h>
#include <stdlib.h>
#include "ssv_types.h"
#include "Hdr_80211.h"
#include "pkt.h"

#define PRINT_GRID 	printf("+--------------------+-----+\n");


void print_fcf(u16 fc_temp)
{
	printf("\n");
	printf("Frame Control field:\n");
	PRINT_GRID;
	printf("| Protocol Version   | 0x%x |\n", GET_FC_VER(fc_temp));
	PRINT_GRID;
	printf("| Type               | 0x%x |\n", GET_FC_TYPE(fc_temp));
	PRINT_GRID;
	printf("| SubType            | 0x%x |\n", GET_FC_SUBTYPE(fc_temp));
	PRINT_GRID;
	printf("| ToDS               | 0x%x |\n", GET_FC_TODS(fc_temp));
	PRINT_GRID;
	printf("| FromDS             | 0x%x |\n", GET_FC_FROMDS(fc_temp));
	PRINT_GRID;
	printf("| More Fragments     | 0x%x |\n", GET_FC_MOREFRAGS(fc_temp));
	PRINT_GRID;
	printf("| Retry              | 0x%x |\n", GET_FC_RETRY(fc_temp));
	PRINT_GRID;
	printf("| Power Management   | 0x%x |\n", GET_FC_PWRMGMT(fc_temp));
	PRINT_GRID;
	printf("| More Data          | 0x%x |\n", GET_FC_MOREDATA(fc_temp));
	PRINT_GRID;
	printf("| Protected Frame    | 0x%x |\n", GET_FC_PROTECTED(fc_temp));
	PRINT_GRID;
	printf("| Order              | 0x%x |\n", GET_FC_ORDER(fc_temp));
	PRINT_GRID;
}

void frame_type_check(u16 type) 
{
	printf("\n");
	printf("Frame type: ");
	if (type == FC_TYPE_MGMT) {
		printf("Management Frame\n");
	}
	else if (type == FC_TYPE_CTRL) {
		printf("Control Frame\n");
	}
	else if (type == FC_TYPE_DATA) {
		printf("Data Frame\n");
	}
	else {
		printf("Error!\n");
	}
}

int main(void) 
{
	u16 fc_temp;

	common_data_mac_header *hdr = (common_data_mac_header *)(pkt);
	fc_temp = hdr->fc;

	printf("########################\n");
	print_fcf(fc_temp);
	frame_type_check(GET_FC_TYPE(hdr->fc));
	printf("########################\n");


    system("pause");
    return 0;
}


