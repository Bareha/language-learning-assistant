#include <stdio.h>
#include <unistd.h>
#include <string.h>
int l1();
int l2();
int l3();
int compareAnswer();
int compareAnswer(char userAnswer[], char correctAnswer[])
{
    return strcmp(userAnswer, correctAnswer) == 0;
}
int l1()
{
    int noq, i, correctCount=0, incorrectCount=0;
    float s=0;
    printf("Level 1 was chosen.\n");
    sleep(1);
    printf("This is the beginner level.\n");
    sleep(1);
    printf("Choose the number of questions(1-20): ");
    scanf("%d", &noq);
    getchar();
    char questions[][100]={
        "Translate 'house' into French.",
        "What is the French word for 'school'?",
        "How do you say 'hello' in French?",
        "Give the French word for 'table'.",
        "Translate 'red' into French.",
        "What is the French word for 'book'?",
        "How do you say 'thank you' in French?",
        "Provide the French word for 'cat'.",
        "Translate 'sun' into French.",
        "What is the French word for 'tree'?",
        "Give the French word for 'water'.",
        "How do you say 'goodbye' in French?",
        "What is the French word for 'friend'?",
        "Provide the French word for 'mother'.",
        "Translate 'pen' into French.",
        "What is the French word for 'brother'?",
        "How do you say 'apple' in French?",
        "Give the French word for 'car'.",
        "Translate 'flower' into French.",
        "Is 'livre' the French word for 'book'? (true/false)"
    };
    char correctAnswer[][100]={
        "maison",
        "ecole",
        "bonjour",
        "table",
        "rouge",
        "livre",
        "merci",
        "chat",
        "soleil",
        "arbre",
        "eau",
        "au revoir",
        "ami",
        "mere",
        "stylo",
        "frere",
        "pomme",
        "voiture",
        "fleur",
        "true",
    };
    char userAnswer[100];
    for(i=0; i<noq; i++)
    {
        printf("Question %d: %s\n", i+1, questions[i]);
        printf("Answer: ");
        fgets(userAnswer, sizeof(userAnswer), stdin);
        userAnswer[strcspn(userAnswer, "\n")] = '\0';
        if (compareAnswer(userAnswer, correctAnswer[i]))
        {printf("Correct!\n");
        correctCount++;}
        else
        {printf("Incorrect. The correct answer is %s.\n", correctAnswer[i]);
        incorrectCount++;}
    }
    printf("\nCorrect: %d",correctCount);
    printf("\nIncorrect: %d",incorrectCount);
    s=((float)correctCount/noq)*100;
    printf("\nEfficiency: %.2f%%", s);
    if (s>=70)
    printf("\nVery Good!");
    else if (s>=50 && s<70)
    printf("\nSatisfactory!");
    else
    printf("\nBetter luck next time.");
    return 0;
}
int l2()
{
    int noq, i, correctCount=0, incorrectCount=0;
    float s=0;
    printf("Level 2 was chosen.\n");
    sleep(1);
    printf("This is the elementary level.\n");
    sleep(1);
    printf("Choose the number of questions(1-20): ");
    scanf("%d", &noq);
    getchar();
    char questions[][100]={
	"Translate 'dog' into French.",
	"What is the French word for 'happy'?",
	"How do you say 'good morning' in French?",
	"Give the French word for 'chair'.",
	"Translate 'blue' into French.",
	"What is the French word for 'family'?",
	"How do you say 'please' in French?",
	"Provide the French word for 'dog'.",
	"Translate 'moon' into French.",
	"What is the French word for 'sister'?",
	"Give the French word for 'food'.",
	"How do you say 'excuse me' in French?",
	"What is the French word for 'father'?",
	"Provide the French word for 'pencil'.",
	"Translate 'computer' into French.",
	"What is the French word for 'happy'?",
	"How do you say 'orange' in French?",
	"Give the French word for 'bed'.",
	"Translate 'bird' into French.",
	"Is 'porte' the French word for 'door'? (true/false)"};
    char correctAnswer[][100]={
	"chien",
	"heureux",
	"bonjour",
	"chaise",
	"bleu",
	"famille",
	"s'il vous plait",
	"chat",
	"lune",
	"soeur",
	"nourriture",
	"excusez-moi",
	"pere",
	"crayon",
	"ordinateur",
	"heureux",
	"orange",
	"lit",
	"oiseau",
	"true"};
    char userAnswer[100];
    for(i=0; i<noq; i++)
    {
        printf("Question %d: %s\n", i+1, questions[i]);
        printf("Answer: ");
        fgets(userAnswer, sizeof(userAnswer), stdin);
        userAnswer[strcspn(userAnswer, "\n")] = '\0';
        if (compareAnswer(userAnswer, correctAnswer[i]))
        {printf("Correct!\n");
        correctCount++;}
        else
        {printf("Incorrect. The correct answer is %s.\n", correctAnswer[i]);
        incorrectCount++;}
    }
    printf("\nCorrect: %d",correctCount);
    printf("\nIncorrect: %d",incorrectCount);
    s=((float)correctCount/noq)*100;
    printf("\nEfficiency: %.2f%%", s);
    if (s>=70)
    printf("\nVery Good!");
    else if (s>=50 && s<70)
    printf("\nSatisfactory!");
    else
    printf("\nBetter luck next time.");
    return 0;
}
int l3()
{
    int noq, i, correctCount=0, incorrectCount=0;
    float s=0;
    printf("Level 3 was chosen.\n");
    sleep(1);
    printf("This is the intermediate level.\n");
    sleep(1);
    printf("Choose the number of questions(1-20): ");
    scanf("%d", &noq);
    getchar();
    char questions[][100]={
	"Translate 'architecture' into French.",
	"What is the French word for 'university'?",
	"How do you say 'good evening' in French?",
	"Provide the French word for 'computer'.",
	"Translate 'interesting' into French.",
	"What is the French word for 'history'?",
	"How do you say 'you're welcome' in French?",
	"Give the French word for 'butter'.",
	"Translate 'mountain' into French.",
	"What is the French word for 'environment'?",
	"Provide the French word for 'airplane'.",
	"How do you say 'exciting' in French?",
	"What is the French word for 'neighbor'?",
	"Translate 'science' into French.",
	"What is the French word for 'sibling'?",
	"Give the French word for 'city'.",
	"How do you say 'delicious' in French?",
	"Provide the French word for 'telephone'.",
	"Translate 'music' into French.",
	"Is 'avion' the French word for 'ship'? (true/false)"};
    char correctAnswer[][100]={
	"architecture",
	"universite",
	"bonsoir",
	"ordinateur",
	"interessant",
	"histoire",
	"de rien",
	"buerre",
	"montagne",
	"environnement",
	"avion",
	"excitant",
	"voisin",
	"science",
	"soeur",
	"ville",
	"delicieux",
	"telephone",
	"musique",
	"false"};
    char userAnswer[100];
    for(i=0; i<noq; i++)
    {
        printf("Question %d: %s\n", i+1, questions[i]);
        printf("Answer: ");
        fgets(userAnswer, sizeof(userAnswer), stdin);
        userAnswer[strcspn(userAnswer, "\n")] = '\0';
        if (compareAnswer(userAnswer, correctAnswer[i]))
        {printf("Correct!\n");
        correctCount++;}
        else
        {printf("Incorrect. The correct answer is %s.\n", correctAnswer[i]);
        incorrectCount++;}
    }
    printf("\nCorrect: %d",correctCount);
    printf("\nIncorrect: %d",incorrectCount);
    s=((float)correctCount/noq)*100;
    printf("\nEfficiency: %.2f%%", s);
    if (s>=70)
    printf("\nVery Good!");
    else if (s>=50 && s<70)
    printf("\nSatisfactory!");
    else
    printf("\nBetter luck next time.");
    return 0;
}
int main()
{
    int level;
    sleep(1);
    printf("Fran�aisFacile: Your Language Companion\n");
    sleep(2);
    printf("This is a language learning program made to analyze your French proficiency.\n");
    sleep(2);
    printf("Enter your level(1, 2 or 3): ");
    scanf("%d",&level);
    switch(level)
    {
        case 1: l1();
                break;
        case 2: l2();
                break;
        case 3: l3();
                break;
        default: printf("Enter a valid level.");
    }
    return 0;
}
