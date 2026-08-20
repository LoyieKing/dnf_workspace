# ~moneypunct

`_ZNSt10moneypunctIwLb1EED0Ev`

`std::moneypunct<wchar_t, true>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, true>` | `0x0871fdb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fdb0  _ZNSt10moneypunctIwLb1EED0Ev
#           std::moneypunct<wchar_t, true>::~moneypunct()
# range [0x0871fdb0, 0x0871fdcf]
0871fdb0 +0x00:  push   %ebp
0871fdb1 +0x01:  mov    %esp,%ebp
0871fdb3 +0x03:  push   %ebx
0871fdb4 +0x04:  sub    $0x14,%esp
0871fdb7 +0x07:  mov    0x8(%ebp),%ebx
0871fdba +0x0a:  mov    %ebx,(%esp)
0871fdbd +0x0d:  call   0871fcf0 <_ZNSt10moneypunctIwLb1EED1Ev>  ; std::moneypunct<wchar_t, true>::~moneypunct()
0871fdc2 +0x12:  mov    %ebx,0x8(%ebp)
0871fdc5 +0x15:  add    $0x14,%esp
0871fdc8 +0x18:  pop    %ebx
0871fdc9 +0x19:  pop    %ebp
0871fdca +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0871fdcf +0x1f:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x871fdb0

/* std::moneypunct<wchar_t, true>::~moneypunct() */

void __thiscall std::moneypunct<wchar_t,true>::~moneypunct(moneypunct<wchar_t,true> *this)

{
  ~moneypunct(this);
  operator_delete(this);
  return;
}
```
