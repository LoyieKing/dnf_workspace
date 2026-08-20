# CAdvanceAltarLog

`_ZN16CAdvanceAltarLogC1Ev`

`CAdvanceAltarLog::CAdvanceAltarLog()`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156aaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156aaa  _ZN16CAdvanceAltarLogC1Ev
#           CAdvanceAltarLog::CAdvanceAltarLog()
# range [0x08156aaa, 0x08156b37]
08156aaa +0x00:  push   %ebp
08156aab +0x01:  mov    %esp,%ebp
08156aad +0x03:  push   %esi
08156aae +0x04:  push   %ebx
08156aaf +0x05:  sub    $0x10,%esp
08156ab2 +0x08:  mov    0x8(%ebp),%eax
08156ab5 +0x0b:  mov    %eax,(%esp)
08156ab8 +0x0e:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08156abd +0x13:  mov    0x8(%ebp),%eax
08156ac0 +0x16:  add    $0x18,%eax
08156ac3 +0x19:  mov    %eax,(%esp)
08156ac6 +0x1c:  call   08157606 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x265>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x265
08156acb +0x21:  mov    0x8(%ebp),%eax
08156ace +0x24:  add    $0x30,%eax
08156ad1 +0x27:  mov    %eax,(%esp)
08156ad4 +0x2a:  call   08157680 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x2df>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x2df
08156ad9 +0x2f:  mov    0x8(%ebp),%eax
08156adc +0x32:  mov    %eax,(%esp)
08156adf +0x35:  call   08156bca <_ZN16CAdvanceAltarLog14initStatisticsEv>  ; CAdvanceAltarLog::initStatistics()
08156ae4 +0x3a:  jmp    08156b31 <+0x87>
08156ae6 +0x3c:  mov    %edx,%ebx
08156ae8 +0x3e:  mov    %eax,%esi
08156aea +0x40:  mov    0x8(%ebp),%eax
08156aed +0x43:  add    $0x30,%eax
08156af0 +0x46:  mov    %eax,(%esp)
08156af3 +0x49:  call   08157450 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xaf>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xaf
08156af8 +0x4e:  mov    %esi,%eax
08156afa +0x50:  mov    %ebx,%edx
08156afc +0x52:  jmp    08156afe <+0x54>
08156afe +0x54:  mov    %edx,%ebx
08156b00 +0x56:  mov    %eax,%esi
08156b02 +0x58:  mov    0x8(%ebp),%eax
08156b05 +0x5b:  add    $0x18,%eax
08156b08 +0x5e:  mov    %eax,(%esp)
08156b0b +0x61:  call   0815743c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x9b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x9b
08156b10 +0x66:  mov    %esi,%eax
08156b12 +0x68:  mov    %ebx,%edx
08156b14 +0x6a:  jmp    08156b16 <+0x6c>
08156b16 +0x6c:  mov    %edx,%ebx
08156b18 +0x6e:  mov    %eax,%esi
08156b1a +0x70:  mov    0x8(%ebp),%eax
08156b1d +0x73:  mov    %eax,(%esp)
08156b20 +0x76:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08156b25 +0x7b:  mov    %esi,%eax
08156b27 +0x7d:  mov    %ebx,%edx
08156b29 +0x7f:  mov    %eax,(%esp)
08156b2c +0x82:  call   08ae3750 <_Unwind_Resume>
08156b31 +0x87:  add    $0x10,%esp
08156b34 +0x8a:  pop    %ebx
08156b35 +0x8b:  pop    %esi
08156b36 +0x8c:  pop    %ebp
08156b37 +0x8d:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::CAdvanceAltarLog @ 0x8156aaa

/* CAdvanceAltarLog::CAdvanceAltarLog() */

void __thiscall CAdvanceAltarLog::CAdvanceAltarLog(CAdvanceAltarLog *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 08156ac6 to 08156aca has its CatchHandler @ 08156b16 */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::map((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
         *)(this + 0x18));
                    /* try { // try from 08156ad4 to 08156ad8 has its CatchHandler @ 08156afe */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::map((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
         *)(this + 0x30));
                    /* try { // try from 08156adf to 08156ae3 has its CatchHandler @ 08156ae6 */
  initStatistics(this);
  return;
}
```
