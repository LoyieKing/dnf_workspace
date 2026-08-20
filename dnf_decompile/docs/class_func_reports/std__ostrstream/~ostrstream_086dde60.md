# ~ostrstream

`_ZNSt10ostrstreamD0Ev`

`std::ostrstream::~ostrstream()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dde60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dde60  _ZNSt10ostrstreamD0Ev
#           std::ostrstream::~ostrstream()
# range [0x086dde60, 0x086dde7f]
086dde60 +0x00:  push   %ebp
086dde61 +0x01:  mov    %esp,%ebp
086dde63 +0x03:  push   %ebx
086dde64 +0x04:  sub    $0x14,%esp
086dde67 +0x07:  mov    0x8(%ebp),%ebx
086dde6a +0x0a:  mov    %ebx,(%esp)
086dde6d +0x0d:  call   086dddc0 <_ZNSt10ostrstreamD1Ev>  ; std::ostrstream::~ostrstream()
086dde72 +0x12:  mov    %ebx,0x8(%ebp)
086dde75 +0x15:  add    $0x14,%esp
086dde78 +0x18:  pop    %ebx
086dde79 +0x19:  pop    %ebp
086dde7a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dde7f +0x1f:  nop
```

## 反编译 C

```c
// std::ostrstream::~ostrstream @ 0x86dde60

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  ~ostrstream(this);
  operator_delete(this);
  return;
}
```
