# ~codecvt

`_ZNSt7codecvtIwc11__mbstate_tED0Ev`

`std::codecvt<wchar_t, char, __mbstate_t>::~codecvt()`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x087260b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087260b0  _ZNSt7codecvtIwc11__mbstate_tED0Ev
#           std::codecvt<wchar_t, char, __mbstate_t>::~codecvt()
# range [0x087260b0, 0x087260cf]
087260b0 +0x00:  push   %ebp
087260b1 +0x01:  mov    %esp,%ebp
087260b3 +0x03:  push   %ebx
087260b4 +0x04:  sub    $0x14,%esp
087260b7 +0x07:  mov    0x8(%ebp),%ebx
087260ba +0x0a:  mov    %ebx,(%esp)
087260bd +0x0d:  call   08726060 <_ZNSt7codecvtIwc11__mbstate_tED1Ev>  ; std::codecvt<wchar_t, char, __mbstate_t>::~codecvt()
087260c2 +0x12:  mov    %ebx,0x8(%ebp)
087260c5 +0x15:  add    $0x14,%esp
087260c8 +0x18:  pop    %ebx
087260c9 +0x19:  pop    %ebp
087260ca +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087260cf +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x87260b0

/* std::codecvt<wchar_t, char, __mbstate_t>::~codecvt() */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::~codecvt(codecvt<wchar_t,char,__mbstate_t> *this)

{
  ~codecvt(this);
  operator_delete(this);
  return;
}
```
