# ~StatisticsPvP

`_ZN13StatisticsPvPD1Ev`

`StatisticsPvP::~StatisticsPvP()`

| 类 | 地址 |
|---|---|
| `StatisticsPvP` | `0x0860c53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c53c  _ZN13StatisticsPvPD1Ev
#           StatisticsPvP::~StatisticsPvP()
# range [0x0860c53c, 0x0860c581]
0860c53c +0x00:  push   %ebp
0860c53d +0x01:  mov    %esp,%ebp
0860c53f +0x03:  push   %esi
0860c540 +0x04:  push   %ebx
0860c541 +0x05:  sub    $0x10,%esp
0860c544 +0x08:  mov    0x8(%ebp),%eax
0860c547 +0x0b:  add    $0x18,%eax
0860c54a +0x0e:  mov    %eax,(%esp)
0860c54d +0x11:  call   086107c4 <_GLOBAL__I__ZN10StatisticsC2Ev+0x842>  ; global constructors keyed to Statistics::Statistics()+0x842
0860c552 +0x16:  jmp    0860c56f <+0x33>
0860c554 +0x18:  mov    %edx,%ebx
0860c556 +0x1a:  mov    %eax,%esi
0860c558 +0x1c:  mov    0x8(%ebp),%eax
0860c55b +0x1f:  mov    %eax,(%esp)
0860c55e +0x22:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c563 +0x27:  mov    %esi,%eax
0860c565 +0x29:  mov    %ebx,%edx
0860c567 +0x2b:  mov    %eax,(%esp)
0860c56a +0x2e:  call   08ae3750 <_Unwind_Resume>
0860c56f +0x33:  mov    0x8(%ebp),%eax
0860c572 +0x36:  mov    %eax,(%esp)
0860c575 +0x39:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c57a +0x3e:  add    $0x10,%esp
0860c57d +0x41:  pop    %ebx
0860c57e +0x42:  pop    %esi
0860c57f +0x43:  pop    %ebp
0860c580 +0x44:  ret
0860c581 +0x45:  nop
```

## 反编译 C

```c
// StatisticsPvP::~StatisticsPvP @ 0x860c53c

/* StatisticsPvP::~StatisticsPvP() */

void __thiscall StatisticsPvP::~StatisticsPvP(StatisticsPvP *this)

{
                    /* try { // try from 0860c54d to 0860c551 has its CatchHandler @ 0860c554 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::~map((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
          *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
