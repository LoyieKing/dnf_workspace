# ~strstream

`_ZTv0_n12_NSt9strstreamD1Ev`

`virtual thunk to std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::strstream` | `0x086de120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de120  _ZTv0_n12_NSt9strstreamD1Ev
#           virtual thunk to std::strstream::~strstream()
# range [0x086de120, 0x086de13f]
086de120 +0x00:  mov    0x4(%esp),%eax
086de124 +0x04:  mov    (%eax),%ecx
086de126 +0x06:  add    -0xc(%ecx),%eax
086de129 +0x09:  mov    %eax,0x4(%esp)
086de12d +0x0d:  jmp    086de150 <_ZNSt9strstreamD1Ev>  ; std::strstream::~strstream()
086de132 +0x12:  nop
086de133 +0x13:  nop
086de134 +0x14:  nop
086de135 +0x15:  nop
086de136 +0x16:  nop
086de137 +0x17:  nop
086de138 +0x18:  nop
086de139 +0x19:  nop
086de13a +0x1a:  nop
086de13b +0x1b:  nop
086de13c +0x1c:  nop
086de13d +0x1d:  nop
086de13e +0x1e:  nop
086de13f +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86de120

/* virtual thunk to std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
