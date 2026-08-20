# CheckInventoryEmptyCount

`_ZN7pc_room24CheckInventoryEmptyCountER5CUseri`

`pc_room::CheckInventoryEmptyCount(CUser&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x0827108c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827108c  _ZN7pc_room24CheckInventoryEmptyCountER5CUseri
#           pc_room::CheckInventoryEmptyCount(CUser&, int)
# range [0x0827108c, 0x082711f6]
0827108c +0x000:  push   %ebp
0827108d +0x001:  mov    %esp,%ebp
0827108f +0x003:  sub    $0x18,%esp
08271092 +0x006:  mov    0x8(%ebp),%eax
08271095 +0x009:  mov    %eax,(%esp)
08271098 +0x00c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827109d +0x011:  mov    0xc(%ebp),%edx
082710a0 +0x014:  mov    %edx,0x8(%esp)
082710a4 +0x018:  movl   $0x1,0x4(%esp)
082710ac +0x020:  mov    %eax,(%esp)
082710af +0x023:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
082710b4 +0x028:  xor    $0x1,%eax
082710b7 +0x02b:  test   %al,%al
082710b9 +0x02d:  jne    082711e9 <+0x15d>
082710bf +0x033:  mov    0x8(%ebp),%eax
082710c2 +0x036:  mov    %eax,(%esp)
082710c5 +0x039:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082710ca +0x03e:  mov    0xc(%ebp),%edx
082710cd +0x041:  mov    %edx,0x8(%esp)
082710d1 +0x045:  movl   $0x2,0x4(%esp)
082710d9 +0x04d:  mov    %eax,(%esp)
082710dc +0x050:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
082710e1 +0x055:  xor    $0x1,%eax
082710e4 +0x058:  test   %al,%al
082710e6 +0x05a:  jne    082711e9 <+0x15d>
082710ec +0x060:  mov    0x8(%ebp),%eax
082710ef +0x063:  mov    %eax,(%esp)
082710f2 +0x066:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082710f7 +0x06b:  mov    0xc(%ebp),%edx
082710fa +0x06e:  mov    %edx,0x8(%esp)
082710fe +0x072:  movl   $0x3,0x4(%esp)
08271106 +0x07a:  mov    %eax,(%esp)
08271109 +0x07d:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0827110e +0x082:  xor    $0x1,%eax
08271111 +0x085:  test   %al,%al
08271113 +0x087:  jne    082711e9 <+0x15d>
08271119 +0x08d:  mov    0x8(%ebp),%eax
0827111c +0x090:  mov    %eax,(%esp)
0827111f +0x093:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08271124 +0x098:  mov    0xc(%ebp),%edx
08271127 +0x09b:  mov    %edx,0x8(%esp)
0827112b +0x09f:  movl   $0xa,0x4(%esp)
08271133 +0x0a7:  mov    %eax,(%esp)
08271136 +0x0aa:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0827113b +0x0af:  xor    $0x1,%eax
0827113e +0x0b2:  test   %al,%al
08271140 +0x0b4:  jne    082711e9 <+0x15d>
08271146 +0x0ba:  mov    0x8(%ebp),%eax
08271149 +0x0bd:  mov    %eax,(%esp)
0827114c +0x0c0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08271151 +0x0c5:  mov    0xc(%ebp),%edx
08271154 +0x0c8:  mov    %edx,0x8(%esp)
08271158 +0x0cc:  movl   $0x9,0x4(%esp)
08271160 +0x0d4:  mov    %eax,(%esp)
08271163 +0x0d7:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08271168 +0x0dc:  xor    $0x1,%eax
0827116b +0x0df:  test   %al,%al
0827116d +0x0e1:  jne    082711e9 <+0x15d>
0827116f +0x0e3:  mov    0x8(%ebp),%eax
08271172 +0x0e6:  mov    %eax,(%esp)
08271175 +0x0e9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0827117a +0x0ee:  mov    0xc(%ebp),%edx
0827117d +0x0f1:  mov    %edx,0x8(%esp)
08271181 +0x0f5:  movl   $0x5,0x4(%esp)
08271189 +0x0fd:  mov    %eax,(%esp)
0827118c +0x100:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
08271191 +0x105:  xor    $0x1,%eax
08271194 +0x108:  test   %al,%al
08271196 +0x10a:  jne    082711e9 <+0x15d>
08271198 +0x10c:  mov    0x8(%ebp),%eax
0827119b +0x10f:  mov    %eax,(%esp)
0827119e +0x112:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082711a3 +0x117:  mov    0xc(%ebp),%edx
082711a6 +0x11a:  mov    %edx,0x8(%esp)
082711aa +0x11e:  movl   $0x6,0x4(%esp)
082711b2 +0x126:  mov    %eax,(%esp)
082711b5 +0x129:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
082711ba +0x12e:  xor    $0x1,%eax
082711bd +0x131:  test   %al,%al
082711bf +0x133:  jne    082711e9 <+0x15d>
082711c1 +0x135:  mov    0x8(%ebp),%eax
082711c4 +0x138:  mov    %eax,(%esp)
082711c7 +0x13b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082711cc +0x140:  movl   $0x8,0x8(%esp)
082711d4 +0x148:  movl   $0x2,0x4(%esp)
082711dc +0x150:  mov    %eax,(%esp)
082711df +0x153:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
082711e4 +0x158:  cmp    0xc(%ebp),%eax
082711e7 +0x15b:  jl     082711f0 <+0x164>
082711e9 +0x15d:  mov    $0x1,%eax
082711ee +0x162:  jmp    082711f5 <+0x169>
082711f0 +0x164:  mov    $0x0,%eax
082711f5 +0x169:  leave
082711f6 +0x16a:  ret
```

## 反编译 C

```c
// pc_room::CheckInventoryEmptyCount @ 0x827108c

/* pc_room::CheckInventoryEmptyCount(CUser&, int) */

undefined4 pc_room::CheckInventoryEmptyCount(CUser *param_1,int param_2)

{
  char cVar1;
  CInventory *pCVar2;
  int iVar3;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  cVar1 = CInventory::check_empty_count(pCVar2,1,param_2);
  if (cVar1 == '\x01') {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::check_empty_count(pCVar2,2,param_2);
    if (cVar1 == '\x01') {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar1 = CInventory::check_empty_count(pCVar2,3,param_2);
      if (cVar1 == '\x01') {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        cVar1 = CInventory::check_empty_count(pCVar2,10,param_2);
        if (cVar1 == '\x01') {
          pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar1 = CInventory::check_empty_count(pCVar2,9,param_2);
          if (cVar1 == '\x01') {
            pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            cVar1 = CInventory::check_empty_count(pCVar2,5,param_2);
            if (cVar1 == '\x01') {
              pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              cVar1 = CInventory::check_empty_count(pCVar2,6,param_2);
              if (cVar1 == '\x01') {
                pCVar2 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                iVar3 = CInventory::GetRemainCapacity(pCVar2,2,8);
                if (iVar3 < param_2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
```
