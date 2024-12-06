#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 *
 * Return: always 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;/*descripteur de fichier*/
	ssize_t bytes_written;/* nbre de bytes ecrits*/
	size_t length = 0;/*variable length pour stocker la long de text_content*/

	if (filename == NULL)/*filename est Null return */
		return (-1);
	/*ouvrir le fichier le creer si n'existe pas ou le tronque si existe*/
	fd = open(filename, O_WRONLY | O_APPEND);
	/*ouvre le fichier en write seule|le cree si existe pas|*/
	/*le tronque si existe*/
	if (fd == -1)
		return (-1);

	if (text_content != NULL)/*si text diff de Null ecritds le fichier*/
	{
		/*calcul la long de text_content*/
		while (text_content[length] != '\0')
			length++;
		/*ecrit le contenu dans un fichier*/
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);/*ferme du descripteur de fichier*/
	return (1);/*retourne 1 en cas de succes*/
}
