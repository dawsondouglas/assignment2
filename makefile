pet_manager: driver.o dog.o dogmanager.o dogtableprinter.o
	g++ -std=c++11 -o pet_manager driver.cpp dog.cpp dogmanager.cpp dogtableprinter.cpp

driver.o: driver.cpp dog.h dogmanager.h
	g++ -c -std=c++11 driver.cpp

dog.o: dog.cpp dog.h
	g++ -c -std=c++11 dog.cpp

dogmanager.o: dogmanager.cpp dogmanager.h dog.h dogtableprinter.h
	g++ -c -std=c++11 dogmanager.cpp

dogtableprinter.o: dogtableprinter.cpp dogtableprinter.h dog.h
	g++ -c -std=c++11 dogtableprinter.cpp

clean:
	rm *.o pet_manager