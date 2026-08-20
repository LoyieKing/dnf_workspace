# Update

`_ZNK23CMission_winning_streak6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_winning_streak::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_streak` | `0x085e3692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3692  _ZNK23CMission_winning_streak6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_winning_streak::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3692, 0x085e36fb]
085e3692 +0x00:  push   %ebp
085e3693 +0x01:  mov    %esp,%ebp
085e3695 +0x03:  mov    0x10(%ebp),%eax
085e3698 +0x06:  movzwl 0x1(%eax),%eax
085e369c +0x0a:  movzwl %ax,%eax
085e369f +0x0d:  and    $0x1,%eax
085e36a2 +0x10:  test   %al,%al
085e36a4 +0x12:  je     085e36e5 <+0x53>
085e36a6 +0x14:  mov    0xc(%ebp),%eax
085e36a9 +0x17:  movzwl 0x6(%eax),%eax
085e36ad +0x1b:  lea    -0x1(%eax),%edx
085e36b0 +0x1e:  mov    0xc(%ebp),%eax
085e36b3 +0x21:  mov    %dx,0x6(%eax)
085e36b7 +0x25:  mov    0xc(%ebp),%eax
085e36ba +0x28:  movzwl 0x6(%eax),%eax
085e36be +0x2c:  test   %ax,%ax
085e36c1 +0x2f:  jg     085e36f4 <+0x62>
085e36c3 +0x31:  mov    0xc(%ebp),%eax
085e36c6 +0x34:  movzwl 0x4(%eax),%eax
085e36ca +0x38:  lea    0x1(%eax),%edx
085e36cd +0x3b:  mov    0xc(%ebp),%eax
085e36d0 +0x3e:  mov    %dx,0x4(%eax)
085e36d4 +0x42:  mov    0x8(%ebp),%eax
085e36d7 +0x45:  mov    0x40(%eax),%eax
085e36da +0x48:  mov    %eax,%edx
085e36dc +0x4a:  mov    0xc(%ebp),%eax
085e36df +0x4d:  mov    %dx,0x6(%eax)
085e36e3 +0x51:  jmp    085e36f4 <+0x62>
085e36e5 +0x53:  mov    0x8(%ebp),%eax
085e36e8 +0x56:  mov    0x40(%eax),%eax
085e36eb +0x59:  mov    %eax,%edx
085e36ed +0x5b:  mov    0xc(%ebp),%eax
085e36f0 +0x5e:  mov    %dx,0x6(%eax)
085e36f4 +0x62:  mov    $0x1,%eax
085e36f9 +0x67:  pop    %ebp
085e36fa +0x68:  ret
085e36fb +0x69:  nop
```

## 反编译 C

```c
// CMission_winning_streak::Update @ 0x85e3692

/* CMission_winning_streak::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_winning_streak::Update
          (CMission_winning_streak *this,MissionInfo *param_1,
          MissionClearCondition_Parameter *param_2)

{
  if ((*(ushort *)(param_2 + 1) & 1) == 0) {
    *(short *)(param_1 + 6) = (short)*(undefined4 *)(this + 0x40);
  }
  else {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
    if (*(short *)(param_1 + 6) < 1) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 6) = (short)*(undefined4 *)(this + 0x40);
    }
  }
  return 1;
}
```
