# ~DB_AvatarItemMove

`_ZN17DB_AvatarItemMoveD1Ev`

`DB_AvatarItemMove::~DB_AvatarItemMove()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x0840033a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840033a  _ZN17DB_AvatarItemMoveD1Ev
#           DB_AvatarItemMove::~DB_AvatarItemMove()
# range [0x0840033a, 0x08400369]
0840033a +0x00:  push   %ebp
0840033b +0x01:  mov    %esp,%ebp
0840033d +0x03:  sub    $0x18,%esp
08400340 +0x06:  mov    0x8(%ebp),%eax
08400343 +0x09:  movl   $&_ZTV17DB_AvatarItemMove+0x8,(%eax)
08400349 +0x0f:  mov    0x8(%ebp),%eax
0840034c +0x12:  mov    %eax,(%esp)
0840034f +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08400354 +0x1a:  mov    $0x0,%eax
08400359 +0x1f:  test   %al,%al
0840035b +0x21:  je     08400368 <+0x2e>
0840035d +0x23:  mov    0x8(%ebp),%eax
08400360 +0x26:  mov    %eax,(%esp)
08400363 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08400368 +0x2e:  leave
08400369 +0x2f:  ret
```

## 反编译 C

```c
// DB_AvatarItemMove::~DB_AvatarItemMove @ 0x840033a

/* WARNING: Removing unreachable block (ram,0x0840035d) */
/* DB_AvatarItemMove::~DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::~DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcc0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
