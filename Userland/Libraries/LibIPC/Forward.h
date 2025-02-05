/*
 * Copyright (c) 2020, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

namespace IPC {

class Decoder;
class Dictionary;
class Encoder;
class Message;
class File;
class Stub;

template<typename T>
bool encode(Encoder&, T const&);

template<typename T>
ErrorOr<void> decode(Decoder&, T&);

}
