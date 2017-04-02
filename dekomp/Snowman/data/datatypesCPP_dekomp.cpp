
void ___main();

void _scanf(int32_t a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, int32_t a8);

/* .text */
void text(int32_t a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, int32_t a8);

/* .text */
int32_t text() {
    void* esp1;
    int1_t zf2;
    void* esp3;
    void* v4;
    void* v5;
    int32_t v6;
    void* v7;
    void* v8;
    int32_t v9;
    void* esp10;
    void* v11;
    int32_t v12;
    int32_t v13;
    void* esp14;
    int32_t v15;
    int32_t v16;
    void* esp17;
    int32_t v18;
    void* esp19;
    void* esp20;
    int32_t v21;
    int32_t v22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    void* esp27;
    void* esp28;
    void* esp29;

    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4) & 0xfffffff0) - 0xd0);
    zf2 = esp1 == 0;
    ___main();
    esp3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp1) - 4 + 4);
    _scanf("%c %c %c %c", reinterpret_cast<uint32_t>(esp3) + 0xbf, reinterpret_cast<uint32_t>(esp3) + 0xbc, reinterpret_cast<uint32_t>(esp3) + 0xb8, reinterpret_cast<uint32_t>(esp3) + 0xb6, v4, v5, v6);
    text("%c %c %c %c\n", 97, 97, 97, 97, v7, v8, v9);
    esp10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp3) - 4 + 4 - 4 + 4);
    _scanf("%d %d %d %d %d", reinterpret_cast<uint32_t>(esp10) + 0xb5, reinterpret_cast<uint32_t>(esp10) + 0xb2, reinterpret_cast<uint32_t>(esp10) + 0xac, reinterpret_cast<uint32_t>(esp10) + 0xa8, reinterpret_cast<uint32_t>(esp10) + 0xa0, v11, v12);
    text("%d %d %d %d %d\n", 16, 16, 16, 16, 16, 0, v13);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp10) - 4 + 4 - 4 + 4);
    _scanf("%d %d %d %d %d", reinterpret_cast<uint32_t>(esp14) + 0x9f, reinterpret_cast<uint32_t>(esp14) + 0x9c, reinterpret_cast<uint32_t>(esp14) + 0x98, reinterpret_cast<uint32_t>(esp14) + 0x94, reinterpret_cast<uint32_t>(esp14) + 0x88, 0, v15);
    text("%d %d %d %d %d\n", 16, 16, 16, 16, 16, 0, v16);
    esp17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp14) - 4 + 4 - 4 + 4);
    __asm__("fld qword [0x40a150]");
    __asm__("fstp qword [esp+0x78]");
    _scanf("%f %f %f", reinterpret_cast<uint32_t>(esp17) + 0x84, reinterpret_cast<uint32_t>(esp17) + 0x78, reinterpret_cast<uint32_t>(esp17) + 96, 16, 16, 0, v18);
    __asm__("fld qword [esp+0x78]");
    __asm__("fld dword [esp+0x84]");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    text("%f %f %f\n", reinterpret_cast<uint32_t>(esp17) + 0x84, reinterpret_cast<uint32_t>(esp17) + 0x78, reinterpret_cast<uint32_t>(esp17) + 96, 16, 0x99999800, 0x81999999, 0x4003);
    esp19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp17) - 4 + 4 - 4 + 4);
    __asm__("fld dword [esp+0x84]");
    __asm__("fld qword [esp+0x78]");
    __asm__("fucom st1");
    __asm__("fnstsw ax");
    __asm__("sahf ");
    if (__intrinsic()) {
        __asm__("fstp st0");
        __asm__("fstp st0");
    } else {
        __asm__("fucompp ");
        __asm__("fnstsw ax");
        __asm__("sahf ");
        if (zf2) {
        }
    }
    __asm__("fld dword [esp+0x84]");
    __asm__("fld qword [esp+0x78]");
    __asm__("fucom st1");
    __asm__("fnstsw ax");
    __asm__("sahf ");
    if (__intrinsic()) {
        __asm__("fstp st0");
        __asm__("fstp st0");
    } else {
        __asm__("fucompp ");
        __asm__("fnstsw ax");
        __asm__("sahf ");
        if (zf2) {
        }
    }
    _scanf("%d %d %d %d %d", reinterpret_cast<uint32_t>(esp19) + 72, reinterpret_cast<uint32_t>(esp19) + 72 + 4, reinterpret_cast<uint32_t>(esp19) + 72 + 8, reinterpret_cast<uint32_t>(esp19) + 72 + 12, reinterpret_cast<uint32_t>(esp19) + 72 + 16, reinterpret_cast<uint32_t>(esp19) + 72 + 20, 0x4003);
    text("%d %d %d %d %d\n", 0, 1, 2, 3, 4, 5, 0x4003);
    esp20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp19) - 4 + 4 - 4 + 4);
    v21 = 0x74736554;
    v22 = 0x6b657420;
    _scanf("%c %c %c %c %c", reinterpret_cast<uint32_t>(esp20) + 59, reinterpret_cast<uint32_t>(esp20) + 59 + 1, reinterpret_cast<uint32_t>(esp20) + 59 + 2, reinterpret_cast<uint32_t>(esp20) + 59 + 3, reinterpret_cast<uint32_t>(esp20) + 59 + 4, reinterpret_cast<uint32_t>(esp20) + 59 + 5, 0x4003);
    eax23 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v22) + 1));
    eax24 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v21) + 3));
    eax25 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v21) + 2));
    eax26 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v21) + 1));
    text("%c %c %c %c %c\n", 84, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax26)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    esp27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp20) - 4 + 4 - 4 + 4);
    _scanf("%d %f", reinterpret_cast<uint32_t>(esp27) + 48, reinterpret_cast<uint32_t>(esp27) + 48 + 4, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    text("%d %f", 1, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    esp28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp27) - 4 + 4 - 4 + 4);
    _scanf("%d", reinterpret_cast<uint32_t>(esp28) + 44, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    text("%d\n", 1, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    esp29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp28) - 4 + 4 - 4 + 4);
    _scanf("%c", reinterpret_cast<uint32_t>(esp29) + 43, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    text("%c\n", reinterpret_cast<uint32_t>(esp29) + 43, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    _scanf("%d %f", reinterpret_cast<uint32_t>(esp29) - 4 + 4 - 4 + 4 + 32, reinterpret_cast<uint32_t>(esp29) - 4 + 4 - 4 + 4 + 32 + 4, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    text("%d %f\n", 1, 97, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax25)), static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax24)), 32, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax23)), 0x4003);
    return 0;
}
