# endPolicy

`_ZN29CreateCharacterRestrictPolicy9endPolicyEv`

`CreateCharacterRestrictPolicy::endPolicy()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816dede` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816dede  _ZN29CreateCharacterRestrictPolicy9endPolicyEv
#           CreateCharacterRestrictPolicy::endPolicy()
# range [0x0816dede, 0x0816dee9]
0816dede +0x00:  push   %ebp
0816dedf +0x01:  mov    %esp,%ebp
0816dee1 +0x03:  mov    0x8(%ebp),%eax
0816dee4 +0x06:  movb   $0x0,0x4(%eax)
0816dee8 +0x0a:  pop    %ebp
0816dee9 +0x0b:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::endPolicy @ 0x816dede

/* CreateCharacterRestrictPolicy::endPolicy() */

void __thiscall CreateCharacterRestrictPolicy::endPolicy(CreateCharacterRestrictPolicy *this)

{
  this[4] = (CreateCharacterRestrictPolicy)0x0;
  return;
}
```
