# OnResponsePeer

`_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard`

`expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int, ENUM_PEER_REQUEST_TYPE, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e362  _ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard
#           expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
# range [0x0849e362, 0x0849e55d]
0849e362 +0x000:  push   %ebp
0849e363 +0x001:  mov    %esp,%ebp
0849e365 +0x003:  sub    $0x38,%esp
0849e368 +0x006:  movl   $0x0,-0x10(%ebp)
0849e36f +0x00d:  mov    0x24(%ebp),%eax
0849e372 +0x010:  mov    %eax,0x10(%esp)
0849e376 +0x014:  mov    0x20(%ebp),%eax
0849e379 +0x017:  mov    %eax,0xc(%esp)
0849e37d +0x01b:  mov    0x10(%ebp),%eax
0849e380 +0x01e:  mov    %eax,0x8(%esp)
0849e384 +0x022:  mov    0xc(%ebp),%eax
0849e387 +0x025:  mov    %eax,0x4(%esp)
0849e38b +0x029:  mov    0x8(%ebp),%eax
0849e38e +0x02c:  mov    %eax,(%esp)
0849e391 +0x02f:  call   0849e55e <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
0849e396 +0x034:  mov    %eax,-0x10(%ebp)
0849e399 +0x037:  cmpl   $0x0,-0x10(%ebp)
0849e39d +0x03b:  setne  %al
0849e3a0 +0x03e:  test   %al,%al
0849e3a2 +0x040:  je     0849e3d4 <+0x72>
0849e3a4 +0x042:  mov    -0x10(%ebp),%eax
0849e3a7 +0x045:  movzbl %al,%eax
0849e3aa +0x048:  mov    0x24(%ebp),%edx
0849e3ad +0x04b:  mov    %edx,0x10(%esp)
0849e3b1 +0x04f:  mov    %eax,0xc(%esp)
0849e3b5 +0x053:  mov    0x20(%ebp),%eax
0849e3b8 +0x056:  mov    %eax,0x8(%esp)
0849e3bc +0x05a:  movl   $0xb,0x4(%esp)
0849e3c4 +0x062:  mov    0xc(%ebp),%eax
0849e3c7 +0x065:  mov    %eax,(%esp)
0849e3ca +0x068:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
0849e3cf +0x06d:  jmp    0849e55b <+0x1f9>
0849e3d4 +0x072:  movl   $0x1,0x4(%esp)
0849e3dc +0x07a:  mov    0x8(%ebp),%eax
0849e3df +0x07d:  mov    %eax,(%esp)
0849e3e2 +0x080:  call   0849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>  ; expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)
0849e3e7 +0x085:  mov    %eax,-0xc(%ebp)
0849e3ea +0x088:  cmpl   $0x0,-0xc(%ebp)
0849e3ee +0x08c:  jne    0849e41e <+0xbc>
0849e3f0 +0x08e:  mov    0x24(%ebp),%eax
0849e3f3 +0x091:  mov    %eax,0x10(%esp)
0849e3f7 +0x095:  movl   $0x16,0xc(%esp)
0849e3ff +0x09d:  mov    0x20(%ebp),%eax
0849e402 +0x0a0:  mov    %eax,0x8(%esp)
0849e406 +0x0a4:  movl   $0xb,0x4(%esp)
0849e40e +0x0ac:  mov    0xc(%ebp),%eax
0849e411 +0x0af:  mov    %eax,(%esp)
0849e414 +0x0b2:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
0849e419 +0x0b7:  jmp    0849e55b <+0x1f9>
0849e41e +0x0bc:  mov    -0xc(%ebp),%eax
0849e421 +0x0bf:  mov    (%eax),%eax
0849e423 +0x0c1:  mov    (%eax),%edx
0849e425 +0x0c3:  mov    0x18(%ebp),%eax
0849e428 +0x0c6:  mov    %eax,0x8(%esp)
0849e42c +0x0ca:  mov    0x14(%ebp),%eax
0849e42f +0x0cd:  mov    %eax,0x4(%esp)
0849e433 +0x0d1:  mov    -0xc(%ebp),%eax
0849e436 +0x0d4:  mov    %eax,(%esp)
0849e439 +0x0d7:  call   *%edx
0849e43b +0x0d9:  mov    -0xc(%ebp),%eax
0849e43e +0x0dc:  mov    0x20(%ebp),%edx
0849e441 +0x0df:  mov    %edx,0x4(%esp)
0849e445 +0x0e3:  mov    %eax,(%esp)
0849e448 +0x0e6:  call   0849f316 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x147>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x147
0849e44d +0x0eb:  mov    0x24(%ebp),%eax
0849e450 +0x0ee:  movl   $0x8,0x8(%esp)
0849e458 +0x0f6:  movl   $0x0,0x4(%esp)
0849e460 +0x0fe:  mov    %eax,(%esp)
0849e463 +0x101:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849e468 +0x106:  mov    0xc(%ebp),%eax
0849e46b +0x109:  mov    %eax,(%esp)
0849e46e +0x10c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849e473 +0x111:  movzwl %ax,%edx
0849e476 +0x114:  mov    0x24(%ebp),%eax
0849e479 +0x117:  mov    %edx,0x4(%esp)
0849e47d +0x11b:  mov    %eax,(%esp)
0849e480 +0x11e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849e485 +0x123:  mov    0x20(%ebp),%edx
0849e488 +0x126:  mov    0x24(%ebp),%eax
0849e48b +0x129:  mov    %edx,0x4(%esp)
0849e48f +0x12d:  mov    %eax,(%esp)
0849e492 +0x130:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849e497 +0x135:  mov    0x24(%ebp),%eax
0849e49a +0x138:  mov    0x1c(%ebp),%edx
0849e49d +0x13b:  mov    %edx,0x4(%esp)
0849e4a1 +0x13f:  mov    %eax,(%esp)
0849e4a4 +0x142:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849e4a9 +0x147:  mov    0x24(%ebp),%eax
0849e4ac +0x14a:  movl   $0x1,0x4(%esp)
0849e4b4 +0x152:  mov    %eax,(%esp)
0849e4b7 +0x155:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849e4bc +0x15a:  mov    0x24(%ebp),%eax
0849e4bf +0x15d:  mov    %eax,0x4(%esp)
0849e4c3 +0x161:  mov    0x10(%ebp),%eax
0849e4c6 +0x164:  mov    %eax,(%esp)
0849e4c9 +0x167:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849e4ce +0x16c:  mov    0x24(%ebp),%eax
0849e4d1 +0x16f:  mov    %eax,(%esp)
0849e4d4 +0x172:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849e4d9 +0x177:  mov    0x24(%ebp),%eax
0849e4dc +0x17a:  movl   $0xb,0x8(%esp)
0849e4e4 +0x182:  movl   $0x1,0x4(%esp)
0849e4ec +0x18a:  mov    %eax,(%esp)
0849e4ef +0x18d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849e4f4 +0x192:  mov    0x24(%ebp),%eax
0849e4f7 +0x195:  movl   $0x1,0x4(%esp)
0849e4ff +0x19d:  mov    %eax,(%esp)
0849e502 +0x1a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849e507 +0x1a5:  mov    0x10(%ebp),%eax
0849e50a +0x1a8:  mov    %eax,(%esp)
0849e50d +0x1ab:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849e512 +0x1b0:  movzwl %ax,%edx
0849e515 +0x1b3:  mov    0x24(%ebp),%eax
0849e518 +0x1b6:  mov    %edx,0x4(%esp)
0849e51c +0x1ba:  mov    %eax,(%esp)
0849e51f +0x1bd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849e524 +0x1c2:  mov    0x20(%ebp),%edx
0849e527 +0x1c5:  mov    0x24(%ebp),%eax
0849e52a +0x1c8:  mov    %edx,0x4(%esp)
0849e52e +0x1cc:  mov    %eax,(%esp)
0849e531 +0x1cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849e536 +0x1d4:  mov    0x24(%ebp),%eax
0849e539 +0x1d7:  movl   $0x1,0x4(%esp)
0849e541 +0x1df:  mov    %eax,(%esp)
0849e544 +0x1e2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849e549 +0x1e7:  mov    0x24(%ebp),%eax
0849e54c +0x1ea:  mov    %eax,0x4(%esp)
0849e550 +0x1ee:  mov    0xc(%ebp),%eax
0849e553 +0x1f1:  mov    %eax,(%esp)
0849e556 +0x1f4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849e55b +0x1f9:  leave
0849e55c +0x1fa:  ret
0849e55d +0x1fb:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::OnResponsePeer @ 0x849e362

/* expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int,
   ENUM_PEER_REQUEST_TYPE, PacketGuard&) */

void __thiscall
expert_job::CExpertJobMgr::OnResponsePeer
          (CExpertJobMgr *this,CUser *param_1,CUser *param_2,undefined4 param_3,undefined4 param_4,
          int param_5,int param_7,InterfacePacketBuf *param_8)

{
  uint uVar1;
  CEnchanter *pCVar2;
  
  uVar1 = IsAvailableRequestPeer(this,param_1,param_2,param_7,param_8);
  if (uVar1 == 0) {
    pCVar2 = (CEnchanter *)AcquireExpertJob(this,1);
    if (pCVar2 == (CEnchanter *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,param_7,0x16,param_8);
    }
    else {
      (*(code *)**(undefined4 **)pCVar2)(pCVar2,param_3,param_4);
      CEnchanter::SetPeerRequestType(pCVar2,param_7);
      InterfacePacketBuf::put_header(param_8,0,8);
      uVar1 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short(param_8,uVar1 & 0xffff);
      InterfacePacketBuf::put_byte(param_8,param_7);
      InterfacePacketBuf::put_int(param_8,param_5);
      InterfacePacketBuf::finalize(param_8,true);
      CUser::Send(param_2,(PacketGuard *)param_8);
      InterfacePacketBuf::clear(param_8);
      InterfacePacketBuf::put_header(param_8,1,0xb);
      InterfacePacketBuf::put_byte(param_8,1);
      uVar1 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short(param_8,uVar1 & 0xffff);
      InterfacePacketBuf::put_byte(param_8,param_7);
      InterfacePacketBuf::finalize(param_8,true);
      CUser::Send(param_1,(PacketGuard *)param_8);
    }
  }
  else {
    CUser::SendCmdPeerErrorPacket(param_1,0xb,param_7,uVar1 & 0xff,param_8);
  }
  return;
}
```
