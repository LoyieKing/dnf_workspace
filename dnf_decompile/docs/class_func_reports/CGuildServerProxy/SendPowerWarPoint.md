# SendPowerWarPoint

`_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point`

`CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e460  _ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point
#           CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&)
# range [0x0846e460, 0x0846e4b5]
0846e460 +0x00:  push   %ebp
0846e461 +0x01:  mov    %esp,%ebp
0846e463 +0x03:  sub    $0x18,%esp
0846e466 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0846e46b +0x0b:  movl   $0x1e,0x4(%esp)
0846e473 +0x13:  mov    %eax,(%esp)
0846e476 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0846e47b +0x1b:  mov    (%eax),%edx
0846e47d +0x1d:  add    $0x34,%edx
0846e480 +0x20:  mov    (%edx),%edx
0846e482 +0x22:  movl   $0x0,0x4(%esp)
0846e48a +0x2a:  mov    %eax,(%esp)
0846e48d +0x2d:  call   *%edx
0846e48f +0x2f:  test   %al,%al
0846e491 +0x31:  je     0846e4b3 <+0x53>
0846e493 +0x33:  mov    0xc(%ebp),%eax
0846e496 +0x36:  movzwl 0x2(%eax),%eax
0846e49a +0x3a:  movzwl %ax,%edx
0846e49d +0x3d:  mov    0xc(%ebp),%eax
0846e4a0 +0x40:  mov    %edx,0x8(%esp)
0846e4a4 +0x44:  mov    %eax,0x4(%esp)
0846e4a8 +0x48:  mov    0x8(%ebp),%eax
0846e4ab +0x4b:  mov    %eax,(%esp)
0846e4ae +0x4e:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846e4b3 +0x53:  leave
0846e4b4 +0x54:  ret
0846e4b5 +0x55:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendPowerWarPoint @ 0x846e460

/* CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&) */

void __thiscall
CGuildServerProxy::SendPowerWarPoint
          (CGuildServerProxy *this,Packet_Guild_Change_Power_War_Point *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x1e);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    SendTcpPacket(this,(char *)param_1,(uint)*(ushort *)(param_1 + 2));
  }
  return;
}
```
