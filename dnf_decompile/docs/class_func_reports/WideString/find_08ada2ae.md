# find

`_ZNK10WideString4findEiPKwi`

`WideString::find(int, wchar_t const*, int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada2ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada2ae  _ZNK10WideString4findEiPKwi
#           WideString::find(int, wchar_t const*, int) const
# range [0x08ada2ae, 0x08ada361]
08ada2ae +0x00:  push   %ebp
08ada2af +0x01:  mov    %esp,%ebp
08ada2b1 +0x03:  sub    $0x28,%esp
08ada2b4 +0x06:  cmpl   $0x0,0x14(%ebp)
08ada2b8 +0x0a:  jne    08ada2c4 <+0x16>
08ada2ba +0x0c:  mov    $0xffffffff,%eax
08ada2bf +0x11:  jmp    08ada360 <+0xb2>
08ada2c4 +0x16:  cmpl   $0x0,0xc(%ebp)
08ada2c8 +0x1a:  js     08ada2dd <+0x2f>
08ada2ca +0x1c:  mov    0x8(%ebp),%eax
08ada2cd +0x1f:  mov    %eax,(%esp)
08ada2d0 +0x22:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada2d5 +0x27:  sub    0xc(%ebp),%eax
08ada2d8 +0x2a:  cmp    0x14(%ebp),%eax
08ada2db +0x2d:  jge    08ada2e4 <+0x36>
08ada2dd +0x2f:  mov    $0x1,%eax
08ada2e2 +0x34:  jmp    08ada2e9 <+0x3b>
08ada2e4 +0x36:  mov    $0x0,%eax
08ada2e9 +0x3b:  test   %al,%al
08ada2eb +0x3d:  je     08ada2f4 <+0x46>
08ada2ed +0x3f:  mov    $0xffffffff,%eax
08ada2f2 +0x44:  jmp    08ada360 <+0xb2>
08ada2f4 +0x46:  mov    0x8(%ebp),%eax
08ada2f7 +0x49:  mov    %eax,(%esp)
08ada2fa +0x4c:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada2ff +0x51:  mov    %eax,-0x14(%ebp)
08ada302 +0x54:  mov    0x8(%ebp),%eax
08ada305 +0x57:  mov    %eax,(%esp)
08ada308 +0x5a:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada30d +0x5f:  sub    0x14(%ebp),%eax
08ada310 +0x62:  mov    %eax,-0x10(%ebp)
08ada313 +0x65:  mov    0xc(%ebp),%eax
08ada316 +0x68:  mov    %eax,-0xc(%ebp)
08ada319 +0x6b:  jmp    08ada34e <+0xa0>
08ada31b +0x6d:  mov    0x14(%ebp),%eax
08ada31e +0x70:  lea    0x0(,%eax,4),%edx
08ada325 +0x77:  mov    -0xc(%ebp),%eax
08ada328 +0x7a:  shl    $0x2,%eax
08ada32b +0x7d:  add    -0x14(%ebp),%eax
08ada32e +0x80:  mov    %edx,0x8(%esp)
08ada332 +0x84:  mov    0x10(%ebp),%edx
08ada335 +0x87:  mov    %edx,0x4(%esp)
08ada339 +0x8b:  mov    %eax,(%esp)
08ada33c +0x8e:  call   0807dc90 <_init+0x588>
08ada341 +0x93:  test   %eax,%eax
08ada343 +0x95:  jne    08ada34a <+0x9c>
08ada345 +0x97:  mov    -0xc(%ebp),%eax
08ada348 +0x9a:  jmp    08ada360 <+0xb2>
08ada34a +0x9c:  addl   $0x1,-0xc(%ebp)
08ada34e +0xa0:  mov    -0xc(%ebp),%eax
08ada351 +0xa3:  cmp    -0x10(%ebp),%eax
08ada354 +0xa6:  setle  %al
08ada357 +0xa9:  test   %al,%al
08ada359 +0xab:  jne    08ada31b <+0x6d>
08ada35b +0xad:  mov    $0xffffffff,%eax
08ada360 +0xb2:  leave
08ada361 +0xb3:  ret
```

## 反编译 C

```c
// WideString::find @ 0x8ada2ae

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar * pat, int32 patLength)
    */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 - patLength; local_10 = local_10 + 1) {
        iVar4 = memcmp(pwVar3 + local_10,pat,patLength * 4);
        if (iVar4 == 0) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
