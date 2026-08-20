# check_error

`_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoPopItem::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPopItem` | `0x081d14aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d14aa  _ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoPopItem::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d14aa, 0x081d15b1]
081d14aa +0x000:  push   %ebp
081d14ab +0x001:  mov    %esp,%ebp
081d14ad +0x003:  push   %ebx
081d14ae +0x004:  sub    $0x24,%esp
081d14b1 +0x007:  mov    0xc(%ebp),%eax
081d14b4 +0x00a:  mov    %eax,(%esp)
081d14b7 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d14bc +0x012:  cmp    $0x3,%eax
081d14bf +0x015:  jne    081d14d0 <+0x26>
081d14c1 +0x017:  mov    0xc(%ebp),%eax
081d14c4 +0x01a:  mov    %eax,(%esp)
081d14c7 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d14cc +0x022:  test   %eax,%eax
081d14ce +0x024:  jne    081d14d7 <+0x2d>
081d14d0 +0x026:  mov    $0x1,%eax
081d14d5 +0x02b:  jmp    081d14dc <+0x32>
081d14d7 +0x02d:  mov    $0x0,%eax
081d14dc +0x032:  test   %al,%al
081d14de +0x034:  je     081d14ea <+0x40>
081d14e0 +0x036:  mov    $0xffffffff,%eax
081d14e5 +0x03b:  jmp    081d15ab <+0x101>
081d14ea +0x040:  mov    0xc(%ebp),%eax
081d14ed +0x043:  mov    %eax,(%esp)
081d14f0 +0x046:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d14f5 +0x04b:  test   %eax,%eax
081d14f7 +0x04d:  sete   %al
081d14fa +0x050:  test   %al,%al
081d14fc +0x052:  je     081d1508 <+0x5e>
081d14fe +0x054:  mov    $0x64,%eax
081d1503 +0x059:  jmp    081d15ab <+0x101>
081d1508 +0x05e:  mov    0xc(%ebp),%eax
081d150b +0x061:  mov    %eax,(%esp)
081d150e +0x064:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
081d1513 +0x069:  xor    $0x1,%eax
081d1516 +0x06c:  test   %al,%al
081d1518 +0x06e:  je     081d1524 <+0x7a>
081d151a +0x070:  mov    $0xb5,%eax
081d151f +0x075:  jmp    081d15ab <+0x101>
081d1524 +0x07a:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d1529 +0x07f:  movl   $0x9,0x8(%esp)
081d1531 +0x087:  mov    0xc(%ebp),%edx
081d1534 +0x08a:  mov    %edx,0x4(%esp)
081d1538 +0x08e:  mov    %eax,(%esp)
081d153b +0x091:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d1540 +0x096:  mov    %eax,-0x14(%ebp)
081d1543 +0x099:  cmpl   $0x0,-0x14(%ebp)
081d1547 +0x09d:  je     081d154e <+0xa4>
081d1549 +0x09f:  mov    -0x14(%ebp),%eax
081d154c +0x0a2:  jmp    081d15ab <+0x101>
081d154e +0x0a4:  mov    0x10(%ebp),%eax
081d1551 +0x0a7:  mov    %eax,-0x10(%ebp)
081d1554 +0x0aa:  mov    -0x10(%ebp),%eax
081d1557 +0x0ad:  mov    0xf(%eax),%ebx
081d155a +0x0b0:  mov    0xc(%ebp),%eax
081d155d +0x0b3:  mov    %eax,(%esp)
081d1560 +0x0b6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d1565 +0x0bb:  mov    %ebx,0x4(%esp)
081d1569 +0x0bf:  mov    %eax,(%esp)
081d156c +0x0c2:  call   0850562a <_ZNK10CInventory18possible_to_insertEi>  ; CInventory::possible_to_insert(int) const
081d1571 +0x0c7:  xor    $0x1,%eax
081d1574 +0x0ca:  test   %al,%al
081d1576 +0x0cc:  je     081d157f <+0xd5>
081d1578 +0x0ce:  mov    $0xcb,%eax
081d157d +0x0d3:  jmp    081d15ab <+0x101>
081d157f +0x0d5:  mov    -0x10(%ebp),%eax
081d1582 +0x0d8:  mov    0xf(%eax),%ebx
081d1585 +0x0db:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d158a +0x0e0:  mov    %ebx,0x4(%esp)
081d158e +0x0e4:  mov    %eax,(%esp)
081d1591 +0x0e7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d1596 +0x0ec:  mov    %eax,-0xc(%ebp)
081d1599 +0x0ef:  cmpl   $0x0,-0xc(%ebp)
081d159d +0x0f3:  jne    081d15a6 <+0xfc>
081d159f +0x0f5:  mov    $0xc5,%eax
081d15a4 +0x0fa:  jmp    081d15ab <+0x101>
081d15a6 +0x0fc:  mov    $0x0,%eax
081d15ab +0x101:  add    $0x24,%esp
081d15ae +0x104:  pop    %ebx
081d15af +0x105:  pop    %ebp
081d15b0 +0x106:  ret
081d15b1 +0x107:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoPopItem::check_error @ 0x81d14aa

/* Dispatcher_GuildCargoPopItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_GuildCargoPopItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this;
  CDataManager *this_00;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      iVar3 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,9);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_3 + 0xf);
          this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          cVar2 = CInventory::possible_to_insert(this,iVar3);
          if (cVar2 == '\x01') {
            iVar3 = *(int *)(param_3 + 0xf);
            this_00 = (CDataManager *)G_CDataManager();
            iVar3 = CDataManager::find_item(this_00,iVar3);
            if (iVar3 == 0) {
              iVar3 = 0xc5;
            }
            else {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = 0xcb;
          }
        }
      }
      else {
        iVar3 = 0xb5;
      }
    }
  }
  return iVar3;
}
```
