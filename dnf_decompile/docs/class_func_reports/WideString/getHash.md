# getHash

`_ZNK10WideString7getHashEv`

`WideString::getHash() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9c74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9c74  _ZNK10WideString7getHashEv
#           WideString::getHash() const
# range [0x08ad9c74, 0x08ad9ce3]
08ad9c74 +0x00:  push   %ebp
08ad9c75 +0x01:  mov    %esp,%ebp
08ad9c77 +0x03:  sub    $0x28,%esp
08ad9c7a +0x06:  mov    0x8(%ebp),%eax
08ad9c7d +0x09:  mov    %eax,(%esp)
08ad9c80 +0x0c:  call   08add2b8 <_ZN10WideString8isupunctEw+0x768>  ; WideString::isupunct(wchar_t)+0x768
08ad9c85 +0x11:  test   %al,%al
08ad9c87 +0x13:  je     08ad9c90 <+0x1c>
08ad9c89 +0x15:  mov    $0x0,%eax
08ad9c8e +0x1a:  jmp    08ad9ce2 <+0x6e>
08ad9c90 +0x1c:  movl   $0x0,-0x14(%ebp)
08ad9c97 +0x23:  mov    0x8(%ebp),%eax
08ad9c9a +0x26:  mov    (%eax),%eax
08ad9c9c +0x28:  mov    %eax,-0x10(%ebp)
08ad9c9f +0x2b:  mov    -0x10(%ebp),%eax
08ad9ca2 +0x2e:  mov    (%eax),%eax
08ad9ca4 +0x30:  mov    %eax,-0xc(%ebp)
08ad9ca7 +0x33:  addl   $0x4,-0x10(%ebp)
08ad9cab +0x37:  cmpl   $0x0,-0xc(%ebp)
08ad9caf +0x3b:  je     08ad9cd2 <+0x5e>
08ad9cb1 +0x3d:  mov    -0x14(%ebp),%eax
08ad9cb4 +0x40:  mov    %eax,%edx
08ad9cb6 +0x42:  shl    $0x6,%edx
08ad9cb9 +0x45:  mov    -0x14(%ebp),%eax
08ad9cbc +0x48:  shl    $0x10,%eax
08ad9cbf +0x4b:  lea    (%edx,%eax,1),%eax
08ad9cc2 +0x4e:  mov    %eax,%edx
08ad9cc4 +0x50:  sub    -0x14(%ebp),%edx
08ad9cc7 +0x53:  mov    -0xc(%ebp),%eax
08ad9cca +0x56:  lea    (%edx,%eax,1),%eax
08ad9ccd +0x59:  mov    %eax,-0x14(%ebp)
08ad9cd0 +0x5c:  jmp    08ad9c9f <+0x2b>
08ad9cd2 +0x5e:  cmpl   $0x0,-0x14(%ebp)
08ad9cd6 +0x62:  jne    08ad9cdf <+0x6b>
08ad9cd8 +0x64:  movl   $0x1,-0x14(%ebp)
08ad9cdf +0x6b:  mov    -0x14(%ebp),%eax
08ad9ce2 +0x6e:  leave
08ad9ce3 +0x6f:  ret
```

## 反编译 C

```c
// WideString::getHash @ 0x8ad9c74

/* DWARF original prototype: uint32 getHash(WideString * this) */

uint32 __thiscall WideString::getHash(WideString *this)

{
  int iVar1;
  bool bVar2;
  uint32 local_18;
  int *local_14;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: wchar * str@[???] */
  bVar2 = isEmpty(this);
  if (bVar2) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    local_14 = this->buffer_;
    while( true ) {
                    /* Unresolved local var: wchar c@[???] */
      iVar1 = *local_14;
      local_14 = local_14 + 1;
      if (iVar1 == 0) break;
      local_18 = local_18 * 0x1003f + iVar1;
    }
    if (local_18 == 0) {
      local_18 = 1;
    }
  }
  return local_18;
}
```
