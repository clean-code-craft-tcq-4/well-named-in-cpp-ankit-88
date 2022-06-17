#include <iostream>
#include"ColorCoder_TestFile.hpp"

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
	
	Printf("\nColor Code  Manual \n\n");
	TelCoColorCoder::printColorCodeManual();

    return 0;
}
