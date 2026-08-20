# SetWeekendBounsEvent

`_ZN9GameWorld20SetWeekendBounsEventEv`

`GameWorld::SetWeekendBounsEvent()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d12b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d12b2  _ZN9GameWorld20SetWeekendBounsEventEv
#           GameWorld::SetWeekendBounsEvent()
# range [0x086d12b2, 0x086d13b9]
086d12b2 +0x000:  push   %ebp
086d12b3 +0x001:  mov    %esp,%ebp
086d12b5 +0x003:  sub    $0x58,%esp
086d12b8 +0x006:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086d12bf +0x00d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086d12c4 +0x012:  mov    %eax,-0xc(%ebp)
086d12c7 +0x015:  lea    -0x3c(%ebp),%eax
086d12ca +0x018:  mov    %eax,0x4(%esp)
086d12ce +0x01c:  lea    -0xc(%ebp),%eax
086d12d1 +0x01f:  mov    %eax,(%esp)
086d12d4 +0x022:  call   0807e360 <_init+0xc58>
086d12d9 +0x027:  mov    -0x24(%ebp),%eax
086d12dc +0x02a:  cmp    $0x6,%eax
086d12df +0x02d:  jne    086d12e9 <+0x37>
086d12e1 +0x02f:  mov    -0x34(%ebp),%eax
086d12e4 +0x032:  cmp    $0x5,%eax
086d12e7 +0x035:  jg     086d1300 <+0x4e>
086d12e9 +0x037:  mov    -0x24(%ebp),%eax
086d12ec +0x03a:  test   %eax,%eax
086d12ee +0x03c:  je     086d1300 <+0x4e>
086d12f0 +0x03e:  mov    -0x24(%ebp),%eax
086d12f3 +0x041:  cmp    $0x1,%eax
086d12f6 +0x044:  jne    086d135a <+0xa8>
086d12f8 +0x046:  mov    -0x34(%ebp),%eax
086d12fb +0x049:  cmp    $0x5,%eax
086d12fe +0x04c:  jg     086d135a <+0xa8>
086d1300 +0x04e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086d1305 +0x053:  movl   $0x57,0x4(%esp)
086d130d +0x05b:  mov    %eax,(%esp)
086d1310 +0x05e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086d1315 +0x063:  mov    (%eax),%edx
086d1317 +0x065:  add    $0x34,%edx
086d131a +0x068:  mov    (%edx),%edx
086d131c +0x06a:  movl   $0x0,0x4(%esp)
086d1324 +0x072:  mov    %eax,(%esp)
086d1327 +0x075:  call   *%edx
086d1329 +0x077:  xor    $0x1,%eax
086d132c +0x07a:  test   %al,%al
086d132e +0x07c:  je     086d13ae <+0xfc>
086d1330 +0x07e:  movw   $0x0,-0x10(%ebp)
086d1336 +0x084:  movw   $0x0,-0xe(%ebp)
086d133c +0x08a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086d1341 +0x08f:  mov    -0x10(%ebp),%edx
086d1344 +0x092:  mov    %edx,0x8(%esp)
086d1348 +0x096:  movl   $0x57,0x4(%esp)
086d1350 +0x09e:  mov    %eax,(%esp)
086d1353 +0x0a1:  call   08115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>  ; CEventManager::TriggerEventStart(int, Word_Param)
086d1358 +0x0a6:  jmp    086d13b8 <+0x106>
086d135a +0x0a8:  mov    -0x24(%ebp),%eax
086d135d +0x0ab:  cmp    $0x1,%eax
086d1360 +0x0ae:  jne    086d13b1 <+0xff>
086d1362 +0x0b0:  mov    -0x34(%ebp),%eax
086d1365 +0x0b3:  cmp    $0x5,%eax
086d1368 +0x0b6:  jle    086d13b4 <+0x102>
086d136a +0x0b8:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086d136f +0x0bd:  movl   $0x57,0x4(%esp)
086d1377 +0x0c5:  mov    %eax,(%esp)
086d137a +0x0c8:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086d137f +0x0cd:  mov    (%eax),%edx
086d1381 +0x0cf:  add    $0x34,%edx
086d1384 +0x0d2:  mov    (%edx),%edx
086d1386 +0x0d4:  movl   $0x0,0x4(%esp)
086d138e +0x0dc:  mov    %eax,(%esp)
086d1391 +0x0df:  call   *%edx
086d1393 +0x0e1:  test   %al,%al
086d1395 +0x0e3:  je     086d13b7 <+0x105>
086d1397 +0x0e5:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086d139c +0x0ea:  movl   $0x57,0x4(%esp)
086d13a4 +0x0f2:  mov    %eax,(%esp)
086d13a7 +0x0f5:  call   08115d60 <_ZN13CEventManager15TriggerEventEndEi>  ; CEventManager::TriggerEventEnd(int)
086d13ac +0x0fa:  jmp    086d13b8 <+0x106>
086d13ae +0x0fc:  nop
086d13af +0x0fd:  jmp    086d13b8 <+0x106>
086d13b1 +0x0ff:  nop
086d13b2 +0x100:  jmp    086d13b8 <+0x106>
086d13b4 +0x102:  nop
086d13b5 +0x103:  jmp    086d13b8 <+0x106>
086d13b7 +0x105:  nop
086d13b8 +0x106:  leave
086d13b9 +0x107:  ret
```

## 反编译 C

```c
// GameWorld::SetWeekendBounsEvent @ 0x86d12b2

/* GameWorld::SetWeekendBounsEvent() */

void GameWorld::SetWeekendBounsEvent(void)

{
  char cVar1;
  int *piVar2;
  tm local_40;
  undefined4 local_14;
  time_t local_10 [3];
  
  local_10[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(local_10,&local_40);
  if ((((local_40.tm_wday == 6) && (5 < local_40.tm_hour)) || (local_40.tm_wday == 0)) ||
     ((local_40.tm_wday == 1 && (local_40.tm_hour < 6)))) {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\x01') {
      local_14 = 0;
      CEventManager::TriggerEventStart(GlobalData::s_event_manager,0x57,0);
    }
  }
  else if ((local_40.tm_wday == 1) && (5 < local_40.tm_hour)) {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\0') {
      CEventManager::TriggerEventEnd(GlobalData::s_event_manager,0x57);
    }
  }
  return;
}
```
