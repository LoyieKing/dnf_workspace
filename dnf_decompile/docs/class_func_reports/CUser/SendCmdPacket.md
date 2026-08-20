# SendCmdPacket

`_ZN5CUser13SendCmdPacketENS_11eSendTargetE14ENUM_CMDPACKETi`

`CUser::SendCmdPacket(CUser::eSendTarget, ENUM_CMDPACKET, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c1d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c1d4  _ZN5CUser13SendCmdPacketENS_11eSendTargetE14ENUM_CMDPACKETi
#           CUser::SendCmdPacket(CUser::eSendTarget, ENUM_CMDPACKET, int)
# range [0x0867c1d4, 0x0867c2d7]
0867c1d4 +0x000:  push   %ebp
0867c1d5 +0x001:  mov    %esp,%ebp
0867c1d7 +0x003:  push   %esi
0867c1d8 +0x004:  push   %ebx
0867c1d9 +0x005:  sub    $0x30,%esp
0867c1dc +0x008:  lea    -0x14(%ebp),%eax
0867c1df +0x00b:  mov    %eax,(%esp)
0867c1e2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c1e7 +0x013:  mov    0x10(%ebp),%eax
0867c1ea +0x016:  mov    %eax,0x8(%esp)
0867c1ee +0x01a:  movl   $0x1,0x4(%esp)
0867c1f6 +0x022:  lea    -0x14(%ebp),%eax
0867c1f9 +0x025:  mov    %eax,(%esp)
0867c1fc +0x028:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c201 +0x02d:  mov    0x10(%ebp),%eax
0867c204 +0x030:  cmp    $0x41,%eax
0867c207 +0x033:  jne    0867c230 <+0x5c>
0867c209 +0x035:  movl   $0x1,0x4(%esp)
0867c211 +0x03d:  lea    -0x14(%ebp),%eax
0867c214 +0x040:  mov    %eax,(%esp)
0867c217 +0x043:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c21c +0x048:  mov    0x14(%ebp),%eax
0867c21f +0x04b:  mov    %eax,0x4(%esp)
0867c223 +0x04f:  lea    -0x14(%ebp),%eax
0867c226 +0x052:  mov    %eax,(%esp)
0867c229 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c22e +0x05a:  jmp    0867c279 <+0xa5>
0867c230 +0x05c:  mov    0x10(%ebp),%ebx
0867c233 +0x05f:  mov    0x8(%ebp),%eax
0867c236 +0x062:  mov    %eax,(%esp)
0867c239 +0x065:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867c23e +0x06a:  mov    %ebx,0x18(%esp)
0867c242 +0x06e:  mov    %eax,0x14(%esp)
0867c246 +0x072:  movl   $"User %s - CmdID %d invalid",0x10(%esp)
0867c24e +0x07a:  movl   $0x7741,0xc(%esp)
0867c256 +0x082:  movl   $&_ZZN5CUser13SendCmdPacketENS_11eSendTargetE14ENUM_CMDPACKETiE19__PRETTY_FUNCTION__,0x8(%esp)
0867c25e +0x08a:  movl   $"user.cpp",0x4(%esp)
0867c266 +0x092:  movl   $0x1,(%esp)
0867c26d +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867c272 +0x09e:  mov    $0x0,%ebx
0867c277 +0x0a3:  jmp    0867c2c4 <+0xf0>
0867c279 +0x0a5:  movl   $0x1,0x4(%esp)
0867c281 +0x0ad:  lea    -0x14(%ebp),%eax
0867c284 +0x0b0:  mov    %eax,(%esp)
0867c287 +0x0b3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c28c +0x0b8:  lea    -0x14(%ebp),%eax
0867c28f +0x0bb:  mov    %eax,0x8(%esp)
0867c293 +0x0bf:  mov    0xc(%ebp),%eax
0867c296 +0x0c2:  mov    %eax,0x4(%esp)
0867c29a +0x0c6:  mov    0x8(%ebp),%eax
0867c29d +0x0c9:  mov    %eax,(%esp)
0867c2a0 +0x0cc:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
0867c2a5 +0x0d1:  mov    %eax,%ebx
0867c2a7 +0x0d3:  jmp    0867c2c4 <+0xf0>
0867c2a9 +0x0d5:  mov    %edx,%ebx
0867c2ab +0x0d7:  mov    %eax,%esi
0867c2ad +0x0d9:  lea    -0x14(%ebp),%eax
0867c2b0 +0x0dc:  mov    %eax,(%esp)
0867c2b3 +0x0df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c2b8 +0x0e4:  mov    %esi,%eax
0867c2ba +0x0e6:  mov    %ebx,%edx
0867c2bc +0x0e8:  mov    %eax,(%esp)
0867c2bf +0x0eb:  call   08ae3750 <_Unwind_Resume>
0867c2c4 +0x0f0:  lea    -0x14(%ebp),%eax
0867c2c7 +0x0f3:  mov    %eax,(%esp)
0867c2ca +0x0f6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c2cf +0x0fb:  mov    %ebx,%eax
0867c2d1 +0x0fd:  add    $0x30,%esp
0867c2d4 +0x100:  pop    %ebx
0867c2d5 +0x101:  pop    %esi
0867c2d6 +0x102:  pop    %ebp
0867c2d7 +0x103:  ret
```

## 反编译 C

```c
// CUser::SendCmdPacket @ 0x867c1d4

/* CUser::SendCmdPacket(CUser::eSendTarget, ENUM_CMDPACKET, int) */

undefined4 __thiscall CUser::SendCmdPacket(CUser *this,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867c1fc to 0867c2a4 has its CatchHandler @ 0867c2a9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_3);
  if (param_3 == 0x41) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    uVar1 = SendPacket(this,param_2,local_18);
  }
  else {
    uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    LogManager::logFormat
              (1,"user.cpp","bool CUser::SendCmdPacket(CUser::eSendTarget, ENUM_CMDPACKET, int)",
               0x7741,"User %s - CmdID %d invalid",uVar1,param_3);
    uVar1 = 0;
  }
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
