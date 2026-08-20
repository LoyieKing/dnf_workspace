# assign

`_ZN10WideString6assignEPKwi`

`WideString::assign(wchar_t const*, int)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9fcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9fcc  _ZN10WideString6assignEPKwi
#           WideString::assign(wchar_t const*, int)
# range [0x08ad9fcc, 0x08ada033]
08ad9fcc +0x00:  push   %ebp
08ad9fcd +0x01:  mov    %esp,%ebp
08ad9fcf +0x03:  push   %ebx
08ad9fd0 +0x04:  sub    $0x24,%esp
08ad9fd3 +0x07:  cmpl   $0x0,0x10(%ebp)
08ad9fd7 +0x0b:  jne    08ad9fe6 <+0x1a>
08ad9fd9 +0x0d:  mov    0x8(%ebp),%eax
08ad9fdc +0x10:  mov    %eax,(%esp)
08ad9fdf +0x13:  call   08ada0cc <_ZN10WideString5clearEv>  ; WideString::clear()
08ad9fe4 +0x18:  jmp    08ada02e <+0x62>
08ad9fe6 +0x1a:  mov    0x10(%ebp),%eax
08ad9fe9 +0x1d:  mov    %eax,(%esp)
08ad9fec +0x20:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08ad9ff1 +0x25:  mov    %eax,-0xc(%ebp)
08ad9ff4 +0x28:  mov    0x10(%ebp),%eax
08ad9ff7 +0x2b:  lea    0x0(,%eax,4),%ebx
08ad9ffe +0x32:  mov    -0xc(%ebp),%eax
08ada001 +0x35:  mov    %eax,(%esp)
08ada004 +0x38:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ada009 +0x3d:  mov    %ebx,0x8(%esp)
08ada00d +0x41:  mov    0xc(%ebp),%edx
08ada010 +0x44:  mov    %edx,0x4(%esp)
08ada014 +0x48:  mov    %eax,(%esp)
08ada017 +0x4b:  call   0807d8a0 <_init+0x198>
08ada01c +0x50:  mov    -0xc(%ebp),%eax
08ada01f +0x53:  mov    %eax,0x4(%esp)
08ada023 +0x57:  mov    0x8(%ebp),%eax
08ada026 +0x5a:  mov    %eax,(%esp)
08ada029 +0x5d:  call   08ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>  ; WideString::replaceData(WideStringData*)
08ada02e +0x62:  add    $0x24,%esp
08ada031 +0x65:  pop    %ebx
08ada032 +0x66:  pop    %ebp
08ada033 +0x67:  ret
```

## 反编译 C

```c
// WideString::assign @ 0x8ad9fcc

/* DWARF original prototype: void assign(WideString * this, wchar * src, int32 srcLength) */

void __thiscall WideString::assign(WideString *this,wchar *src,int32 srcLength)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (srcLength == 0) {
    clear(this);
  }
  else {
    this_00 = WideStringData::createTerminated(srcLength);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,srcLength * 4);
    replaceData(this,this_00);
  }
  return;
}
```
