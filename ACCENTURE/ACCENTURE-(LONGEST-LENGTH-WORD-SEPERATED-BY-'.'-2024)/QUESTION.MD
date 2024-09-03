**Problem Statement:**

You are given a string `s` consisting of lowercase English letters and periods (`.`). Your task is to determine the length of the longest continuous sequence of letters in the string. The sequence is defined as a substring that does not contain any periods (`.`).

### Input:
- A single string `s` where `1 <= s.length <= 100,000` and `s` consists of lowercase English letters and periods (`.`).

### Output:
- An integer representing the length of the longest continuous sequence of letters in the string.

### Examples:

**Example 1:**

- Input: "abc.def.ghi.jkl"
- Output: 3
- Explanation: The string contains sequences "abc", "def", "ghi", and "jkl", each with a length of 3. The longest sequence length is 3.

**Example 2:**

- Input: "a..bcd...ef."
- Output: 3
- Explanation: The string contains sequences "a", "bcd", and "ef". The longest sequence length is 3 (from "bcd").

**Example 3:**

- Input: "...."
- Output: 0
- Explanation: There are no letters between the periods, so the longest sequence length is 0.

**Example 4:**

- Input: "abc"
- Output: 3
- Explanation: The string contains no periods, so the entire string "abc" is the longest sequence with a length of 3.

**Example 5:**

- Input: "abc.defg.h"
- Output: 4
- Explanation: The longest sequence is "defg" with a length of 4.