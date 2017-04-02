
void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, int32_t a2, void* a3);

/* .text */
void text() {
    void* esp1;
    void* esp2;
    void* esp3;
    void* esp4;
    void* esp5;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32 - 4 + 4);
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp1) + 28, reinterpret_cast<uint32_t>(esp1) + 24);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp1) - 4 + 4);
    if (!1) {
        text("%d\n", 6, reinterpret_cast<uint32_t>(esp1) + 24);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 4 + 4);
    }
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp2) + 28, reinterpret_cast<uint32_t>(esp2) + 24);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp2) - 4 + 4);
    if (!0) {
        text("%d\n", 6, reinterpret_cast<uint32_t>(esp2) + 24);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp3) - 4 + 4);
    }
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp3) + 28, reinterpret_cast<uint32_t>(esp3) + 24);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp3) - 4 + 4);
    if (1) {
        text("%d\n", 2, reinterpret_cast<uint32_t>(esp3) + 24);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp4) - 4 + 4);
    } else {
        text("%d\n", 6, reinterpret_cast<uint32_t>(esp3) + 24);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp4) - 4 + 4);
    }
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp5) + 28, reinterpret_cast<uint32_t>(esp5) + 24);
    if (0) {
        if (1) {
            text("%d\n", 2, reinterpret_cast<uint32_t>(esp5) + 24);
        } else {
            text("%d %d\n", 6, 2);
        }
    } else {
        text("%d\n", 6, reinterpret_cast<uint32_t>(esp5) + 24);
    }
}
