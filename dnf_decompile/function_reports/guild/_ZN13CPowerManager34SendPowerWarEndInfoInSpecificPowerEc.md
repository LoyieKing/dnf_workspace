# _ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc

`CPowerManager::SendPowerWarEndInfoInSpecificPower(char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a5148` | `0x389` | `0x809b252` | `0x395` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,226 +1,235 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x6c(%ebp)
 movsbl -0x6c(%ebp),%ebx
 movl   $0x42a,0x8(%esp)
 movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"SEND POWER WAR END INFO %d Power START",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x0,-0x34(%ebp)
 movl   $0x0,-0x30(%ebp)
 movb   $0x0,-0x29(%ebp)
 movl   $0x0,-0x28(%ebp)
 movl   $0x1,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
 movl   $0x0,-0x1c(%ebp)
 movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-movsbl -0x6c(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+mov    0x8(%ebp),%eax
+movsbl -0x6c(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower21GetPowerWarCharacInfoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo19GetCharacInfoVectorEv>
-mov    %eax,-0x10(%ebp)
-lea    -0x64(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x14(%ebp)
+lea    -0x64(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP20STPowerWarCharacInfoSaIS1_EE4sizeEv>
 mov    %eax,%ebx
 movl   $0x439,0x8(%esp)
 movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"SORT USER RANK COUNT : %d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x312>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x31e>
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x2cd>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x158>
+movl   $0x463,0x8(%esp)
+movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CharacInfo is NULL",0x8(%esp)
+movl   $"./log/PowerResult",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30f>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%ebx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30f>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x30(%ebp)
 cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30f>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x28(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetPowerSideEv>
 movzbl %al,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13GetWinnerSideEv>
 movsbl %al,%eax
 cmp    %eax,%ebx
-sete   %al
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x1ff>
+mov    $0x1,%eax
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x204>
+mov    $0x0,%eax
 mov    %al,-0x29(%ebp)
-movsbl -0x6c(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+movsbl -0x6c(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj>
+mov    %eax,-0x28(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN18CPowerWarGuildInfo20GetSpecificGuildInfoEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x2ae>
+mov    -0x18(%ebp),%eax
 add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj>
-mov    %eax,-0x20(%ebp)
-movsbl -0x6c(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18CPowerWarGuildInfo20GetSpecificGuildInfoEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x26c>
-mov    -0x14(%ebp),%eax
-mov    0x8(%eax),%ebx
-mov    -0x14(%ebp),%eax
-mov    0x4(%eax),%ecx
+mov    (%eax),%ebx
 mov    -0x18(%ebp),%eax
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
 movzbl -0x29(%ebp),%eax
-mov    -0x20(%ebp),%esi
+mov    -0x28(%ebp),%esi
 mov    %esi,0x20(%esp)
 mov    %ebx,0x1c(%esp)
 mov    %ecx,0x18(%esp)
 mov    -0x24(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager33SendPowerWarEndInfoToSpecificUserEP5CUserjhjjjjj>
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0x18(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30f>
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%esi
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,%ebx
 movl   $0x45c,0x8(%esp)
 movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %esi,0x14(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DBID(%d) CharacNo(%d) UserPP(%d) UserRank(%d)",0x8(%esp)
-movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-movl   $0x463,0x8(%esp)
-movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CharacInfo is NULL",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0x24(%ebp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEppEv>
 lea    -0x50(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x10c>
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x107>
 movsbl -0x6c(%ebp),%ebx
 movl   $0x46b,0x8(%esp)
 movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"SEND POWER WAR END INFO %d Power END",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SendPowerWarEndInfoInSpecificPower(char) */

void __thiscall
CPowerManager::_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc
          (CPowerManager *this,char param_1)

{
  char cVar1;
  bool bVar2;
  CPowerWarCharacInfo *this_00;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  CPowerWarGuildInfo *this_01;
  undefined4 uVar6;
  __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
  local_68 [4];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  __normal_iterator local_54 [4];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  undefined4 local_38;
  CGuild *local_34;
  uchar local_2d;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>> *local_14;
  CUser *local_10;
  
  CMyFileLog::CMyFileLog(local_64,"SendPowerWarEndInfoInSpecificPower",0x42a);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_64,"./log/Power","SEND POWER WAR END INFO %d Power START",(int)param_1);
  local_38 = 0;
  local_34 = (CGuild *)0x0;
  local_2d = '\0';
  local_2c = 0;
  local_28 = 1;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  this_00 = (CPowerWarCharacInfo *)
            CPower::GetPowerWarCharacInfo((CPower *)(this + param_1 * 0x6c + 8));
  local_14 = (vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>> *)
             CPowerWarCharacInfo::GetCharacInfoVector(this_00);
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
  uVar3 = std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::size(local_14);
  CMyFileLog::CMyFileLog(local_5c,"SendPowerWarEndInfoInSpecificPower",0x439);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_5c,"./log/PowerResult","SORT USER RANK COUNT : %d",uVar3);
  while( true ) {
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    bVar2 = __gnu_cxx::operator!=(local_68,local_54);
    if (!bVar2) break;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
                    ::operator*(local_68);
    local_1c = *piVar4;
    if (local_1c == 0) {
      CMyFileLog::CMyFileLog(local_48,"SendPowerWarEndInfoInSpecificPower",0x463);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/PowerResult","CharacInfo is NULL");
    }
    else {
      uVar5 = CApplication::Get_UserManager(*(CApplication **)(this + 4));
      local_10 = (CUser *)CUserManager::FindUser_CharNo(uVar5);
      if (local_10 != (CUser *)0x0) {
        CUser::GetGuildKey(local_10);
        uVar5 = CApplication::Get_GuildManager(*(CApplication **)(this + 4));
        local_34 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(uVar5);
        if (local_34 != (CGuild *)0x0) {
          local_2c = CUser::GetUniqCharNo(local_10);
          local_20 = CUser::GetGuildKey(local_10);
          uVar5 = CGuild::GetPowerSide(local_34);
          cVar1 = _ZN13CPowerManager13GetWinnerSideEv(this);
          local_2d = (uVar5 & 0xff) == (int)cVar1;
          this_01 = (CPowerWarGuildInfo *)
                    CPower::GetPowerWarGuildInfo((CPower *)(this + param_1 * 0x6c + 8));
          local_24 = CPowerWarGuildInfo::GetGuildRanking(this_01,local_20);
          uVar5 = CPower::GetPowerWarGuildInfo((CPower *)(this + param_1 * 0x6c + 8));
          local_18 = CPowerWarGuildInfo::GetSpecificGuildInfo(uVar5);
          if (local_18 == 0) {
            uVar3 = *(undefined4 *)(local_1c + 4);
            uVar6 = CUser::GetDBID(local_10);
            CMyFileLog::CMyFileLog(local_50,"SendPowerWarEndInfoInSpecificPower",0x45c);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_50,"./log/PowerResult","DBID(%d) CharacNo(%d) UserPP(%d) UserRank(%d)",
                       uVar6,local_2c,uVar3,local_28);
          }
          else {
            _ZN13CPowerManager33SendPowerWarEndInfoToSpecificUserEP5CUserjhjjjjj
                      (this,local_10,local_2c,local_2d,*(uint *)(local_1c + 4),local_28,
                       *(uint *)(local_18 + 4),*(uint *)(local_18 + 8),local_24);
          }
        }
      }
    }
    local_28 = local_28 + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
    ::operator++(local_68);
  }
  CMyFileLog::CMyFileLog(local_40,"SendPowerWarEndInfoInSpecificPower",0x46b);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/PowerResult","SEND POWER WAR END INFO %d Power END",(int)param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 592 行）：

```cpp
void CPowerManager::SendPowerWarEndInfoInSpecificPower(char side)
{
    DNF_LOG_SCOPE_LINE(0x42a, "./log/Power", "SEND POWER WAR END INFO %d Power START", side);
    unsigned int charNo = 0;
    CGuild* guild = 0;
    unsigned char isWinner = 0;
    unsigned int guildRank = 0;
    unsigned int userRank = 1;
    unsigned int guildKey = 0;
    STPowerWarCharacInfo* characInfo = 0;
    STPowerWarGuildInfo* guildInfo = 0;
    std::vector<STPowerWarCharacInfo*>* vec =
        ((CPower*)((char*)this + side * 0x6c + 8))->GetPowerWarCharacInfo()
            ->GetCharacInfoVector();
    std::vector<STPowerWarCharacInfo*>::iterator it = vec->begin();
    {
        DNF_LOG_SCOPE_LINE(0x439, "./log/PowerResult", "SORT USER RANK COUNT : %d",
            (int)vec->size());
    }
    for (; it != vec->end(); ++it)
    {
        characInfo = *it;
        if (characInfo == 0)
        {
            DNF_LOG_SCOPE_LINE(0x463, "./log/PowerResult", "CharacInfo is NULL");
        }
        else
        {
            CUser* user = (*(CApplication**)((char*)this + 4))->Get_UserManager()
                ->FindUser_CharNo(*(unsigned int*)characInfo->m_data);
            if (user != 0)
            {
                guild = (*(CApplication**)((char*)this + 4))->Get_GuildManager()
                    ->FindGuild(user->GetGuildKey());
                if (guild != 0)
                {
                    charNo = user->GetUniqCharNo();
                    guildKey = user->GetGuildKey();
                    isWinner = (guild->GetPowerSide() == GetWinnerSide()) ? 1 : 0;
                    CPower* power = (CPower*)((char*)this + side * 0x6c + 8);
                    guildRank = power->GetPowerWarGuildInfo()->GetGuildRanking(guildKey);
                    guildInfo = power->GetPowerWarGuildInfo()->GetSpecificGuildInfo(guildKey);
                    if (guildInfo != 0)
                    {
                        SendPowerWarEndInfoToSpecificUser(user, charNo, isWinner,
                            *(unsigned int*)(characInfo->m_data + 4), userRank,
                            *(unsigned int*)(guildInfo->m_data + 4),
                            *(unsigned int*)(guildInfo->m_data + 8), guildRank);
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x45c, "./log/PowerResult",
                            "DBID(%d) CharacNo(%d) UserPP(%d) UserRank(%d)",
                            user->GetDBID(), charNo, *(unsigned int*)(characInfo->m_data + 4),
                            userRank);
                    }
                }
            }
        }
        userRank++;
    }
    {
        DNF_LOG_SCOPE_LINE(0x46b, "./log/PowerResult", "SEND POWER WAR END INFO %d Power END", side);
    }
}
```
