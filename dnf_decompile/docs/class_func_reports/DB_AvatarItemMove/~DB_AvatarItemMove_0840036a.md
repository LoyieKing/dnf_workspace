# ~DB_AvatarItemMove

`_ZN17DB_AvatarItemMoveD0Ev`

`DB_AvatarItemMove::~DB_AvatarItemMove()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x0840036a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840036a  _ZN17DB_AvatarItemMoveD0Ev
#           DB_AvatarItemMove::~DB_AvatarItemMove()
# range [0x0840036a, 0x08400387]
0840036a +0x00:  push   %ebp
0840036b +0x01:  mov    %esp,%ebp
0840036d +0x03:  sub    $0x18,%esp
08400370 +0x06:  mov    0x8(%ebp),%eax
08400373 +0x09:  mov    %eax,(%esp)
08400376 +0x0c:  call   0840033a <_ZN17DB_AvatarItemMoveD1Ev>  ; DB_AvatarItemMove::~DB_AvatarItemMove()
0840037b +0x11:  mov    0x8(%ebp),%eax
0840037e +0x14:  mov    %eax,(%esp)
08400381 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08400386 +0x1c:  leave
08400387 +0x1d:  ret
```

## 反编译 C

```c
// DB_AvatarItemMove::~DB_AvatarItemMove @ 0x840036a

/* DB_AvatarItemMove::~DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::~DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  ~DB_AvatarItemMove(this);
  operator_delete(this);
  return;
}
```
