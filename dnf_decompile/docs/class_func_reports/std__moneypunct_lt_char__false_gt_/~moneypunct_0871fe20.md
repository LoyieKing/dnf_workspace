# ~moneypunct

`_ZNSt10moneypunctIcLb0EED0Ev`

`std::moneypunct<char, false>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, false>` | `0x0871fe20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fe20  _ZNSt10moneypunctIcLb0EED0Ev
#           std::moneypunct<char, false>::~moneypunct()
# range [0x0871fe20, 0x0871fe3f]
0871fe20 +0x00:  push   %ebp
0871fe21 +0x01:  mov    %esp,%ebp
0871fe23 +0x03:  push   %ebx
0871fe24 +0x04:  sub    $0x14,%esp
0871fe27 +0x07:  mov    0x8(%ebp),%ebx
0871fe2a +0x0a:  mov    %ebx,(%esp)
0871fe2d +0x0d:  call   0871fdd0 <_ZNSt10moneypunctIcLb0EED1Ev>  ; std::moneypunct<char, false>::~moneypunct()
0871fe32 +0x12:  mov    %ebx,0x8(%ebp)
0871fe35 +0x15:  add    $0x14,%esp
0871fe38 +0x18:  pop    %ebx
0871fe39 +0x19:  pop    %ebp
0871fe3a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0871fe3f +0x1f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x871fe20

/* std::moneypunct<char, false>::~moneypunct() */

void __thiscall std::moneypunct<char,false>::~moneypunct(moneypunct<char,false> *this)

{
  ~moneypunct(this);
  operator_delete(this);
  return;
}
```
