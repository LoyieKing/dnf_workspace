# ~CAdvanceAltarLog

`_ZN16CAdvanceAltarLogD1Ev`

`CAdvanceAltarLog::~CAdvanceAltarLog()`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156b38  _ZN16CAdvanceAltarLogD1Ev
#           CAdvanceAltarLog::~CAdvanceAltarLog()
# range [0x08156b38, 0x08156bc9]
08156b38 +0x00:  push   %ebp
08156b39 +0x01:  mov    %esp,%ebp
08156b3b +0x03:  push   %esi
08156b3c +0x04:  push   %ebx
08156b3d +0x05:  sub    $0x10,%esp
08156b40 +0x08:  mov    0x8(%ebp),%eax
08156b43 +0x0b:  mov    %eax,(%esp)
08156b46 +0x0e:  call   08156bca <_ZN16CAdvanceAltarLog14initStatisticsEv>  ; CAdvanceAltarLog::initStatistics()
08156b4b +0x13:  jmp    08156b65 <+0x2d>
08156b4d +0x15:  mov    %edx,%ebx
08156b4f +0x17:  mov    %eax,%esi
08156b51 +0x19:  mov    0x8(%ebp),%eax
08156b54 +0x1c:  add    $0x30,%eax
08156b57 +0x1f:  mov    %eax,(%esp)
08156b5a +0x22:  call   08157450 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xaf>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xaf
08156b5f +0x27:  mov    %esi,%eax
08156b61 +0x29:  mov    %ebx,%edx
08156b63 +0x2b:  jmp    08156b75 <+0x3d>
08156b65 +0x2d:  mov    0x8(%ebp),%eax
08156b68 +0x30:  add    $0x30,%eax
08156b6b +0x33:  mov    %eax,(%esp)
08156b6e +0x36:  call   08157450 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xaf>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xaf
08156b73 +0x3b:  jmp    08156b8d <+0x55>
08156b75 +0x3d:  mov    %edx,%ebx
08156b77 +0x3f:  mov    %eax,%esi
08156b79 +0x41:  mov    0x8(%ebp),%eax
08156b7c +0x44:  add    $0x18,%eax
08156b7f +0x47:  mov    %eax,(%esp)
08156b82 +0x4a:  call   0815743c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x9b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x9b
08156b87 +0x4f:  mov    %esi,%eax
08156b89 +0x51:  mov    %ebx,%edx
08156b8b +0x53:  jmp    08156b9d <+0x65>
08156b8d +0x55:  mov    0x8(%ebp),%eax
08156b90 +0x58:  add    $0x18,%eax
08156b93 +0x5b:  mov    %eax,(%esp)
08156b96 +0x5e:  call   0815743c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x9b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x9b
08156b9b +0x63:  jmp    08156bb8 <+0x80>
08156b9d +0x65:  mov    %edx,%ebx
08156b9f +0x67:  mov    %eax,%esi
08156ba1 +0x69:  mov    0x8(%ebp),%eax
08156ba4 +0x6c:  mov    %eax,(%esp)
08156ba7 +0x6f:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08156bac +0x74:  mov    %esi,%eax
08156bae +0x76:  mov    %ebx,%edx
08156bb0 +0x78:  mov    %eax,(%esp)
08156bb3 +0x7b:  call   08ae3750 <_Unwind_Resume>
08156bb8 +0x80:  mov    0x8(%ebp),%eax
08156bbb +0x83:  mov    %eax,(%esp)
08156bbe +0x86:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08156bc3 +0x8b:  add    $0x10,%esp
08156bc6 +0x8e:  pop    %ebx
08156bc7 +0x8f:  pop    %esi
08156bc8 +0x90:  pop    %ebp
08156bc9 +0x91:  ret
```

## 反编译 C

```c
// CAdvanceAltarLog::~CAdvanceAltarLog @ 0x8156b38

/* CAdvanceAltarLog::~CAdvanceAltarLog() */

void __thiscall CAdvanceAltarLog::~CAdvanceAltarLog(CAdvanceAltarLog *this)

{
                    /* try { // try from 08156b46 to 08156b4a has its CatchHandler @ 08156b4d */
  initStatistics(this);
                    /* try { // try from 08156b6e to 08156b72 has its CatchHandler @ 08156b75 */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::~map((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
          *)(this + 0x30));
                    /* try { // try from 08156b96 to 08156b9a has its CatchHandler @ 08156b9d */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::~map((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
          *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
