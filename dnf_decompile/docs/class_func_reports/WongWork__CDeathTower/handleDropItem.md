# handleDropItem

`_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii`

`WongWork::CDeathTower::handleDropItem(CUser*, int, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846466e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846466e  _ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii
#           WongWork::CDeathTower::handleDropItem(CUser*, int, int, char, int, int)
# range [0x0846466e, 0x0846483d]
0846466e +0x000:  push   %ebp
0846466f +0x001:  mov    %esp,%ebp
08464671 +0x003:  push   %esi
08464672 +0x004:  push   %ebx
08464673 +0x005:  sub    $0xa0,%esp
08464679 +0x00b:  mov    0x18(%ebp),%eax
0846467c +0x00e:  mov    %al,-0x7c(%ebp)
0846467f +0x011:  cmpl   $0x0,0x20(%ebp)
08464683 +0x015:  jns    0846468f <+0x21>
08464685 +0x017:  mov    $0x0,%ebx
0846468a +0x01c:  jmp    08464832 <+0x1c4>
0846468f +0x021:  lea    -0x6c(%ebp),%eax
08464692 +0x024:  mov    %eax,(%esp)
08464695 +0x027:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0846469a +0x02c:  lea    -0x18(%ebp),%eax
0846469d +0x02f:  mov    %eax,(%esp)
084646a0 +0x032:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
084646a5 +0x037:  movsbl -0x7c(%ebp),%eax
084646a9 +0x03b:  lea    -0x6c(%ebp),%edx
084646ac +0x03e:  mov    %edx,0x14(%esp)
084646b0 +0x042:  mov    0x20(%ebp),%edx
084646b3 +0x045:  mov    %edx,0x10(%esp)
084646b7 +0x049:  mov    0x1c(%ebp),%edx
084646ba +0x04c:  mov    %edx,0xc(%esp)
084646be +0x050:  mov    %eax,0x8(%esp)
084646c2 +0x054:  mov    0xc(%ebp),%eax
084646c5 +0x057:  mov    %eax,0x4(%esp)
084646c9 +0x05b:  mov    0x8(%ebp),%eax
084646cc +0x05e:  mov    %eax,(%esp)
084646cf +0x061:  call   0846638c <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item>  ; WongWork::CDeathTower::_makeDropItem(CUser*, char, int, int, map_item&)
084646d4 +0x066:  xor    $0x1,%eax
084646d7 +0x069:  test   %al,%al
084646d9 +0x06b:  je     0846471a <+0xac>
084646db +0x06d:  movsbl -0x7c(%ebp),%eax
084646df +0x071:  mov    %eax,0xc(%esp)
084646e3 +0x075:  movl   $0x11,0x8(%esp)
084646eb +0x07d:  movl   $0x32,0x4(%esp)
084646f3 +0x085:  lea    -0x18(%ebp),%eax
084646f6 +0x088:  mov    %eax,(%esp)
084646f9 +0x08b:  call   0845fea6 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc>  ; WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char)
084646fe +0x090:  lea    -0x18(%ebp),%eax
08464701 +0x093:  mov    %eax,0x4(%esp)
08464705 +0x097:  mov    0xc(%ebp),%eax
08464708 +0x09a:  mov    %eax,(%esp)
0846470b +0x09d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08464710 +0x0a2:  mov    $0x0,%ebx
08464715 +0x0a7:  jmp    08464827 <+0x1b9>
0846471a +0x0ac:  mov    0x8(%ebp),%eax
0846471d +0x0af:  lea    0x14(%eax),%edx
08464720 +0x0b2:  lea    -0x6c(%ebp),%eax
08464723 +0x0b5:  mov    %eax,0x4(%esp)
08464727 +0x0b9:  mov    %edx,(%esp)
0846472a +0x0bc:  call   084616a8 <_ZN8WongWork11CDeathTower6CStage8dropItemER8map_item>  ; WongWork::CDeathTower::CStage::dropItem(map_item&)
0846472f +0x0c1:  mov    %eax,-0xc(%ebp)
08464732 +0x0c4:  cmpl   $0xffffffff,-0xc(%ebp)
08464736 +0x0c8:  jne    08464777 <+0x109>
08464738 +0x0ca:  movsbl -0x7c(%ebp),%eax
0846473c +0x0ce:  mov    %eax,0xc(%esp)
08464740 +0x0d2:  movl   $0x16,0x8(%esp)
08464748 +0x0da:  movl   $0x32,0x4(%esp)
08464750 +0x0e2:  lea    -0x18(%ebp),%eax
08464753 +0x0e5:  mov    %eax,(%esp)
08464756 +0x0e8:  call   0845fea6 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc>  ; WongWork::CDeathTower::CPacketHandler::makeDropItemError(ENUM_CMDPACKET, ENUM_ERROR, char)
0846475b +0x0ed:  lea    -0x18(%ebp),%eax
0846475e +0x0f0:  mov    %eax,0x4(%esp)
08464762 +0x0f4:  mov    0xc(%ebp),%eax
08464765 +0x0f7:  mov    %eax,(%esp)
08464768 +0x0fa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0846476d +0x0ff:  mov    $0x0,%ebx
08464772 +0x104:  jmp    08464827 <+0x1b9>
08464777 +0x109:  mov    -0xc(%ebp),%eax
0846477a +0x10c:  movzwl %ax,%ebx
0846477d +0x10f:  mov    0xc(%ebp),%eax
08464780 +0x112:  mov    %eax,(%esp)
08464783 +0x115:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08464788 +0x11a:  movzwl %ax,%eax
0846478b +0x11d:  lea    -0x6c(%ebp),%edx
0846478e +0x120:  mov    %edx,0x14(%esp)
08464792 +0x124:  mov    %ebx,0x10(%esp)
08464796 +0x128:  mov    0x14(%ebp),%edx
08464799 +0x12b:  mov    %edx,0xc(%esp)
0846479d +0x12f:  mov    0x10(%ebp),%edx
084647a0 +0x132:  mov    %edx,0x8(%esp)
084647a4 +0x136:  mov    %eax,0x4(%esp)
084647a8 +0x13a:  lea    -0x18(%ebp),%eax
084647ab +0x13d:  mov    %eax,(%esp)
084647ae +0x140:  call   0845ff1a <_ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item>  ; WongWork::CDeathTower::CPacketHandler::makeDropItemNotify(unsigned short, int, int, unsigned short, map_item const&)
084647b3 +0x145:  mov    0x8(%ebp),%eax
084647b6 +0x148:  mov    (%eax),%eax
084647b8 +0x14a:  lea    -0x18(%ebp),%edx
084647bb +0x14d:  mov    %edx,0x4(%esp)
084647bf +0x151:  mov    %eax,(%esp)
084647c2 +0x154:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
084647c7 +0x159:  lea    -0x18(%ebp),%eax
084647ca +0x15c:  mov    %eax,(%esp)
084647cd +0x15f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084647d2 +0x164:  movsbl -0x7c(%ebp),%eax
084647d6 +0x168:  mov    0x20(%ebp),%edx
084647d9 +0x16b:  mov    %edx,0xc(%esp)
084647dd +0x16f:  mov    0x1c(%ebp),%edx
084647e0 +0x172:  mov    %edx,0x8(%esp)
084647e4 +0x176:  mov    %eax,0x4(%esp)
084647e8 +0x17a:  lea    -0x18(%ebp),%eax
084647eb +0x17d:  mov    %eax,(%esp)
084647ee +0x180:  call   084600a6 <_ZN8WongWork11CDeathTower14CPacketHandler12makeDropItemEcii>  ; WongWork::CDeathTower::CPacketHandler::makeDropItem(char, int, int)
084647f3 +0x185:  lea    -0x18(%ebp),%eax
084647f6 +0x188:  mov    %eax,0x4(%esp)
084647fa +0x18c:  mov    0xc(%ebp),%eax
084647fd +0x18f:  mov    %eax,(%esp)
08464800 +0x192:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08464805 +0x197:  mov    $0x1,%ebx
0846480a +0x19c:  jmp    08464827 <+0x1b9>
0846480c +0x19e:  mov    %edx,%ebx
0846480e +0x1a0:  mov    %eax,%esi
08464810 +0x1a2:  lea    -0x18(%ebp),%eax
08464813 +0x1a5:  mov    %eax,(%esp)
08464816 +0x1a8:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
0846481b +0x1ad:  mov    %esi,%eax
0846481d +0x1af:  mov    %ebx,%edx
0846481f +0x1b1:  mov    %eax,(%esp)
08464822 +0x1b4:  call   08ae3750 <_Unwind_Resume>
08464827 +0x1b9:  lea    -0x18(%ebp),%eax
0846482a +0x1bc:  mov    %eax,(%esp)
0846482d +0x1bf:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08464832 +0x1c4:  mov    %ebx,%eax
08464834 +0x1c6:  add    $0xa0,%esp
0846483a +0x1cc:  pop    %ebx
0846483b +0x1cd:  pop    %esi
0846483c +0x1ce:  pop    %ebp
0846483d +0x1cf:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::handleDropItem @ 0x846466e

/* WongWork::CDeathTower::handleDropItem(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WongWork::CDeathTower::handleDropItem
          (CDeathTower *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  map_item local_70 [84];
  CPacketHandler local_1c [12];
  int local_10;
  
  if (param_6 < 0) {
    uVar4 = 0;
  }
  else {
    map_item::map_item(local_70);
    CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 084646cf to 08464804 has its CatchHandler @ 0846480c */
    cVar1 = _makeDropItem(this,param_1,param_4,param_5,param_6,local_70);
    if (cVar1 == '\x01') {
      iVar3 = CStage::dropItem((CStage *)(this + 0x14),local_70);
      local_10 = iVar3;
      if (iVar3 == -1) {
        CPacketHandler::makeDropItemError(local_1c,0x32,0x16,(int)param_4);
        CUser::Send(param_1,(PacketGuard *)local_1c);
        uVar4 = 0;
      }
      else {
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makeDropItemNotify(local_1c,uVar2,param_2,param_3,(ushort)iVar3,local_70);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        CPacketHandler::makeDropItem(local_1c,param_4,param_5,param_6);
        CUser::Send(param_1,(PacketGuard *)local_1c);
        uVar4 = 1;
      }
    }
    else {
      CPacketHandler::makeDropItemError(local_1c,0x32,0x11,(int)param_4);
      CUser::Send(param_1,(PacketGuard *)local_1c);
      uVar4 = 0;
    }
    CPacketHandler::~CPacketHandler(local_1c);
  }
  return uVar4;
}
```
