# is_eventing

`_ZN13EventClassify20CUsedFatigueGiveItem11is_eventingEv`

`EventClassify::CUsedFatigueGiveItem::is_eventing()`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x0811056e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811056e  _ZN13EventClassify20CUsedFatigueGiveItem11is_eventingEv
#           EventClassify::CUsedFatigueGiveItem::is_eventing()
# range [0x0811056e, 0x081105bd]
0811056e +0x00:  push   %ebp
0811056f +0x01:  mov    %esp,%ebp
08110571 +0x03:  sub    $0x18,%esp
08110574 +0x06:  mov    0x8(%ebp),%eax
08110577 +0x09:  mov    %eax,(%esp)
0811057a +0x0c:  call   0810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>  ; EventClassify::CEventEntity::is_eventing()
0811057f +0x11:  test   %al,%al
08110581 +0x13:  je     081105b7 <+0x49>
08110583 +0x15:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08110588 +0x1a:  movl   $0x65,0x4(%esp)
08110590 +0x22:  mov    %eax,(%esp)
08110593 +0x25:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08110598 +0x2a:  mov    (%eax),%edx
0811059a +0x2c:  add    $0x34,%edx
0811059d +0x2f:  mov    (%edx),%edx
0811059f +0x31:  movl   $0x0,0x4(%esp)
081105a7 +0x39:  mov    %eax,(%esp)
081105aa +0x3c:  call   *%edx
081105ac +0x3e:  test   %al,%al
081105ae +0x40:  je     081105b7 <+0x49>
081105b0 +0x42:  mov    $0x1,%eax
081105b5 +0x47:  jmp    081105bc <+0x4e>
081105b7 +0x49:  mov    $0x0,%eax
081105bc +0x4e:  leave
081105bd +0x4f:  ret
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::is_eventing @ 0x811056e

/* EventClassify::CUsedFatigueGiveItem::is_eventing() */

undefined4 __thiscall EventClassify::CUsedFatigueGiveItem::is_eventing(CUsedFatigueGiveItem *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar1 != '\0') {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x65);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
```
