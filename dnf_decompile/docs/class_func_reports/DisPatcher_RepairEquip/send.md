# send

`_ZN22DisPatcher_RepairEquip4sendEP5CUserR9ParamBase`

`DisPatcher_RepairEquip::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RepairEquip` | `0x081c61ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c61ea  _ZN22DisPatcher_RepairEquip4sendEP5CUserR9ParamBase
#           DisPatcher_RepairEquip::send(CUser*, ParamBase&)
# range [0x081c61ea, 0x081c6329]
081c61ea +0x000:  push   %ebp
081c61eb +0x001:  mov    %esp,%ebp
081c61ed +0x003:  push   %esi
081c61ee +0x004:  push   %ebx
081c61ef +0x005:  sub    $0x20,%esp
081c61f2 +0x008:  mov    0x10(%ebp),%eax
081c61f5 +0x00b:  mov    %eax,-0xc(%ebp)
081c61f8 +0x00e:  lea    -0x18(%ebp),%eax
081c61fb +0x011:  mov    %eax,(%esp)
081c61fe +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c6203 +0x019:  movl   $0x19,0x8(%esp)
081c620b +0x021:  movl   $0x1,0x4(%esp)
081c6213 +0x029:  lea    -0x18(%ebp),%eax
081c6216 +0x02c:  mov    %eax,(%esp)
081c6219 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c621e +0x034:  mov    -0xc(%ebp),%eax
081c6221 +0x037:  mov    0x4(%eax),%eax
081c6224 +0x03a:  test   %eax,%eax
081c6226 +0x03c:  je     081c6255 <+0x6b>
081c6228 +0x03e:  movl   $0x0,0x4(%esp)
081c6230 +0x046:  lea    -0x18(%ebp),%eax
081c6233 +0x049:  mov    %eax,(%esp)
081c6236 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c623b +0x051:  mov    -0xc(%ebp),%eax
081c623e +0x054:  mov    0x4(%eax),%eax
081c6241 +0x057:  mov    %eax,0x4(%esp)
081c6245 +0x05b:  lea    -0x18(%ebp),%eax
081c6248 +0x05e:  mov    %eax,(%esp)
081c624b +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c6250 +0x066:  jmp    081c62d5 <+0xeb>
081c6255 +0x06b:  movl   $0x1,0x4(%esp)
081c625d +0x073:  lea    -0x18(%ebp),%eax
081c6260 +0x076:  mov    %eax,(%esp)
081c6263 +0x079:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c6268 +0x07e:  mov    0xc(%ebp),%eax
081c626b +0x081:  mov    %eax,(%esp)
081c626e +0x084:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c6273 +0x089:  mov    %eax,(%esp)
081c6276 +0x08c:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081c627b +0x091:  mov    %eax,0x4(%esp)
081c627f +0x095:  lea    -0x18(%ebp),%eax
081c6282 +0x098:  mov    %eax,(%esp)
081c6285 +0x09b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c628a +0x0a0:  mov    -0xc(%ebp),%eax
081c628d +0x0a3:  movzbl 0x8(%eax),%eax
081c6291 +0x0a7:  movsbl %al,%eax
081c6294 +0x0aa:  mov    %eax,0x4(%esp)
081c6298 +0x0ae:  lea    -0x18(%ebp),%eax
081c629b +0x0b1:  mov    %eax,(%esp)
081c629e +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c62a3 +0x0b9:  mov    -0xc(%ebp),%eax
081c62a6 +0x0bc:  movzwl 0xa(%eax),%eax
081c62aa +0x0c0:  movzwl %ax,%eax
081c62ad +0x0c3:  mov    %eax,0x4(%esp)
081c62b1 +0x0c7:  lea    -0x18(%ebp),%eax
081c62b4 +0x0ca:  mov    %eax,(%esp)
081c62b7 +0x0cd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c62bc +0x0d2:  mov    -0xc(%ebp),%eax
081c62bf +0x0d5:  movzwl 0xc(%eax),%eax
081c62c3 +0x0d9:  movzwl %ax,%eax
081c62c6 +0x0dc:  mov    %eax,0x4(%esp)
081c62ca +0x0e0:  lea    -0x18(%ebp),%eax
081c62cd +0x0e3:  mov    %eax,(%esp)
081c62d0 +0x0e6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c62d5 +0x0eb:  movl   $0x1,0x4(%esp)
081c62dd +0x0f3:  lea    -0x18(%ebp),%eax
081c62e0 +0x0f6:  mov    %eax,(%esp)
081c62e3 +0x0f9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c62e8 +0x0fe:  lea    -0x18(%ebp),%eax
081c62eb +0x101:  mov    %eax,0x4(%esp)
081c62ef +0x105:  mov    0xc(%ebp),%eax
081c62f2 +0x108:  mov    %eax,(%esp)
081c62f5 +0x10b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c62fa +0x110:  jmp    081c6317 <+0x12d>
081c62fc +0x112:  mov    %edx,%ebx
081c62fe +0x114:  mov    %eax,%esi
081c6300 +0x116:  lea    -0x18(%ebp),%eax
081c6303 +0x119:  mov    %eax,(%esp)
081c6306 +0x11c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c630b +0x121:  mov    %esi,%eax
081c630d +0x123:  mov    %ebx,%edx
081c630f +0x125:  mov    %eax,(%esp)
081c6312 +0x128:  call   08ae3750 <_Unwind_Resume>
081c6317 +0x12d:  lea    -0x18(%ebp),%eax
081c631a +0x130:  mov    %eax,(%esp)
081c631d +0x133:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c6322 +0x138:  add    $0x20,%esp
081c6325 +0x13b:  pop    %ebx
081c6326 +0x13c:  pop    %esi
081c6327 +0x13d:  pop    %ebp
081c6328 +0x13e:  ret
081c6329 +0x13f:  nop
```

## 反编译 C

```c
// DisPatcher_RepairEquip::send @ 0x81c61ea

/* DisPatcher_RepairEquip::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RepairEquip::send(DisPatcher_RepairEquip *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c6219 to 081c62f9 has its CatchHandler @ 081c62fc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x19);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xc));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
