# _getUpgradeCountByUpgradeItem

`_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR`

`WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08548e68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08548e68  _ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR
#           WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)
# range [0x08548e68, 0x08548ff9]
08548e68 +0x000:  push   %ebp
08548e69 +0x001:  mov    %esp,%ebp
08548e6b +0x003:  push   %ebx
08548e6c +0x004:  sub    $0x34,%esp
08548e6f +0x007:  movw   $0x0,-0x1a(%ebp)
08548e75 +0x00d:  mov    0xc(%ebp),%eax
08548e78 +0x010:  add    $0x11,%eax
08548e7b +0x013:  mov    %eax,(%esp)
08548e7e +0x016:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08548e83 +0x01b:  test   %al,%al
08548e85 +0x01d:  jne    08548f0b <+0xa3>
08548e8b +0x023:  mov    0x10(%ebp),%eax
08548e8e +0x026:  mov    0x2(%eax),%eax
08548e91 +0x029:  cmp    $0x1d29,%eax
08548e96 +0x02e:  je     08548ee5 <+0x7d>
08548e98 +0x030:  cmp    $0x1d29,%eax
08548e9d +0x035:  ja     08548eb6 <+0x4e>
08548e9f +0x037:  cmp    $0x1c6a,%eax
08548ea4 +0x03c:  je     08548ed5 <+0x6d>
08548ea6 +0x03e:  cmp    $0x1c6b,%eax
08548eab +0x043:  je     08548edd <+0x75>
08548ead +0x045:  cmp    $0x1c69,%eax
08548eb2 +0x04a:  je     08548ecd <+0x65>
08548eb4 +0x04c:  jmp    08548f05 <+0x9d>
08548eb6 +0x04e:  cmp    $0x1e40,%eax
08548ebb +0x053:  je     08548ef5 <+0x8d>
08548ebd +0x055:  cmp    $0x1e86,%eax
08548ec2 +0x05a:  je     08548efd <+0x95>
08548ec4 +0x05c:  cmp    $0x1e3f,%eax
08548ec9 +0x061:  je     08548eed <+0x85>
08548ecb +0x063:  jmp    08548f05 <+0x9d>
08548ecd +0x065:  movw   $0x7,-0x1a(%ebp)
08548ed3 +0x06b:  jmp    08548f0b <+0xa3>
08548ed5 +0x06d:  movw   $0xa,-0x1a(%ebp)
08548edb +0x073:  jmp    08548f0b <+0xa3>
08548edd +0x075:  movw   $0xc,-0x1a(%ebp)
08548ee3 +0x07b:  jmp    08548f0b <+0xa3>
08548ee5 +0x07d:  movw   $0x7,-0x1a(%ebp)
08548eeb +0x083:  jmp    08548f0b <+0xa3>
08548eed +0x085:  movw   $0x3,-0x1a(%ebp)
08548ef3 +0x08b:  jmp    08548f0b <+0xa3>
08548ef5 +0x08d:  movw   $0x5,-0x1a(%ebp)
08548efb +0x093:  jmp    08548f0b <+0xa3>
08548efd +0x095:  movw   $0xd,-0x1a(%ebp)
08548f03 +0x09b:  jmp    08548f0b <+0xa3>
08548f05 +0x09d:  movw   $0x0,-0x1a(%ebp)
08548f0b +0x0a3:  mov    0x10(%ebp),%eax
08548f0e +0x0a6:  mov    0x2(%eax),%eax
08548f11 +0x0a9:  mov    %eax,%ebx
08548f13 +0x0ab:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08548f18 +0x0b0:  mov    %ebx,0x4(%esp)
08548f1c +0x0b4:  mov    %eax,(%esp)
08548f1f +0x0b7:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08548f24 +0x0bc:  mov    %eax,-0x18(%ebp)
08548f27 +0x0bf:  cmpl   $0x0,-0x18(%ebp)
08548f2b +0x0c3:  je     08548f43 <+0xdb>
08548f2d +0x0c5:  mov    -0x18(%ebp),%eax
08548f30 +0x0c8:  mov    %eax,(%esp)
08548f33 +0x0cb:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08548f38 +0x0d0:  test   %al,%al
08548f3a +0x0d2:  je     08548f43 <+0xdb>
08548f3c +0x0d4:  mov    $0x1,%eax
08548f41 +0x0d9:  jmp    08548f48 <+0xe0>
08548f43 +0x0db:  mov    $0x0,%eax
08548f48 +0x0e0:  test   %al,%al
08548f4a +0x0e2:  je     08548ff0 <+0x188>
08548f50 +0x0e8:  mov    -0x18(%ebp),%eax
08548f53 +0x0eb:  mov    %eax,-0x14(%ebp)
08548f56 +0x0ee:  mov    -0x14(%ebp),%eax
08548f59 +0x0f1:  mov    %eax,(%esp)
08548f5c +0x0f4:  call   084b4222 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2d5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2d5
08548f61 +0x0f9:  test   %al,%al
08548f63 +0x0fb:  je     08548f92 <+0x12a>
08548f65 +0x0fd:  mov    -0x14(%ebp),%eax
08548f68 +0x100:  mov    %eax,(%esp)
08548f6b +0x103:  call   0854b4f8 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x380>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x380
08548f70 +0x108:  cwtl
08548f71 +0x109:  mov    %eax,-0x10(%ebp)
08548f74 +0x10c:  cmpl   $0x0,-0x10(%ebp)
08548f78 +0x110:  js     08548f80 <+0x118>
08548f7a +0x112:  cmpl   $0x1f,-0x10(%ebp)
08548f7e +0x116:  jle    08548f89 <+0x121>
08548f80 +0x118:  movw   $0x0,-0x1a(%ebp)
08548f86 +0x11e:  nop
08548f87 +0x11f:  jmp    08548ff0 <+0x188>
08548f89 +0x121:  mov    -0x10(%ebp),%eax
08548f8c +0x124:  mov    %ax,-0x1a(%ebp)
08548f90 +0x128:  jmp    08548ff0 <+0x188>
08548f92 +0x12a:  mov    -0x14(%ebp),%eax
08548f95 +0x12d:  mov    %eax,(%esp)
08548f98 +0x130:  call   084b4242 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2f5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2f5
08548f9d +0x135:  test   %al,%al
08548f9f +0x137:  je     08548ff0 <+0x188>
08548fa1 +0x139:  mov    0xc(%ebp),%eax
08548fa4 +0x13c:  add    $0x11,%eax
08548fa7 +0x13f:  mov    %eax,(%esp)
08548faa +0x142:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08548faf +0x147:  xor    $0x1,%eax
08548fb2 +0x14a:  test   %al,%al
08548fb4 +0x14c:  je     08548fc6 <+0x15e>
08548fb6 +0x14e:  mov    0x14(%ebp),%eax
08548fb9 +0x151:  movl   $0x13,(%eax)
08548fbf +0x157:  mov    $0x0,%eax
08548fc4 +0x15c:  jmp    08548ff4 <+0x18c>
08548fc6 +0x15e:  mov    -0x14(%ebp),%eax
08548fc9 +0x161:  mov    %eax,(%esp)
08548fcc +0x164:  call   0854b508 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x390>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x390
08548fd1 +0x169:  cwtl
08548fd2 +0x16a:  mov    %eax,-0xc(%ebp)
08548fd5 +0x16d:  cmpl   $0x0,-0xc(%ebp)
08548fd9 +0x171:  js     08548fe1 <+0x179>
08548fdb +0x173:  cmpl   $0x1f,-0xc(%ebp)
08548fdf +0x177:  jle    08548fe9 <+0x181>
08548fe1 +0x179:  movw   $0x0,-0x1a(%ebp)
08548fe7 +0x17f:  jmp    08548ff0 <+0x188>
08548fe9 +0x181:  mov    -0xc(%ebp),%eax
08548fec +0x184:  mov    %ax,-0x1a(%ebp)
08548ff0 +0x188:  movzwl -0x1a(%ebp),%eax
08548ff4 +0x18c:  add    $0x34,%esp
08548ff7 +0x18f:  pop    %ebx
08548ff8 +0x190:  pop    %ebp
08548ff9 +0x191:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem @ 0x8548e68

/* WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem(Inven_Item const&, Inven_Item const&,
   ENUM_ERROR&) */

short __thiscall
WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,ENUM_ERROR *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *this_01;
  short local_1e;
  
  local_1e = 0;
  cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(param_2 + 2);
    if (uVar1 == 0x1d29) {
      local_1e = 7;
    }
    else {
      if (uVar1 < 0x1d2a) {
        if (uVar1 == 0x1c6a) {
          local_1e = 10;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1c6b) {
          local_1e = 0xc;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1c69) {
          local_1e = 7;
          goto LAB_08548f0b;
        }
      }
      else {
        if (uVar1 == 0x1e40) {
          local_1e = 5;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1e86) {
          local_1e = 0xd;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1e3f) {
          local_1e = 3;
          goto LAB_08548f0b;
        }
      }
      local_1e = 0;
    }
  }
LAB_08548f0b:
  iVar2 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if ((this_01 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_01), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    cVar4 = CStackableItem::IsReinforceTicket((CStackableItem *)this_01);
    if (cVar4 == '\0') {
      cVar4 = CStackableItem::IsAmplifyReinforceTicket((CStackableItem *)this_01);
      if (cVar4 != '\0') {
        cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
        if (cVar4 == '\x01') {
          local_1e = CStackableItem::GetAmplifyReinforceValue((CStackableItem *)this_01);
          if ((local_1e < 0) || (0x1f < local_1e)) {
            local_1e = 0;
          }
        }
        else {
          *(undefined4 *)param_3 = 0x13;
          local_1e = 0;
        }
      }
    }
    else {
      local_1e = CStackableItem::GetReinforceVaule((CStackableItem *)this_01);
      if ((local_1e < 0) || (0x1f < local_1e)) {
        local_1e = 0;
      }
    }
  }
  return local_1e;
}
```
