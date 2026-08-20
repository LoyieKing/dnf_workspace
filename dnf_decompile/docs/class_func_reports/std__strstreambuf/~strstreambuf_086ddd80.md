# ~strstreambuf

`_ZNSt12strstreambufD0Ev`

`std::strstreambuf::~strstreambuf()`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086ddd80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddd80  _ZNSt12strstreambufD0Ev
#           std::strstreambuf::~strstreambuf()
# range [0x086ddd80, 0x086ddd9f]
086ddd80 +0x00:  push   %ebp
086ddd81 +0x01:  mov    %esp,%ebp
086ddd83 +0x03:  push   %ebx
086ddd84 +0x04:  sub    $0x14,%esp
086ddd87 +0x07:  mov    0x8(%ebp),%ebx
086ddd8a +0x0a:  mov    %ebx,(%esp)
086ddd8d +0x0d:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ddd92 +0x12:  mov    %ebx,0x8(%ebp)
086ddd95 +0x15:  add    $0x14,%esp
086ddd98 +0x18:  pop    %ebx
086ddd99 +0x19:  pop    %ebp
086ddd9a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086ddd9f +0x1f:  nop
```

## 反编译 C

```c
// std::strstreambuf::~strstreambuf @ 0x86ddd80

/* std::strstreambuf::~strstreambuf() */

void __thiscall std::strstreambuf::~strstreambuf(strstreambuf *this)

{
  ~strstreambuf(this);
  operator_delete(this);
  return;
}
```
