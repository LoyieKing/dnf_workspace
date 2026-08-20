# CharString

`_ZN10CharStringC1ERKS_`

`CharString::CharString(CharString const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad69c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad69c6  _ZN10CharStringC1ERKS_
#           CharString::CharString(CharString const&)
# range [0x08ad69c6, 0x08ad69ed]
08ad69c6 +0x00:  push   %ebp
08ad69c7 +0x01:  mov    %esp,%ebp
08ad69c9 +0x03:  sub    $0x28,%esp
08ad69cc +0x06:  mov    0xc(%ebp),%eax
08ad69cf +0x09:  mov    %eax,(%esp)
08ad69d2 +0x0c:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad69d7 +0x11:  mov    %eax,-0xc(%ebp)
08ad69da +0x14:  mov    -0xc(%ebp),%eax
08ad69dd +0x17:  mov    %eax,0x4(%esp)
08ad69e1 +0x1b:  mov    0x8(%ebp),%eax
08ad69e4 +0x1e:  mov    %eax,(%esp)
08ad69e7 +0x21:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad69ec +0x26:  leave
08ad69ed +0x27:  ret
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad69c6

/* DWARF original prototype: void CharString(CharString * this, CharString * src) */

void __thiscall CharString::CharString(CharString *this,CharString *src)

{
  CharStringData *newData;
  
                    /* Unresolved local var: CharStringData * srcData@[???] */
  newData = getData(src);
  attachData(this,newData);
  return;
}
```
