#include<iostream>
#pragma once
#include <Windows.h>
#include "../Transport/Transport.h"
#include "../Transport/boots.h"
#include "../Transport/MakeTransport.h"
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num = 0;
	int distance = 0;
	int end = -1;


	Transport* transport[] = {
							   MakeTransport(TransportType::boots),
							   MakeTransport(TransportType::camel),
							   MakeTransport(TransportType::camel_faster),
							   MakeTransport(TransportType::centaur),
							   MakeTransport(TransportType::broom),
							   MakeTransport(TransportType::carpet),
							   MakeTransport(TransportType::eagle),


	};
	std::string type_race = " ";
	int type_race_num = 0;
	int transport_num = -1;
	int count_transport = 0;
	
	
	while (end != 0) {
		int arr[8] = {};
		        std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
				
			do {
				std::cout << "0. Выйти из игры\n";
				std::cout << "1. Гонка для наземного транспорта\n";
				std::cout << "2. Гонка для воздушного транспорта\n";
				std::cout << "3. Гонка для наземного транспорта и воздушного транспорта\n";
				std::cout << "Выберите тип гонки: ";
				std::cin >> type_race_num;
			
			    if (type_race_num == 1) {
					type_race = "Гонка для наземного транспорта.";
				}
				else if (type_race_num == 2) {
					type_race = "Гонка для воздушного транспорта.";
				}
				else if (type_race_num == 3) {
					type_race = " Гонка для наземного транспорта и воздушного транспорта";
				}
				else if (type_race_num == 0) {
					end = 0;
				}
				else  {
					std::cout << "Не коректный ввод. Попробуйте еще раз!\n";
				}
			} while ((type_race_num < 0 || type_race_num > 3));
			std::cout << "Укажите длину дистанции (должна быть положительной): ";
			do {
				std::cin >> distance;
			} while (distance < 0);

			 // **********************   Начало регистрации *************

			count_transport = 0;
			do {
				
					std::cout << "Должно быть зарегистрированно хотя бы 2 транспортных средства.\n";
					std::cout << "0. Выйти из игры\n";
					std::cout << "1. Зарегистрировать транспортное средство.\n";
					if (count_transport > 1) {

						std::cout << "2. Начать гонку. \n";
					}

					num = -1;
					while ((num < 0) || (num > 2)) {
					  std::cin >> num;
						if ((num < 0) || (num > 2)) {
							std::cout << "Не коректный ввод. Попробуйте еще раз!\n";
						}
						else if (num == 0) {
							end = 0;
						}
					}

					// ***************************** Выбор транспортного средства *******************
					if (num == 1) {
						while (end != 2) {
							std::cout << std::endl;
							std::cout << type_race << "Расстояние: " << distance << std::endl;
							if ((count_transport > 0) && (transport_num >= 0)) {
								std::cout << "Зарегистрированные транспортные средства:" << std::endl;
								for (int i = 0; i < count_transport  ; ++i) {

									
									std::cout << " --" << transport[arr[i]]->Name() << std::endl;
									
								  

								
								
								}
							}
							std::wcout << std::endl;
							std::cout << "1. Сапоги-вездеходы" << std::endl;
							std::cout << "2. Верблюд " << std::endl;
							std::cout << "3. Верблюд-быстроход " << std::endl;
							std::cout << "4. Кентавр" << std::endl;
							std::cout << "5. Метла" << std::endl;
							std::cout << "6. Ковёр-самолёт" << std::endl;
							std::cout << "7. Орёл" << std::endl;
							std::cout << "0. Окончание регистрации" << std::endl;
							std::cout << "Выберети тип действия или нажмите 0 для окончания процесса регистрации: ";


							std::cin >> transport_num;
							
					
						// ***************************** Регистрация транспортного средства *******************

							if (count_transport > 0) {
								for (int i = 0; i < count_transport; ++i) {


									if (arr[i] == (transport_num - 1)) {
										std::cout << "Нельзя зарегистрировать транспорт дважды." << std::endl;
										end = 3;
									}
								}
							}

							if (end != 3) {
								end = 2;
							}
							else { end = -1; }

						}
						end = -1;
					   
						
						
						// ************************** Для наземных **********
					 if (transport_num == 0) {
						std::cout << "Конец регистрации." << std::endl;
					}
					 else if ((type_race_num == 1)) {
							if (transport_num >= 1 && transport_num < 5) {

                                arr[count_transport] = --transport_num;
								++count_transport;

							}
							else {
								std::cout << "Нельзя выбрать данный тип транспорта для наземной гонки!\n Попробуйте зерегистрировать заново! " << std::endl;
							}

						}
						// ************************** Для воздушных **********
						else if (type_race_num == 2) {
							if ((transport_num > 4) && (transport_num < 8)) {



								arr[count_transport] = --transport_num;

							
								//std::cout << arr[count_transport] << std::endl;
								//std::cout << transport[arr[count_transport]]->calcTime() << std::endl;
								++count_transport;

							}
							else {
								std::cout << "Нельзя выбрать данный тип транспорта для воздушной гонки!\n Попробуйте зерегистрировать заново! " << std::endl;
							}
						}
						// ************************** Для всех **********
						else if ((type_race_num == 3)) {



							arr[count_transport] = --transport_num;

							
							//std::cout << arr[count_transport] << std::endl;
							//std::cout << transport[arr[count_transport]]->calcTime() << std::endl;
							++count_transport;
						}
						
						else {
							std::cout << "Не коректный ввод! " << std::endl;
						}
						std::cout << std::endl;

					}
				
				
				 // **************************************       Для транспортных средств: *****************
					else if ((num == 2) && (count_transport > 0)) {
						std::cout << type_race << std::endl << " Для транспортных средств: " << std::endl;

						for (int i = 0; i < count_transport; ++i) {

							transport[arr[i]]->setDistance(distance);

							std::cout << "-- " << transport[arr[i]]->Name() << std::endl;
					
						}
				
				// *******************   Сортировка ****************************
					for (int i = 0; i < count_transport; ++i) {
						for (int j = 1; j < count_transport; ++j) {
							
							if (transport[arr[j - 1]]->calcTime() > transport[arr[j]]->calcTime()) {
								int temp = arr[j - 1];
								arr[j - 1] = arr[j];
								arr[j] = temp;
							}
						}
					}
					// ****************************************** РЕЗУЛЬТАТ *********************** 
					for (int i = 1; i <= count_transport; ++i) {

						std::cout << i << ". "  << transport[arr[i - 1]]->Name() << " : " << transport[arr[i - 1]]->calcTime() << "\t" << std::endl;
					}
					std::cout << std::endl;
				
					end = 1;
					for (int i = 0; i < count_transport; ++i) {
						arr[i] = 0;
					}
				}
				else { std::cout << "Некоректный ввод!" << std::endl; }
				std::cout << std::endl;
			} while (end != 1);




		
			
	}
	
	std::cout << "До новых встреч!";
}