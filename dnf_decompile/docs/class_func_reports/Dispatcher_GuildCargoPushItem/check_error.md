# check_error

`_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoPushItem::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPushItem` | `0x081d0f64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0f64  _ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoPushItem::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d0f64, 0x081d10d3]
081d0f64 +0x000:  push   %ebp
081d0f65 +0x001:  mov    %esp,%ebp
081d0f67 +0x003:  push   %ebx
081d0f68 +0x004:  sub    $0x74,%esp
081d0f6b +0x007:  mov    0xc(%ebp),%eax
081d0f6e +0x00a:  mov    %eax,(%esp)
081d0f71 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d0f76 +0x012:  cmp    $0x3,%eax
081d0f79 +0x015:  jne    081d0f8a <+0x26>
081d0f7b +0x017:  mov    0xc(%ebp),%eax
081d0f7e +0x01a:  mov    %eax,(%esp)
081d0f81 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d0f86 +0x022:  test   %eax,%eax
081d0f88 +0x024:  jne    081d0f91 <+0x2d>
081d0f8a +0x026:  mov    $0x1,%eax
081d0f8f +0x02b:  jmp    081d0f96 <+0x32>
081d0f91 +0x02d:  mov    $0x0,%eax
081d0f96 +0x032:  test   %al,%al
081d0f98 +0x034:  je     081d0fa4 <+0x40>
081d0f9a +0x036:  mov    $0xffffffff,%eax
081d0f9f +0x03b:  jmp    081d10cf <+0x16b>
081d0fa4 +0x040:  mov    0xc(%ebp),%eax
081d0fa7 +0x043:  mov    %eax,(%esp)
081d0faa +0x046:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0faf +0x04b:  test   %eax,%eax
081d0fb1 +0x04d:  sete   %al
081d0fb4 +0x050:  test   %al,%al
081d0fb6 +0x052:  je     081d0fc2 <+0x5e>
081d0fb8 +0x054:  mov    $0x64,%eax
081d0fbd +0x059:  jmp    081d10cf <+0x16b>
081d0fc2 +0x05e:  mov    0xc(%ebp),%eax
081d0fc5 +0x061:  mov    %eax,(%esp)
081d0fc8 +0x064:  call   082301d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5882>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5882
081d0fcd +0x069:  xor    $0x1,%eax
081d0fd0 +0x06c:  test   %al,%al
081d0fd2 +0x06e:  je     081d0fde <+0x7a>
081d0fd4 +0x070:  mov    $0xb5,%eax
081d0fd9 +0x075:  jmp    081d10cf <+0x16b>
081d0fde +0x07a:  mov    0x10(%ebp),%eax
081d0fe1 +0x07d:  mov    %eax,-0x1c(%ebp)
081d0fe4 +0x080:  mov    0xc(%ebp),%eax
081d0fe7 +0x083:  mov    %eax,(%esp)
081d0fea +0x086:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d0fef +0x08b:  mov    %eax,-0x18(%ebp)
081d0ff2 +0x08e:  mov    -0x1c(%ebp),%eax
081d0ff5 +0x091:  movzbl 0xd(%eax),%eax
081d0ff9 +0x095:  movzbl %al,%eax
081d0ffc +0x098:  mov    %eax,(%esp)
081d0fff +0x09b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d1004 +0x0a0:  mov    %eax,-0x14(%ebp)
081d1007 +0x0a3:  mov    -0x1c(%ebp),%eax
081d100a +0x0a6:  movzwl 0xe(%eax),%eax
081d100e +0x0aa:  movzwl %ax,%ecx
081d1011 +0x0ad:  mov    -0x14(%ebp),%edx
081d1014 +0x0b0:  lea    -0x59(%ebp),%eax
081d1017 +0x0b3:  mov    %ecx,0xc(%esp)
081d101b +0x0b7:  mov    %edx,0x8(%esp)
081d101f +0x0bb:  mov    -0x18(%ebp),%edx
081d1022 +0x0be:  mov    %edx,0x4(%esp)
081d1026 +0x0c2:  mov    %eax,(%esp)
081d1029 +0x0c5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d102e +0x0ca:  sub    $0x4,%esp
081d1031 +0x0cd:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d1036 +0x0d2:  movl   $0x8,0x8(%esp)
081d103e +0x0da:  mov    0xc(%ebp),%edx
081d1041 +0x0dd:  mov    %edx,0x4(%esp)
081d1045 +0x0e1:  mov    %eax,(%esp)
081d1048 +0x0e4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d104d +0x0e9:  mov    %eax,-0x10(%ebp)
081d1050 +0x0ec:  cmpl   $0x0,-0x10(%ebp)
081d1054 +0x0f0:  je     081d105b <+0xf7>
081d1056 +0x0f2:  mov    -0x10(%ebp),%eax
081d1059 +0x0f5:  jmp    081d10cf <+0x16b>
081d105b +0x0f7:  mov    -0x1c(%ebp),%eax
081d105e +0x0fa:  movzwl 0xe(%eax),%eax
081d1062 +0x0fe:  movzwl %ax,%edx
081d1065 +0x101:  mov    -0x14(%ebp),%eax
081d1068 +0x104:  mov    %edx,0x8(%esp)
081d106c +0x108:  mov    %eax,0x4(%esp)
081d1070 +0x10c:  mov    0xc(%ebp),%eax
081d1073 +0x10f:  mov    %eax,(%esp)
081d1076 +0x112:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081d107b +0x117:  test   %al,%al
081d107d +0x119:  je     081d1086 <+0x122>
081d107f +0x11b:  mov    $0xd5,%eax
081d1084 +0x120:  jmp    081d10cf <+0x16b>
081d1086 +0x122:  mov    -0x1c(%ebp),%eax
081d1089 +0x125:  mov    0x10(%eax),%eax
081d108c +0x128:  test   %eax,%eax
081d108e +0x12a:  je     081d109d <+0x139>
081d1090 +0x12c:  mov    -0x57(%ebp),%edx
081d1093 +0x12f:  mov    -0x1c(%ebp),%eax
081d1096 +0x132:  mov    0x10(%eax),%eax
081d1099 +0x135:  cmp    %eax,%edx
081d109b +0x137:  je     081d10a4 <+0x140>
081d109d +0x139:  mov    $0xc5,%eax
081d10a2 +0x13e:  jmp    081d10cf <+0x16b>
081d10a4 +0x140:  mov    -0x57(%ebp),%eax
081d10a7 +0x143:  mov    %eax,%ebx
081d10a9 +0x145:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d10ae +0x14a:  mov    %ebx,0x4(%esp)
081d10b2 +0x14e:  mov    %eax,(%esp)
081d10b5 +0x151:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d10ba +0x156:  mov    %eax,-0xc(%ebp)
081d10bd +0x159:  cmpl   $0x0,-0xc(%ebp)
081d10c1 +0x15d:  jne    081d10ca <+0x166>
081d10c3 +0x15f:  mov    $0xc5,%eax
081d10c8 +0x164:  jmp    081d10cf <+0x16b>
081d10ca +0x166:  mov    $0x0,%eax
081d10cf +0x16b:  mov    -0x4(%ebp),%ebx
081d10d2 +0x16e:  leave
081d10d3 +0x16f:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoPushItem::check_error @ 0x81d0f64

/* Dispatcher_GuildCargoPushItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_GuildCargoPushItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this;
  uint uVar4;
  undefined1 local_5d [2];
  int local_5b;
  ParamBase *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = -1;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      local_14 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        local_20 = param_3;
        local_1c = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
        local_18 = GetInvenTypeFromItemSpace(local_20[0xd]);
        uVar4 = (uint)*(ushort *)(local_20 + 0xe);
        CInventory::GetInvenSlot((int)local_5d,local_1c);
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,8,uVar4);
        if (local_14 == 0) {
          cVar2 = CUser::CheckItemLock((CUser *)param_2,local_18,(uint)*(ushort *)(local_20 + 0xe));
          if (cVar2 == '\0') {
            if ((*(int *)(local_20 + 0x10) == 0) || (local_5b != *(int *)(local_20 + 0x10))) {
              local_14 = 0xc5;
            }
            else {
              this = (CDataManager *)G_CDataManager();
              iVar3 = CDataManager::find_item(this,local_5b);
              if (iVar3 == 0) {
                local_14 = 0xc5;
              }
              else {
                local_14 = 0;
              }
            }
          }
          else {
            local_14 = 0xd5;
          }
        }
      }
      else {
        local_14 = 0xb5;
      }
    }
  }
  return local_14;
}
```
