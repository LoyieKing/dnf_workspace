# rfind

`_ZNK10WideString5rfindEiw`

`WideString::rfind(int, wchar_t) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada69c  _ZNK10WideString5rfindEiw
#           WideString::rfind(int, wchar_t) const
# range [0x08ada69c, 0x08ada71d]
08ada69c +0x00:  push   %ebp
08ada69d +0x01:  mov    %esp,%ebp
08ada69f +0x03:  sub    $0x28,%esp
08ada6a2 +0x06:  cmpl   $0x0,0x10(%ebp)
08ada6a6 +0x0a:  jne    08ada6af <+0x13>
08ada6a8 +0x0c:  mov    $0xffffffff,%eax
08ada6ad +0x11:  jmp    08ada71c <+0x80>
08ada6af +0x13:  cmpl   $0x0,0xc(%ebp)
08ada6b3 +0x17:  js     08ada6c5 <+0x29>
08ada6b5 +0x19:  mov    0x8(%ebp),%eax
08ada6b8 +0x1c:  mov    %eax,(%esp)
08ada6bb +0x1f:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada6c0 +0x24:  cmp    0xc(%ebp),%eax
08ada6c3 +0x27:  jg     08ada6cc <+0x30>
08ada6c5 +0x29:  mov    $0x1,%eax
08ada6ca +0x2e:  jmp    08ada6d1 <+0x35>
08ada6cc +0x30:  mov    $0x0,%eax
08ada6d1 +0x35:  test   %al,%al
08ada6d3 +0x37:  je     08ada6dc <+0x40>
08ada6d5 +0x39:  mov    $0xffffffff,%eax
08ada6da +0x3e:  jmp    08ada71c <+0x80>
08ada6dc +0x40:  mov    0x8(%ebp),%eax
08ada6df +0x43:  mov    %eax,(%esp)
08ada6e2 +0x46:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada6e7 +0x4b:  mov    %eax,-0x10(%ebp)
08ada6ea +0x4e:  mov    0xc(%ebp),%eax
08ada6ed +0x51:  mov    %eax,-0xc(%ebp)
08ada6f0 +0x54:  jmp    08ada70b <+0x6f>
08ada6f2 +0x56:  mov    -0xc(%ebp),%eax
08ada6f5 +0x59:  shl    $0x2,%eax
08ada6f8 +0x5c:  add    -0x10(%ebp),%eax
08ada6fb +0x5f:  mov    (%eax),%eax
08ada6fd +0x61:  cmp    0x10(%ebp),%eax
08ada700 +0x64:  jne    08ada707 <+0x6b>
08ada702 +0x66:  mov    -0xc(%ebp),%eax
08ada705 +0x69:  jmp    08ada71c <+0x80>
08ada707 +0x6b:  subl   $0x1,-0xc(%ebp)
08ada70b +0x6f:  mov    -0xc(%ebp),%eax
08ada70e +0x72:  not    %eax
08ada710 +0x74:  shr    $0x1f,%eax
08ada713 +0x77:  test   %al,%al
08ada715 +0x79:  jne    08ada6f2 <+0x56>
08ada717 +0x7b:  mov    $0xffffffff,%eax
08ada71c +0x80:  leave
08ada71d +0x81:  ret
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada69c

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar pat)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???] */
  if (pat != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        if (pwVar3[local_10] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
