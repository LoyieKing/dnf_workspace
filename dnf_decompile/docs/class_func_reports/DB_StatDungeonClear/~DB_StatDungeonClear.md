# ~DB_StatDungeonClear

`_ZN19DB_StatDungeonClearD1Ev`

`DB_StatDungeonClear::~DB_StatDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonClear` | `0x08417c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417c90  _ZN19DB_StatDungeonClearD1Ev
#           DB_StatDungeonClear::~DB_StatDungeonClear()
# range [0x08417c90, 0x08417cbf]
08417c90 +0x00:  push   %ebp
08417c91 +0x01:  mov    %esp,%ebp
08417c93 +0x03:  sub    $0x18,%esp
08417c96 +0x06:  mov    0x8(%ebp),%eax
08417c99 +0x09:  movl   $&_ZTV19DB_StatDungeonClear+0x8,(%eax)
08417c9f +0x0f:  mov    0x8(%ebp),%eax
08417ca2 +0x12:  mov    %eax,(%esp)
08417ca5 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417caa +0x1a:  mov    $0x0,%eax
08417caf +0x1f:  test   %al,%al
08417cb1 +0x21:  je     08417cbe <+0x2e>
08417cb3 +0x23:  mov    0x8(%ebp),%eax
08417cb6 +0x26:  mov    %eax,(%esp)
08417cb9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417cbe +0x2e:  leave
08417cbf +0x2f:  ret
```

## 反编译 C

```c
// DB_StatDungeonClear::~DB_StatDungeonClear @ 0x8417c90

/* WARNING: Removing unreachable block (ram,0x08417cb3) */
/* DB_StatDungeonClear::~DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::~DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa38;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
