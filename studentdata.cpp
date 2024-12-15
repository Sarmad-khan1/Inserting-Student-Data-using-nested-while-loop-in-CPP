void studentdata()
{
	system("cls");
	header();
	cout << "Add Students >>" << endl;
	cout << endl;
	while (true)
	{
		system("cls");
		header();
		cout << "Student " << studentCount + 1 << " name: ";
		cin >> student[studentCount];
		while (true)
		{
			cout << "Matric Marks: ";

			cin >> rolls[studentCount];
			if (rolls[studentCount] < 0 || rolls[studentCount] > 1100) // validation
			{
				cout << "Invalid marks. Please Enter correct marks!" << endl;
			}
			else
			{
				break;
			}
		}
		while (true)
		{
			cout << "Fsc Marks: ";
			cin >> fsc[studentCount];
			if (fsc[studentCount] < 0 || fsc[studentCount] > 1100) // validation
			{
				cout << "Invalid Marks. Please enter Correct marks!" << endl;
			}
			else
			{
				break;
			}
		}
		while (true)
		{
			cout << "Ecat Marks: ";
			cin >> ecat[studentCount];
			if (ecat[studentCount] < 0 || ecat[studentCount] > 400) // validation
			{
				cout << "Invalid marks. Please Enter correct marks!" << endl;
			}
			else
			{
				break;
			}
		}
		char choyce;

		cout << "Do you want to enter another student? (y/n): "; // validation to enter the entry

		cin >> choyce;
		if (choyce == 'Y' || choyce == 'y')
		{
			studentCount++;
			continue;
		}
		else
		{
			char choice;
			cout << "Re-enter data of current student? (y or n): "; // validation to overwrite the data of current entry
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				continue;
			}
			else
			{
				studentCount++;
				break;
			}
			aggregate();
		}
	}
}
