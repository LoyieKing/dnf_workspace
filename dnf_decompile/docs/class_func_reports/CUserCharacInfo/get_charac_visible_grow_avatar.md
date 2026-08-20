# get_charac_visible_grow_avatar

`_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv`

`CUserCharacInfo::get_charac_visible_grow_avatar()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868beb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868beb4  _ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv
#           CUserCharacInfo::get_charac_visible_grow_avatar()
# range [0x0868beb4, 0x0868bee3]
0868beb4 +0x00:  push   %ebp
0868beb5 +0x01:  mov    %esp,%ebp
0868beb7 +0x03:  mov    0x8(%ebp),%eax
0868beba +0x06:  mov    0x10(%eax),%eax
0868bebd +0x09:  test   %eax,%eax
0868bebf +0x0b:  je     0868bedc <+0x28>
0868bec1 +0x0d:  mov    0x8(%ebp),%eax
0868bec4 +0x10:  mov    0x10(%eax),%eax
0868bec7 +0x13:  movzbl 0xe40(%eax),%eax
0868bece +0x1a:  and    $0x2,%eax
0868bed1 +0x1d:  test   %al,%al
0868bed3 +0x1f:  je     0868bedc <+0x28>
0868bed5 +0x21:  mov    $0x1,%eax
0868beda +0x26:  jmp    0868bee1 <+0x2d>
0868bedc +0x28:  mov    $0x0,%eax
0868bee1 +0x2d:  pop    %ebp
0868bee2 +0x2e:  ret
0868bee3 +0x2f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::get_charac_visible_grow_avatar @ 0x868beb4

/* CUserCharacInfo::get_charac_visible_grow_avatar() */

undefined4 __thiscall CUserCharacInfo::get_charac_visible_grow_avatar(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || ((*(byte *)(*(int *)(this + 0x10) + 0xe40) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
