# DB_DispatcherTaiwan

`_ZN19DB_DispatcherTaiwanC1Ev`

`DB_DispatcherTaiwan::DB_DispatcherTaiwan()`

| 类 | 地址 |
|---|---|
| `DB_DispatcherTaiwan` | `0x0844c9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c9d4  _ZN19DB_DispatcherTaiwanC1Ev
#           DB_DispatcherTaiwan::DB_DispatcherTaiwan()
# range [0x0844c9d4, 0x0844ca47]
0844c9d4 +0x00:  push   %ebp
0844c9d5 +0x01:  mov    %esp,%ebp
0844c9d7 +0x03:  push   %esi
0844c9d8 +0x04:  push   %ebx
0844c9d9 +0x05:  sub    $0x10,%esp
0844c9dc +0x08:  mov    0x8(%ebp),%eax
0844c9df +0x0b:  mov    %eax,(%esp)
0844c9e2 +0x0e:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0844c9e7 +0x13:  mov    0x8(%ebp),%eax
0844c9ea +0x16:  movl   $&_ZTV19DB_DispatcherTaiwan+0x8,(%eax)
0844c9f0 +0x1c:  mov    0x8(%ebp),%eax
0844c9f3 +0x1f:  add    $0x4,%eax
0844c9f6 +0x22:  mov    %eax,(%esp)
0844c9f9 +0x25:  call   0815a134 <_ZN18TaiwanDBDispatcherC1Ev>  ; TaiwanDBDispatcher::TaiwanDBDispatcher()
0844c9fe +0x2a:  mov    0x8(%ebp),%eax
0844ca01 +0x2d:  add    $0x4,%eax
0844ca04 +0x30:  mov    %eax,(%esp)
0844ca07 +0x33:  call   0815a1f8 <_ZN18TaiwanDBDispatcher4initEv>  ; TaiwanDBDispatcher::init()
0844ca0c +0x38:  jmp    0844ca41 <+0x6d>
0844ca0e +0x3a:  mov    %edx,%ebx
0844ca10 +0x3c:  mov    %eax,%esi
0844ca12 +0x3e:  mov    0x8(%ebp),%eax
0844ca15 +0x41:  add    $0x4,%eax
0844ca18 +0x44:  mov    %eax,(%esp)
0844ca1b +0x47:  call   0815a176 <_ZN18TaiwanDBDispatcherD1Ev>  ; TaiwanDBDispatcher::~TaiwanDBDispatcher()
0844ca20 +0x4c:  mov    %esi,%eax
0844ca22 +0x4e:  mov    %ebx,%edx
0844ca24 +0x50:  jmp    0844ca26 <+0x52>
0844ca26 +0x52:  mov    %edx,%ebx
0844ca28 +0x54:  mov    %eax,%esi
0844ca2a +0x56:  mov    0x8(%ebp),%eax
0844ca2d +0x59:  mov    %eax,(%esp)
0844ca30 +0x5c:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0844ca35 +0x61:  mov    %esi,%eax
0844ca37 +0x63:  mov    %ebx,%edx
0844ca39 +0x65:  mov    %eax,(%esp)
0844ca3c +0x68:  call   08ae3750 <_Unwind_Resume>
0844ca41 +0x6d:  add    $0x10,%esp
0844ca44 +0x70:  pop    %ebx
0844ca45 +0x71:  pop    %esi
0844ca46 +0x72:  pop    %ebp
0844ca47 +0x73:  ret
```

## 反编译 C

```c
// DB_DispatcherTaiwan::DB_DispatcherTaiwan @ 0x844c9d4

/* DB_DispatcherTaiwan::DB_DispatcherTaiwan() */

void __thiscall DB_DispatcherTaiwan::DB_DispatcherTaiwan(DB_DispatcherTaiwan *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5df38;
                    /* try { // try from 0844c9f9 to 0844c9fd has its CatchHandler @ 0844ca26 */
  TaiwanDBDispatcher::TaiwanDBDispatcher((TaiwanDBDispatcher *)(this + 4));
                    /* try { // try from 0844ca07 to 0844ca0b has its CatchHandler @ 0844ca0e */
  TaiwanDBDispatcher::init((TaiwanDBDispatcher *)(this + 4));
  return;
}
```
