# notifyUpdatedInventoryItemInfo

`_ZNK17Dispatcher_UseDye30notifyUpdatedInventoryItemInfoER5CUsers`

`Dispatcher_UseDye::notifyUpdatedInventoryItemInfo(CUser&, short) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseDye` | `0x081e70e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e70e6  _ZNK17Dispatcher_UseDye30notifyUpdatedInventoryItemInfoER5CUsers
#           Dispatcher_UseDye::notifyUpdatedInventoryItemInfo(CUser&, short) const
# range [0x081e70e6, 0x081e71bf]
081e70e6 +0x00:  push   %ebp
081e70e7 +0x01:  mov    %esp,%ebp
081e70e9 +0x03:  push   %esi
081e70ea +0x04:  push   %ebx
081e70eb +0x05:  sub    $0x30,%esp
081e70ee +0x08:  mov    0x10(%ebp),%eax
081e70f1 +0x0b:  mov    %ax,-0x1c(%ebp)
081e70f5 +0x0f:  lea    -0x14(%ebp),%eax
081e70f8 +0x12:  mov    %eax,(%esp)
081e70fb +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e7100 +0x1a:  movl   $0xe,0x8(%esp)
081e7108 +0x22:  movl   $0x0,0x4(%esp)
081e7110 +0x2a:  lea    -0x14(%ebp),%eax
081e7113 +0x2d:  mov    %eax,(%esp)
081e7116 +0x30:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e711b +0x35:  movl   $0x0,0x4(%esp)
081e7123 +0x3d:  lea    -0x14(%ebp),%eax
081e7126 +0x40:  mov    %eax,(%esp)
081e7129 +0x43:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e712e +0x48:  movl   $0x1,0x4(%esp)
081e7136 +0x50:  lea    -0x14(%ebp),%eax
081e7139 +0x53:  mov    %eax,(%esp)
081e713c +0x56:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e7141 +0x5b:  movswl -0x1c(%ebp),%ebx
081e7145 +0x5f:  mov    0xc(%ebp),%eax
081e7148 +0x62:  mov    %eax,(%esp)
081e714b +0x65:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e7150 +0x6a:  lea    -0x14(%ebp),%edx
081e7153 +0x6d:  mov    %edx,0xc(%esp)
081e7157 +0x71:  mov    %ebx,0x8(%esp)
081e715b +0x75:  movl   $0x1,0x4(%esp)
081e7163 +0x7d:  mov    %eax,(%esp)
081e7166 +0x80:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
081e716b +0x85:  movl   $0x1,0x4(%esp)
081e7173 +0x8d:  lea    -0x14(%ebp),%eax
081e7176 +0x90:  mov    %eax,(%esp)
081e7179 +0x93:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e717e +0x98:  lea    -0x14(%ebp),%eax
081e7181 +0x9b:  mov    %eax,0x4(%esp)
081e7185 +0x9f:  mov    0xc(%ebp),%eax
081e7188 +0xa2:  mov    %eax,(%esp)
081e718b +0xa5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e7190 +0xaa:  jmp    081e71ad <+0xc7>
081e7192 +0xac:  mov    %edx,%ebx
081e7194 +0xae:  mov    %eax,%esi
081e7196 +0xb0:  lea    -0x14(%ebp),%eax
081e7199 +0xb3:  mov    %eax,(%esp)
081e719c +0xb6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e71a1 +0xbb:  mov    %esi,%eax
081e71a3 +0xbd:  mov    %ebx,%edx
081e71a5 +0xbf:  mov    %eax,(%esp)
081e71a8 +0xc2:  call   08ae3750 <_Unwind_Resume>
081e71ad +0xc7:  lea    -0x14(%ebp),%eax
081e71b0 +0xca:  mov    %eax,(%esp)
081e71b3 +0xcd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e71b8 +0xd2:  add    $0x30,%esp
081e71bb +0xd5:  pop    %ebx
081e71bc +0xd6:  pop    %esi
081e71bd +0xd7:  pop    %ebp
081e71be +0xd8:  ret
081e71bf +0xd9:  nop
```

## 反编译 C

```c
// Dispatcher_UseDye::notifyUpdatedInventoryItemInfo @ 0x81e70e6

/* Dispatcher_UseDye::notifyUpdatedInventoryItemInfo(CUser&, short) const */

void __thiscall
Dispatcher_UseDye::notifyUpdatedInventoryItemInfo
          (Dispatcher_UseDye *this,CUser *param_1,short param_2)

{
  CInventory *pCVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081e7116 to 081e718f has its CatchHandler @ 081e7192 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::MakeItemPacket(pCVar1,1,(int)param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
