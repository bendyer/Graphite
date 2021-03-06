// Copyright (c) 2020 Tom Hancocks
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <string>
#include <vector>

#if !defined(GRAPHITE_MACROMAN)
#define GRAPHITE_MACROMAN

namespace graphite { namespace encoding { namespace mac_roman {

    /**
     * Convert a sequence of bytes into a UTF-8 string, translating them from a
     * Mac OS Roman encoding.
     */
    auto to_utf8(std::vector<uint8_t> bytes) -> std::string;

    /**
     * Convert a UTF-8 encoded string into a sequence of bytes containing a Mac OS
     * Roman encoded string.
     */
    auto from_utf8(const std::string& str) -> std::vector<uint8_t>;

}}};

#endif
