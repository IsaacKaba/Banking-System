bank_system: src/main.c src/account_manager.c src/account_manager.h
	gcc -Isrc src/main.c src/account_manager.c -o bank_system

clean:
	del bank_system.exe 2>nul || del bank_system 2>nul