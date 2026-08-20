# pattern

`_ZN10WideString7patternEPKwi`

`WideString::pattern(wchar_t const*, int)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adbb38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adbb38  _ZN10WideString7patternEPKwi
#           WideString::pattern(wchar_t const*, int)
# range [0x08adbb38, 0x08adbbe1]
08adbb38 +0x00:  push   %ebp
08adbb39 +0x01:  mov    %esp,%ebp
08adbb3b +0x03:  push   %ebx
08adbb3c +0x04:  sub    $0x24,%esp
08adbb3f +0x07:  mov    0x8(%ebp),%ebx
08adbb42 +0x0a:  mov    0xc(%ebp),%eax
08adbb45 +0x0d:  mov    %eax,(%esp)
08adbb48 +0x10:  call   0807e130 <_init+0xa28>
08adbb4d +0x15:  mov    %eax,-0x18(%ebp)
08adbb50 +0x18:  cmpl   $0x0,-0x18(%ebp)
08adbb54 +0x1c:  je     08adbb5c <+0x24>
08adbb56 +0x1e:  cmpl   $0x0,0x10(%ebp)
08adbb5a +0x22:  jg     08adbb68 <+0x30>
08adbb5c +0x24:  mov    %ebx,%eax
08adbb5e +0x26:  mov    %eax,(%esp)
08adbb61 +0x29:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adbb66 +0x2e:  jmp    08adbbd8 <+0xa0>
08adbb68 +0x30:  mov    -0x18(%ebp),%eax
08adbb6b +0x33:  imul   0x10(%ebp),%eax
08adbb6f +0x37:  mov    %eax,(%esp)
08adbb72 +0x3a:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08adbb77 +0x3f:  mov    %eax,-0x14(%ebp)
08adbb7a +0x42:  mov    -0x14(%ebp),%eax
08adbb7d +0x45:  mov    %eax,(%esp)
08adbb80 +0x48:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adbb85 +0x4d:  mov    %eax,-0x10(%ebp)
08adbb88 +0x50:  movl   $0x0,-0xc(%ebp)
08adbb8f +0x57:  jmp    08adbbba <+0x82>
08adbb91 +0x59:  mov    -0x18(%ebp),%eax
08adbb94 +0x5c:  shl    $0x2,%eax
08adbb97 +0x5f:  mov    %eax,0x8(%esp)
08adbb9b +0x63:  mov    0xc(%ebp),%eax
08adbb9e +0x66:  mov    %eax,0x4(%esp)
08adbba2 +0x6a:  mov    -0x10(%ebp),%eax
08adbba5 +0x6d:  mov    %eax,(%esp)
08adbba8 +0x70:  call   0807d8a0 <_init+0x198>
08adbbad +0x75:  mov    -0x18(%ebp),%eax
08adbbb0 +0x78:  shl    $0x2,%eax
08adbbb3 +0x7b:  add    %eax,-0x10(%ebp)
08adbbb6 +0x7e:  addl   $0x1,-0xc(%ebp)
08adbbba +0x82:  mov    -0xc(%ebp),%eax
08adbbbd +0x85:  cmp    0x10(%ebp),%eax
08adbbc0 +0x88:  setl   %al
08adbbc3 +0x8b:  test   %al,%al
08adbbc5 +0x8d:  jne    08adbb91 <+0x59>
08adbbc7 +0x8f:  mov    %ebx,%eax
08adbbc9 +0x91:  mov    -0x14(%ebp),%edx
08adbbcc +0x94:  mov    %edx,0x4(%esp)
08adbbd0 +0x98:  mov    %eax,(%esp)
08adbbd3 +0x9b:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adbbd8 +0xa0:  mov    %ebx,%eax
08adbbda +0xa2:  mov    %ebx,%eax
08adbbdc +0xa4:  add    $0x24,%esp
08adbbdf +0xa7:  pop    %ebx
08adbbe0 +0xa8:  pop    %ebp
08adbbe1 +0xa9:  ret    $0x4
```

## 反编译 C

```c
// WideString::pattern @ 0x8adbb38

WideString * WideString::pattern(WideString *__return_storage_ptr__,wchar *pattern,int32 count)

{
  size_t sVar1;
  WideStringData *this;
  wchar *local_14;
  int local_10;
  
                    /* Unresolved local var: int32 patternLen@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * buffer@[???] */
  sVar1 = wcslen(pattern);
  if ((sVar1 == 0) || (count < 1)) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::createTerminated(sVar1 * count);
    local_14 = WideStringData::getBuffer(this);
                    /* Unresolved local var: int32 i@[???] */
    for (local_10 = 0; local_10 < count; local_10 = local_10 + 1) {
      memcpy(local_14,pattern,sVar1 << 2);
      local_14 = local_14 + sVar1;
    }
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
