# Math-Quiz-Game
This C++ program is a simple math quiz game that generates random arithmetic questions based on the difficulty level chosen by the player. The player is asked to select a difficulty level (easy, medium, or difficult) and specify the number of questions they want to answer. The program then generates random addition, subtraction, multiplication, and division questions according to the chosen difficulty level.

The game uses a loop to iterate through the specified number of questions, and for each question, it randomly selects two numbers and an arithmetic operation. It then presents the question to the player with four answer options, only one of which is correct. The player must choose the correct option by entering a corresponding letter ('a', 'b', 'c', or 'd').

After the player completes the quiz, the program displays the number of correct answers out of the total questions attempted. Finally, a thank-you message is displayed, and the program pauses before exiting.

Here is a brief breakdown of the main components in the program:

Difficulty Level Selection:

The player is prompted to select a difficulty level (1 for easy, 2 for medium, 3 for difficult).
A loop ensures that the player enters a valid difficulty level (1, 2, or 3).
Number of Questions:

The player is asked to specify the number of questions they want to answer.
Question Generation:

For each question, two random numbers are generated based on the difficulty level.
A random arithmetic operation (+, -, *, /) is selected.
Answer options are calculated based on the correct answer and random variations.
Question Presentation:

The program presents the question and answer options to the player.
Answer Evaluation:

The player's answer is compared with the correct option, and the result is displayed.
Scoring:

The number of correct answers is tracked.
Results Display:

After all questions are answered, the program displays the player's score.
Closing Message:

A thank-you message is displayed, and the program pauses before exiting.
