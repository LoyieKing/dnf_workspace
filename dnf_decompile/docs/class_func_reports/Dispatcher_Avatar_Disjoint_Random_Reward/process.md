# process

`_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Avatar_Disjoint_Random_Reward::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Avatar_Disjoint_Random_Reward` | `0x081dea06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dea06  _ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Avatar_Disjoint_Random_Reward::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dea06, 0x081dec55]
081dea06 +0x000:  push   %ebp
081dea07 +0x001:  mov    %esp,%ebp
081dea09 +0x003:  push   %ebx
081dea0a +0x004:  sub    $0x74,%esp
081dea0d +0x007:  mov    0x10(%ebp),%eax
081dea10 +0x00a:  mov    %eax,-0x18(%ebp)
081dea13 +0x00d:  mov    0x14(%ebp),%eax
081dea16 +0x010:  mov    %eax,-0x14(%ebp)
081dea19 +0x013:  mov    0xc(%ebp),%eax
081dea1c +0x016:  mov    %eax,(%esp)
081dea1f +0x019:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dea24 +0x01e:  cmp    $0x3,%eax
081dea27 +0x021:  setne  %al
081dea2a +0x024:  test   %al,%al
081dea2c +0x026:  je     081dea42 <+0x3c>
081dea2e +0x028:  mov    -0x14(%ebp),%eax
081dea31 +0x02b:  movl   $0x7,0x4(%eax)
081dea38 +0x032:  mov    $0x0,%eax
081dea3d +0x037:  jmp    081dec50 <+0x24a>
081dea42 +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dea47 +0x041:  mov    %eax,(%esp)
081dea4a +0x044:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081dea4f +0x049:  movl   $0x197,0x4(%esp)
081dea57 +0x051:  mov    %eax,(%esp)
081dea5a +0x054:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
081dea5f +0x059:  mov    %eax,-0x10(%ebp)
081dea62 +0x05c:  cmpl   $0x0,-0x10(%ebp)
081dea66 +0x060:  jne    081dea7c <+0x76>
081dea68 +0x062:  mov    -0x14(%ebp),%eax
081dea6b +0x065:  movl   $0xb2,0x4(%eax)
081dea72 +0x06c:  mov    $0x0,%eax
081dea77 +0x071:  jmp    081dec50 <+0x24a>
081dea7c +0x076:  mov    -0x10(%ebp),%eax
081dea7f +0x079:  mov    (%eax),%eax
081dea81 +0x07b:  add    $0x8,%eax
081dea84 +0x07e:  mov    (%eax),%edx
081dea86 +0x080:  mov    -0x10(%ebp),%eax
081dea89 +0x083:  mov    %eax,(%esp)
081dea8c +0x086:  call   *%edx
081dea8e +0x088:  xor    $0x1,%eax
081dea91 +0x08b:  test   %al,%al
081dea93 +0x08d:  je     081deaa9 <+0xa3>
081dea95 +0x08f:  mov    -0x14(%ebp),%eax
081dea98 +0x092:  movl   $0xb2,0x4(%eax)
081dea9f +0x099:  mov    $0x0,%eax
081deaa4 +0x09e:  jmp    081dec50 <+0x24a>
081deaa9 +0x0a3:  mov    -0x18(%ebp),%eax
081deaac +0x0a6:  movzwl 0xe(%eax),%eax
081deab0 +0x0aa:  movzwl %ax,%ebx
081deab3 +0x0ad:  mov    0xc(%ebp),%eax
081deab6 +0x0b0:  mov    %eax,(%esp)
081deab9 +0x0b3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081deabe +0x0b8:  lea    -0x55(%ebp),%edx
081deac1 +0x0bb:  mov    %ebx,0xc(%esp)
081deac5 +0x0bf:  movl   $0x2,0x8(%esp)
081deacd +0x0c7:  mov    %eax,0x4(%esp)
081dead1 +0x0cb:  mov    %edx,(%esp)
081dead4 +0x0ce:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081dead9 +0x0d3:  sub    $0x4,%esp
081deadc +0x0d6:  mov    -0x53(%ebp),%edx
081deadf +0x0d9:  mov    -0x18(%ebp),%eax
081deae2 +0x0dc:  mov    0x10(%eax),%eax
081deae5 +0x0df:  cmp    %eax,%edx
081deae7 +0x0e1:  je     081deafd <+0xf7>
081deae9 +0x0e3:  mov    -0x14(%ebp),%eax
081deaec +0x0e6:  movl   $0x11,0x4(%eax)
081deaf3 +0x0ed:  mov    $0x0,%eax
081deaf8 +0x0f2:  jmp    081dec50 <+0x24a>
081deafd +0x0f7:  mov    -0x53(%ebp),%eax
081deb00 +0x0fa:  mov    %eax,%ebx
081deb02 +0x0fc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081deb07 +0x101:  mov    %ebx,0x4(%esp)
081deb0b +0x105:  mov    %eax,(%esp)
081deb0e +0x108:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081deb13 +0x10d:  mov    %eax,-0xc(%ebp)
081deb16 +0x110:  cmpl   $0x0,-0xc(%ebp)
081deb1a +0x114:  jne    081deb30 <+0x12a>
081deb1c +0x116:  mov    -0x14(%ebp),%eax
081deb1f +0x119:  movl   $0x11,0x4(%eax)
081deb26 +0x120:  mov    $0x0,%eax
081deb2b +0x125:  jmp    081dec50 <+0x24a>
081deb30 +0x12a:  mov    -0x18(%ebp),%eax
081deb33 +0x12d:  movzwl 0xe(%eax),%eax
081deb37 +0x131:  movzwl %ax,%eax
081deb3a +0x134:  mov    -0xc(%ebp),%edx
081deb3d +0x137:  mov    %edx,0x10(%esp)
081deb41 +0x13b:  lea    -0x55(%ebp),%edx
081deb44 +0x13e:  mov    %edx,0xc(%esp)
081deb48 +0x142:  mov    %eax,0x8(%esp)
081deb4c +0x146:  mov    0xc(%ebp),%eax
081deb4f +0x149:  mov    %eax,0x4(%esp)
081deb53 +0x14d:  mov    -0x10(%ebp),%eax
081deb56 +0x150:  mov    %eax,(%esp)
081deb59 +0x153:  call   0810f3a4 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem>  ; EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError(CUser*, unsigned short, Inven_Item&, CItem const*)
081deb5e +0x158:  mov    -0x14(%ebp),%edx
081deb61 +0x15b:  mov    %eax,0x4(%edx)
081deb64 +0x15e:  mov    -0x14(%ebp),%eax
081deb67 +0x161:  mov    0x4(%eax),%eax
081deb6a +0x164:  test   %eax,%eax
081deb6c +0x166:  je     081deb78 <+0x172>
081deb6e +0x168:  mov    $0x0,%eax
081deb73 +0x16d:  jmp    081dec50 <+0x24a>
081deb78 +0x172:  mov    -0x18(%ebp),%eax
081deb7b +0x175:  movzwl 0xe(%eax),%eax
081deb7f +0x179:  movzwl %ax,%eax
081deb82 +0x17c:  mov    -0xc(%ebp),%edx
081deb85 +0x17f:  mov    %edx,0x10(%esp)
081deb89 +0x183:  lea    -0x55(%ebp),%edx
081deb8c +0x186:  mov    %edx,0xc(%esp)
081deb90 +0x18a:  mov    %eax,0x8(%esp)
081deb94 +0x18e:  mov    0xc(%ebp),%eax
081deb97 +0x191:  mov    %eax,0x4(%esp)
081deb9b +0x195:  mov    -0x10(%ebp),%eax
081deb9e +0x198:  mov    %eax,(%esp)
081deba1 +0x19b:  call   0810f4e2 <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem>  ; EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem(CUser*, unsigned short, Inven_Item&, CItem const*)
081deba6 +0x1a0:  mov    -0x14(%ebp),%edx
081deba9 +0x1a3:  mov    %eax,0x4(%edx)
081debac +0x1a6:  mov    -0x14(%ebp),%eax
081debaf +0x1a9:  mov    0x4(%eax),%eax
081debb2 +0x1ac:  test   %eax,%eax
081debb4 +0x1ae:  je     081debc0 <+0x1ba>
081debb6 +0x1b0:  mov    $0x0,%eax
081debbb +0x1b5:  jmp    081dec50 <+0x24a>
081debc0 +0x1ba:  mov    -0x14(%ebp),%eax
081debc3 +0x1bd:  add    $0xc,%eax
081debc6 +0x1c0:  mov    %eax,0x8(%esp)
081debca +0x1c4:  mov    -0xc(%ebp),%eax
081debcd +0x1c7:  mov    %eax,0x4(%esp)
081debd1 +0x1cb:  mov    -0x10(%ebp),%eax
081debd4 +0x1ce:  mov    %eax,(%esp)
081debd7 +0x1d1:  call   0810f694 <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE>  ; EventClassify::CAvatarDisjointRandomReward::getRewardItem(CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081debdc +0x1d6:  mov    -0x14(%ebp),%edx
081debdf +0x1d9:  mov    %eax,0x4(%edx)
081debe2 +0x1dc:  mov    -0x14(%ebp),%eax
081debe5 +0x1df:  mov    0x4(%eax),%eax
081debe8 +0x1e2:  test   %eax,%eax
081debea +0x1e4:  je     081debf3 <+0x1ed>
081debec +0x1e6:  mov    $0x0,%eax
081debf1 +0x1eb:  jmp    081dec50 <+0x24a>
081debf3 +0x1ed:  mov    -0x14(%ebp),%eax
081debf6 +0x1f0:  add    $0xc,%eax
081debf9 +0x1f3:  mov    %eax,0x4(%esp)
081debfd +0x1f7:  mov    -0x10(%ebp),%eax
081dec00 +0x1fa:  mov    %eax,(%esp)
081dec03 +0x1fd:  call   0810f742 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE>  ; EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081dec08 +0x202:  mov    -0x14(%ebp),%eax
081dec0b +0x205:  add    $0xc,%eax
081dec0e +0x208:  mov    %eax,0x8(%esp)
081dec12 +0x20c:  mov    0xc(%ebp),%eax
081dec15 +0x20f:  mov    %eax,0x4(%esp)
081dec19 +0x213:  mov    -0x10(%ebp),%eax
081dec1c +0x216:  mov    %eax,(%esp)
081dec1f +0x219:  call   0810f88c <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE>  ; EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
081dec24 +0x21e:  mov    -0x14(%ebp),%edx
081dec27 +0x221:  mov    %eax,0x4(%edx)
081dec2a +0x224:  mov    -0x14(%ebp),%eax
081dec2d +0x227:  mov    0x4(%eax),%eax
081dec30 +0x22a:  test   %eax,%eax
081dec32 +0x22c:  je     081dec3b <+0x235>
081dec34 +0x22e:  mov    $0x0,%eax
081dec39 +0x233:  jmp    081dec50 <+0x24a>
081dec3b +0x235:  mov    -0x18(%ebp),%eax
081dec3e +0x238:  movzwl 0xe(%eax),%eax
081dec42 +0x23c:  movzwl %ax,%edx
081dec45 +0x23f:  mov    -0x14(%ebp),%eax
081dec48 +0x242:  mov    %edx,0x8(%eax)
081dec4b +0x245:  mov    $0x0,%eax
081dec50 +0x24a:  mov    -0x4(%ebp),%ebx
081dec53 +0x24d:  leave
081dec54 +0x24e:  ret
081dec55 +0x24f:  nop
```

## 反编译 C

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::process @ 0x81dea06

/* Dispatcher_Avatar_Disjoint_Random_Reward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Avatar_Disjoint_Random_Reward::process
          (Dispatcher_Avatar_Disjoint_Random_Reward *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  undefined4 uVar4;
  Inven_Item local_59 [2];
  int local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CAvatarDisjointRandomReward *local_14;
  CItem *local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    pCVar3 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(pCVar3);
    uVar4 = 0x197;
    local_14 = (CAvatarDisjointRandomReward *)
               EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (local_14 == (CAvatarDisjointRandomReward *)0x0) {
      *(undefined4 *)(local_18 + 4) = 0xb2;
    }
    else {
      cVar1 = (**(code **)(*(int *)local_14 + 8))(local_14,uVar4);
      if (cVar1 == '\x01') {
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_59,iVar2);
        if (local_57 == *(int *)(local_1c + 0x10)) {
          pCVar3 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(pCVar3,local_57);
          if (local_10 == (CItem *)0x0) {
            *(undefined4 *)(local_18 + 4) = 0x11;
          }
          else {
            uVar4 = EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError
                              (local_14,param_1,*(ushort *)(local_1c + 0xe),local_59,local_10);
            *(undefined4 *)(local_18 + 4) = uVar4;
            if (*(int *)(local_18 + 4) == 0) {
              uVar4 = EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem
                                (local_14,param_1,*(ushort *)(local_1c + 0xe),local_59,local_10);
              *(undefined4 *)(local_18 + 4) = uVar4;
              if (*(int *)(local_18 + 4) == 0) {
                uVar4 = EventClassify::CAvatarDisjointRandomReward::getRewardItem
                                  (local_14,local_10,(vector *)(local_18 + 0xc));
                *(undefined4 *)(local_18 + 4) = uVar4;
                if (*(int *)(local_18 + 4) == 0) {
                  EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic
                            (local_14,(vector *)(local_18 + 0xc));
                  uVar4 = EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward
                                    ((CUser *)local_14,(vector *)param_1);
                  *(undefined4 *)(local_18 + 4) = uVar4;
                  if (*(int *)(local_18 + 4) == 0) {
                    *(uint *)(local_18 + 8) = (uint)*(ushort *)(local_1c + 0xe);
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(local_18 + 4) = 0x11;
        }
      }
      else {
        *(undefined4 *)(local_18 + 4) = 0xb2;
      }
    }
  }
  else {
    *(undefined4 *)(local_18 + 4) = 7;
  }
  return 0;
}
```
