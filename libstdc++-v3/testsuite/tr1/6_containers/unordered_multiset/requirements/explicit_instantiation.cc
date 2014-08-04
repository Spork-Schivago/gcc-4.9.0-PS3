// { dg-do compile }

// 2005-02-17  Matt Austern  <austern@apple.com>
//
// Copyright (C) 2005-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 6.3.4.5 unordered_multiset

#include <tr1/unordered_set>

using namespace std::tr1;
using std::equal_to;
using std::allocator;

template class unordered_multiset<int>;
template class unordered_multiset<float, hash<float>, equal_to<float>,
				  allocator<float> >;
template class unordered_multiset<int, hash<int>, equal_to<int>,
				  allocator<char> >;
template class __unordered_multiset<float, hash<float>, equal_to<float>,
				    allocator<float>, true>;
