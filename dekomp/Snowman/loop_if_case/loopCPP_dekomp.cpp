
void ___main();

void _scanf(int32_t a1, void* a2);

/* .text */
void text(int32_t a1, void* a2);

/* .text */
int32_t text() {
    void* esp1;
    void* esp2;
    int32_t v3;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32 - 4 + 4);
    _scanf("%d", reinterpret_cast<uint32_t>(esp1) + 24);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp1) - 4 + 4);
    v3 = 0;
    while (v3 <= 5) {
        ++v3;
    }
    while (1) {
    }
    do {
    } while (1);
    text("%d\n", reinterpret_cast<uint32_t>(esp2) + 24);
    return 0;
}
