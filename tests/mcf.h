#ifndef MCF_H
#define MCF_H
#include "main.h"

TEST(mcf, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out7.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out7.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp7.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp7.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 3);
    mcf(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected7.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected7.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out7.txt", "r") : outputData = fopen("../../testlab2/tests/output/out7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mcf, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out8.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out8.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp8.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp8.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 7);
    mcf(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out8.txt", "r") : outputData = fopen("../../testlab2/tests/output/out8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mcf, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out5.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/output5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp5.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/nput/input5.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 3);
    mcf(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected5.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected5.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out5.txt", "r") : outputData = fopen("../../testlab2/tests/output/out5.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // MCF_H
