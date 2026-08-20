# setDungeonClearHackCheck

`_ZN5CUser24setDungeonClearHackCheckEb`

`CUser::setDungeonClearHackCheck(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649b96  _ZN5CUser24setDungeonClearHackCheckEb
#           CUser::setDungeonClearHackCheck(bool)
# range [0x08649b96, 0x08649bdb]
08649b96 +0x00:  push   %ebp
08649b97 +0x01:  mov    %esp,%ebp
08649b99 +0x03:  sub    $0x4,%esp
08649b9c +0x06:  mov    0xc(%ebp),%eax
08649b9f +0x09:  mov    %al,-0x4(%ebp)
08649ba2 +0x0c:  cmpb   $0x0,-0x4(%ebp)
08649ba6 +0x10:  je     08649bc2 <+0x2c>
08649ba8 +0x12:  mov    0x8(%ebp),%eax
08649bab +0x15:  movzbl 0x8e93c(%eax),%eax
08649bb2 +0x1c:  mov    %eax,%edx
08649bb4 +0x1e:  or     $0x1,%edx
08649bb7 +0x21:  mov    0x8(%ebp),%eax
08649bba +0x24:  mov    %dl,0x8e93c(%eax)
08649bc0 +0x2a:  jmp    08649bda <+0x44>
08649bc2 +0x2c:  mov    0x8(%ebp),%eax
08649bc5 +0x2f:  movzbl 0x8e93c(%eax),%eax
08649bcc +0x36:  mov    %eax,%edx
08649bce +0x38:  or     $0x2,%edx
08649bd1 +0x3b:  mov    0x8(%ebp),%eax
08649bd4 +0x3e:  mov    %dl,0x8e93c(%eax)
08649bda +0x44:  leave
08649bdb +0x45:  ret
```

## 反编译 C

```c
// CUser::setDungeonClearHackCheck @ 0x8649b96

/* CUser::setDungeonClearHackCheck(bool) */

void __thiscall CUser::setDungeonClearHackCheck(CUser *this,bool param_1)

{
  if (param_1) {
    this[0x8e93c] = (CUser)((byte)this[0x8e93c] | 1);
  }
  else {
    this[0x8e93c] = (CUser)((byte)this[0x8e93c] | 2);
  }
  return;
}
```
