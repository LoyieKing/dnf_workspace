# send

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase`

`Dispatcher_GrowthCreatureChangeInfinityCreature::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e8768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8768  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase
#           Dispatcher_GrowthCreatureChangeInfinityCreature::send(CUser*, ParamBase&)
# range [0x081e8768, 0x081e8813]
081e8768 +0x00:  push   %ebp
081e8769 +0x01:  mov    %esp,%ebp
081e876b +0x03:  sub    $0x28,%esp
081e876e +0x06:  mov    0x10(%ebp),%eax
081e8771 +0x09:  mov    %eax,-0x10(%ebp)
081e8774 +0x0c:  mov    -0x10(%ebp),%eax
081e8777 +0x0f:  mov    0x4(%eax),%eax
081e877a +0x12:  test   %eax,%eax
081e877c +0x14:  jne    081e87c0 <+0x58>
081e877e +0x16:  movl   $0x200,0x4(%esp)
081e8786 +0x1e:  mov    0xc(%ebp),%eax
081e8789 +0x21:  mov    %eax,(%esp)
081e878c +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e8791 +0x29:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8796 +0x2e:  movl   $0x67,0x4(%esp)
081e879e +0x36:  mov    %eax,(%esp)
081e87a1 +0x39:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e87a6 +0x3e:  mov    (%eax),%edx
081e87a8 +0x40:  add    $0x34,%edx
081e87ab +0x43:  mov    (%edx),%edx
081e87ad +0x45:  movl   $0x0,0x4(%esp)
081e87b5 +0x4d:  mov    %eax,(%esp)
081e87b8 +0x50:  call   *%edx
081e87ba +0x52:  test   %al,%al
081e87bc +0x54:  jne    081e87e2 <+0x7a>
081e87be +0x56:  jmp    081e8812 <+0xaa>
081e87c0 +0x58:  mov    -0x10(%ebp),%eax
081e87c3 +0x5b:  mov    0x4(%eax),%eax
081e87c6 +0x5e:  movzbl %al,%eax
081e87c9 +0x61:  mov    %eax,0x8(%esp)
081e87cd +0x65:  movl   $0x200,0x4(%esp)
081e87d5 +0x6d:  mov    0xc(%ebp),%eax
081e87d8 +0x70:  mov    %eax,(%esp)
081e87db +0x73:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e87e0 +0x78:  jmp    081e8812 <+0xaa>
081e87e2 +0x7a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e87e7 +0x7f:  movl   $0x67,0x4(%esp)
081e87ef +0x87:  mov    %eax,(%esp)
081e87f2 +0x8a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e87f7 +0x8f:  mov    %eax,-0xc(%ebp)
081e87fa +0x92:  cmpl   $0x0,-0xc(%ebp)
081e87fe +0x96:  je     081e8812 <+0xaa>
081e8800 +0x98:  mov    0xc(%ebp),%eax
081e8803 +0x9b:  mov    %eax,0x4(%esp)
081e8807 +0x9f:  mov    -0xc(%ebp),%eax
081e880a +0xa2:  mov    %eax,(%esp)
081e880d +0xa5:  call   081b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>  ; GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&)
081e8812 +0xaa:  leave
081e8813 +0xab:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::send @ 0x81e8768

/* Dispatcher_GrowthCreatureChangeInfinityCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::send
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x200);
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if ((cVar1 != '\0') &&
       (this_00 = (GiveGrowCreatureEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67),
       this_00 != (GiveGrowCreatureEvent *)0x0)) {
      GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(this_00,param_1);
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x200,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
