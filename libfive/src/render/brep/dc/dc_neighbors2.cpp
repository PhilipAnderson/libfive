/*
libfive: a CAD kernel for modeling with implicit functions

Copyright (C) 2018  Matt Keeter

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at http://mozilla.org/MPL/2.0/.
*/
#include "../neighbors.cpp"
#include "dc_neighbors.cpp"

namespace libfive {
template class Neighbors<2, DCTree<2>, DCNeighbors<2>>;
template class DCNeighbors<2>;
}   // namespace libfive
