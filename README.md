# Cipher-text
#Simple program to encrypt/decrypt text
## Note this is just a simple program just to practice what I've been learning so far
## Although it's written in C language, it's not to demonestrate my knowledge in C. 
## just to practice problem solving, simple programming skills I've learnt so far.
## Also it's a part of following the great course CS50, I've used thier lib, CS50

#//TO DO:
###- based on the user's input the program will encrypte the text with the given key
###- the letter case should remain; if the input uppercase the output should be uppercase, etc.
###- the program should encrypte only alphabetic letters, means that spaces, commas, and other chars remain untouched
#e.g:
###1- input: shello
    key: 13
    output: furyyb
    input: SHELLO
    output: FURYYB
    input: hello, world!
    output: uryyb, jbeyq!

#instructions:
###1- make sure that program combiles with no errors :)
###2- check if the user entered a key using the command-line
###3- validate the key 
    if key is not numeric keep asking until integer is received
    we need a way to check if the input is digit or not

###4- prompt the user for input plaintext
###5- process the user's input
###6- loop through the input text, rotate each char with the given key
###7- dislpay the ciphered text

----
Tweeked the program to do both encrypt and decrypt based on the user's choice.
Also added the option to continue if the user decided.
