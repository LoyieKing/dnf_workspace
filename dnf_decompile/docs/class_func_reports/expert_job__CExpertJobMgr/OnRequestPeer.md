# OnRequestPeer

`_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard`

`expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e256` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e256  _ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard
#           expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
# range [0x0849e256, 0x0849e361]
0849e256 +0x000:  push   %ebp
0849e257 +0x001:  mov    %esp,%ebp
0849e259 +0x003:  sub    $0x38,%esp
0849e25c +0x006:  movl   $0x0,-0xc(%ebp)
0849e263 +0x00d:  mov    0x18(%ebp),%eax
0849e266 +0x010:  mov    %eax,0x10(%esp)
0849e26a +0x014:  mov    0x14(%ebp),%eax
0849e26d +0x017:  mov    %eax,0xc(%esp)
0849e271 +0x01b:  mov    0x10(%ebp),%eax
0849e274 +0x01e:  mov    %eax,0x8(%esp)
0849e278 +0x022:  mov    0xc(%ebp),%eax
0849e27b +0x025:  mov    %eax,0x4(%esp)
0849e27f +0x029:  mov    0x8(%ebp),%eax
0849e282 +0x02c:  mov    %eax,(%esp)
0849e285 +0x02f:  call   0849e55e <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
0849e28a +0x034:  mov    %eax,-0xc(%ebp)
0849e28d +0x037:  cmpl   $0x0,-0xc(%ebp)
0849e291 +0x03b:  setne  %al
0849e294 +0x03e:  test   %al,%al
0849e296 +0x040:  je     0849e2c8 <+0x72>
0849e298 +0x042:  mov    -0xc(%ebp),%eax
0849e29b +0x045:  movzbl %al,%eax
0849e29e +0x048:  mov    0x18(%ebp),%edx
0849e2a1 +0x04b:  mov    %edx,0x10(%esp)
0849e2a5 +0x04f:  mov    %eax,0xc(%esp)
0849e2a9 +0x053:  mov    0x14(%ebp),%eax
0849e2ac +0x056:  mov    %eax,0x8(%esp)
0849e2b0 +0x05a:  movl   $0xa,0x4(%esp)
0849e2b8 +0x062:  mov    0xc(%ebp),%eax
0849e2bb +0x065:  mov    %eax,(%esp)
0849e2be +0x068:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
0849e2c3 +0x06d:  jmp    0849e35f <+0x109>
0849e2c8 +0x072:  mov    0x18(%ebp),%eax
0849e2cb +0x075:  mov    %eax,(%esp)
0849e2ce +0x078:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849e2d3 +0x07d:  mov    0x18(%ebp),%eax
0849e2d6 +0x080:  movl   $0x7,0x8(%esp)
0849e2de +0x088:  movl   $0x0,0x4(%esp)
0849e2e6 +0x090:  mov    %eax,(%esp)
0849e2e9 +0x093:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849e2ee +0x098:  mov    0xc(%ebp),%eax
0849e2f1 +0x09b:  mov    %eax,(%esp)
0849e2f4 +0x09e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849e2f9 +0x0a3:  movzwl %ax,%edx
0849e2fc +0x0a6:  mov    0x18(%ebp),%eax
0849e2ff +0x0a9:  mov    %edx,0x4(%esp)
0849e303 +0x0ad:  mov    %eax,(%esp)
0849e306 +0x0b0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849e30b +0x0b5:  mov    0x14(%ebp),%edx
0849e30e +0x0b8:  mov    0x18(%ebp),%eax
0849e311 +0x0bb:  mov    %edx,0x4(%esp)
0849e315 +0x0bf:  mov    %eax,(%esp)
0849e318 +0x0c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849e31d +0x0c7:  mov    0x10(%ebp),%eax
0849e320 +0x0ca:  mov    %eax,(%esp)
0849e323 +0x0cd:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849e328 +0x0d2:  movzwl %ax,%edx
0849e32b +0x0d5:  mov    0x18(%ebp),%eax
0849e32e +0x0d8:  mov    %edx,0x4(%esp)
0849e332 +0x0dc:  mov    %eax,(%esp)
0849e335 +0x0df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849e33a +0x0e4:  mov    0x18(%ebp),%eax
0849e33d +0x0e7:  movl   $0x1,0x4(%esp)
0849e345 +0x0ef:  mov    %eax,(%esp)
0849e348 +0x0f2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849e34d +0x0f7:  mov    0x18(%ebp),%eax
0849e350 +0x0fa:  mov    %eax,0x4(%esp)
0849e354 +0x0fe:  mov    0x10(%ebp),%eax
0849e357 +0x101:  mov    %eax,(%esp)
0849e35a +0x104:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849e35f +0x109:  leave
0849e360 +0x10a:  ret
0849e361 +0x10b:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::OnRequestPeer @ 0x849e256

/* expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&) */

void __thiscall
expert_job::CExpertJobMgr::OnRequestPeer
          (CExpertJobMgr *this,CUser *param_1,CUser *param_2,int param_4,InterfacePacketBuf *param_5
          )

{
  uint uVar1;
  
  uVar1 = IsAvailableRequestPeer(this,param_1,param_2,param_4,param_5);
  if (uVar1 == 0) {
    InterfacePacketBuf::clear(param_5);
    InterfacePacketBuf::put_header(param_5,0,7);
    uVar1 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short(param_5,uVar1 & 0xffff);
    InterfacePacketBuf::put_byte(param_5,param_4);
    uVar1 = CUser::get_unique_id(param_2);
    InterfacePacketBuf::put_int(param_5,uVar1 & 0xffff);
    InterfacePacketBuf::finalize(param_5,true);
    CUser::Send(param_2,(PacketGuard *)param_5);
  }
  else {
    CUser::SendCmdPeerErrorPacket(param_1,10,param_4,uVar1 & 0xff,param_5);
  }
  return;
}
```
