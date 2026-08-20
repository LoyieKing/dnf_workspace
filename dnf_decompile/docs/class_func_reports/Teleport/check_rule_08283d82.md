# check_rule

`_ZN8Teleport10check_ruleERK15STCheckRuleData`

`Teleport::check_rule(STCheckRuleData const&)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283d82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283d82  _ZN8Teleport10check_ruleERK15STCheckRuleData
#           Teleport::check_rule(STCheckRuleData const&)
# range [0x08283d82, 0x08283d97]
08283d82 +0x00:  push   %ebp
08283d83 +0x01:  mov    %esp,%ebp
08283d85 +0x03:  sub    $0x18,%esp
08283d88 +0x06:  mov    0xc(%ebp),%eax
08283d8b +0x09:  mov    0x4(%eax),%eax
08283d8e +0x0c:  mov    %eax,(%esp)
08283d91 +0x0f:  call   08283c5a <_ZN8Teleport10check_ruleEP5CUser>  ; Teleport::check_rule(CUser*)
08283d96 +0x14:  leave
08283d97 +0x15:  ret
```

## 反编译 C

```c
// Teleport::check_rule @ 0x8283d82

/* Teleport::check_rule(STCheckRuleData const&) */

void __thiscall Teleport::check_rule(Teleport *this,STCheckRuleData *param_1)

{
  check_rule(*(CUser **)(param_1 + 4));
  return;
}
```
