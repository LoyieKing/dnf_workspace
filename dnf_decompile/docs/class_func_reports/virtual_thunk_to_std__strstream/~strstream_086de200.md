# ~strstream

`_ZTv0_n12_NSt9strstreamD0Ev`

`virtual thunk to std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `virtual thunk to std::strstream` | `0x086de200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de200  _ZTv0_n12_NSt9strstreamD0Ev
#           virtual thunk to std::strstream::~strstream()
# range [0x086de200, 0x086de21f]
086de200 +0x00:  mov    0x4(%esp),%eax
086de204 +0x04:  mov    (%eax),%ecx
086de206 +0x06:  add    -0xc(%ecx),%eax
086de209 +0x09:  mov    %eax,0x4(%esp)
086de20d +0x0d:  jmp    086de230 <_ZNSt9strstreamD0Ev>  ; std::strstream::~strstream()
086de212 +0x12:  nop
086de213 +0x13:  nop
086de214 +0x14:  nop
086de215 +0x15:  nop
086de216 +0x16:  nop
086de217 +0x17:  nop
086de218 +0x18:  nop
086de219 +0x19:  nop
086de21a +0x1a:  nop
086de21b +0x1b:  nop
086de21c +0x1c:  nop
086de21d +0x1d:  nop
086de21e +0x1e:  nop
086de21f +0x1f:  nop
```

## 反编译 C

```c
// <global>::virtual @ 0x86de200

/* virtual thunk to std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this + *(int *)(*(int *)this + -0xc));
  return;
}
```
