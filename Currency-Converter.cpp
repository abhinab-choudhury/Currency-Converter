#include "Currency-Converter.h";

using namespace web;
using namespace web::http;
using namespace web::http::client;

// void Display();
class Currency_Convert {
public:
	void Loading()
	{
		printf("\t\tLOADING");
		for (int i = 0; i < 6; i++)
		{
			Sleep(1000);
			printf(".");
		}
	}
	void con_INR()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t-------------------------- WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER --------------------------");

			printf("\n\n\t\t1.Convert to United States Dollar(USD)\n\t\t2.Convert to British Pound Sterling(GBP)\n\t\t3.Convert to Japanese Yen(JPY)\n\t\t4.Convert to Euro(EUR)\n\t\t5.Convert to Canadian Dollar(CAD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6))
			{
				printf("\n\n\t\tChoice not avilable.....\n\t\tPress an Key to Continue.....\n");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert Indian Ruppee(INR) to United States Dollar(USD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX INR) : ");
				std::cin >> INR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf USD\n", function(INR, "INR", "USD"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert Indian Ruppee(INR) to British Pound Sterling(GBP)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX INR) : ");
				std::cin >> INR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf GBP\n", std::stod(INR) * function(INR, "INR", "GBP"));
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n\n\t\tConvert Indian Ruppee(INR) to Japanese Yen(JPY)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX INR) : ");
				std::cin >> INR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf JPY\n", std::stod(INR) * function(INR, "INR", "JPY"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConvert Indian Ruppee(INR) to Euro(EUR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX INR) : ");
				std::cin >> INR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf EUR\n", std::stod(INR) * function(INR, "INR", "EUR"));
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n\n\t\tConvert Indian Ruppee(INR) to Canadian Dollar(CAD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX INR) : ");
				std::cin >> INR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf CAD\n", std::stod(INR) * function(INR, "INR", "CAD"));
				break;
			}
			case 6: {
				Display_Currency_Converter_main_menu();
				break;
			}
			default:
				std::cout << "\n\t\tWrong Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);

	}


	void con_USD()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

			printf("\n\n\t\t1.Convert to Indian Ruppee(INR)\n\t\t2.Convert to British Pound Sterling(GBP)\n\t\t3.Convert to Japanese Yen(JPY)\n\t\t4.Convert to Euro(EUR)\n\t\t5.Convert to Canadian Dollar(CAD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert United States Dollar(USD) to Indian Ruppee(INR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX USD) : ");
				std::cin >> USD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(USD) * function(USD, "USD", "INR"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert United States Dollar(USD) to British Pound Sterling(GBP)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX USD) : ");
				std::cin >> USD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf GBP\n", std::stod(USD) * function(USD, "USD", "GBP"));
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n\n\t\tConvert United States Dollar(USD) to Japanese Yen(JPY)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX USD) : ");
				std::cin >> USD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf JPY\n", std::stod(USD) * function(USD, "USD", "JPY"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConvert United States Dollar(USD) to Euro(EUR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX USD) : ");
				std::cin >> USD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf EUR\n", std::stod(USD) * function(USD, "USD", "EUR"));
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n\n\t\tConvert United States Dollar(USD) to Canadian Dollar(CAD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX USD) : ");
				std::cin >> USD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf CAD\n", std::stod(USD) * function(USD, "USD", "CAD"));
				break;
			}
			case 6: {
				Display_Currency_Converter_main_menu();
				break;
			}
			default:
				std::cout << "\n\t\tWrong Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);
	}

	void con_GBP()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

			printf("\n\n\t\t1.Convert to Indian Ruppee(INR)\n\t\t2.Convert to United States Dollar(USD)\n\t\t3.Convert to Japanese Yen(JPY)\n\t\t4.Convert to Euro(EUR)\n\t\t5.Convert to Canadian Dollar(CAD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert British Pound Sterling(GBP) to Indian Ruppee(INR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX GBP) : ");
				std::cin >> GBP >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(GBP) * function(GBP, "GBP", "INR"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert to British Pound Sterling(GBP) to United States Dollar(USD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX GBP) : ");
				std::cin >> GBP >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf USD\n", std::stod(GBP) * function(GBP, "GBP", "USD"));
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n\n\t\tConvert British Pound Sterling(GBP) to Japanese Yen(JPY)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX) GBP : ");
				std::cin >> GBP >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf JPY\n", std::stod(GBP) * function(GBP, "GBP", "JPY"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConvert British Pound Sterling(GBP) to Euro(EUR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX GBP) : ");
				std::cin >> GBP >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(GBP) * function(GBP, "GBP", "EUR"));
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n\n\t\tConvert British Pound Sterling(GBP) to Canadian Dollar(CAD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX GBP) : ");
				std::cin >> GBP >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(GBP) * function(GBP, "GBP", "CAD"));
				break;
			}
			case 6: {
				Display_Currency_Converter_main_menu();
				break;
			}
			default:
				std::cout << "\n\t\tWrong Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);
	}

	void con_JPY()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

			printf("\n\n\t\t1.Convert to Indian Ruppee(INR)\n\t\t2.Convert to British Pound Sterling(GBP)\n\t\t3.Convert to United States Dollar(USD)\n\t\t4.Convert to Euro(EUR)\n\t\t5.Convert to Canadian Dollar(CAD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert Japanese Yen(JPY) to Indian Ruppee(INR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX JPY) : ");
				std::cin >> JPY >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(JPY) * function(JPY, "JPY", "INR"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert Japanese Yen(JPY) to British Pound Sterling(GBP)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX JPY) : ");
				std::cin >> JPY >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf GBP\n", std::stod(JPY) * function(JPY, "JPY", "GBP"));
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n\n\t\tConver Japanese Yen(JPY) to United States Dollar(USD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX JPY) : ");
				std::cin >> JPY >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf USD\n", std::stod(JPY) * function(JPY, "JPY", "USD"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConver Japanese Yen(JPY) to Euro(EUR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX JPY) : ");
				std::cin >> JPY >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf EUR\n", std::stod(JPY) * function(JPY, "JPY", "EUR"));
				break;
			}
			case 5:
			{
				printf("\n\n\t\tConvert Japanese Yen(JPY) to Canadian Dollar(CAD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX JPY) : ");
				std::cin >> JPY >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf CAD\n", std::stod(JPY) * function(JPY, "JPY", "CAD"));
				break;
			}
			case 6:
				Display_Currency_Converter_main_menu();
				break;
			default:
				std::cout << "\n\t\tWrong Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);
	}

	void con_EUR()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
			printf("\n\n\t\t1.Convert to Indian Ruppee(INR)\n\t\t2.Convert to British Pound Sterling(GBP)\n\t\t3.Convert to Japanese Yen(JPY)\n\t\t4.Convert to United States Dollar(USD)\n\t\t5.Convert to Canadian Dollar(CAD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert Euro(EUR) to Indian Ruppee(INR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX EUR) : ");
				std::cin >> EUR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(EUR) * function(EUR, "EUR", "INR"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert Euro(EUR) to British Pound Sterling(GBP)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX EUR) : ");
				std::cin >> EUR >> buff;
				printf("\t\tLOADING");
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf GBP\n", std::stod(EUR) * function(EUR, "EUR", "GBP"));
				break;
			}
			case 3:
			{
				system("cls");
				printf("\n\n\t\tConvert Euro(EUR) to Japanese Yen(JPY)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX) EUR : ");
				std::cin >> EUR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf JPY\n", std::stod(EUR) * function(EUR, "EUR", "JPY"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConvert Euro(EUR) to United States Dollar(USD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX GBP) : ");
				std::cin >> EUR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf USD\n", std::stod(EUR) * function(EUR, "EUR", "USD"));
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n\n\t\tConvert Euro(EUR) to Canadian Dollar(CAD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX EUR) : ");
				std::cin >> EUR >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf CAD\n", std::stod(EUR) * function(EUR, "EUR", "CAD"));
				break;
			}
			case 6:
			{
				Display_Currency_Converter_main_menu();
				break;
			}
			default:
				std::cout << "\n\t\tWronge Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);
	}

	void con_CAD()
	{
		int choice;
		std::string USD, GBP, JPY, INR, CAD, EUR;

		std::string buff;
		do {
			INR = GBP = USD = EUR = JPY = CAD = "";
			system("cls");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE SUB - MENU OF CURRENCY CONVERTER \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
			printf("\n\n\t\t1.Convert to Indian Ruppee(INR)\n\t\t2.Convert to British Pound Sterling(GBP)\n\t\t3.Convert to Japanese Yen(JPY)\n\t\t4.Convert to Euro(EUR)\n\t\t5.Convert to United States Dollar(USD)\n\t\t6.Back");

			printf("\n\n\n\n\n\t\t Enter your choice:");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 6)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			switch (choice) {
			case 1:
			{
				system("cls");
				printf("\n\n\t\tConvert Canadian Dollar(CAD) to Indian Ruppee(INR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX CAD) : ");
				std::cin >> CAD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf INR\n", std::stod(CAD) * function(CAD, "CAD", "INR"));
				break;
			}
			case 2:
			{
				system("cls");
				printf("\n\n\t\tConvert Canadian Dollar(CAD) to British Pound Sterling(GBP)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX CAD) : ");
				std::cin >> CAD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf GBP\n", std::stod(CAD) * function(CAD, "CAD", "GBP"));
				break;
			}

			case 3:
			{
				system("cls");
				printf("\n\n\t\tConvert Canadian Dollar(CAD) to Japanese Yen(JPY)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX CAD) : ");
				std::cin >> CAD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf JPY\n", std::stod(CAD) * function(CAD, "CAD", "JPY"));
				break;
			}
			case 4:
			{
				system("cls");
				printf("\n\n\t\tConvert Canadian Dollar(CAD) to Euro(EUR)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX CAD) : ");
				std::cin >> CAD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf EUR\n", std::stod(CAD) * function(CAD, "CAD", "EUR"));
				break;
			}
			case 5:
			{
				system("cls");
				printf("\n\n\t\tConvert to Canadian Dollar(CAD) to United States Dollar(USD)......\n");
				printf("\n\n\t\tEnter the Amount (XXXXX CAD) : ");
				std::cin >> CAD >> buff;
				Loading();
				printf("\n");
				printf("\t\tAmount : %.2lf USD\n", std::stod(CAD) * function(CAD, "CAD", "USD"));
				break;
			}
			case 6: {
				Display_Currency_Converter_main_menu();
				break;
			}
			default:
				std::cout << "\n\t\tWrong Choise.\n";
			}
			std::cout << "\n\t\tPress Enter and Continue....\n";
			(void)_getch();
			if (choice == 6) {
				break;
			}
		} while (true);
	}

	int close()
	{
		printf("\n\n\t\t\t\t\t.........EXIT........\n\n\t\t");
		return 0;
	}

	void Display_Currency_Converter_main_menu()
	{
		int choice;
		do {
			system("cls");
			system("color 9");
			printf("\n\n\t\t\t\t CURRENCY CONVERTER  ");
			printf("\n\n\n\t\t-------------------------- WELCOME TO THE MAIN MENU OF CURRENCY CONVERTER --------------------------");
			printf("\n\n\t\t1.Convert Indian Ruppee(INR)\n\t\t2.Convert United States Dollar(USD)\n\t\t3.Convert British Pound Sterling(GBP)\n\t\t4.Convert Japanese Yen(JPY)\n\t\t5.Convert Euro(EUR)\n\t\t6.Convert Canadian Dollar(CAD)\n\t\t7.Exit");
			printf("\n");
			printf("\n\n\n\n\n\t\t Enter your choice: ");
			std::cin >> choice;
			if (!(choice >= 1 && choice <= 7)) {
				printf("\n\n\t\tChoice not avilable........\n\t\tPress any Key to Continue......");
				(void)_getch();
				continue;
			}
			system("cls");
			switch (choice)
			{
			case 1:con_INR();
				break;
			case 2:con_USD();
				break;
			case 3:con_GBP();
				break;
			case 4:con_JPY();
				break;
			case 5:con_EUR();
				break;
			case 6:con_CAD();
				break;
			case 7: close();
				exit(0);
			default:
				std::cout << "\n\t\t\t\tWrong Choise.\n";
			}
		} while (true);
	}


	double function(std::string amount, std::string from, std::string to) {
		http_client client(U("https://api.apilayer.com/exchangerates_data"));
		uri_builder builder(U("/convert"));

		builder.append_query(U("to"), utility::conversions::to_string_t(to));
		builder.append_query(U("from"), utility::conversions::to_string_t(from));
		builder.append_query(U("amount"), utility::conversions::to_string_t(amount));

		builder.append_query(U("apikey"), U("lwXtg0hjLJGqUSBbofEdCF72YIif5gY2"));

		http_request request(methods::GET);
		request.set_request_uri(builder.to_string());

		double result = 0.0;
		try {
			client.request(request).then([&result](http_response response) {
				return response.extract_json();
				}).then([&result](web::json::value body) {
					result = body[U("info")][U("rate")].as_double();
					}).wait();
		}
		catch (const std::exception& ex) {
			HANDLE c;
			c = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(c, 4);
			std::cout << "\t\t\t\tException occurred: " << ex.what() << std::endl;
			SetConsoleTextAttribute(c, 9);
		}
		return result;
	}
};


int main() {
	Currency_Convert obb;
	obb.Display_Currency_Converter_main_menu();
	return 0;
}