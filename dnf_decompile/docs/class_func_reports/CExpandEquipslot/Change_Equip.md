# Change_Equip

`_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii`

`CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499a48  _ZN16CExpandEquipslot12Change_EquipEP5CUseriiii
#           CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)
# range [0x08499a48, 0x08499d19]
08499a48 +0x000:  push   %ebp
08499a49 +0x001:  mov    %esp,%ebp
08499a4b +0x003:  push   %ebx
08499a4c +0x004:  sub    $0xb4,%esp
08499a52 +0x00a:  cmpl   $0x0,0xc(%ebp)
08499a56 +0x00e:  jne    08499a8e <+0x46>
08499a58 +0x010:  movl   $"Fail Change_Equip : pUser is NULL",0x10(%esp)
08499a60 +0x018:  movl   $0xd8,0xc(%esp)
08499a68 +0x020:  movl   $&_ZZN16CExpandEquipslot12Change_EquipEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08499a70 +0x028:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
08499a78 +0x030:  movl   $0x1,(%esp)
08499a7f +0x037:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08499a84 +0x03c:  mov    $0x1,%eax
08499a89 +0x041:  jmp    08499d14 <+0x2cc>
08499a8e +0x046:  mov    0xc(%ebp),%eax
08499a91 +0x049:  mov    %eax,(%esp)
08499a94 +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08499a99 +0x051:  cmp    $0x2,%eax
08499a9c +0x054:  setle  %al
08499a9f +0x057:  test   %al,%al
08499aa1 +0x059:  je     08499ad9 <+0x91>
08499aa3 +0x05b:  movl   $"Fail Change_Equip : pUser is not valid state",0x10(%esp)
08499aab +0x063:  movl   $0xde,0xc(%esp)
08499ab3 +0x06b:  movl   $&_ZZN16CExpandEquipslot12Change_EquipEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08499abb +0x073:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
08499ac3 +0x07b:  movl   $0x1,(%esp)
08499aca +0x082:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08499acf +0x087:  mov    $0x13,%eax
08499ad4 +0x08c:  jmp    08499d14 <+0x2cc>
08499ad9 +0x091:  mov    0xc(%ebp),%eax
08499adc +0x094:  mov    %eax,(%esp)
08499adf +0x097:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08499ae4 +0x09c:  mov    %eax,-0x1c(%ebp)
08499ae7 +0x09f:  mov    0x10(%ebp),%eax
08499aea +0x0a2:  test   %eax,%eax
08499aec +0x0a4:  jne    08499d0f <+0x2c7>
08499af2 +0x0aa:  mov    0xc(%ebp),%eax
08499af5 +0x0ad:  mov    %eax,(%esp)
08499af8 +0x0b0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08499afd +0x0b5:  mov    0x14(%ebp),%edx
08499b00 +0x0b8:  mov    %edx,0x8(%esp)
08499b04 +0x0bc:  movl   $0x1,0x4(%esp)
08499b0c +0x0c4:  mov    %eax,(%esp)
08499b0f +0x0c7:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08499b14 +0x0cc:  mov    %eax,-0x18(%ebp)
08499b17 +0x0cf:  mov    -0x18(%ebp),%eax
08499b1a +0x0d2:  mov    0x2(%eax),%eax
08499b1d +0x0d5:  mov    %eax,%ebx
08499b1f +0x0d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08499b24 +0x0dc:  mov    %ebx,0x4(%esp)
08499b28 +0x0e0:  mov    %eax,(%esp)
08499b2b +0x0e3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08499b30 +0x0e8:  mov    %eax,-0x14(%ebp)
08499b33 +0x0eb:  mov    0x18(%ebp),%eax
08499b36 +0x0ee:  cmp    $0x12,%eax
08499b39 +0x0f1:  jne    08499d08 <+0x2c0>
08499b3f +0x0f7:  mov    0x14(%ebp),%eax
08499b42 +0x0fa:  mov    %eax,0x8(%esp)
08499b46 +0x0fe:  movl   $0x1,0x4(%esp)
08499b4e +0x106:  mov    -0x1c(%ebp),%eax
08499b51 +0x109:  mov    %eax,(%esp)
08499b54 +0x10c:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
08499b59 +0x111:  xor    $0x1,%eax
08499b5c +0x114:  test   %al,%al
08499b5e +0x116:  je     08499b6a <+0x122>
08499b60 +0x118:  mov    $0x1,%eax
08499b65 +0x11d:  jmp    08499d14 <+0x2cc>
08499b6a +0x122:  mov    0x1c(%ebp),%eax
08499b6d +0x125:  mov    %eax,0x8(%esp)
08499b71 +0x129:  movl   $0x5,0x4(%esp)
08499b79 +0x131:  mov    -0x1c(%ebp),%eax
08499b7c +0x134:  mov    %eax,(%esp)
08499b7f +0x137:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
08499b84 +0x13c:  xor    $0x1,%eax
08499b87 +0x13f:  test   %al,%al
08499b89 +0x141:  je     08499b95 <+0x14d>
08499b8b +0x143:  mov    $0x1,%eax
08499b90 +0x148:  jmp    08499d14 <+0x2cc>
08499b95 +0x14d:  mov    0xc(%ebp),%eax
08499b98 +0x150:  mov    %eax,(%esp)
08499b9b +0x153:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
08499ba0 +0x158:  test   %al,%al
08499ba2 +0x15a:  sete   %al
08499ba5 +0x15d:  test   %al,%al
08499ba7 +0x15f:  je     08499be3 <+0x19b>
08499ba9 +0x161:  cmpl   $0x0,-0x14(%ebp)
08499bad +0x165:  je     08499bd0 <+0x188>
08499baf +0x167:  movl   $0x1,0x4(%esp)
08499bb7 +0x16f:  mov    -0x14(%ebp),%eax
08499bba +0x172:  mov    %eax,(%esp)
08499bbd +0x175:  call   0822c87c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f26
08499bc2 +0x17a:  xor    $0x1,%eax
08499bc5 +0x17d:  test   %al,%al
08499bc7 +0x17f:  je     08499bd0 <+0x188>
08499bc9 +0x181:  mov    $0x1,%eax
08499bce +0x186:  jmp    08499bd5 <+0x18d>
08499bd0 +0x188:  mov    $0x0,%eax
08499bd5 +0x18d:  test   %al,%al
08499bd7 +0x18f:  je     08499be3 <+0x19b>
08499bd9 +0x191:  mov    $0x1,%eax
08499bde +0x196:  jmp    08499d14 <+0x2cc>
08499be3 +0x19b:  lea    -0x96(%ebp),%eax
08499be9 +0x1a1:  mov    0x14(%ebp),%edx
08499bec +0x1a4:  mov    %edx,0xc(%esp)
08499bf0 +0x1a8:  movl   $0x1,0x8(%esp)
08499bf8 +0x1b0:  mov    -0x1c(%ebp),%edx
08499bfb +0x1b3:  mov    %edx,0x4(%esp)
08499bff +0x1b7:  mov    %eax,(%esp)
08499c02 +0x1ba:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08499c07 +0x1bf:  sub    $0x4,%esp
08499c0a +0x1c2:  movzbl -0x96(%ebp),%eax
08499c11 +0x1c9:  test   %al,%al
08499c13 +0x1cb:  je     08499c42 <+0x1fa>
08499c15 +0x1cd:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08499c1a +0x1d2:  movl   $0x16,0x8(%esp)
08499c22 +0x1da:  mov    0xc(%ebp),%edx
08499c25 +0x1dd:  mov    %edx,0x4(%esp)
08499c29 +0x1e1:  mov    %eax,(%esp)
08499c2c +0x1e4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08499c31 +0x1e9:  mov    %eax,-0xc(%ebp)
08499c34 +0x1ec:  cmpl   $0x0,-0xc(%ebp)
08499c38 +0x1f0:  je     08499c42 <+0x1fa>
08499c3a +0x1f2:  mov    -0xc(%ebp),%eax
08499c3d +0x1f5:  jmp    08499d14 <+0x2cc>
08499c42 +0x1fa:  cmpl   $0x0,0xc(%ebp)
08499c46 +0x1fe:  je     08499ca9 <+0x261>
08499c48 +0x200:  mov    0x14(%ebp),%eax
08499c4b +0x203:  mov    %eax,0x8(%esp)
08499c4f +0x207:  movl   $0x1,0x4(%esp)
08499c57 +0x20f:  mov    0xc(%ebp),%eax
08499c5a +0x212:  mov    %eax,(%esp)
08499c5d +0x215:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08499c62 +0x21a:  test   %al,%al
08499c64 +0x21c:  je     08499c99 <+0x251>
08499c66 +0x21e:  lea    -0x59(%ebp),%eax
08499c69 +0x221:  mov    0x14(%ebp),%edx
08499c6c +0x224:  mov    %edx,0xc(%esp)
08499c70 +0x228:  movl   $0x1,0x8(%esp)
08499c78 +0x230:  mov    -0x1c(%ebp),%edx
08499c7b +0x233:  mov    %edx,0x4(%esp)
08499c7f +0x237:  mov    %eax,(%esp)
08499c82 +0x23a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08499c87 +0x23f:  sub    $0x4,%esp
08499c8a +0x242:  movzbl -0x59(%ebp),%eax
08499c8e +0x246:  test   %al,%al
08499c90 +0x248:  je     08499c99 <+0x251>
08499c92 +0x24a:  mov    $0x1,%eax
08499c97 +0x24f:  jmp    08499c9e <+0x256>
08499c99 +0x251:  mov    $0x0,%eax
08499c9e +0x256:  test   %al,%al
08499ca0 +0x258:  je     08499ca9 <+0x261>
08499ca2 +0x25a:  mov    $0xd5,%eax
08499ca7 +0x25f:  jmp    08499d14 <+0x2cc>
08499ca9 +0x261:  movl   $0x0,-0x10(%ebp)
08499cb0 +0x268:  mov    0x1c(%ebp),%eax
08499cb3 +0x26b:  sub    $0xa,%eax
08499cb6 +0x26e:  mov    %eax,0x14(%esp)
08499cba +0x272:  mov    0x18(%ebp),%eax
08499cbd +0x275:  mov    %eax,0x10(%esp)
08499cc1 +0x279:  mov    0x14(%ebp),%eax
08499cc4 +0x27c:  mov    %eax,0xc(%esp)
08499cc8 +0x280:  mov    0x10(%ebp),%eax
08499ccb +0x283:  mov    %eax,0x8(%esp)
08499ccf +0x287:  mov    0xc(%ebp),%eax
08499cd2 +0x28a:  mov    %eax,0x4(%esp)
08499cd6 +0x28e:  mov    0x8(%ebp),%eax
08499cd9 +0x291:  mov    %eax,(%esp)
08499cdc +0x294:  call   08499f84 <_ZN16CExpandEquipslot9Move_ItemEP5CUseriiii>  ; CExpandEquipslot::Move_Item(CUser*, int, int, int, int)
08499ce1 +0x299:  mov    %eax,-0x10(%ebp)
08499ce4 +0x29c:  cmpl   $0x0,-0x10(%ebp)
08499ce8 +0x2a0:  setne  %al
08499ceb +0x2a3:  test   %al,%al
08499ced +0x2a5:  je     08499cf4 <+0x2ac>
08499cef +0x2a7:  mov    -0x10(%ebp),%eax
08499cf2 +0x2aa:  jmp    08499d14 <+0x2cc>
08499cf4 +0x2ac:  mov    0x8(%ebp),%eax
08499cf7 +0x2af:  mov    %eax,(%esp)
08499cfa +0x2b2:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08499cff +0x2b7:  nop
08499d00 +0x2b8:  nop
08499d01 +0x2b9:  mov    $0x0,%eax
08499d06 +0x2be:  jmp    08499d14 <+0x2cc>
08499d08 +0x2c0:  mov    $0x1,%eax
08499d0d +0x2c5:  jmp    08499d14 <+0x2cc>
08499d0f +0x2c7:  mov    $0x1,%eax
08499d14 +0x2cc:  mov    -0x4(%ebp),%ebx
08499d17 +0x2cf:  leave
08499d18 +0x2d0:  ret
08499d19 +0x2d1:  nop
```

## 反编译 C

```c
// CExpandEquipslot::Change_Equip @ 0x8499a48

/* CExpandEquipslot::Change_Equip(CUser*, int, int, int, int) */

int __thiscall
CExpandEquipslot::Change_Equip
          (CExpandEquipslot *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CDataManager *this_01;
  char local_9a [61];
  char local_5d [61];
  CInventory *local_20;
  int local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp",
               "int CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)",0xd8,
               "Fail Change_Equip : pUser is NULL");
    local_14 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp",
                 "int CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)",0xde,
                 "Fail Change_Equip : pUser is not valid state");
      local_14 = 0x13;
    }
    else {
      local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      if (param_2 == 0) {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_1c = CInventory::GetInvenRef(this_00,1,param_3);
        iVar3 = *(int *)(local_1c + 2);
        this_01 = (CDataManager *)G_CDataManager();
        local_18 = (CItem *)CDataManager::find_item(this_01,iVar3);
        if (param_4 == 0x12) {
          cVar2 = CInventory::CheckValidSlot(local_20,1,param_3);
          if (cVar2 == '\x01') {
            cVar2 = CInventory::CheckValidSlot(local_20,5,param_5);
            if (cVar2 == '\x01') {
              cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
              if (cVar2 == '\0') {
                if ((local_18 == (CItem *)0x0) ||
                   (cVar2 = CItem::IsEnableWorld(local_18,1), cVar2 == '\x01')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  return 1;
                }
              }
              iVar3 = param_3;
              CInventory::GetInvenSlot((int)local_9a,(int)local_20);
              if ((local_9a[0] == '\0') ||
                 (local_14 = CSecu_ProtectionField::Check
                                       (GlobalData::s_pSecuProtectionField,param_1,0x16,iVar3),
                 local_10 = local_14, local_14 == 0)) {
                if (param_1 != (CUser *)0x0) {
                  cVar2 = CUser::CheckItemLock(param_1,1,param_3);
                  if ((cVar2 == '\0') ||
                     (CInventory::GetInvenSlot((int)local_5d,(int)local_20), local_5d[0] == '\0')) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    return 0xd5;
                  }
                }
                local_14 = 0;
                local_14 = Move_Item(this,param_1,0,param_3,0x12,param_5 + -10);
                if (local_14 == 0) {
                  charac_expand::CData::alter((CData *)this);
                  local_14 = 0;
                }
              }
            }
            else {
              local_14 = 1;
            }
          }
          else {
            local_14 = 1;
          }
        }
        else {
          local_14 = 1;
        }
      }
      else {
        local_14 = 1;
      }
    }
  }
  return local_14;
}
```
