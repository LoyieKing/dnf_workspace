# SetUserPtr

`_ZN17Secu_MonsterCheck10SetUserPtrEP5CUser`

`Secu_MonsterCheck::SetUserPtr(CUser*)`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827abec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827abec  _ZN17Secu_MonsterCheck10SetUserPtrEP5CUser
#           Secu_MonsterCheck::SetUserPtr(CUser*)
# range [0x0827abec, 0x0827abf9]
0827abec +0x00:  push   %ebp
0827abed +0x01:  mov    %esp,%ebp
0827abef +0x03:  mov    0x8(%ebp),%eax
0827abf2 +0x06:  mov    0xc(%ebp),%edx
0827abf5 +0x09:  mov    %edx,(%eax)
0827abf7 +0x0b:  pop    %ebp
0827abf8 +0x0c:  ret
0827abf9 +0x0d:  nop
```

## 反编译 C

```c
// Secu_MonsterCheck::SetUserPtr @ 0x827abec

/* Secu_MonsterCheck::SetUserPtr(CUser*) */

void __thiscall Secu_MonsterCheck::SetUserPtr(Secu_MonsterCheck *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}
```
