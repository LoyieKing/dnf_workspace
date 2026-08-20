# CheckAndSendToAllUserSchedule

`_ZN21CDailyScheduleManager29CheckAndSendToAllUserScheduleEv`

`CDailyScheduleManager::CheckAndSendToAllUserSchedule()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125c94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125c94  _ZN21CDailyScheduleManager29CheckAndSendToAllUserScheduleEv
#           CDailyScheduleManager::CheckAndSendToAllUserSchedule()
# range [0x08125c94, 0x08125cb7]
08125c94 +0x00:  push   %ebp
08125c95 +0x01:  mov    %esp,%ebp
08125c97 +0x03:  sub    $0x18,%esp
08125c9a +0x06:  movl   $0x0,0x8(%esp)
08125ca2 +0x0e:  movl   $0x0,0x4(%esp)
08125caa +0x16:  mov    0x8(%ebp),%eax
08125cad +0x19:  mov    %eax,(%esp)
08125cb0 +0x1c:  call   08125cda <_ZN21CDailyScheduleManager26CheckAndSendToUserScheduleEP5CUserb>  ; CDailyScheduleManager::CheckAndSendToUserSchedule(CUser*, bool)
08125cb5 +0x21:  leave
08125cb6 +0x22:  ret
08125cb7 +0x23:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::CheckAndSendToAllUserSchedule @ 0x8125c94

/* CDailyScheduleManager::CheckAndSendToAllUserSchedule() */

void __thiscall CDailyScheduleManager::CheckAndSendToAllUserSchedule(CDailyScheduleManager *this)

{
  CheckAndSendToUserSchedule((CUser *)this,false);
  return;
}
```
