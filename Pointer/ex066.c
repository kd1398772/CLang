#include<stdio.h>
main()
{
	char * p_game[3] = { "wii","ds","playstaition4" };
	int i;
	char **pp;//�_�u���|�C���^
	pp = p_game;//�|�C���^�^�z��̐擪�A�h���X���_�u���|�C���^�Ɋi�[
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *pp++);
	}
}