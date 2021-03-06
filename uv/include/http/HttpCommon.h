﻿/*
   Copyright © 2017-2020, orcaer@yeah.net  All rights reserved.

   Author: orcaer@yeah.net

   Last modified: 2020-3-30

   Description: https://github.com/wlgq2/uv-cpp
*/

#ifndef UV_HTTP_COMMON_H
#define UV_HTTP_COMMON_H

#include <string>

namespace uv
{
namespace http
{

enum HttpVersion
{
    Unknown,
    Http1_0,
    Http1_1,
};

const char Crlf[2] = {'\r','\n'};

extern std::string HttpVersionToStr(HttpVersion version);
}
}
#endif
