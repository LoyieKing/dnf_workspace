# check_error

`_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MonstercardBind::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d8de2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d8de2  _ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MonstercardBind::check_error(CUser*, MSG_BASE&)
# range [0x081d8de2, 0x081d9147]
081d8de2 +0x000:  push   %ebp
081d8de3 +0x001:  mov    %esp,%ebp
081d8de5 +0x003:  push   %ebx
081d8de6 +0x004:  sub    $0xf4,%esp
081d8dec +0x00a:  cmpl   $0x0,0xc(%ebp)
081d8df0 +0x00e:  jne    081d8dfc <+0x1a>
081d8df2 +0x010:  mov    $0xffffffff,%eax
081d8df7 +0x015:  jmp    081d9142 <+0x360>
081d8dfc +0x01a:  mov    0xc(%ebp),%eax
081d8dff +0x01d:  mov    %eax,(%esp)
081d8e02 +0x020:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d8e07 +0x025:  cmp    $0x2,%eax
081d8e0a +0x028:  setle  %al
081d8e0d +0x02b:  test   %al,%al
081d8e0f +0x02d:  je     081d8e1b <+0x39>
081d8e11 +0x02f:  mov    $0xffffffff,%eax
081d8e16 +0x034:  jmp    081d9142 <+0x360>
081d8e1b +0x039:  mov    0x10(%ebp),%eax
081d8e1e +0x03c:  mov    %eax,-0x1c(%ebp)
081d8e21 +0x03f:  mov    -0x1c(%ebp),%eax
081d8e24 +0x042:  movzwl 0xd(%eax),%eax
081d8e28 +0x046:  movswl %ax,%ebx
081d8e2b +0x049:  mov    0xc(%ebp),%eax
081d8e2e +0x04c:  mov    %eax,(%esp)
081d8e31 +0x04f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d8e36 +0x054:  lea    -0x59(%ebp),%edx
081d8e39 +0x057:  mov    %ebx,0xc(%esp)
081d8e3d +0x05b:  movl   $0x1,0x8(%esp)
081d8e45 +0x063:  mov    %eax,0x4(%esp)
081d8e49 +0x067:  mov    %edx,(%esp)
081d8e4c +0x06a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d8e51 +0x06f:  sub    $0x4,%esp
081d8e54 +0x072:  mov    -0x57(%ebp),%eax
081d8e57 +0x075:  mov    %eax,%ebx
081d8e59 +0x077:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8e5e +0x07c:  mov    %ebx,0x4(%esp)
081d8e62 +0x080:  mov    %eax,(%esp)
081d8e65 +0x083:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d8e6a +0x088:  mov    %eax,-0x18(%ebp)
081d8e6d +0x08b:  cmpl   $0x0,-0x18(%ebp)
081d8e71 +0x08f:  jne    081d8e7d <+0x9b>
081d8e73 +0x091:  mov    $0x11,%eax
081d8e78 +0x096:  jmp    081d9142 <+0x360>
081d8e7d +0x09b:  mov    -0x18(%ebp),%eax
081d8e80 +0x09e:  mov    %eax,(%esp)
081d8e83 +0x0a1:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d8e88 +0x0a6:  xor    $0x1,%eax
081d8e8b +0x0a9:  test   %al,%al
081d8e8d +0x0ab:  je     081d8e99 <+0xb7>
081d8e8f +0x0ad:  mov    $0x11,%eax
081d8e94 +0x0b2:  jmp    081d9142 <+0x360>
081d8e99 +0x0b7:  mov    -0x18(%ebp),%eax
081d8e9c +0x0ba:  mov    0x330(%eax),%eax
081d8ea2 +0x0c0:  cmp    $0xffffffff,%eax
081d8ea5 +0x0c3:  jne    081d8eb1 <+0xcf>
081d8ea7 +0x0c5:  mov    $0x11,%eax
081d8eac +0x0ca:  jmp    081d9142 <+0x360>
081d8eb1 +0x0cf:  mov    -0x52(%ebp),%eax
081d8eb4 +0x0d2:  test   %eax,%eax
081d8eb6 +0x0d4:  jg     081d8ec2 <+0xe0>
081d8eb8 +0x0d6:  mov    $0x16,%eax
081d8ebd +0x0db:  jmp    081d9142 <+0x360>
081d8ec2 +0x0e0:  mov    -0x1c(%ebp),%eax
081d8ec5 +0x0e3:  movzwl 0xf(%eax),%eax
081d8ec9 +0x0e7:  movswl %ax,%ebx
081d8ecc +0x0ea:  mov    0xc(%ebp),%eax
081d8ecf +0x0ed:  mov    %eax,(%esp)
081d8ed2 +0x0f0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d8ed7 +0x0f5:  lea    -0x96(%ebp),%edx
081d8edd +0x0fb:  mov    %ebx,0xc(%esp)
081d8ee1 +0x0ff:  movl   $0x1,0x8(%esp)
081d8ee9 +0x107:  mov    %eax,0x4(%esp)
081d8eed +0x10b:  mov    %edx,(%esp)
081d8ef0 +0x10e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d8ef5 +0x113:  sub    $0x4,%esp
081d8ef8 +0x116:  mov    -0x94(%ebp),%eax
081d8efe +0x11c:  mov    %eax,%ebx
081d8f00 +0x11e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8f05 +0x123:  mov    %ebx,0x4(%esp)
081d8f09 +0x127:  mov    %eax,(%esp)
081d8f0c +0x12a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d8f11 +0x12f:  mov    %eax,-0x14(%ebp)
081d8f14 +0x132:  cmpl   $0x0,-0x14(%ebp)
081d8f18 +0x136:  jne    081d8f24 <+0x142>
081d8f1a +0x138:  mov    $0x11,%eax
081d8f1f +0x13d:  jmp    081d9142 <+0x360>
081d8f24 +0x142:  mov    -0x14(%ebp),%eax
081d8f27 +0x145:  mov    %eax,(%esp)
081d8f2a +0x148:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d8f2f +0x14d:  xor    $0x1,%eax
081d8f32 +0x150:  test   %al,%al
081d8f34 +0x152:  je     081d8f40 <+0x15e>
081d8f36 +0x154:  mov    $0x11,%eax
081d8f3b +0x159:  jmp    081d9142 <+0x360>
081d8f40 +0x15e:  mov    -0x8f(%ebp),%eax
081d8f46 +0x164:  test   %eax,%eax
081d8f48 +0x166:  jg     081d8f54 <+0x172>
081d8f4a +0x168:  mov    $0x16,%eax
081d8f4f +0x16d:  jmp    081d9142 <+0x360>
081d8f54 +0x172:  mov    -0x1c(%ebp),%eax
081d8f57 +0x175:  movzwl 0x11(%eax),%eax
081d8f5b +0x179:  movswl %ax,%ebx
081d8f5e +0x17c:  mov    0xc(%ebp),%eax
081d8f61 +0x17f:  mov    %eax,(%esp)
081d8f64 +0x182:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d8f69 +0x187:  lea    -0xd3(%ebp),%edx
081d8f6f +0x18d:  mov    %ebx,0xc(%esp)
081d8f73 +0x191:  movl   $0x1,0x8(%esp)
081d8f7b +0x199:  mov    %eax,0x4(%esp)
081d8f7f +0x19d:  mov    %edx,(%esp)
081d8f82 +0x1a0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d8f87 +0x1a5:  sub    $0x4,%esp
081d8f8a +0x1a8:  mov    -0xd1(%ebp),%eax
081d8f90 +0x1ae:  mov    %eax,%ebx
081d8f92 +0x1b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d8f97 +0x1b5:  mov    %ebx,0x4(%esp)
081d8f9b +0x1b9:  mov    %eax,(%esp)
081d8f9e +0x1bc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d8fa3 +0x1c1:  mov    %eax,-0x10(%ebp)
081d8fa6 +0x1c4:  cmpl   $0x0,-0x10(%ebp)
081d8faa +0x1c8:  jne    081d8fb6 <+0x1d4>
081d8fac +0x1ca:  mov    $0x11,%eax
081d8fb1 +0x1cf:  jmp    081d9142 <+0x360>
081d8fb6 +0x1d4:  mov    -0x10(%ebp),%eax
081d8fb9 +0x1d7:  mov    %eax,(%esp)
081d8fbc +0x1da:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d8fc1 +0x1df:  xor    $0x1,%eax
081d8fc4 +0x1e2:  test   %al,%al
081d8fc6 +0x1e4:  je     081d8fd2 <+0x1f0>
081d8fc8 +0x1e6:  mov    $0x11,%eax
081d8fcd +0x1eb:  jmp    081d9142 <+0x360>
081d8fd2 +0x1f0:  mov    -0xcc(%ebp),%eax
081d8fd8 +0x1f6:  test   %eax,%eax
081d8fda +0x1f8:  jg     081d8fe6 <+0x204>
081d8fdc +0x1fa:  mov    $0x16,%eax
081d8fe1 +0x1ff:  jmp    081d9142 <+0x360>
081d8fe6 +0x204:  mov    -0x14(%ebp),%eax
081d8fe9 +0x207:  mov    %eax,(%esp)
081d8fec +0x20a:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081d8ff1 +0x20f:  mov    %eax,%ebx
081d8ff3 +0x211:  mov    -0x10(%ebp),%eax
081d8ff6 +0x214:  mov    %eax,(%esp)
081d8ff9 +0x217:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081d8ffe +0x21c:  cmp    %eax,%ebx
081d9000 +0x21e:  setne  %al
081d9003 +0x221:  test   %al,%al
081d9005 +0x223:  je     081d9011 <+0x22f>
081d9007 +0x225:  mov    $0x13,%eax
081d900c +0x22a:  jmp    081d9142 <+0x360>
081d9011 +0x22f:  mov    0xc(%ebp),%eax
081d9014 +0x232:  mov    %eax,0x4(%esp)
081d9018 +0x236:  mov    0x8(%ebp),%eax
081d901b +0x239:  mov    %eax,(%esp)
081d901e +0x23c:  call   081d83c4 <_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser>  ; Dispatcher_MonstercardBind::check_need_slot(CUser*)
081d9023 +0x241:  xor    $0x1,%eax
081d9026 +0x244:  test   %al,%al
081d9028 +0x246:  je     081d9034 <+0x252>
081d902a +0x248:  mov    $0x4,%eax
081d902f +0x24d:  jmp    081d9142 <+0x360>
081d9034 +0x252:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d9039 +0x257:  mov    %eax,(%esp)
081d903c +0x25a:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081d9041 +0x25f:  test   %al,%al
081d9043 +0x261:  jne    081d9055 <+0x273>
081d9045 +0x263:  mov    0xc(%ebp),%eax
081d9048 +0x266:  mov    %eax,(%esp)
081d904b +0x269:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d9050 +0x26e:  cmp    $0x3,%eax
081d9053 +0x271:  je     081d905c <+0x27a>
081d9055 +0x273:  mov    $0x1,%eax
081d905a +0x278:  jmp    081d9061 <+0x27f>
081d905c +0x27a:  mov    $0x0,%eax
081d9061 +0x27f:  test   %al,%al
081d9063 +0x281:  je     081d906f <+0x28d>
081d9065 +0x283:  mov    $0xffffffff,%eax
081d906a +0x288:  jmp    081d9142 <+0x360>
081d906f +0x28d:  mov    -0x14(%ebp),%eax
081d9072 +0x290:  movl   $0x1,0x4(%esp)
081d907a +0x298:  mov    %eax,(%esp)
081d907d +0x29b:  call   0822c97a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2024>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2024
081d9082 +0x2a0:  xor    $0x1,%eax
081d9085 +0x2a3:  test   %al,%al
081d9087 +0x2a5:  jne    081d90a3 <+0x2c1>
081d9089 +0x2a7:  mov    -0x10(%ebp),%eax
081d908c +0x2aa:  movl   $0x1,0x4(%esp)
081d9094 +0x2b2:  mov    %eax,(%esp)
081d9097 +0x2b5:  call   0822c97a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2024>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2024
081d909c +0x2ba:  xor    $0x1,%eax
081d909f +0x2bd:  test   %al,%al
081d90a1 +0x2bf:  je     081d90aa <+0x2c8>
081d90a3 +0x2c1:  mov    $0x1,%eax
081d90a8 +0x2c6:  jmp    081d90af <+0x2cd>
081d90aa +0x2c8:  mov    $0x0,%eax
081d90af +0x2cd:  test   %al,%al
081d90b1 +0x2cf:  je     081d90bd <+0x2db>
081d90b3 +0x2d1:  mov    $0x17,%eax
081d90b8 +0x2d6:  jmp    081d9142 <+0x360>
081d90bd +0x2db:  mov    -0x14(%ebp),%eax
081d90c0 +0x2de:  movl   $0x2,0x4(%esp)
081d90c8 +0x2e6:  mov    %eax,(%esp)
081d90cb +0x2e9:  call   0822c97a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2024>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2024
081d90d0 +0x2ee:  test   %al,%al
081d90d2 +0x2f0:  jne    081d90eb <+0x309>
081d90d4 +0x2f2:  mov    -0x10(%ebp),%eax
081d90d7 +0x2f5:  movl   $0x2,0x4(%esp)
081d90df +0x2fd:  mov    %eax,(%esp)
081d90e2 +0x300:  call   0822c97a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2024>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2024
081d90e7 +0x305:  test   %al,%al
081d90e9 +0x307:  je     081d90f2 <+0x310>
081d90eb +0x309:  mov    $0x1,%eax
081d90f0 +0x30e:  jmp    081d90f7 <+0x315>
081d90f2 +0x310:  mov    $0x0,%eax
081d90f7 +0x315:  test   %al,%al
081d90f9 +0x317:  je     081d9102 <+0x320>
081d90fb +0x319:  mov    $0x17,%eax
081d9100 +0x31e:  jmp    081d9142 <+0x360>
081d9102 +0x320:  mov    -0x14(%ebp),%edx
081d9105 +0x323:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d910a +0x328:  lea    -0x96(%ebp),%ecx
081d9110 +0x32e:  mov    %ecx,0x10(%esp)
081d9114 +0x332:  mov    %edx,0xc(%esp)
081d9118 +0x336:  movl   $0x28,0x8(%esp)
081d9120 +0x33e:  mov    0xc(%ebp),%edx
081d9123 +0x341:  mov    %edx,0x4(%esp)
081d9127 +0x345:  mov    %eax,(%esp)
081d912a +0x348:  call   082887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>  ; CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item const*)
081d912f +0x34d:  mov    %eax,-0xc(%ebp)
081d9132 +0x350:  cmpl   $0x0,-0xc(%ebp)
081d9136 +0x354:  je     081d913d <+0x35b>
081d9138 +0x356:  mov    -0xc(%ebp),%eax
081d913b +0x359:  jmp    081d9142 <+0x360>
081d913d +0x35b:  mov    $0x0,%eax
081d9142 +0x360:  mov    -0x4(%ebp),%ebx
081d9145 +0x363:  leave
081d9146 +0x364:  ret
081d9147 +0x365:  nop
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::check_error @ 0x81d8de2

/* Dispatcher_MonstercardBind::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_MonstercardBind::check_error
          (Dispatcher_MonstercardBind *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  int iVar5;
  GameWorld *this_00;
  undefined1 local_d7 [2];
  int local_d5;
  int local_d0;
  undefined1 local_9a [2];
  int local_98;
  int local_93;
  undefined1 local_5d [2];
  int local_5b;
  int local_56;
  MSG_BASE *local_20;
  CItem *local_1c;
  CItem *local_18;
  CItem *local_14;
  
  if (param_1 == (CUser *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      iVar3 = -1;
    }
    else {
      local_20 = param_2;
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_5d,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(pCVar4,local_5b);
      if (local_1c == (CItem *)0x0) {
        iVar3 = 0x11;
      }
      else {
        cVar2 = CItem::is_stackable(local_1c);
        if (cVar2 == '\x01') {
          if (*(int *)(local_1c + 0x330) == -1) {
            iVar3 = 0x11;
          }
          else if (local_56 < 1) {
            iVar3 = 0x16;
          }
          else {
            iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)local_9a,iVar3);
            pCVar4 = (CDataManager *)G_CDataManager();
            local_18 = (CItem *)CDataManager::find_item(pCVar4,local_98);
            if (local_18 == (CItem *)0x0) {
              iVar3 = 0x11;
            }
            else {
              cVar2 = CItem::is_stackable(local_18);
              if (cVar2 == '\x01') {
                if (local_93 < 1) {
                  iVar3 = 0x16;
                }
                else {
                  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_d7,iVar3);
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_14 = (CItem *)CDataManager::find_item(pCVar4,local_d5);
                  if (local_14 == (CItem *)0x0) {
                    iVar3 = 0x11;
                  }
                  else {
                    cVar2 = CItem::is_stackable(local_14);
                    if (cVar2 == '\x01') {
                      if (local_d0 < 1) {
                        iVar3 = 0x16;
                      }
                      else {
                        iVar3 = CItem::get_rarity(local_18);
                        iVar5 = CItem::get_rarity(local_14);
                        if (iVar3 == iVar5) {
                          cVar2 = check_need_slot(this,param_1);
                          if (cVar2 == '\x01') {
                            this_00 = (GameWorld *)G_GameWorld();
                            cVar2 = GameWorld::IsPVPChannel(this_00);
                            if ((cVar2 == '\0') && (iVar3 = CUser::get_state(param_1), iVar3 == 3))
                            {
                              bVar1 = false;
                            }
                            else {
                              bVar1 = true;
                            }
                            if (bVar1) {
                              iVar3 = -1;
                            }
                            else {
                              cVar2 = CItem::hasCategory(local_18,1);
                              if ((cVar2 == '\x01') &&
                                 (cVar2 = CItem::hasCategory(local_14,1), cVar2 == '\x01')) {
                                bVar1 = false;
                              }
                              else {
                                bVar1 = true;
                              }
                              if (bVar1) {
                                iVar3 = 0x17;
                              }
                              else {
                                cVar2 = CItem::hasCategory(local_18,2);
                                if ((cVar2 == '\0') &&
                                   (cVar2 = CItem::hasCategory(local_14,2), cVar2 == '\0')) {
                                  bVar1 = false;
                                }
                                else {
                                  bVar1 = true;
                                }
                                if (bVar1) {
                                  iVar3 = 0x17;
                                }
                                else {
                                  iVar3 = CSecu_ProtectionField::CheckItemRarity
                                                    (GlobalData::s_pSecuProtectionField,param_1,0x28
                                                     ,local_18,local_9a);
                                  if (iVar3 == 0) {
                                    iVar3 = 0;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar3 = 4;
                          }
                        }
                        else {
                          iVar3 = 0x13;
                        }
                      }
                    }
                    else {
                      iVar3 = 0x11;
                    }
                  }
                }
              }
              else {
                iVar3 = 0x11;
              }
            }
          }
        }
        else {
          iVar3 = 0x11;
        }
      }
    }
  }
  return iVar3;
}
```
