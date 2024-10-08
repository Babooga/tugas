//ramadhan wijaya
#include <stdio.h>
#include <string.h>

//fungsi auntetikasi
int authenticate(char inputName[], char inputEmail[]) {
     
    char correctName[] = "user";  
    char correctEmail[] = "user@example.com"; 

    
    if (strcmp(inputName, correctName) == 0 && strcmp(inputEmail, correctEmail) == 0) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    char name[50];
    char email[50];
    int loginAttempts = 3;

    //percobaan login menggunakan nama dan email yang sudah ada
    printf("Selamat datang di sistem Log In Pawdoct\n");

    while (loginAttempts > 0) {
       
        printf("Masukkan Nama: ");
        gets(name);  
        printf("Masukkan Email: ");
        gets(email);  
        
     
        if (authenticate(name, email)) {
             
            printf("Autentikasi berhasil! Selamat datang, %s\n", name);
            printf("Mengalihkan ke halaman Home Page...\n");
            break;  
        } else {
             
            loginAttempts--;
            printf("Autentikasi gagal! Coba lagi. Sisa percobaan: %d\n", loginAttempts);
            if (loginAttempts == 0) {
                printf("Anda telah melebihi batas percobaan login.\n");
            }
        }
    }

    return 0;
}
