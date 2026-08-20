# dispatch_sig

`_ZN25TimerStartVillageAttacked12dispatch_sigEiij`

`TimerStartVillageAttacked::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStartVillageAttacked` | `0x08639042` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639042  _ZN25TimerStartVillageAttacked12dispatch_sigEiij
#           TimerStartVillageAttacked::dispatch_sig(int, int, unsigned int)
# range [0x08639042, 0x0863905b]
08639042 +0x00:  push   %ebp
08639043 +0x01:  mov    %esp,%ebp
08639045 +0x03:  sub    $0x18,%esp
08639048 +0x06:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0863904d +0x0b:  mov    %eax,(%esp)
08639050 +0x0e:  call   086b4a20 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv>  ; village_attacked::CVillageMonsterMgr::OnStartVillageAttacked()
08639055 +0x13:  mov    $0x1,%eax
0863905a +0x18:  leave
0863905b +0x19:  ret
```

## 反编译 C

```c
// TimerStartVillageAttacked::dispatch_sig @ 0x8639042

/* TimerStartVillageAttacked::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartVillageAttacked::dispatch_sig(int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(GlobalData::s_villageMonsterMgr);
  return 1;
}
```
