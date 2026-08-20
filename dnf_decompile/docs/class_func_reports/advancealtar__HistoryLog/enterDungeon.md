# enterDungeon

`_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE`

`advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x081339b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081339b0  _ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE
#           advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&)
# range [0x081339b0, 0x08133abb]
081339b0 +0x000:  push   %ebp
081339b1 +0x001:  mov    %esp,%ebp
081339b3 +0x003:  push   %edi
081339b4 +0x004:  push   %ebx
081339b5 +0x005:  sub    $0x120,%esp
081339bb +0x00b:  lea    -0x107(%ebp),%edx
081339c1 +0x011:  mov    $0xff,%ebx
081339c6 +0x016:  mov    $0x0,%eax
081339cb +0x01b:  mov    %edx,%ecx
081339cd +0x01d:  and    $0x1,%ecx
081339d0 +0x020:  test   %ecx,%ecx
081339d2 +0x022:  je     081339dc <+0x2c>
081339d4 +0x024:  mov    %al,(%edx)
081339d6 +0x026:  add    $0x1,%edx
081339d9 +0x029:  sub    $0x1,%ebx
081339dc +0x02c:  mov    %edx,%ecx
081339de +0x02e:  and    $0x2,%ecx
081339e1 +0x031:  test   %ecx,%ecx
081339e3 +0x033:  je     081339ee <+0x3e>
081339e5 +0x035:  mov    %ax,(%edx)
081339e8 +0x038:  add    $0x2,%edx
081339eb +0x03b:  sub    $0x2,%ebx
081339ee +0x03e:  mov    %ebx,%ecx
081339f0 +0x040:  shr    $0x2,%ecx
081339f3 +0x043:  mov    %edx,%edi
081339f5 +0x045:  rep stos %eax,%es:(%edi)
081339f7 +0x047:  mov    %edi,%edx
081339f9 +0x049:  mov    %ebx,%ecx
081339fb +0x04b:  and    $0x2,%ecx
081339fe +0x04e:  test   %ecx,%ecx
08133a00 +0x050:  je     08133a08 <+0x58>
08133a02 +0x052:  mov    %ax,(%edx)
08133a05 +0x055:  add    $0x2,%edx
08133a08 +0x058:  mov    %ebx,%ecx
08133a0a +0x05a:  and    $0x1,%ecx
08133a0d +0x05d:  test   %ecx,%ecx
08133a0f +0x05f:  je     08133a16 <+0x66>
08133a11 +0x061:  mov    %al,(%edx)
08133a13 +0x063:  add    $0x1,%edx
08133a16 +0x066:  lea    -0x107(%ebp),%eax
08133a1c +0x06c:  mov    %eax,0x4(%esp)
08133a20 +0x070:  mov    0x8(%ebp),%eax
08133a23 +0x073:  mov    %eax,(%esp)
08133a26 +0x076:  call   0812cf54 <_ZN12advancealtar14getMemberNamesEP5CUserPc>  ; advancealtar::getMemberNames(CUser*, char*)
08133a2b +0x07b:  mov    0xc(%ebp),%eax
08133a2e +0x07e:  mov    %eax,(%esp)
08133a31 +0x081:  call   0813486c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x473>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x473
08133a36 +0x086:  mov    %eax,%ebx
08133a38 +0x088:  mov    0xc(%ebp),%eax
08133a3b +0x08b:  mov    %eax,(%esp)
08133a3e +0x08e:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08133a43 +0x093:  mov    0x8(%ebp),%edx
08133a46 +0x096:  lea    0x79700(%edx),%ecx
08133a4c +0x09c:  movl   $0x0,0x18(%esp)
08133a54 +0x0a4:  movl   $0x2,0x14(%esp)
08133a5c +0x0ac:  lea    -0x107(%ebp),%edx
08133a62 +0x0b2:  mov    %edx,0x10(%esp)
08133a66 +0x0b6:  movl   $0x1,0xc(%esp)
08133a6e +0x0be:  mov    %ebx,0x8(%esp)
08133a72 +0x0c2:  mov    %eax,0x4(%esp)
08133a76 +0x0c6:  mov    %ecx,(%esp)
08133a79 +0x0c9:  call   0868491a <_ZN15cUserHistoryLog12EnterDungeonEiiiPKcci>  ; cUserHistoryLog::EnterDungeon(int, int, int, char const*, char, int)
08133a7e +0x0ce:  mov    0xc(%ebp),%eax
08133a81 +0x0d1:  mov    %eax,(%esp)
08133a84 +0x0d4:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08133a89 +0x0d9:  movl   $0x0,0x10(%esp)
08133a91 +0x0e1:  movl   $0x0,0xc(%esp)
08133a99 +0x0e9:  movl   $0x1,0x8(%esp)
08133aa1 +0x0f1:  mov    %eax,0x4(%esp)
08133aa5 +0x0f5:  movl   $&_ZN12advancealtar10HistoryLog23advanceAltarstatistics_E,(%esp)
08133aac +0x0fc:  call   08156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>  ; CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
08133ab1 +0x101:  add    $0x120,%esp
08133ab7 +0x107:  pop    %ebx
08133ab8 +0x108:  pop    %edi
08133ab9 +0x109:  pop    %ebp
08133aba +0x10a:  ret
08133abb +0x10b:  nop
```

## 反编译 C

```c
// advancealtar::HistoryLog::enterDungeon @ 0x81339b0

/* advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&) */

void advancealtar::HistoryLog::enterDungeon(CUser *param_1,ProcStage *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_10b;
  char local_10a [254];
  
  pcVar4 = &local_10b;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_10b = '\0';
    pcVar4 = local_10a;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  getMemberNames(param_1,&local_10b);
  iVar1 = ProcStage::getStageDifficulty(param_2);
  iVar2 = ProcStage::getStageIndex(param_2);
  cUserHistoryLog::EnterDungeon
            ((cUserHistoryLog *)(param_1 + 0x79700),iVar2,iVar1,1,&local_10b,'\x02',0);
  uVar5 = ProcStage::getStageIndex(param_2);
  CAdvanceAltarLog::incrementEntranceData((CAdvanceAltarLog *)advanceAltarstatistics_,uVar5,1,0,0);
  return;
}
```
