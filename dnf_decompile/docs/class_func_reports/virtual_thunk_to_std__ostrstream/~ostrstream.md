# ~ostrstream

`_ZTv0_n12_NSt10ostrstreamD1Ev`

`virtual thunk to std::ostrstream::~ostrstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::ostrstream` | `0x086ddda0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddda0  _ZTv0_n12_NSt10ostrstreamD1Ev
#           virtual thunk to std::ostrstream::~ostrstream()
# range [0x086ddda0, 0x086dddbf]
086ddda0 +0x00:  mov    0x4(%esp),%eax
086ddda4 +0x04:  mov    (%eax),%ecx
086ddda6 +0x06:  add    -0xc(%ecx),%eax
086ddda9 +0x09:  mov    %eax,0x4(%esp)
086dddad +0x0d:  jmp    086dddc0 <_ZNSt10ostrstreamD1Ev>  ; std::ostrstream::~ostrstream()
086dddb2 +0x12:  nop
086dddb3 +0x13:  nop
086dddb4 +0x14:  nop
086dddb5 +0x15:  nop
086dddb6 +0x16:  nop
086dddb7 +0x17:  nop
086dddb8 +0x18:  nop
086dddb9 +0x19:  nop
086dddba +0x1a:  nop
086dddbb +0x1b:  nop
086dddbc +0x1c:  nop
086dddbd +0x1d:  nop
086dddbe +0x1e:  nop
086dddbf +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86ddda0

/* virtual thunk to std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  ~ostrstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
