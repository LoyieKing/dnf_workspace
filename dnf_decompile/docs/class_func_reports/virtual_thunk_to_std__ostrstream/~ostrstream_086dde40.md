# ~ostrstream

`_ZTv0_n12_NSt10ostrstreamD0Ev`

`virtual thunk to std::ostrstream::~ostrstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::ostrstream` | `0x086dde40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dde40  _ZTv0_n12_NSt10ostrstreamD0Ev
#           virtual thunk to std::ostrstream::~ostrstream()
# range [0x086dde40, 0x086dde5f]
086dde40 +0x00:  mov    0x4(%esp),%eax
086dde44 +0x04:  mov    (%eax),%ecx
086dde46 +0x06:  add    -0xc(%ecx),%eax
086dde49 +0x09:  mov    %eax,0x4(%esp)
086dde4d +0x0d:  jmp    086dde60 <_ZNSt10ostrstreamD0Ev>  ; std::ostrstream::~ostrstream()
086dde52 +0x12:  nop
086dde53 +0x13:  nop
086dde54 +0x14:  nop
086dde55 +0x15:  nop
086dde56 +0x16:  nop
086dde57 +0x17:  nop
086dde58 +0x18:  nop
086dde59 +0x19:  nop
086dde5a +0x1a:  nop
086dde5b +0x1b:  nop
086dde5c +0x1c:  nop
086dde5d +0x1d:  nop
086dde5e +0x1e:  nop
086dde5f +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86dde40

/* virtual thunk to std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  ~ostrstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
