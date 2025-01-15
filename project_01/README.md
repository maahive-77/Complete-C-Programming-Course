# Number Guessing Game

## Introduction
Yeh ek "Number Guessing Game" hai jo C programming language me banaya gaya hai. Is game me player ko ek random number guess karna hota hai jo computer generate karta hai. Har guess ke baad player ko feedback diya jata hai ki unka guess correct hai ya nahi, aur agar galat hai to higher ya lower number ki taraf guide kiya jata hai.

---

## Features
1. **Random Number Generation**: Computer 1 se 100 ke beech ek random number generate karta hai.
2. **Interactive Gameplay**: Player har guess ke baad feedback le kar apna agla guess better kar sakta hai.
3. **Guess Count**: Game end hone par total guesses ka count display hota hai.
4. **Simple Design**: Code aur game logic straightforward aur beginner-friendly hai.

---

## Kaise Khele

### Steps:
1. Program ko compile aur run karein.
2. Aapko ek message show hoga:
   ```
   Guess the number:
   ```
3. Apna guess enter karein (1 se 100 ke beech).
4. Agar guess galat hai, toh yeh message milega:
   - "higher number please" (agar aapka guess chhota hai)
   - "lower number please" (agar aapka guess bada hai)
5. Jab aap correct number guess karenge, yeh message milega:
   ```
   congrats!!
   ```
6. Game ke end par total guesses ka count show hoga.

---

## Example Output

### Input:
```
Guess the number: 50
higher number please
Guess the number: 75
lower number please
Guess the number: 65
higher number please
Guess the number: 70
congrats!!
```

### Output:
```
you guessed the number in 4 guesses
```

---

## Installation aur Run Karne Ka Tarika

### Step 1: C Compiler Install Karein
Agar aapke system me C compiler nahi hai, toh aap GCC ya MinGW install karein.

### Step 2: Code Compile Karein
Terminal ya command prompt khol kar yeh command use karein:
```bash
gcc number_guessing_game.c -o number_guessing_game
```

### Step 3: Program Run Karein
Compilation ke baad program ko run karne ke liye:
```bash
./number_guessing_game
```

---

## Code Ka Breakdown

1. **Random Number Generation**:
   ```c
   srand(time(NULL));
   int random_number = (rand() % 100) + 1;
   ```
   - `srand(time(NULL))`: Randomness ko ensure karta hai har baar different seed ke saath.
   - `rand() % 100 + 1`: 1 se 100 ke beech random number generate karta hai.

2. **Game Loop**:
   ```c
   do {
       printf("Guess the number:");
       scanf("%d", &guessed);
       // Feedback logic
   } while (guessed != random_number);
   ```
   - Loop tab tak chalta hai jab tak player correct number guess na kare.

3. **Feedback Logic**:
   - Player ke input par "higher", "lower", ya "congrats" message display hota hai.

4. **Guess Counter**:
   ```c
   no_of_guesses++;
   ```
   - Har guess ke baad counter increment hota hai.

---

## Aagey Improve Karne Ke Ideas
- **Difficulty Levels**: Easy, Medium, aur Hard levels add karein.
- **Multiplayer Mode**: Ek player doosre ke liye number set kare.
- **Leaderboard**: Sabse kam guesses me winner ka naam aur score save karein.
- **Graphical Interface**: Command-line ke bajaye GUI version banayein.

---

## Credits
- **Programmer**: maahi
- **Language**: C

---

*Happy Guessing!*

