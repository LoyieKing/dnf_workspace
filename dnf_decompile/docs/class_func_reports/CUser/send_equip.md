# send_equip

`_ZN5CUser10send_equipEi`

`CUser::send_equip(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865dd14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865dd14  _ZN5CUser10send_equipEi
#           CUser::send_equip(int)
# range [0x0865dd14, 0x0865defb]
0865dd14 +0x000:  push   %ebp
0865dd15 +0x001:  mov    %esp,%ebp
0865dd17 +0x003:  push   %esi
0865dd18 +0x004:  push   %ebx
0865dd19 +0x005:  sub    $0x30,%esp
0865dd1c +0x008:  cmpl   $0xb,0xc(%ebp)
0865dd20 +0x00c:  jle    0865dd2c <+0x18>
0865dd22 +0x00e:  cmpl   $0x16,0xc(%ebp)
0865dd26 +0x012:  jne    0865def4 <+0x1e0>
0865dd2c +0x018:  mov    0x8(%ebp),%eax
0865dd2f +0x01b:  mov    0x8cfc4(%eax),%eax
0865dd35 +0x021:  cmp    $0xc,%eax
0865dd38 +0x024:  je     0865de35 <+0x121>
0865dd3e +0x02a:  mov    0x8(%ebp),%eax
0865dd41 +0x02d:  mov    0x8cfc4(%eax),%eax
0865dd47 +0x033:  cmp    $0x5,%eax
0865dd4a +0x036:  je     0865de35 <+0x121>
0865dd50 +0x03c:  mov    0x8(%ebp),%eax
0865dd53 +0x03f:  mov    0x8cfc4(%eax),%eax
0865dd59 +0x045:  cmp    $0x8,%eax
0865dd5c +0x048:  je     0865de35 <+0x121>
0865dd62 +0x04e:  mov    0x8(%ebp),%eax
0865dd65 +0x051:  mov    0x8cfc4(%eax),%eax
0865dd6b +0x057:  cmp    $0xa,%eax
0865dd6e +0x05a:  je     0865de35 <+0x121>
0865dd74 +0x060:  lea    -0x14(%ebp),%eax
0865dd77 +0x063:  mov    %eax,(%esp)
0865dd7a +0x066:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865dd7f +0x06b:  movl   $0x2,0x8(%esp)
0865dd87 +0x073:  movl   $0x0,0x4(%esp)
0865dd8f +0x07b:  lea    -0x14(%ebp),%eax
0865dd92 +0x07e:  mov    %eax,(%esp)
0865dd95 +0x081:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865dd9a +0x086:  movl   $0x0,0x4(%esp)
0865dda2 +0x08e:  lea    -0x14(%ebp),%eax
0865dda5 +0x091:  mov    %eax,(%esp)
0865dda8 +0x094:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ddad +0x099:  movl   $0x1,0x4(%esp)
0865ddb5 +0x0a1:  lea    -0x14(%ebp),%eax
0865ddb8 +0x0a4:  mov    %eax,(%esp)
0865ddbb +0x0a7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865ddc0 +0x0ac:  lea    -0x14(%ebp),%eax
0865ddc3 +0x0af:  movl   $0x0,0x8(%esp)
0865ddcb +0x0b7:  mov    %eax,0x4(%esp)
0865ddcf +0x0bb:  mov    0x8(%ebp),%eax
0865ddd2 +0x0be:  mov    %eax,(%esp)
0865ddd5 +0x0c1:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0865ddda +0x0c6:  movl   $0x1,0x4(%esp)
0865dde2 +0x0ce:  lea    -0x14(%ebp),%eax
0865dde5 +0x0d1:  mov    %eax,(%esp)
0865dde8 +0x0d4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865dded +0x0d9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865ddf2 +0x0de:  mov    0x8(%ebp),%edx
0865ddf5 +0x0e1:  mov    %edx,0x8(%esp)
0865ddf9 +0x0e5:  lea    -0x14(%ebp),%edx
0865ddfc +0x0e8:  mov    %edx,0x4(%esp)
0865de00 +0x0ec:  mov    %eax,(%esp)
0865de03 +0x0ef:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0865de08 +0x0f4:  jmp    0865de25 <+0x111>
0865de0a +0x0f6:  mov    %edx,%ebx
0865de0c +0x0f8:  mov    %eax,%esi
0865de0e +0x0fa:  lea    -0x14(%ebp),%eax
0865de11 +0x0fd:  mov    %eax,(%esp)
0865de14 +0x100:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865de19 +0x105:  mov    %esi,%eax
0865de1b +0x107:  mov    %ebx,%edx
0865de1d +0x109:  mov    %eax,(%esp)
0865de20 +0x10c:  call   08ae3750 <_Unwind_Resume>
0865de25 +0x111:  lea    -0x14(%ebp),%eax
0865de28 +0x114:  mov    %eax,(%esp)
0865de2b +0x117:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865de30 +0x11c:  jmp    0865def5 <+0x1e1>
0865de35 +0x121:  cmpl   $0x16,0xc(%ebp)
0865de39 +0x125:  jne    0865def5 <+0x1e1>
0865de3f +0x12b:  lea    -0x20(%ebp),%eax
0865de42 +0x12e:  mov    %eax,(%esp)
0865de45 +0x131:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865de4a +0x136:  movl   $0x2,0x8(%esp)
0865de52 +0x13e:  movl   $0x0,0x4(%esp)
0865de5a +0x146:  lea    -0x20(%ebp),%eax
0865de5d +0x149:  mov    %eax,(%esp)
0865de60 +0x14c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865de65 +0x151:  movl   $0x0,0x4(%esp)
0865de6d +0x159:  lea    -0x20(%ebp),%eax
0865de70 +0x15c:  mov    %eax,(%esp)
0865de73 +0x15f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865de78 +0x164:  movl   $0x1,0x4(%esp)
0865de80 +0x16c:  lea    -0x20(%ebp),%eax
0865de83 +0x16f:  mov    %eax,(%esp)
0865de86 +0x172:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865de8b +0x177:  lea    -0x20(%ebp),%eax
0865de8e +0x17a:  movl   $0x0,0x8(%esp)
0865de96 +0x182:  mov    %eax,0x4(%esp)
0865de9a +0x186:  mov    0x8(%ebp),%eax
0865de9d +0x189:  mov    %eax,(%esp)
0865dea0 +0x18c:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0865dea5 +0x191:  movl   $0x1,0x4(%esp)
0865dead +0x199:  lea    -0x20(%ebp),%eax
0865deb0 +0x19c:  mov    %eax,(%esp)
0865deb3 +0x19f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865deb8 +0x1a4:  lea    -0x20(%ebp),%eax
0865debb +0x1a7:  mov    %eax,0x4(%esp)
0865debf +0x1ab:  mov    0x8(%ebp),%eax
0865dec2 +0x1ae:  mov    %eax,(%esp)
0865dec5 +0x1b1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865deca +0x1b6:  jmp    0865dee7 <+0x1d3>
0865decc +0x1b8:  mov    %edx,%ebx
0865dece +0x1ba:  mov    %eax,%esi
0865ded0 +0x1bc:  lea    -0x20(%ebp),%eax
0865ded3 +0x1bf:  mov    %eax,(%esp)
0865ded6 +0x1c2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865dedb +0x1c7:  mov    %esi,%eax
0865dedd +0x1c9:  mov    %ebx,%edx
0865dedf +0x1cb:  mov    %eax,(%esp)
0865dee2 +0x1ce:  call   08ae3750 <_Unwind_Resume>
0865dee7 +0x1d3:  lea    -0x20(%ebp),%eax
0865deea +0x1d6:  mov    %eax,(%esp)
0865deed +0x1d9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865def2 +0x1de:  jmp    0865def5 <+0x1e1>
0865def4 +0x1e0:  nop
0865def5 +0x1e1:  add    $0x30,%esp
0865def8 +0x1e4:  pop    %ebx
0865def9 +0x1e5:  pop    %esi
0865defa +0x1e6:  pop    %ebp
0865defb +0x1e7:  ret
```

## 反编译 C

```c
// CUser::send_equip @ 0x865dd14

/* CUser::send_equip(int) */

void __thiscall CUser::send_equip(CUser *this,int param_1)

{
  GameWorld *this_00;
  PacketGuard local_24 [12];
  PacketGuard local_18 [12];
  
  if ((param_1 < 0xc) || (param_1 == 0x16)) {
    if ((*(int *)(this + 0x8cfc4) == 0xc) ||
       (((*(int *)(this + 0x8cfc4) == 5 || (*(int *)(this + 0x8cfc4) == 8)) ||
        (*(int *)(this + 0x8cfc4) == 10)))) {
      if (param_1 == 0x16) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0865de60 to 0865dec9 has its CatchHandler @ 0865decc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
        make_basic_info(this,(char *)local_24,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        Send(this,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
    }
    else {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0865dd95 to 0865de07 has its CatchHandler @ 0865de0a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
      make_basic_info(this,(char *)local_18,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_18,this);
      PacketGuard::~PacketGuard(local_18);
    }
  }
  return;
}
```
