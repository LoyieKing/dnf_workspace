// df_game_r 还原 —— stGenerateRefData_t ctor/dtor（ORIG 0x814a706 / 0x814aaf0）。
// WarField.cpp 本地镜像使用（符号 _ZN19stGenerateRefData_tC1Ev/_ZN19stGenerateRefData_tD1Ev）；
// ctor 初始化与 ORIG 一致：m_dropRate=100，其余清零（ORIG +0x08 的 vector<bool> 在本地
// 镜像中为 raw pad，WarField 侧不当作容器使用，故以清零满足 ABI）。
#include <cstring>

struct stGenerateResult_t;  // 前向（本 TU 不实现）

struct stGenerateRefData_t
{
    stGenerateRefData_t();
    ~stGenerateRefData_t();

    int m_dropRate;      // +0x00（ORIG = 100）
    char m_pad4[0x20];   // +0x04
    int m_premiumRate;   // +0x20
    char m_forceDrop;    // +0x24
    char m_pad25[0x48 - 0x25];  // +0x25
};  // 0x48 字节（与 WarField.cpp 本地镜像一致）

stGenerateRefData_t::stGenerateRefData_t()
{
    m_dropRate = 100;
    m_premiumRate = 0;
    m_forceDrop = 0;
    memset(m_pad4, 0, sizeof(m_pad4));
    memset(m_pad25, 0, sizeof(m_pad25));
}

stGenerateRefData_t::~stGenerateRefData_t()
{
}