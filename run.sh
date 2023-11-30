cmake -S . -B bin
cmake --build bin --target all --clean-first -j4
./bin/coolCalc

