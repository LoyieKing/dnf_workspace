# WideString

`_ZN10WideStringC1ERKS_`

`WideString::WideString(WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9a1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9a1a  _ZN10WideStringC1ERKS_
#           WideString::WideString(WideString const&)
# range [0x08ad9a1a, 0x08ad9a41]
08ad9a1a +0x00:  push   %ebp
08ad9a1b +0x01:  mov    %esp,%ebp
08ad9a1d +0x03:  sub    $0x28,%esp
08ad9a20 +0x06:  mov    0xc(%ebp),%eax
08ad9a23 +0x09:  mov    %eax,(%esp)
08ad9a26 +0x0c:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ad9a2b +0x11:  mov    %eax,-0xc(%ebp)
08ad9a2e +0x14:  mov    -0xc(%ebp),%eax
08ad9a31 +0x17:  mov    %eax,0x4(%esp)
08ad9a35 +0x1b:  mov    0x8(%ebp),%eax
08ad9a38 +0x1e:  mov    %eax,(%esp)
08ad9a3b +0x21:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9a40 +0x26:  leave
08ad9a41 +0x27:  ret
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9a1a

/* DWARF original prototype: void WideString(WideString * this, WideString * src) */

void __thiscall WideString::WideString(WideString *this,WideString *src)

{
  WideStringData *newData;
  
                    /* Unresolved local var: WideStringData * srcData@[???] */
  newData = getData(src);
  attachData(this,newData);
  return;
}
```
