<h2><a href="#">Matrix Finder Problem</a></h2><h3>Medium</h3><hr>
<p>Given an <code>n x n</code> matrix <code>arr</code> of integers, your task is to find the index <code>i</code> such that:</p>

<ul>
    <li>All elements in the <code>i-th</code> row (except the diagonal element <code>arr[i][i]</code>) are zero.</li>
    <li>All elements in the <code>i-th</code> column (except the diagonal element <code>arr[i][i]</code>) are zero.</li>
</ul>

<p>If there exists such an index <code>i</code>, return it. If no such index exists, return <code>0</code>.</p>

<p>Note: The diagonal element refers to the element where the row and column indices are the same (i.e., <code>arr[i][i]</code>).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
0 1 0
0 0 0
0 0 0

<strong>Output:</strong> 1

<strong>Explanation:</strong>
In this case:
- Row 1 (0th-indexed) has all zeros except the diagonal element.
- Column 1 has all zeros except the diagonal element.

So, the index <code>i = 1</code> satisfies the condition.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong>
3
1 0 0
0 1 0
0 0 1

<strong>Output:</strong> 0

<strong>Explanation:</strong>
In this case, no row and column pair satisfies the condition.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 &lt;= n &lt;= 100</code></li>
    <li><code>0 &lt;= arr[i][j] &lt;= 1000</code></li>
</ul>
