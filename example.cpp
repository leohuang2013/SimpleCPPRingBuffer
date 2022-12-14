/**
 * MIT License
 *  
 * Copyright (c) 2022 360Converter - Leo Huang
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <iostream> // std::cout

#include "RingBuffer.h"


int main( int argc, char* argv[])
{
    Buffers::RingBuffer<int> ringBuffer(8);
    for( int i = 0; i < 4; ++i )
    {
        ringBuffer.push_back( i );
    }

    // Print RingBuffer with iterator
    for(auto it = ringBuffer.begin(); it != ringBuffer.end(); it++) {
        cout << *it << endl;
    }
    cout<<"---------------------------"<<std::endl;
    Buffers::RingBuffer<int> ringBuffer1(8);
    for( int i = 0; i < 10; ++i )
    {
        ringBuffer1.push_back( i );
    }

    // Print RingBuffer with iterator
    for(auto it = ringBuffer1.begin(); it != ringBuffer1.end(); it++) {
        cout << *it << endl;
    }
    cout<<"---------------------------"<<std::endl;
    Buffers::RingBuffer<int> ringBuffer2(8);
    for( int i = 0; i < 127; ++i )
    {
        ringBuffer2.push_back( i );
    }

    // Print RingBuffer with iterator
    for(auto it = ringBuffer2.begin(); it != ringBuffer2.end(); it++) {
        cout << *it << endl;
    }
    cout<<"---------------------------"<<std::endl;
    Buffers::RingBuffer<std::string> ringBuffer3(8);
    for( int i = 0; i < 10; ++i )
    {
        ringBuffer3.push_back( std::string("testing") + std::to_string( i) );
    }

    // Print RingBuffer with iterator
    for(auto it = ringBuffer3.begin(); it != ringBuffer3.end(); it++) {
        cout << *it << endl;
    }
        
    return 0;
}
