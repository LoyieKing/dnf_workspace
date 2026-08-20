# dispatch_sig

`_ZN29TimerVillageMonsterUpdateRate12dispatch_sigEiij`

`TimerVillageMonsterUpdateRate::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerVillageMonsterUpdateRate` | `0x08639000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639000  _ZN29TimerVillageMonsterUpdateRate12dispatch_sigEiij
#           TimerVillageMonsterUpdateRate::dispatch_sig(int, int, unsigned int)
# range [0x08639000, 0x08639019]
08639000 +0x00:  push   %ebp
08639001 +0x01:  mov    %esp,%ebp
08639003 +0x03:  sub    $0x18,%esp
08639006 +0x06:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0863900b +0x0b:  mov    %eax,(%esp)
0863900e +0x0e:  call   086b44fc <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv>  ; village_attacked::CVillageMonsterMgr::OnRunVillageMonster()
08639013 +0x13:  mov    $0x1,%eax
08639018 +0x18:  leave
08639019 +0x19:  ret
```

## 反编译 C

```c
// TimerVillageMonsterUpdateRate::dispatch_sig @ 0x8639000

/* TimerVillageMonsterUpdateRate::dispatch_sig(int, int, unsigned int) */

undefined4 TimerVillageMonsterUpdateRate::dispatch_sig(int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnRunVillageMonster(GlobalData::s_villageMonsterMgr);
  return 1;
}
```
