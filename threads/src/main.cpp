// # 1. Create and navigate to a build directory
// mkdir build
// cd build

// # 2. Configure the project (generate the Makefile)
// cmake -G "MinGW Makefiles" ..

// # 3. Build the project (compile and link to create hello.exe)
// # Option A: Using the specific make tool
// mingw32-make

// # Option B: Using the generic CMake command (recommended)
// cmake --build .

// # 4. Run the generated executable
// ./hello.exe