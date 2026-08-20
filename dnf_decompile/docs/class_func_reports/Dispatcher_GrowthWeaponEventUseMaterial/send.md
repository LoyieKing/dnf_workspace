# send

`_ZN39Dispatcher_GrowthWeaponEventUseMaterial4sendEP5CUserR9ParamBase`

`Dispatcher_GrowthWeaponEventUseMaterial::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventUseMaterial` | `0x081e8496` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8496  _ZN39Dispatcher_GrowthWeaponEventUseMaterial4sendEP5CUserR9ParamBase
#           Dispatcher_GrowthWeaponEventUseMaterial::send(CUser*, ParamBase&)
# range [0x081e8496, 0x081e85a1]
081e8496 +0x000:  push   %ebp
081e8497 +0x001:  mov    %esp,%ebp
081e8499 +0x003:  push   %esi
081e849a +0x004:  push   %ebx
081e849b +0x005:  sub    $0x20,%esp
081e849e +0x008:  mov    0x10(%ebp),%eax
081e84a1 +0x00b:  mov    %eax,-0xc(%ebp)
081e84a4 +0x00e:  mov    -0xc(%ebp),%eax
081e84a7 +0x011:  mov    0x4(%eax),%eax
081e84aa +0x014:  test   %eax,%eax
081e84ac +0x016:  jne    081e857b <+0xe5>
081e84b2 +0x01c:  lea    -0x18(%ebp),%eax
081e84b5 +0x01f:  mov    %eax,(%esp)
081e84b8 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e84bd +0x027:  movl   $0x1fa,0x8(%esp)
081e84c5 +0x02f:  movl   $0x1,0x4(%esp)
081e84cd +0x037:  lea    -0x18(%ebp),%eax
081e84d0 +0x03a:  mov    %eax,(%esp)
081e84d3 +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e84d8 +0x042:  movl   $0x1,0x4(%esp)
081e84e0 +0x04a:  lea    -0x18(%ebp),%eax
081e84e3 +0x04d:  mov    %eax,(%esp)
081e84e6 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e84eb +0x055:  mov    -0xc(%ebp),%eax
081e84ee +0x058:  mov    0x8(%eax),%eax
081e84f1 +0x05b:  mov    %eax,0x4(%esp)
081e84f5 +0x05f:  lea    -0x18(%ebp),%eax
081e84f8 +0x062:  mov    %eax,(%esp)
081e84fb +0x065:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e8500 +0x06a:  mov    -0xc(%ebp),%eax
081e8503 +0x06d:  mov    0xc(%eax),%eax
081e8506 +0x070:  mov    %eax,0x4(%esp)
081e850a +0x074:  lea    -0x18(%ebp),%eax
081e850d +0x077:  mov    %eax,(%esp)
081e8510 +0x07a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e8515 +0x07f:  mov    -0xc(%ebp),%eax
081e8518 +0x082:  movzwl 0x10(%eax),%eax
081e851c +0x086:  cwtl
081e851d +0x087:  mov    %eax,0x4(%esp)
081e8521 +0x08b:  lea    -0x18(%ebp),%eax
081e8524 +0x08e:  mov    %eax,(%esp)
081e8527 +0x091:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e852c +0x096:  movl   $0x1,0x4(%esp)
081e8534 +0x09e:  lea    -0x18(%ebp),%eax
081e8537 +0x0a1:  mov    %eax,(%esp)
081e853a +0x0a4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e853f +0x0a9:  lea    -0x18(%ebp),%eax
081e8542 +0x0ac:  mov    %eax,0x4(%esp)
081e8546 +0x0b0:  mov    0xc(%ebp),%eax
081e8549 +0x0b3:  mov    %eax,(%esp)
081e854c +0x0b6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e8551 +0x0bb:  jmp    081e856e <+0xd8>
081e8553 +0x0bd:  mov    %edx,%ebx
081e8555 +0x0bf:  mov    %eax,%esi
081e8557 +0x0c1:  lea    -0x18(%ebp),%eax
081e855a +0x0c4:  mov    %eax,(%esp)
081e855d +0x0c7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8562 +0x0cc:  mov    %esi,%eax
081e8564 +0x0ce:  mov    %ebx,%edx
081e8566 +0x0d0:  mov    %eax,(%esp)
081e8569 +0x0d3:  call   08ae3750 <_Unwind_Resume>
081e856e +0x0d8:  lea    -0x18(%ebp),%eax
081e8571 +0x0db:  mov    %eax,(%esp)
081e8574 +0x0de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8579 +0x0e3:  jmp    081e859b <+0x105>
081e857b +0x0e5:  mov    -0xc(%ebp),%eax
081e857e +0x0e8:  mov    0x4(%eax),%eax
081e8581 +0x0eb:  movzbl %al,%eax
081e8584 +0x0ee:  mov    %eax,0x8(%esp)
081e8588 +0x0f2:  movl   $0x1fa,0x4(%esp)
081e8590 +0x0fa:  mov    0xc(%ebp),%eax
081e8593 +0x0fd:  mov    %eax,(%esp)
081e8596 +0x100:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e859b +0x105:  add    $0x20,%esp
081e859e +0x108:  pop    %ebx
081e859f +0x109:  pop    %esi
081e85a0 +0x10a:  pop    %ebp
081e85a1 +0x10b:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventUseMaterial::send @ 0x81e8496

/* Dispatcher_GrowthWeaponEventUseMaterial::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::send
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e84d3 to 081e8550 has its CatchHandler @ 081e8553 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1fa);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fa,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
