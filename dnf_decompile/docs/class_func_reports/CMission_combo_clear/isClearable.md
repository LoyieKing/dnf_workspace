# isClearable

`_ZNK20CMission_combo_clear11isClearableER11MissionInfoRb`

`CMission_combo_clear::isClearable(MissionInfo&, bool&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e452e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e452e  _ZNK20CMission_combo_clear11isClearableER11MissionInfoRb
#           CMission_combo_clear::isClearable(MissionInfo&, bool&) const
# range [0x085e452e, 0x085e4557]
085e452e +0x00:  push   %ebp
085e452f +0x01:  mov    %esp,%ebp
085e4531 +0x03:  mov    0xc(%ebp),%eax
085e4534 +0x06:  movzwl 0x4(%eax),%eax
085e4538 +0x0a:  test   %ax,%ax
085e453b +0x0d:  jne    085e4550 <+0x22>
085e453d +0x0f:  mov    0xc(%ebp),%eax
085e4540 +0x12:  movzwl 0x6(%eax),%eax
085e4544 +0x16:  test   %ax,%ax
085e4547 +0x19:  jne    085e4550 <+0x22>
085e4549 +0x1b:  mov    $0x1,%eax
085e454e +0x20:  jmp    085e4555 <+0x27>
085e4550 +0x22:  mov    $0x0,%eax
085e4555 +0x27:  pop    %ebp
085e4556 +0x28:  ret
085e4557 +0x29:  nop
```

## 反编译 C

```c
// CMission_combo_clear::isClearable @ 0x85e452e

/* CMission_combo_clear::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_combo_clear::isClearable(MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_2 + 4) == 0) && (*(short *)(param_2 + 6) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
