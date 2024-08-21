### Alice's Favorite Playlist

**Problem Statement:**

Alice loves listening to music, and she has a playlist of her favorite songs. She especially loves the song "a" and wants to know how many times it appears in any contiguous subarray (or "bracket") of a given size within her playlist.

Given a playlist as a string `s` consisting of lowercase letters and an integer `k` representing the size of the bracket, determine the maximum number of times the song "a" appears in any contiguous subarray of size `k` within the playlist.

**Input:**
- A string `s` representing Alice's playlist, where each character in the string is a song.
- An integer `k` representing the size of the subarray (bracket size).

**Output:**
- An integer representing the maximum number of times the song "a" appears in any contiguous subarray of size `k`.

**Constraints:**
- `1 <= k <= s.length()`
- `s` consists of lowercase English letters.

---

**Example 1:**

| **Input**                                    | **Output**  |
|----------------------------------------------|-------------|
| **Playlist**: `abacaba`                      | 2           |
| **Bracket Size**: `3`                        |             |

**Explanation:**

- The subarrays of size `k=3` are: `"aba"`, `"bac"`, `"aca"`, `"cab"`, `"aba"`.
- The occurrences of "a" in each subarray are:
  - `"aba"`: 2 "a"s
  - `"bac"`: 1 "a"
  - `"aca"`: 2 "a"s
  - `"cab"`: 1 "a"
  - `"aba"`: 2 "a"s
- The maximum number of "a"s in any subarray of size `k=3` is `2`.

---

**Example 2:**

| **Input**                                    | **Output**  |
|----------------------------------------------|-------------|
| **Playlist**: `aaaaa`                        | 2           |
| **Bracket Size**: `2`                        |             |

**Explanation:**

- The subarrays of size `k=2` are: `"aa"`, `"aa"`, `"aa"`, `"aa"`.
- The occurrences of "a" in each subarray are:
  - `"aa"`: 2 "a"s
  - `"aa"`: 2 "a"s
  - `"aa"`: 2 "a"s
  - `"aa"`: 2 "a"s
- The maximum number of "a"s in any subarray of size `k=2` is `2`.

---

