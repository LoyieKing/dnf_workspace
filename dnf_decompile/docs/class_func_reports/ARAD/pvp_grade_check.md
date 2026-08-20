# pvp_grade_check

`_ZN4ARAD15pvp_grade_checkEP5CUser`

`ARAD::pvp_grade_check(CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819ebde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819ebde  _ZN4ARAD15pvp_grade_checkEP5CUser
#           ARAD::pvp_grade_check(CUser*)
# range [0x0819ebde, 0x0819ed83]
0819ebde +0x000:  push   %ebp
0819ebdf +0x001:  mov    %esp,%ebp
0819ebe1 +0x003:  push   %edi
0819ebe2 +0x004:  push   %esi
0819ebe3 +0x005:  push   %ebx
0819ebe4 +0x006:  sub    $0x5c,%esp
0819ebe7 +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819ebec +0x00e:  mov    %eax,(%esp)
0819ebef +0x011:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0819ebf4 +0x016:  cmp    $0x8,%eax
0819ebf7 +0x019:  je     0819ec0b <+0x2d>
0819ebf9 +0x01b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819ebfe +0x020:  mov    %eax,(%esp)
0819ec01 +0x023:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0819ec06 +0x028:  cmp    $0xd,%eax
0819ec09 +0x02b:  jne    0819ec12 <+0x34>
0819ec0b +0x02d:  mov    $0x1,%eax
0819ec10 +0x032:  jmp    0819ec17 <+0x39>
0819ec12 +0x034:  mov    $0x0,%eax
0819ec17 +0x039:  test   %al,%al
0819ec19 +0x03b:  je     0819ed77 <+0x199>
0819ec1f +0x041:  mov    0x8(%ebp),%eax
0819ec22 +0x044:  mov    %eax,(%esp)
0819ec25 +0x047:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0819ec2a +0x04c:  mov    %eax,-0x1c(%ebp)
0819ec2d +0x04f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ec32 +0x054:  mov    %eax,(%esp)
0819ec35 +0x057:  call   0819ee2e <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x6a>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x6a
0819ec3a +0x05c:  cmp    -0x1c(%ebp),%eax
0819ec3d +0x05f:  jg     0819ec51 <+0x73>
0819ec3f +0x061:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ec44 +0x066:  mov    %eax,(%esp)
0819ec47 +0x069:  call   0819ee3c <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x78>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x78
0819ec4c +0x06e:  cmp    -0x1c(%ebp),%eax
0819ec4f +0x071:  jge    0819ec58 <+0x7a>
0819ec51 +0x073:  mov    $0x1,%eax
0819ec56 +0x078:  jmp    0819ec5d <+0x7f>
0819ec58 +0x07a:  mov    $0x0,%eax
0819ec5d +0x07f:  test   %al,%al
0819ec5f +0x081:  je     0819eceb <+0x10d>
0819ec65 +0x087:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ec6a +0x08c:  mov    %eax,(%esp)
0819ec6d +0x08f:  call   0819ee3c <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x78>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x78
0819ec72 +0x094:  mov    %eax,%edi
0819ec74 +0x096:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ec79 +0x09b:  mov    %eax,(%esp)
0819ec7c +0x09e:  call   0819ee2e <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x6a>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x6a
0819ec81 +0x0a3:  mov    %eax,%esi
0819ec83 +0x0a5:  movl   $0xffffffff,0x4(%esp)
0819ec8b +0x0ad:  mov    0x8(%ebp),%eax
0819ec8e +0x0b0:  mov    %eax,(%esp)
0819ec91 +0x0b3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0819ec96 +0x0b8:  mov    %eax,%ebx
0819ec98 +0x0ba:  movl   $0x5,0xc(%esp)
0819eca0 +0x0c2:  movl   $0x12b,0x8(%esp)
0819eca8 +0x0ca:  movl   $&_ZZN4ARAD15pvp_grade_checkEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0819ecb0 +0x0d2:  lea    -0x3c(%ebp),%eax
0819ecb3 +0x0d5:  mov    %eax,(%esp)
0819ecb6 +0x0d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819ecbb +0x0dd:  mov    %edi,0x14(%esp)
0819ecbf +0x0e1:  mov    %esi,0x10(%esp)
0819ecc3 +0x0e5:  mov    -0x1c(%ebp),%eax
0819ecc6 +0x0e8:  mov    %eax,0xc(%esp)
0819ecca +0x0ec:  mov    %ebx,0x8(%esp)
0819ecce +0x0f0:  movl   $"User Level charac_no[%d] charac_level[%d] pvpchannelLev[%d][%d]",0x4(%esp)
0819ecd6 +0x0f8:  lea    -0x3c(%ebp),%eax
0819ecd9 +0x0fb:  mov    %eax,(%esp)
0819ecdc +0x0fe:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819ece1 +0x103:  mov    $0x0,%eax
0819ece6 +0x108:  jmp    0819ed7c <+0x19e>
0819eceb +0x10d:  mov    0x8(%ebp),%eax
0819ecee +0x110:  mov    %eax,(%esp)
0819ecf1 +0x113:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0819ecf6 +0x118:  mov    %eax,%ebx
0819ecf8 +0x11a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ecfd +0x11f:  mov    %ebx,0x4(%esp)
0819ed01 +0x123:  mov    %eax,(%esp)
0819ed04 +0x126:  call   0819ede0 <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x1c>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x1c
0819ed09 +0x12b:  xor    $0x1,%eax
0819ed0c +0x12e:  test   %al,%al
0819ed0e +0x130:  je     0819ed77 <+0x199>
0819ed10 +0x132:  mov    0x8(%ebp),%eax
0819ed13 +0x135:  mov    %eax,(%esp)
0819ed16 +0x138:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0819ed1b +0x13d:  mov    %eax,%esi
0819ed1d +0x13f:  movl   $0xffffffff,0x4(%esp)
0819ed25 +0x147:  mov    0x8(%ebp),%eax
0819ed28 +0x14a:  mov    %eax,(%esp)
0819ed2b +0x14d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0819ed30 +0x152:  mov    %eax,%ebx
0819ed32 +0x154:  movl   $0x5,0xc(%esp)
0819ed3a +0x15c:  movl   $0x135,0x8(%esp)
0819ed42 +0x164:  movl   $&_ZZN4ARAD15pvp_grade_checkEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0819ed4a +0x16c:  lea    -0x2c(%ebp),%eax
0819ed4d +0x16f:  mov    %eax,(%esp)
0819ed50 +0x172:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819ed55 +0x177:  mov    %esi,0xc(%esp)
0819ed59 +0x17b:  mov    %ebx,0x8(%esp)
0819ed5d +0x17f:  movl   $"User grade Error charac_no[%d] charac_pvp_grade[%d]",0x4(%esp)
0819ed65 +0x187:  lea    -0x2c(%ebp),%eax
0819ed68 +0x18a:  mov    %eax,(%esp)
0819ed6b +0x18d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819ed70 +0x192:  mov    $0x0,%eax
0819ed75 +0x197:  jmp    0819ed7c <+0x19e>
0819ed77 +0x199:  mov    $0x1,%eax
0819ed7c +0x19e:  add    $0x5c,%esp
0819ed7f +0x1a1:  pop    %ebx
0819ed80 +0x1a2:  pop    %esi
0819ed81 +0x1a3:  pop    %edi
0819ed82 +0x1a4:  pop    %ebp
0819ed83 +0x1a5:  ret
```

## 反编译 C

```c
// ARAD::pvp_grade_check @ 0x819ebde

/* ARAD::pvp_grade_check(CUser*) */

undefined4 ARAD::pvp_grade_check(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 == 8) {
LAB_0819ec0b:
    bVar1 = true;
  }
  else {
    pGVar3 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(pGVar3);
    if (iVar4 == 0xd) goto LAB_0819ec0b;
    bVar1 = false;
  }
  if (!bVar1) {
    return 1;
  }
  local_20 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::GetMinLevelPvPChannel(pCVar5);
  if (iVar4 <= local_20) {
    pCVar5 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::GetMaxLevelPvPChannel(pCVar5);
    if (local_20 <= iVar4) {
      bVar1 = false;
      goto LAB_0819ec5d;
    }
  }
  bVar1 = true;
LAB_0819ec5d:
  if (bVar1) {
    pCVar5 = (CDataManager *)G_CDataManager();
    uVar6 = CDataManager::GetMaxLevelPvPChannel(pCVar5);
    pCVar5 = (CDataManager *)G_CDataManager();
    uVar7 = CDataManager::GetMinLevelPvPChannel(pCVar5);
    uVar8 = CUser::get_charac_no(param_1,-1);
    cMyTrace::cMyTrace(local_40,"bool ARAD::pvp_grade_check(CUser*)",299,5);
    cMyTrace::operator()
              (local_40,"User Level charac_no[%d] charac_level[%d] pvpchannelLev[%d][%d]",uVar8,
               local_20,uVar7,uVar6);
    return 0;
  }
  iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::IsAvailablePvPChannel(pCVar5,iVar4);
  if (cVar2 == '\x01') {
    return 1;
  }
  uVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_charac_no(param_1,-1);
  cMyTrace::cMyTrace(local_30,"bool ARAD::pvp_grade_check(CUser*)",0x135,5);
  cMyTrace::operator()(local_30,"User grade Error charac_no[%d] charac_pvp_grade[%d]",uVar7,uVar6);
  return 0;
}
```
