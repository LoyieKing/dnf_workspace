# StatisticsPvP

`_ZN13StatisticsPvPC1Ev`

`StatisticsPvP::StatisticsPvP()`

| 类 | 地址 |
|---|---|
| `StatisticsPvP` | `0x0860c4f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c4f6  _ZN13StatisticsPvPC1Ev
#           StatisticsPvP::StatisticsPvP()
# range [0x0860c4f6, 0x0860c53b]
0860c4f6 +0x00:  push   %ebp
0860c4f7 +0x01:  mov    %esp,%ebp
0860c4f9 +0x03:  push   %esi
0860c4fa +0x04:  push   %ebx
0860c4fb +0x05:  sub    $0x10,%esp
0860c4fe +0x08:  mov    0x8(%ebp),%eax
0860c501 +0x0b:  mov    %eax,(%esp)
0860c504 +0x0e:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0860c509 +0x13:  mov    0x8(%ebp),%eax
0860c50c +0x16:  add    $0x18,%eax
0860c50f +0x19:  mov    %eax,(%esp)
0860c512 +0x1c:  call   08610c66 <_GLOBAL__I__ZN10StatisticsC2Ev+0xce4>  ; global constructors keyed to Statistics::Statistics()+0xce4
0860c517 +0x21:  jmp    0860c534 <+0x3e>
0860c519 +0x23:  mov    %edx,%ebx
0860c51b +0x25:  mov    %eax,%esi
0860c51d +0x27:  mov    0x8(%ebp),%eax
0860c520 +0x2a:  mov    %eax,(%esp)
0860c523 +0x2d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c528 +0x32:  mov    %esi,%eax
0860c52a +0x34:  mov    %ebx,%edx
0860c52c +0x36:  mov    %eax,(%esp)
0860c52f +0x39:  call   08ae3750 <_Unwind_Resume>
0860c534 +0x3e:  add    $0x10,%esp
0860c537 +0x41:  pop    %ebx
0860c538 +0x42:  pop    %esi
0860c539 +0x43:  pop    %ebp
0860c53a +0x44:  ret
0860c53b +0x45:  nop
```

## 反编译 C

```c
// StatisticsPvP::StatisticsPvP @ 0x860c4f6

/* StatisticsPvP::StatisticsPvP() */

void __thiscall StatisticsPvP::StatisticsPvP(StatisticsPvP *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0860c512 to 0860c516 has its CatchHandler @ 0860c519 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::map((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
         *)(this + 0x18));
  return;
}
```
