# attachData

`_ZN10CharString10attachDataEP14CharStringData`

`CharString::attachData(CharStringData*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad715c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad715c  _ZN10CharString10attachDataEP14CharStringData
#           CharString::attachData(CharStringData*)
# range [0x08ad715c, 0x08ad717f]
08ad715c +0x00:  push   %ebp
08ad715d +0x01:  mov    %esp,%ebp
08ad715f +0x03:  sub    $0x4,%esp
08ad7162 +0x06:  mov    0xc(%ebp),%eax
08ad7165 +0x09:  mov    %eax,(%esp)
08ad7168 +0x0c:  call   08ad6884 <_ZN10StringData6incRefEv>  ; StringData::incRef()
08ad716d +0x11:  mov    0xc(%ebp),%eax
08ad7170 +0x14:  mov    %eax,(%esp)
08ad7173 +0x17:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad7178 +0x1c:  mov    0x8(%ebp),%edx
08ad717b +0x1f:  mov    %eax,(%edx)
08ad717d +0x21:  leave
08ad717e +0x22:  ret
08ad717f +0x23:  nop
```

## 反编译 C

```c
// CharString::attachData @ 0x8ad715c

/* DWARF original prototype: void attachData(CharString * this, CharStringData * newData) */

void __thiscall CharString::attachData(CharString *this,CharStringData *newData)

{
  char *pcVar1;
  
  StringData::incRef(&newData->super_StringData);
  pcVar1 = CharStringData::getBuffer(newData);
  this->buffer_ = pcVar1;
  return;
}
```
