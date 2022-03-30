# run-bash-script-cplusplus

How to run a bash script on Linux with C++
- Use `system()` to execute a shell command
- https://linux.die.net/man/3/system

Setup
- Install Visual Studio Code https://linuxize.com/post/how-to-install-visual-studio-code-on-centos-7/
- Install GCC https://linuxize.com/post/how-to-install-gcc-compiler-on-centos-7/
- Install the C++ Extension https://code.visualstudio.com/docs/languages/cpp

How to build the executable
- Launch Visual Studio Code
- Open the folder containing run-script.cpp
- Select "Terminal > Run Build Task" to build the executable

Run the built executable from a command prompt.
When prompted, enter an absolute path to a script, e.g., ./myscript

You can also enter a command with args, e.g., "echo foo bar"

If not waiting, the program runs the script as "./myscript &"
