#!/bin/bash
echo '#include <stdio.h> int main() { puts("Programming is like building a multilingual puzzle"); return 0; }' | gcc -xc - && ./a.out
