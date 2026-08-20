# revision

`_ZN7PackSet8revisionEv`

`PackSet::revision()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4924  _ZN7PackSet8revisionEv
#           PackSet::revision()
# range [0x08ac4924, 0x08ac492f]
08ac4924 +0x00:  push   %ebp
08ac4925 +0x01:  mov    %esp,%ebp
08ac4927 +0x03:  mov    0x8(%ebp),%eax
08ac492a +0x06:  mov    0x4(%eax),%eax
08ac492d +0x09:  pop    %ebp
08ac492e +0x0a:  ret
08ac492f +0x0b:  nop
```

## 反编译 C

```c
// PackSet::revision @ 0x8ac4924

/* DWARF original prototype: uint revision(PackSet * this) */

uint __thiscall PackSet::revision(PackSet *this)

{
  return this->revision_;
}
```
