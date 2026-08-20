# attachData

`_ZN10WideString10attachDataEP14WideStringData`

`WideString::attachData(WideStringData*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada1b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada1b4  _ZN10WideString10attachDataEP14WideStringData
#           WideString::attachData(WideStringData*)
# range [0x08ada1b4, 0x08ada1d7]
08ada1b4 +0x00:  push   %ebp
08ada1b5 +0x01:  mov    %esp,%ebp
08ada1b7 +0x03:  sub    $0x4,%esp
08ada1ba +0x06:  mov    0xc(%ebp),%eax
08ada1bd +0x09:  mov    %eax,(%esp)
08ada1c0 +0x0c:  call   08ad6884 <_ZN10StringData6incRefEv>  ; StringData::incRef()
08ada1c5 +0x11:  mov    0xc(%ebp),%eax
08ada1c8 +0x14:  mov    %eax,(%esp)
08ada1cb +0x17:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ada1d0 +0x1c:  mov    0x8(%ebp),%edx
08ada1d3 +0x1f:  mov    %eax,(%edx)
08ada1d5 +0x21:  leave
08ada1d6 +0x22:  ret
08ada1d7 +0x23:  nop
```

## 反编译 C

```c
// WideString::attachData @ 0x8ada1b4

/* DWARF original prototype: void attachData(WideString * this, WideStringData * newData) */

void __thiscall WideString::attachData(WideString *this,WideStringData *newData)

{
  wchar *pwVar1;
  
  StringData::incRef(&newData->super_StringData);
  pwVar1 = WideStringData::getBuffer(newData);
  this->buffer_ = pwVar1;
  return;
}
```
