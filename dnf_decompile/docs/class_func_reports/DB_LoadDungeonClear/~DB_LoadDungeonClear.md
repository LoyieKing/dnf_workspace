# ~DB_LoadDungeonClear

`_ZN19DB_LoadDungeonClearD1Ev`

`DB_LoadDungeonClear::~DB_LoadDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x0841986e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841986e  _ZN19DB_LoadDungeonClearD1Ev
#           DB_LoadDungeonClear::~DB_LoadDungeonClear()
# range [0x0841986e, 0x0841989d]
0841986e +0x00:  push   %ebp
0841986f +0x01:  mov    %esp,%ebp
08419871 +0x03:  sub    $0x18,%esp
08419874 +0x06:  mov    0x8(%ebp),%eax
08419877 +0x09:  movl   $&_ZTV19DB_LoadDungeonClear+0x8,(%eax)
0841987d +0x0f:  mov    0x8(%ebp),%eax
08419880 +0x12:  mov    %eax,(%esp)
08419883 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08419888 +0x1a:  mov    $0x0,%eax
0841988d +0x1f:  test   %al,%al
0841988f +0x21:  je     0841989c <+0x2e>
08419891 +0x23:  mov    0x8(%ebp),%eax
08419894 +0x26:  mov    %eax,(%esp)
08419897 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841989c +0x2e:  leave
0841989d +0x2f:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::~DB_LoadDungeonClear @ 0x841986e

/* WARNING: Removing unreachable block (ram,0x08419891) */
/* DB_LoadDungeonClear::~DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::~DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f960;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
