

<h2><a href="">XXX. Football Match Score Count</a></h2><h3>Easy</h3><hr><p>In a football match, the team names and their scores are recorded on a board. Each time a team scores a goal, its name is written on the board. At the end of the match, you need to count the number of goals scored by each team and determine which team won the match. The teams are identified by their names "TeamA" and "TeamB".</p>

<p>Write a function to determine which team won the match based on the recorded scores.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>The team with the highest number of goals wins the match.</li>
	<li>If both teams have the same number of goals, the result should indicate a tie.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> scores = ["TeamA", "TeamB", "TeamA", "TeamA", "TeamB"]
<strong>Output:</strong> "TeamA"
<strong>Explanation:</strong> TeamA scored 3 goals and TeamB scored 2 goals. TeamA wins the match.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> scores = ["TeamB", "TeamB", "TeamA", "TeamA", "TeamB"]
<strong>Output:</strong> "TeamB"
<strong>Explanation:</strong> TeamA scored 2 goals and TeamB scored 3 goals. TeamB wins the match.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> scores = ["TeamA", "TeamB", "TeamA", "TeamB"]
<strong>Output:</strong> "Tie"
<strong>Explanation:</strong> TeamA scored 2 goals and TeamB scored 2 goals. The match ends in a tie.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= scores.length &lt;= 10<sup>4</sup></code></li>
	<li><code>scores[i]</code> is either "TeamA" or "TeamB".</li>
</ul>