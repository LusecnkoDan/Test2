#ifndef SHOWFIRSTWORDS_H
#define SHOWFIRSTWORDS_H

#include "main.h"

TEST(showFirstWords, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out2.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out2.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp2.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp2.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected2.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out2.txt", "r") : outputData = fopen("../../testlab2/tests/output/out2.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test2) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out3.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out3.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp3.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp3.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected3.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out3.txt", "r") : outputData = fopen("../../testlab2/tests/output/out3.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test3) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/out4.txt", "wb") : outputFile = fopen("../../testlab2/tests/output/out4.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }

    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/inp4.txt", MAXLINE) : strncpy(inFile, "../../testlab2/tests/input/inp4.txt", MAXLINE);
    load(txt, inFile);

    showfirstwords(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected4.txt", "r") : expectedData = fopen("../../testlab2/tests/expected/expected4.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/out4.txt", "r") : outputData = fopen("../../testlab2/tests/output/out4.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
     } else {
        FAIL();
    }
}

TEST(showFirstWords, test4) {

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

    showfirstwords(txt);

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
#endif // SHOWFIRSTWORDS_H
