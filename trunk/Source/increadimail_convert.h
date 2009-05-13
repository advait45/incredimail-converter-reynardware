//***********************************************************************************************
//     The contents of this file are subject to the Mozilla Public License
//     Version 1.1 (the "License"); you may not use this file except in
//     compliance with the License. You may obtain a copy of the License at
//     http://www.mozilla.org/MPL/
//
//     Software distributed under the License is distributed on an "AS IS"
//     basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
//     License for the specific language governing rights and limitations
//     under the License.
//
//     The Original Code is ReynardWare Incredimail Converter.
//
//     The Initial Developer of the Original Code is David P. Owczarski, created March 20, 2009
//
//     Contributor(s):
//
//************************************************************************************************

#ifndef __INCREDIMAIL_CONVERT__
#define __INCREDIMAIL_CONVERT__

#define S_LEN 1024*2
#define MAX_CHAR 256

static const char cb64[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void email_count( char *, int *, int * );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void get_email_offset_and_size( char *, unsigned int *, unsigned int *, int, int, int * );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void get_database_version( char *, char * );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void encodeblock( unsigned char in[3], unsigned char out[4], int len );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void encode( HANDLE infile, HANDLE outfile, int linesize );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void extract_eml_files( char *filename_data, char *, int offset, unsigned int size );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

void insert_attachments( char *eml_filename, char *attachments_path, char * );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

int DeleteDirectory(const char *);
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

int ReadOneLine( HANDLE infile, char *buffer, int max_line_length );
//***************************************************************************
// INPUTS:
//
// OUTPUTS:
//
// RETURN VALUE:
//
// DESCRIPTION:
//
//***************************************************************************

#endif