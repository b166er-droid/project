
/* .text */
int32_t text(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;
    int32_t eax7;

    if (!a1 || a1 == 1) {
        eax3 = 1;
    } else {
        eax5 = text(a1 - 1, v4);
        eax7 = text(a1 - 2, v6);
        eax3 = eax7 + eax5;
    }
    return eax3;
}

void ___main();

void _scanf(int32_t a1, int32_t a2);

/* .text */
void text(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t _main() {
    int32_t v1;
    int32_t v2;
    int32_t eax3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;
    int32_t eax7;

    ___main();
    _scanf("%d", v1);
    eax3 = text(v2, v1);
    eax5 = text(v4 + 2, v1);
    eax7 = text(v6 + 4, v1);
    text("%d %d %d\n", eax3, eax5, eax7);
    return 0;
}

