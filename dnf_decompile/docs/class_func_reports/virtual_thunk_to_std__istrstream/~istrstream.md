# ~istrstream

`_ZTv0_n12_NSt10istrstreamD1Ev`

`virtual thunk to std::istrstream::~istrstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::istrstream` | `0x086dde80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dde80  _ZTv0_n12_NSt10istrstreamD1Ev
#           virtual thunk to std::istrstream::~istrstream()
# range [0x086dde80, 0x086dde9f]
086dde80 +0x00:  mov    0x4(%esp),%eax
086dde84 +0x04:  mov    (%eax),%ecx
086dde86 +0x06:  add    -0xc(%ecx),%eax
086dde89 +0x09:  mov    %eax,0x4(%esp)
086dde8d +0x0d:  jmp    086ddea0 <_ZNSt10istrstreamD1Ev>  ; std::istrstream::~istrstream()
086dde92 +0x12:  nop
086dde93 +0x13:  nop
086dde94 +0x14:  nop
086dde95 +0x15:  nop
086dde96 +0x16:  nop
086dde97 +0x17:  nop
086dde98 +0x18:  nop
086dde99 +0x19:  nop
086dde9a +0x1a:  nop
086dde9b +0x1b:  nop
086dde9c +0x1c:  nop
086dde9d +0x1d:  nop
086dde9e +0x1e:  nop
086dde9f +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86dde80

/* virtual thunk to std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  ~istrstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
