
void ___main();

void _scanf(int32_t a1, void* a2, void* a3);

/* .text */
void text(int32_t a1, void* a2, void* a3);

/* .text */
void text() {
    void* esp1;

    ___main();
    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 32 - 4 + 4);
    _scanf("%d %d", reinterpret_cast<uint32_t>(esp1) + 28, reinterpret_cast<uint32_t>(esp1) + 24);
    if (0) {
        text("%d\n", 2, reinterpret_cast<uint32_t>(esp1) + 24);
    } else {
        if (0) {
            text("%d\n", 8, reinterpret_cast<uint32_t>(esp1) + 24);
        } else {
            if (1) {
                text("default\n", reinterpret_cast<uint32_t>(esp1) + 28, reinterpret_cast<uint32_t>(esp1) + 24);
            } else {
                text("%d\n", 6, reinterpret_cast<uint32_t>(esp1) + 24);
            }
        }
    }
}
