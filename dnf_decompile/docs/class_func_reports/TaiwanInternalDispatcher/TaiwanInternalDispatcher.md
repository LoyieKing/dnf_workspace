# TaiwanInternalDispatcher

`_ZN24TaiwanInternalDispatcherC1Ev`

`TaiwanInternalDispatcher::TaiwanInternalDispatcher()`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x081601d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081601d0  _ZN24TaiwanInternalDispatcherC1Ev
#           TaiwanInternalDispatcher::TaiwanInternalDispatcher()
# range [0x081601d0, 0x08160211]
081601d0 +0x00:  push   %ebp
081601d1 +0x01:  mov    %esp,%ebp
081601d3 +0x03:  push   %esi
081601d4 +0x04:  push   %ebx
081601d5 +0x05:  sub    $0x10,%esp
081601d8 +0x08:  mov    0x8(%ebp),%eax
081601db +0x0b:  mov    %eax,(%esp)
081601de +0x0e:  call   0816235e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5cc>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5cc
081601e3 +0x13:  mov    0x8(%ebp),%eax
081601e6 +0x16:  mov    %eax,(%esp)
081601e9 +0x19:  call   081623d8 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x646>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x646
081601ee +0x1e:  jmp    0816020b <+0x3b>
081601f0 +0x20:  mov    %edx,%ebx
081601f2 +0x22:  mov    %eax,%esi
081601f4 +0x24:  mov    0x8(%ebp),%eax
081601f7 +0x27:  mov    %eax,(%esp)
081601fa +0x2a:  call   0816234a <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5b8>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5b8
081601ff +0x2f:  mov    %esi,%eax
08160201 +0x31:  mov    %ebx,%edx
08160203 +0x33:  mov    %eax,(%esp)
08160206 +0x36:  call   08ae3750 <_Unwind_Resume>
0816020b +0x3b:  add    $0x10,%esp
0816020e +0x3e:  pop    %ebx
0816020f +0x3f:  pop    %esi
08160210 +0x40:  pop    %ebp
08160211 +0x41:  ret
```

## 反编译 C

```c
// TaiwanInternalDispatcher::TaiwanInternalDispatcher @ 0x81601d0

/* TaiwanInternalDispatcher::TaiwanInternalDispatcher() */

void __thiscall TaiwanInternalDispatcher::TaiwanInternalDispatcher(TaiwanInternalDispatcher *this)

{
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::map((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
         *)this);
                    /* try { // try from 081601e9 to 081601ed has its CatchHandler @ 081601f0 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::clear((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
           *)this);
  return;
}
```
