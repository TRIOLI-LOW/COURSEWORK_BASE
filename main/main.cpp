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
		        std::cout << "����� ���������� � �������� ���������!" << std::endl;
				
			do {
				std::cout << "0. ����� �� ����\n";
				std::cout << "1. ����� ��� ��������� ����������\n";
				std::cout << "2. ����� ��� ���������� ����������\n";
				std::cout << "3. ����� ��� ��������� ���������� � ���������� ����������\n";
				std::cout << "�������� ��� �����: ";
				std::cin >> type_race_num;
			
			    if (type_race_num == 1) {
					type_race = "����� ��� ��������� ����������.";
				}
				else if (type_race_num == 2) {
					type_race = "����� ��� ���������� ����������.";
				}
				else if (type_race_num == 3) {
					type_race = " ����� ��� ��������� ���������� � ���������� ����������";
				}
				else if (type_race_num == 0) {
					end = 0;
				}
				else  {
					std::cout << "�� ��������� ����. ���������� ��� ���!\n";
				}
			} while ((type_race_num < 0 || type_race_num > 3));
			std::cout << "������� ����� ��������� (������ ���� �������������): ";
			do {
				std::cin >> distance;
			} while (distance < 0);

			 // **********************   ������ ����������� *************

			count_transport = 0;
			do {
				
					std::cout << "������ ���� ����������������� ���� �� 2 ������������ ��������.\n";
					std::cout << "0. ����� �� ����\n";
					std::cout << "1. ���������������� ������������ ��������.\n";
					if (count_transport > 1) {

						std::cout << "2. ������ �����. \n";
					}

					num = -1;
					while ((num < 0) || (num > 2)) {
					  std::cin >> num;
						if ((num < 0) || (num > 2)) {
							std::cout << "�� ��������� ����. ���������� ��� ���!\n";
						}
						else if (num == 0) {
							end = 0;
						}
					}

					// ***************************** ����� ������������� �������� *******************
					if (num == 1) {
						while (end != 2) {
							std::cout << std::endl;
							std::cout << type_race << "����������: " << distance << std::endl;
							if ((count_transport > 0) && (transport_num >= 0)) {
								std::cout << "������������������ ������������ ��������:" << std::endl;
								for (int i = 0; i < count_transport  ; ++i) {

									
									std::cout << " --" << transport[arr[i]]->Name() << std::endl;
									
								  

								
								
								}
							}
							std::wcout << std::endl;
							std::cout << "1. ������-���������" << std::endl;
							std::cout << "2. ������� " << std::endl;
							std::cout << "3. �������-��������� " << std::endl;
							std::cout << "4. �������" << std::endl;
							std::cout << "5. �����" << std::endl;
							std::cout << "6. ����-������" << std::endl;
							std::cout << "7. ���" << std::endl;
							std::cout << "0. ��������� �����������" << std::endl;
							std::cout << "�������� ��� �������� ��� ������� 0 ��� ��������� �������� �����������: ";


							std::cin >> transport_num;
							
					
						// ***************************** ����������� ������������� �������� *******************

							if (count_transport > 0) {
								for (int i = 0; i < count_transport; ++i) {


									if (arr[i] == (transport_num - 1)) {
										std::cout << "������ ���������������� ��������� ������." << std::endl;
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
					   
						
						
						// ************************** ��� �������� **********
					 if (transport_num == 0) {
						std::cout << "����� �����������." << std::endl;
					}
					 else if ((type_race_num == 1)) {
							if (transport_num >= 1 && transport_num < 5) {

                                arr[count_transport] = --transport_num;
								++count_transport;

							}
							else {
								std::cout << "������ ������� ������ ��� ���������� ��� �������� �����!\n ���������� ���������������� ������! " << std::endl;
							}

						}
						// ************************** ��� ��������� **********
						else if (type_race_num == 2) {
							if ((transport_num > 4) && (transport_num < 8)) {



								arr[count_transport] = --transport_num;

							
								//std::cout << arr[count_transport] << std::endl;
								//std::cout << transport[arr[count_transport]]->calcTime() << std::endl;
								++count_transport;

							}
							else {
								std::cout << "������ ������� ������ ��� ���������� ��� ��������� �����!\n ���������� ���������������� ������! " << std::endl;
							}
						}
						// ************************** ��� ���� **********
						else if ((type_race_num == 3)) {



							arr[count_transport] = --transport_num;

							
							//std::cout << arr[count_transport] << std::endl;
							//std::cout << transport[arr[count_transport]]->calcTime() << std::endl;
							++count_transport;
						}
						
						else {
							std::cout << "�� ��������� ����! " << std::endl;
						}
						std::cout << std::endl;

					}
				
				
				 // **************************************       ��� ������������ �������: *****************
					else if ((num == 2) && (count_transport > 0)) {
						std::cout << type_race << std::endl << " ��� ������������ �������: " << std::endl;

						for (int i = 0; i < count_transport; ++i) {

							transport[arr[i]]->setDistance(distance);

							std::cout << "-- " << transport[arr[i]]->Name() << std::endl;
					
						}
				
				// *******************   ���������� ****************************
					for (int i = 0; i < count_transport; ++i) {
						for (int j = 1; j < count_transport; ++j) {
							
							if (transport[arr[j - 1]]->calcTime() > transport[arr[j]]->calcTime()) {
								int temp = arr[j - 1];
								arr[j - 1] = arr[j];
								arr[j] = temp;
							}
						}
					}
					// ****************************************** ��������� *********************** 
					for (int i = 1; i <= count_transport; ++i) {

						std::cout << i << ". "  << transport[arr[i - 1]]->Name() << " : " << transport[arr[i - 1]]->calcTime() << "\t" << std::endl;
					}
					std::cout << std::endl;
				
					end = 1;
					for (int i = 0; i < count_transport; ++i) {
						arr[i] = 0;
					}
				}
				else { std::cout << "����������� ����!" << std::endl; }
				std::cout << std::endl;
			} while (end != 1);




		
			
	}
	
	std::cout << "�� ����� ������!";
}