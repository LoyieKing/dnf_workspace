# check_error

`_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_PcRoomRentItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomRentItem` | `0x081e5762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5762  _ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_PcRoomRentItem::check_error(CUser*, MSG_BASE&)
# range [0x081e5762, 0x081e583d]
081e5762 +0x00:  push   %ebp
081e5763 +0x01:  mov    %esp,%ebp
081e5765 +0x03:  sub    $0x28,%esp
081e5768 +0x06:  mov    0xc(%ebp),%eax
081e576b +0x09:  mov    %eax,(%esp)
081e576e +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e5773 +0x11:  cmp    $0x3,%eax
081e5776 +0x14:  jne    081e5787 <+0x25>
081e5778 +0x16:  mov    0xc(%ebp),%eax
081e577b +0x19:  mov    %eax,(%esp)
081e577e +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e5783 +0x21:  test   %eax,%eax
081e5785 +0x23:  jne    081e578e <+0x2c>
081e5787 +0x25:  mov    $0x1,%eax
081e578c +0x2a:  jmp    081e5793 <+0x31>
081e578e +0x2c:  mov    $0x0,%eax
081e5793 +0x31:  test   %al,%al
081e5795 +0x33:  je     081e57a1 <+0x3f>
081e5797 +0x35:  mov    $0x3,%eax
081e579c +0x3a:  jmp    081e583c <+0xda>
081e57a1 +0x3f:  mov    0x10(%ebp),%eax
081e57a4 +0x42:  mov    %eax,-0xc(%ebp)
081e57a7 +0x45:  mov    -0xc(%ebp),%eax
081e57aa +0x48:  movzbl 0xe(%eax),%eax
081e57ae +0x4c:  test   %al,%al
081e57b0 +0x4e:  jle    081e57bd <+0x5b>
081e57b2 +0x50:  mov    -0xc(%ebp),%eax
081e57b5 +0x53:  movzbl 0xe(%eax),%eax
081e57b9 +0x57:  cmp    $0x2,%al
081e57bb +0x59:  jle    081e57c4 <+0x62>
081e57bd +0x5b:  mov    $0x8,%eax
081e57c2 +0x60:  jmp    081e583c <+0xda>
081e57c4 +0x62:  mov    0xc(%ebp),%eax
081e57c7 +0x65:  mov    %eax,(%esp)
081e57ca +0x68:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
081e57cf +0x6d:  test   %eax,%eax
081e57d1 +0x6f:  jne    081e57e5 <+0x83>
081e57d3 +0x71:  mov    -0xc(%ebp),%eax
081e57d6 +0x74:  movzbl 0xe(%eax),%eax
081e57da +0x78:  cmp    $0x1,%al
081e57dc +0x7a:  jne    081e57e5 <+0x83>
081e57de +0x7c:  mov    $0x1,%eax
081e57e3 +0x81:  jmp    081e57ea <+0x88>
081e57e5 +0x83:  mov    $0x0,%eax
081e57ea +0x88:  test   %al,%al
081e57ec +0x8a:  je     081e57f5 <+0x93>
081e57ee +0x8c:  mov    $0x8,%eax
081e57f3 +0x91:  jmp    081e583c <+0xda>
081e57f5 +0x93:  mov    -0xc(%ebp),%eax
081e57f8 +0x96:  movzbl 0xe(%eax),%eax
081e57fc +0x9a:  cmp    $0x2,%al
081e57fe +0x9c:  jne    081e5837 <+0xd5>
081e5800 +0x9e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e5805 +0xa3:  movl   $0x5e,0x4(%esp)
081e580d +0xab:  mov    %eax,(%esp)
081e5810 +0xae:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e5815 +0xb3:  mov    (%eax),%edx
081e5817 +0xb5:  add    $0x34,%edx
081e581a +0xb8:  mov    (%edx),%edx
081e581c +0xba:  movl   $0x0,0x4(%esp)
081e5824 +0xc2:  mov    %eax,(%esp)
081e5827 +0xc5:  call   *%edx
081e5829 +0xc7:  xor    $0x1,%eax
081e582c +0xca:  test   %al,%al
081e582e +0xcc:  je     081e5837 <+0xd5>
081e5830 +0xce:  mov    $0x8,%eax
081e5835 +0xd3:  jmp    081e583c <+0xda>
081e5837 +0xd5:  mov    $0x0,%eax
081e583c +0xda:  leave
081e583d +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomRentItem::check_error @ 0x81e5762

/* Dispatcher_PcRoomRentItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::check_error
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 3;
  }
  else if (((char)param_2[0xe] < '\x01') || ('\x02' < (char)param_2[0xe])) {
    uVar4 = 8;
  }
  else {
    iVar3 = CUser::GetPCRoomNo(param_1);
    if ((iVar3 == 0) && (param_2[0xe] == (MSG_BASE)0x1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 8;
    }
    else {
      if (param_2[0xe] == (MSG_BASE)0x2) {
        piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5e);
        cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
        if (cVar2 != '\x01') {
          return 8;
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
