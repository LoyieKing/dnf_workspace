# ~istrstream

`_ZNSt10istrstreamD0Ev`

`std::istrstream::~istrstream()`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086ddf50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddf50  _ZNSt10istrstreamD0Ev
#           std::istrstream::~istrstream()
# range [0x086ddf50, 0x086ddf6f]
086ddf50 +0x00:  push   %ebp
086ddf51 +0x01:  mov    %esp,%ebp
086ddf53 +0x03:  push   %ebx
086ddf54 +0x04:  sub    $0x14,%esp
086ddf57 +0x07:  mov    0x8(%ebp),%ebx
086ddf5a +0x0a:  mov    %ebx,(%esp)
086ddf5d +0x0d:  call   086ddea0 <_ZNSt10istrstreamD1Ev>  ; std::istrstream::~istrstream()
086ddf62 +0x12:  mov    %ebx,0x8(%ebp)
086ddf65 +0x15:  add    $0x14,%esp
086ddf68 +0x18:  pop    %ebx
086ddf69 +0x19:  pop    %ebp
086ddf6a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086ddf6f +0x1f:  nop
```

## 反编译 C

```c
// std::istrstream::~istrstream @ 0x86ddf50

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  ~istrstream(this);
  operator_delete(this);
  return;
}
```
