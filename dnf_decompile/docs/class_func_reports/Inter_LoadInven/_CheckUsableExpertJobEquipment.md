# _CheckUsableExpertJobEquipment

`_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser`

`Inter_LoadInven::_CheckUsableExpertJobEquipment(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadInven` | `0x084c4b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c4b38  _ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser
#           Inter_LoadInven::_CheckUsableExpertJobEquipment(CUser*)
# range [0x084c4b38, 0x084c4d37]
084c4b38 +0x000:  push   %ebp
084c4b39 +0x001:  mov    %esp,%ebp
084c4b3b +0x003:  push   %ebx
084c4b3c +0x004:  sub    $0xa4,%esp
084c4b42 +0x00a:  mov    0xc(%ebp),%eax
084c4b45 +0x00d:  mov    %eax,(%esp)
084c4b48 +0x010:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c4b4d +0x015:  test   %eax,%eax
084c4b4f +0x017:  sete   %al
084c4b52 +0x01a:  test   %al,%al
084c4b54 +0x01c:  jne    084c4d32 <+0x1fa>
084c4b5a +0x022:  mov    0xc(%ebp),%eax
084c4b5d +0x025:  mov    %eax,(%esp)
084c4b60 +0x028:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c4b65 +0x02d:  mov    %eax,-0x14(%ebp)
084c4b68 +0x030:  movl   $0xa,-0x10(%ebp)
084c4b6f +0x037:  jmp    084c4d21 <+0x1e9>
084c4b74 +0x03c:  lea    -0x51(%ebp),%eax
084c4b77 +0x03f:  mov    -0x10(%ebp),%edx
084c4b7a +0x042:  mov    %edx,0xc(%esp)
084c4b7e +0x046:  movl   $0x0,0x8(%esp)
084c4b86 +0x04e:  mov    -0x14(%ebp),%edx
084c4b89 +0x051:  mov    %edx,0x4(%esp)
084c4b8d +0x055:  mov    %eax,(%esp)
084c4b90 +0x058:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084c4b95 +0x05d:  sub    $0x4,%esp
084c4b98 +0x060:  mov    -0x4f(%ebp),%eax
084c4b9b +0x063:  test   %eax,%eax
084c4b9d +0x065:  je     084c4d16 <+0x1de>
084c4ba3 +0x06b:  mov    -0x4f(%ebp),%eax
084c4ba6 +0x06e:  mov    %eax,%ebx
084c4ba8 +0x070:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c4bad +0x075:  mov    %ebx,0x4(%esp)
084c4bb1 +0x079:  mov    %eax,(%esp)
084c4bb4 +0x07c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084c4bb9 +0x081:  mov    %eax,-0xc(%ebp)
084c4bbc +0x084:  cmpl   $0x0,-0xc(%ebp)
084c4bc0 +0x088:  je     084c4d19 <+0x1e1>
084c4bc6 +0x08e:  mov    -0xc(%ebp),%eax
084c4bc9 +0x091:  mov    %eax,(%esp)
084c4bcc +0x094:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084c4bd1 +0x099:  test   %al,%al
084c4bd3 +0x09b:  jne    084c4d1c <+0x1e4>
084c4bd9 +0x0a1:  mov    0xc(%ebp),%eax
084c4bdc +0x0a4:  mov    %eax,(%esp)
084c4bdf +0x0a7:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
084c4be4 +0x0ac:  mov    %eax,0x4(%esp)
084c4be8 +0x0b0:  mov    0xc(%ebp),%eax
084c4beb +0x0b3:  mov    %eax,(%esp)
084c4bee +0x0b6:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
084c4bf3 +0x0bb:  mov    %eax,%ebx
084c4bf5 +0x0bd:  mov    0xc(%ebp),%eax
084c4bf8 +0x0c0:  mov    %eax,(%esp)
084c4bfb +0x0c3:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
084c4c00 +0x0c8:  mov    %ebx,0x8(%esp)
084c4c04 +0x0cc:  mov    %eax,0x4(%esp)
084c4c08 +0x0d0:  mov    -0xc(%ebp),%eax
084c4c0b +0x0d3:  mov    %eax,(%esp)
084c4c0e +0x0d6:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
084c4c13 +0x0db:  xor    $0x1,%eax
084c4c16 +0x0de:  test   %al,%al
084c4c18 +0x0e0:  je     084c4d1d <+0x1e5>
084c4c1e +0x0e6:  mov    -0x10(%ebp),%eax
084c4c21 +0x0e9:  mov    %eax,0x8(%esp)
084c4c25 +0x0ed:  movl   $0x0,0x4(%esp)
084c4c2d +0x0f5:  mov    -0x14(%ebp),%eax
084c4c30 +0x0f8:  mov    %eax,(%esp)
084c4c33 +0x0fb:  call   084fb32a <_ZN10CInventory9ResetSlotEii>  ; CInventory::ResetSlot(int, int)
084c4c38 +0x100:  movl   $0x0,0x4c(%esp)
084c4c40 +0x108:  movl   $0x0,0x48(%esp)
084c4c48 +0x110:  movl   $0xe,0x44(%esp)
084c4c50 +0x118:  mov    -0x51(%ebp),%eax
084c4c53 +0x11b:  mov    %eax,0x4(%esp)
084c4c57 +0x11f:  mov    -0x4d(%ebp),%eax
084c4c5a +0x122:  mov    %eax,0x8(%esp)
084c4c5e +0x126:  mov    -0x49(%ebp),%eax
084c4c61 +0x129:  mov    %eax,0xc(%esp)
084c4c65 +0x12d:  mov    -0x45(%ebp),%eax
084c4c68 +0x130:  mov    %eax,0x10(%esp)
084c4c6c +0x134:  mov    -0x41(%ebp),%eax
084c4c6f +0x137:  mov    %eax,0x14(%esp)
084c4c73 +0x13b:  mov    -0x3d(%ebp),%eax
084c4c76 +0x13e:  mov    %eax,0x18(%esp)
084c4c7a +0x142:  mov    -0x39(%ebp),%eax
084c4c7d +0x145:  mov    %eax,0x1c(%esp)
084c4c81 +0x149:  mov    -0x35(%ebp),%eax
084c4c84 +0x14c:  mov    %eax,0x20(%esp)
084c4c88 +0x150:  mov    -0x31(%ebp),%eax
084c4c8b +0x153:  mov    %eax,0x24(%esp)
084c4c8f +0x157:  mov    -0x2d(%ebp),%eax
084c4c92 +0x15a:  mov    %eax,0x28(%esp)
084c4c96 +0x15e:  mov    -0x29(%ebp),%eax
084c4c99 +0x161:  mov    %eax,0x2c(%esp)
084c4c9d +0x165:  mov    -0x25(%ebp),%eax
084c4ca0 +0x168:  mov    %eax,0x30(%esp)
084c4ca4 +0x16c:  mov    -0x21(%ebp),%eax
084c4ca7 +0x16f:  mov    %eax,0x34(%esp)
084c4cab +0x173:  mov    -0x1d(%ebp),%eax
084c4cae +0x176:  mov    %eax,0x38(%esp)
084c4cb2 +0x17a:  mov    -0x19(%ebp),%eax
084c4cb5 +0x17d:  mov    %eax,0x3c(%esp)
084c4cb9 +0x181:  movzbl -0x15(%ebp),%eax
084c4cbd +0x185:  mov    %al,0x40(%esp)
084c4cc1 +0x189:  mov    -0x14(%ebp),%eax
084c4cc4 +0x18c:  mov    %eax,(%esp)
084c4cc7 +0x18f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084c4ccc +0x194:  shr    $0x1f,%eax
084c4ccf +0x197:  test   %al,%al
084c4cd1 +0x199:  je     084c4d1d <+0x1e5>
084c4cd3 +0x19b:  mov    0xc(%ebp),%eax
084c4cd6 +0x19e:  mov    %eax,(%esp)
084c4cd9 +0x1a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c4cde +0x1a6:  movl   $0x0,0x18(%esp)
084c4ce6 +0x1ae:  movl   $0x0,0x14(%esp)
084c4cee +0x1b6:  movl   $0x1,0x10(%esp)
084c4cf6 +0x1be:  mov    %eax,0xc(%esp)
084c4cfa +0x1c2:  movl   $0x0,0x8(%esp)
084c4d02 +0x1ca:  lea    -0x51(%ebp),%eax
084c4d05 +0x1cd:  mov    %eax,0x4(%esp)
084c4d09 +0x1d1:  mov    0xc(%ebp),%eax
084c4d0c +0x1d4:  mov    %eax,(%esp)
084c4d0f +0x1d7:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
084c4d14 +0x1dc:  jmp    084c4d1d <+0x1e5>
084c4d16 +0x1de:  nop
084c4d17 +0x1df:  jmp    084c4d1d <+0x1e5>
084c4d19 +0x1e1:  nop
084c4d1a +0x1e2:  jmp    084c4d1d <+0x1e5>
084c4d1c +0x1e4:  nop
084c4d1d +0x1e5:  addl   $0x1,-0x10(%ebp)
084c4d21 +0x1e9:  cmpl   $0x15,-0x10(%ebp)
084c4d25 +0x1ed:  setle  %al
084c4d28 +0x1f0:  test   %al,%al
084c4d2a +0x1f2:  jne    084c4b74 <+0x3c>
084c4d30 +0x1f8:  jmp    084c4d33 <+0x1fb>
084c4d32 +0x1fa:  nop
084c4d33 +0x1fb:  mov    -0x4(%ebp),%ebx
084c4d36 +0x1fe:  leave
084c4d37 +0x1ff:  ret
```

## 反编译 C

```c
// Inter_LoadInven::_CheckUsableExpertJobEquipment @ 0x84c4b38

/* Inter_LoadInven::_CheckUsableExpertJobEquipment(CUser*) */

void __thiscall
Inter_LoadInven::_CheckUsableExpertJobEquipment(Inter_LoadInven *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined2 uStack_4f;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  CInventory *local_18;
  int local_14;
  CItem *local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
      CInventory::GetInvenSlot((int)&local_55,(int)local_18);
      if (CONCAT22(uStack_51,uStack_53) != 0) {
        iVar2 = CONCAT22(uStack_51,uStack_53);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar2);
        if ((local_10 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_10), cVar1 == '\0')) {
          iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
          uVar3 = CUser::GetCurExpertJobLevel(param_1,iVar2);
          uVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
          cVar1 = CItem::isExpertJobUsable(local_10,uVar4,uVar3);
          if (cVar1 != '\x01') {
            CInventory::ResetSlot(local_18,0,local_14);
            iVar2 = CInventory::insertItemIntoInventory
                              (local_18,CONCAT22(uStack_53,local_55),CONCAT22(uStack_4f,uStack_51),
                               local_4d,local_49,local_45,local_41,local_3d,local_39,local_35,
                               local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,0xe,0,
                               0);
            if (iVar2 < 0) {
              uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewMail
                        (param_1,(Inven_Item *)&local_55,0,uVar5,true,(char *)0x0,0);
            }
          }
        }
      }
    }
  }
  return;
}
```
