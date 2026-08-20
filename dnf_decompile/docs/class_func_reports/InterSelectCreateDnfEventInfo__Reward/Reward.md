# Reward

`_ZN29InterSelectCreateDnfEventInfo6RewardC1Eib`

`InterSelectCreateDnfEventInfo::Reward::Reward(int, bool)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfEventInfo::Reward` | `0x08160c4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160c4a  _ZN29InterSelectCreateDnfEventInfo6RewardC1Eib
#           InterSelectCreateDnfEventInfo::Reward::Reward(int, bool)
# range [0x08160c4a, 0x08160c6d]
08160c4a +0x00:  push   %ebp
08160c4b +0x01:  mov    %esp,%ebp
08160c4d +0x03:  sub    $0x4,%esp
08160c50 +0x06:  mov    0x10(%ebp),%eax
08160c53 +0x09:  mov    %al,-0x4(%ebp)
08160c56 +0x0c:  mov    0xc(%ebp),%eax
08160c59 +0x0f:  mov    %eax,%edx
08160c5b +0x11:  mov    0x8(%ebp),%eax
08160c5e +0x14:  mov    %dx,(%eax)
08160c61 +0x17:  mov    0x8(%ebp),%eax
08160c64 +0x1a:  movzbl -0x4(%ebp),%edx
08160c68 +0x1e:  mov    %dl,0x2(%eax)
08160c6b +0x21:  leave
08160c6c +0x22:  ret
08160c6d +0x23:  nop
```

## 反编译 C

```c
// InterSelectCreateDnfEventInfo::Reward::Reward @ 0x8160c4a

/* InterSelectCreateDnfEventInfo::Reward::Reward(int, bool) */

void __thiscall InterSelectCreateDnfEventInfo::Reward::Reward(Reward *this,int param_1,bool param_2)

{
  *(short *)this = (short)param_1;
  this[2] = (Reward)param_2;
  return;
}
```
