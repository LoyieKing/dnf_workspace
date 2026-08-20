# ~moneypunct

`_ZNSt10moneypunctIwLb0EED0Ev`

`std::moneypunct<wchar_t, false>::~moneypunct()`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, false>` | `0x0871fcd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fcd0  _ZNSt10moneypunctIwLb0EED0Ev
#           std::moneypunct<wchar_t, false>::~moneypunct()
# range [0x0871fcd0, 0x0871fcef]
0871fcd0 +0x00:  push   %ebp
0871fcd1 +0x01:  mov    %esp,%ebp
0871fcd3 +0x03:  push   %ebx
0871fcd4 +0x04:  sub    $0x14,%esp
0871fcd7 +0x07:  mov    0x8(%ebp),%ebx
0871fcda +0x0a:  mov    %ebx,(%esp)
0871fcdd +0x0d:  call   0871fc10 <_ZNSt10moneypunctIwLb0EED1Ev>  ; std::moneypunct<wchar_t, false>::~moneypunct()
0871fce2 +0x12:  mov    %ebx,0x8(%ebp)
0871fce5 +0x15:  add    $0x14,%esp
0871fce8 +0x18:  pop    %ebx
0871fce9 +0x19:  pop    %ebp
0871fcea +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0871fcef +0x1f:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x871fcd0

/* std::moneypunct<wchar_t, false>::~moneypunct() */

void __thiscall std::moneypunct<wchar_t,false>::~moneypunct(moneypunct<wchar_t,false> *this)

{
  ~moneypunct(this);
  operator_delete(this);
  return;
}
```
