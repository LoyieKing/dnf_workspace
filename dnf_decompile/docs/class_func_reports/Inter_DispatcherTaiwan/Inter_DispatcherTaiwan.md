# Inter_DispatcherTaiwan

`_ZN22Inter_DispatcherTaiwanC1Ev`

`Inter_DispatcherTaiwan::Inter_DispatcherTaiwan()`

| 类 | 地址 |
|---|---|
| `Inter_DispatcherTaiwan` | `0x084e8bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8bba  _ZN22Inter_DispatcherTaiwanC1Ev
#           Inter_DispatcherTaiwan::Inter_DispatcherTaiwan()
# range [0x084e8bba, 0x084e8c2d]
084e8bba +0x00:  push   %ebp
084e8bbb +0x01:  mov    %esp,%ebp
084e8bbd +0x03:  push   %esi
084e8bbe +0x04:  push   %ebx
084e8bbf +0x05:  sub    $0x10,%esp
084e8bc2 +0x08:  mov    0x8(%ebp),%eax
084e8bc5 +0x0b:  mov    %eax,(%esp)
084e8bc8 +0x0e:  call   084e9b00 <_GLOBAL__I__Z7getUserj+0xab2>  ; global constructors keyed to getUser(unsigned int)+0xab2
084e8bcd +0x13:  mov    0x8(%ebp),%eax
084e8bd0 +0x16:  movl   $&_ZTV22Inter_DispatcherTaiwan+0x8,(%eax)
084e8bd6 +0x1c:  mov    0x8(%ebp),%eax
084e8bd9 +0x1f:  add    $0x4,%eax
084e8bdc +0x22:  mov    %eax,(%esp)
084e8bdf +0x25:  call   081601d0 <_ZN24TaiwanInternalDispatcherC1Ev>  ; TaiwanInternalDispatcher::TaiwanInternalDispatcher()
084e8be4 +0x2a:  mov    0x8(%ebp),%eax
084e8be7 +0x2d:  add    $0x4,%eax
084e8bea +0x30:  mov    %eax,(%esp)
084e8bed +0x33:  call   08160294 <_ZN24TaiwanInternalDispatcher4initEv>  ; TaiwanInternalDispatcher::init()
084e8bf2 +0x38:  jmp    084e8c27 <+0x6d>
084e8bf4 +0x3a:  mov    %edx,%ebx
084e8bf6 +0x3c:  mov    %eax,%esi
084e8bf8 +0x3e:  mov    0x8(%ebp),%eax
084e8bfb +0x41:  add    $0x4,%eax
084e8bfe +0x44:  mov    %eax,(%esp)
084e8c01 +0x47:  call   08160212 <_ZN24TaiwanInternalDispatcherD1Ev>  ; TaiwanInternalDispatcher::~TaiwanInternalDispatcher()
084e8c06 +0x4c:  mov    %esi,%eax
084e8c08 +0x4e:  mov    %ebx,%edx
084e8c0a +0x50:  jmp    084e8c0c <+0x52>
084e8c0c +0x52:  mov    %edx,%ebx
084e8c0e +0x54:  mov    %eax,%esi
084e8c10 +0x56:  mov    0x8(%ebp),%eax
084e8c13 +0x59:  mov    %eax,(%esp)
084e8c16 +0x5c:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
084e8c1b +0x61:  mov    %esi,%eax
084e8c1d +0x63:  mov    %ebx,%edx
084e8c1f +0x65:  mov    %eax,(%esp)
084e8c22 +0x68:  call   08ae3750 <_Unwind_Resume>
084e8c27 +0x6d:  add    $0x10,%esp
084e8c2a +0x70:  pop    %ebx
084e8c2b +0x71:  pop    %esi
084e8c2c +0x72:  pop    %ebp
084e8c2d +0x73:  ret
```

## 反编译 C

```c
// Inter_DispatcherTaiwan::Inter_DispatcherTaiwan @ 0x84e8bba

/* Inter_DispatcherTaiwan::Inter_DispatcherTaiwan() */

void __thiscall Inter_DispatcherTaiwan::Inter_DispatcherTaiwan(Inter_DispatcherTaiwan *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e350;
                    /* try { // try from 084e8bdf to 084e8be3 has its CatchHandler @ 084e8c0c */
  TaiwanInternalDispatcher::TaiwanInternalDispatcher((TaiwanInternalDispatcher *)(this + 4));
                    /* try { // try from 084e8bed to 084e8bf1 has its CatchHandler @ 084e8bf4 */
  TaiwanInternalDispatcher::init((TaiwanInternalDispatcher *)(this + 4));
  return;
}
```
