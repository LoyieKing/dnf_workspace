# check_error

`_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss`

`expert_extraction::CExtraction::check_error(CUser*, char, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a2a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a2a5e  _ZN17expert_extraction11CExtraction11check_errorEP5CUsercss
#           expert_extraction::CExtraction::check_error(CUser*, char, short, short)
# range [0x084a2a5e, 0x084a2ceb]
084a2a5e +0x000:  push   %ebp
084a2a5f +0x001:  mov    %esp,%ebp
084a2a61 +0x003:  push   %ebx
084a2a62 +0x004:  sub    $0xc4,%esp
084a2a68 +0x00a:  mov    0x10(%ebp),%ecx
084a2a6b +0x00d:  mov    0x14(%ebp),%edx
084a2a6e +0x010:  mov    0x18(%ebp),%eax
084a2a71 +0x013:  mov    %cl,-0x9c(%ebp)
084a2a77 +0x019:  mov    %dx,-0xa0(%ebp)
084a2a7e +0x020:  mov    %ax,-0xa4(%ebp)
084a2a85 +0x027:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a2a8a +0x02c:  mov    %eax,(%esp)
084a2a8d +0x02f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
084a2a92 +0x034:  test   %al,%al
084a2a94 +0x036:  je     084a2aa0 <+0x42>
084a2a96 +0x038:  mov    $0x60,%eax
084a2a9b +0x03d:  jmp    084a2ce6 <+0x288>
084a2aa0 +0x042:  mov    0xc(%ebp),%eax
084a2aa3 +0x045:  mov    %eax,(%esp)
084a2aa6 +0x048:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
084a2aab +0x04d:  movsbl -0x9c(%ebp),%edx
084a2ab2 +0x054:  cmp    %edx,%eax
084a2ab4 +0x056:  setne  %al
084a2ab7 +0x059:  test   %al,%al
084a2ab9 +0x05b:  je     084a2ac5 <+0x67>
084a2abb +0x05d:  mov    $0x13,%eax
084a2ac0 +0x062:  jmp    084a2ce6 <+0x288>
084a2ac5 +0x067:  movswl -0xa0(%ebp),%ebx
084a2acc +0x06e:  mov    0xc(%ebp),%eax
084a2acf +0x071:  mov    %eax,(%esp)
084a2ad2 +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a2ad7 +0x079:  lea    -0x55(%ebp),%edx
084a2ada +0x07c:  mov    %ebx,0xc(%esp)
084a2ade +0x080:  movl   $0x1,0x8(%esp)
084a2ae6 +0x088:  mov    %eax,0x4(%esp)
084a2aea +0x08c:  mov    %edx,(%esp)
084a2aed +0x08f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a2af2 +0x094:  sub    $0x4,%esp
084a2af5 +0x097:  mov    -0x53(%ebp),%eax
084a2af8 +0x09a:  mov    %eax,%ebx
084a2afa +0x09c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a2aff +0x0a1:  mov    %ebx,0x4(%esp)
084a2b03 +0x0a5:  mov    %eax,(%esp)
084a2b06 +0x0a8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a2b0b +0x0ad:  mov    %eax,-0x18(%ebp)
084a2b0e +0x0b0:  cmpl   $0x0,-0x18(%ebp)
084a2b12 +0x0b4:  jne    084a2b1e <+0xc0>
084a2b14 +0x0b6:  mov    $0x11,%eax
084a2b19 +0x0bb:  jmp    084a2ce6 <+0x288>
084a2b1e +0x0c0:  mov    -0x18(%ebp),%eax
084a2b21 +0x0c3:  mov    %eax,(%esp)
084a2b24 +0x0c6:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084a2b29 +0x0cb:  xor    $0x1,%eax
084a2b2c +0x0ce:  test   %al,%al
084a2b2e +0x0d0:  je     084a2b3a <+0xdc>
084a2b30 +0x0d2:  mov    $0x11,%eax
084a2b35 +0x0d7:  jmp    084a2ce6 <+0x288>
084a2b3a +0x0dc:  movswl -0xa4(%ebp),%ebx
084a2b41 +0x0e3:  mov    0xc(%ebp),%eax
084a2b44 +0x0e6:  mov    %eax,(%esp)
084a2b47 +0x0e9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a2b4c +0x0ee:  lea    -0x92(%ebp),%edx
084a2b52 +0x0f4:  mov    %ebx,0xc(%esp)
084a2b56 +0x0f8:  movl   $0x1,0x8(%esp)
084a2b5e +0x100:  mov    %eax,0x4(%esp)
084a2b62 +0x104:  mov    %edx,(%esp)
084a2b65 +0x107:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084a2b6a +0x10c:  sub    $0x4,%esp
084a2b6d +0x10f:  mov    -0x90(%ebp),%eax
084a2b73 +0x115:  mov    %eax,%ebx
084a2b75 +0x117:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a2b7a +0x11c:  mov    %ebx,0x4(%esp)
084a2b7e +0x120:  mov    %eax,(%esp)
084a2b81 +0x123:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a2b86 +0x128:  mov    %eax,-0x14(%ebp)
084a2b89 +0x12b:  cmpl   $0x0,-0x14(%ebp)
084a2b8d +0x12f:  jne    084a2b99 <+0x13b>
084a2b8f +0x131:  mov    $0x11,%eax
084a2b94 +0x136:  jmp    084a2ce6 <+0x288>
084a2b99 +0x13b:  mov    -0x14(%ebp),%eax
084a2b9c +0x13e:  mov    (%eax),%eax
084a2b9e +0x140:  add    $0x10,%eax
084a2ba1 +0x143:  mov    (%eax),%edx
084a2ba3 +0x145:  mov    -0x14(%ebp),%eax
084a2ba6 +0x148:  mov    %eax,(%esp)
084a2ba9 +0x14b:  call   *%edx
084a2bab +0x14d:  test   %al,%al
084a2bad +0x14f:  je     084a2bb9 <+0x15b>
084a2baf +0x151:  mov    $0x11,%eax
084a2bb4 +0x156:  jmp    084a2ce6 <+0x288>
084a2bb9 +0x15b:  mov    -0x14(%ebp),%eax
084a2bbc +0x15e:  mov    (%eax),%eax
084a2bbe +0x160:  add    $0x14,%eax
084a2bc1 +0x163:  mov    (%eax),%edx
084a2bc3 +0x165:  mov    -0x14(%ebp),%eax
084a2bc6 +0x168:  mov    %eax,(%esp)
084a2bc9 +0x16b:  call   *%edx
084a2bcb +0x16d:  test   %al,%al
084a2bcd +0x16f:  je     084a2bd9 <+0x17b>
084a2bcf +0x171:  mov    $0x11,%eax
084a2bd4 +0x176:  jmp    084a2ce6 <+0x288>
084a2bd9 +0x17b:  mov    -0x14(%ebp),%eax
084a2bdc +0x17e:  mov    (%eax),%eax
084a2bde +0x180:  add    $0xc,%eax
084a2be1 +0x183:  mov    (%eax),%edx
084a2be3 +0x185:  mov    -0x14(%ebp),%eax
084a2be6 +0x188:  mov    %eax,(%esp)
084a2be9 +0x18b:  call   *%edx
084a2beb +0x18d:  cmp    $0xb,%eax
084a2bee +0x190:  sete   %al
084a2bf1 +0x193:  test   %al,%al
084a2bf3 +0x195:  je     084a2bff <+0x1a1>
084a2bf5 +0x197:  mov    $0x11,%eax
084a2bfa +0x19c:  jmp    084a2ce6 <+0x288>
084a2bff +0x1a1:  mov    -0x14(%ebp),%eax
084a2c02 +0x1a4:  mov    %eax,(%esp)
084a2c05 +0x1a7:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084a2c0a +0x1ac:  cmp    $0x2,%eax
084a2c0d +0x1af:  setne  %al
084a2c10 +0x1b2:  test   %al,%al
084a2c12 +0x1b4:  je     084a2c1e <+0x1c0>
084a2c14 +0x1b6:  mov    $0x8c,%eax
084a2c19 +0x1bb:  jmp    084a2ce6 <+0x288>
084a2c1e +0x1c0:  lea    -0x92(%ebp),%eax
084a2c24 +0x1c6:  add    $0x11,%eax
084a2c27 +0x1c9:  mov    %eax,(%esp)
084a2c2a +0x1cc:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
084a2c2f +0x1d1:  xor    $0x1,%eax
084a2c32 +0x1d4:  test   %al,%al
084a2c34 +0x1d6:  je     084a2c40 <+0x1e2>
084a2c36 +0x1d8:  mov    $0xae,%eax
084a2c3b +0x1dd:  jmp    084a2ce6 <+0x288>
084a2c40 +0x1e2:  mov    -0x14(%ebp),%eax
084a2c43 +0x1e5:  mov    (%eax),%eax
084a2c45 +0x1e7:  add    $0x38,%eax
084a2c48 +0x1ea:  mov    (%eax),%edx
084a2c4a +0x1ec:  mov    -0x14(%ebp),%eax
084a2c4d +0x1ef:  mov    %eax,(%esp)
084a2c50 +0x1f2:  call   *%edx
084a2c52 +0x1f4:  test   %al,%al
084a2c54 +0x1f6:  je     084a2c60 <+0x202>
084a2c56 +0x1f8:  mov    $0x17,%eax
084a2c5b +0x1fd:  jmp    084a2ce6 <+0x288>
084a2c60 +0x202:  mov    -0x14(%ebp),%eax
084a2c63 +0x205:  mov    %eax,(%esp)
084a2c66 +0x208:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084a2c6b +0x20d:  mov    %eax,-0x10(%ebp)
084a2c6e +0x210:  mov    -0x10(%ebp),%eax
084a2c71 +0x213:  cmp    $0x2,%eax
084a2c74 +0x216:  jne    084a2c7d <+0x21f>
084a2c76 +0x218:  mov    $0x11,%eax
084a2c7b +0x21d:  jmp    084a2ce6 <+0x288>
084a2c7d +0x21f:  movswl -0xa4(%ebp),%eax
084a2c84 +0x226:  mov    %eax,0x8(%esp)
084a2c88 +0x22a:  movl   $0x1,0x4(%esp)
084a2c90 +0x232:  mov    0xc(%ebp),%eax
084a2c93 +0x235:  mov    %eax,(%esp)
084a2c96 +0x238:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
084a2c9b +0x23d:  test   %al,%al
084a2c9d +0x23f:  je     084a2ca6 <+0x248>
084a2c9f +0x241:  mov    $0xd5,%eax
084a2ca4 +0x246:  jmp    084a2ce6 <+0x288>
084a2ca6 +0x248:  mov    -0x14(%ebp),%edx
084a2ca9 +0x24b:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
084a2cae +0x250:  lea    -0x92(%ebp),%ecx
084a2cb4 +0x256:  mov    %ecx,0x10(%esp)
084a2cb8 +0x25a:  mov    %edx,0xc(%esp)
084a2cbc +0x25e:  movl   $0x28,0x8(%esp)
084a2cc4 +0x266:  mov    0xc(%ebp),%edx
084a2cc7 +0x269:  mov    %edx,0x4(%esp)
084a2ccb +0x26d:  mov    %eax,(%esp)
084a2cce +0x270:  call   082887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>  ; CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item const*)
084a2cd3 +0x275:  mov    %eax,-0xc(%ebp)
084a2cd6 +0x278:  cmpl   $0x0,-0xc(%ebp)
084a2cda +0x27c:  je     084a2ce1 <+0x283>
084a2cdc +0x27e:  mov    -0xc(%ebp),%eax
084a2cdf +0x281:  jmp    084a2ce6 <+0x288>
084a2ce1 +0x283:  mov    $0x0,%eax
084a2ce6 +0x288:  mov    -0x4(%ebp),%ebx
084a2ce9 +0x28b:  leave
084a2cea +0x28c:  ret
084a2ceb +0x28d:  nop
```

## 反编译 C

```c
// expert_extraction::CExtraction::check_error @ 0x84a2a5e

/* expert_extraction::CExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CExtraction::check_error
          (CExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  CDataManager *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_96 [2];
  int local_94;
  stAmplifyOption_t asStack_85 [44];
  undefined1 local_59 [2];
  int local_57;
  CItem *local_1c;
  CItem *local_18;
  int local_14;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this_00);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar2 == param_2) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_59,iVar2);
      pCVar3 = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(pCVar3,local_57);
      if (local_1c == (CItem *)0x0) {
        iVar2 = 0x11;
      }
      else {
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\x01') {
          iVar4 = (int)param_4;
          iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          uVar5 = 1;
          CInventory::GetInvenSlot((int)local_96,iVar2);
          pCVar3 = (CDataManager *)G_CDataManager();
          local_18 = (CItem *)CDataManager::find_item(pCVar3,local_94);
          if (local_18 == (CItem *)0x0) {
            iVar2 = 0x11;
          }
          else {
            cVar1 = (**(code **)(*(int *)local_18 + 0x10))(local_18,local_94,uVar5,iVar4);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*(int *)local_18 + 0x14))(local_18);
              if (cVar1 == '\0') {
                iVar2 = (**(code **)(*(int *)local_18 + 0xc))(local_18);
                if (iVar2 == 0xb) {
                  iVar2 = 0x11;
                }
                else {
                  iVar2 = CItem::get_rarity(local_18);
                  if (iVar2 == 2) {
                    cVar1 = stAmplifyOption_t::isIdentified(asStack_85);
                    if (cVar1 == '\x01') {
                      cVar1 = (**(code **)(*(int *)local_18 + 0x38))(local_18);
                      if (cVar1 == '\0') {
                        local_14 = CItem::GetAttachType(local_18);
                        if (local_14 == 2) {
                          iVar2 = 0x11;
                        }
                        else {
                          cVar1 = CUser::CheckItemLock(param_1,1,(int)param_4);
                          if (cVar1 == '\0') {
                            iVar2 = CSecu_ProtectionField::CheckItemRarity
                                              (GlobalData::s_pSecuProtectionField,param_1,0x28,
                                               local_18,local_96);
                            if (iVar2 == 0) {
                              iVar2 = 0;
                            }
                          }
                          else {
                            iVar2 = 0xd5;
                          }
                        }
                      }
                      else {
                        iVar2 = 0x17;
                      }
                    }
                    else {
                      iVar2 = 0xae;
                    }
                  }
                  else {
                    iVar2 = 0x8c;
                  }
                }
              }
              else {
                iVar2 = 0x11;
              }
            }
            else {
              iVar2 = 0x11;
            }
          }
        }
        else {
          iVar2 = 0x11;
        }
      }
    }
    else {
      iVar2 = 0x13;
    }
  }
  else {
    iVar2 = 0x60;
  }
  return iVar2;
}
```
