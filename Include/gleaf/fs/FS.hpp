
/*

    Goldleaf - Nintendo Switch title manager homebrew (open-source)

    Copyright 2018 - Goldleaf project, developed and managed by XorTroll
    This project is under the terms of GPLv3 license: https://github.com/XorTroll/Goldleaf/blob/master/LICENSE

*/

#pragma once
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <memory>
#include <sys/stat.h>
#include <switch.h>

namespace gleaf::fs
{
    bool Exists(std::string Path);
    void CreateFile(std::string Path);
    void CreateDirectory(std::string Path);
    std::string SearchForFile(FsFileSystem FS, std::string Path, std::string Extension, std::string Root = "");
}