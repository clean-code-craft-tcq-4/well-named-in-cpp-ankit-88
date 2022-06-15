// This File contains the Test case functions implementation.

#include "ColorCoder_TestFile.hpp"
#include <assert.h>

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajorColor,
    TelCoColorCoder::MinorColor expectedMinorColor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorPairFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.formColorPairString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajorColor);
    assert(colorPair.getMinorColor() == expectedMinorColor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor pairsMajorColor,
    TelCoColorCoder::MinorColor pairsMinorColor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColorPair(pairsMajorColor, pairsMinorColor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
