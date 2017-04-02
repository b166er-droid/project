
void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, int32_t a2, int32_t a3);

/* .text */
int32_t text() {
    void* esp1;
    int32_t edx2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t eax8;
    int32_t edx9;
    int32_t eax10;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32 - 4 + 4);
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp1) + 28, reinterpret_cast<uint32_t>(esp1) + 24);
    __asm__("cdq ");
    edx2 = v3 * (v4 + v5) / v6 + v3 * (v4 + v5) / v6 + v3 * (v4 + v5) / v6 + v7 * (v3 * (v4 + v5) / v6);
    eax8 = edx2 + edx2 + edx2;
    text("%d %d\n", v3 * (v4 + v5) / v6, eax8 + eax8);
    edx9 = __intrinsic() - ((__intrinsic() >> 1) - (v3 * (v4 + v5) / v6 + 1 + (v3 * (v4 + v5) / v6 + 1) + (v3 * (v4 + v5) / v6 + 1) - 4 >> 31) >> 31);
    eax10 = edx9 + edx9 + edx9;
    text("%d\n", ((__intrinsic() >> 1) - (v3 * (v4 + v5) / v6 + 1 + (v3 * (v4 + v5) / v6 + 1) + (v3 * (v4 + v5) / v6 + 1) - 4 >> 31) - (eax10 + eax10)) * ((__intrinsic() >> 1) - (v3 * (v4 + v5) / v6 + 1 + (v3 * (v4 + v5) / v6 + 1) + (v3 * (v4 + v5) / v6 + 1) - 4 >> 31) - (eax10 + eax10)) * (((__intrinsic() >> 1) - (v3 * (v4 + v5) / v6 + 1 + (v3 * (v4 + v5) / v6 + 1) + (v3 * (v4 + v5) / v6 + 1) - 4 >> 31) - (eax10 + eax10)) * ((__intrinsic() >> 1) - (v3 * (v4 + v5) / v6 + 1 + (v3 * (v4 + v5) / v6 + 1) + (v3 * (v4 + v5) / v6 + 1) - 4 >> 31) - (eax10 + eax10))), eax8 + eax8);
    return 0;
}

