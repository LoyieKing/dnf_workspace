# sendGold

`_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc`

`Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278cce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278cce  _ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc
#           Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)
# range [0x08278cce, 0x08278f15]
08278cce +0x000:  push   %ebp
08278ccf +0x001:  mov    %esp,%ebp
08278cd1 +0x003:  push   %esi
08278cd2 +0x004:  push   %ebx
08278cd3 +0x005:  sub    $0x50,%esp
08278cd6 +0x008:  mov    0x1c(%ebp),%eax
08278cd9 +0x00b:  mov    %al,-0x1c(%ebp)
08278cdc +0x00e:  mov    0xc(%ebp),%eax
08278cdf +0x011:  mov    %eax,0x4(%esp)
08278ce3 +0x015:  mov    0x8(%ebp),%eax
08278ce6 +0x018:  mov    %eax,(%esp)
08278ce9 +0x01b:  call   08279182 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc>  ; Secu_AccountHacking::isSameAccountCharacter(char const*)
08278cee +0x020:  test   %al,%al
08278cf0 +0x022:  jne    08278cfb <+0x2d>
08278cf2 +0x024:  cmpl   $0x1f4,0x14(%ebp)
08278cf9 +0x02b:  ja     08278d02 <+0x34>
08278cfb +0x02d:  mov    $0x1,%eax
08278d00 +0x032:  jmp    08278d07 <+0x39>
08278d02 +0x034:  mov    $0x0,%eax
08278d07 +0x039:  test   %al,%al
08278d09 +0x03b:  jne    08278f08 <+0x23a>
08278d0f +0x041:  cmpl   $0x0,0xc(%ebp)
08278d13 +0x045:  je     08278d56 <+0x88>
08278d15 +0x047:  mov    0x8(%ebp),%eax
08278d18 +0x04a:  mov    0x10(%eax),%eax
08278d1b +0x04d:  mov    %eax,(%esp)
08278d1e +0x050:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08278d23 +0x055:  movl   $0x0,0x14(%esp)
08278d2b +0x05d:  mov    0x14(%ebp),%edx
08278d2e +0x060:  mov    %edx,0x10(%esp)
08278d32 +0x064:  movl   $0x2ce,0xc(%esp)
08278d3a +0x06c:  mov    0xc(%ebp),%edx
08278d3d +0x06f:  mov    %edx,0x8(%esp)
08278d41 +0x073:  movl   $0x0,0x4(%esp)
08278d49 +0x07b:  mov    %eax,(%esp)
08278d4c +0x07e:  call   0844676c <_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj>  ; DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int, unsigned int)
08278d51 +0x083:  jmp    08278ddc <+0x10e>
08278d56 +0x088:  mov    0x8(%ebp),%eax
08278d59 +0x08b:  mov    0x10(%eax),%ebx
08278d5c +0x08e:  mov    0x8(%ebp),%eax
08278d5f +0x091:  mov    0x10(%eax),%eax
08278d62 +0x094:  mov    %eax,(%esp)
08278d65 +0x097:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08278d6a +0x09c:  mov    0x14(%ebp),%edx
08278d6d +0x09f:  mov    %edx,0x14(%esp)
08278d71 +0x0a3:  mov    0x10(%ebp),%edx
08278d74 +0x0a6:  mov    %edx,0x10(%esp)
08278d78 +0x0aa:  movl   $0x1,0xc(%esp)
08278d80 +0x0b2:  movl   $0x2ce,0x8(%esp)
08278d88 +0x0ba:  mov    %ebx,0x4(%esp)
08278d8c +0x0be:  mov    %eax,(%esp)
08278d8f +0x0c1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08278d94 +0x0c6:  mov    0x8(%ebp),%eax
08278d97 +0x0c9:  mov    0x10(%eax),%eax
08278d9a +0x0cc:  mov    %eax,(%esp)
08278d9d +0x0cf:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08278da2 +0x0d4:  movzwl %ax,%esi
08278da5 +0x0d7:  movzbl -0x1c(%ebp),%ebx
08278da9 +0x0db:  mov    0x8(%ebp),%eax
08278dac +0x0de:  mov    0x10(%eax),%eax
08278daf +0x0e1:  mov    %eax,(%esp)
08278db2 +0x0e4:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08278db7 +0x0e9:  mov    %esi,0x14(%esp)
08278dbb +0x0ed:  mov    0x14(%ebp),%edx
08278dbe +0x0f0:  mov    %edx,0x10(%esp)
08278dc2 +0x0f4:  mov    0x20(%ebp),%edx
08278dc5 +0x0f7:  mov    %edx,0xc(%esp)
08278dc9 +0x0fb:  mov    0x10(%ebp),%edx
08278dcc +0x0fe:  mov    %edx,0x8(%esp)
08278dd0 +0x102:  mov    %ebx,0x4(%esp)
08278dd4 +0x106:  mov    %eax,(%esp)
08278dd7 +0x109:  call   084b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>  ; XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int)
08278ddc +0x10e:  mov    0x8(%ebp),%eax
08278ddf +0x111:  mov    0x10(%eax),%eax
08278de2 +0x114:  test   %eax,%eax
08278de4 +0x116:  je     08278e01 <+0x133>
08278de6 +0x118:  mov    0x8(%ebp),%eax
08278de9 +0x11b:  mov    0x10(%eax),%eax
08278dec +0x11e:  mov    %eax,(%esp)
08278def +0x121:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08278df4 +0x126:  cmp    $0x64,%ax
08278df8 +0x12a:  ja     08278e01 <+0x133>
08278dfa +0x12c:  mov    $0x1,%eax
08278dff +0x131:  jmp    08278e06 <+0x138>
08278e01 +0x133:  mov    $0x0,%eax
08278e06 +0x138:  test   %al,%al
08278e08 +0x13a:  je     08278f0b <+0x23d>
08278e0e +0x140:  mov    0x14(%ebp),%eax
08278e11 +0x143:  mov    $0x0,%edx
08278e16 +0x148:  mov    %eax,-0x28(%ebp)
08278e19 +0x14b:  mov    %edx,-0x24(%ebp)
08278e1c +0x14e:  fildll -0x28(%ebp)
08278e1f +0x151:  mov    0x18(%ebp),%eax
08278e22 +0x154:  mov    $0x0,%edx
08278e27 +0x159:  mov    %eax,-0x28(%ebp)
08278e2a +0x15c:  mov    %edx,-0x24(%ebp)
08278e2d +0x15f:  fildll -0x28(%ebp)
08278e30 +0x162:  fdivrp %st,%st(1)
08278e32 +0x164:  flds   &data#0680b407(.rodata)
08278e38 +0x16a:  fmulp  %st,%st(1)
08278e3a +0x16c:  fnstcw -0x2a(%ebp)
08278e3d +0x16f:  movzwl -0x2a(%ebp),%eax
08278e41 +0x173:  mov    $0xc,%ah
08278e43 +0x175:  mov    %ax,-0x2c(%ebp)
08278e47 +0x179:  fldcw  -0x2c(%ebp)
08278e4a +0x17c:  fistpl -0xc(%ebp)
08278e4d +0x17f:  fldcw  -0x2a(%ebp)
08278e50 +0x182:  mov    0x14(%ebp),%eax
08278e53 +0x185:  mov    %eax,0x10(%esp)
08278e57 +0x189:  mov    0x10(%ebp),%eax
08278e5a +0x18c:  mov    %eax,0xc(%esp)
08278e5e +0x190:  mov    0xc(%ebp),%eax
08278e61 +0x193:  mov    %eax,0x8(%esp)
08278e65 +0x197:  movl   $0x3,0x4(%esp)
08278e6d +0x19f:  mov    0x8(%ebp),%eax
08278e70 +0x1a2:  mov    %eax,(%esp)
08278e73 +0x1a5:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08278e78 +0x1aa:  cmpl   $0x45,-0xc(%ebp)
08278e7c +0x1ae:  jle    08278ea8 <+0x1da>
08278e7e +0x1b0:  mov    0x14(%ebp),%eax
08278e81 +0x1b3:  mov    %eax,0x10(%esp)
08278e85 +0x1b7:  mov    0x10(%ebp),%eax
08278e88 +0x1ba:  mov    %eax,0xc(%esp)
08278e8c +0x1be:  mov    0xc(%ebp),%eax
08278e8f +0x1c1:  mov    %eax,0x8(%esp)
08278e93 +0x1c5:  movl   $0x0,0x4(%esp)
08278e9b +0x1cd:  mov    0x8(%ebp),%eax
08278e9e +0x1d0:  mov    %eax,(%esp)
08278ea1 +0x1d3:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08278ea6 +0x1d8:  jmp    08278f0f <+0x241>
08278ea8 +0x1da:  cmpl   $0x31,-0xc(%ebp)
08278eac +0x1de:  jle    08278ed8 <+0x20a>
08278eae +0x1e0:  mov    0x14(%ebp),%eax
08278eb1 +0x1e3:  mov    %eax,0x10(%esp)
08278eb5 +0x1e7:  mov    0x10(%ebp),%eax
08278eb8 +0x1ea:  mov    %eax,0xc(%esp)
08278ebc +0x1ee:  mov    0xc(%ebp),%eax
08278ebf +0x1f1:  mov    %eax,0x8(%esp)
08278ec3 +0x1f5:  movl   $0x1,0x4(%esp)
08278ecb +0x1fd:  mov    0x8(%ebp),%eax
08278ece +0x200:  mov    %eax,(%esp)
08278ed1 +0x203:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08278ed6 +0x208:  jmp    08278f0f <+0x241>
08278ed8 +0x20a:  cmpl   $0x1d,-0xc(%ebp)
08278edc +0x20e:  jle    08278f0e <+0x240>
08278ede +0x210:  mov    0x14(%ebp),%eax
08278ee1 +0x213:  mov    %eax,0x10(%esp)
08278ee5 +0x217:  mov    0x10(%ebp),%eax
08278ee8 +0x21a:  mov    %eax,0xc(%esp)
08278eec +0x21e:  mov    0xc(%ebp),%eax
08278eef +0x221:  mov    %eax,0x8(%esp)
08278ef3 +0x225:  movl   $0x2,0x4(%esp)
08278efb +0x22d:  mov    0x8(%ebp),%eax
08278efe +0x230:  mov    %eax,(%esp)
08278f01 +0x233:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08278f06 +0x238:  jmp    08278f0f <+0x241>
08278f08 +0x23a:  nop
08278f09 +0x23b:  jmp    08278f0f <+0x241>
08278f0b +0x23d:  nop
08278f0c +0x23e:  jmp    08278f0f <+0x241>
08278f0e +0x240:  nop
08278f0f +0x241:  add    $0x50,%esp
08278f12 +0x244:  pop    %ebx
08278f13 +0x245:  pop    %esi
08278f14 +0x246:  pop    %ebp
08278f15 +0x247:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::sendGold @ 0x8278cce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned
   char, char*) */

void __thiscall
Secu_AccountHacking::sendGold
          (Secu_AccountHacking *this,char *param_1,uint param_2,uint param_3,uint param_4,
          uchar param_5,char *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  uint uVar7;
  CHades *this_00;
  
  cVar3 = isSameAccountCharacter(this,param_1);
  if ((cVar3 == '\0') && (500 < param_3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if (param_1 == (char *)0x0) {
      uVar1 = *(undefined4 *)(this + 0x10);
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x10));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,uVar1,0x2ce,1,param_2,param_3);
      uVar7 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10));
      this_00 = (CHades *)CUser::getHades(*(CUser **)(this + 0x10));
      XNuclear::CHades::GoldTracking(this_00,param_5,param_2,param_6,param_3,uVar7 & 0xffff);
    }
    else {
      iVar5 = CUser::GetUID(*(CUser **)(this + 0x10));
      DB_SelectCharacMid::makeRequest(iVar5,0,param_1,0x2ce,param_3,0);
    }
    if ((*(int *)(this + 0x10) == 0) ||
       (uVar4 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10)),
       100 < uVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar5 = (int)ROUND((longdouble)_DAT_08c00fd0 * ((longdouble)param_3 / (longdouble)param_4));
      setPatten(this,3,param_1,param_2,param_3);
      if (iVar5 < 0x46) {
        if (iVar5 < 0x32) {
          if (0x1d < iVar5) {
            setPatten(this,2,param_1,param_2,param_3);
          }
        }
        else {
          setPatten(this,1,param_1,param_2,param_3);
        }
      }
      else {
        setPatten(this,0,param_1,param_2,param_3);
      }
    }
  }
  return;
}
```
