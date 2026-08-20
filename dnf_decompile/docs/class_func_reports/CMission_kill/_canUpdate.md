# _canUpdate

`_ZNK13CMission_kill10_canUpdateERK31MissionClearCondition_Parameter`

`CMission_kill::_canUpdate(MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill` | `0x085e3bcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3bcc  _ZNK13CMission_kill10_canUpdateERK31MissionClearCondition_Parameter
#           CMission_kill::_canUpdate(MissionClearCondition_Parameter const&) const
# range [0x085e3bcc, 0x085e3bed]
085e3bcc +0x00:  push   %ebp
085e3bcd +0x01:  mov    %esp,%ebp
085e3bcf +0x03:  mov    0xc(%ebp),%eax
085e3bd2 +0x06:  mov    0x3(%eax),%edx
085e3bd5 +0x09:  mov    0x8(%ebp),%eax
085e3bd8 +0x0c:  mov    0x40(%eax),%eax
085e3bdb +0x0f:  cmp    %eax,%edx
085e3bdd +0x11:  jl     085e3be6 <+0x1a>
085e3bdf +0x13:  mov    $0x1,%eax
085e3be4 +0x18:  jmp    085e3beb <+0x1f>
085e3be6 +0x1a:  mov    $0x0,%eax
085e3beb +0x1f:  pop    %ebp
085e3bec +0x20:  ret
085e3bed +0x21:  nop
```

## 反编译 C

```c
// CMission_kill::_canUpdate @ 0x85e3bcc

/* CMission_kill::_canUpdate(MissionClearCondition_Parameter const&) const */

bool __thiscall
CMission_kill::_canUpdate(CMission_kill *this,MissionClearCondition_Parameter *param_1)

{
  return *(int *)(this + 0x40) <= *(int *)(param_1 + 3);
}
```
