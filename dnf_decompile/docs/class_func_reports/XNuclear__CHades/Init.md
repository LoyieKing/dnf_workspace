# Init

`_ZN8XNuclear6CHades4InitEP5CUser`

`XNuclear::CHades::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b91e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b91e8  _ZN8XNuclear6CHades4InitEP5CUser
#           XNuclear::CHades::Init(CUser*)
# range [0x084b91e8, 0x084b91ff]
084b91e8 +0x00:  push   %ebp
084b91e9 +0x01:  mov    %esp,%ebp
084b91eb +0x03:  mov    0x8(%ebp),%eax
084b91ee +0x06:  mov    0xc(%ebp),%edx
084b91f1 +0x09:  mov    %edx,0x20(%eax)
084b91f4 +0x0c:  mov    0x8(%ebp),%eax
084b91f7 +0x0f:  movl   $0x0,0x1c(%eax)
084b91fe +0x16:  pop    %ebp
084b91ff +0x17:  ret
```

## 反编译 C

```c
// XNuclear::CHades::Init @ 0x84b91e8

/* XNuclear::CHades::Init(CUser*) */

void __thiscall XNuclear::CHades::Init(CHades *this,CUser *param_1)

{
  *(CUser **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}
```
