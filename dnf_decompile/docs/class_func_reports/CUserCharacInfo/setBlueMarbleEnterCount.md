# setBlueMarbleEnterCount

`_ZN15CUserCharacInfo23setBlueMarbleEnterCountEh`

`CUserCharacInfo::setBlueMarbleEnterCount(unsigned char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690ef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690ef4  _ZN15CUserCharacInfo23setBlueMarbleEnterCountEh
#           CUserCharacInfo::setBlueMarbleEnterCount(unsigned char)
# range [0x08690ef4, 0x08690f1b]
08690ef4 +0x00:  push   %ebp
08690ef5 +0x01:  mov    %esp,%ebp
08690ef7 +0x03:  sub    $0x4,%esp
08690efa +0x06:  mov    0xc(%ebp),%eax
08690efd +0x09:  mov    %al,-0x4(%ebp)
08690f00 +0x0c:  mov    0x8(%ebp),%eax
08690f03 +0x0f:  mov    0x10(%eax),%eax
08690f06 +0x12:  test   %eax,%eax
08690f08 +0x14:  je     08690f1a <+0x26>
08690f0a +0x16:  mov    0x8(%ebp),%eax
08690f0d +0x19:  mov    0x10(%eax),%eax
08690f10 +0x1c:  movzbl -0x4(%ebp),%edx
08690f14 +0x20:  mov    %dl,0x14bd(%eax)
08690f1a +0x26:  leave
08690f1b +0x27:  ret
```

## 反编译 C

```c
// CUserCharacInfo::setBlueMarbleEnterCount @ 0x8690ef4

/* CUserCharacInfo::setBlueMarbleEnterCount(unsigned char) */

void __thiscall CUserCharacInfo::setBlueMarbleEnterCount(CUserCharacInfo *this,uchar param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(uchar *)(*(int *)(this + 0x10) + 0x14bd) = param_1;
  }
  return;
}
```
