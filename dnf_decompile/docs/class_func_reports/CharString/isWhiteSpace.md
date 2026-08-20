# isWhiteSpace

`_ZNK10CharString12isWhiteSpaceEv`

`CharString::isWhiteSpace() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6bd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6bd6  _ZNK10CharString12isWhiteSpaceEv
#           CharString::isWhiteSpace() const
# range [0x08ad6bd6, 0x08ad6c1b]
08ad6bd6 +0x00:  push   %ebp
08ad6bd7 +0x01:  mov    %esp,%ebp
08ad6bd9 +0x03:  sub    $0x28,%esp
08ad6bdc +0x06:  mov    0x8(%ebp),%eax
08ad6bdf +0x09:  mov    (%eax),%eax
08ad6be1 +0x0b:  mov    %eax,-0xc(%ebp)
08ad6be4 +0x0e:  jmp    08ad6c06 <+0x30>
08ad6be6 +0x10:  mov    -0xc(%ebp),%eax
08ad6be9 +0x13:  movzbl (%eax),%eax
08ad6bec +0x16:  movsbl %al,%eax
08ad6bef +0x19:  mov    %eax,(%esp)
08ad6bf2 +0x1c:  call   0807e280 <_init+0xb78>
08ad6bf7 +0x21:  test   %eax,%eax
08ad6bf9 +0x23:  jne    08ad6c02 <+0x2c>
08ad6bfb +0x25:  mov    $0x0,%eax
08ad6c00 +0x2a:  jmp    08ad6c1a <+0x44>
08ad6c02 +0x2c:  addl   $0x1,-0xc(%ebp)
08ad6c06 +0x30:  mov    -0xc(%ebp),%eax
08ad6c09 +0x33:  movzbl (%eax),%eax
08ad6c0c +0x36:  test   %al,%al
08ad6c0e +0x38:  setne  %al
08ad6c11 +0x3b:  test   %al,%al
08ad6c13 +0x3d:  jne    08ad6be6 <+0x10>
08ad6c15 +0x3f:  mov    $0x1,%eax
08ad6c1a +0x44:  leave
08ad6c1b +0x45:  ret
```

## 反编译 C

```c
// CharString::isWhiteSpace @ 0x8ad6bd6

/* DWARF original prototype: bool isWhiteSpace(CharString * this) */

bool __thiscall CharString::isWhiteSpace(CharString *this)

{
  int iVar1;
  char *local_10;
  
                    /* Unresolved local var: char * buf@[???] */
  local_10 = this->buffer_;
  while( true ) {
    if (*local_10 == '\0') {
      return true;
    }
    iVar1 = isspace((int)*local_10);
    if (iVar1 == 0) break;
    local_10 = local_10 + 1;
  }
  return false;
}
```
