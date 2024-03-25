
### How to create a dynamic library?
1. compile the source files ```.c``` to  create object files ```.o```
```gcc -c -fPIC *.c```
 - ```-fPIC -``` Position Independent Code; since its impossible to know what address the shared library will be.
 - With the gcc compiler, ```gcc -c *.c``` suffices

2. build the library from all .o with the shared flag
```gcc -shared -o libdynamic.so *.o```

### How to use a dynamic library
* Let ```0_main.c``` be a source file that calls the library  ```dynamic``
* To create the executable, compile and link the created code with the library:
```gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len```
 * ```-L``` indicates where the library is to be found.
 * ```-l``` specifies the library
* The executable ```len``` is ready for a run 


### What is the environment variable ```$LD_LIBRARY_PATH```
* Used in running a C executable file linked to a .so file
* To run a c eXcutable file; 
 * type```call_dynamic``` in the shell or
 * ``` ./call_dynamic``` if  ```.``` (the current directory where the file is) is not in the PATH variable
* However the .so file will not be found at runtime ```ldd len ``` if it's directory is not added to ```$LD_LIBRARY_PATH```

### How to use ```$LD_LIBRARY_PATH```
```export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH```
local directory (```.```) is added to the search
* now you can run the excecutable
```./len```


### Basic usage nm
* list symbols from object files
* some options
 - ```-D``` Display the dynamic symbols rather than the normal symbols.(only useful for shared libraries)

### Basic usage ldd
* prints the shared objects/libraries required by each program
* prints the shared object specified on the command line.

### Basic usage ldconfig
* creates the necessary links and cache to the most recent shared libraries
