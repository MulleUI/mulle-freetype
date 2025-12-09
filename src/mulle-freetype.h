#ifndef mulle__freetype_h__
#define mulle__freetype_h__

#include <stdint.h>

/*
 *  (c) <|YEAR|> nat <|ORGANIZATION|>
 *
 *  version:  major, minor, patch
 */
#define MULLE__FREETYPE_VERSION  ((0UL << 20) | (7 << 8) | 56)


static inline unsigned int   mulle_freetype_get_version_major( void)
{
   return( MULLE__FREETYPE_VERSION >> 20);
}


static inline unsigned int   mulle_freetype_get_version_minor( void)
{
   return( (MULLE__FREETYPE_VERSION >> 8) & 0xFFF);
}


static inline unsigned int   mulle_freetype_get_version_patch( void)
{
   return( MULLE__FREETYPE_VERSION & 0xFF);
}

// mulle-c11 feature: MULLE__FREETYPE__GLOBAL
uint32_t   mulle_freetype_get_version( void);


#include <freetype/freetype.h>


#endif
