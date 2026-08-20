# getHash

`_ZNK10CharString7getHashEv`

`CharString::getHash() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6c1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6c1c  _ZNK10CharString7getHashEv
#           CharString::getHash() const
# range [0x08ad6c1c, 0x08ad6c8d]
08ad6c1c +0x00:  push   %ebp
08ad6c1d +0x01:  mov    %esp,%ebp
08ad6c1f +0x03:  sub    $0x28,%esp
08ad6c22 +0x06:  mov    0x8(%ebp),%eax
08ad6c25 +0x09:  mov    %eax,(%esp)
08ad6c28 +0x0c:  call   08add284 <_ZN10WideString8isupunctEw+0x734>  ; WideString::isupunct(wchar_t)+0x734
08ad6c2d +0x11:  test   %al,%al
08ad6c2f +0x13:  je     08ad6c38 <+0x1c>
08ad6c31 +0x15:  mov    $0x0,%eax
08ad6c36 +0x1a:  jmp    08ad6c8c <+0x70>
08ad6c38 +0x1c:  movl   $0x0,-0x14(%ebp)
08ad6c3f +0x23:  mov    0x8(%ebp),%eax
08ad6c42 +0x26:  mov    (%eax),%eax
08ad6c44 +0x28:  mov    %eax,-0x10(%ebp)
08ad6c47 +0x2b:  mov    -0x10(%ebp),%eax
08ad6c4a +0x2e:  movzbl (%eax),%eax
08ad6c4d +0x31:  mov    %al,-0x9(%ebp)
08ad6c50 +0x34:  addl   $0x1,-0x10(%ebp)
08ad6c54 +0x38:  cmpb   $0x0,-0x9(%ebp)
08ad6c58 +0x3c:  je     08ad6c7c <+0x60>
08ad6c5a +0x3e:  mov    -0x14(%ebp),%eax
08ad6c5d +0x41:  mov    %eax,%edx
08ad6c5f +0x43:  shl    $0x6,%edx
08ad6c62 +0x46:  mov    -0x14(%ebp),%eax
08ad6c65 +0x49:  shl    $0x10,%eax
08ad6c68 +0x4c:  lea    (%edx,%eax,1),%eax
08ad6c6b +0x4f:  mov    %eax,%edx
08ad6c6d +0x51:  sub    -0x14(%ebp),%edx
08ad6c70 +0x54:  movsbl -0x9(%ebp),%eax
08ad6c74 +0x58:  lea    (%edx,%eax,1),%eax
08ad6c77 +0x5b:  mov    %eax,-0x14(%ebp)
08ad6c7a +0x5e:  jmp    08ad6c47 <+0x2b>
08ad6c7c +0x60:  cmpl   $0x0,-0x14(%ebp)
08ad6c80 +0x64:  jne    08ad6c89 <+0x6d>
08ad6c82 +0x66:  movl   $0x1,-0x14(%ebp)
08ad6c89 +0x6d:  mov    -0x14(%ebp),%eax
08ad6c8c +0x70:  leave
08ad6c8d +0x71:  ret
```

## 反编译 C

```c
// CharString::getHash @ 0x8ad6c1c

/* DWARF original prototype: uint32 getHash(CharString * this) */

uint32 __thiscall CharString::getHash(CharString *this)

{
  char cVar1;
  bool bVar2;
  uint32 local_18;
  char *local_14;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: char * str@[???] */
  bVar2 = isEmpty(this);
  if (bVar2) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    local_14 = this->buffer_;
    while( true ) {
                    /* Unresolved local var: char c@[???] */
      cVar1 = *local_14;
      local_14 = local_14 + 1;
      if (cVar1 == '\0') break;
      local_18 = local_18 * 0x1003f + (int)cVar1;
    }
    if (local_18 == 0) {
      local_18 = 1;
    }
  }
  return local_18;
}
```
