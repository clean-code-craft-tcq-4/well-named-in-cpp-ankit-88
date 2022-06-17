// This File contains all the data and function definition for the implementation of color coder.
	#include "ColorCoder_FunctionalityImplementation.hpp"
	namespace TelCoColorCoder
	{
		const char* MajorColorNames[] = {
            "White", "Red", "Black", "Yellow", "Violet"
        };
        int numberOfMajorColors =
            sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);	
        const char* MinorColorNames[] = {
            "Blue", "Orange", "Green", "Brown", "Slate"
        };
        int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
	    MajorColor ColorPair::getMajorColor() {
			return m_majorColor;
		}
		MinorColor ColorPair::getMinorColor() {
			return m_minorColor;
		}
		std::string ColorPair::formColorPairString() {
			std::string colorPairStr = MajorColorNames[m_majorColor];
			colorPairStr += " ";
			colorPairStr += MinorColorNames[m_minorColor];
			return colorPairStr;
		}	
		ColorPair GetColorPairFromPairNumber(int pairNumber) {
			int zeroBasedPairNumber = pairNumber - 1;
			MajorColor majorColor = 
				(MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
			MinorColor minorColor =
				(MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
			return ColorPair(majorColor, minorColor);
		}
		int GetPairNumberFromColorPair(MajorColor pairsMajorColor, MinorColor pairsMinorColor) {
			return pairsMajorColor * numberOfMinorColors + pairsMinorColor + 1;
		}
		
		void printColorCodeManual()
		{
			for(int majorColorIndex=0; majorColorIndex<numberOfMajorColors; majorColorIndex++)
			{
				for(int minorColorIndex=0; minorColorIndex<numberOfMinorColors; minorColorIndex++)
				{
					printf("%d		%s		%s ",((numberOfMinorColors*majorColorIndex)+ minorColorIndex), *(MajorColorNames+majorColorIndex), *(MinorColorNames+minorColorIndex) );
				}
			}
		}
	}