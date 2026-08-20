# getRestrictValue

`_ZN29CreateCharacterRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE`

`CreateCharacterRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816e0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e0a6  _ZN29CreateCharacterRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE
#           CreateCharacterRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)
# range [0x0816e0a6, 0x0816e0ab]
0816e0a6 +0x00:  push   %ebp
0816e0a7 +0x01:  mov    %esp,%ebp
0816e0a9 +0x03:  pop    %ebp
0816e0aa +0x04:  ret
0816e0ab +0x05:  nop
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::getRestrictValue @ 0x816e0a6

/* CreateCharacterRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void CreateCharacterRestrictPolicy::getRestrictValue(SigLoadRestrictPolicy *param_1)

{
  return;
}
```
