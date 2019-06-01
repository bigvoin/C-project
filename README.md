# C-project
program that can store and manipulate representations of one or more decks of cards.
The Task was:

2.1 Part 1— Creating a deck of cards
• You should write a program that represents a deck of cards as an array of 52
elements. Each element should be a structure that holds the suit and value of
the card.
• Populate your deck initially as a new deck sorted by suit (H,C,D,S) and then
within each suit, sorted by value (assume aces are low, i.e. have a value of 1).
• Print out this deck

2.2 Part 2— Answering questions about the deck
• Extend the program to prompt the user for a card number in the deck (starting
with 1 being the first card) and then print the card at that position in the following
format:
The card at position n is 3C.
Where n is the position the user enters. In the case of a picture card use the
numbers 11, 12, 13 to represent Jacks, Queens and Kings respectively.
• Further extend the program to prompt the user for a card number in the deck
(starting with 1 being the first card) and then print the cards at the position
immediately before and immediately after the specified position. You should
use the following format:
The card in the position before n is 3C.
The card in the position after n is 5C.
Note: Think carefully about what happens if n is 1 or n is 52. You should assume a
circular deck.


2.3 Part 3— Creating a deck in Si Stebbins order
Mathematicians have always been fascinated by playing cards and there are often
mathematical foundations to so called “magic tricks”. The card system known as the
“Si Stebbins System” is a classic example (http://sistebbins.com).
• Create a new deck in Si Stebbins order, starting with the Ace of Clubs.
• Extend the program to prompt the user for a card number in the deck (starting
with 1 being the first card) and then print the card at that position in the following
format:
The card at position n is 3C.
Where n is the position the user enters. In the case of a picture card use the
numbers 11, 12, 13 to represent Jacks, Queens and Kings respectively.
• Imagine a user ’cuts’ the deck and places the top stack underneath the bottom
stack. Given the card at the bottom of the new deck, entered by the user in
the same format as you have been printing your answers (so 5D is the 5 of
diamonds), “amaze your audience by telling them the top card”. Your answer
should be printed in the following format:
The card at the top of the deck is 3C.
Note: As before, think carefully about what happens if n is 1 or n is 52. You should
assume a circular deck.


2.4 Part 4— Shuffling decks
• Create two decks, one sorted as specified in part 1, and one in Si Stebbins
order as specified in part 3.
• Create a third, combined deck (104 cards) by conducting a perfect riffle out
shuffle with the Si deck as the lead – i.e. card at position 1 in the Si Stebbins
deck corresponds to position 1 in the shuffled deck. If you are interested in the
maths behind card shuffling see, for example this Wikipedia page.
• Extend the program to prompt the user for a card number in the new combined
deck (starting with 1 being the first card) and then print the card at that position
in the following format:
The card at position n is 3C.
Where n is the position the user enters. In the case of a picture card use the
numbers 11, 12, 13 to represent Jacks, Queens and Kings respectively
