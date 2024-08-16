
<h2>PROBLEM INSTRUCTIONS</h2>

I asked ChatGPT to give me a practice problem where I can practice constructing a class using header and complier files. 

It gave me a starter header, complier and main file in which I could add to get a grasp on these concepts. 

In each file I indicated what I added according to the instructions below:

1. Extend the Character Class and Functions:

    Add more attributes like defense, magic, or speed to the Character class.
    Implement more methods like defend, castSpell, or heal.
    Write more functions that operate on Character objects, such as battle or revive.

2. Create More Classes and Functions:

    Create subclasses for different character types (e.g., Wizard, Warrior, Archer), inheriting from Character.
    Write functions to handle interactions between different character types, like castSpell(Wizard &caster, Character &target).

3. Battle Simulation:

    Write a battle simulation where multiple characters fight until one wins, and implement functions to determine the winner based on certain conditions.

<h3>CHARACTER LORE<\h3>

I have decided to base the project on the brilliant book The Shadow of the Gods by John Gwynne. The characters I will use and their characteristics have been derived from this. Instead of the attribute magic, I decided to use a boolean stating if the character is 'Tainted' or not. This means they have the blood of a God. If so, added attributes such as added strength and defense are implemented when their health is below 10 XP. This was implemented using a subclass called Tainted. 

The three characters I am using are: 

Orka 'Skullsplitter' who is tainted by Ulfrir and is part of the Bloodsworn. 
Ilska who is tainted by Lik-Rifa and is the leader of the Ravens. 
Elvar who is not tainted and is part of the Battle-Grim. 