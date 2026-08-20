# process

`_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Ani_Deco_Event` | `0x081e886a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e886a  _ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e886a, 0x081e8b1f]
081e886a +0x000:  push   %ebp
081e886b +0x001:  mov    %esp,%ebp
081e886d +0x003:  push   %edi
081e886e +0x004:  push   %esi
081e886f +0x005:  push   %ebx
081e8870 +0x006:  sub    $0x9c,%esp
081e8876 +0x00c:  mov    0x10(%ebp),%eax
081e8879 +0x00f:  mov    %eax,-0x2c(%ebp)
081e887c +0x012:  mov    0x14(%ebp),%eax
081e887f +0x015:  mov    %eax,-0x28(%ebp)
081e8882 +0x018:  mov    0x10(%ebp),%eax
081e8885 +0x01b:  mov    %eax,0x8(%esp)
081e8889 +0x01f:  mov    0xc(%ebp),%eax
081e888c +0x022:  mov    %eax,0x4(%esp)
081e8890 +0x026:  mov    0x8(%ebp),%eax
081e8893 +0x029:  mov    %eax,(%esp)
081e8896 +0x02c:  call   081e8b20 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser*, MSG_BASE&)
081e889b +0x031:  mov    -0x28(%ebp),%edx
081e889e +0x034:  mov    %eax,0x4(%edx)
081e88a1 +0x037:  mov    -0x28(%ebp),%eax
081e88a4 +0x03a:  mov    0x4(%eax),%eax
081e88a7 +0x03d:  test   %eax,%eax
081e88a9 +0x03f:  jle    081e88b5 <+0x4b>
081e88ab +0x041:  mov    $0x0,%eax
081e88b0 +0x046:  jmp    081e8b14 <+0x2aa>
081e88b5 +0x04b:  mov    -0x28(%ebp),%eax
081e88b8 +0x04e:  mov    0x4(%eax),%eax
081e88bb +0x051:  test   %eax,%eax
081e88bd +0x053:  jns    081e88ea <+0x80>
081e88bf +0x055:  mov    -0x28(%ebp),%eax
081e88c2 +0x058:  mov    0x4(%eax),%eax
081e88c5 +0x05b:  movl   $0x0,0xc(%esp)
081e88cd +0x063:  mov    %eax,0x8(%esp)
081e88d1 +0x067:  movl   $&_ZZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e88d9 +0x06f:  movl   $0x6551,(%esp)
081e88e0 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e88e5 +0x07b:  jmp    081e8b14 <+0x2aa>
081e88ea +0x080:  mov    0xc(%ebp),%edx
081e88ed +0x083:  lea    -0x30(%ebp),%eax
081e88f0 +0x086:  mov    %edx,0x4(%esp)
081e88f4 +0x08a:  mov    %eax,(%esp)
081e88f7 +0x08d:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
081e88fc +0x092:  sub    $0x4,%esp
081e88ff +0x095:  movzwl -0x2e(%ebp),%ebx
081e8903 +0x099:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e8908 +0x09e:  mov    %eax,(%esp)
081e890b +0x0a1:  call   08365d0e <_ZN12CDataManager14maxAniDecoItemEv>  ; CDataManager::maxAniDecoItem()
081e8910 +0x0a6:  cmp    %ax,%bx
081e8913 +0x0a9:  setge  %al
081e8916 +0x0ac:  test   %al,%al
081e8918 +0x0ae:  je     081e892e <+0xc4>
081e891a +0x0b0:  mov    -0x28(%ebp),%eax
081e891d +0x0b3:  movl   $0x14,0x4(%eax)
081e8924 +0x0ba:  mov    $0x0,%eax
081e8929 +0x0bf:  jmp    081e8b14 <+0x2aa>
081e892e +0x0c4:  mov    -0x2c(%ebp),%eax
081e8931 +0x0c7:  movzwl 0xe(%eax),%eax
081e8935 +0x0cb:  movzwl %ax,%ebx
081e8938 +0x0ce:  mov    0xc(%ebp),%eax
081e893b +0x0d1:  mov    %eax,(%esp)
081e893e +0x0d4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e8943 +0x0d9:  lea    -0x6d(%ebp),%edx
081e8946 +0x0dc:  mov    %ebx,0xc(%esp)
081e894a +0x0e0:  movl   $0x1,0x8(%esp)
081e8952 +0x0e8:  mov    %eax,0x4(%esp)
081e8956 +0x0ec:  mov    %edx,(%esp)
081e8959 +0x0ef:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e895e +0x0f4:  sub    $0x4,%esp
081e8961 +0x0f7:  mov    -0x6b(%ebp),%eax
081e8964 +0x0fa:  mov    %eax,%ebx
081e8966 +0x0fc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e896b +0x101:  mov    %ebx,0x4(%esp)
081e896f +0x105:  mov    %eax,(%esp)
081e8972 +0x108:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e8977 +0x10d:  mov    %eax,-0x24(%ebp)
081e897a +0x110:  cmpl   $0x0,-0x24(%ebp)
081e897e +0x114:  jne    081e8994 <+0x12a>
081e8980 +0x116:  mov    -0x28(%ebp),%eax
081e8983 +0x119:  movl   $0x1,0x4(%eax)
081e898a +0x120:  mov    $0x0,%eax
081e898f +0x125:  jmp    081e8b14 <+0x2aa>
081e8994 +0x12a:  movzwl -0x2e(%ebp),%eax
081e8998 +0x12e:  mov    %ax,-0x1e(%ebp)
081e899c +0x132:  cmpw   $0xffff,-0x1e(%ebp)
081e89a1 +0x137:  jne    081e89b7 <+0x14d>
081e89a3 +0x139:  mov    -0x28(%ebp),%eax
081e89a6 +0x13c:  movl   $0x1,0x4(%eax)
081e89ad +0x143:  mov    $0x0,%eax
081e89b2 +0x148:  jmp    081e8b14 <+0x2aa>
081e89b7 +0x14d:  mov    -0x6b(%ebp),%eax
081e89ba +0x150:  mov    %eax,%esi
081e89bc +0x152:  movswl -0x1e(%ebp),%ebx
081e89c0 +0x156:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e89c5 +0x15b:  mov    %esi,0x8(%esp)
081e89c9 +0x15f:  mov    %ebx,0x4(%esp)
081e89cd +0x163:  mov    %eax,(%esp)
081e89d0 +0x166:  call   08365c86 <_ZN12CDataManager18invalidAniDecoItemEii>  ; CDataManager::invalidAniDecoItem(int, int)
081e89d5 +0x16b:  xor    $0x1,%eax
081e89d8 +0x16e:  test   %al,%al
081e89da +0x170:  je     081e89f0 <+0x186>
081e89dc +0x172:  mov    -0x28(%ebp),%eax
081e89df +0x175:  movl   $0x17,0x4(%eax)
081e89e6 +0x17c:  mov    $0x0,%eax
081e89eb +0x181:  jmp    081e8b14 <+0x2aa>
081e89f0 +0x186:  mov    -0x2c(%ebp),%eax
081e89f3 +0x189:  movzwl 0xe(%eax),%edx
081e89f7 +0x18d:  mov    -0x28(%ebp),%eax
081e89fa +0x190:  mov    %dx,0x8(%eax)
081e89fe +0x194:  mov    -0x2c(%ebp),%eax
081e8a01 +0x197:  movzwl 0xe(%eax),%eax
081e8a05 +0x19b:  movzwl %ax,%ebx
081e8a08 +0x19e:  mov    0xc(%ebp),%eax
081e8a0b +0x1a1:  mov    %eax,(%esp)
081e8a0e +0x1a4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e8a13 +0x1a9:  movl   $0x1,0x14(%esp)
081e8a1b +0x1b1:  movl   $0x3,0x10(%esp)
081e8a23 +0x1b9:  movl   $0x1,0xc(%esp)
081e8a2b +0x1c1:  mov    %ebx,0x8(%esp)
081e8a2f +0x1c5:  movl   $0x1,0x4(%esp)
081e8a37 +0x1cd:  mov    %eax,(%esp)
081e8a3a +0x1d0:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e8a3f +0x1d5:  movzwl -0x2e(%ebp),%eax
081e8a43 +0x1d9:  add    $0x1,%eax
081e8a46 +0x1dc:  mov    %ax,-0x2e(%ebp)
081e8a4a +0x1e0:  mov    0xc(%ebp),%eax
081e8a4d +0x1e3:  mov    -0x30(%ebp),%edx
081e8a50 +0x1e6:  mov    %edx,0x4(%esp)
081e8a54 +0x1ea:  mov    %eax,(%esp)
081e8a57 +0x1ed:  call   0822fb78 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5222>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5222
081e8a5c +0x1f2:  movzwl -0x2e(%ebp),%eax
081e8a60 +0x1f6:  cwtl
081e8a61 +0x1f7:  mov    %eax,-0x7c(%ebp)
081e8a64 +0x1fa:  movzwl -0x30(%ebp),%eax
081e8a68 +0x1fe:  movswl %ax,%edi
081e8a6b +0x201:  mov    0xc(%ebp),%eax
081e8a6e +0x204:  mov    %eax,(%esp)
081e8a71 +0x207:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081e8a76 +0x20c:  mov    %eax,%esi
081e8a78 +0x20e:  mov    0xc(%ebp),%eax
081e8a7b +0x211:  mov    %eax,(%esp)
081e8a7e +0x214:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081e8a83 +0x219:  movswl %ax,%ebx
081e8a86 +0x21c:  mov    0xc(%ebp),%eax
081e8a89 +0x21f:  mov    %eax,(%esp)
081e8a8c +0x222:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e8a91 +0x227:  mov    -0x7c(%ebp),%edx
081e8a94 +0x22a:  mov    %edx,0x10(%esp)
081e8a98 +0x22e:  mov    %edi,0xc(%esp)
081e8a9c +0x232:  mov    %esi,0x8(%esp)
081e8aa0 +0x236:  mov    %ebx,0x4(%esp)
081e8aa4 +0x23a:  mov    %eax,(%esp)
081e8aa7 +0x23d:  call   0844af74 <_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss>  ; DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short)
081e8aac +0x242:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8ab1 +0x247:  movl   $0x69,0x4(%esp)
081e8ab9 +0x24f:  mov    %eax,(%esp)
081e8abc +0x252:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8ac1 +0x257:  mov    (%eax),%edx
081e8ac3 +0x259:  add    $0x34,%edx
081e8ac6 +0x25c:  mov    (%edx),%edx
081e8ac8 +0x25e:  movl   $0x0,0x4(%esp)
081e8ad0 +0x266:  mov    %eax,(%esp)
081e8ad3 +0x269:  call   *%edx
081e8ad5 +0x26b:  test   %al,%al
081e8ad7 +0x26d:  je     081e8b0f <+0x2a5>
081e8ad9 +0x26f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8ade +0x274:  movl   $0x69,0x4(%esp)
081e8ae6 +0x27c:  mov    %eax,(%esp)
081e8ae9 +0x27f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8aee +0x284:  mov    %eax,-0x1c(%ebp)
081e8af1 +0x287:  cmpl   $0x0,-0x1c(%ebp)
081e8af5 +0x28b:  je     081e8b0f <+0x2a5>
081e8af7 +0x28d:  mov    0xc(%ebp),%eax
081e8afa +0x290:  mov    %eax,0x4(%esp)
081e8afe +0x294:  mov    -0x1c(%ebp),%eax
081e8b01 +0x297:  mov    %eax,(%esp)
081e8b04 +0x29a:  call   0827ba52 <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser>  ; SeriaRoomAniDecoEvent::processEvent(CUser&)
081e8b09 +0x29f:  mov    -0x28(%ebp),%edx
081e8b0c +0x2a2:  mov    %eax,0x4(%edx)
081e8b0f +0x2a5:  mov    $0x0,%eax
081e8b14 +0x2aa:  lea    -0xc(%ebp),%esp
081e8b17 +0x2ad:  add    $0x0,%esp
081e8b1a +0x2b0:  pop    %ebx
081e8b1b +0x2b1:  pop    %esi
081e8b1c +0x2b2:  pop    %edi
081e8b1d +0x2b3:  pop    %ebp
081e8b1e +0x2b4:  ret
081e8b1f +0x2b5:  nop
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::process @ 0x81e886a

/* Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::process
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  CDataManager *pCVar7;
  int iVar8;
  CInventory *pCVar9;
  uint uVar10;
  int *piVar11;
  undefined1 local_71 [2];
  int local_6f;
  undefined4 local_34;
  MSG_BASE *local_30;
  ParamBase *local_2c;
  int local_28;
  short local_22;
  SeriaRoomAniDecoEvent *local_20;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar6 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_2c + 4) = uVar6;
  if (*(int *)(local_2c + 4) < 1) {
    if (*(int *)(local_2c + 4) < 0) {
      uVar6 = LineFunc(0x6551,
                       "virtual int Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_2c + 4),0);
    }
    else {
      CUserCharacInfo::getSeriaRoomAniDecoInfo();
      sVar2 = local_34._2_2_;
      pCVar7 = (CDataManager *)G_CDataManager();
      sVar4 = CDataManager::maxAniDecoItem(pCVar7);
      if (sVar2 < sVar4) {
        iVar8 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_71,iVar8);
        iVar8 = local_6f;
        pCVar7 = (CDataManager *)G_CDataManager();
        local_28 = CDataManager::find_item(pCVar7,iVar8);
        if (local_28 == 0) {
          *(undefined4 *)(local_2c + 4) = 1;
          uVar6 = 0;
        }
        else {
          local_22 = local_34._2_2_;
          if (local_34._2_2_ == -1) {
            *(undefined4 *)(local_2c + 4) = 1;
            uVar6 = 0;
          }
          else {
            iVar8 = (int)local_34._2_2_;
            pCVar7 = (CDataManager *)G_CDataManager();
            cVar3 = CDataManager::invalidAniDecoItem(pCVar7,iVar8,local_6f);
            if (cVar3 == '\x01') {
              *(undefined2 *)(local_2c + 8) = *(undefined2 *)(local_30 + 0xe);
              uVar1 = *(undefined2 *)(local_30 + 0xe);
              pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::delete_item(pCVar9,1,uVar1,1,3,1);
              local_34 = CONCAT22(local_34._2_2_ + 1,(short)local_34);
              CUserCharacInfo::setSeriaRoomAniDecoInfo((CUserCharacInfo *)param_1,local_34);
              sVar4 = local_34._2_2_;
              sVar2 = (short)local_34;
              iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              sVar5 = CUser::GetServerGroupToPvP(param_1);
              uVar10 = CUser::get_acc_id(param_1);
              DB_UpdateSeriaRoomAnimationDeco::makeRequest(uVar10,sVar5,iVar8,sVar2,sVar4);
              piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
              cVar3 = (**(code **)(*piVar11 + 0x34))(piVar11,0);
              if (cVar3 != '\0') {
                local_20 = (SeriaRoomAniDecoEvent *)
                           CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
                if (local_20 != (SeriaRoomAniDecoEvent *)0x0) {
                  uVar6 = SeriaRoomAniDecoEvent::processEvent(local_20,param_1);
                  *(undefined4 *)(local_2c + 4) = uVar6;
                }
              }
              uVar6 = 0;
            }
            else {
              *(undefined4 *)(local_2c + 4) = 0x17;
              uVar6 = 0;
            }
          }
        }
      }
      else {
        *(undefined4 *)(local_2c + 4) = 0x14;
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
