# WideString

`_ZN10WideStringC1EPKwi`

`WideString::WideString(wchar_t const*, int)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9ac2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9ac2  _ZN10WideStringC1EPKwi
#           WideString::WideString(wchar_t const*, int)
# range [0x08ad9ac2, 0x08ad9b33]
08ad9ac2 +0x00:  push   %ebp
08ad9ac3 +0x01:  mov    %esp,%ebp
08ad9ac5 +0x03:  push   %ebx
08ad9ac6 +0x04:  sub    $0x24,%esp
08ad9ac9 +0x07:  cmpl   $0x0,0x10(%ebp)
08ad9acd +0x0b:  jne    08ad9ae5 <+0x23>
08ad9acf +0x0d:  mov    &_ZL21s_emptyWideStringData,%eax
08ad9ad4 +0x12:  mov    %eax,0x4(%esp)
08ad9ad8 +0x16:  mov    0x8(%ebp),%eax
08ad9adb +0x19:  mov    %eax,(%esp)
08ad9ade +0x1c:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9ae3 +0x21:  jmp    08ad9b2d <+0x6b>
08ad9ae5 +0x23:  mov    0x10(%ebp),%eax
08ad9ae8 +0x26:  mov    %eax,(%esp)
08ad9aeb +0x29:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08ad9af0 +0x2e:  mov    %eax,-0xc(%ebp)
08ad9af3 +0x31:  mov    0x10(%ebp),%eax
08ad9af6 +0x34:  lea    0x0(,%eax,4),%ebx
08ad9afd +0x3b:  mov    -0xc(%ebp),%eax
08ad9b00 +0x3e:  mov    %eax,(%esp)
08ad9b03 +0x41:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9b08 +0x46:  mov    %ebx,0x8(%esp)
08ad9b0c +0x4a:  mov    0xc(%ebp),%edx
08ad9b0f +0x4d:  mov    %edx,0x4(%esp)
08ad9b13 +0x51:  mov    %eax,(%esp)
08ad9b16 +0x54:  call   0807d8a0 <_init+0x198>
08ad9b1b +0x59:  mov    -0xc(%ebp),%eax
08ad9b1e +0x5c:  mov    %eax,0x4(%esp)
08ad9b22 +0x60:  mov    0x8(%ebp),%eax
08ad9b25 +0x63:  mov    %eax,(%esp)
08ad9b28 +0x66:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9b2d +0x6b:  add    $0x24,%esp
08ad9b30 +0x6e:  pop    %ebx
08ad9b31 +0x6f:  pop    %ebp
08ad9b32 +0x70:  ret
08ad9b33 +0x71:  nop
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9ac2

/* DWARF original prototype: void WideString(WideString * this, wchar * src, int32 length) */

void __thiscall WideString::WideString(WideString *this,wchar *src,int32 length)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::createTerminated(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,length * 4);
    attachData(this,this_00);
  }
  return;
}
```
