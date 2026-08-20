# process

`_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRenameCard` | `0x081e731a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e731a  _ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e731a, 0x081e756b]
081e731a +0x000:  push   %ebp
081e731b +0x001:  mov    %esp,%ebp
081e731d +0x003:  push   %ebx
081e731e +0x004:  sub    $0x84,%esp
081e7324 +0x00a:  mov    0x10(%ebp),%eax
081e7327 +0x00d:  mov    %eax,-0x1c(%ebp)
081e732a +0x010:  mov    0x14(%ebp),%eax
081e732d +0x013:  mov    %eax,-0x18(%ebp)
081e7330 +0x016:  mov    0x10(%ebp),%eax
081e7333 +0x019:  mov    %eax,0x8(%esp)
081e7337 +0x01d:  mov    0xc(%ebp),%eax
081e733a +0x020:  mov    %eax,0x4(%esp)
081e733e +0x024:  mov    0x8(%ebp),%eax
081e7341 +0x027:  mov    %eax,(%esp)
081e7344 +0x02a:  call   081e7652 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_UseRenameCard::check_error(CUser*, MSG_BASE&)
081e7349 +0x02f:  mov    -0x18(%ebp),%edx
081e734c +0x032:  mov    %eax,0x4(%edx)
081e734f +0x035:  mov    -0x18(%ebp),%eax
081e7352 +0x038:  mov    0x4(%eax),%eax
081e7355 +0x03b:  test   %eax,%eax
081e7357 +0x03d:  je     081e7383 <+0x69>
081e7359 +0x03f:  mov    -0x18(%ebp),%eax
081e735c +0x042:  mov    0x4(%eax),%eax
081e735f +0x045:  movzbl %al,%eax
081e7362 +0x048:  mov    %eax,0x8(%esp)
081e7366 +0x04c:  movl   $0x1fe,0x4(%esp)
081e736e +0x054:  mov    0xc(%ebp),%eax
081e7371 +0x057:  mov    %eax,(%esp)
081e7374 +0x05a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e7379 +0x05f:  mov    $0x0,%eax
081e737e +0x064:  jmp    081e7563 <+0x249>
081e7383 +0x069:  lea    -0x59(%ebp),%eax
081e7386 +0x06c:  mov    %eax,(%esp)
081e7389 +0x06f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e738e +0x074:  mov    -0x1c(%ebp),%eax
081e7391 +0x077:  movzwl 0xe(%eax),%eax
081e7395 +0x07b:  cwtl
081e7396 +0x07c:  lea    -0x59(%ebp),%edx
081e7399 +0x07f:  mov    %edx,0x10(%esp)
081e739d +0x083:  mov    %eax,0xc(%esp)
081e73a1 +0x087:  movl   $0x1,0x8(%esp)
081e73a9 +0x08f:  mov    0xc(%ebp),%eax
081e73ac +0x092:  mov    %eax,0x4(%esp)
081e73b0 +0x096:  mov    0x8(%ebp),%eax
081e73b3 +0x099:  mov    %eax,(%esp)
081e73b6 +0x09c:  call   081e756c <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item>  ; Dispatcher_UseRenameCard::getItem(CUser const&, int, short, Inven_Item&) const
081e73bb +0x0a1:  mov    %eax,-0x14(%ebp)
081e73be +0x0a4:  cmpl   $0x0,-0x14(%ebp)
081e73c2 +0x0a8:  je     081e73eb <+0xd1>
081e73c4 +0x0aa:  mov    -0x14(%ebp),%eax
081e73c7 +0x0ad:  movzbl %al,%eax
081e73ca +0x0b0:  mov    %eax,0x8(%esp)
081e73ce +0x0b4:  movl   $0x1fe,0x4(%esp)
081e73d6 +0x0bc:  mov    0xc(%ebp),%eax
081e73d9 +0x0bf:  mov    %eax,(%esp)
081e73dc +0x0c2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e73e1 +0x0c7:  mov    $0x0,%eax
081e73e6 +0x0cc:  jmp    081e7563 <+0x249>
081e73eb +0x0d1:  mov    -0x57(%ebp),%eax
081e73ee +0x0d4:  mov    %eax,%ebx
081e73f0 +0x0d6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e73f5 +0x0db:  mov    %ebx,0x4(%esp)
081e73f9 +0x0df:  mov    %eax,(%esp)
081e73fc +0x0e2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e7401 +0x0e7:  mov    %eax,-0x10(%ebp)
081e7404 +0x0ea:  cmpl   $0x0,-0x10(%ebp)
081e7408 +0x0ee:  jne    081e7414 <+0xfa>
081e740a +0x0f0:  mov    $0x0,%eax
081e740f +0x0f5:  jmp    081e7563 <+0x249>
081e7414 +0x0fa:  mov    -0x10(%ebp),%eax
081e7417 +0x0fd:  mov    %eax,(%esp)
081e741a +0x100:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081e741f +0x105:  xor    $0x1,%eax
081e7422 +0x108:  test   %al,%al
081e7424 +0x10a:  je     081e7430 <+0x116>
081e7426 +0x10c:  mov    $0x0,%eax
081e742b +0x111:  jmp    081e7563 <+0x249>
081e7430 +0x116:  mov    -0x10(%ebp),%eax
081e7433 +0x119:  mov    %eax,-0xc(%ebp)
081e7436 +0x11c:  movl   $0x33,0x4(%esp)
081e743e +0x124:  mov    -0xc(%ebp),%eax
081e7441 +0x127:  mov    %eax,(%esp)
081e7444 +0x12a:  call   0822ca58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2102>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2102
081e7449 +0x12f:  xor    $0x1,%eax
081e744c +0x132:  test   %al,%al
081e744e +0x134:  je     081e7477 <+0x15d>
081e7450 +0x136:  mov    -0x14(%ebp),%eax
081e7453 +0x139:  movzbl %al,%eax
081e7456 +0x13c:  mov    %eax,0x8(%esp)
081e745a +0x140:  movl   $0x1fe,0x4(%esp)
081e7462 +0x148:  mov    0xc(%ebp),%eax
081e7465 +0x14b:  mov    %eax,(%esp)
081e7468 +0x14e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e746d +0x153:  mov    $0x0,%eax
081e7472 +0x158:  jmp    081e7563 <+0x249>
081e7477 +0x15d:  movl   $0xff,0x4(%esp)
081e747f +0x165:  mov    0xc(%ebp),%eax
081e7482 +0x168:  mov    %eax,(%esp)
081e7485 +0x16b:  call   0822ffc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x566c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x566c
081e748a +0x170:  mov    -0x1c(%ebp),%eax
081e748d +0x173:  movzwl 0xe(%eax),%eax
081e7491 +0x177:  movswl %ax,%ebx
081e7494 +0x17a:  mov    0xc(%ebp),%eax
081e7497 +0x17d:  mov    %eax,(%esp)
081e749a +0x180:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e749f +0x185:  movl   $0x1,0x14(%esp)
081e74a7 +0x18d:  movl   $0x3,0x10(%esp)
081e74af +0x195:  movl   $0x1,0xc(%esp)
081e74b7 +0x19d:  mov    %ebx,0x8(%esp)
081e74bb +0x1a1:  movl   $0x1,0x4(%esp)
081e74c3 +0x1a9:  mov    %eax,(%esp)
081e74c6 +0x1ac:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e74cb +0x1b1:  xor    $0x1,%eax
081e74ce +0x1b4:  test   %al,%al
081e74d0 +0x1b6:  je     081e752d <+0x213>
081e74d2 +0x1b8:  movl   $0x0,0x4(%esp)
081e74da +0x1c0:  mov    0xc(%ebp),%eax
081e74dd +0x1c3:  mov    %eax,(%esp)
081e74e0 +0x1c6:  call   0822ffc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x566c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x566c
081e74e5 +0x1cb:  movl   $0x11,0x8(%esp)
081e74ed +0x1d3:  movl   $0x1fe,0x4(%esp)
081e74f5 +0x1db:  mov    0xc(%ebp),%eax
081e74f8 +0x1de:  mov    %eax,(%esp)
081e74fb +0x1e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e7500 +0x1e6:  mov    0xc(%ebp),%eax
081e7503 +0x1e9:  mov    %eax,(%esp)
081e7506 +0x1ec:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e750b +0x1f1:  mov    %eax,0xc(%esp)
081e750f +0x1f5:  movl   $0x0,0x8(%esp)
081e7517 +0x1fd:  movl   $&_ZZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e751f +0x205:  movl   $0x632e,(%esp)
081e7526 +0x20c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e752b +0x211:  jmp    081e7563 <+0x249>
081e752d +0x213:  movl   $0x1fe,0x4(%esp)
081e7535 +0x21b:  mov    0xc(%ebp),%eax
081e7538 +0x21e:  mov    %eax,(%esp)
081e753b +0x221:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e7540 +0x226:  movl   $0x1,0x4(%esp)
081e7548 +0x22e:  mov    0xc(%ebp),%eax
081e754b +0x231:  mov    %eax,(%esp)
081e754e +0x234:  call   08686fee <_ZN5CUser24ReturnToSelectCharacListEb>  ; CUser::ReturnToSelectCharacList(bool)
081e7553 +0x239:  mov    0xc(%ebp),%eax
081e7556 +0x23c:  mov    %eax,(%esp)
081e7559 +0x23f:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
081e755e +0x244:  mov    $0x0,%eax
081e7563 +0x249:  add    $0x84,%esp
081e7569 +0x24f:  pop    %ebx
081e756a +0x250:  pop    %ebp
081e756b +0x251:  ret
```

## 反编译 C

```c
// Dispatcher_UseRenameCard::process @ 0x81e731a

/* Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseRenameCard::process
          (Dispatcher_UseRenameCard *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CInventory *pCVar4;
  uint uVar5;
  Inven_Item local_5d [2];
  int local_5b;
  MSG_BASE *local_20;
  ParamBase *local_1c;
  uint local_18;
  CStackableItem *local_14;
  CStackableItem *local_10;
  
  local_20 = param_2;
  local_1c = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_1c + 4) = uVar3;
  if (*(int *)(local_1c + 4) == 0) {
    Inven_Item::Inven_Item(local_5d);
    local_18 = getItem(this,param_1,1,*(short *)(local_20 + 0xe),local_5d);
    if (local_18 == 0) {
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (CStackableItem *)CDataManager::find_item(this_00,local_5b);
      if (local_14 == (CStackableItem *)0x0) {
        uVar3 = 0;
      }
      else {
        cVar2 = CItem::is_stackable((CItem *)local_14);
        if (cVar2 == '\x01') {
          local_10 = local_14;
          cVar2 = CStackableItem::verifyStackableAction(local_14,0x33);
          if (cVar2 == '\x01') {
            CUser::SetCharacViewState(param_1,0xff);
            sVar1 = *(short *)(local_20 + 0xe);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar4,1,(int)sVar1,1,3,1);
            if (cVar2 == '\x01') {
              CUser::SendCmdOkPacket(param_1,0x1fe);
              CUser::ReturnToSelectCharacList(param_1,true);
              CUser::UpdateCharacView(param_1);
              uVar3 = 0;
            }
            else {
              CUser::SetCharacViewState(param_1,0);
              CUser::SendCmdErrorPacket(param_1,0x1fe,0x11);
              uVar5 = CUser::get_acc_id(param_1);
              uVar3 = LineFunc(0x632e,
                               "virtual int Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar5);
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x1fe,local_18 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1fe,local_18 & 0xff);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fe,*(uint *)(local_1c + 4) & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
