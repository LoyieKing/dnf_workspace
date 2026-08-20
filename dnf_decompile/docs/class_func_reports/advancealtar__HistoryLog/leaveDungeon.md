# leaveDungeon

`_ZN12advancealtar10HistoryLog12leaveDungeonER5CUserRKNS_9ProcStageE`

`advancealtar::HistoryLog::leaveDungeon(CUser&, advancealtar::ProcStage const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133abc  _ZN12advancealtar10HistoryLog12leaveDungeonER5CUserRKNS_9ProcStageE
#           advancealtar::HistoryLog::leaveDungeon(CUser&, advancealtar::ProcStage const&)
# range [0x08133abc, 0x08133b3f]
08133abc +0x00:  push   %ebp
08133abd +0x01:  mov    %esp,%ebp
08133abf +0x03:  push   %edi
08133ac0 +0x04:  push   %ebx
08133ac1 +0x05:  sub    $0x120,%esp
08133ac7 +0x0b:  lea    -0x108(%ebp),%ebx
08133acd +0x11:  mov    $0x0,%eax
08133ad2 +0x16:  mov    $0x40,%edx
08133ad7 +0x1b:  mov    %ebx,%edi
08133ad9 +0x1d:  mov    %edx,%ecx
08133adb +0x1f:  rep stos %eax,%es:(%edi)
08133add +0x21:  lea    -0x108(%ebp),%eax
08133ae3 +0x27:  mov    %eax,0x4(%esp)
08133ae7 +0x2b:  mov    0x8(%ebp),%eax
08133aea +0x2e:  mov    %eax,(%esp)
08133aed +0x31:  call   0812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>  ; advancealtar::getMemberNames(CUser*, char*)
08133af2 +0x36:  mov    0xc(%ebp),%eax
08133af5 +0x39:  mov    %eax,(%esp)
08133af8 +0x3c:  call   0813486c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x473>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x473
08133afd +0x41:  mov    %eax,%ebx
08133aff +0x43:  mov    0xc(%ebp),%eax
08133b02 +0x46:  mov    %eax,(%esp)
08133b05 +0x49:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08133b0a +0x4e:  mov    0x8(%ebp),%edx
08133b0d +0x51:  lea    0x79700(%edx),%ecx
08133b13 +0x57:  movl   $0x0,0x10(%esp)
08133b1b +0x5f:  lea    -0x108(%ebp),%edx
08133b21 +0x65:  mov    %edx,0xc(%esp)
08133b25 +0x69:  mov    %ebx,0x8(%esp)
08133b29 +0x6d:  mov    %eax,0x4(%esp)
08133b2d +0x71:  mov    %ecx,(%esp)
08133b30 +0x74:  call   08684968 <_ZN15cUserHistoryLog12LeaveDungeonEiiPKci>  ; cUserHistoryLog::LeaveDungeon(int, int, char const*, int)
08133b35 +0x79:  add    $0x120,%esp
08133b3b +0x7f:  pop    %ebx
08133b3c +0x80:  pop    %edi
08133b3d +0x81:  pop    %ebp
08133b3e +0x82:  ret
08133b3f +0x83:  nop
```

## 反编译 C

```c
// advancealtar::HistoryLog::leaveDungeon @ 0x8133abc

/* advancealtar::HistoryLog::leaveDungeon(CUser&, advancealtar::ProcStage const&) */

void advancealtar::HistoryLog::leaveDungeon(CUser *param_1,ProcStage *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char local_10c [256];
  
  pcVar3 = local_10c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  getMemberNames(param_1,local_10c);
  iVar2 = ProcStage::getStageDifficulty(param_2);
  iVar1 = ProcStage::getStageIndex(param_2);
  cUserHistoryLog::LeaveDungeon((cUserHistoryLog *)(param_1 + 0x79700),iVar1,iVar2,local_10c,0);
  return;
}
```
