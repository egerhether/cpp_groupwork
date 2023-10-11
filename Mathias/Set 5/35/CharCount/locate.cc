#include "CharCount.ih"

CharCount::Action CharCount::locate(char c, size_t &idx) {
    Char tempChar;
    tempChar.ch = c;

    auto it = std::lower_bound(charInfo.ptr, charInfo.ptr + charInfo.nCharObj, tempChar,
        [](const Char* a, const Char& b) {
            return a->ch < b.ch;
        });

    idx = it - charInfo.ptr;

    if (it != charInfo.ptr + charInfo.nCharObj && (*it)->ch == c) {
        return INC;
    }

    if (it == charInfo.ptr + charInfo.nCharObj) {
        return APPEND;
    }

    return INSERT;
}
