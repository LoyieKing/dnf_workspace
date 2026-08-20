# check_error

`_ZNK12advancealtar31Dispatcher_GetAchievementReward11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_GetAchievementReward::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_GetAchievementReward` | `0x08140d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140d80  _ZNK12advancealtar31Dispatcher_GetAchievementReward11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_GetAchievementReward::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x08140d80, 0x08140d9f]
08140d80 +0x00:  push   %ebp
08140d81 +0x01:  mov    %esp,%ebp
08140d83 +0x03:  sub    $0x8,%esp
08140d86 +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
08140d8b +0x0b:  xor    $0x1,%eax
08140d8e +0x0e:  test   %al,%al
08140d90 +0x10:  je     08140d99 <+0x19>
08140d92 +0x12:  mov    $0x1,%eax
08140d97 +0x17:  jmp    08140d9e <+0x1e>
08140d99 +0x19:  mov    $0x0,%eax
08140d9e +0x1e:  leave
08140d9f +0x1f:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_GetAchievementReward::check_error @ 0x8140d80

/* advancealtar::Dispatcher_GetAchievementReward::check_error(CUser*,
   CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_GetAchievementReward::check_error
               (CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}
```
