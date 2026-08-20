# check_error

`_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_UseRightOfChangeGrowType::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRightOfChangeGrowType` | `0x0825dd84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825dd84  _ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_UseRightOfChangeGrowType::check_error(CUser*, MSG_BASE&)
# range [0x0825dd84, 0x0825df23]
0825dd84 +0x000:  push   %ebp
0825dd85 +0x001:  mov    %esp,%ebp
0825dd87 +0x003:  push   %ebx
0825dd88 +0x004:  sub    $0x64,%esp
0825dd8b +0x007:  cmpl   $0x0,0xc(%ebp)
0825dd8f +0x00b:  je     0825dda0 <+0x1c>
0825dd91 +0x00d:  mov    0xc(%ebp),%eax
0825dd94 +0x010:  mov    %eax,(%esp)
0825dd97 +0x013:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0825dd9c +0x018:  test   %eax,%eax
0825dd9e +0x01a:  jne    0825dda7 <+0x23>
0825dda0 +0x01c:  mov    $0x1,%eax
0825dda5 +0x021:  jmp    0825ddac <+0x28>
0825dda7 +0x023:  mov    $0x0,%eax
0825ddac +0x028:  test   %al,%al
0825ddae +0x02a:  je     0825ddba <+0x36>
0825ddb0 +0x02c:  mov    $0xffffffff,%eax
0825ddb5 +0x031:  jmp    0825df1e <+0x19a>
0825ddba +0x036:  mov    0xc(%ebp),%eax
0825ddbd +0x039:  mov    %eax,(%esp)
0825ddc0 +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825ddc5 +0x041:  cmp    $0x3,%eax
0825ddc8 +0x044:  setne  %al
0825ddcb +0x047:  test   %al,%al
0825ddcd +0x049:  je     0825ddd9 <+0x55>
0825ddcf +0x04b:  mov    $0x1e,%eax
0825ddd4 +0x050:  jmp    0825df1e <+0x19a>
0825ddd9 +0x055:  mov    0x10(%ebp),%eax
0825dddc +0x058:  mov    %eax,-0x14(%ebp)
0825dddf +0x05b:  mov    0xc(%ebp),%eax
0825dde2 +0x05e:  mov    %eax,(%esp)
0825dde5 +0x061:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0825ddea +0x066:  cmp    $0x9,%eax
0825dded +0x069:  sete   %al
0825ddf0 +0x06c:  test   %al,%al
0825ddf2 +0x06e:  je     0825ddfe <+0x7a>
0825ddf4 +0x070:  mov    $0xea,%eax
0825ddf9 +0x075:  jmp    0825df1e <+0x19a>
0825ddfe +0x07a:  mov    0xc(%ebp),%eax
0825de01 +0x07d:  mov    %eax,(%esp)
0825de04 +0x080:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0825de09 +0x085:  cmp    $0xa,%eax
0825de0c +0x088:  sete   %al
0825de0f +0x08b:  test   %al,%al
0825de11 +0x08d:  je     0825de1d <+0x99>
0825de13 +0x08f:  mov    $0xea,%eax
0825de18 +0x094:  jmp    0825df1e <+0x19a>
0825de1d +0x099:  mov    0xc(%ebp),%eax
0825de20 +0x09c:  mov    %eax,(%esp)
0825de23 +0x09f:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0825de28 +0x0a4:  test   %al,%al
0825de2a +0x0a6:  sete   %al
0825de2d +0x0a9:  test   %al,%al
0825de2f +0x0ab:  je     0825de3b <+0xb7>
0825de31 +0x0ad:  mov    $0x13,%eax
0825de36 +0x0b2:  jmp    0825df1e <+0x19a>
0825de3b +0x0b7:  mov    0xc(%ebp),%eax
0825de3e +0x0ba:  mov    %eax,(%esp)
0825de41 +0x0bd:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0825de46 +0x0c2:  test   %al,%al
0825de48 +0x0c4:  je     0825de54 <+0xd0>
0825de4a +0x0c6:  mov    $0xd8,%eax
0825de4f +0x0cb:  jmp    0825df1e <+0x19a>
0825de54 +0x0d0:  mov    -0x14(%ebp),%eax
0825de57 +0x0d3:  movzbl 0xf(%eax),%eax
0825de5b +0x0d7:  test   %al,%al
0825de5d +0x0d9:  js     0825de6a <+0xe6>
0825de5f +0x0db:  mov    -0x14(%ebp),%eax
0825de62 +0x0de:  movzbl 0xf(%eax),%eax
0825de66 +0x0e2:  cmp    $0x5,%al
0825de68 +0x0e4:  jle    0825de74 <+0xf0>
0825de6a +0x0e6:  mov    $0x1,%eax
0825de6f +0x0eb:  jmp    0825df1e <+0x19a>
0825de74 +0x0f0:  mov    -0x14(%ebp),%eax
0825de77 +0x0f3:  movzwl 0xd(%eax),%eax
0825de7b +0x0f7:  movswl %ax,%ebx
0825de7e +0x0fa:  mov    0xc(%ebp),%eax
0825de81 +0x0fd:  mov    %eax,(%esp)
0825de84 +0x100:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0825de89 +0x105:  lea    -0x51(%ebp),%edx
0825de8c +0x108:  mov    %ebx,0xc(%esp)
0825de90 +0x10c:  movl   $0x1,0x8(%esp)
0825de98 +0x114:  mov    %eax,0x4(%esp)
0825de9c +0x118:  mov    %edx,(%esp)
0825de9f +0x11b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0825dea4 +0x120:  sub    $0x4,%esp
0825dea7 +0x123:  mov    -0x4f(%ebp),%eax
0825deaa +0x126:  mov    %eax,%ebx
0825deac +0x128:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0825deb1 +0x12d:  mov    %ebx,0x4(%esp)
0825deb5 +0x131:  mov    %eax,(%esp)
0825deb8 +0x134:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0825debd +0x139:  mov    %eax,-0x10(%ebp)
0825dec0 +0x13c:  cmpl   $0x0,-0x10(%ebp)
0825dec4 +0x140:  jne    0825decd <+0x149>
0825dec6 +0x142:  mov    $0x11,%eax
0825decb +0x147:  jmp    0825df1e <+0x19a>
0825decd +0x149:  mov    0xc(%ebp),%eax
0825ded0 +0x14c:  mov    %eax,(%esp)
0825ded3 +0x14f:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
0825ded8 +0x154:  mov    %eax,-0xc(%ebp)
0825dedb +0x157:  mov    -0xc(%ebp),%eax
0825dede +0x15a:  mov    %eax,(%esp)
0825dee1 +0x15d:  call   086ad48a <_ZNK9UserQuest21isDoingJobChangeQuestEv>  ; UserQuest::isDoingJobChangeQuest() const
0825dee6 +0x162:  test   %al,%al
0825dee8 +0x164:  je     0825def1 <+0x16d>
0825deea +0x166:  mov    $0x16,%eax
0825deef +0x16b:  jmp    0825df1e <+0x19a>
0825def1 +0x16d:  mov    -0x10(%ebp),%eax
0825def4 +0x170:  mov    %eax,0x8(%esp)
0825def8 +0x174:  movl   $0x2e,0x4(%esp)
0825df00 +0x17c:  mov    0xc(%ebp),%eax
0825df03 +0x17f:  mov    %eax,(%esp)
0825df06 +0x182:  call   0868f69a <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEPK5CItem>  ; CUser::verifyStackableItemActionPlace(StackableAction::Type, CItem const*)
0825df0b +0x187:  xor    $0x1,%eax
0825df0e +0x18a:  test   %al,%al
0825df10 +0x18c:  je     0825df19 <+0x195>
0825df12 +0x18e:  mov    $0x17,%eax
0825df17 +0x193:  jmp    0825df1e <+0x19a>
0825df19 +0x195:  mov    $0x0,%eax
0825df1e +0x19a:  mov    -0x4(%ebp),%ebx
0825df21 +0x19d:  leave
0825df22 +0x19e:  ret
0825df23 +0x19f:  nop
```

## 反编译 C

```c
// Dispatcher_UseRightOfChangeGrowType::check_error @ 0x825dd84

/* Dispatcher_UseRightOfChangeGrowType::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::check_error
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  undefined1 local_55 [2];
  int local_53;
  MSG_BASE *local_18;
  int local_14;
  UserQuest *local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0825ddac;
    }
  }
  bVar1 = true;
LAB_0825ddac:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      local_18 = param_2;
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar3 == 9) {
        uVar4 = 0xea;
      }
      else {
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar3 == 10) {
          uVar4 = 0xea;
        }
        else {
          cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          if (cVar2 == '\0') {
            uVar4 = 0x13;
          }
          else {
            cVar2 = CUser::CheckInTrade(param_1);
            if (cVar2 == '\0') {
              if (((char)local_18[0xf] < '\0') || ('\x05' < (char)local_18[0xf])) {
                uVar4 = 1;
              }
              else {
                iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_55,iVar3);
                this_00 = (CDataManager *)G_CDataManager();
                local_14 = CDataManager::find_item(this_00,local_53);
                if (local_14 == 0) {
                  uVar4 = 0x11;
                }
                else {
                  local_10 = (UserQuest *)CUser::getCurCharacQuestRefR(param_1);
                  cVar2 = UserQuest::isDoingJobChangeQuest(local_10);
                  if (cVar2 == '\0') {
                    cVar2 = CUser::verifyStackableItemActionPlace(param_1,0x2e,local_14);
                    if (cVar2 == '\x01') {
                      uVar4 = 0;
                    }
                    else {
                      uVar4 = 0x17;
                    }
                  }
                  else {
                    uVar4 = 0x16;
                  }
                }
              }
            }
            else {
              uVar4 = 0xd8;
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x1e;
    }
  }
  return uVar4;
}
```
