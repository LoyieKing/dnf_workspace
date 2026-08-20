# CheckMoveMapFitInPathHackCnt

`_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji`

`Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827a96e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a96e  _ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji
#           Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned int, int)
# range [0x0827a96e, 0x0827aab5]
0827a96e +0x000:  push   %ebp
0827a96f +0x001:  mov    %esp,%ebp
0827a971 +0x003:  sub    $0x38,%esp
0827a974 +0x006:  cmpl   $0x0,0x10(%ebp)
0827a978 +0x00a:  je     0827aab3 <+0x145>
0827a97e +0x010:  cmpl   $0x0,0xc(%ebp)
0827a982 +0x014:  je     0827aab3 <+0x145>
0827a988 +0x01a:  mov    0x10(%ebp),%eax
0827a98b +0x01d:  mov    %eax,(%esp)
0827a98e +0x020:  call   0827ab3a <_GLOBAL__I__ZN24Secu_HackLogCheckByParty4InitEP6CParty+0x1d>  ; global constructors keyed to Secu_HackLogCheckByParty::Init(CParty*)+0x1d
0827a993 +0x025:  xor    $0x1,%eax
0827a996 +0x028:  test   %al,%al
0827a998 +0x02a:  je     0827a9b2 <+0x44>
0827a99a +0x02c:  movl   $0x1,0x4(%esp)
0827a9a2 +0x034:  mov    0x10(%ebp),%eax
0827a9a5 +0x037:  mov    %eax,(%esp)
0827a9a8 +0x03a:  call   0827ab4a <_GLOBAL__I__ZN24Secu_HackLogCheckByParty4InitEP6CParty+0x2d>  ; global constructors keyed to Secu_HackLogCheckByParty::Init(CParty*)+0x2d
0827a9ad +0x03f:  jmp    0827aab3 <+0x145>
0827a9b2 +0x044:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827a9b7 +0x049:  mov    0x1c(%ebp),%edx
0827a9ba +0x04c:  mov    %edx,0x4(%esp)
0827a9be +0x050:  mov    %eax,(%esp)
0827a9c1 +0x053:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0827a9c6 +0x058:  mov    %eax,-0xc(%ebp)
0827a9c9 +0x05b:  mov    0x10(%ebp),%eax
0827a9cc +0x05e:  mov    %eax,(%esp)
0827a9cf +0x061:  call   0822d88c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f36
0827a9d4 +0x066:  test   %al,%al
0827a9d6 +0x068:  jne    0827a9e8 <+0x7a>
0827a9d8 +0x06a:  mov    0x10(%ebp),%eax
0827a9db +0x06d:  mov    %eax,(%esp)
0827a9de +0x070:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0827a9e3 +0x075:  cmp    $0x1,%eax
0827a9e6 +0x078:  jne    0827aa15 <+0xa7>
0827a9e8 +0x07a:  cmpl   $0x0,-0xc(%ebp)
0827a9ec +0x07e:  je     0827aa15 <+0xa7>
0827a9ee +0x080:  mov    0x18(%ebp),%edx
0827a9f1 +0x083:  mov    0x14(%ebp),%eax
0827a9f4 +0x086:  mov    %edx,0x8(%esp)
0827a9f8 +0x08a:  mov    %eax,0x4(%esp)
0827a9fc +0x08e:  mov    -0xc(%ebp),%eax
0827a9ff +0x091:  mov    %eax,(%esp)
0827aa02 +0x094:  call   0834e9a6 <_ZNK4CMap20checkFitInPathObjectEii>  ; CMap::checkFitInPathObject(int, int) const
0827aa07 +0x099:  xor    $0x1,%eax
0827aa0a +0x09c:  test   %al,%al
0827aa0c +0x09e:  je     0827aa15 <+0xa7>
0827aa0e +0x0a0:  mov    $0x1,%eax
0827aa13 +0x0a5:  jmp    0827aa1a <+0xac>
0827aa15 +0x0a7:  mov    $0x0,%eax
0827aa1a +0x0ac:  test   %al,%al
0827aa1c +0x0ae:  je     0827aab3 <+0x145>
0827aa22 +0x0b4:  mov    0xc(%ebp),%eax
0827aa25 +0x0b7:  mov    %eax,(%esp)
0827aa28 +0x0ba:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827aa2d +0x0bf:  movl   $0x0,0x4(%esp)
0827aa35 +0x0c7:  mov    %eax,(%esp)
0827aa38 +0x0ca:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0827aa3d +0x0cf:  mov    0x18(%ebp),%edx
0827aa40 +0x0d2:  mov    %edx,0x1c(%esp)
0827aa44 +0x0d6:  mov    0x14(%ebp),%edx
0827aa47 +0x0d9:  mov    %edx,0x18(%esp)
0827aa4b +0x0dd:  mov    %eax,0x14(%esp)
0827aa4f +0x0e1:  movl   $"Path gate position error. (User: %s %d,%d)",0x10(%esp)
0827aa57 +0x0e9:  movl   $0x2c,0xc(%esp)
0827aa5f +0x0f1:  movl   $&_ZZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjjiE19__PRETTY_FUNCTION__,0x8(%esp)
0827aa67 +0x0f9:  movl   $"Secu_HackLogCheckByParty.cpp",0x4(%esp)
0827aa6f +0x101:  movl   $0x1,(%esp)
0827aa76 +0x108:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0827aa7b +0x10d:  mov    0xc(%ebp),%eax
0827aa7e +0x110:  mov    %eax,(%esp)
0827aa81 +0x113:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827aa86 +0x118:  mov    0x18(%ebp),%edx
0827aa89 +0x11b:  mov    %edx,0x14(%esp)
0827aa8d +0x11f:  mov    0x14(%ebp),%edx
0827aa90 +0x122:  mov    %edx,0x10(%esp)
0827aa94 +0x126:  movl   $0x1,0xc(%esp)
0827aa9c +0x12e:  movl   $0x1f7,0x8(%esp)
0827aaa4 +0x136:  mov    0xc(%ebp),%edx
0827aaa7 +0x139:  mov    %edx,0x4(%esp)
0827aaab +0x13d:  mov    %eax,(%esp)
0827aaae +0x140:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827aab3 +0x145:  leave
0827aab4 +0x146:  ret
0827aab5 +0x147:  nop
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt @ 0x827a96e

/* Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned
   int, int) */

void Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt
               (CUser *param_1,CParty *param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CMap *this;
  uint uVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 != (CParty *)0x0) {
    cVar2 = CParty::IsFirstMapClear((CParty *)param_3);
    if (cVar2 == '\x01') {
      iVar3 = G_CDataManager();
      this = (CMap *)CDataManager::find_map(iVar3);
      cVar2 = CParty::IsAutoCreated((CParty *)param_3);
      if ((((cVar2 == '\0') && (iVar3 = CParty::get_member_count((CParty *)param_3), iVar3 != 1)) ||
          (this == (CMap *)0x0)) ||
         (cVar2 = CMap::checkFitInPathObject(this,param_4,param_5), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"Secu_HackLogCheckByParty.cpp",
                   "void Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned int, int)"
                   ,0x2c,"Path gate position error. (User: %s %d,%d)",uVar5,param_4,param_5);
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_2,0x1f7,1,param_4,param_5);
      }
      return;
    }
    CParty::SetFirstMapClear((CParty *)param_3,true);
    return;
  }
  return;
}
```
