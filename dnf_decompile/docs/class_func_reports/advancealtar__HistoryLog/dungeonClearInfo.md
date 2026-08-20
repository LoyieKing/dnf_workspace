# dungeonClearInfo

`_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb`

`advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133bd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133bd4  _ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb
#           advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)
# range [0x08133bd4, 0x08133d55]
08133bd4 +0x000:  push   %ebp
08133bd5 +0x001:  mov    %esp,%ebp
08133bd7 +0x003:  push   %edi
08133bd8 +0x004:  push   %esi
08133bd9 +0x005:  push   %ebx
08133bda +0x006:  sub    $0x15c,%esp
08133be0 +0x00c:  mov    0x10(%ebp),%eax
08133be3 +0x00f:  mov    %al,-0x12c(%ebp)
08133be9 +0x015:  movl   $0x0,-0x20(%ebp)
08133bf0 +0x01c:  mov    0xc(%ebp),%eax
08133bf3 +0x01f:  mov    %eax,(%esp)
08133bf6 +0x022:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08133bfb +0x027:  mov    %eax,(%esp)
08133bfe +0x02a:  call   08134886 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x48d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x48d
08133c03 +0x02f:  mov    %eax,-0x1c(%ebp)
08133c06 +0x032:  cmpl   $0x0,-0x1c(%ebp)
08133c0a +0x036:  jg     08133c15 <+0x41>
08133c0c +0x038:  movl   $0x0,-0x20(%ebp)
08133c13 +0x03f:  jmp    08133c27 <+0x53>
08133c15 +0x041:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08133c1c +0x048:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08133c21 +0x04d:  sub    -0x1c(%ebp),%eax
08133c24 +0x050:  mov    %eax,-0x20(%ebp)
08133c27 +0x053:  lea    -0x11f(%ebp),%edx
08133c2d +0x059:  mov    $0xff,%ebx
08133c32 +0x05e:  mov    $0x0,%eax
08133c37 +0x063:  mov    %edx,%ecx
08133c39 +0x065:  and    $0x1,%ecx
08133c3c +0x068:  test   %ecx,%ecx
08133c3e +0x06a:  je     08133c48 <+0x74>
08133c40 +0x06c:  mov    %al,(%edx)
08133c42 +0x06e:  add    $0x1,%edx
08133c45 +0x071:  sub    $0x1,%ebx
08133c48 +0x074:  mov    %edx,%ecx
08133c4a +0x076:  and    $0x2,%ecx
08133c4d +0x079:  test   %ecx,%ecx
08133c4f +0x07b:  je     08133c5a <+0x86>
08133c51 +0x07d:  mov    %ax,(%edx)
08133c54 +0x080:  add    $0x2,%edx
08133c57 +0x083:  sub    $0x2,%ebx
08133c5a +0x086:  mov    %ebx,%ecx
08133c5c +0x088:  shr    $0x2,%ecx
08133c5f +0x08b:  mov    %edx,%edi
08133c61 +0x08d:  rep stos %eax,%es:(%edi)
08133c63 +0x08f:  mov    %edi,%edx
08133c65 +0x091:  mov    %ebx,%ecx
08133c67 +0x093:  and    $0x2,%ecx
08133c6a +0x096:  test   %ecx,%ecx
08133c6c +0x098:  je     08133c74 <+0xa0>
08133c6e +0x09a:  mov    %ax,(%edx)
08133c71 +0x09d:  add    $0x2,%edx
08133c74 +0x0a0:  mov    %ebx,%ecx
08133c76 +0x0a2:  and    $0x1,%ecx
08133c79 +0x0a5:  test   %ecx,%ecx
08133c7b +0x0a7:  je     08133c82 <+0xae>
08133c7d +0x0a9:  mov    %al,(%edx)
08133c7f +0x0ab:  add    $0x1,%edx
08133c82 +0x0ae:  lea    -0x11f(%ebp),%eax
08133c88 +0x0b4:  mov    %eax,0x4(%esp)
08133c8c +0x0b8:  mov    0x8(%ebp),%eax
08133c8f +0x0bb:  mov    %eax,(%esp)
08133c92 +0x0be:  call   0812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>  ; advancealtar::getMemberNames(CUser*, char*)
08133c97 +0x0c3:  mov    0xc(%ebp),%eax
08133c9a +0x0c6:  mov    %eax,(%esp)
08133c9d +0x0c9:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
08133ca2 +0x0ce:  mov    (%eax),%eax
08133ca4 +0x0d0:  mov    %eax,%ebx
08133ca6 +0x0d2:  mov    0xc(%ebp),%eax
08133ca9 +0x0d5:  mov    %eax,(%esp)
08133cac +0x0d8:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08133cb1 +0x0dd:  mov    %eax,(%esp)
08133cb4 +0x0e0:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08133cb9 +0x0e5:  movzbl -0x12c(%ebp),%edx
08133cc0 +0x0ec:  mov    0x8(%ebp),%ecx
08133cc3 +0x0ef:  lea    0x79700(%ecx),%esi
08133cc9 +0x0f5:  mov    %ebx,0x20(%esp)
08133ccd +0x0f9:  lea    -0x11f(%ebp),%ecx
08133cd3 +0x0ff:  mov    %ecx,0x1c(%esp)
08133cd7 +0x103:  movl   $0x0,0x18(%esp)
08133cdf +0x10b:  movl   $0x1,0x14(%esp)
08133ce7 +0x113:  movl   $0x0,0x10(%esp)
08133cef +0x11b:  mov    %eax,0xc(%esp)
08133cf3 +0x11f:  mov    -0x20(%ebp),%eax
08133cf6 +0x122:  mov    %eax,0x8(%esp)
08133cfa +0x126:  mov    %edx,0x4(%esp)
08133cfe +0x12a:  mov    %esi,(%esp)
08133d01 +0x12d:  call   08684a6e <_ZN15cUserHistoryLog16DungeonClearInfoEiliii17ENUM_DUNGEON_MODEPKci>  ; cUserHistoryLog::DungeonClearInfo(int, long, int, int, int, ENUM_DUNGEON_MODE, char const*, int)
08133d06 +0x132:  cmpb   $0x0,-0x12c(%ebp)
08133d0d +0x139:  je     08133d4a <+0x176>
08133d0f +0x13b:  mov    0xc(%ebp),%eax
08133d12 +0x13e:  mov    %eax,(%esp)
08133d15 +0x141:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08133d1a +0x146:  mov    %eax,(%esp)
08133d1d +0x149:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08133d22 +0x14e:  movl   $0x0,0x10(%esp)
08133d2a +0x156:  movl   $0x1,0xc(%esp)
08133d32 +0x15e:  movl   $0x0,0x8(%esp)
08133d3a +0x166:  mov    %eax,0x4(%esp)
08133d3e +0x16a:  movl   $&_ZN12advancealtar10HistoryLog23advanceAltarstatistics_E,(%esp)
08133d45 +0x171:  call   08156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>  ; CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
08133d4a +0x176:  add    $0x15c,%esp
08133d50 +0x17c:  pop    %ebx
08133d51 +0x17d:  pop    %esi
08133d52 +0x17e:  pop    %edi
08133d53 +0x17f:  pop    %ebp
08133d54 +0x180:  ret
08133d55 +0x181:  nop
```

## 反编译 C

```c
// advancealtar::HistoryLog::dungeonClearInfo @ 0x8133bd4

/* advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool) */

void advancealtar::HistoryLog::dungeonClearInfo(CUser *param_1,StageControl *param_2,bool param_3)

{
  undefined4 uVar1;
  ProcStage *pPVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_123;
  char local_122 [254];
  int local_24;
  int local_20;
  
  bVar9 = 0;
  local_24 = 0;
  pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
  local_20 = ProcStage::getStartStageTime(pPVar2);
  if (local_20 < 1) {
    local_24 = 0;
  }
  else {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_24 = local_24 - local_20;
  }
  pcVar6 = &local_123;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_123 = '\0';
    pcVar6 = local_122;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  getMemberNames(param_1,&local_123);
  puVar3 = (undefined4 *)StageControl::getCharacData(param_2);
  uVar1 = *puVar3;
  pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
  uVar4 = ProcStage::getStageIndex(pPVar2);
  cUserHistoryLog::DungeonClearInfo
            ((cUserHistoryLog *)(param_1 + 0x79700),param_3,local_24,uVar4,0,1,0,&local_123,uVar1);
  if (param_3) {
    pPVar2 = (ProcStage *)StageControl::getProcStage(param_2);
    uVar7 = ProcStage::getStageIndex(pPVar2);
    CAdvanceAltarLog::incrementEntranceData((CAdvanceAltarLog *)advanceAltarstatistics_,uVar7,0,1,0)
    ;
  }
  return;
}
```
