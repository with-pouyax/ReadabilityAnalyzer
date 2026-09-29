# Readability analyzer

**CS50 C exercise** · Estimates reading grade using the Coleman–Liau index from letter, word and sentence counts.

## Build and use

```sh
clang ReadabilityAnalyzer.c -lcs50 -lm -o readability
./readability
```

The executable uses the example or prompts shown in the source.

## Implementation note

Enter text at the prompt. The score is a formula-based approximation, not a measure of a reader's actual comprehension.

Source: [`ReadabilityAnalyzer.c`](ReadabilityAnalyzer.c). [License](LICENSE).
