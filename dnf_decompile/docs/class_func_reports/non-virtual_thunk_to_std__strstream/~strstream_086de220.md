# ~strstream

`_ZThn8_NSt9strstreamD0Ev`

`non-virtual thunk to std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to std::strstream` | `0x086de220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de220  _ZThn8_NSt9strstreamD0Ev
#           non-virtual thunk to std::strstream::~strstream()
# range [0x086de220, 0x086de22f]
086de220 +0x00:  addl   $0xfffffff8,0x4(%esp)
086de225 +0x05:  jmp    086de230 <_ZNSt9strstreamD0Ev>  ; std::strstream::~strstream()
086de22a +0x0a:  nop
086de22b +0x0b:  nop
086de22c +0x0c:  nop
086de22d +0x0d:  nop
086de22e +0x0e:  nop
086de22f +0x0f:  nop
```

## 反编译 C

```c
// <global>::non-virtual @ 0x86de220

/* non-virtual thunk to std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this + -8);
  return;
}
```
