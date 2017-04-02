
void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, void* a2, void* a3);

/* .text */
int32_t text() {
    void* esp1;
    void* v2;
    void* v3;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 64 - 4 + 4);
    _scanf("%f %f", reinterpret_cast<uint32_t>(esp1) + 52, reinterpret_cast<uint32_t>(esp1) + 48);
    __asm__("fld dword [esp+0x34]");
    __asm__("fld dword [esp+0x30]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x30]");
    __asm__("fmulp st1, st0");
    __asm__("fld dword [esp+0x34]");
    __asm__("fdivp st1, st0");
    __asm__("fnstcw word [esp+0x2e]");
    __asm__("fldcw word [esp+0x2c]");
    __asm__("fistp dword [esp+0x3c]");
    __asm__("fldcw word [esp+0x2e]");
    __asm__("fld dword [esp+0x34]");
    __asm__("fld st0");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x34]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x34]");
    __asm__("fld dword [esp+0x30]");
    __asm__("fmulp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fld dword [0x40a0d4]");
    __asm__("fmulp st1, st0");
    __asm__("fldcw word [esp+0x2c]");
    __asm__("fistp dword [esp+0x38]");
    __asm__("fldcw word [esp+0x2e]");
    __asm__("fld dword [esp+0x34]");
    __asm__("fld dword [esp+0x30]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [esp+0x3c]");
    __asm__("fmulp st1, st0");
    __asm__("fild dword [esp+0x38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x34]");
    __asm__("fild dword [esp+0x3c]");
    __asm__("fld dword [esp+0x34]");
    __asm__("faddp st1, st0");
    __asm__("fild dword [esp+0x38]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x34]");
    __asm__("fld dword [esp+0x30]");
    __asm__("fmulp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fld dword [0x40a0d4]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [esp+0x30]");
    __asm__("fld dword [esp+0x30]");
    __asm__("fld dword [esp+0x34]");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    text("%f %f\n", reinterpret_cast<uint32_t>(esp1) + 52, reinterpret_cast<uint32_t>(esp1) + 48);
    text("%d %d\n", v2, v3);
    return 0;
}

