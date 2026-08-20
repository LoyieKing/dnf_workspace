# send

`_ZN24Dispatcher_ChangeEmotion4sendEP5CUserR9ParamBase`

`Dispatcher_ChangeEmotion::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeEmotion` | `0x081d1d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1d60  _ZN24Dispatcher_ChangeEmotion4sendEP5CUserR9ParamBase
#           Dispatcher_ChangeEmotion::send(CUser*, ParamBase&)
# range [0x081d1d60, 0x081d1ebd]
081d1d60 +0x000:  push   %ebp
081d1d61 +0x001:  mov    %esp,%ebp
081d1d63 +0x003:  push   %esi
081d1d64 +0x004:  push   %ebx
081d1d65 +0x005:  sub    $0x20,%esp
081d1d68 +0x008:  cmpl   $0x0,0xc(%ebp)
081d1d6c +0x00c:  je     081d1eb6 <+0x156>
081d1d72 +0x012:  mov    0x10(%ebp),%eax
081d1d75 +0x015:  mov    %eax,-0xc(%ebp)
081d1d78 +0x018:  lea    -0x18(%ebp),%eax
081d1d7b +0x01b:  mov    %eax,(%esp)
081d1d7e +0x01e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d1d83 +0x023:  lea    -0x18(%ebp),%eax
081d1d86 +0x026:  mov    %eax,(%esp)
081d1d89 +0x029:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d1d8e +0x02e:  movl   $0x102,0x8(%esp)
081d1d96 +0x036:  movl   $0x1,0x4(%esp)
081d1d9e +0x03e:  lea    -0x18(%ebp),%eax
081d1da1 +0x041:  mov    %eax,(%esp)
081d1da4 +0x044:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d1da9 +0x049:  movl   $0x1,0x4(%esp)
081d1db1 +0x051:  lea    -0x18(%ebp),%eax
081d1db4 +0x054:  mov    %eax,(%esp)
081d1db7 +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d1dbc +0x05c:  mov    -0xc(%ebp),%eax
081d1dbf +0x05f:  movzwl 0x4(%eax),%eax
081d1dc3 +0x063:  cwtl
081d1dc4 +0x064:  mov    %eax,0x4(%esp)
081d1dc8 +0x068:  lea    -0x18(%ebp),%eax
081d1dcb +0x06b:  mov    %eax,(%esp)
081d1dce +0x06e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d1dd3 +0x073:  movl   $0x1,0x4(%esp)
081d1ddb +0x07b:  lea    -0x18(%ebp),%eax
081d1dde +0x07e:  mov    %eax,(%esp)
081d1de1 +0x081:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d1de6 +0x086:  lea    -0x18(%ebp),%eax
081d1de9 +0x089:  mov    %eax,0x4(%esp)
081d1ded +0x08d:  mov    0xc(%ebp),%eax
081d1df0 +0x090:  mov    %eax,(%esp)
081d1df3 +0x093:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d1df8 +0x098:  lea    -0x18(%ebp),%eax
081d1dfb +0x09b:  mov    %eax,(%esp)
081d1dfe +0x09e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d1e03 +0x0a3:  movl   $0x2,0x8(%esp)
081d1e0b +0x0ab:  movl   $0x0,0x4(%esp)
081d1e13 +0x0b3:  lea    -0x18(%ebp),%eax
081d1e16 +0x0b6:  mov    %eax,(%esp)
081d1e19 +0x0b9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d1e1e +0x0be:  movl   $0x0,0x4(%esp)
081d1e26 +0x0c6:  lea    -0x18(%ebp),%eax
081d1e29 +0x0c9:  mov    %eax,(%esp)
081d1e2c +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d1e31 +0x0d1:  movl   $0x1,0x4(%esp)
081d1e39 +0x0d9:  lea    -0x18(%ebp),%eax
081d1e3c +0x0dc:  mov    %eax,(%esp)
081d1e3f +0x0df:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d1e44 +0x0e4:  lea    -0x18(%ebp),%eax
081d1e47 +0x0e7:  movl   $0x0,0x8(%esp)
081d1e4f +0x0ef:  mov    %eax,0x4(%esp)
081d1e53 +0x0f3:  mov    0xc(%ebp),%eax
081d1e56 +0x0f6:  mov    %eax,(%esp)
081d1e59 +0x0f9:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
081d1e5e +0x0fe:  movl   $0x1,0x4(%esp)
081d1e66 +0x106:  lea    -0x18(%ebp),%eax
081d1e69 +0x109:  mov    %eax,(%esp)
081d1e6c +0x10c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d1e71 +0x111:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d1e76 +0x116:  mov    0xc(%ebp),%edx
081d1e79 +0x119:  mov    %edx,0x8(%esp)
081d1e7d +0x11d:  lea    -0x18(%ebp),%edx
081d1e80 +0x120:  mov    %edx,0x4(%esp)
081d1e84 +0x124:  mov    %eax,(%esp)
081d1e87 +0x127:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
081d1e8c +0x12c:  jmp    081d1ea9 <+0x149>
081d1e8e +0x12e:  mov    %edx,%ebx
081d1e90 +0x130:  mov    %eax,%esi
081d1e92 +0x132:  lea    -0x18(%ebp),%eax
081d1e95 +0x135:  mov    %eax,(%esp)
081d1e98 +0x138:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d1e9d +0x13d:  mov    %esi,%eax
081d1e9f +0x13f:  mov    %ebx,%edx
081d1ea1 +0x141:  mov    %eax,(%esp)
081d1ea4 +0x144:  call   08ae3750 <_Unwind_Resume>
081d1ea9 +0x149:  lea    -0x18(%ebp),%eax
081d1eac +0x14c:  mov    %eax,(%esp)
081d1eaf +0x14f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d1eb4 +0x154:  jmp    081d1eb7 <+0x157>
081d1eb6 +0x156:  nop
081d1eb7 +0x157:  add    $0x20,%esp
081d1eba +0x15a:  pop    %ebx
081d1ebb +0x15b:  pop    %esi
081d1ebc +0x15c:  pop    %ebp
081d1ebd +0x15d:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeEmotion::send @ 0x81d1d60

/* Dispatcher_ChangeEmotion::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeEmotion::send(Dispatcher_ChangeEmotion *this,CUser *param_1,ParamBase *param_2)

{
  GameWorld *this_00;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = param_2;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d1d89 to 081d1e8b has its CatchHandler @ 081d1e8e */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x102);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    CUser::make_basic_info(param_1,(char *)local_1c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_1c,param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
