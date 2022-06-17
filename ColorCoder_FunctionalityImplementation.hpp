// This File contains all the data and function decalration for the implementation of color coder.

#include <iostream>
namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors ;	
    extern const char* MinorColorNames[] ;
    extern int numberOfMinorColors ;

    class ColorPair {
        private:
            MajorColor m_majorColor;
            MinorColor m_minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                m_majorColor(major), m_minorColor(minor)
            {}
            MajorColor getMajorColor();
               
            MinorColor getMinorColor();
                
            std::string formColorPairString();
    };
	
	ColorPair GetColorPairFromPairNumber(int pairNumber);
	int GetPairNumberFromColorPair(MajorColor pairsMajorColor, MinorColor pairsMinorColor);
	void printColorCodeManual();
}	