__size32 global1[9999999];

void proc1();
__size32 proc3(__size32 param1);
void proc5();

// address: 0x401450
int main(int argc, char *argv[], char *envp[]) {
    proc1();
}

// address: 0x401960
void proc1() {
    __size32 eax; 		// r24
    __size32 ebx; 		// r27
    __size32 ebx_1; 		// r27{16}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 *esp; 		// r28
    __size32 *esp_1; 		// r28{16}
    __size32 *esp_2; 		// r28{4}
    __size32 *esp_3; 		// r28{72}
    __size32 *esp_4; 		// r28{62}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 4]{85}
    __size32 *local3; 		// esp_4{62}
    __size32 *local4; 		// esp_3{72}

    ecx = *(global1 + 0x4be8);
    if (ecx != 0) {
    }
    *(__size32*)(global1 + 0x4be8) = 1;
    esp_2 = (esp - 28);
    ebx = global1;
    local3 = esp_2;
    local4 = esp_2;
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
    flags = LOGICALFLAGS32(ebx);
    if (ebx != 0) {
        do {
            esp_4 = local3;
            (*global1[ebx])(local1, eax, ecx, edx, ebx, esi, flags, ZF, CF);
            local3 = esp_1;
            local4 = esp_1;
            ebx = ebx_1 - 1;
            flags = SUBFLAGS32(ebx_1, 1, ebx_1 - 1);
        } while (ebx_1 != 1);
    }
    esp_3 = local4;
    *(__size32*)esp_3 = 0x4018e0;
    proc5(local0, eax, ecx, edx, ebx, esi, flags, ZF, CF);
    return;
}

// address: 0x401410
__size32 proc3(__size32 param1) {
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{35}

    if (param1 != 0 && param1 != 1) {
        eax = proc3(param1 - 1);
        eax_1 = proc3(param1 - 2);
        eax = eax_1 + eax;
    } else {
        eax = 1;
    }
    return eax;
}

// address: 0x4012e0
void proc5() {
/* goto m[0x40e1ec]*/
}

