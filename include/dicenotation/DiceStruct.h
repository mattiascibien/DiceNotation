// Copyright(c) 2016 Mattias Cibien
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <DiceNotation.h>

class IDiceParser;
class IDiceRoller;

/// <summary>
/// The main class used to parse and roll dices.
/// </summary>
class DICENOTATION_API DiceStruct
{
	friend class IDiceParser;
public:
	/// <summary>
	/// Parses a struct using specified parser.
	/// </summary>
	/// <param name="parser">The parser.</param>
	/// <returns></returns>
	static DiceStruct* parse(IDiceParser* parser);

	/// <summary>
	/// Rolls the dices using the specified roller.
	/// </summary>
	/// <param name="roller">The roller.</param>
	/// <returns></returns>
	int roll(IDiceRoller* roller);
private:
	DiceStruct() { }

	int numberOfDices;
	int facesOfDice;
	bool modifier;
	int modifierValue;
};