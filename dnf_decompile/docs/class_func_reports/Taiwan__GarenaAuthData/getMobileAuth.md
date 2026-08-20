# getMobileAuth

`_ZN6Taiwan14GarenaAuthData13getMobileAuthEv`

`Taiwan::GarenaAuthData::getMobileAuth()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08173022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173022  _ZN6Taiwan14GarenaAuthData13getMobileAuthEv
#           Taiwan::GarenaAuthData::getMobileAuth()
# range [0x08173022, 0x08173033]
08173022 +0x00:  push   %ebp
08173023 +0x01:  mov    %esp,%ebp
08173025 +0x03:  mov    0x8(%ebp),%eax
08173028 +0x06:  movzbl 0x2c(%eax),%eax
0817302c +0x0a:  cmp    $0x1,%al
0817302e +0x0c:  sete   %al
08173031 +0x0f:  pop    %ebp
08173032 +0x10:  ret
08173033 +0x11:  nop
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getMobileAuth @ 0x8173022

/* Taiwan::GarenaAuthData::getMobileAuth() */

bool __thiscall Taiwan::GarenaAuthData::getMobileAuth(GarenaAuthData *this)

{
  return this[0x2c] == (GarenaAuthData)0x1;
}
```
