# _canUpdate

`_ZNK22CMission_winning_count10_canUpdateERK31MissionClearCondition_Parameter`

`CMission_winning_count::_canUpdate(MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_count` | `0x085e35d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e35d6  _ZNK22CMission_winning_count10_canUpdateERK31MissionClearCondition_Parameter
#           CMission_winning_count::_canUpdate(MissionClearCondition_Parameter const&) const
# range [0x085e35d6, 0x085e3619]
085e35d6 +0x00:  push   %ebp
085e35d7 +0x01:  mov    %esp,%ebp
085e35d9 +0x03:  sub    $0x28,%esp
085e35dc +0x06:  mov    0xc(%ebp),%eax
085e35df +0x09:  movzwl 0x1(%eax),%eax
085e35e3 +0x0d:  movzwl %ax,%eax
085e35e6 +0x10:  mov    %eax,0x4(%esp)
085e35ea +0x14:  lea    -0xc(%ebp),%eax
085e35ed +0x17:  mov    %eax,(%esp)
085e35f0 +0x1a:  call   085e7ee0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1668>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1668
085e35f5 +0x1f:  movl   $0x1,0x4(%esp)
085e35fd +0x27:  mov    -0xc(%ebp),%eax
085e3600 +0x2a:  mov    %eax,(%esp)
085e3603 +0x2d:  call   08a5aa4e <_Z19is_Victory_in_a_rowSt6bitsetILj32EEs>  ; is_Victory_in_a_row(std::bitset<32u>, short)
085e3608 +0x32:  test   %al,%al
085e360a +0x34:  je     085e3613 <+0x3d>
085e360c +0x36:  mov    $0x1,%eax
085e3611 +0x3b:  jmp    085e3618 <+0x42>
085e3613 +0x3d:  mov    $0x0,%eax
085e3618 +0x42:  leave
085e3619 +0x43:  ret
```

## 反编译 C

```c
// CMission_winning_count::_canUpdate @ 0x85e35d6

/* CMission_winning_count::_canUpdate(MissionClearCondition_Parameter const&) const */

bool __thiscall
CMission_winning_count::_canUpdate
          (CMission_winning_count *this,MissionClearCondition_Parameter *param_1)

{
  char cVar1;
  undefined4 local_10 [3];
  
  std::bitset<32u>::bitset((bitset<32u> *)local_10,(uint)*(ushort *)(param_1 + 1));
  cVar1 = is_Victory_in_a_row(local_10[0],1);
  return cVar1 != '\0';
}
```
