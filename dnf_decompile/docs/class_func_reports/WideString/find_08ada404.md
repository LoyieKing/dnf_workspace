# find

`_ZNK10WideString4findEiw`

`WideString::find(int, wchar_t) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada404  _ZNK10WideString4findEiw
#           WideString::find(int, wchar_t) const
# range [0x08ada404, 0x08ada497]
08ada404 +0x00:  push   %ebp
08ada405 +0x01:  mov    %esp,%ebp
08ada407 +0x03:  sub    $0x28,%esp
08ada40a +0x06:  cmpl   $0x0,0x10(%ebp)
08ada40e +0x0a:  jne    08ada417 <+0x13>
08ada410 +0x0c:  mov    $0xffffffff,%eax
08ada415 +0x11:  jmp    08ada496 <+0x92>
08ada417 +0x13:  cmpl   $0x0,0xc(%ebp)
08ada41b +0x17:  js     08ada42d <+0x29>
08ada41d +0x19:  mov    0x8(%ebp),%eax
08ada420 +0x1c:  mov    %eax,(%esp)
08ada423 +0x1f:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada428 +0x24:  cmp    0xc(%ebp),%eax
08ada42b +0x27:  jg     08ada434 <+0x30>
08ada42d +0x29:  mov    $0x1,%eax
08ada432 +0x2e:  jmp    08ada439 <+0x35>
08ada434 +0x30:  mov    $0x0,%eax
08ada439 +0x35:  test   %al,%al
08ada43b +0x37:  je     08ada444 <+0x40>
08ada43d +0x39:  mov    $0xffffffff,%eax
08ada442 +0x3e:  jmp    08ada496 <+0x92>
08ada444 +0x40:  mov    0x8(%ebp),%eax
08ada447 +0x43:  mov    %eax,(%esp)
08ada44a +0x46:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada44f +0x4b:  mov    %eax,-0x14(%ebp)
08ada452 +0x4e:  mov    0x8(%ebp),%eax
08ada455 +0x51:  mov    %eax,(%esp)
08ada458 +0x54:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada45d +0x59:  sub    $0x1,%eax
08ada460 +0x5c:  mov    %eax,-0x10(%ebp)
08ada463 +0x5f:  mov    0xc(%ebp),%eax
08ada466 +0x62:  mov    %eax,-0xc(%ebp)
08ada469 +0x65:  jmp    08ada484 <+0x80>
08ada46b +0x67:  mov    -0xc(%ebp),%eax
08ada46e +0x6a:  shl    $0x2,%eax
08ada471 +0x6d:  add    -0x14(%ebp),%eax
08ada474 +0x70:  mov    (%eax),%eax
08ada476 +0x72:  cmp    0x10(%ebp),%eax
08ada479 +0x75:  jne    08ada480 <+0x7c>
08ada47b +0x77:  mov    -0xc(%ebp),%eax
08ada47e +0x7a:  jmp    08ada496 <+0x92>
08ada480 +0x7c:  addl   $0x1,-0xc(%ebp)
08ada484 +0x80:  mov    -0xc(%ebp),%eax
08ada487 +0x83:  cmp    -0x10(%ebp),%eax
08ada48a +0x86:  setle  %al
08ada48d +0x89:  test   %al,%al
08ada48f +0x8b:  jne    08ada46b <+0x67>
08ada491 +0x8d:  mov    $0xffffffff,%eax
08ada496 +0x92:  leave
08ada497 +0x93:  ret
```

## 反编译 C

```c
// WideString::find @ 0x8ada404

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar pat)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (pat != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 + -1; local_10 = local_10 + 1) {
        if (pwVar3[local_10] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
