# Snake, Water, Gun Game 

## Introduction
Yeh ek simple "Snake, Water, Gun" game hai jo C programming language me banaya gaya hai. Is game me player aur computer ek choice dete hain, aur fir winner ko decide kiya jata hai according to predefined rules:

- **Snake vs Water**: Snake wins (Snake drinks water)
- **Water vs Gun**: Water wins (Gun sinks in water)
- **Gun vs Snake**: Gun wins (Gun shoots the snake)
- **Same Choices**: Game draw!

---

## Features
1. **Random Computer Choice**: Computer apni choice random select karta hai `rand()` function ke madad se.
2. **Interactive Input**: Player ko apni choice input karne ka option milta hai.
3. **Clear Output**: Har round ke baad result screen par show hota hai.
4. **Predefined Rules**: Game logic simple aur fixed hai jo har input ko cover karta hai.
5. **Engaging Design**: Program ke end me "Game Over" aur "Thank You" message diya gaya hai.

---

## Kaise Khele

### Steps:
1. Program ko compile aur run karein.
2. Aapko ek message show hoga:
   ```
   choose 0 for snake, 1 for water and 2 for gun
   ```
3. Apni choice enter karein (0, 1, ya 2).
4. Computer ki choice aur game ka result display hoga.

---

## Example Output

### Input:
```
choose 0 for snake, 1 for water and 2 for gun
0
```

### Output:
```
player choose 0
computer choose 1
player wins!
-----------------GAME OVER-----------------
Thank you!
maahi..
```

---

## Installation aur Run Karne Ka Tarika

### Step 1: C Compiler Install Karein
Agar aapke system me C compiler nahi hai, toh aap GCC ya MinGW install karein.

### Step 2: Code Compile Karein
Terminal ya command prompt khol kar yeh command use karein:
```bash
gcc snake_water_gun.c -o snake_water_gun
```

### Step 3: Program Run Karein
Compilation ke baad program ko run karne ke liye:
```bash
./snake_water_gun
```

---

## Code Ka Breakdown

1. **Header Files**:
   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include <time.h>
   ```
   - `stdio.h`: Input/Output functions ke liye.
   - `stdlib.h`: Random number generation ke liye.
   - `time.h`: Randomness ko enhance karne ke liye.

2. **Random Computer Choice**:
   ```c
   int computer = rand() % 3;
   ```
   - `rand() % 3` se 0, 1, ya 2 me se ek random number generate hota hai.

3. **Game Logic**:
   - Multiple `if-else` conditions ke through player aur computer ki choices ke basis par result decide hota hai.

4. **Ending Messages**:
   ```c
   printf("-----------------GAME OVER-----------------\n");
   printf("Thank you!\nmaahi..\n");
   ```
   - Game ke end me user-friendly message display hota hai.

---

## Aagey Improve Karne Ke Ideas
- **Multiple Rounds**: Ek se zyada rounds khelne ka option add karein.
- **Score Tracking**: Player aur computer ka score track karein.
- **Enhanced Graphics**: Terminal par colorful output aur better formatting karein.
- **Replay Option**: Game ke end me "Replay" ka option provide karein.

---

## Credits
- **Programmer**: maahi
- **Language**: C

---

*Happy Coding!*

