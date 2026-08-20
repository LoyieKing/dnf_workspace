# ~DB_AvatarItemInsert

`_ZN19DB_AvatarItemInsertD1Ev`

`DB_AvatarItemInsert::~DB_AvatarItemInsert()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x083ffd6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffd6c  _ZN19DB_AvatarItemInsertD1Ev
#           DB_AvatarItemInsert::~DB_AvatarItemInsert()
# range [0x083ffd6c, 0x083ffd9b]
083ffd6c +0x00:  push   %ebp
083ffd6d +0x01:  mov    %esp,%ebp
083ffd6f +0x03:  sub    $0x18,%esp
083ffd72 +0x06:  mov    0x8(%ebp),%eax
083ffd75 +0x09:  movl   $&_ZTV19DB_AvatarItemInsert+0x8,(%eax)
083ffd7b +0x0f:  mov    0x8(%ebp),%eax
083ffd7e +0x12:  mov    %eax,(%esp)
083ffd81 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
083ffd86 +0x1a:  mov    $0x0,%eax
083ffd8b +0x1f:  test   %al,%al
083ffd8d +0x21:  je     083ffd9a <+0x2e>
083ffd8f +0x23:  mov    0x8(%ebp),%eax
083ffd92 +0x26:  mov    %eax,(%esp)
083ffd95 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffd9a +0x2e:  leave
083ffd9b +0x2f:  ret
```

## 反编译 C

```c
// DB_AvatarItemInsert::~DB_AvatarItemInsert @ 0x83ffd6c

/* WARNING: Removing unreachable block (ram,0x083ffd8f) */
/* DB_AvatarItemInsert::~DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::~DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcd8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
