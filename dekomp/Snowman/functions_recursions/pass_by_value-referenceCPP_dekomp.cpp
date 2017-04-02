
/* .text */
int32_t text(int32_t a1, void* a2, void* a3) {
    return a1 + 10;
}

/* pass_by_reference(int*) */
int32_t __Z17pass_by_referencePi(int32_t* a1) {
    *a1 = *a1 + 10;
    return *a1;
}

void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void _main() {
    void* esp1;
    int32_t v2;
    int32_t eax3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;
    int32_t v7;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 48 - 4 + 4);
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp1) + 36, reinterpret_cast<uint32_t>(esp1) + 32);
    eax3 = text(v2, reinterpret_cast<uint32_t>(esp1) + 36, reinterpret_cast<uint32_t>(esp1) + 32);
    eax5 = text(v4, reinterpret_cast<uint32_t>(esp1) + 36, reinterpret_cast<uint32_t>(esp1) + 32);
    text("%d %d %d %d\n", v6, v7, eax3, eax5);
}

