#include "pch.h"
#include <../�����R�[�h�ϊ�/CharacterCode.h>
#include <../�����R�[�h�ϊ�/Sjis.h>

TEST(TestCaseName, TestName) {
	CharacterCode* c = new Sjis();
	EXPECT_EQ(c->toJis(0x82,0xA2), "��");
	unsigned char c1, c2;
	c1 = 0x41;
	c2 = 0x42;

  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}