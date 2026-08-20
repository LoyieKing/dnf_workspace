# _onTimerProcess

`_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj`

`WongWork::CBossTower::_onTimerProcess(TIMER_MESSAGE, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142cde  _ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj
#           WongWork::CBossTower::_onTimerProcess(TIMER_MESSAGE, unsigned int)
# range [0x08142cde, 0x08142d23]
08142cde +0x00:  push   %ebp
08142cdf +0x01:  mov    %esp,%ebp
08142ce1 +0x03:  sub    $0x18,%esp
08142ce4 +0x06:  mov    0xc(%ebp),%eax
08142ce7 +0x09:  cmp    $0xa4,%eax
08142cec +0x0e:  je     08142d09 <+0x2b>
08142cee +0x10:  cmp    $0xa5,%eax
08142cf3 +0x15:  je     08142d16 <+0x38>
08142cf5 +0x17:  cmp    $0xa3,%eax
08142cfa +0x1c:  jne    08142d21 <+0x43>
08142cfc +0x1e:  mov    0x8(%ebp),%eax
08142cff +0x21:  mov    %eax,(%esp)
08142d02 +0x24:  call   08144508 <_ZN8WongWork10CBossTower16onClearBossTowerEv>  ; WongWork::CBossTower::onClearBossTower()
08142d07 +0x29:  jmp    08142d21 <+0x43>
08142d09 +0x2b:  mov    0x8(%ebp),%eax
08142d0c +0x2e:  mov    %eax,(%esp)
08142d0f +0x31:  call   08144fca <_ZN8WongWork10CBossTower15onReturnVillageEv>  ; WongWork::CBossTower::onReturnVillage()
08142d14 +0x36:  jmp    08142d21 <+0x43>
08142d16 +0x38:  mov    0x8(%ebp),%eax
08142d19 +0x3b:  mov    %eax,(%esp)
08142d1c +0x3e:  call   0814512a <_ZN8WongWork10CBossTower17onReadyTimerCheckEv>  ; WongWork::CBossTower::onReadyTimerCheck()
08142d21 +0x43:  leave
08142d22 +0x44:  ret
08142d23 +0x45:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::_onTimerProcess @ 0x8142cde

/* WongWork::CBossTower::_onTimerProcess(TIMER_MESSAGE, unsigned int) */

void WongWork::CBossTower::_onTimerProcess(CBossTower *param_1,int param_2)

{
  if (param_2 == 0xa4) {
    onReturnVillage();
  }
  else if (param_2 == 0xa5) {
    onReadyTimerCheck(param_1);
  }
  else if (param_2 == 0xa3) {
    onClearBossTower(param_1);
  }
  return;
}
```
