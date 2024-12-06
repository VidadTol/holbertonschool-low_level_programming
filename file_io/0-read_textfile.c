#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to the POSIX
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* descripteur de fichier*/
	ssize_t bytes_read, bytes_written; /* nbre de bytes lus, ecrits*/
	char *data;/*pointeur pour stoker les donnees lues*/

	if (filename == NULL)
		return (0);
	/*allocation memoire pour data*/
	/*alloue mem pour stocker les lett lues*/
	data = malloc(sizeof(char) * letters);
	if (data == NULL)
		return (0);
	/*ouverture du fichier*/
	fd = open(filename, O_RDONLY);/*ouverture fichier en lecture seule*/
	if (fd == -1)/*si l'ouverture echoue libere la memoire alloue et retourne 0*/
	{
		free(data);
		return (0);
	}
	/*lecture du fichier*/
	bytes_read = read(fd, data, letters);/* lit -> lett et les stockes ds data*/
	if (bytes_read == -1)/*si lect echoue libere la mem et ferme fichier*/
	{
		free(data);
		close(fd);
		return (0);
	}
	/*ecriture sur la sortie standard*/
	/*ecrit les donnees lues sur la sort stand*/
	bytes_written = write(STDOUT_FILENO, data, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(data);
		close(fd);
		return (0);
	}
	/*liberation de la memoire et fermeture du fichier*/
	free(data);/*libere la memoire alloue a data*/
	close(fd);/*ferme le descipteur de fichier*/

	return (bytes_written);/*retourne le nombre de lettre lues et imprimees*/
}

