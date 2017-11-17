/*
*
*  libjson c++11 Version 1.0
*
*
*  Created by Wilson.Souza
*  Copyright (C) 2017, WR DevInfo, All Rights Reserved.
*
*  Description:
*  Last update:
*
*  Dependence: none
*/
#pragma once
#include <json_libjson.hpp>
//-----------------------------------------------------------------------------------------------//
namespace std
{
   namespace json
   {
      using value = libjson::json;
      using pointer = std::shared_ptr<libjson::json>;
   }
}

