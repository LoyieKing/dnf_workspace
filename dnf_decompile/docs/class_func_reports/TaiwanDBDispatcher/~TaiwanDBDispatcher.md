# ~TaiwanDBDispatcher

`_ZN18TaiwanDBDispatcherD1Ev`

`TaiwanDBDispatcher::~TaiwanDBDispatcher()`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a176` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a176  _ZN18TaiwanDBDispatcherD1Ev
#           TaiwanDBDispatcher::~TaiwanDBDispatcher()
# range [0x0815a176, 0x0815a1f3]
0815a176 +0x00:  push   %ebp
0815a177 +0x01:  mov    %esp,%ebp
0815a179 +0x03:  push   %esi
0815a17a +0x04:  push   %ebx
0815a17b +0x05:  sub    $0x20,%esp
0815a17e +0x08:  mov    0x8(%ebp),%edx
0815a181 +0x0b:  lea    -0x10(%ebp),%eax
0815a184 +0x0e:  mov    %edx,0x4(%esp)
0815a188 +0x12:  mov    %eax,(%esp)
0815a18b +0x15:  call   0815e7ce <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xa42
0815a190 +0x1a:  sub    $0x4,%esp
0815a193 +0x1d:  mov    0x8(%ebp),%edx
0815a196 +0x20:  lea    -0xc(%ebp),%eax
0815a199 +0x23:  mov    %edx,0x4(%esp)
0815a19d +0x27:  mov    %eax,(%esp)
0815a1a0 +0x2a:  call   0815e7a8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xa1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xa1c
0815a1a5 +0x2f:  sub    $0x4,%esp
0815a1a8 +0x32:  lea    -0x11(%ebp),%eax
0815a1ab +0x35:  mov    %bl,0xc(%esp)
0815a1af +0x39:  mov    -0x10(%ebp),%edx
0815a1b2 +0x3c:  mov    %edx,0x8(%esp)
0815a1b6 +0x40:  mov    -0xc(%ebp),%edx
0815a1b9 +0x43:  mov    %edx,0x4(%esp)
0815a1bd +0x47:  mov    %eax,(%esp)
0815a1c0 +0x4a:  call   0815e7f3 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xa67>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xa67
0815a1c5 +0x4f:  sub    $0x4,%esp
0815a1c8 +0x52:  mov    0x8(%ebp),%eax
0815a1cb +0x55:  mov    %eax,(%esp)
0815a1ce +0x58:  call   0815e706 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x97a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x97a
0815a1d3 +0x5d:  lea    -0x8(%ebp),%esp
0815a1d6 +0x60:  add    $0x0,%esp
0815a1d9 +0x63:  pop    %ebx
0815a1da +0x64:  pop    %esi
0815a1db +0x65:  pop    %ebp
0815a1dc +0x66:  ret
0815a1dd +0x67:  mov    %edx,%ebx
0815a1df +0x69:  mov    %eax,%esi
0815a1e1 +0x6b:  mov    0x8(%ebp),%eax
0815a1e4 +0x6e:  mov    %eax,(%esp)
0815a1e7 +0x71:  call   0815e706 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x97a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x97a
0815a1ec +0x76:  mov    %esi,%eax
0815a1ee +0x78:  mov    %ebx,%edx
0815a1f0 +0x7a:  mov    %eax,(%esp)
0815a1f3 +0x7d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// TaiwanDBDispatcher::~TaiwanDBDispatcher @ 0x815a176

/* TaiwanDBDispatcher::~TaiwanDBDispatcher() */

void __thiscall TaiwanDBDispatcher::~TaiwanDBDispatcher(TaiwanDBDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 0815a18b to 0815a1c4 has its CatchHandler @ 0815a1dd */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::end((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
         *)&local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::begin((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>,TaiwanDBDispatcher::FnDelete>
            (&local_15,local_10,local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::~map((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
          *)this);
  return;
}
```
