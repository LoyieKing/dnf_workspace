# check_rule

`_ZN12NPC_Teleport10check_ruleERK15STCheckRuleData`

`NPC_Teleport::check_rule(STCheckRuleData const&)`

| 类 | 地址 |
|---|---|
| `NPC_Teleport` | `0x082840f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082840f6  _ZN12NPC_Teleport10check_ruleERK15STCheckRuleData
#           NPC_Teleport::check_rule(STCheckRuleData const&)
# range [0x082840f6, 0x08284123]
082840f6 +0x00:  push   %ebp
082840f7 +0x01:  mov    %esp,%ebp
082840f9 +0x03:  sub    $0x28,%esp
082840fc +0x06:  mov    0x8(%ebp),%eax
082840ff +0x09:  mov    0xc(%ebp),%edx
08284102 +0x0c:  mov    %edx,0x4(%esp)
08284106 +0x10:  mov    %eax,(%esp)
08284109 +0x13:  call   08283d82 <_ZN8Teleport10check_ruleERK15STCheckRuleData>  ; Teleport::check_rule(STCheckRuleData const&)
0828410e +0x18:  mov    %eax,-0xc(%ebp)
08284111 +0x1b:  cmpl   $0x0,-0xc(%ebp)
08284115 +0x1f:  je     0828411c <+0x26>
08284117 +0x21:  mov    -0xc(%ebp),%eax
0828411a +0x24:  jmp    08284121 <+0x2b>
0828411c +0x26:  mov    $0x0,%eax
08284121 +0x2b:  leave
08284122 +0x2c:  ret
08284123 +0x2d:  nop
```

## 反编译 C

```c
// NPC_Teleport::check_rule @ 0x82840f6

/* NPC_Teleport::check_rule(STCheckRuleData const&) */

int __thiscall NPC_Teleport::check_rule(NPC_Teleport *this,STCheckRuleData *param_1)

{
  int iVar1;
  
  iVar1 = Teleport::check_rule((Teleport *)this,param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}
```
