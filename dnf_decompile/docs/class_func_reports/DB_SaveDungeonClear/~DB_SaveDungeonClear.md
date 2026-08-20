# ~DB_SaveDungeonClear

`_ZN19DB_SaveDungeonClearD1Ev`

`DB_SaveDungeonClear::~DB_SaveDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x0841a008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a008  _ZN19DB_SaveDungeonClearD1Ev
#           DB_SaveDungeonClear::~DB_SaveDungeonClear()
# range [0x0841a008, 0x0841a037]
0841a008 +0x00:  push   %ebp
0841a009 +0x01:  mov    %esp,%ebp
0841a00b +0x03:  sub    $0x18,%esp
0841a00e +0x06:  mov    0x8(%ebp),%eax
0841a011 +0x09:  movl   $&_ZTV19DB_SaveDungeonClear+0x8,(%eax)
0841a017 +0x0f:  mov    0x8(%ebp),%eax
0841a01a +0x12:  mov    %eax,(%esp)
0841a01d +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0841a022 +0x1a:  mov    $0x0,%eax
0841a027 +0x1f:  test   %al,%al
0841a029 +0x21:  je     0841a036 <+0x2e>
0841a02b +0x23:  mov    0x8(%ebp),%eax
0841a02e +0x26:  mov    %eax,(%esp)
0841a031 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841a036 +0x2e:  leave
0841a037 +0x2f:  ret
```

## 反编译 C

```c
// DB_SaveDungeonClear::~DB_SaveDungeonClear @ 0x841a008

/* WARNING: Removing unreachable block (ram,0x0841a02b) */
/* DB_SaveDungeonClear::~DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::~DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f948;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
