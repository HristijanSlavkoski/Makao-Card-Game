## Card Game <b> 'MAKAO' </b>

This is just the back end code for card game 'Makao'.
The idea for this project was to practice our skills in C++ with [Stefan Krsteski](https://github.com/Stefanstud).

<p align="center"> <b>  RULES FOR THE GAME: </b>
</p>
<pre>
<b> Components: </b>
116 cards as follows:  
    20 Blue cards - 0 to 9  
    20 Green cards - 0 to 9  
    20 Red cards - 0 to 9  
    20 Yellow cards - 0 to 9  
    8 Skip cards - 2 each in Blue, Green, Red and Yellow  
    8 Reverse cards - 2 each in Blue, Green, Red and Yellow  
    8 +2 cards - 2 each in Blue, Green, Red and Yellow  
    4 -1 Cards - 2 each in Blue, Green, Red and Yellow  
    4 Joker & +4 cards  
    4 Joker cards   
    
<b> Object of the Game </b>
The first player to play all of the cards in their hand in each round scores 0 points.
All the other players scores points for the cards that are left holding.
The game finishes when someone reaches 500 points and the winner is the one with the lowest points.

<b> Setup </b>
Each player draws a card. Player with the highest point value is the dealer. 
Shuffle the deck. Each player is dealt 7 cards.

Place the remaining cards facedown to form a draw pile. Turn over the top card of the draw pile to begin a discard pile. 
If the top card is a Wild or Wild Draw 4, return it to the deck and pick another card. 
For all other cards, see directions that follow.

<b> Special Cards </b>
<t>    Skip card</t>
The next person in line to play after this card is played loses his/her turn and is "skipped".
If this card is turned up at the beginning of play, the first player is skipped.
This card may only be played on a matching color or on another Skip card.
<t>    Reverse card</t>
This card reverses direction of play. Play to the left now passes to the right, and vice versa.
If this card is turned up at the beginning of play, the player to the right now plays first, 
and play then goes to the right instead of left.
This card may only be played on a matching color or on another Reverse
<t>    +2 Card </t>
When you play this card, the next person to play must draw 2 cards and continue playing.
In case the next person got also +2 card, or +4, he/she can play that card and the next person have to draw 4 or 6 cards.
This can continue untill one player don't have 'Draw' cards, so the last person have to sub all the +2/+4 cards and draw that amount.
If this card is turned up at the beginning of play, the first player must draw 2 cards. 
This card may only be played on a matching color or on another Draw 2 card.
<t>    -1 Card</t>
When you play this card, you can play 1 more card after this.
If this card is turned up at the beginning of play, return this card to the deck and pick another card.
This card may only be played on a matching color or on another -1 card.
<t>    Joker & +4 Card</t>
When you play this card, the next person to play must draw 4 cards and continue playing.
In case the next person got also +4 card, or +2, he/she can play that card and the next person have to draw 8 or 6 cards.
This can continue untill one player don't have 'Draw' cards, so the last person have to sub all the +2/+4 cards and draw that amount.
If this card is turned up at the beginning of play, the first player must draw 4 cards. 
This card can be played on any color.
<t>    Joker</t>
When you play this card, you may change the color being played to any color (including the current color) to continue play. 
You may play a Wild card even if you have another playable card in hand.
If this card is turned up at the beginning of play, the first person to play chooses the color to begin play.


<b> Game Play </b>
Player to the left of the dealer plays first. Play passes to the left to start. 
Match the top card on the DISCARD pile either by number, color or word.
For example, if the card is a Green 7, you must play a Green card or any color 7. 
Or, you may play any Joker card or a Joker +4 card. If you don't have anything that matches, you must pick a card from the DRAW pile.
If you draw a card you can play, play it. Otherwise, play moves to the next person.
Before playing your next to last card, you must say "LAST CARD". If you don't say it and another player catches you with 
just one card before the next player begins their turn you must pick FOUR more cards from the DRAW pile.
If you are not caught before the next player either draws a card from the DRAW pile or draws a card from their hand to play,
you do not have to draw the extra cards. Once a player plays their last card, he is supposed to say "MAKAO" and the hand is over.
Points are tallied (see Scoring section) and you start over again.

<b> Going Out </b>
If you forget to say, "LAST CARD" before your card touches the DISCARD pile,
but you "catch" yourself before any other player catches you, you are safe and not subject to the 4- card penalty.
You may not catch a player for failure to say "LAST CARD!" until his/her second-to-last card touches the DISCARD pile. 
Also, you may not catch a player for failure to say it after the next player begins his/her turn. 
"Beginning a turn" is defined as either drawing a card from the DRAW pile or drawing a card from your hand to play.
If the last card played in a hand is a +2 card or Joker +4 card, the next player must draw 2 or 4 cards, depending upon the card played.
These cards are counted when points are totaled.
If no one is out of cards by the time the DRAW pile is depleted, reshuffle the DISCARD pile and continue play.
If the game finishes with a Joker card, the points are doubled. And that's called "MAKAO".

<b> Scoring </b>
All number cards (0-9)   --->   Face value
Skip cards               --->   10 points
Reverse cards            --->   10 points
+2 cards                 --->   20 points
-1 Cards                 --->   20 points
Joker cards              --->   30 points
Joker & +4 cards         --->   50 points

<b> Reneging </b>
You may choose not to play a playable card from your hand. If so, you must draw a card from the DRAW pile. 
If playable, that card can be played, but you may not play a card from your hand after the draw.

</pre>
