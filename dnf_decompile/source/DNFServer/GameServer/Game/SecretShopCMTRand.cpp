// ============================================================================
// secretshop::CMTRand（G4 商城域）
// ----------------------------------------------------------------------------
// CSecretShop.cpp 在 namespace secretshop 内声明本地 CMTRand（仅 ctor + randInt）
// 并 new CMTRand(0) 使用。ORIG 中 SecretShopScript::GetItemByDungeonIdx/Lev 的
// 形参 mangled 为 P7CMTRand（全局 CMTRand），即商城域实际复用 df_game_r 的
// MT19937 CMTRand。此 TU 提供 secretshop::CMTRand，使用与全局 CMTRand（CMTRand.cpp）
// 一致的 MT19937 布局（0x9c8）与算法，保证商城随机语义一致。
// ============================================================================

namespace secretshop
{
class CMTRand
{
public:
    CMTRand(const unsigned long& seed);
    int randInt(const unsigned long& range);

private:
    unsigned long m_mt[624];   // +0x00
    unsigned long* m_next;     // +0x9c0
    int m_left;                // +0x9c4
};

namespace
{
const int MT_N = 624;
const int MT_M = 397;
const unsigned long MT_MATRIX_A = 0x9908b0dfUL;
const unsigned long MT_UPPER_MASK = 0x80000000UL;
const unsigned long MT_LOWER_MASK = 0x7fffffffUL;
}

CMTRand::CMTRand(const unsigned long& s)
{
    // 标准 MT19937 种子初始化。
    m_mt[0] = s & 0xffffffffUL;
    for (int i = 1; i < MT_N; ++i)
    {
        m_mt[i] = (1812433253UL * (m_mt[i - 1] ^ (m_mt[i - 1] >> 30)) + i);
        m_mt[i] &= 0xffffffffUL;
    }
    m_left = 1;   // 首次 randInt 触发 reload
    m_next = m_mt;
}

int CMTRand::randInt(const unsigned long& range)
{
    if (m_left >= MT_N)
    {
        // twist
        for (int i = 0; i < MT_N - MT_M; ++i)
            m_mt[i] = m_mt[i + MT_M] ^
                (((m_mt[i] & MT_UPPER_MASK) | (m_mt[i + 1] & MT_LOWER_MASK)) >> 1) ^
                ((m_mt[i + 1] & 1UL) ? MT_MATRIX_A : 0UL);
        for (int i = MT_N - MT_M; i < MT_N - 1; ++i)
            m_mt[i] = m_mt[i + MT_M - MT_N] ^
                (((m_mt[i] & MT_UPPER_MASK) | (m_mt[i + 1] & MT_LOWER_MASK)) >> 1) ^
                ((m_mt[i + 1] & 1UL) ? MT_MATRIX_A : 0UL);
        m_mt[MT_N - 1] = m_mt[MT_M - 1] ^
            (((m_mt[MT_N - 1] & MT_UPPER_MASK) | (m_mt[0] & MT_LOWER_MASK)) >> 1) ^
            ((m_mt[0] & 1UL) ? MT_MATRIX_A : 0UL);
        m_left = 0;
        m_next = m_mt;
    }
    unsigned long y = m_mt[m_left++];
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680UL;
    y ^= (y << 15) & 0xefc60000UL;
    y ^= (y >> 18);
    return (int)(y % range);
}
}  // namespace secretshop