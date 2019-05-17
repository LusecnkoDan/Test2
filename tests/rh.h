#ifndef RH_H
#define RH_H
#include "main.h"


TEST(rh, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out6.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp6.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp6.txt", MAXLINE);
    load(txt, inFile);

    rh(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected6.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected6.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out6.txt", "r") : outputData = fopen("../../testlab2/tests/output/out6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rh, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out1.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out1.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp1.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp1.txt", MAXLINE);
    load(txt, inFile);

    rh(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected1.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out1.txt", "r") : outputData = fopen("../../testlab2/tests/output/out1.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rh, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out5.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out5.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp5.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp5.txt", MAXLINE);
    load(txt, inFile);

    rh(txt);
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

TEST(rh, test4) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out9.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp9.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp9.txt", MAXLINE);
    load(txt, inFile);

    mwcrsr(txt, 1, 1);
    rh(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);
    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out9.txt", "r") : outputData = fopen("../../testlab2/tests/output/out9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
#endif // RH_H
