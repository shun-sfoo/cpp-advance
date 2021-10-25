#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <string>
#include "Soundex.h"

using namespace testing;

class SoundexEncoding : public Test {
public:
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
  EXPECT_EQ(soundex.encode("A"), "A000");
}

TEST_F(SoundexEncoding, PadsWithZeroToEnsureTreeDigits) {
  EXPECT_EQ(soundex.encode("I"), "I000");
}
