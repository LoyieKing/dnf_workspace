# SendNotifyRecipe

`_ZN13CAccountCargo16SendNotifyRecipeEP5CUserib`

`CAccountCargo::SendNotifyRecipe(CUser*, int, bool)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828b3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b3d0  _ZN13CAccountCargo16SendNotifyRecipeEP5CUserib
#           CAccountCargo::SendNotifyRecipe(CUser*, int, bool)
# range [0x0828b3d0, 0x0828b4eb]
0828b3d0 +0x000:  push   %ebp
0828b3d1 +0x001:  mov    %esp,%ebp
0828b3d3 +0x003:  push   %esi
0828b3d4 +0x004:  push   %ebx
0828b3d5 +0x005:  sub    $0x30,%esp
0828b3d8 +0x008:  mov    0x10(%ebp),%eax
0828b3db +0x00b:  mov    %al,-0x1c(%ebp)
0828b3de +0x00e:  lea    -0x14(%ebp),%eax
0828b3e1 +0x011:  mov    %eax,(%esp)
0828b3e4 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828b3e9 +0x019:  movl   $0xe,0x8(%esp)
0828b3f1 +0x021:  movl   $0x0,0x4(%esp)
0828b3f9 +0x029:  lea    -0x14(%ebp),%eax
0828b3fc +0x02c:  mov    %eax,(%esp)
0828b3ff +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828b404 +0x034:  movl   $0x0,0x4(%esp)
0828b40c +0x03c:  lea    -0x14(%ebp),%eax
0828b40f +0x03f:  mov    %eax,(%esp)
0828b412 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828b417 +0x047:  cmpb   $0x0,-0x1c(%ebp)
0828b41b +0x04b:  je     0828b45b <+0x8b>
0828b41d +0x04d:  movl   $0x2,0x4(%esp)
0828b425 +0x055:  lea    -0x14(%ebp),%eax
0828b428 +0x058:  mov    %eax,(%esp)
0828b42b +0x05b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828b430 +0x060:  mov    0x8(%ebp),%eax
0828b433 +0x063:  mov    %eax,(%esp)
0828b436 +0x066:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828b43b +0x06b:  lea    -0x14(%ebp),%edx
0828b43e +0x06e:  mov    %edx,0xc(%esp)
0828b442 +0x072:  mov    0xc(%ebp),%edx
0828b445 +0x075:  mov    %edx,0x8(%esp)
0828b449 +0x079:  movl   $0x1,0x4(%esp)
0828b451 +0x081:  mov    %eax,(%esp)
0828b454 +0x084:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0828b459 +0x089:  jmp    0828b46e <+0x9e>
0828b45b +0x08b:  movl   $0x1,0x4(%esp)
0828b463 +0x093:  lea    -0x14(%ebp),%eax
0828b466 +0x096:  mov    %eax,(%esp)
0828b469 +0x099:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828b46e +0x09e:  mov    0x8(%ebp),%eax
0828b471 +0x0a1:  mov    %eax,(%esp)
0828b474 +0x0a4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828b479 +0x0a9:  lea    -0x14(%ebp),%edx
0828b47c +0x0ac:  mov    %edx,0xc(%esp)
0828b480 +0x0b0:  movl   $0x0,0x8(%esp)
0828b488 +0x0b8:  movl   $0x1,0x4(%esp)
0828b490 +0x0c0:  mov    %eax,(%esp)
0828b493 +0x0c3:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0828b498 +0x0c8:  movl   $0x1,0x4(%esp)
0828b4a0 +0x0d0:  lea    -0x14(%ebp),%eax
0828b4a3 +0x0d3:  mov    %eax,(%esp)
0828b4a6 +0x0d6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828b4ab +0x0db:  lea    -0x14(%ebp),%eax
0828b4ae +0x0de:  mov    %eax,0x4(%esp)
0828b4b2 +0x0e2:  mov    0x8(%ebp),%eax
0828b4b5 +0x0e5:  mov    %eax,(%esp)
0828b4b8 +0x0e8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828b4bd +0x0ed:  jmp    0828b4da <+0x10a>
0828b4bf +0x0ef:  mov    %edx,%ebx
0828b4c1 +0x0f1:  mov    %eax,%esi
0828b4c3 +0x0f3:  lea    -0x14(%ebp),%eax
0828b4c6 +0x0f6:  mov    %eax,(%esp)
0828b4c9 +0x0f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828b4ce +0x0fe:  mov    %esi,%eax
0828b4d0 +0x100:  mov    %ebx,%edx
0828b4d2 +0x102:  mov    %eax,(%esp)
0828b4d5 +0x105:  call   08ae3750 <_Unwind_Resume>
0828b4da +0x10a:  lea    -0x14(%ebp),%eax
0828b4dd +0x10d:  mov    %eax,(%esp)
0828b4e0 +0x110:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828b4e5 +0x115:  add    $0x30,%esp
0828b4e8 +0x118:  pop    %ebx
0828b4e9 +0x119:  pop    %esi
0828b4ea +0x11a:  pop    %ebp
0828b4eb +0x11b:  ret
```

## 反编译 C

```c
// CAccountCargo::SendNotifyRecipe @ 0x828b3d0

/* CAccountCargo::SendNotifyRecipe(CUser*, int, bool) */

void CAccountCargo::SendNotifyRecipe(CUser *param_1,int param_2,bool param_3)

{
  CInventory *pCVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0828b3ff to 0828b4bc has its CatchHandler @ 0828b4bf */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  if (param_3) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,2);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar1,1,param_2,local_18);
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  }
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::MakeItemPacket(pCVar1,1,0,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
