# MoveAvatarItem

`_ZN17DB_AvatarItemMove14MoveAvatarItemEP15SIG_AVATAR_MOVE`

`DB_AvatarItemMove::MoveAvatarItem(SIG_AVATAR_MOVE*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x084003ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084003ca  _ZN17DB_AvatarItemMove14MoveAvatarItemEP15SIG_AVATAR_MOVE
#           DB_AvatarItemMove::MoveAvatarItem(SIG_AVATAR_MOVE*)
# range [0x084003ca, 0x08400431]
084003ca +0x00:  push   %ebp
084003cb +0x01:  mov    %esp,%ebp
084003cd +0x03:  sub    $0x18,%esp
084003d0 +0x06:  mov    0xc(%ebp),%eax
084003d3 +0x09:  mov    0xe(%eax),%ecx
084003d6 +0x0c:  mov    0xc(%ebp),%eax
084003d9 +0x0f:  movzbl 0xd(%eax),%eax
084003dd +0x13:  movzbl %al,%edx
084003e0 +0x16:  mov    0xc(%ebp),%eax
084003e3 +0x19:  mov    0x4(%eax),%eax
084003e6 +0x1c:  mov    %ecx,0xc(%esp)
084003ea +0x20:  mov    %edx,0x8(%esp)
084003ee +0x24:  mov    %eax,0x4(%esp)
084003f2 +0x28:  mov    0x8(%ebp),%eax
084003f5 +0x2b:  mov    %eax,(%esp)
084003f8 +0x2e:  call   08400432 <_ZN17DB_AvatarItemMove10ChangeSlotEiii>  ; DB_AvatarItemMove::ChangeSlot(int, int, int)
084003fd +0x33:  mov    0xc(%ebp),%eax
08400400 +0x36:  mov    0x12(%eax),%ecx
08400403 +0x39:  mov    0xc(%ebp),%eax
08400406 +0x3c:  movzbl 0xc(%eax),%eax
0840040a +0x40:  movzbl %al,%edx
0840040d +0x43:  mov    0xc(%ebp),%eax
08400410 +0x46:  mov    0x8(%eax),%eax
08400413 +0x49:  mov    %ecx,0xc(%esp)
08400417 +0x4d:  mov    %edx,0x8(%esp)
0840041b +0x51:  mov    %eax,0x4(%esp)
0840041f +0x55:  mov    0x8(%ebp),%eax
08400422 +0x58:  mov    %eax,(%esp)
08400425 +0x5b:  call   08400432 <_ZN17DB_AvatarItemMove10ChangeSlotEiii>  ; DB_AvatarItemMove::ChangeSlot(int, int, int)
0840042a +0x60:  mov    $0x1,%eax
0840042f +0x65:  leave
08400430 +0x66:  ret
08400431 +0x67:  nop
```

## 反编译 C

```c
// DB_AvatarItemMove::MoveAvatarItem @ 0x84003ca

/* DB_AvatarItemMove::MoveAvatarItem(SIG_AVATAR_MOVE*) */

undefined4 __thiscall
DB_AvatarItemMove::MoveAvatarItem(DB_AvatarItemMove *this,SIG_AVATAR_MOVE *param_1)

{
  ChangeSlot(this,*(int *)(param_1 + 4),(uint)(byte)param_1[0xd],*(int *)(param_1 + 0xe));
  ChangeSlot(this,*(int *)(param_1 + 8),(uint)(byte)param_1[0xc],*(int *)(param_1 + 0x12));
  return 1;
}
```
