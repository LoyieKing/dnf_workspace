# dispatch_sig

`_ZN24TimerVillageMonsterRegen12dispatch_sigEiij`

`TimerVillageMonsterRegen::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerVillageMonsterRegen` | `0x0863901a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863901a  _ZN24TimerVillageMonsterRegen12dispatch_sigEiij
#           TimerVillageMonsterRegen::dispatch_sig(int, int, unsigned int)
# range [0x0863901a, 0x08639041]
0863901a +0x00:  push   %ebp
0863901b +0x01:  mov    %esp,%ebp
0863901d +0x03:  sub    $0x18,%esp
08639020 +0x06:  mov    0x14(%ebp),%edx
08639023 +0x09:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
08639028 +0x0e:  mov    %edx,0x8(%esp)
0863902c +0x12:  mov    0x10(%ebp),%edx
0863902f +0x15:  mov    %edx,0x4(%esp)
08639033 +0x19:  mov    %eax,(%esp)
08639036 +0x1c:  call   086b4338 <_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii>  ; village_attacked::CVillageMonsterMgr::OnRegenVillageMonster(int, int)
0863903b +0x21:  mov    $0x1,%eax
08639040 +0x26:  leave
08639041 +0x27:  ret
```

## 反编译 C

```c
// TimerVillageMonsterRegen::dispatch_sig @ 0x863901a

/* TimerVillageMonsterRegen::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerVillageMonsterRegen::dispatch_sig
          (TimerVillageMonsterRegen *this,int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnRegenVillageMonster
            (GlobalData::s_villageMonsterMgr,param_2,param_3);
  return 1;
}
```
