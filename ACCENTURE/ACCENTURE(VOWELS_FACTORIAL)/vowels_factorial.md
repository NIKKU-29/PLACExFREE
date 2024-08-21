### Problem Statement: "Consonant Permutations"

Alice is interested in calculating permutations of consonants from a given string. She has a special way of evaluating the permutations:

- For each string, Alice considers the consonants and calculates the number of distinct permutations that can be formed with these consonants. 
- To achieve this, Alice uses the concept of factorials. 

The task is to compute the total number of distinct permutations of the consonants in a given string. 

**Function Signature:**

```cpp
int countConsonantPermutations(const string &str);
```

**Input:**
- A single string `str` (1 ≤ length of str ≤ 1000). The string may include uppercase and lowercase letters, as well as non-alphabet characters.

**Output:**
- An integer representing the number of distinct permutations of the consonants in the string.

**Constraints:**
- Vowels and non-alphabet characters are ignored in the permutation calculation.
- Uppercase and lowercase letters are treated as distinct characters.

**Examples:**

1. **Example 1:**
   - **Input:** `"hello"`
   - **Output:** `12`
   - **Explanation:**
     - Consonants in `"hello"`: `h`, `l`, `l`.
     - Total number of consonants: 3.
     - Factorial of 3 is 6. 
     - The consonant `l` is repeated twice. Thus, the number of distinct permutations is calculated by dividing the total permutations by the factorial of the count of `l`, which is 2!.
     - Thus, distinct permutations = ( 3!/2! = 6/2 = 3 ) distinct permutations for "hll", "lhl", and "llh".

2. **Example 2:**
   - **Input:** `"banana"`
   - **Output:** `60`
   - **Explanation:**
     - Consonants in `"banana"`: `b`, `n`, `n`.
     - Total number of consonants: 3.
     - Factorial of 3 is 6.
     - The consonant `n` is repeated twice. Thus, the number of distinct permutations is calculated by dividing the total permutations by the factorial of the count of `n`, which is 2!.
     - Thus, distinct permutations = ( 3!/2! = 6/2 = 3 ) distinct permutations.

3. **Example 3:**
   - **Input:** `"bookkeeper"`
   - **Output:** `1260`
   - **Explanation:**
     - Consonants in `"bookkeeper"`: `b`, `k`, `k`, `p`, `r`.
     - Total number of consonants: 5.
     - Factorial of 5 is 120.
     - The consonants `k` is repeated twice.
     - Thus, the number of distinct permutations is calculated by dividing the total permutations by the factorial of the count of `k`, which is 2!.
     - Thus, distinct permutations = ( 5!/2! = 120/2 = 60 ) distinct permutations.

**Notes:**
- The calculation of permutations should handle both uppercase and lowercase letters distinctly.
- Vowels and non-alphabet characters should be ignored in the permutation calculation.

---
