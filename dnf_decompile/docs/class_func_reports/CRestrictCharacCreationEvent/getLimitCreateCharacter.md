# getLimitCreateCharacter

`_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi`

`CRestrictCharacCreationEvent::getLimitCreateCharacter(int) const`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273dba  _ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi
#           CRestrictCharacCreationEvent::getLimitCreateCharacter(int) const
# range [0x08273dba, 0x08273de9]
08273dba +0x00:  push   %ebp
08273dbb +0x01:  mov    %esp,%ebp
08273dbd +0x03:  mov    0x8(%ebp),%eax
08273dc0 +0x06:  mov    0xc(%eax),%eax
08273dc3 +0x09:  test   %eax,%eax
08273dc5 +0x0b:  je     08273dce <+0x14>
08273dc7 +0x0d:  cmp    $0x1,%eax
08273dca +0x10:  je     08273ddb <+0x21>
08273dcc +0x12:  jmp    08273de3 <+0x29>
08273dce +0x14:  cmpl   $0x0,0xc(%ebp)
08273dd2 +0x18:  jne    08273de2 <+0x28>
08273dd4 +0x1a:  mov    $0x7,%eax
08273dd9 +0x1f:  jmp    08273de8 <+0x2e>
08273ddb +0x21:  mov    $0x8,%eax
08273de0 +0x26:  jmp    08273de8 <+0x2e>
08273de2 +0x28:  nop
08273de3 +0x29:  mov    $0x0,%eax
08273de8 +0x2e:  pop    %ebp
08273de9 +0x2f:  ret
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::getLimitCreateCharacter @ 0x8273dba

/* CRestrictCharacCreationEvent::getLimitCreateCharacter(int) const */

undefined4 __thiscall
CRestrictCharacCreationEvent::getLimitCreateCharacter
          (CRestrictCharacCreationEvent *this,int param_1)

{
  if (*(int *)(this + 0xc) == 0) {
    if (param_1 == 0) {
      return 7;
    }
  }
  else if (*(int *)(this + 0xc) == 1) {
    return 8;
  }
  return 0;
}
```
