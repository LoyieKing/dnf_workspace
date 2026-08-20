# sendBroadCastItems

`_ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi`

`Dispatcher_UseBoosterItem::sendBroadCastItems(CUser*, Inven_Item const&, int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseBoosterItem` | `0x08209b0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08209b0e  _ZN25Dispatcher_UseBoosterItem18sendBroadCastItemsEP5CUserRK10Inven_Itemi
#           Dispatcher_UseBoosterItem::sendBroadCastItems(CUser*, Inven_Item const&, int)
# range [0x08209b0e, 0x08209c8b]
08209b0e +0x000:  push   %ebp
08209b0f +0x001:  mov    %esp,%ebp
08209b11 +0x003:  push   %esi
08209b12 +0x004:  push   %ebx
08209b13 +0x005:  sub    $0x20,%esp
08209b16 +0x008:  cmpl   $0x0,0xc(%ebp)
08209b1a +0x00c:  je     08209c84 <+0x176>
08209b20 +0x012:  movb   $0x0,-0x9(%ebp)
08209b24 +0x016:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08209b29 +0x01b:  lea    0xb5bc(%eax),%edx
08209b2f +0x021:  mov    0x14(%ebp),%eax
08209b32 +0x024:  mov    %eax,0x4(%esp)
08209b36 +0x028:  mov    %edx,(%esp)
08209b39 +0x02b:  call   08918d9c <_ZNK21stBroadCastItemScript14isUnCommonItemEi>  ; stBroadCastItemScript::isUnCommonItem(int) const
08209b3e +0x030:  test   %al,%al
08209b40 +0x032:  je     08209b6d <+0x5f>
08209b42 +0x034:  mov    0x10(%ebp),%eax
08209b45 +0x037:  mov    0x2(%eax),%eax
08209b48 +0x03a:  mov    %eax,%ebx
08209b4a +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08209b4f +0x041:  lea    0xb5bc(%eax),%edx
08209b55 +0x047:  mov    %ebx,0x8(%esp)
08209b59 +0x04b:  mov    0x14(%ebp),%eax
08209b5c +0x04e:  mov    %eax,0x4(%esp)
08209b60 +0x052:  mov    %edx,(%esp)
08209b63 +0x055:  call   08918dfe <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii>  ; stBroadCastItemScript::checkUnCommonNestedItem(int, int) const
08209b68 +0x05a:  mov    %al,-0x9(%ebp)
08209b6b +0x05d:  jmp    08209b8e <+0x80>
08209b6d +0x05f:  mov    0x10(%ebp),%eax
08209b70 +0x062:  mov    0x2(%eax),%eax
08209b73 +0x065:  mov    %eax,%ebx
08209b75 +0x067:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08209b7a +0x06c:  add    $0xb5bc,%eax
08209b7f +0x071:  mov    %ebx,0x4(%esp)
08209b83 +0x075:  mov    %eax,(%esp)
08209b86 +0x078:  call   08918cdc <_ZNK21stBroadCastItemScript15checkCommonItemEi>  ; stBroadCastItemScript::checkCommonItem(int) const
08209b8b +0x07d:  mov    %al,-0x9(%ebp)
08209b8e +0x080:  cmpb   $0x0,-0x9(%ebp)
08209b92 +0x084:  je     08209c85 <+0x177>
08209b98 +0x08a:  lea    -0x18(%ebp),%eax
08209b9b +0x08d:  mov    %eax,(%esp)
08209b9e +0x090:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08209ba3 +0x095:  movl   $0x56,0x8(%esp)
08209bab +0x09d:  movl   $0x0,0x4(%esp)
08209bb3 +0x0a5:  lea    -0x18(%ebp),%eax
08209bb6 +0x0a8:  mov    %eax,(%esp)
08209bb9 +0x0ab:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08209bbe +0x0b0:  movl   $0x2,0x4(%esp)
08209bc6 +0x0b8:  lea    -0x18(%ebp),%eax
08209bc9 +0x0bb:  mov    %eax,(%esp)
08209bcc +0x0be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08209bd1 +0x0c3:  movl   $0x1,0x4(%esp)
08209bd9 +0x0cb:  lea    -0x18(%ebp),%eax
08209bdc +0x0ce:  mov    %eax,(%esp)
08209bdf +0x0d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08209be4 +0x0d6:  mov    0xc(%ebp),%eax
08209be7 +0x0d9:  mov    %eax,(%esp)
08209bea +0x0dc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08209bef +0x0e1:  movzwl %ax,%eax
08209bf2 +0x0e4:  mov    %eax,0x4(%esp)
08209bf6 +0x0e8:  lea    -0x18(%ebp),%eax
08209bf9 +0x0eb:  mov    %eax,(%esp)
08209bfc +0x0ee:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08209c01 +0x0f3:  mov    0x10(%ebp),%eax
08209c04 +0x0f6:  mov    0x2(%eax),%eax
08209c07 +0x0f9:  mov    %eax,0x4(%esp)
08209c0b +0x0fd:  lea    -0x18(%ebp),%eax
08209c0e +0x100:  mov    %eax,(%esp)
08209c11 +0x103:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08209c16 +0x108:  mov    0x10(%ebp),%eax
08209c19 +0x10b:  mov    %eax,(%esp)
08209c1c +0x10e:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08209c21 +0x113:  movzbl %al,%eax
08209c24 +0x116:  mov    %eax,0x4(%esp)
08209c28 +0x11a:  lea    -0x18(%ebp),%eax
08209c2b +0x11d:  mov    %eax,(%esp)
08209c2e +0x120:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08209c33 +0x125:  movl   $0x1,0x4(%esp)
08209c3b +0x12d:  lea    -0x18(%ebp),%eax
08209c3e +0x130:  mov    %eax,(%esp)
08209c41 +0x133:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08209c46 +0x138:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08209c4b +0x13d:  lea    -0x18(%ebp),%edx
08209c4e +0x140:  mov    %edx,0x4(%esp)
08209c52 +0x144:  mov    %eax,(%esp)
08209c55 +0x147:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08209c5a +0x14c:  jmp    08209c77 <+0x169>
08209c5c +0x14e:  mov    %edx,%ebx
08209c5e +0x150:  mov    %eax,%esi
08209c60 +0x152:  lea    -0x18(%ebp),%eax
08209c63 +0x155:  mov    %eax,(%esp)
08209c66 +0x158:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08209c6b +0x15d:  mov    %esi,%eax
08209c6d +0x15f:  mov    %ebx,%edx
08209c6f +0x161:  mov    %eax,(%esp)
08209c72 +0x164:  call   08ae3750 <_Unwind_Resume>
08209c77 +0x169:  lea    -0x18(%ebp),%eax
08209c7a +0x16c:  mov    %eax,(%esp)
08209c7d +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08209c82 +0x174:  jmp    08209c85 <+0x177>
08209c84 +0x176:  nop
08209c85 +0x177:  add    $0x20,%esp
08209c88 +0x17a:  pop    %ebx
08209c89 +0x17b:  pop    %esi
08209c8a +0x17c:  pop    %ebp
08209c8b +0x17d:  ret
```

## 反编译 C

```c
// Dispatcher_UseBoosterItem::sendBroadCastItems @ 0x8209b0e

/* Dispatcher_UseBoosterItem::sendBroadCastItems(CUser*, Inven_Item const&, int) */

void __thiscall
Dispatcher_UseBoosterItem::sendBroadCastItems
          (Dispatcher_UseBoosterItem *this,CUser *param_1,Inven_Item *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  PacketGuard local_1c [15];
  char local_d;
  
  if (param_1 != (CUser *)0x0) {
    local_d = 0;
    iVar2 = G_CDataManager();
    cVar1 = stBroadCastItemScript::isUnCommonItem(iVar2 + 0xb5bc);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_2 + 2);
      iVar3 = G_CDataManager();
      local_d = stBroadCastItemScript::checkCommonItem
                          ((stBroadCastItemScript *)(iVar3 + 0xb5bc),iVar2);
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      iVar3 = G_CDataManager();
      local_d = stBroadCastItemScript::checkUnCommonNestedItem
                          ((stBroadCastItemScript *)(iVar3 + 0xb5bc),param_3,iVar2);
    }
    if (local_d != '\0') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08209bb9 to 08209c59 has its CatchHandler @ 08209c5c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(param_2 + 2));
      uVar4 = Inven_Item::GetUpgrade(param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar4 & 0xff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```
