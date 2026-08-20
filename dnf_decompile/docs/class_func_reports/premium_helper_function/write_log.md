# write_log

`_ZN23premium_helper_function9write_logEP5CUseri`

`premium_helper_function::write_log(CUser*, int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827d2df` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d2df  _ZN23premium_helper_function9write_logEP5CUseri
#           premium_helper_function::write_log(CUser*, int)
# range [0x0827d2df, 0x0827d3db]
0827d2df +0x00:  push   %ebp
0827d2e0 +0x01:  mov    %esp,%ebp
0827d2e2 +0x03:  push   %esi
0827d2e3 +0x04:  push   %ebx
0827d2e4 +0x05:  sub    $0x20,%esp
0827d2e7 +0x08:  mov    0xc(%ebp),%eax
0827d2ea +0x0b:  cmp    $0x53,%eax
0827d2ed +0x0e:  je     0827d2fe <+0x1f>
0827d2ef +0x10:  cmp    $0x57,%eax
0827d2f2 +0x13:  je     0827d2fe <+0x1f>
0827d2f4 +0x15:  cmp    $0x8,%eax
0827d2f7 +0x18:  je     0827d319 <+0x3a>
0827d2f9 +0x1a:  jmp    0827d3d5 <+0xf6>
0827d2fe +0x1f:  mov    0x8(%ebp),%eax
0827d301 +0x22:  mov    %eax,(%esp)
0827d304 +0x25:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
0827d309 +0x2a:  mov    0x8(%ebp),%eax
0827d30c +0x2d:  mov    %eax,(%esp)
0827d30f +0x30:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
0827d314 +0x35:  jmp    0827d3d5 <+0xf6>
0827d319 +0x3a:  lea    -0x14(%ebp),%eax
0827d31c +0x3d:  mov    %eax,(%esp)
0827d31f +0x40:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0827d324 +0x45:  movl   $0x2,0x8(%esp)
0827d32c +0x4d:  movl   $0x0,0x4(%esp)
0827d334 +0x55:  lea    -0x14(%ebp),%eax
0827d337 +0x58:  mov    %eax,(%esp)
0827d33a +0x5b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0827d33f +0x60:  movl   $0x0,0x4(%esp)
0827d347 +0x68:  lea    -0x14(%ebp),%eax
0827d34a +0x6b:  mov    %eax,(%esp)
0827d34d +0x6e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0827d352 +0x73:  movl   $0x1,0x4(%esp)
0827d35a +0x7b:  lea    -0x14(%ebp),%eax
0827d35d +0x7e:  mov    %eax,(%esp)
0827d360 +0x81:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0827d365 +0x86:  lea    -0x14(%ebp),%eax
0827d368 +0x89:  movl   $0x0,0x8(%esp)
0827d370 +0x91:  mov    %eax,0x4(%esp)
0827d374 +0x95:  mov    0x8(%ebp),%eax
0827d377 +0x98:  mov    %eax,(%esp)
0827d37a +0x9b:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0827d37f +0xa0:  movl   $0x1,0x4(%esp)
0827d387 +0xa8:  lea    -0x14(%ebp),%eax
0827d38a +0xab:  mov    %eax,(%esp)
0827d38d +0xae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0827d392 +0xb3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827d397 +0xb8:  mov    0x8(%ebp),%edx
0827d39a +0xbb:  mov    %edx,0x8(%esp)
0827d39e +0xbf:  lea    -0x14(%ebp),%edx
0827d3a1 +0xc2:  mov    %edx,0x4(%esp)
0827d3a5 +0xc6:  mov    %eax,(%esp)
0827d3a8 +0xc9:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0827d3ad +0xce:  jmp    0827d3ca <+0xeb>
0827d3af +0xd0:  mov    %edx,%ebx
0827d3b1 +0xd2:  mov    %eax,%esi
0827d3b3 +0xd4:  lea    -0x14(%ebp),%eax
0827d3b6 +0xd7:  mov    %eax,(%esp)
0827d3b9 +0xda:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827d3be +0xdf:  mov    %esi,%eax
0827d3c0 +0xe1:  mov    %ebx,%edx
0827d3c2 +0xe3:  mov    %eax,(%esp)
0827d3c5 +0xe6:  call   08ae3750 <_Unwind_Resume>
0827d3ca +0xeb:  lea    -0x14(%ebp),%eax
0827d3cd +0xee:  mov    %eax,(%esp)
0827d3d0 +0xf1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827d3d5 +0xf6:  add    $0x20,%esp
0827d3d8 +0xf9:  pop    %ebx
0827d3d9 +0xfa:  pop    %esi
0827d3da +0xfb:  pop    %ebp
0827d3db +0xfc:  ret
```

## 反编译 C

```c
// premium_helper_function::write_log @ 0x827d2df

/* premium_helper_function::write_log(CUser*, int) */

void premium_helper_function::write_log(CUser *param_1,int param_2)

{
  GameWorld *this;
  PacketGuard local_18 [12];
  
  if ((param_2 == 0x53) || (param_2 == 0x57)) {
    CUser::ReCalcChattingEmoticon(param_1);
    CUser::SendChattingEmoticon(param_1);
  }
  else if (param_2 == 8) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0827d33a to 0827d3ac has its CatchHandler @ 0827d3af */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
