# dispatch_sig

`_ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisguiseRequest` | `0x0821b256` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b256  _ZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821b256, 0x0821b495]
0821b256 +0x000:  push   %ebp
0821b257 +0x001:  mov    %esp,%ebp
0821b259 +0x003:  push   %esi
0821b25a +0x004:  push   %ebx
0821b25b +0x005:  sub    $0x20,%esp
0821b25e +0x008:  cmpl   $0x0,0xc(%ebp)
0821b262 +0x00c:  jne    0821b26e <+0x18>
0821b264 +0x00e:  mov    $0x0,%ebx
0821b269 +0x013:  jmp    0821b48c <+0x236>
0821b26e +0x018:  mov    0xc(%ebp),%eax
0821b271 +0x01b:  mov    %eax,(%esp)
0821b274 +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821b279 +0x023:  cmp    $0x3,%eax
0821b27c +0x026:  setne  %al
0821b27f +0x029:  test   %al,%al
0821b281 +0x02b:  je     0821b28d <+0x37>
0821b283 +0x02d:  mov    $0x0,%ebx
0821b288 +0x032:  jmp    0821b48c <+0x236>
0821b28d +0x037:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0821b292 +0x03c:  mov    0xc(%ebp),%edx
0821b295 +0x03f:  mov    %edx,0x4(%esp)
0821b299 +0x043:  mov    %eax,(%esp)
0821b29c +0x046:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
0821b2a1 +0x04b:  test   %al,%al
0821b2a3 +0x04d:  je     0821b2af <+0x59>
0821b2a5 +0x04f:  mov    $0x0,%ebx
0821b2aa +0x054:  jmp    0821b48c <+0x236>
0821b2af +0x059:  mov    0xc(%ebp),%eax
0821b2b2 +0x05c:  mov    %eax,(%esp)
0821b2b5 +0x05f:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
0821b2ba +0x064:  test   %al,%al
0821b2bc +0x066:  je     0821b2c8 <+0x72>
0821b2be +0x068:  mov    $0x0,%ebx
0821b2c3 +0x06d:  jmp    0821b48c <+0x236>
0821b2c8 +0x072:  mov    0xc(%ebp),%eax
0821b2cb +0x075:  mov    %eax,(%esp)
0821b2ce +0x078:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
0821b2d3 +0x07d:  test   %eax,%eax
0821b2d5 +0x07f:  setne  %al
0821b2d8 +0x082:  test   %al,%al
0821b2da +0x084:  je     0821b2e6 <+0x90>
0821b2dc +0x086:  mov    $0x0,%ebx
0821b2e1 +0x08b:  jmp    0821b48c <+0x236>
0821b2e6 +0x090:  lea    -0x9(%ebp),%eax
0821b2e9 +0x093:  mov    %eax,0x4(%esp)
0821b2ed +0x097:  mov    0x10(%ebp),%eax
0821b2f0 +0x09a:  mov    %eax,(%esp)
0821b2f3 +0x09d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821b2f8 +0x0a2:  xor    $0x1,%eax
0821b2fb +0x0a5:  test   %al,%al
0821b2fd +0x0a7:  je     0821b32a <+0xd4>
0821b2ff +0x0a9:  movl   $0x0,0xc(%esp)
0821b307 +0x0b1:  movl   $0x0,0x8(%esp)
0821b30f +0x0b9:  movl   $&_ZZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821b317 +0x0c1:  movl   $0xcf00,(%esp)
0821b31e +0x0c8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821b323 +0x0cd:  mov    %eax,%ebx
0821b325 +0x0cf:  jmp    0821b48c <+0x236>
0821b32a +0x0d4:  lea    -0xc(%ebp),%eax
0821b32d +0x0d7:  mov    %eax,0x4(%esp)
0821b331 +0x0db:  mov    0x10(%ebp),%eax
0821b334 +0x0de:  mov    %eax,(%esp)
0821b337 +0x0e1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821b33c +0x0e6:  xor    $0x1,%eax
0821b33f +0x0e9:  test   %al,%al
0821b341 +0x0eb:  je     0821b36e <+0x118>
0821b343 +0x0ed:  movl   $0x0,0xc(%esp)
0821b34b +0x0f5:  movl   $0x0,0x8(%esp)
0821b353 +0x0fd:  movl   $&_ZZN26Dispatcher_DisguiseRequest12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821b35b +0x105:  movl   $0xcf02,(%esp)
0821b362 +0x10c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821b367 +0x111:  mov    %eax,%ebx
0821b369 +0x113:  jmp    0821b48c <+0x236>
0821b36e +0x118:  mov    0xc(%ebp),%eax
0821b371 +0x11b:  mov    %eax,(%esp)
0821b374 +0x11e:  call   0822f8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fa0
0821b379 +0x123:  test   %al,%al
0821b37b +0x125:  je     0821b3a2 <+0x14c>
0821b37d +0x127:  movl   $0x12,0x8(%esp)
0821b385 +0x12f:  movl   $0xd6,0x4(%esp)
0821b38d +0x137:  mov    0xc(%ebp),%eax
0821b390 +0x13a:  mov    %eax,(%esp)
0821b393 +0x13d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b398 +0x142:  mov    $0x0,%ebx
0821b39d +0x147:  jmp    0821b48c <+0x236>
0821b3a2 +0x14c:  movzwl -0xc(%ebp),%eax
0821b3a6 +0x150:  movzwl %ax,%ecx
0821b3a9 +0x153:  movzbl -0x9(%ebp),%eax
0821b3ad +0x157:  movzbl %al,%edx
0821b3b0 +0x15a:  mov    0xc(%ebp),%eax
0821b3b3 +0x15d:  mov    %ecx,0xc(%esp)
0821b3b7 +0x161:  mov    %edx,0x8(%esp)
0821b3bb +0x165:  movl   $0x1,0x4(%esp)
0821b3c3 +0x16d:  mov    %eax,(%esp)
0821b3c6 +0x170:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
0821b3cb +0x175:  lea    -0x18(%ebp),%eax
0821b3ce +0x178:  mov    %eax,(%esp)
0821b3d1 +0x17b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821b3d6 +0x180:  movl   $0x2,0x8(%esp)
0821b3de +0x188:  movl   $0x0,0x4(%esp)
0821b3e6 +0x190:  lea    -0x18(%ebp),%eax
0821b3e9 +0x193:  mov    %eax,(%esp)
0821b3ec +0x196:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821b3f1 +0x19b:  movl   $0x0,0x4(%esp)
0821b3f9 +0x1a3:  lea    -0x18(%ebp),%eax
0821b3fc +0x1a6:  mov    %eax,(%esp)
0821b3ff +0x1a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821b404 +0x1ae:  movl   $0x1,0x4(%esp)
0821b40c +0x1b6:  lea    -0x18(%ebp),%eax
0821b40f +0x1b9:  mov    %eax,(%esp)
0821b412 +0x1bc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821b417 +0x1c1:  lea    -0x18(%ebp),%eax
0821b41a +0x1c4:  movl   $0x0,0x8(%esp)
0821b422 +0x1cc:  mov    %eax,0x4(%esp)
0821b426 +0x1d0:  mov    0xc(%ebp),%eax
0821b429 +0x1d3:  mov    %eax,(%esp)
0821b42c +0x1d6:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0821b431 +0x1db:  movl   $0x1,0x4(%esp)
0821b439 +0x1e3:  lea    -0x18(%ebp),%eax
0821b43c +0x1e6:  mov    %eax,(%esp)
0821b43f +0x1e9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821b444 +0x1ee:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0821b449 +0x1f3:  mov    0xc(%ebp),%edx
0821b44c +0x1f6:  mov    %edx,0x8(%esp)
0821b450 +0x1fa:  lea    -0x18(%ebp),%edx
0821b453 +0x1fd:  mov    %edx,0x4(%esp)
0821b457 +0x201:  mov    %eax,(%esp)
0821b45a +0x204:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0821b45f +0x209:  mov    $0x0,%ebx
0821b464 +0x20e:  lea    -0x18(%ebp),%eax
0821b467 +0x211:  mov    %eax,(%esp)
0821b46a +0x214:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821b46f +0x219:  jmp    0821b48c <+0x236>
0821b471 +0x21b:  mov    %edx,%ebx
0821b473 +0x21d:  mov    %eax,%esi
0821b475 +0x21f:  lea    -0x18(%ebp),%eax
0821b478 +0x222:  mov    %eax,(%esp)
0821b47b +0x225:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821b480 +0x22a:  mov    %esi,%eax
0821b482 +0x22c:  mov    %ebx,%edx
0821b484 +0x22e:  mov    %eax,(%esp)
0821b487 +0x231:  call   08ae3750 <_Unwind_Resume>
0821b48c +0x236:  mov    %ebx,%eax
0821b48e +0x238:  add    $0x20,%esp
0821b491 +0x23b:  pop    %ebx
0821b492 +0x23c:  pop    %esi
0821b493 +0x23d:  pop    %ebp
0821b494 +0x23e:  ret
0821b495 +0x23f:  nop
```

## 反编译 C

```c
// Dispatcher_DisguiseRequest::dispatch_sig @ 0x821b256

/* Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DisguiseRequest::dispatch_sig
          (Dispatcher_DisguiseRequest *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  GameWorld *this_01;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  ushort local_10;
  uchar local_d;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 3) {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
      if (cVar1 == '\0') {
        cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
        if (cVar1 == '\0') {
          iVar2 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
          if (iVar2 == 0) {
            cVar1 = PacketBuf::get_byte(param_2,&local_d);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&local_10);
              if (cVar1 == '\x01') {
                cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_1);
                if (cVar1 == '\0') {
                  CUserCharacInfo::setDisguiseCharac
                            ((CUserCharacInfo *)param_1,true,local_d,local_10);
                  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0821b3ec to 0821b45e has its CatchHandler @ 0821b471 */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
                  CUser::make_basic_info(param_1,(char *)local_1c,'\0');
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
                  this_01 = (GameWorld *)G_GameWorld();
                  GameWorld::send_all(this_01,local_1c,param_1);
                  uVar3 = 0;
                  PacketGuard::~PacketGuard(local_1c);
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0xd6,0x12);
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = LineFunc(0xcf02,
                                 "virtual int Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xcf00,
                               "virtual int Dispatcher_DisguiseRequest::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
