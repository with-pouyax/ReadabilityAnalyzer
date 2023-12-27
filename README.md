# ReadabilityAnalyzer
 

This is a simple program written in C that calculates the approximate grade level needed to comprehend a given text. The program uses the Coleman-Liau index, which takes into account the average number of letters per 100 words and the average number of sentences per 100 words.

### How to Use
Clone the repository to your local machine.
Compile the C program using a C compiler (e.g., gcc readability.c -o readability).
Run the program (./readability).
Enter the text when prompted.
### Features
Counting Letters: The program accurately counts the number of letters in the input text, considering both uppercase and lowercase alphabetical characters.

Counting Words: It also counts the number of words in the text, defining a word as any sequence of characters separated by a space.

Counting Sentences: The program counts the number of sentences in the text, considering periods, exclamation points, and question marks as sentence terminators.

Grade Level Calculation: Utilizing the Coleman-Liau index formula, the program calculates the reading level of the input text and rounds the result to the nearest integer.

Handling Multiple Spaces: The program checks for and handles multiple consecutive spaces in the input text.

### Weak Points
Sentence Boundary Detection: The program simplifies sentence boundary detection, considering any sequence of characters ending with a period, exclamation point, or question mark as a sentence. In real-world scenarios, more sophisticated methods might be needed for accurate sentence detection.

Input Validation: The program assumes valid input and does not thoroughly validate input data. It relies on the user to provide well-formed text without unusual edge cases.

No External Libraries: The program does not use external libraries for advanced text processing or natural language understanding. It's a basic implementation for educational purposes.

### Contributions
Contributions are welcome! Feel free to fork this repository, make improvements, and submit a pull request.

### License
This project is licensed under the MIT License - see the LICENSE file for details.