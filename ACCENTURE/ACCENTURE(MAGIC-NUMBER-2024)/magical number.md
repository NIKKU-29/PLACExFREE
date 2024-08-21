### Problem Statement: "Alice's Magical Stats"

Alice is fascinated by binary numbers and their properties. She has a peculiar way of evaluating numbers: she likes to calculate a special "magical stat" for each number from `0` to `n`.

For any number `i` in this range:
- Alice considers the binary representation of `i`.
- For every `1` bit in this binary representation, she adds `2` to the stat.
- For every `0` bit in this binary representation, she adds `1` to the stat.

Given a limit `n`, Alice wants to know the total sum of these magical stats for all numbers from `0` to `n`.

### Input:
- An integer `n` representing the limit.

### Output:
- An integer representing the total sum of magical stats for all numbers from `0` to `n`.

### Constraints:
- `0 <= n <= 10^5`

---

**Example 1:**

| **Input**                  | **Output** |
|----------------------------|------------|
| **ENTER THE LIMIT**: `2`   | 6          |

**Explanation:**
- For `i = 0`: Binary is `0`, stat is `1`.
- For `i = 1`: Binary is `1`, stat is `2`.
- For `i = 2`: Binary is `10`, stat is `3` (`1 + 2`).
- Total stat = `1 + 2 + 3 = 6`.

---

**Example 2:**

| **Input**                  | **Output** |
|----------------------------|------------|
| **ENTER THE LIMIT**: `5`   | 17         |

**Explanation:**
- For `i = 0`: Binary is `0`, stat is `1`.
- For `i = 1`: Binary is `1`, stat is `2`.
- For `i = 2`: Binary is `10`, stat is `3` (`1 + 2`).
- For `i = 3`: Binary is `11`, stat is `4` (`2 + 2`).
- For `i = 4`: Binary is `100`, stat is `4` (`1 + 1 + 2`).
- For `i = 5`: Binary is `101`, stat is `5` (`2 + 1 + 2`).
- Total stat = `1 + 2 + 3 + 4 + 4 + 5 = 19`.

---
