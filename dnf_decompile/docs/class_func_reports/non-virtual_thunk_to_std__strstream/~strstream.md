# ~strstream

`_ZThn8_NSt9strstreamD1Ev`

`non-virtual thunk to std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to std::strstream` | `0x086de140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de140  _ZThn8_NSt9strstreamD1Ev
#           non-virtual thunk to std::strstream::~strstream()
# range [0x086de140, 0x086de14f]
086de140 +0x00:  addl   $0xfffffff8,0x4(%esp)
086de145 +0x05:  jmp    086de150 <_ZNSt9strstreamD1Ev>  ; std::strstream::~strstream()
086de14a +0x0a:  nop
086de14b +0x0b:  nop
086de14c +0x0c:  nop
086de14d +0x0d:  nop
086de14e +0x0e:  nop
086de14f +0x0f:  nop
```

## 反编译 C

```c
// <global>::non-virtual @ 0x86de140

/* non-virtual thunk to std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this + -8);
  return;
}
```
