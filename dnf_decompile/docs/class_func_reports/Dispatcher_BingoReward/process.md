# process

`_ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoReward` | `0x0825e68c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e68c  _ZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825e68c, 0x0825e7b1]
0825e68c +0x000:  push   %ebp
0825e68d +0x001:  mov    %esp,%ebp
0825e68f +0x003:  sub    $0x38,%esp
0825e692 +0x006:  mov    0x14(%ebp),%eax
0825e695 +0x009:  mov    %eax,-0x10(%ebp)
0825e698 +0x00c:  mov    0x10(%ebp),%eax
0825e69b +0x00f:  mov    %eax,0x8(%esp)
0825e69f +0x013:  mov    0xc(%ebp),%eax
0825e6a2 +0x016:  mov    %eax,0x4(%esp)
0825e6a6 +0x01a:  mov    0x8(%ebp),%eax
0825e6a9 +0x01d:  mov    %eax,(%esp)
0825e6ac +0x020:  call   0825e7b2 <_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_BingoReward::check_error(CUser*, MSG_BASE&)
0825e6b1 +0x025:  mov    -0x10(%ebp),%edx
0825e6b4 +0x028:  mov    %eax,0x4(%edx)
0825e6b7 +0x02b:  cmpl   $0x0,0xc(%ebp)
0825e6bb +0x02f:  je     0825e6d0 <+0x44>
0825e6bd +0x031:  mov    0xc(%ebp),%eax
0825e6c0 +0x034:  mov    %eax,(%esp)
0825e6c3 +0x037:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825e6c8 +0x03c:  mov    (%eax),%edx
0825e6ca +0x03e:  mov    -0x10(%ebp),%eax
0825e6cd +0x041:  mov    %edx,0x8(%eax)
0825e6d0 +0x044:  mov    -0x10(%ebp),%eax
0825e6d3 +0x047:  mov    0x4(%eax),%eax
0825e6d6 +0x04a:  test   %eax,%eax
0825e6d8 +0x04c:  jle    0825e6e4 <+0x58>
0825e6da +0x04e:  mov    $0x0,%eax
0825e6df +0x053:  jmp    0825e7b0 <+0x124>
0825e6e4 +0x058:  mov    -0x10(%ebp),%eax
0825e6e7 +0x05b:  mov    0x4(%eax),%eax
0825e6ea +0x05e:  test   %eax,%eax
0825e6ec +0x060:  jns    0825e74a <+0xbe>
0825e6ee +0x062:  mov    -0x10(%ebp),%eax
0825e6f1 +0x065:  mov    0x4(%eax),%eax
0825e6f4 +0x068:  mov    %eax,0x14(%esp)
0825e6f8 +0x06c:  movl   $"Dispatcher Check_Error No(%d)",0x10(%esp)
0825e700 +0x074:  movl   $0x19a,0xc(%esp)
0825e708 +0x07c:  movl   $&_ZZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825e710 +0x084:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825e718 +0x08c:  movl   $0x1,(%esp)
0825e71f +0x093:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825e724 +0x098:  movl   $0x0,0xc(%esp)
0825e72c +0x0a0:  movl   $0x0,0x8(%esp)
0825e734 +0x0a8:  movl   $&_ZZN22Dispatcher_BingoReward7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825e73c +0x0b0:  movl   $0x19b,(%esp)
0825e743 +0x0b7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e748 +0x0bc:  jmp    0825e7b0 <+0x124>
0825e74a +0x0be:  mov    0xc(%ebp),%eax
0825e74d +0x0c1:  mov    %eax,(%esp)
0825e750 +0x0c4:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825e755 +0x0c9:  movb   $0x1,0x6(%eax)
0825e759 +0x0cd:  mov    0xc(%ebp),%eax
0825e75c +0x0d0:  mov    %eax,(%esp)
0825e75f +0x0d3:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825e764 +0x0d8:  movb   $0x1,0x5(%eax)
0825e768 +0x0dc:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0825e76d +0x0e1:  movl   $0x6a,0x4(%esp)
0825e775 +0x0e9:  mov    %eax,(%esp)
0825e778 +0x0ec:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0825e77d +0x0f1:  mov    %eax,-0xc(%ebp)
0825e780 +0x0f4:  cmpl   $0x0,-0xc(%ebp)
0825e784 +0x0f8:  je     0825e7ab <+0x11f>
0825e786 +0x0fa:  mov    0xc(%ebp),%eax
0825e789 +0x0fd:  mov    %eax,0x4(%esp)
0825e78d +0x101:  mov    -0xc(%ebp),%eax
0825e790 +0x104:  mov    %eax,(%esp)
0825e793 +0x107:  call   080ca622 <_ZN10BingoEvent22sendMaxMatchLineRewardER5CUser>  ; BingoEvent::sendMaxMatchLineReward(CUser&)
0825e798 +0x10c:  movl   $0x1,0x4(%esp)
0825e7a0 +0x114:  mov    0xc(%ebp),%eax
0825e7a3 +0x117:  mov    %eax,(%esp)
0825e7a6 +0x11a:  call   08690d9a <_ZN5CUser23sendDecorationObjectCntEs>  ; CUser::sendDecorationObjectCnt(short)
0825e7ab +0x11f:  mov    $0x0,%eax
0825e7b0 +0x124:  leave
0825e7b1 +0x125:  ret
```

## 反编译 C

```c
// Dispatcher_BingoReward::process @ 0x825e68c

/* Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BingoReward::process
          (Dispatcher_BingoReward *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  BingoEvent *this_00;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (param_1 != (CUser *)0x0) {
    puVar2 = (undefined4 *)CUser::getBingoData(param_1);
    *(undefined4 *)(param_3 + 8) = *puVar2;
  }
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)",0x19a,
                 "Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x19b,
                       "virtual int Dispatcher_BingoReward::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,0);
    }
    else {
      iVar3 = CUser::getBingoData(param_1);
      *(undefined1 *)(iVar3 + 6) = 1;
      iVar3 = CUser::getBingoData(param_1);
      *(undefined1 *)(iVar3 + 5) = 1;
      this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      if (this_00 != (BingoEvent *)0x0) {
        BingoEvent::sendMaxMatchLineReward(this_00,param_1);
        CUser::sendDecorationObjectCnt(param_1,1);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
