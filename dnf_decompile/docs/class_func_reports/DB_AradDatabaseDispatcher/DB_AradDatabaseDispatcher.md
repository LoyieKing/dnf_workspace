# DB_AradDatabaseDispatcher

`_ZN25DB_AradDatabaseDispatcherC1Ev`

`DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher()`

| 类 | 地址 |
|---|---|
| `DB_AradDatabaseDispatcher` | `0x0844bc38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bc38  _ZN25DB_AradDatabaseDispatcherC1Ev
#           DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher()
# range [0x0844bc38, 0x0844bcab]
0844bc38 +0x00:  push   %ebp
0844bc39 +0x01:  mov    %esp,%ebp
0844bc3b +0x03:  push   %esi
0844bc3c +0x04:  push   %ebx
0844bc3d +0x05:  sub    $0x10,%esp
0844bc40 +0x08:  mov    0x8(%ebp),%eax
0844bc43 +0x0b:  mov    %eax,(%esp)
0844bc46 +0x0e:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0844bc4b +0x13:  mov    0x8(%ebp),%eax
0844bc4e +0x16:  movl   $&_ZTV25DB_AradDatabaseDispatcher+0x8,(%eax)
0844bc54 +0x1c:  mov    0x8(%ebp),%eax
0844bc57 +0x1f:  add    $0x4,%eax
0844bc5a +0x22:  mov    %eax,(%esp)
0844bc5d +0x25:  call   08184c7c <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC1Ev>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()
0844bc62 +0x2a:  mov    0x8(%ebp),%eax
0844bc65 +0x2d:  add    $0x4,%eax
0844bc68 +0x30:  mov    %eax,(%esp)
0844bc6b +0x33:  call   08184d40 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init()
0844bc70 +0x38:  jmp    0844bca5 <+0x6d>
0844bc72 +0x3a:  mov    %edx,%ebx
0844bc74 +0x3c:  mov    %eax,%esi
0844bc76 +0x3e:  mov    0x8(%ebp),%eax
0844bc79 +0x41:  add    $0x4,%eax
0844bc7c +0x44:  mov    %eax,(%esp)
0844bc7f +0x47:  call   08184cbe <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherD1Ev>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher()
0844bc84 +0x4c:  mov    %esi,%eax
0844bc86 +0x4e:  mov    %ebx,%edx
0844bc88 +0x50:  jmp    0844bc8a <+0x52>
0844bc8a +0x52:  mov    %edx,%ebx
0844bc8c +0x54:  mov    %eax,%esi
0844bc8e +0x56:  mov    0x8(%ebp),%eax
0844bc91 +0x59:  mov    %eax,(%esp)
0844bc94 +0x5c:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0844bc99 +0x61:  mov    %esi,%eax
0844bc9b +0x63:  mov    %ebx,%edx
0844bc9d +0x65:  mov    %eax,(%esp)
0844bca0 +0x68:  call   08ae3750 <_Unwind_Resume>
0844bca5 +0x6d:  add    $0x10,%esp
0844bca8 +0x70:  pop    %ebx
0844bca9 +0x71:  pop    %esi
0844bcaa +0x72:  pop    %ebp
0844bcab +0x73:  ret
```

## 反编译 C

```c
// DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher @ 0x844bc38

/* DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher() */

void __thiscall
DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher(DB_AradDatabaseDispatcher *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5dff8;
                    /* try { // try from 0844bc5d to 0844bc61 has its CatchHandler @ 0844bc8a */
  ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher
            ((Arad_DatabaseDispatcher *)(this + 4));
                    /* try { // try from 0844bc6b to 0844bc6f has its CatchHandler @ 0844bc72 */
  ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init((Arad_DatabaseDispatcher *)(this + 4));
  return;
}
```
