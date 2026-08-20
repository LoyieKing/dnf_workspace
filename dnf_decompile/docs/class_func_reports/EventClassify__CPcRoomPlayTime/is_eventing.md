# is_eventing

`_ZN13EventClassify15CPcRoomPlayTime11is_eventingEv`

`EventClassify::CPcRoomPlayTime::is_eventing()`

| 类 | 地址 |
|---|---|
| `EventClassify::CPcRoomPlayTime` | `0x08110814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110814  _ZN13EventClassify15CPcRoomPlayTime11is_eventingEv
#           EventClassify::CPcRoomPlayTime::is_eventing()
# range [0x08110814, 0x08110863]
08110814 +0x00:  push   %ebp
08110815 +0x01:  mov    %esp,%ebp
08110817 +0x03:  sub    $0x18,%esp
0811081a +0x06:  mov    0x8(%ebp),%eax
0811081d +0x09:  mov    %eax,(%esp)
08110820 +0x0c:  call   0810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>  ; EventClassify::CEventEntity::is_eventing()
08110825 +0x11:  test   %al,%al
08110827 +0x13:  je     0811085d <+0x49>
08110829 +0x15:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0811082e +0x1a:  movl   $0x5c,0x4(%esp)
08110836 +0x22:  mov    %eax,(%esp)
08110839 +0x25:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0811083e +0x2a:  mov    (%eax),%edx
08110840 +0x2c:  add    $0x34,%edx
08110843 +0x2f:  mov    (%edx),%edx
08110845 +0x31:  movl   $0x0,0x4(%esp)
0811084d +0x39:  mov    %eax,(%esp)
08110850 +0x3c:  call   *%edx
08110852 +0x3e:  test   %al,%al
08110854 +0x40:  je     0811085d <+0x49>
08110856 +0x42:  mov    $0x1,%eax
0811085b +0x47:  jmp    08110862 <+0x4e>
0811085d +0x49:  mov    $0x0,%eax
08110862 +0x4e:  leave
08110863 +0x4f:  ret
```

## 反编译 C

```c
// EventClassify::CPcRoomPlayTime::is_eventing @ 0x8110814

/* EventClassify::CPcRoomPlayTime::is_eventing() */

undefined4 __thiscall EventClassify::CPcRoomPlayTime::is_eventing(CPcRoomPlayTime *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar1 != '\0') {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5c);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
```
