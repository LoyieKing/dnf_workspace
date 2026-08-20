# isWhiteSpace

`_ZNK10WideString12isWhiteSpaceEv`

`WideString::isWhiteSpace() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9c30  _ZNK10WideString12isWhiteSpaceEv
#           WideString::isWhiteSpace() const
# range [0x08ad9c30, 0x08ad9c73]
08ad9c30 +0x00:  push   %ebp
08ad9c31 +0x01:  mov    %esp,%ebp
08ad9c33 +0x03:  sub    $0x28,%esp
08ad9c36 +0x06:  mov    0x8(%ebp),%eax
08ad9c39 +0x09:  mov    (%eax),%eax
08ad9c3b +0x0b:  mov    %eax,-0xc(%ebp)
08ad9c3e +0x0e:  jmp    08ad9c5f <+0x2f>
08ad9c40 +0x10:  mov    -0xc(%ebp),%eax
08ad9c43 +0x13:  mov    (%eax),%eax
08ad9c45 +0x15:  mov    %eax,(%esp)
08ad9c48 +0x18:  call   08adca62 <_ZN10WideString8isuspaceEw>  ; WideString::isuspace(wchar_t)
08ad9c4d +0x1d:  xor    $0x1,%eax
08ad9c50 +0x20:  test   %al,%al
08ad9c52 +0x22:  je     08ad9c5b <+0x2b>
08ad9c54 +0x24:  mov    $0x0,%eax
08ad9c59 +0x29:  jmp    08ad9c72 <+0x42>
08ad9c5b +0x2b:  addl   $0x4,-0xc(%ebp)
08ad9c5f +0x2f:  mov    -0xc(%ebp),%eax
08ad9c62 +0x32:  mov    (%eax),%eax
08ad9c64 +0x34:  test   %eax,%eax
08ad9c66 +0x36:  setne  %al
08ad9c69 +0x39:  test   %al,%al
08ad9c6b +0x3b:  jne    08ad9c40 <+0x10>
08ad9c6d +0x3d:  mov    $0x1,%eax
08ad9c72 +0x42:  leave
08ad9c73 +0x43:  ret
```

## 反编译 C

```c
// WideString::isWhiteSpace @ 0x8ad9c30

/* DWARF original prototype: bool isWhiteSpace(WideString * this) */

bool __thiscall WideString::isWhiteSpace(WideString *this)

{
  bool bVar1;
  wchar *local_10;
  
                    /* Unresolved local var: wchar * buf@[???] */
  local_10 = this->buffer_;
  while( true ) {
    if (*local_10 == 0) {
      return true;
    }
    bVar1 = isuspace(*local_10);
    if (!bVar1) break;
    local_10 = local_10 + 1;
  }
  return false;
}
```
