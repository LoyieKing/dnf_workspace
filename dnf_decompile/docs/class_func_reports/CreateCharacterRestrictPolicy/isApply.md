# isApply

`_ZN29CreateCharacterRestrictPolicy7isApplyEv`

`CreateCharacterRestrictPolicy::isApply()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816deea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816deea  _ZN29CreateCharacterRestrictPolicy7isApplyEv
#           CreateCharacterRestrictPolicy::isApply()
# range [0x0816deea, 0x0816def5]
0816deea +0x00:  push   %ebp
0816deeb +0x01:  mov    %esp,%ebp
0816deed +0x03:  mov    0x8(%ebp),%eax
0816def0 +0x06:  movzbl 0x4(%eax),%eax
0816def4 +0x0a:  pop    %ebp
0816def5 +0x0b:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::isApply @ 0x816deea

/* CreateCharacterRestrictPolicy::isApply() */

CreateCharacterRestrictPolicy __thiscall
CreateCharacterRestrictPolicy::isApply(CreateCharacterRestrictPolicy *this)

{
  return this[4];
}
```
