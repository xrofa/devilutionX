//HEADER_GOES_HERE
#ifndef __CODEC_H__
#define __CODEC_H__

int codec_decode(BYTE *pbSrcDst, DWORD size, char *pszPassword);
void codec_init_key(int unused, char *pszPassword);
DWORD codec_get_encoded_len(DWORD dwSrcBytes);
void codec_encode(void *pbSrcDst, int size, int size_64, char *pszPassword);

#endif /* __CODEC_H__ */
