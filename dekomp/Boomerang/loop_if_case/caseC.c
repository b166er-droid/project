__size32 global1[9999999];

void proc1();
void proc5();

// address: 0x401410
int main(int argc, char *argv[], char *envp[]) {
    proc1();
}

// address: 0x401940
void proc1() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{18}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 *esp; 		// r28
    __size32 *esp_1; 		// r28{72}
    __size32 *esp_2; 		// r28{16}
    __size32 *esp_3; 		// r28{62}
    __size32 *esp_4; 		// r28{4}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 4]{85}
    __size32 *local3; 		// esp_3{62}
    __size32 *local4; 		// esp_1{72}

    ecx = *(global1 + 0x4bf8);
    if (ecx != 0) {
    }
    *(__size32*)(global1 + 0x4bf8) = 1;
    esp_4 = (esp - 28);
    ebx = global1;
    local3 = esp_4;
    local4 = esp_4;
    if (global1 == -1) {
        ebx = 0;
        eax = ebx + 1;
        edx = global1[(ebx + 1)];
        while (global1[(ebx + 1)] != 0) {
            ebx++;
            eax = ebx + 1;
            edx = global1[(ebx + 1)];
        }
    }
    ebx_1 = ebx;
    flags = LOGICALFLAGS32(ebx_1);
    if (ebx_1 != 0) {
        do {
            esp_3 = local3;
            (*global1[ebx_1])(local1, eax, ecx, edx, ebx_1, esi, flags, ZF, CF);
            local3 = esp_2;
            local4 = esp_2;
            ebx_1 = ebx - 1;
            flags = SUBFLAGS32(ebx, 1, ebx - 1);
        } while (ebx != 1);
    }
    esp_1 = local4;
    *(__size32*)esp_1 = 0x4018c0;
    proc5(local0, eax, ecx, edx, ebx_1, esi, flags, ZF, CF);
    return;
}

// address: 0x4012e0
void proc5() {
/* goto m[0x40e1f0]*/
}

