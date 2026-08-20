# DB_AvatarItemMove

`_ZN17DB_AvatarItemMoveC1Ev`

`DB_AvatarItemMove::DB_AvatarItemMove()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x0840031e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840031e  _ZN17DB_AvatarItemMoveC1Ev
#           DB_AvatarItemMove::DB_AvatarItemMove()
# range [0x0840031e, 0x08400339]
0840031e +0x00:  push   %ebp
0840031f +0x01:  mov    %esp,%ebp
08400321 +0x03:  sub    $0x18,%esp
08400324 +0x06:  mov    0x8(%ebp),%eax
08400327 +0x09:  mov    %eax,(%esp)
0840032a +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0840032f +0x11:  mov    0x8(%ebp),%eax
08400332 +0x14:  movl   $&_ZTV17DB_AvatarItemMove+0x8,(%eax)
08400338 +0x1a:  leave
08400339 +0x1b:  ret
```

## 反编译 C

```c
// DB_AvatarItemMove::DB_AvatarItemMove @ 0x840031e

/* DB_AvatarItemMove::DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcc0;
  return;
}
```
