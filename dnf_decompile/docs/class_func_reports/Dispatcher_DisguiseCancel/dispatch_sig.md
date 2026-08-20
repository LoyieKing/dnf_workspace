# dispatch_sig

`_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DisguiseCancel::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisguiseCancel` | `0x0821b496` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b496  _ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DisguiseCancel::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821b496, 0x0821b609]
0821b496 +0x000:  push   %ebp
0821b497 +0x001:  mov    %esp,%ebp
0821b499 +0x003:  push   %esi
0821b49a +0x004:  push   %ebx
0821b49b +0x005:  sub    $0x20,%esp
0821b49e +0x008:  cmpl   $0x0,0xc(%ebp)
0821b4a2 +0x00c:  jne    0821b4ae <+0x18>
0821b4a4 +0x00e:  mov    $0x0,%ebx
0821b4a9 +0x013:  jmp    0821b601 <+0x16b>
0821b4ae +0x018:  mov    0xc(%ebp),%eax
0821b4b1 +0x01b:  mov    %eax,(%esp)
0821b4b4 +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821b4b9 +0x023:  cmp    $0x3,%eax
0821b4bc +0x026:  setne  %al
0821b4bf +0x029:  test   %al,%al
0821b4c1 +0x02b:  je     0821b4cd <+0x37>
0821b4c3 +0x02d:  mov    $0x0,%ebx
0821b4c8 +0x032:  jmp    0821b601 <+0x16b>
0821b4cd +0x037:  mov    0xc(%ebp),%eax
0821b4d0 +0x03a:  mov    %eax,(%esp)
0821b4d3 +0x03d:  call   0822f8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fa0
0821b4d8 +0x042:  xor    $0x1,%eax
0821b4db +0x045:  test   %al,%al
0821b4dd +0x047:  je     0821b51d <+0x87>
0821b4df +0x049:  movl   $0x3,0x8(%esp)
0821b4e7 +0x051:  movl   $0xd7,0x4(%esp)
0821b4ef +0x059:  mov    0xc(%ebp),%eax
0821b4f2 +0x05c:  mov    %eax,(%esp)
0821b4f5 +0x05f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b4fa +0x064:  mov    0xc(%ebp),%eax
0821b4fd +0x067:  movl   $0x0,0xc(%esp)
0821b505 +0x06f:  movl   $0x0,0x8(%esp)
0821b50d +0x077:  movl   $0x0,0x4(%esp)
0821b515 +0x07f:  mov    %eax,(%esp)
0821b518 +0x082:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
0821b51d +0x087:  mov    0xc(%ebp),%eax
0821b520 +0x08a:  movl   $0x0,0xc(%esp)
0821b528 +0x092:  movl   $0x0,0x8(%esp)
0821b530 +0x09a:  movl   $0x0,0x4(%esp)
0821b538 +0x0a2:  mov    %eax,(%esp)
0821b53b +0x0a5:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
0821b540 +0x0aa:  lea    -0x14(%ebp),%eax
0821b543 +0x0ad:  mov    %eax,(%esp)
0821b546 +0x0b0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821b54b +0x0b5:  movl   $0x2,0x8(%esp)
0821b553 +0x0bd:  movl   $0x0,0x4(%esp)
0821b55b +0x0c5:  lea    -0x14(%ebp),%eax
0821b55e +0x0c8:  mov    %eax,(%esp)
0821b561 +0x0cb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821b566 +0x0d0:  movl   $0x0,0x4(%esp)
0821b56e +0x0d8:  lea    -0x14(%ebp),%eax
0821b571 +0x0db:  mov    %eax,(%esp)
0821b574 +0x0de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821b579 +0x0e3:  movl   $0x1,0x4(%esp)
0821b581 +0x0eb:  lea    -0x14(%ebp),%eax
0821b584 +0x0ee:  mov    %eax,(%esp)
0821b587 +0x0f1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821b58c +0x0f6:  lea    -0x14(%ebp),%eax
0821b58f +0x0f9:  movl   $0x0,0x8(%esp)
0821b597 +0x101:  mov    %eax,0x4(%esp)
0821b59b +0x105:  mov    0xc(%ebp),%eax
0821b59e +0x108:  mov    %eax,(%esp)
0821b5a1 +0x10b:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0821b5a6 +0x110:  movl   $0x1,0x4(%esp)
0821b5ae +0x118:  lea    -0x14(%ebp),%eax
0821b5b1 +0x11b:  mov    %eax,(%esp)
0821b5b4 +0x11e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821b5b9 +0x123:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0821b5be +0x128:  mov    0xc(%ebp),%edx
0821b5c1 +0x12b:  mov    %edx,0x8(%esp)
0821b5c5 +0x12f:  lea    -0x14(%ebp),%edx
0821b5c8 +0x132:  mov    %edx,0x4(%esp)
0821b5cc +0x136:  mov    %eax,(%esp)
0821b5cf +0x139:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0821b5d4 +0x13e:  mov    $0x0,%ebx
0821b5d9 +0x143:  lea    -0x14(%ebp),%eax
0821b5dc +0x146:  mov    %eax,(%esp)
0821b5df +0x149:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821b5e4 +0x14e:  jmp    0821b601 <+0x16b>
0821b5e6 +0x150:  mov    %edx,%ebx
0821b5e8 +0x152:  mov    %eax,%esi
0821b5ea +0x154:  lea    -0x14(%ebp),%eax
0821b5ed +0x157:  mov    %eax,(%esp)
0821b5f0 +0x15a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821b5f5 +0x15f:  mov    %esi,%eax
0821b5f7 +0x161:  mov    %ebx,%edx
0821b5f9 +0x163:  mov    %eax,(%esp)
0821b5fc +0x166:  call   08ae3750 <_Unwind_Resume>
0821b601 +0x16b:  mov    %ebx,%eax
0821b603 +0x16d:  add    $0x20,%esp
0821b606 +0x170:  pop    %ebx
0821b607 +0x171:  pop    %esi
0821b608 +0x172:  pop    %ebp
0821b609 +0x173:  ret
```

## 反编译 C

```c
// Dispatcher_DisguiseCancel::dispatch_sig @ 0x821b496

/* Dispatcher_DisguiseCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DisguiseCancel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  if ((param_2 != (PacketBuf *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 3)) {
    cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_2);
    if (cVar1 != '\x01') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xd7,3);
      CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    }
    CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821b561 to 0821b5d3 has its CatchHandler @ 0821b5e6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_18);
  }
  return 0;
}
```
