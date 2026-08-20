# replaceData

`_ZN10WideString11replaceDataEP14WideStringData`

`WideString::replaceData(WideStringData*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada1d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada1d8  _ZN10WideString11replaceDataEP14WideStringData
#           WideString::replaceData(WideStringData*)
# range [0x08ada1d8, 0x08ada213]
08ada1d8 +0x00:  push   %ebp
08ada1d9 +0x01:  mov    %esp,%ebp
08ada1db +0x03:  sub    $0x28,%esp
08ada1de +0x06:  mov    0x8(%ebp),%eax
08ada1e1 +0x09:  mov    %eax,(%esp)
08ada1e4 +0x0c:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ada1e9 +0x11:  mov    %eax,-0xc(%ebp)
08ada1ec +0x14:  mov    0xc(%ebp),%eax
08ada1ef +0x17:  mov    %eax,(%esp)
08ada1f2 +0x1a:  call   08ad6884 <_ZN10StringData6incRefEv>  ; StringData::incRef()
08ada1f7 +0x1f:  mov    0xc(%ebp),%eax
08ada1fa +0x22:  mov    %eax,(%esp)
08ada1fd +0x25:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ada202 +0x2a:  mov    0x8(%ebp),%edx
08ada205 +0x2d:  mov    %eax,(%edx)
08ada207 +0x2f:  mov    -0xc(%ebp),%eax
08ada20a +0x32:  mov    %eax,(%esp)
08ada20d +0x35:  call   08ad6890 <_ZN10StringData6decRefEv>  ; StringData::decRef()
08ada212 +0x3a:  leave
08ada213 +0x3b:  ret
```

## 反编译 C

```c
// WideString::replaceData @ 0x8ada1d8

/* DWARF original prototype: void replaceData(WideString * this, WideStringData * newData) */

void __thiscall WideString::replaceData(WideString *this,WideStringData *newData)

{
  StringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * oldData@[???] */
  this_00 = &getData(this)->super_StringData;
  StringData::incRef(&newData->super_StringData);
  pwVar1 = WideStringData::getBuffer(newData);
  this->buffer_ = pwVar1;
  StringData::decRef(this_00);
  return;
}
```
