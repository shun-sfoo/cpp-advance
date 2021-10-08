#include <gmock/gmock-matchers.h>
#include <gmock/gmock.h>

#include "soundex.h"

using namespace testing;

class SoundexEncoding : public Test {
 public:
  Soundex soundex;
};

TEST_F(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
  auto encode = soundex.encode("Ab");
  ASSERT_THAT(encode, Eq("A100"));
}

TEST_F(SoundexEncoding, PadsWithZeroToEnsureTreeDigits) {
  auto encode = soundex.encode("I");
  ASSERT_THAT(encode, Eq("I000"));
}

TEST_F(SoundexEncoding, ReplaceConsonantsWithAppropriateDigits) {
  EXPECT_THAT(soundex.encode("Ab"), Eq("A100"));
  EXPECT_THAT(soundex.encode("Ac"), Eq("A200"));
  EXPECT_THAT(soundex.encode("Ad"), Eq("A300"));
}
