# ~ctype_byname

`_ZNSt12ctype_bynameIcED0Ev`

`std::ctype_byname<char>::~ctype_byname()`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<char>` | `0x0872f350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f350  _ZNSt12ctype_bynameIcED0Ev
#           std::ctype_byname<char>::~ctype_byname()
# range [0x0872f350, 0x0872f36f]
0872f350 +0x00:  push   %ebp
0872f351 +0x01:  mov    %esp,%ebp
0872f353 +0x03:  push   %ebx
0872f354 +0x04:  sub    $0x14,%esp
0872f357 +0x07:  mov    0x8(%ebp),%ebx
0872f35a +0x0a:  mov    %ebx,(%esp)
0872f35d +0x0d:  call   0872f330 <_ZNSt12ctype_bynameIcED1Ev>  ; std::ctype_byname<char>::~ctype_byname()
0872f362 +0x12:  mov    %ebx,0x8(%ebp)
0872f365 +0x15:  add    $0x14,%esp
0872f368 +0x18:  pop    %ebx
0872f369 +0x19:  pop    %ebp
0872f36a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872f36f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype_byname<char>::~ctype_byname @ 0x872f350

/* std::ctype_byname<char>::~ctype_byname() */

void __thiscall std::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  ~ctype_byname(this);
  operator_delete(this);
  return;
}
```
