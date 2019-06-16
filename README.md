# Labview_Python_DLL_Call

1. Open .sln file in vs folder (visual studio)
2. Select x86 or x64 for 32bit or 64bit, respectively
3. Rebuild All
4. Open .lvproj file in labview folder
5. Select modify the python version and path in the python node in test_dll.vi (in the code window)
6. Open Get Spher***.vi 
7. In code view double click on DLL node and set path to dll produced in step 3
8. Run Labview VI, move input controller to send new data to each dll or python call (FPS is calculated for each)

