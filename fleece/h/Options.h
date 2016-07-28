
/*
 * See fleece/COPYRIGHT for copyright information.
 *
 * This file is a part of Fleece.
 *
 * Fleece is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 3.0 of the License, or (at your option)
 * any later version.
 *  
 * This software is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software; if not, see www.gnu.org/licenses
*/

#include <iostream>
#include <string.h>

typedef struct OptionArg {
   char* str;
   bool mandatory;
   bool given;
   bool hasPostfix;
   void (*action)(char*, void*);
   struct OptionArg* next;
} OptionsArg;

class Options {

public:

/*Options();
   ~Options();
   void addArg(const char* argStr, bool mandatory, bool hasPostfix, void (*actionFunc)(char*, void*));
   int parse(int argc, char** argv, void* data, bool print);
private:
   OptionArg* optArgs;
*/

public:
   static void parse(int argc, char** argv);
   static char* get(const char* str);

private:
   static int    argc;
   static char** argv;

};
