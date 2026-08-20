# ResetAllEventData

`_ZN9GameWorld17ResetAllEventDataEv`

`GameWorld::ResetAllEventData()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccc78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccc78  _ZN9GameWorld17ResetAllEventDataEv
#           GameWorld::ResetAllEventData()
# range [0x086ccc78, 0x086ccc8d]
086ccc78 +0x00:  push   %ebp
086ccc79 +0x01:  mov    %esp,%ebp
086ccc7b +0x03:  sub    $0x18,%esp
086ccc7e +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086ccc83 +0x0b:  mov    %eax,(%esp)
086ccc86 +0x0e:  call   0811630e <_ZN13CEventManager14dailyresetDataEv>  ; CEventManager::dailyresetData()
086ccc8b +0x13:  leave
086ccc8c +0x14:  ret
086ccc8d +0x15:  nop
```

## 反编译 C

```c
// GameWorld::ResetAllEventData @ 0x86ccc78

/* GameWorld::ResetAllEventData() */

void GameWorld::ResetAllEventData(void)

{
  CEventManager::dailyresetData(GlobalData::s_event_manager);
  return;
}
```
