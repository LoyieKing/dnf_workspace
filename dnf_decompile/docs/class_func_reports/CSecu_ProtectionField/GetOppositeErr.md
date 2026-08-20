# GetOppositeErr

`_ZN21CSecu_ProtectionField14GetOppositeErrEi`

`CSecu_ProtectionField::GetOppositeErr(int)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288140  _ZN21CSecu_ProtectionField14GetOppositeErrEi
#           CSecu_ProtectionField::GetOppositeErr(int)
# range [0x08288140, 0x082881a1]
08288140 +0x00:  push   %ebp
08288141 +0x01:  mov    %esp,%ebp
08288143 +0x03:  mov    0xc(%ebp),%eax
08288146 +0x06:  cmp    $0x88,%eax
0828814b +0x0b:  je     0828817f <+0x3f>
0828814d +0x0d:  cmp    $0x88,%eax
08288152 +0x12:  jg     08288165 <+0x25>
08288154 +0x14:  cmp    $0x7a,%eax
08288157 +0x17:  je     08288178 <+0x38>
08288159 +0x19:  cmp    $0x7b,%eax
0828815c +0x1c:  je     08288186 <+0x46>
0828815e +0x1e:  cmp    $0x72,%eax
08288161 +0x21:  je     08288194 <+0x54>
08288163 +0x23:  jmp    0828819b <+0x5b>
08288165 +0x25:  cmp    $0x89,%eax
0828816a +0x2a:  je     0828818d <+0x4d>
0828816c +0x2c:  sub    $0xe4,%eax
08288171 +0x31:  cmp    $0x1,%eax
08288174 +0x34:  ja     0828819b <+0x5b>
08288176 +0x36:  jmp    08288194 <+0x54>
08288178 +0x38:  mov    $0xee,%eax
0828817d +0x3d:  jmp    082881a0 <+0x60>
0828817f +0x3f:  mov    $0xec,%eax
08288184 +0x44:  jmp    082881a0 <+0x60>
08288186 +0x46:  mov    $0x7c,%eax
0828818b +0x4b:  jmp    082881a0 <+0x60>
0828818d +0x4d:  mov    $0x8a,%eax
08288192 +0x52:  jmp    082881a0 <+0x60>
08288194 +0x54:  mov    $0x73,%eax
08288199 +0x59:  jmp    082881a0 <+0x60>
0828819b +0x5b:  mov    $0x1,%eax
082881a0 +0x60:  pop    %ebp
082881a1 +0x61:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::GetOppositeErr @ 0x8288140

/* CSecu_ProtectionField::GetOppositeErr(int) */

undefined4 __thiscall CSecu_ProtectionField::GetOppositeErr(CSecu_ProtectionField *this,int param_1)

{
  if (param_1 == 0x88) {
    return 0xec;
  }
  if (param_1 < 0x89) {
    if (param_1 == 0x7a) {
      return 0xee;
    }
    if (param_1 == 0x7b) {
      return 0x7c;
    }
    if (param_1 == 0x72) {
      return 0x73;
    }
  }
  else {
    if (param_1 == 0x89) {
      return 0x8a;
    }
    if (param_1 - 0xe4U < 2) {
      return 0x73;
    }
  }
  return 1;
}
```
