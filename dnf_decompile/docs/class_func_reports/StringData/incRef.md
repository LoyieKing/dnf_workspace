# incRef

`_ZN10StringData6incRefEv`

`StringData::incRef()`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad6884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6884  _ZN10StringData6incRefEv
#           StringData::incRef()
# range [0x08ad6884, 0x08ad688f]
08ad6884 +0x00:  push   %ebp
08ad6885 +0x01:  mov    %esp,%ebp
08ad6887 +0x03:  mov    0x8(%ebp),%eax
08ad688a +0x06:  lock addl $0x1,(%eax)
08ad688e +0x0a:  pop    %ebp
08ad688f +0x0b:  ret
```

## 反编译 C

```c
// StringData::incRef @ 0x8ad6884

/* DWARF original prototype: void incRef(StringData * this) */

void __thiscall StringData::incRef(StringData *this)

{
  LOCK();
  this->refCount_ = this->refCount_ + 1;
  UNLOCK();
  return;
}
```
