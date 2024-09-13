<h2>Remove Vowels Between Consonants</h2>
<h3>Easy</h3>
<hr>
<p>You are given a string <code>s1</code> consisting of lowercase alphabetic characters. Your task is to remove any vowel that appears between two consonants. Specifically, if a vowel is found between two consonants, it should be removed. The first and last characters of the string will not be removed, regardless of whether they are vowels or consonants. Additionally, vowels that are adjacent to other vowels should not be removed.</p>

<p><strong>Input:</strong></p>
<ul>
    <li>A single string <code>s1</code> (1 ≤ |s1| ≤ 1000) consisting of lowercase alphabetic characters.</li>
</ul>

<p><strong>Output:</strong></p>
<ul>
    <li>The modified string after removing the specified vowels.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s1 = "beautiful"
<strong>Output:</strong> beautifl
<strong>Explanation:</strong> The vowel 'i' is surrounded by consonants 't' and 'f', so it is removed.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s1 = "create"
<strong>Output:</strong> create
<strong>Explanation:</strong> No vowels are surrounded by consonants, so the string remains unchanged.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
    <li>The string contains only lowercase English letters.</li>
</ul>
