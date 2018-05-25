struct pinball_machine {
	char name[40 + 1];
	int year;
	enum type {EM, SS};
	int players;
}
