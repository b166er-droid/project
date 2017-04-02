
void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, void* a2, void* a3);

/* .text */
int32_t text() {
    void* esp1;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 48 - 4 + 4);
    _scanf("%f %f", reinterpret_cast<uint32_t>(esp1) + 44, reinterpret_cast<uint32_t>(esp1) + 40);
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [esp+0x28]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x28]");
    __asm__("fmulp st1, st0");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld st0");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x2c]");
    __asm__("faddp st1, st0");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [esp+0x28]");
    __asm__("fmulp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fld dword [0x40a0d4]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [esp+0x28]");
    __asm__("fld dword [esp+0x28]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    text("%f %f\n", reinterpret_cast<uint32_t>(esp1) + 44, reinterpret_cast<uint32_t>(esp1) + 40);
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [0x40a0d8]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [0x40a0dc]");
    __asm__("fsubp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [0x40a0e0]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [esp+0x2c]");
    __asm__("fld dword [esp+0x2c]");
    __asm__("fstp qword [esp+0x4]");
    text("%f\n", reinterpret_cast<uint32_t>(esp1) + 44, reinterpret_cast<uint32_t>(esp1) + 40);
    return 0;
}
