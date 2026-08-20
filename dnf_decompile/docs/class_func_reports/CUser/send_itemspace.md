# send_itemspace

`_ZN5CUser14send_itemspaceEi`

`CUser::send_itemspace(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865db6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865db6c  _ZN5CUser14send_itemspaceEi
#           CUser::send_itemspace(int)
# range [0x0865db6c, 0x0865dd13]
0865db6c +0x000:  push   %ebp
0865db6d +0x001:  mov    %esp,%ebp
0865db6f +0x003:  push   %esi
0865db70 +0x004:  push   %ebx
0865db71 +0x005:  sub    $0x20,%esp
0865db74 +0x008:  lea    -0x14(%ebp),%eax
0865db77 +0x00b:  mov    %eax,(%esp)
0865db7a +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865db7f +0x013:  cmpl   $0xc,0xc(%ebp)
0865db83 +0x017:  ja     0865dcba <+0x14e>
0865db89 +0x01d:  mov    0xc(%ebp),%eax
0865db8c +0x020:  shl    $0x2,%eax
0865db8f +0x023:  mov    &data#b1d019ed(.rodata)(%eax),%eax
0865db95 +0x029:  jmp    *%eax
0865db97 +0x02b:  mov    0x8(%ebp),%eax
0865db9a +0x02e:  mov    %eax,(%esp)
0865db9d +0x031:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865dba2 +0x036:  lea    -0x14(%ebp),%edx
0865dba5 +0x039:  mov    %edx,0x8(%esp)
0865dba9 +0x03d:  movl   $0x1,0x4(%esp)
0865dbb1 +0x045:  mov    %eax,(%esp)
0865dbb4 +0x048:  call   084fd7b6 <_ZNK10CInventory12MakeItemListE10INVEN_TYPEPv>  ; CInventory::MakeItemList(INVEN_TYPE, void*) const
0865dbb9 +0x04d:  xor    $0x1,%eax
0865dbbc +0x050:  test   %al,%al
0865dbbe +0x052:  je     0865dcc1 <+0x155>
0865dbc4 +0x058:  mov    $0x0,%ebx
0865dbc9 +0x05d:  jmp    0865dcff <+0x193>
0865dbce +0x062:  mov    0x8(%ebp),%eax
0865dbd1 +0x065:  mov    %eax,(%esp)
0865dbd4 +0x068:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865dbd9 +0x06d:  lea    -0x14(%ebp),%edx
0865dbdc +0x070:  mov    %edx,0x8(%esp)
0865dbe0 +0x074:  movl   $0x2,0x4(%esp)
0865dbe8 +0x07c:  mov    %eax,(%esp)
0865dbeb +0x07f:  call   084fd7b6 <_ZNK10CInventory12MakeItemListE10INVEN_TYPEPv>  ; CInventory::MakeItemList(INVEN_TYPE, void*) const
0865dbf0 +0x084:  xor    $0x1,%eax
0865dbf3 +0x087:  test   %al,%al
0865dbf5 +0x089:  je     0865dcc4 <+0x158>
0865dbfb +0x08f:  mov    $0x0,%ebx
0865dc00 +0x094:  jmp    0865dcff <+0x193>
0865dc05 +0x099:  mov    0x8(%ebp),%eax
0865dc08 +0x09c:  mov    %eax,(%esp)
0865dc0b +0x09f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865dc10 +0x0a4:  lea    -0x14(%ebp),%edx
0865dc13 +0x0a7:  mov    %edx,0x4(%esp)
0865dc17 +0x0ab:  mov    %eax,(%esp)
0865dc1a +0x0ae:  call   0850bee2 <_ZNK6CCargo12MakeItemListEP11PacketGuard>  ; CCargo::MakeItemList(PacketGuard*) const
0865dc1f +0x0b3:  xor    $0x1,%eax
0865dc22 +0x0b6:  test   %al,%al
0865dc24 +0x0b8:  je     0865dcc7 <+0x15b>
0865dc2a +0x0be:  mov    $0x0,%ebx
0865dc2f +0x0c3:  jmp    0865dcff <+0x193>
0865dc34 +0x0c8:  mov    0x8(%ebp),%eax
0865dc37 +0x0cb:  mov    %eax,(%esp)
0865dc3a +0x0ce:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865dc3f +0x0d3:  mov    %eax,(%esp)
0865dc42 +0x0d6:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0865dc47 +0x0db:  mov    %eax,(%esp)
0865dc4a +0x0de:  call   0833bdd2 <_ZNK13user_creature12CCreatureMgr20SendCreatureItemListEv>  ; user_creature::CCreatureMgr::SendCreatureItemList() const
0865dc4f +0x0e3:  xor    $0x1,%eax
0865dc52 +0x0e6:  test   %al,%al
0865dc54 +0x0e8:  je     0865dc60 <+0xf4>
0865dc56 +0x0ea:  mov    $0x0,%ebx
0865dc5b +0x0ef:  jmp    0865dcff <+0x193>
0865dc60 +0x0f4:  mov    0x8(%ebp),%eax
0865dc63 +0x0f7:  mov    %eax,(%esp)
0865dc66 +0x0fa:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865dc6b +0x0ff:  lea    -0x14(%ebp),%edx
0865dc6e +0x102:  mov    %edx,0x8(%esp)
0865dc72 +0x106:  movl   $0x3,0x4(%esp)
0865dc7a +0x10e:  mov    %eax,(%esp)
0865dc7d +0x111:  call   084fd7b6 <_ZNK10CInventory12MakeItemListE10INVEN_TYPEPv>  ; CInventory::MakeItemList(INVEN_TYPE, void*) const
0865dc82 +0x116:  xor    $0x1,%eax
0865dc85 +0x119:  test   %al,%al
0865dc87 +0x11b:  je     0865dcca <+0x15e>
0865dc89 +0x11d:  mov    $0x0,%ebx
0865dc8e +0x122:  jmp    0865dcff <+0x193>
0865dc90 +0x124:  mov    0x8(%ebp),%eax
0865dc93 +0x127:  mov    %eax,(%esp)
0865dc96 +0x12a:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0865dc9b +0x12f:  test   %al,%al
0865dc9d +0x131:  je     0865dcb3 <+0x147>
0865dc9f +0x133:  mov    0x8(%ebp),%eax
0865dca2 +0x136:  add    $0x6effc,%eax
0865dca7 +0x13b:  mov    %eax,(%esp)
0865dcaa +0x13e:  call   0828a88a <_ZN13CAccountCargo12SendItemListEv>  ; CAccountCargo::SendItemList()
0865dcaf +0x143:  mov    %eax,%ebx
0865dcb1 +0x145:  jmp    0865dcff <+0x193>
0865dcb3 +0x147:  mov    $0x1,%ebx
0865dcb8 +0x14c:  jmp    0865dcff <+0x193>
0865dcba +0x14e:  mov    $0x0,%ebx
0865dcbf +0x153:  jmp    0865dcff <+0x193>
0865dcc1 +0x155:  nop
0865dcc2 +0x156:  jmp    0865dccb <+0x15f>
0865dcc4 +0x158:  nop
0865dcc5 +0x159:  jmp    0865dccb <+0x15f>
0865dcc7 +0x15b:  nop
0865dcc8 +0x15c:  jmp    0865dccb <+0x15f>
0865dcca +0x15e:  nop
0865dccb +0x15f:  lea    -0x14(%ebp),%eax
0865dcce +0x162:  mov    %eax,0x4(%esp)
0865dcd2 +0x166:  mov    0x8(%ebp),%eax
0865dcd5 +0x169:  mov    %eax,(%esp)
0865dcd8 +0x16c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865dcdd +0x171:  mov    $0x1,%ebx
0865dce2 +0x176:  jmp    0865dcff <+0x193>
0865dce4 +0x178:  mov    %edx,%ebx
0865dce6 +0x17a:  mov    %eax,%esi
0865dce8 +0x17c:  lea    -0x14(%ebp),%eax
0865dceb +0x17f:  mov    %eax,(%esp)
0865dcee +0x182:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865dcf3 +0x187:  mov    %esi,%eax
0865dcf5 +0x189:  mov    %ebx,%edx
0865dcf7 +0x18b:  mov    %eax,(%esp)
0865dcfa +0x18e:  call   08ae3750 <_Unwind_Resume>
0865dcff +0x193:  lea    -0x14(%ebp),%eax
0865dd02 +0x196:  mov    %eax,(%esp)
0865dd05 +0x199:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865dd0a +0x19e:  mov    %ebx,%eax
0865dd0c +0x1a0:  add    $0x20,%esp
0865dd0f +0x1a3:  pop    %ebx
0865dd10 +0x1a4:  pop    %esi
0865dd11 +0x1a5:  pop    %ebp
0865dd12 +0x1a6:  ret
0865dd13 +0x1a7:  nop
```

## 反编译 C

```c
// CUser::send_itemspace @ 0x865db6c

/* CUser::send_itemspace(int) */

undefined4 __thiscall CUser::send_itemspace(CUser *this,int param_1)

{
  char cVar1;
  CCargo *this_00;
  CInventory *pCVar2;
  CCreatureMgr *this_01;
  undefined4 uVar3;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  switch(param_1) {
  case 0:
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
                    /* try { // try from 0865dbb4 to 0865dcdc has its CatchHandler @ 0865dce4 */
    cVar1 = CInventory::MakeItemList(pCVar2,1,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0865dcff;
    }
    break;
  case 1:
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemList(pCVar2,2,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0865dcff;
    }
    break;
  case 2:
    this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
    cVar1 = CCargo::MakeItemList(this_00,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0865dcff;
    }
    break;
  default:
    uVar3 = 0;
    goto LAB_0865dcff;
  case 7:
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar2);
    cVar1 = user_creature::CCreatureMgr::SendCreatureItemList(this_01);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0865dcff;
    }
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemList(pCVar2,3,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0865dcff;
    }
    break;
  case 0xc:
    cVar1 = IsExistAccountCargo(this);
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = CAccountCargo::SendItemList((CAccountCargo *)(this + 0x6effc));
    }
    goto LAB_0865dcff;
  }
  Send(this,local_18);
  uVar3 = 1;
LAB_0865dcff:
  PacketGuard::~PacketGuard(local_18);
  return uVar3;
}
```
