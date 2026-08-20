# check_locked_multibox_error

`_ZN5CUser27check_locked_multibox_errorEPK5CItemib`

`CUser::check_locked_multibox_error(CItem const*, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08675fd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08675fd2  _ZN5CUser27check_locked_multibox_errorEPK5CItemib
#           CUser::check_locked_multibox_error(CItem const*, int, bool)
# range [0x08675fd2, 0x086761df]
08675fd2 +0x000:  push   %ebp
08675fd3 +0x001:  mov    %esp,%ebp
08675fd5 +0x003:  push   %ebx
08675fd6 +0x004:  sub    $0xc4,%esp
08675fdc +0x00a:  mov    0x14(%ebp),%eax
08675fdf +0x00d:  mov    %al,-0x6c(%ebp)
08675fe2 +0x010:  lea    -0x59(%ebp),%eax
08675fe5 +0x013:  mov    %eax,(%esp)
08675fe8 +0x016:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08675fed +0x01b:  mov    0x8(%ebp),%eax
08675ff0 +0x01e:  mov    %eax,(%esp)
08675ff3 +0x021:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08675ff8 +0x026:  lea    -0xb8(%ebp),%edx
08675ffe +0x02c:  mov    0x10(%ebp),%ecx
08676001 +0x02f:  mov    %ecx,0xc(%esp)
08676005 +0x033:  movl   $0x1,0x8(%esp)
0867600d +0x03b:  mov    %eax,0x4(%esp)
08676011 +0x03f:  mov    %edx,(%esp)
08676014 +0x042:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08676019 +0x047:  sub    $0x4,%esp
0867601c +0x04a:  mov    -0xb8(%ebp),%eax
08676022 +0x050:  mov    %eax,-0x59(%ebp)
08676025 +0x053:  mov    -0xb4(%ebp),%eax
0867602b +0x059:  mov    %eax,-0x55(%ebp)
0867602e +0x05c:  mov    -0xb0(%ebp),%eax
08676034 +0x062:  mov    %eax,-0x51(%ebp)
08676037 +0x065:  mov    -0xac(%ebp),%eax
0867603d +0x06b:  mov    %eax,-0x4d(%ebp)
08676040 +0x06e:  mov    -0xa8(%ebp),%eax
08676046 +0x074:  mov    %eax,-0x49(%ebp)
08676049 +0x077:  mov    -0xa4(%ebp),%eax
0867604f +0x07d:  mov    %eax,-0x45(%ebp)
08676052 +0x080:  mov    -0xa0(%ebp),%eax
08676058 +0x086:  mov    %eax,-0x41(%ebp)
0867605b +0x089:  mov    -0x9c(%ebp),%eax
08676061 +0x08f:  mov    %eax,-0x3d(%ebp)
08676064 +0x092:  mov    -0x98(%ebp),%eax
0867606a +0x098:  mov    %eax,-0x39(%ebp)
0867606d +0x09b:  mov    -0x94(%ebp),%eax
08676073 +0x0a1:  mov    %eax,-0x35(%ebp)
08676076 +0x0a4:  mov    -0x90(%ebp),%eax
0867607c +0x0aa:  mov    %eax,-0x31(%ebp)
0867607f +0x0ad:  mov    -0x8c(%ebp),%eax
08676085 +0x0b3:  mov    %eax,-0x2d(%ebp)
08676088 +0x0b6:  mov    -0x88(%ebp),%eax
0867608e +0x0bc:  mov    %eax,-0x29(%ebp)
08676091 +0x0bf:  mov    -0x84(%ebp),%eax
08676097 +0x0c5:  mov    %eax,-0x25(%ebp)
0867609a +0x0c8:  mov    -0x80(%ebp),%eax
0867609d +0x0cb:  mov    %eax,-0x21(%ebp)
086760a0 +0x0ce:  movzbl -0x7c(%ebp),%eax
086760a4 +0x0d2:  mov    %al,-0x1d(%ebp)
086760a7 +0x0d5:  mov    -0x57(%ebp),%eax
086760aa +0x0d8:  mov    %eax,%ebx
086760ac +0x0da:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086760b1 +0x0df:  mov    %ebx,0x4(%esp)
086760b5 +0x0e3:  mov    %eax,(%esp)
086760b8 +0x0e6:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086760bd +0x0eb:  mov    %eax,-0x1c(%ebp)
086760c0 +0x0ee:  cmpl   $0x0,0xc(%ebp)
086760c4 +0x0f2:  je     086760cc <+0xfa>
086760c6 +0x0f4:  cmpl   $0x0,-0x1c(%ebp)
086760ca +0x0f8:  jne    086760d6 <+0x104>
086760cc +0x0fa:  mov    $0x11,%eax
086760d1 +0x0ff:  jmp    086761db <+0x209>
086760d6 +0x104:  mov    0xc(%ebp),%eax
086760d9 +0x107:  mov    %eax,(%esp)
086760dc +0x10a:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
086760e1 +0x10f:  xor    $0x1,%eax
086760e4 +0x112:  test   %al,%al
086760e6 +0x114:  jne    08676128 <+0x156>
086760e8 +0x116:  mov    0xc(%ebp),%eax
086760eb +0x119:  mov    (%eax),%eax
086760ed +0x11b:  add    $0xc,%eax
086760f0 +0x11e:  mov    (%eax),%edx
086760f2 +0x120:  mov    0xc(%ebp),%eax
086760f5 +0x123:  mov    %eax,(%esp)
086760f8 +0x126:  call   *%edx
086760fa +0x128:  cmp    $0x1a,%eax
086760fd +0x12b:  jne    08676128 <+0x156>
086760ff +0x12d:  mov    -0x1c(%ebp),%eax
08676102 +0x130:  mov    %eax,(%esp)
08676105 +0x133:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0867610a +0x138:  xor    $0x1,%eax
0867610d +0x13b:  test   %al,%al
0867610f +0x13d:  jne    08676128 <+0x156>
08676111 +0x13f:  mov    -0x1c(%ebp),%eax
08676114 +0x142:  mov    (%eax),%eax
08676116 +0x144:  add    $0xc,%eax
08676119 +0x147:  mov    (%eax),%edx
0867611b +0x149:  mov    -0x1c(%ebp),%eax
0867611e +0x14c:  mov    %eax,(%esp)
08676121 +0x14f:  call   *%edx
08676123 +0x151:  cmp    $0x1,%eax
08676126 +0x154:  je     0867612f <+0x15d>
08676128 +0x156:  mov    $0x1,%eax
0867612d +0x15b:  jmp    08676134 <+0x162>
0867612f +0x15d:  mov    $0x0,%eax
08676134 +0x162:  test   %al,%al
08676136 +0x164:  je     08676142 <+0x170>
08676138 +0x166:  mov    $0x11,%eax
0867613d +0x16b:  jmp    086761db <+0x209>
08676142 +0x170:  mov    0xc(%ebp),%eax
08676145 +0x173:  mov    0x1ec(%eax),%eax
0867614b +0x179:  mov    %eax,-0x18(%ebp)
0867614e +0x17c:  mov    0xc(%ebp),%eax
08676151 +0x17f:  mov    0x1f0(%eax),%eax
08676157 +0x185:  mov    %eax,-0x14(%ebp)
0867615a +0x188:  mov    -0x1c(%ebp),%eax
0867615d +0x18b:  mov    %eax,(%esp)
08676160 +0x18e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08676165 +0x193:  cmp    -0x18(%ebp),%eax
08676168 +0x196:  jne    0867617a <+0x1a8>
0867616a +0x198:  lea    -0x59(%ebp),%eax
0867616d +0x19b:  mov    %eax,(%esp)
08676170 +0x19e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08676175 +0x1a3:  cmp    -0x14(%ebp),%eax
08676178 +0x1a6:  jge    08676181 <+0x1af>
0867617a +0x1a8:  mov    $0x1,%eax
0867617f +0x1ad:  jmp    08676186 <+0x1b4>
08676181 +0x1af:  mov    $0x0,%eax
08676186 +0x1b4:  test   %al,%al
08676188 +0x1b6:  je     08676191 <+0x1bf>
0867618a +0x1b8:  mov    $0x11,%eax
0867618f +0x1bd:  jmp    086761db <+0x209>
08676191 +0x1bf:  movl   $0x2,-0x10(%ebp)
08676198 +0x1c6:  cmpb   $0x0,-0x6c(%ebp)
0867619c +0x1ca:  je     086761b6 <+0x1e4>
0867619e +0x1cc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086761a3 +0x1d1:  movzbl 0x877e(%eax),%eax
086761aa +0x1d8:  movzbl %al,%eax
086761ad +0x1db:  mov    -0x10(%ebp),%edx
086761b0 +0x1de:  imul   %edx,%eax
086761b3 +0x1e1:  mov    %eax,-0x10(%ebp)
086761b6 +0x1e4:  mov    -0x10(%ebp),%eax
086761b9 +0x1e7:  mov    %eax,0x4(%esp)
086761bd +0x1eb:  mov    0x8(%ebp),%eax
086761c0 +0x1ee:  mov    %eax,(%esp)
086761c3 +0x1f1:  call   08675edc <_ZN5CUser20check_multibox_errorEi>  ; CUser::check_multibox_error(int)
086761c8 +0x1f6:  mov    %eax,-0xc(%ebp)
086761cb +0x1f9:  cmpl   $0x0,-0xc(%ebp)
086761cf +0x1fd:  je     086761d6 <+0x204>
086761d1 +0x1ff:  mov    -0xc(%ebp),%eax
086761d4 +0x202:  jmp    086761db <+0x209>
086761d6 +0x204:  mov    $0x0,%eax
086761db +0x209:  mov    -0x4(%ebp),%ebx
086761de +0x20c:  leave
086761df +0x20d:  ret
```

## 反编译 C

```c
// CUser::check_locked_multibox_error @ 0x8675fd2

/* CUser::check_locked_multibox_error(CItem const*, int, bool) */

int __thiscall
CUser::check_locked_multibox_error(CUser *this,CItem *param_1,int param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  char local_70;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined2 local_59;
  undefined2 uStack_57;
  undefined4 local_55;
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
  undefined1 local_21;
  CItem *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_70 = param_3;
  Inven_Item::Inven_Item((Inven_Item *)&local_5d);
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar4 = 1;
  CInventory::GetInvenSlot((int)local_bc,iVar3);
  local_5d = (undefined2)local_bc._0_4_;
  uStack_5b = SUB42(local_bc._0_4_,2);
  local_59 = (undefined2)local_bc._4_4_;
  uStack_57 = SUB42(local_bc._4_4_,2);
  local_55 = local_b4;
  local_51 = local_b0;
  local_4d = local_ac;
  local_49 = local_a8;
  local_45 = local_a4;
  local_41 = local_a0;
  local_3d = local_9c;
  local_39 = local_98;
  local_35 = local_94;
  local_31 = local_90;
  local_2d = local_8c;
  local_29 = local_88;
  local_25 = local_84;
  local_21 = local_80;
  iVar3 = CONCAT22(local_59,uStack_5b);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if ((param_1 == (CItem *)0x0) || (local_20 == (CItem *)0x0)) {
    iVar3 = 0x11;
  }
  else {
    cVar2 = CItem::is_stackable(param_1);
    if ((((cVar2 == '\x01') &&
         (iVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_1,iVar3,uVar4,param_2), iVar3 == 0x1a))
        && (cVar2 = CItem::is_stackable(local_20), cVar2 == '\x01')) &&
       (iVar3 = (**(code **)(*(int *)local_20 + 0xc))(local_20), iVar3 == 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = 0x11;
    }
    else {
      local_1c = *(int *)(param_1 + 0x1ec);
      local_18 = *(int *)(param_1 + 0x1f0);
      iVar3 = CItem::get_index(local_20);
      if ((iVar3 == local_1c) &&
         (iVar3 = Inven_Item::get_add_info((Inven_Item *)&local_5d), local_18 <= iVar3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = 0x11;
      }
      else {
        local_14 = 2;
        if (local_70 != '\0') {
          iVar3 = G_CDataManager();
          local_14 = (uint)*(byte *)(iVar3 + 0x877e) * local_14;
        }
        iVar3 = check_multibox_error(this,local_14);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}
```
