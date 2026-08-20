# _makeRewardItemInfo

`_ZN6CParty19_makeRewardItemInfoEPK5CUserP10Inven_ItemR11PacketGuard`

`CParty::_makeRewardItemInfo(CUser const*, Inven_Item*, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ad0be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ad0be  _ZN6CParty19_makeRewardItemInfoEPK5CUserP10Inven_ItemR11PacketGuard
#           CParty::_makeRewardItemInfo(CUser const*, Inven_Item*, PacketGuard&)
# range [0x085ad0be, 0x085ad277]
085ad0be +0x000:  push   %ebp
085ad0bf +0x001:  mov    %esp,%ebp
085ad0c1 +0x003:  push   %ebx
085ad0c2 +0x004:  sub    $0x64,%esp
085ad0c5 +0x007:  movl   $0xffffffff,-0xc(%ebp)
085ad0cc +0x00e:  mov    0x10(%ebp),%eax
085ad0cf +0x011:  add    $0x3d,%eax
085ad0d2 +0x014:  mov    0x2(%eax),%eax
085ad0d5 +0x017:  cmp    $0xffffffff,%eax
085ad0d8 +0x01a:  jne    085ad0fd <+0x3f>
085ad0da +0x01c:  mov    0x10(%ebp),%eax
085ad0dd +0x01f:  add    $0x3d,%eax
085ad0e0 +0x022:  movl   $0x0,0x2(%eax)
085ad0e7 +0x029:  mov    0x10(%ebp),%eax
085ad0ea +0x02c:  add    $0x3d,%eax
085ad0ed +0x02f:  movl   $0x0,0x4(%esp)
085ad0f5 +0x037:  mov    %eax,(%esp)
085ad0f8 +0x03a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085ad0fd +0x03f:  mov    0x10(%ebp),%eax
085ad100 +0x042:  add    $0x3d,%eax
085ad103 +0x045:  mov    0x2(%eax),%eax
085ad106 +0x048:  test   %eax,%eax
085ad108 +0x04a:  je     085ad1ed <+0x12f>
085ad10e +0x050:  mov    0x10(%ebp),%eax
085ad111 +0x053:  lea    0x3d(%eax),%ebx
085ad114 +0x056:  mov    0xc(%ebp),%eax
085ad117 +0x059:  mov    %eax,(%esp)
085ad11a +0x05c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ad11f +0x061:  mov    (%ebx),%edx
085ad121 +0x063:  mov    %edx,0x4(%esp)
085ad125 +0x067:  mov    0x4(%ebx),%edx
085ad128 +0x06a:  mov    %edx,0x8(%esp)
085ad12c +0x06e:  mov    0x8(%ebx),%edx
085ad12f +0x071:  mov    %edx,0xc(%esp)
085ad133 +0x075:  mov    0xc(%ebx),%edx
085ad136 +0x078:  mov    %edx,0x10(%esp)
085ad13a +0x07c:  mov    0x10(%ebx),%edx
085ad13d +0x07f:  mov    %edx,0x14(%esp)
085ad141 +0x083:  mov    0x14(%ebx),%edx
085ad144 +0x086:  mov    %edx,0x18(%esp)
085ad148 +0x08a:  mov    0x18(%ebx),%edx
085ad14b +0x08d:  mov    %edx,0x1c(%esp)
085ad14f +0x091:  mov    0x1c(%ebx),%edx
085ad152 +0x094:  mov    %edx,0x20(%esp)
085ad156 +0x098:  mov    0x20(%ebx),%edx
085ad159 +0x09b:  mov    %edx,0x24(%esp)
085ad15d +0x09f:  mov    0x24(%ebx),%edx
085ad160 +0x0a2:  mov    %edx,0x28(%esp)
085ad164 +0x0a6:  mov    0x28(%ebx),%edx
085ad167 +0x0a9:  mov    %edx,0x2c(%esp)
085ad16b +0x0ad:  mov    0x2c(%ebx),%edx
085ad16e +0x0b0:  mov    %edx,0x30(%esp)
085ad172 +0x0b4:  mov    0x30(%ebx),%edx
085ad175 +0x0b7:  mov    %edx,0x34(%esp)
085ad179 +0x0bb:  mov    0x34(%ebx),%edx
085ad17c +0x0be:  mov    %edx,0x38(%esp)
085ad180 +0x0c2:  mov    0x38(%ebx),%edx
085ad183 +0x0c5:  mov    %edx,0x3c(%esp)
085ad187 +0x0c9:  movzbl 0x3c(%ebx),%edx
085ad18b +0x0cd:  mov    %dl,0x40(%esp)
085ad18f +0x0d1:  mov    %eax,(%esp)
085ad192 +0x0d4:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
085ad197 +0x0d9:  mov    %eax,-0xc(%ebp)
085ad19a +0x0dc:  cmpl   $0x0,-0xc(%ebp)
085ad19e +0x0e0:  js     085ad1b5 <+0xf7>
085ad1a0 +0x0e2:  mov    0x14(%ebp),%eax
085ad1a3 +0x0e5:  movl   $0x2,0x4(%esp)
085ad1ab +0x0ed:  mov    %eax,(%esp)
085ad1ae +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ad1b3 +0x0f5:  jmp    085ad200 <+0x142>
085ad1b5 +0x0f7:  mov    0x14(%ebp),%eax
085ad1b8 +0x0fa:  movl   $0x1,0x4(%esp)
085ad1c0 +0x102:  mov    %eax,(%esp)
085ad1c3 +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ad1c8 +0x10a:  mov    0x10(%ebp),%eax
085ad1cb +0x10d:  add    $0x3d,%eax
085ad1ce +0x110:  movl   $0x0,0x2(%eax)
085ad1d5 +0x117:  mov    0x10(%ebp),%eax
085ad1d8 +0x11a:  add    $0x3d,%eax
085ad1db +0x11d:  movl   $0x0,0x4(%esp)
085ad1e3 +0x125:  mov    %eax,(%esp)
085ad1e6 +0x128:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085ad1eb +0x12d:  jmp    085ad200 <+0x142>
085ad1ed +0x12f:  mov    0x14(%ebp),%eax
085ad1f0 +0x132:  movl   $0x1,0x4(%esp)
085ad1f8 +0x13a:  mov    %eax,(%esp)
085ad1fb +0x13d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ad200 +0x142:  mov    0x14(%ebp),%eax
085ad203 +0x145:  movl   $0x0,0x4(%esp)
085ad20b +0x14d:  mov    %eax,(%esp)
085ad20e +0x150:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ad213 +0x155:  mov    0x10(%ebp),%eax
085ad216 +0x158:  mov    %eax,(%esp)
085ad219 +0x15b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085ad21e +0x160:  mov    0x14(%ebp),%edx
085ad221 +0x163:  mov    %eax,0x4(%esp)
085ad225 +0x167:  mov    %edx,(%esp)
085ad228 +0x16a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ad22d +0x16f:  mov    0x10(%ebp),%eax
085ad230 +0x172:  add    $0x3d,%eax
085ad233 +0x175:  mov    0x2(%eax),%eax
085ad236 +0x178:  test   %eax,%eax
085ad238 +0x17a:  je     085ad271 <+0x1b3>
085ad23a +0x17c:  mov    0x10(%ebp),%eax
085ad23d +0x17f:  add    $0x3d,%eax
085ad240 +0x182:  mov    0x2(%eax),%eax
085ad243 +0x185:  mov    %eax,%edx
085ad245 +0x187:  mov    0x14(%ebp),%eax
085ad248 +0x18a:  mov    %edx,0x4(%esp)
085ad24c +0x18e:  mov    %eax,(%esp)
085ad24f +0x191:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ad254 +0x196:  mov    0x10(%ebp),%eax
085ad257 +0x199:  add    $0x3d,%eax
085ad25a +0x19c:  mov    %eax,(%esp)
085ad25d +0x19f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085ad262 +0x1a4:  mov    0x14(%ebp),%edx
085ad265 +0x1a7:  mov    %eax,0x4(%esp)
085ad269 +0x1ab:  mov    %edx,(%esp)
085ad26c +0x1ae:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ad271 +0x1b3:  add    $0x64,%esp
085ad274 +0x1b6:  pop    %ebx
085ad275 +0x1b7:  pop    %ebp
085ad276 +0x1b8:  ret
085ad277 +0x1b9:  nop
```

## 反编译 C

```c
// CParty::_makeRewardItemInfo @ 0x85ad0be

/* CParty::_makeRewardItemInfo(CUser const*, Inven_Item*, PacketGuard&) */

void __thiscall
CParty::_makeRewardItemInfo(CParty *this,CUser *param_1,Inven_Item *param_2,PacketGuard *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x3f) == -1) {
    *(undefined4 *)(param_2 + 0x3f) = 0;
    Inven_Item::set_add_info(param_2 + 0x3d,0);
  }
  if (*(int *)(param_2 + 0x3f) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
  }
  else {
    uVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar2 = CInventory::tryInsertItemIntoInventory
                      (uVar1,*(undefined4 *)(param_2 + 0x3d),*(undefined4 *)(param_2 + 0x41),
                       *(undefined4 *)(param_2 + 0x45),*(undefined4 *)(param_2 + 0x49),
                       *(undefined4 *)(param_2 + 0x4d),*(undefined4 *)(param_2 + 0x51),
                       *(undefined4 *)(param_2 + 0x55),*(undefined4 *)(param_2 + 0x59),
                       *(undefined4 *)(param_2 + 0x5d),*(undefined4 *)(param_2 + 0x61),
                       *(undefined4 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x69),
                       *(undefined4 *)(param_2 + 0x6d),*(undefined4 *)(param_2 + 0x71),
                       *(undefined4 *)(param_2 + 0x75),param_2[0x79]);
    if (iVar2 < 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
      *(undefined4 *)(param_2 + 0x3f) = 0;
      Inven_Item::set_add_info(param_2 + 0x3d,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,2);
    }
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,0);
  iVar2 = Inven_Item::get_add_info(param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar2);
  if (*(int *)(param_2 + 0x3f) != 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,*(int *)(param_2 + 0x3f));
    iVar2 = Inven_Item::get_add_info(param_2 + 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar2);
  }
  return;
}
```
