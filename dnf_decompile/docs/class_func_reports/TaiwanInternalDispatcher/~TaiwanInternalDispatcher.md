# ~TaiwanInternalDispatcher

`_ZN24TaiwanInternalDispatcherD1Ev`

`TaiwanInternalDispatcher::~TaiwanInternalDispatcher()`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x08160212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160212  _ZN24TaiwanInternalDispatcherD1Ev
#           TaiwanInternalDispatcher::~TaiwanInternalDispatcher()
# range [0x08160212, 0x0816028f]
08160212 +0x00:  push   %ebp
08160213 +0x01:  mov    %esp,%ebp
08160215 +0x03:  push   %esi
08160216 +0x04:  push   %ebx
08160217 +0x05:  sub    $0x20,%esp
0816021a +0x08:  mov    0x8(%ebp),%edx
0816021d +0x0b:  lea    -0x10(%ebp),%eax
08160220 +0x0e:  mov    %edx,0x4(%esp)
08160224 +0x12:  mov    %eax,(%esp)
08160227 +0x15:  call   08162412 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x680>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x680
0816022c +0x1a:  sub    $0x4,%esp
0816022f +0x1d:  mov    0x8(%ebp),%edx
08160232 +0x20:  lea    -0xc(%ebp),%eax
08160235 +0x23:  mov    %edx,0x4(%esp)
08160239 +0x27:  mov    %eax,(%esp)
0816023c +0x2a:  call   081623ec <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x65a>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x65a
08160241 +0x2f:  sub    $0x4,%esp
08160244 +0x32:  lea    -0x11(%ebp),%eax
08160247 +0x35:  mov    %bl,0xc(%esp)
0816024b +0x39:  mov    -0x10(%ebp),%edx
0816024e +0x3c:  mov    %edx,0x8(%esp)
08160252 +0x40:  mov    -0xc(%ebp),%edx
08160255 +0x43:  mov    %edx,0x4(%esp)
08160259 +0x47:  mov    %eax,(%esp)
0816025c +0x4a:  call   08162437 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x6a5>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x6a5
08160261 +0x4f:  sub    $0x4,%esp
08160264 +0x52:  mov    0x8(%ebp),%eax
08160267 +0x55:  mov    %eax,(%esp)
0816026a +0x58:  call   0816234a <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5b8>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5b8
0816026f +0x5d:  lea    -0x8(%ebp),%esp
08160272 +0x60:  add    $0x0,%esp
08160275 +0x63:  pop    %ebx
08160276 +0x64:  pop    %esi
08160277 +0x65:  pop    %ebp
08160278 +0x66:  ret
08160279 +0x67:  mov    %edx,%ebx
0816027b +0x69:  mov    %eax,%esi
0816027d +0x6b:  mov    0x8(%ebp),%eax
08160280 +0x6e:  mov    %eax,(%esp)
08160283 +0x71:  call   0816234a <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5b8>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5b8
08160288 +0x76:  mov    %esi,%eax
0816028a +0x78:  mov    %ebx,%edx
0816028c +0x7a:  mov    %eax,(%esp)
0816028f +0x7d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// TaiwanInternalDispatcher::~TaiwanInternalDispatcher @ 0x8160212

/* TaiwanInternalDispatcher::~TaiwanInternalDispatcher() */

void __thiscall TaiwanInternalDispatcher::~TaiwanInternalDispatcher(TaiwanInternalDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 08160227 to 08160260 has its CatchHandler @ 08160279 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::end((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
         *)&local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::begin((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>,TaiwanInternalDispatcher::FnDelete>
            (&local_15,local_10,local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::~map((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
          *)this);
  return;
}
```
