## Working with Multiple Files

### To keep code clean, it is advisable to work with multiple files when working on a project.

In the file called main.cpp, it is more appropriate to leave only the "main" function, <br>
with the aim of facilitating understanding and making the code more readable.

<img src="https://user-images.githubusercontent.com/111708035/222964263-66298c40-db1f-48ff-8b42-f60f1604f2e3.png" width="40%"/></div>

<br>

The remaining functions of the program are placed in another file, for example, funcoes.cpp.

<img src="https://user-images.githubusercontent.com/111708035/222964259-e1e78293-6db4-4d0f-9f6e-e5a756ebdcbd.png" width="40%"/> <br>
  
 <br>


In addition, when creating this new file, you also create a .h file with the declaration of all functions, their prototypes. This .h file should be included in the other 2 files using double quotes, as the preprocessor looks for the specified file in the current directory of the source file being compiled.

<img src="https://user-images.githubusercontent.com/111708035/222964257-c75bc508-8553-4e08-9fb6-31e73d71acba.png" width="40%"/> <br>
