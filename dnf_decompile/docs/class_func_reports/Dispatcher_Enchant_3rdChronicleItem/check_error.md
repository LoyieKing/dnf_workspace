# check_error

`_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_Enchant_3rdChronicleItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Enchant_3rdChronicleItem` | `0x081d343a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d343a  _ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_Enchant_3rdChronicleItem::check_error(CUser*, MSG_BASE&)
# range [0x081d343a, 0x081d35fd]
081d343a +0x000:  push   %ebp
081d343b +0x001:  mov    %esp,%ebp
081d343d +0x003:  push   %ebx
081d343e +0x004:  sub    $0xa4,%esp
081d3444 +0x00a:  mov    0xc(%ebp),%eax
081d3447 +0x00d:  mov    %eax,(%esp)
081d344a +0x010:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d344f +0x015:  cmp    $0x3,%eax
081d3452 +0x018:  jne    081d3463 <+0x29>
081d3454 +0x01a:  mov    0xc(%ebp),%eax
081d3457 +0x01d:  mov    %eax,(%esp)
081d345a +0x020:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d345f +0x025:  test   %eax,%eax
081d3461 +0x027:  jne    081d346a <+0x30>
081d3463 +0x029:  mov    $0x1,%eax
081d3468 +0x02e:  jmp    081d346f <+0x35>
081d346a +0x030:  mov    $0x0,%eax
081d346f +0x035:  test   %al,%al
081d3471 +0x037:  je     081d347d <+0x43>
081d3473 +0x039:  mov    $0x7,%eax
081d3478 +0x03e:  jmp    081d35f8 <+0x1be>
081d347d +0x043:  mov    0x10(%ebp),%eax
081d3480 +0x046:  mov    %eax,-0x18(%ebp)
081d3483 +0x049:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d3488 +0x04e:  movl   $0x27,0x8(%esp)
081d3490 +0x056:  mov    0xc(%ebp),%edx
081d3493 +0x059:  mov    %edx,0x4(%esp)
081d3497 +0x05d:  mov    %eax,(%esp)
081d349a +0x060:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d349f +0x065:  mov    %eax,-0x14(%ebp)
081d34a2 +0x068:  cmpl   $0x0,-0x14(%ebp)
081d34a6 +0x06c:  je     081d34b0 <+0x76>
081d34a8 +0x06e:  mov    -0x14(%ebp),%eax
081d34ab +0x071:  jmp    081d35f8 <+0x1be>
081d34b0 +0x076:  mov    -0x18(%ebp),%eax
081d34b3 +0x079:  movzwl 0xd(%eax),%eax
081d34b7 +0x07d:  movzwl %ax,%eax
081d34ba +0x080:  mov    %eax,0x8(%esp)
081d34be +0x084:  movl   $0x1,0x4(%esp)
081d34c6 +0x08c:  mov    0xc(%ebp),%eax
081d34c9 +0x08f:  mov    %eax,(%esp)
081d34cc +0x092:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081d34d1 +0x097:  test   %al,%al
081d34d3 +0x099:  je     081d34df <+0xa5>
081d34d5 +0x09b:  mov    $0xd5,%eax
081d34da +0x0a0:  jmp    081d35f8 <+0x1be>
081d34df +0x0a5:  mov    -0x18(%ebp),%eax
081d34e2 +0x0a8:  mov    0x15(%eax),%eax
081d34e5 +0x0ab:  mov    %eax,%ebx
081d34e7 +0x0ad:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d34ec +0x0b2:  mov    %ebx,0x4(%esp)
081d34f0 +0x0b6:  mov    %eax,(%esp)
081d34f3 +0x0b9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d34f8 +0x0be:  mov    %eax,-0x10(%ebp)
081d34fb +0x0c1:  cmpl   $0x0,-0x10(%ebp)
081d34ff +0x0c5:  jne    081d350b <+0xd1>
081d3501 +0x0c7:  mov    $0x4,%eax
081d3506 +0x0cc:  jmp    081d35f8 <+0x1be>
081d350b +0x0d1:  mov    0xc(%ebp),%eax
081d350e +0x0d4:  mov    %eax,(%esp)
081d3511 +0x0d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d3516 +0x0dc:  mov    %eax,-0xc(%ebp)
081d3519 +0x0df:  cmpl   $0x0,-0xc(%ebp)
081d351d +0x0e3:  jne    081d3529 <+0xef>
081d351f +0x0e5:  mov    $0x4,%eax
081d3524 +0x0ea:  jmp    081d35f8 <+0x1be>
081d3529 +0x0ef:  lea    -0x55(%ebp),%eax
081d352c +0x0f2:  mov    %eax,(%esp)
081d352f +0x0f5:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081d3534 +0x0fa:  mov    -0x18(%ebp),%eax
081d3537 +0x0fd:  movzwl 0x13(%eax),%eax
081d353b +0x101:  movzwl %ax,%edx
081d353e +0x104:  lea    -0x98(%ebp),%eax
081d3544 +0x10a:  mov    %edx,0xc(%esp)
081d3548 +0x10e:  movl   $0x1,0x8(%esp)
081d3550 +0x116:  mov    -0xc(%ebp),%edx
081d3553 +0x119:  mov    %edx,0x4(%esp)
081d3557 +0x11d:  mov    %eax,(%esp)
081d355a +0x120:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d355f +0x125:  sub    $0x4,%esp
081d3562 +0x128:  mov    -0x98(%ebp),%eax
081d3568 +0x12e:  mov    %eax,-0x55(%ebp)
081d356b +0x131:  mov    -0x94(%ebp),%eax
081d3571 +0x137:  mov    %eax,-0x51(%ebp)
081d3574 +0x13a:  mov    -0x90(%ebp),%eax
081d357a +0x140:  mov    %eax,-0x4d(%ebp)
081d357d +0x143:  mov    -0x8c(%ebp),%eax
081d3583 +0x149:  mov    %eax,-0x49(%ebp)
081d3586 +0x14c:  mov    -0x88(%ebp),%eax
081d358c +0x152:  mov    %eax,-0x45(%ebp)
081d358f +0x155:  mov    -0x84(%ebp),%eax
081d3595 +0x15b:  mov    %eax,-0x41(%ebp)
081d3598 +0x15e:  mov    -0x80(%ebp),%eax
081d359b +0x161:  mov    %eax,-0x3d(%ebp)
081d359e +0x164:  mov    -0x7c(%ebp),%eax
081d35a1 +0x167:  mov    %eax,-0x39(%ebp)
081d35a4 +0x16a:  mov    -0x78(%ebp),%eax
081d35a7 +0x16d:  mov    %eax,-0x35(%ebp)
081d35aa +0x170:  mov    -0x74(%ebp),%eax
081d35ad +0x173:  mov    %eax,-0x31(%ebp)
081d35b0 +0x176:  mov    -0x70(%ebp),%eax
081d35b3 +0x179:  mov    %eax,-0x2d(%ebp)
081d35b6 +0x17c:  mov    -0x6c(%ebp),%eax
081d35b9 +0x17f:  mov    %eax,-0x29(%ebp)
081d35bc +0x182:  mov    -0x68(%ebp),%eax
081d35bf +0x185:  mov    %eax,-0x25(%ebp)
081d35c2 +0x188:  mov    -0x64(%ebp),%eax
081d35c5 +0x18b:  mov    %eax,-0x21(%ebp)
081d35c8 +0x18e:  mov    -0x60(%ebp),%eax
081d35cb +0x191:  mov    %eax,-0x1d(%ebp)
081d35ce +0x194:  movzbl -0x5c(%ebp),%eax
081d35d2 +0x198:  mov    %al,-0x19(%ebp)
081d35d5 +0x19b:  mov    -0x53(%ebp),%ebx
081d35d8 +0x19e:  mov    -0x10(%ebp),%eax
081d35db +0x1a1:  mov    %eax,(%esp)
081d35de +0x1a4:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081d35e3 +0x1a9:  cmp    %eax,%ebx
081d35e5 +0x1ab:  setne  %al
081d35e8 +0x1ae:  test   %al,%al
081d35ea +0x1b0:  je     081d35f3 <+0x1b9>
081d35ec +0x1b2:  mov    $0x17,%eax
081d35f1 +0x1b7:  jmp    081d35f8 <+0x1be>
081d35f3 +0x1b9:  mov    $0x0,%eax
081d35f8 +0x1be:  mov    -0x4(%ebp),%ebx
081d35fb +0x1c1:  leave
081d35fc +0x1c2:  ret
081d35fd +0x1c3:  nop
```

## 反编译 C

```c
// Dispatcher_Enchant_3rdChronicleItem::check_error @ 0x81d343a

/* Dispatcher_Enchant_3rdChronicleItem::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_Enchant_3rdChronicleItem::check_error
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_59;
  undefined2 uStack_57;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined4 local_51;
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
  undefined1 local_1d;
  MSG_BASE *local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_18 = 7;
  }
  else {
    local_1c = param_2;
    local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x27);
    if (local_18 == 0) {
      cVar2 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(local_1c + 0xd));
      if (cVar2 == '\0') {
        iVar3 = *(int *)(local_1c + 0x15);
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_14 == (CItem *)0x0) {
          local_18 = 4;
        }
        else {
          local_10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          if (local_10 == 0) {
            local_18 = 4;
          }
          else {
            Inven_Item::Inven_Item((Inven_Item *)&local_59);
            CInventory::GetInvenSlot((int)local_9c,local_10);
            local_59 = (undefined2)local_9c._0_4_;
            uStack_57 = SUB42(local_9c._0_4_,2);
            local_55 = (undefined2)local_9c._4_4_;
            uStack_53 = SUB42(local_9c._4_4_,2);
            local_51 = local_94;
            local_4d = local_90;
            local_49 = local_8c;
            local_45 = local_88;
            local_41 = local_84;
            local_3d = local_80;
            local_39 = local_7c;
            local_35 = local_78;
            local_31 = local_74;
            local_2d = local_70;
            local_29 = local_6c;
            local_25 = local_68;
            local_21 = local_64;
            local_1d = local_60;
            iVar3 = CONCAT22(local_55,uStack_57);
            iVar4 = CItem::get_index(local_14);
            if (iVar3 == iVar4) {
              local_18 = 0;
            }
            else {
              local_18 = 0x17;
            }
          }
        }
      }
      else {
        local_18 = 0xd5;
      }
    }
  }
  return local_18;
}
```
