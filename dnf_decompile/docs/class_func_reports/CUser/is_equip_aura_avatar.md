# is_equip_aura_avatar

`_ZN5CUser20is_equip_aura_avatarEcRi`

`CUser::is_equip_aura_avatar(char, int&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dff8  _ZN5CUser20is_equip_aura_avatarEcRi
#           CUser::is_equip_aura_avatar(char, int&)
# range [0x0868dff8, 0x0868e0ed]
0868dff8 +0x00:  push   %ebp
0868dff9 +0x01:  mov    %esp,%ebp
0868dffb +0x03:  push   %ebx
0868dffc +0x04:  sub    $0x34,%esp
0868dfff +0x07:  mov    0xc(%ebp),%eax
0868e002 +0x0a:  mov    %al,-0x1c(%ebp)
0868e005 +0x0d:  mov    0x8(%ebp),%eax
0868e008 +0x10:  mov    %eax,(%esp)
0868e00b +0x13:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868e010 +0x18:  test   %eax,%eax
0868e012 +0x1a:  sete   %al
0868e015 +0x1d:  test   %al,%al
0868e017 +0x1f:  je     0868e023 <+0x2b>
0868e019 +0x21:  mov    $0x1,%eax
0868e01e +0x26:  jmp    0868e0e7 <+0xef>
0868e023 +0x2b:  mov    0x8(%ebp),%eax
0868e026 +0x2e:  mov    %eax,(%esp)
0868e029 +0x31:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
0868e02e +0x36:  movl   $0x9,0x8(%esp)
0868e036 +0x3e:  movl   $0x0,0x4(%esp)
0868e03e +0x46:  mov    %eax,(%esp)
0868e041 +0x49:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0868e046 +0x4e:  mov    %eax,-0x10(%ebp)
0868e049 +0x51:  cmpl   $0x0,-0x10(%ebp)
0868e04d +0x55:  jne    0868e059 <+0x61>
0868e04f +0x57:  mov    $0x11,%eax
0868e054 +0x5c:  jmp    0868e0e7 <+0xef>
0868e059 +0x61:  mov    -0x10(%ebp),%eax
0868e05c +0x64:  mov    %eax,(%esp)
0868e05f +0x67:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0868e064 +0x6c:  test   %al,%al
0868e066 +0x6e:  je     0868e06f <+0x77>
0868e068 +0x70:  mov    $0x11,%eax
0868e06d +0x75:  jmp    0868e0e7 <+0xef>
0868e06f +0x77:  mov    -0x10(%ebp),%eax
0868e072 +0x7a:  mov    %eax,(%esp)
0868e075 +0x7d:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0868e07a +0x82:  xor    $0x1,%eax
0868e07d +0x85:  test   %al,%al
0868e07f +0x87:  je     0868e088 <+0x90>
0868e081 +0x89:  mov    $0x11,%eax
0868e086 +0x8e:  jmp    0868e0e7 <+0xef>
0868e088 +0x90:  mov    -0x10(%ebp),%eax
0868e08b +0x93:  mov    0x2(%eax),%eax
0868e08e +0x96:  mov    %eax,%ebx
0868e090 +0x98:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868e095 +0x9d:  mov    %ebx,0x4(%esp)
0868e099 +0xa1:  mov    %eax,(%esp)
0868e09c +0xa4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868e0a1 +0xa9:  mov    %eax,-0xc(%ebp)
0868e0a4 +0xac:  cmpl   $0x0,-0xc(%ebp)
0868e0a8 +0xb0:  jne    0868e0b1 <+0xb9>
0868e0aa +0xb2:  mov    $0x11,%eax
0868e0af +0xb7:  jmp    0868e0e7 <+0xef>
0868e0b1 +0xb9:  movsbl -0x1c(%ebp),%eax
0868e0b5 +0xbd:  mov    %eax,0x4(%esp)
0868e0b9 +0xc1:  mov    -0xc(%ebp),%eax
0868e0bc +0xc4:  mov    %eax,(%esp)
0868e0bf +0xc7:  call   08510bdc <_ZN10CEquipItem21is_aura_avatar_optionEc>  ; CEquipItem::is_aura_avatar_option(char)
0868e0c4 +0xcc:  xor    $0x1,%eax
0868e0c7 +0xcf:  test   %al,%al
0868e0c9 +0xd1:  je     0868e0d2 <+0xda>
0868e0cb +0xd3:  mov    $0x17,%eax
0868e0d0 +0xd8:  jmp    0868e0e7 <+0xef>
0868e0d2 +0xda:  mov    -0xc(%ebp),%eax
0868e0d5 +0xdd:  mov    %eax,(%esp)
0868e0d8 +0xe0:  call   08510c0c <_ZN10CEquipItem28get_aura_avatar_option_valueEv>  ; CEquipItem::get_aura_avatar_option_value()
0868e0dd +0xe5:  mov    0x10(%ebp),%edx
0868e0e0 +0xe8:  mov    %eax,(%edx)
0868e0e2 +0xea:  mov    $0x0,%eax
0868e0e7 +0xef:  add    $0x34,%esp
0868e0ea +0xf2:  pop    %ebx
0868e0eb +0xf3:  pop    %ebp
0868e0ec +0xf4:  ret
0868e0ed +0xf5:  nop
```

## 反编译 C

```c
// CUser::is_equip_aura_avatar @ 0x868dff8

/* CUser::is_equip_aura_avatar(char, int&) */

undefined4 __thiscall CUser::is_equip_aura_avatar(CUser *this,char param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this_00;
  Inven_Item *this_01;
  CDataManager *this_02;
  CEquipItem *this_03;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)this);
    this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,0,9);
    if (this_01 == (Inven_Item *)0x0) {
      uVar3 = 0x11;
    }
    else {
      cVar1 = Inven_Item::isEmpty(this_01);
      if (cVar1 == '\0') {
        cVar1 = Inven_Item::isEquipableItemType(this_01);
        if (cVar1 == '\x01') {
          iVar2 = *(int *)(this_01 + 2);
          this_02 = (CDataManager *)G_CDataManager();
          this_03 = (CEquipItem *)CDataManager::find_item(this_02,iVar2);
          if (this_03 == (CEquipItem *)0x0) {
            uVar3 = 0x11;
          }
          else {
            cVar1 = CEquipItem::is_aura_avatar_option(this_03,param_1);
            if (cVar1 == '\x01') {
              iVar2 = CEquipItem::get_aura_avatar_option_value(this_03);
              *param_2 = iVar2;
              uVar3 = 0;
            }
            else {
              uVar3 = 0x17;
            }
          }
        }
        else {
          uVar3 = 0x11;
        }
      }
      else {
        uVar3 = 0x11;
      }
    }
  }
  return uVar3;
}
```
