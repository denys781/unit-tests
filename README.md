# unit-tests

<p>The solution consists of 4 folders:</p>
 <ul>
   <li><b>GTest</b>. Turns into a static library.</li>
   <li><b>GMock</b>. Turns into a static library.</li>
   <li><b>BowlingGame</b>. Turns into a static library.</li>
   <li><b>UnitTests</b>. Turns into an executable file using all the static libraries.</li>
 </ul>
 <br>
 <p>Also, there is a <b>CoverageReport</b> folder. It contains the <b>index.html</b> file to view a coverage report itself.</p>
 <p>There we need only a report for <b>BowlingGame.cpp</b> file whose functions were covered by unit tests.</p>
 <p>An open source project <a href="https://github.com/OpenCppCoverage/OpenCppCoverage"><b>OpenCppCoverage</b></a> was used to calculate a coverage.</p>
 <br>
 <p>To create a coverage report, it was enough to enter the next command from a root of the solution folder:</p>
 <code>OpenCppCoverage.exe --sources BowlingGame -- ./x64/Debug/UnitTests.exe</code>
