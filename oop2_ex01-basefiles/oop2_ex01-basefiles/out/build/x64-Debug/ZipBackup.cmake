string (TIMESTAMP MY_TIMESTAMP "%Y-%m-%d-%H-%M-%S")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe --build "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/out/build/x64-Debug" --target package_source)
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E copy "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/out/build/x64-Debug/oop2_ex01-your_name_here.zip" "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-your_name_here-${MY_TIMESTAMP}.zip")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E echo "")
execute_process (COMMAND C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe -E echo "***" C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-your_name_here-${MY_TIMESTAMP}.zip "file created ***")