# WideString

`_ZN10WideStringC1EPKw`

`WideString::WideString(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9a42  _ZN10WideStringC1EPKw
#           WideString::WideString(wchar_t const*)
# range [0x08ad9a42, 0x08ad9ac1]
08ad9a42 +0x00:  push   %ebp
08ad9a43 +0x01:  mov    %esp,%ebp
08ad9a45 +0x03:  push   %ebx
08ad9a46 +0x04:  sub    $0x24,%esp
08ad9a49 +0x07:  mov    0xc(%ebp),%eax
08ad9a4c +0x0a:  mov    %eax,(%esp)
08ad9a4f +0x0d:  call   0807e130 <_init+0xa28>
08ad9a54 +0x12:  mov    %eax,-0x10(%ebp)
08ad9a57 +0x15:  cmpl   $0x0,-0x10(%ebp)
08ad9a5b +0x19:  jne    08ad9a73 <+0x31>
08ad9a5d +0x1b:  mov    &_ZL21s_emptyWideStringData,%eax
08ad9a62 +0x20:  mov    %eax,0x4(%esp)
08ad9a66 +0x24:  mov    0x8(%ebp),%eax
08ad9a69 +0x27:  mov    %eax,(%esp)
08ad9a6c +0x2a:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9a71 +0x2f:  jmp    08ad9abc <+0x7a>
08ad9a73 +0x31:  mov    -0x10(%ebp),%eax
08ad9a76 +0x34:  mov    %eax,(%esp)
08ad9a79 +0x37:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08ad9a7e +0x3c:  mov    %eax,-0xc(%ebp)
08ad9a81 +0x3f:  mov    -0x10(%ebp),%eax
08ad9a84 +0x42:  add    $0x1,%eax
08ad9a87 +0x45:  shl    $0x2,%eax
08ad9a8a +0x48:  mov    %eax,%ebx
08ad9a8c +0x4a:  mov    -0xc(%ebp),%eax
08ad9a8f +0x4d:  mov    %eax,(%esp)
08ad9a92 +0x50:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9a97 +0x55:  mov    %ebx,0x8(%esp)
08ad9a9b +0x59:  mov    0xc(%ebp),%edx
08ad9a9e +0x5c:  mov    %edx,0x4(%esp)
08ad9aa2 +0x60:  mov    %eax,(%esp)
08ad9aa5 +0x63:  call   0807d8a0 <_init+0x198>
08ad9aaa +0x68:  mov    -0xc(%ebp),%eax
08ad9aad +0x6b:  mov    %eax,0x4(%esp)
08ad9ab1 +0x6f:  mov    0x8(%ebp),%eax
08ad9ab4 +0x72:  mov    %eax,(%esp)
08ad9ab7 +0x75:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9abc +0x7a:  add    $0x24,%esp
08ad9abf +0x7d:  pop    %ebx
08ad9ac0 +0x7e:  pop    %ebp
08ad9ac1 +0x7f:  ret
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9a42

/* DWARF original prototype: void WideString(WideString * this, wchar * src) */

void __thiscall WideString::WideString(WideString *this,wchar *src)

{
  size_t length;
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * data@[???] */
  length = wcslen(src);
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::create(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,(length + 1) * 4);
    attachData(this,this_00);
  }
  return;
}
```
