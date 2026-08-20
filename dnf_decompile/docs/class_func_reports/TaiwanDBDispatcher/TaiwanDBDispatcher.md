# TaiwanDBDispatcher

`_ZN18TaiwanDBDispatcherC1Ev`

`TaiwanDBDispatcher::TaiwanDBDispatcher()`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a134  _ZN18TaiwanDBDispatcherC1Ev
#           TaiwanDBDispatcher::TaiwanDBDispatcher()
# range [0x0815a134, 0x0815a175]
0815a134 +0x00:  push   %ebp
0815a135 +0x01:  mov    %esp,%ebp
0815a137 +0x03:  push   %esi
0815a138 +0x04:  push   %ebx
0815a139 +0x05:  sub    $0x10,%esp
0815a13c +0x08:  mov    0x8(%ebp),%eax
0815a13f +0x0b:  mov    %eax,(%esp)
0815a142 +0x0e:  call   0815e71a <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x98e>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x98e
0815a147 +0x13:  mov    0x8(%ebp),%eax
0815a14a +0x16:  mov    %eax,(%esp)
0815a14d +0x19:  call   0815e794 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xa08>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xa08
0815a152 +0x1e:  jmp    0815a16f <+0x3b>
0815a154 +0x20:  mov    %edx,%ebx
0815a156 +0x22:  mov    %eax,%esi
0815a158 +0x24:  mov    0x8(%ebp),%eax
0815a15b +0x27:  mov    %eax,(%esp)
0815a15e +0x2a:  call   0815e706 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x97a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x97a
0815a163 +0x2f:  mov    %esi,%eax
0815a165 +0x31:  mov    %ebx,%edx
0815a167 +0x33:  mov    %eax,(%esp)
0815a16a +0x36:  call   08ae3750 <_Unwind_Resume>
0815a16f +0x3b:  add    $0x10,%esp
0815a172 +0x3e:  pop    %ebx
0815a173 +0x3f:  pop    %esi
0815a174 +0x40:  pop    %ebp
0815a175 +0x41:  ret
```

## 反编译 C

```c
// TaiwanDBDispatcher::TaiwanDBDispatcher @ 0x815a134

/* TaiwanDBDispatcher::TaiwanDBDispatcher() */

void __thiscall TaiwanDBDispatcher::TaiwanDBDispatcher(TaiwanDBDispatcher *this)

{
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::map((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
         *)this);
                    /* try { // try from 0815a14d to 0815a151 has its CatchHandler @ 0815a154 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::clear((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
           *)this);
  return;
}
```
