# Beer Game

## Submission Requirements

### Build instructions

For submitting the project a CMake file is required in the main directory of your project.

We should be able to run the entire project and the tests using the following commands:

```bash
cd build
cmake ..
make
./beergame
./beergame-tests
```
REMINDER: The Doxygen documentation should also have been generated in the build directory after those commands.
It is not an issue if the command to run the executables inside the build directory is different (for example, ./src/beergame or ./test/beergame-tests). Our script will search for the executable inside the build directory and execute it.

 ### Gitignore

Use a gitignore file to ensure unnecessary files generated during the build process aren't committed. More info on gitignore: https://help.github.com/en/github/using-git/ignoring-files

 ### References.txt

 Cite all the help you get in a references file called references.txt. This document must be included in your submissions in the root folder. Append to it as the project progresses. Describe the contribution of each source as a JSON parseable text.  Check the project writeup for a sample format for the references file. You may use https://jsonlint.com to help format and validate your references file.

 ### Readme.md file

In the Readme file of each GitHub repository, document what you accomplished in the current sprint. If you have added any additional feature that isn't in the class diagram of the requirements specification (more info in the "Sprint 2 Updates" email), explain it here.
