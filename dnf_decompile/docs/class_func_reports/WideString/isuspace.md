# isuspace

`_ZN10WideString8isuspaceEw`

`WideString::isuspace(wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adca62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adca62  _ZN10WideString8isuspaceEw
#           WideString::isuspace(wchar_t)
# range [0x08adca62, 0x08adcb4f]
08adca62 +0x00:  push   %ebp
08adca63 +0x01:  mov    %esp,%ebp
08adca65 +0x03:  cmpl   $0x9,0x8(%ebp)
08adca69 +0x07:  je     08adcb42 <+0xe0>
08adca6f +0x0d:  cmpl   $0xa,0x8(%ebp)
08adca73 +0x11:  je     08adcb42 <+0xe0>
08adca79 +0x17:  cmpl   $0xb,0x8(%ebp)
08adca7d +0x1b:  je     08adcb42 <+0xe0>
08adca83 +0x21:  cmpl   $0xc,0x8(%ebp)
08adca87 +0x25:  je     08adcb42 <+0xe0>
08adca8d +0x2b:  cmpl   $0xd,0x8(%ebp)
08adca91 +0x2f:  je     08adcb42 <+0xe0>
08adca97 +0x35:  cmpl   $0x20,0x8(%ebp)
08adca9b +0x39:  je     08adcb42 <+0xe0>
08adcaa1 +0x3f:  cmpl   $0xa0,0x8(%ebp)
08adcaa8 +0x46:  je     08adcb42 <+0xe0>
08adcaae +0x4c:  cmpl   $0x2000,0x8(%ebp)
08adcab5 +0x53:  je     08adcb42 <+0xe0>
08adcabb +0x59:  cmpl   $0x2001,0x8(%ebp)
08adcac2 +0x60:  je     08adcb42 <+0xe0>
08adcac4 +0x62:  cmpl   $0x2002,0x8(%ebp)
08adcacb +0x69:  je     08adcb42 <+0xe0>
08adcacd +0x6b:  cmpl   $0x2003,0x8(%ebp)
08adcad4 +0x72:  je     08adcb42 <+0xe0>
08adcad6 +0x74:  cmpl   $0x2004,0x8(%ebp)
08adcadd +0x7b:  je     08adcb42 <+0xe0>
08adcadf +0x7d:  cmpl   $0x2005,0x8(%ebp)
08adcae6 +0x84:  je     08adcb42 <+0xe0>
08adcae8 +0x86:  cmpl   $0x2006,0x8(%ebp)
08adcaef +0x8d:  je     08adcb42 <+0xe0>
08adcaf1 +0x8f:  cmpl   $0x2007,0x8(%ebp)
08adcaf8 +0x96:  je     08adcb42 <+0xe0>
08adcafa +0x98:  cmpl   $0x2008,0x8(%ebp)
08adcb01 +0x9f:  je     08adcb42 <+0xe0>
08adcb03 +0xa1:  cmpl   $0x2009,0x8(%ebp)
08adcb0a +0xa8:  je     08adcb42 <+0xe0>
08adcb0c +0xaa:  cmpl   $0x200a,0x8(%ebp)
08adcb13 +0xb1:  je     08adcb42 <+0xe0>
08adcb15 +0xb3:  cmpl   $0x200b,0x8(%ebp)
08adcb1c +0xba:  je     08adcb42 <+0xe0>
08adcb1e +0xbc:  cmpl   $0x202f,0x8(%ebp)
08adcb25 +0xc3:  je     08adcb42 <+0xe0>
08adcb27 +0xc5:  cmpl   $0x205f,0x8(%ebp)
08adcb2e +0xcc:  je     08adcb42 <+0xe0>
08adcb30 +0xce:  cmpl   $0x3000,0x8(%ebp)
08adcb37 +0xd5:  je     08adcb42 <+0xe0>
08adcb39 +0xd7:  cmpl   $0xfeff,0x8(%ebp)
08adcb40 +0xde:  jne    08adcb49 <+0xe7>
08adcb42 +0xe0:  mov    $0x1,%eax
08adcb47 +0xe5:  jmp    08adcb4e <+0xec>
08adcb49 +0xe7:  mov    $0x0,%eax
08adcb4e +0xec:  pop    %ebp
08adcb4f +0xed:  ret
```

## 反编译 C

```c
// WideString::isuspace @ 0x8adca62

bool WideString::isuspace(wchar ch)

{
  bool bVar1;
  
  if ((((((ch == 9) || (ch == 10)) || (ch == 0xb)) ||
       (((ch == 0xc || (ch == 0xd)) || ((ch == 0x20 || ((ch == 0xa0 || (ch == 0x2000)))))))) ||
      ((ch == 0x2001 ||
       ((((((ch == 0x2002 || (ch == 0x2003)) || (ch == 0x2004)) ||
          ((ch == 0x2005 || (ch == 0x2006)))) ||
         ((ch == 0x2007 || ((ch == 0x2008 || (ch == 0x2009)))))) || (ch == 0x200a)))))) ||
     ((((ch == 0x200b || (ch == 0x202f)) || (ch == 0x205f)) || ((ch == 0x3000 || (ch == 0xfeff))))))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
```
