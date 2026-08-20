# CheckAndSendToOneUserSchedule

`_ZN21CDailyScheduleManager29CheckAndSendToOneUserScheduleER5CUser`

`CDailyScheduleManager::CheckAndSendToOneUserSchedule(CUser&)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125cb8  _ZN21CDailyScheduleManager29CheckAndSendToOneUserScheduleER5CUser
#           CDailyScheduleManager::CheckAndSendToOneUserSchedule(CUser&)
# range [0x08125cb8, 0x08125cd9]
08125cb8 +0x00:  push   %ebp
08125cb9 +0x01:  mov    %esp,%ebp
08125cbb +0x03:  sub    $0x18,%esp
08125cbe +0x06:  movl   $0x0,0x8(%esp)
08125cc6 +0x0e:  mov    0xc(%ebp),%eax
08125cc9 +0x11:  mov    %eax,0x4(%esp)
08125ccd +0x15:  mov    0x8(%ebp),%eax
08125cd0 +0x18:  mov    %eax,(%esp)
08125cd3 +0x1b:  call   08125cda <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb>  ; CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool)
08125cd8 +0x20:  leave
08125cd9 +0x21:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::CheckAndSendToOneUserSchedule @ 0x8125cb8

/* CDailyScheduleManager::CheckAndSendToOneUserSchedule(CUser&) */

void __thiscall
CDailyScheduleManager::CheckAndSendToOneUserSchedule(CDailyScheduleManager *this,CUser *param_1)

{
  CheckAndSendToUserSchedule((CUser *)this,SUB41(param_1,0));
  return;
}
```
