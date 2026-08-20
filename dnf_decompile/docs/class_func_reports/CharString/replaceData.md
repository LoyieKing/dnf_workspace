# replaceData

`_ZN10CharString11replaceDataEP14CharStringData`

`CharString::replaceData(CharStringData*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7180  _ZN10CharString11replaceDataEP14CharStringData
#           CharString::replaceData(CharStringData*)
# range [0x08ad7180, 0x08ad71bb]
08ad7180 +0x00:  push   %ebp
08ad7181 +0x01:  mov    %esp,%ebp
08ad7183 +0x03:  sub    $0x28,%esp
08ad7186 +0x06:  mov    0x8(%ebp),%eax
08ad7189 +0x09:  mov    %eax,(%esp)
08ad718c +0x0c:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad7191 +0x11:  mov    %eax,-0xc(%ebp)
08ad7194 +0x14:  mov    0xc(%ebp),%eax
08ad7197 +0x17:  mov    %eax,(%esp)
08ad719a +0x1a:  call   08ad6884 <_ZN10StringData6incRefEv>  ; StringData::incRef()
08ad719f +0x1f:  mov    0xc(%ebp),%eax
08ad71a2 +0x22:  mov    %eax,(%esp)
08ad71a5 +0x25:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad71aa +0x2a:  mov    0x8(%ebp),%edx
08ad71ad +0x2d:  mov    %eax,(%edx)
08ad71af +0x2f:  mov    -0xc(%ebp),%eax
08ad71b2 +0x32:  mov    %eax,(%esp)
08ad71b5 +0x35:  call   08ad6890 <_ZN10StringData6decRefEv>  ; StringData::decRef()
08ad71ba +0x3a:  leave
08ad71bb +0x3b:  ret
```

## 反编译 C

```c
// CharString::replaceData @ 0x8ad7180

/* DWARF original prototype: void replaceData(CharString * this, CharStringData * newData) */

void __thiscall CharString::replaceData(CharString *this,CharStringData *newData)

{
  StringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * oldData@[???] */
  this_00 = &getData(this)->super_StringData;
  StringData::incRef(&newData->super_StringData);
  pcVar1 = CharStringData::getBuffer(newData);
  this->buffer_ = pcVar1;
  StringData::decRef(this_00);
  return;
}
```
