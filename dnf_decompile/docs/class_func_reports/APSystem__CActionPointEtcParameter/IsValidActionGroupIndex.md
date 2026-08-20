# IsValidActionGroupIndex

`_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE`

`APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointEtcParameter` | `0x08894956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08894956  _ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE
#           APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex)
# range [0x08894956, 0x08894975]
08894956 +0x00:  push   %ebp
08894957 +0x01:  mov    %esp,%ebp
08894959 +0x03:  mov    0x8(%ebp),%eax
0889495c +0x06:  test   %eax,%eax
0889495e +0x08:  jle    0889496f <+0x19>
08894960 +0x0a:  mov    0x8(%ebp),%eax
08894963 +0x0d:  cmp    $0x2d,%eax
08894966 +0x10:  jg     0889496f <+0x19>
08894968 +0x12:  mov    $0x1,%eax
0889496d +0x17:  jmp    08894974 <+0x1e>
0889496f +0x19:  mov    $0x0,%eax
08894974 +0x1e:  pop    %ebp
08894975 +0x1f:  ret
```

## 反编译 C

```c
// APSystem::CActionPointEtcParameter::IsValidActionGroupIndex @ 0x8894956

/* APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex) */

undefined4 APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (0x2d < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
