struct Readability;
struct Readability *makeText(char *text);
int getNumberOfSentences(struct Readability *rt);
int getNumberOfWords(struct Readability *rt);
int getNumberOfLetters(struct Readability *rt);
int getTextGrade(struct Readability *rt);