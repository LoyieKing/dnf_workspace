# initStatistics

`_ZN16CAdvanceAltarLog14initStatisticsEv`

`CAdvanceAltarLog::initStatistics()`

| 类 | 地址 |
|---|---|
| `CAdvanceAltarLog` | `0x08156bca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08156bca  _ZN16CAdvanceAltarLog14initStatisticsEv
#           CAdvanceAltarLog::initStatistics()
# range [0x08156bca, 0x08156c2f]
08156bca +0x00:  push   %ebp
08156bcb +0x01:  mov    %esp,%ebp
08156bcd +0x03:  push   %esi
08156bce +0x04:  push   %ebx
08156bcf +0x05:  sub    $0x20,%esp
08156bd2 +0x08:  mov    0x8(%ebp),%eax
08156bd5 +0x0b:  mov    %eax,0x4(%esp)
08156bd9 +0x0f:  lea    -0xc(%ebp),%eax
08156bdc +0x12:  mov    %eax,(%esp)
08156bdf +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08156be4 +0x1a:  mov    0x8(%ebp),%eax
08156be7 +0x1d:  add    $0x18,%eax
08156bea +0x20:  mov    %eax,(%esp)
08156bed +0x23:  call   081576fa <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x359>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x359
08156bf2 +0x28:  mov    0x8(%ebp),%eax
08156bf5 +0x2b:  add    $0x30,%eax
08156bf8 +0x2e:  mov    %eax,(%esp)
08156bfb +0x31:  call   0815770e <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x36d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x36d
08156c00 +0x36:  jmp    08156c1d <+0x53>
08156c02 +0x38:  mov    %edx,%ebx
08156c04 +0x3a:  mov    %eax,%esi
08156c06 +0x3c:  lea    -0xc(%ebp),%eax
08156c09 +0x3f:  mov    %eax,(%esp)
08156c0c +0x42:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156c11 +0x47:  mov    %esi,%eax
08156c13 +0x49:  mov    %ebx,%edx
08156c15 +0x4b:  mov    %eax,(%esp)
08156c18 +0x4e:  call   08ae3750 <_Unwind_Resume>
08156c1d +0x53:  lea    -0xc(%ebp),%eax
08156c20 +0x56:  mov    %eax,(%esp)
08156c23 +0x59:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08156c28 +0x5e:  add    $0x20,%esp
08156c2b +0x61:  pop    %ebx
08156c2c +0x62:  pop    %esi
08156c2d +0x63:  pop    %ebp
08156c2e +0x64:  ret
08156c2f +0x65:  nop
```

## 反编译 C

```c
// CAdvanceAltarLog::initStatistics @ 0x8156bca

/* CAdvanceAltarLog::initStatistics() */

void __thiscall CAdvanceAltarLog::initStatistics(CAdvanceAltarLog *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08156bed to 08156bff has its CatchHandler @ 08156c02 */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::clear((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
           *)(this + 0x18));
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::clear((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
           *)(this + 0x30));
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
