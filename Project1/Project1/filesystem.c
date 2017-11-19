#include "filesystem.h"
/*

Your filesystem will provide:
a flat namespace (e.g., there is only a single root directory and no subdirectories) and
a set of file operations.

You may implement either a FAT or inode-based block allocation strategy for files, but
you must document which strategy is used.
	   >>>>>>>>> We must choose which one to use! <<<<<<<<<<<<<

I will provide the implementation of a persistent "raw"
software disk (available via softwaredisk.h / softwaredisk.c), which supports reads/writes
of fixed-sized blocks (numbered 0..software_disk_size() - 1).

Your goal is to wrap a higher level filesystem interface around my software disk.
It is your responsibility to allocate blocks for file allocation, the directory structure, and file data.
You may use any sensible technique for tracking free disk blocks.

Further requirements:
• You must provide a file system initialization program called formatfs.c which initializes
your file system. Part of this initialization will including initializing the software disk via
init_software_disk(), which destroys all existing data.
• Your filesystem must handle out of space errors (e.g., operations which overflow the
capacity of the software disk) and set appropriate error conditions.
• Your filesystem must allow filenames of at least 255 characters in length, composed of
printable ASCII characters.
• Your filesystem must provide the filesystem.h interface.


*/



//int main() {
//
//
//
//
//
//
//
//
//}

int checkMode(FileMode mode) {
	if (mode == READ_ONLY) {
		return 0;
	}
	else {
		return 1;
	}
}

int checkError(FSError error) {
	switch (error) {

	case FS_NONE:
		return 0;
		break;

	case FS_OUT_OF_SPACE:
		return 1;
		break;

	case FS_FILE_NOT_OPEN:
		return 2;
		break;

	case FS_FILE_OPEN:
		return 3;
		break;

	case FS_FILE_NOT_FOUND:
		return 4;
		break;

	case FS_FILE_READ_ONLY:
		return 5;
		break;

	case FS_FILE_ALREADY_EXISTS:
		return 6;
		break;

	default:
		return -1;
		break;
	}
}

//for which, 0 for Open_file & 1 for Create_file
void findFileExist(FileInternals file, int which, char *name) {

	//stuff();

	if (/*found*/) {//if a file is found
		if (which) {//if create_file is calling and the file is found
			file->err = FS_FILE_ALREADY_EXISTS
		}
		else {//if open_file is calling and the file is found

		}
	}
	else {//if a file is not found
		if (!which) {//if Open_file is calling and the file is not found
			file->err = FS_FILE_NOT_FOUND;
		}
		else {//if create_file is calling and the file is not found

		}
	}
}

public File open_file(char *name, FileMode mode) {
	FileInternals file;

	if (checkMode(mode)) {
		
	}
	else {

	}
}

public File create_file(char *name, FileMode mode) {

}

public void close_file(File file) {

}

public unsigned long read_file(File file, void *buf, unsigned long numbytes) {

}

public unsigned long write_file(File file, void *buf, unsigned long numbytes) {

}

public void seek_file(File file, unsigned long bytepos) {

}

public int delete_file(char *name) {

}

public int file_exists(char *name) {

}

private void fs_print_error(void) {

}