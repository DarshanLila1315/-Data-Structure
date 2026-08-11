// 21. Anagram Game 
// • Allow a user to enter N words and store it in an array.  
// • Generate a random number between 0 to N-1.  
// • Based on the random number generated display the word stored at that index 
// of an array and allow user to enter its anagram.  
// • Check  whether  the  word  entered  by  the  user  is  an  anagram  of  displayed 
// number or not and display an appropriate message.  
// • Given a word A and word B. B is said to be an anagram of A if and only if the 
// characters present in B is same as characters present in A, irrespective of their 
// sequence. For ex: “LISTEN” == “SILENT” 

// 21. Anagram Game

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n, i, j;
    int randomIndex;
    char words[100][100];
    char answer[100];
    char word1[100], word2[100];
    char temp;

    // Take number of words from user
    printf("Enter number of words: ");
    scanf("%d", &n);

    // Take words from user
    printf("Enter %d words:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

    // Generate random number between 0 and n-1
    srand(time(0));
    randomIndex = rand() % n;

    // Display randomly selected word
    printf("\nGuess the anagram of: %s\n", words[randomIndex]);

    // Take anagram from user
    printf("Enter your answer: ");
    scanf("%s", answer);

    // Copy selected word and user answer
    strcpy(word1, words[randomIndex]);
    strcpy(word2, answer);

    // First check length of both words
    if(strlen(word1) != strlen(word2))
    {
        printf("It is not an Anagram.");
        return 0;
    }

    // Sort characters of first word
    for(i = 0; word1[i] != '\0'; i++)
    {
        for(j = i + 1; word1[j] != '\0'; j++)
        {
            if(word1[i] > word1[j])
            {
                temp = word1[i];
                word1[i] = word1[j];
                word1[j] = temp;
            }
        }
    }

    // Sort characters of second word
    for(i = 0; word2[i] != '\0'; i++)
    {
        for(j = i + 1; word2[j] != '\0'; j++)
        {
            if(word2[i] > word2[j])
            {
                temp = word2[i];
                word2[i] = word2[j];
                word2[j] = temp;
            }
        }
    }

    // Compare both sorted words
    if(strcmp(word1, word2) == 0)
    {
        printf("Congratulations! It is an Anagram.");
    }
    else
    {
        printf("Sorry! It is not an Anagram.");
        printf("\nCorrect word was: %s", words[randomIndex]);
    }

    return 0;
}