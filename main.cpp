#include <iostream>
#include <time.h>
#include <stdlib.h>


int main() {
	srand(time(NULL));
	int flag_menu = 1;

			int a[4][4];
			int sum = 0;
			int sum_all = 0;
			int ind = 0;
			int min_elem = 0;
			int max_elem = 0;
			int temp_2 = 0;
			double sr_sum = 0.0;



	do {


		std::cout << "\n" << "vvedite nomer zadani9 1-6,0-vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 1) {
			
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = rand() % 9;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " "<<a[i][j];
				}
				std::cout << "\n";
			}
			sum = 0;
			std::cout << "\n" << "Deistvie nad massivom " << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					sum += a[i][j];
					std::cout << " " << a[i][j];
				}
				std::cout << " | " << sum << "\n";
				sum_all += sum;
				sum = 0;
			}
			std::cout << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					sum += a[j][i];

				}
				std::cout << " " << sum;
				sum = 0;
				
			}
			std::cout << " obha9 summa = " << sum_all << "\n";

		}



		if (flag_menu == 2) {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = rand() % 9;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}

			sum = 0;
			sum_all = 0;
			ind = 0;
			min_elem = a[0][0];
			max_elem = 0;
			sr_sum = 0;
			std::cout << "\n" << "Deistvie nad massivom " << "\n";

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					sum_all += a[i][j];
					if (a[i][j] > max_elem) {
						max_elem = a[i][j];
					}
					if (a[i][j] < min_elem) {
						min_elem = a[i][j];
					}

				}
			}
			sr_sum = sum_all / 16.0;
			std::cout << "\n" << "Summa elementov =" << sum_all << "\n" << "min element= " << min_elem << "\n" << "Max element = " << max_elem << "\n" << "Srednie arif =" << sr_sum << "\n";

		}


		if (flag_menu == 3) {

			std::cout << "\n" << "danu dva massiva= " << "\n";
			int b[4][4];
			int c[4][4];
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					b[i][j] = rand() % 9;
				c[i][j] = rand() % 9;
				}
				
				
			}
			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << b[i][j];
				}
				std::cout << "\n";
			}
			
			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << c[i][j];
				}
				std::cout << "\n";
			}
			std::cout << "\n";


			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = b[i][j] * c[i][j];
				}
			}


			std::cout << "\n" << "kone4nii  massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}


		}

		if (flag_menu == 4) {

			int ab[5][10] = { 0 };
			int ac[5][5] = { 0 };

			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 10; j++) {
					ab[i][j] = rand() % 50;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 10; j++) {
					std::cout << " " << ab[i][j];
				}
				std::cout << "\n";
			}

			std::cout << "\n" << "Vtoroi massiv : " << "\n";

			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					ac[i][j] = ab[i][ind] + ab[i][ind+ 1];
					ind = ind + 2;
					std::cout << " " << ac[i][j];
				}
				ind = 0;
				std::cout << "\n";
			}




		}

		if (flag_menu == 5) {

			int kol_sd = 0;
			int naprav = 0;
			int temp = 0;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = rand() % 9;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}
			std::cout << "\n" << "vuberete koli4estvo sdigov = ";
			std::cin >> kol_sd;
			std::cout << "\n" << "viberete napravlenie : 1-vpravo , 2--vlevo , 3-vverh ,4-vniz";
			do {
				std::cin >> naprav;
			} while (naprav < 0 && naprav > 4);
			
			kol_sd = kol_sd % 4;  // vuhitivaem koli4estvo sdvigov;
			std::cout << "\n" <<"koli4estvo sdvigov rafno = " << kol_sd;

			do {
				if (naprav == 1) {

						for (int i = 0; i < 4; i++) {
						temp = a[i][3];
							for (int j = 3; j > 0; j--) {
								a[i][j] = a[i][j - 1];
						}
						a[i][0] = temp;
						}
				}
				if (naprav == 2) {
					for (int i = 0; i < 4; i++) {
						temp = a[i][0];
						for (int j = 0; j < 3; j++) {
							a[i][j] = a[i][j + 1];
						}
						a[i][3] = temp;
					}



				}

				if (naprav == 3) {
					for (int i = 0; i < 4; i++) {
						temp = a[0][i];
						for (int j = 0; j < 3; j++) {
							a[j][i] = a[j + 1][i];
						}
						a[3][i] = temp;
					}


				}
				if (naprav == 4) {

					for (int i = 0; i < 4; i++) {
						temp = a[3][i];
						for (int j = 3; j > 0; j--) {
							a[j][i] = a[j - 1][i];
						}
						a[0][i] = temp;
					}


				}




				/*
				std::cout << "\n" << "vuhodnoi massiv = " << "\n";
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						std::cout << " " << a[i][j];
					}
					std::cout << "\n";
				}
			*/
				kol_sd--;
			} while (kol_sd != 0);

			std::cout << "\n" << "vuhodnoi massiv = " <<"\n" ;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}

		}





		if (flag_menu == 6) {

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = rand() % 9;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}


			std::cout << "\n" << "sortirovka = " << "\n";
			ind = 1;
			do {
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 3; j++) {
						if (a[i][j] > a[i][j + 1]) {
							temp_2 = a[i][j];
							a[i][j] = a[i][j + 1];
							a[i][j + 1] = temp_2;
							
						}
						
					}
					
			}
				if (a[0][3] > a[1][0]) {
					temp_2 = a[0][3];
					a[0][3] = a[1][0];
					a[1][0] = temp_2;
			}
				if (a[1][3] > a[2][0]) {
					temp_2 = a[1][3];
					a[1][3] = a[2][0];
					a[2][0] = temp_2;
				}
				if (a[2][3] > a[3][0]) {
					temp_2 = a[2][3];
					a[2][3] = a[3][0];
					a[3][0] = temp_2;
				}
			
				ind++;

				if (ind >= 16) {
					ind = 0;
				}
			} while (ind != 0);


			std::cout << "\n" << "vuhodnoi massiv = " << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}


		}



		if (flag_menu == 7) {


			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					a[i][j] = rand() % 9;
				}
			}

			std::cout << "\n" << "Ishodnii massiv" << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << a[i][j];
				}
				std::cout << "\n";
			}


			int bb[4][4] = { 0 };

			std::cout << "\n" << "Vuhodoi massiv =" << "\n";
			ind = 0;
			 int ind_2 = 0;
			 sum = 0;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					bb[i][j] = a[i][j] + sum;
					sum = bb[i][j];
				}
				
			}

			std::cout << "\n" << "vuhodnoi massiv = " << "\n";
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					std::cout << " " << bb[i][j];
				}
				std::cout << "\n";
			}



		}
	
	} while (flag_menu!=0);

}