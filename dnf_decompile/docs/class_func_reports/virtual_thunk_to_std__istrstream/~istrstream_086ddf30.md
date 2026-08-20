# ~istrstream

`_ZTv0_n12_NSt10istrstreamD0Ev`

`virtual thunk to std::istrstream::~istrstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::istrstream` | `0x086ddf30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddf30  _ZTv0_n12_NSt10istrstreamD0Ev
#           virtual thunk to std::istrstream::~istrstream()
# range [0x086ddf30, 0x086ddf4f]
086ddf30 +0x00:  mov    0x4(%esp),%eax
086ddf34 +0x04:  mov    (%eax),%ecx
086ddf36 +0x06:  add    -0xc(%ecx),%eax
086ddf39 +0x09:  mov    %eax,0x4(%esp)
086ddf3d +0x0d:  jmp    086ddf50 <_ZNSt10istrstreamD0Ev>  ; std::istrstream::~istrstream()
086ddf42 +0x12:  nop
086ddf43 +0x13:  nop
086ddf44 +0x14:  nop
086ddf45 +0x15:  nop
086ddf46 +0x16:  nop
086ddf47 +0x17:  nop
086ddf48 +0x18:  nop
086ddf49 +0x19:  nop
086ddf4a +0x1a:  nop
086ddf4b +0x1b:  nop
086ddf4c +0x1c:  nop
086ddf4d +0x1d:  nop
086ddf4e +0x1e:  nop
086ddf4f +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86ddf30

/* virtual thunk to std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  ~istrstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
