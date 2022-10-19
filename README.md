# ch8payrollWith2dArrayAndFile

Create a project that uses a 2D array to contain the hours worked each day of the week for employees. Read that data from this fileDownload this file into the 2D array. After filling the array, display the hours worked by each employee. Calculate the pay for each employee and the total payroll for all employees and display that data. The result could look like this:

Ch 8 Payroll

The file has 6 lines in it, one for each employee. It begins with the pay rate for that employee, then has the hours worked for each day of the week. For example:

10.00  8  7  7  8  6

This record shows the pay rate for this employee is $10.00, and the employee worked 8 hours on Monday, 7 hours on Tuesday, 7 hours on Wednesday, 8 hours on Thursday, and 6 hours on Friday.

Remember that you can read multiple inputs from the keyboard as long as there is at least 1 space between the input items. You can do the same with reading data from files. You can read the first item from a line in this file, store it as the pay rate for this employee, then use a loop to read the next 5 items. Because they are separated by spaces, they are read into the program as separate items of data.

You can read the data into a single 2D array, with pay rate in the 0th (zeroth) cell in each row, then hours in the other 5 cells, one row for each employee. Or you can use parallel arrays -- a regular array holding the pay rates, and a 2D array holding the hours worked for each day for each employee.

Run the project and take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
