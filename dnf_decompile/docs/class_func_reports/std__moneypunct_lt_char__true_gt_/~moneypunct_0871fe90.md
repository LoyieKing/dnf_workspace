# ~moneypunct

`_ZNSt10moneypunctIcLb1EED0Ev`

`std::moneypunct<char, true>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<char, true>` | `0x0871fe90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fe90  _ZNSt10moneypunctIcLb1EED0Ev
#           std::moneypunct<char, true>::~moneypunct()
# range [0x0871fe90, 0x0871feaf]
0871fe90 +0x00:  push   %ebp
0871fe91 +0x01:  mov    %esp,%ebp
0871fe93 +0x03:  push   %ebx
0871fe94 +0x04:  sub    $0x14,%esp
0871fe97 +0x07:  mov    0x8(%ebp),%ebx
0871fe9a +0x0a:  mov    %ebx,(%esp)
0871fe9d +0x0d:  call   0871fe40 <_ZNSt10moneypunctIcLb1EED1Ev>  ; std::moneypunct<char, true>::~moneypunct()
0871fea2 +0x12:  mov    %ebx,0x8(%ebp)
0871fea5 +0x15:  add    $0x14,%esp
0871fea8 +0x18:  pop    %ebx
0871fea9 +0x19:  pop    %ebp
0871feaa +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0871feaf +0x1f:  nop
```

## 反编译 C

```c
// std::moneypunct<char, @ 0x871fe90

/* std::moneypunct<char, true>::~moneypunct() */

void __thiscall std::moneypunct<char,true>::~moneypunct(moneypunct<char,true> *this)

{
  ~moneypunct(this);
  operator_delete(this);
  return;
}
```
