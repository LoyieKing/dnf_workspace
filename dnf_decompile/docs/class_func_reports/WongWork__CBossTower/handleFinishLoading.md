# handleFinishLoading

`_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser`

`WongWork::CBossTower::handleFinishLoading(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143f6a  _ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser
#           WongWork::CBossTower::handleFinishLoading(CUser*)
# range [0x08143f6a, 0x081440b1]
08143f6a +0x000:  push   %ebp
08143f6b +0x001:  mov    %esp,%ebp
08143f6d +0x003:  push   %esi
08143f6e +0x004:  push   %ebx
08143f6f +0x005:  sub    $0x20,%esp
08143f72 +0x008:  mov    0x8(%ebp),%eax
08143f75 +0x00b:  mov    0x4(%eax),%eax
08143f78 +0x00e:  mov    0xc(%ebp),%edx
08143f7b +0x011:  mov    %edx,0x4(%esp)
08143f7f +0x015:  mov    %eax,(%esp)
08143f82 +0x018:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
08143f87 +0x01d:  mov    %eax,-0xc(%ebp)
08143f8a +0x020:  cmpl   $0xffffffff,-0xc(%ebp)
08143f8e +0x024:  je     08143fb0 <+0x46>
08143f90 +0x026:  mov    0x8(%ebp),%eax
08143f93 +0x029:  mov    0x4(%eax),%eax
08143f96 +0x02c:  mov    -0xc(%ebp),%edx
08143f99 +0x02f:  mov    %edx,0x4(%esp)
08143f9d +0x033:  mov    %eax,(%esp)
08143fa0 +0x036:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08143fa5 +0x03b:  test   %al,%al
08143fa7 +0x03d:  je     08143fb0 <+0x46>
08143fa9 +0x03f:  mov    $0x1,%eax
08143fae +0x044:  jmp    08143fb5 <+0x4b>
08143fb0 +0x046:  mov    $0x0,%eax
08143fb5 +0x04b:  test   %al,%al
08143fb7 +0x04d:  je     081440a6 <+0x13c>
08143fbd +0x053:  mov    0x8(%ebp),%eax
08143fc0 +0x056:  movl   $0x1,0x8(%esp)
08143fc8 +0x05e:  mov    -0xc(%ebp),%edx
08143fcb +0x061:  mov    %edx,0x4(%esp)
08143fcf +0x065:  mov    %eax,(%esp)
08143fd2 +0x068:  call   08145692 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x115>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x115
08143fd7 +0x06d:  movl   $0x28,0x4(%esp)
08143fdf +0x075:  mov    0xc(%ebp),%eax
08143fe2 +0x078:  mov    %eax,(%esp)
08143fe5 +0x07b:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
08143fea +0x080:  mov    0x8(%ebp),%eax
08143fed +0x083:  mov    (%eax),%eax
08143fef +0x085:  add    $0xc,%eax
08143ff2 +0x088:  mov    (%eax),%ebx
08143ff4 +0x08a:  mov    0x8(%ebp),%eax
08143ff7 +0x08d:  mov    0x4(%eax),%eax
08143ffa +0x090:  mov    %eax,(%esp)
08143ffd +0x093:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08144002 +0x098:  mov    0x8(%ebp),%edx
08144005 +0x09b:  mov    %eax,0x4(%esp)
08144009 +0x09f:  mov    %edx,(%esp)
0814400c +0x0a2:  call   *%ebx
0814400e +0x0a4:  test   %al,%al
08144010 +0x0a6:  je     0814409f <+0x135>
08144016 +0x0ac:  lea    -0x18(%ebp),%eax
08144019 +0x0af:  mov    %eax,(%esp)
0814401c +0x0b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08144021 +0x0b7:  movl   $0x1e,0x8(%esp)
08144029 +0x0bf:  movl   $0x0,0x4(%esp)
08144031 +0x0c7:  lea    -0x18(%ebp),%eax
08144034 +0x0ca:  mov    %eax,(%esp)
08144037 +0x0cd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814403c +0x0d2:  movl   $0x0,0x4(%esp)
08144044 +0x0da:  lea    -0x18(%ebp),%eax
08144047 +0x0dd:  mov    %eax,(%esp)
0814404a +0x0e0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814404f +0x0e5:  movl   $0x1,0x4(%esp)
08144057 +0x0ed:  lea    -0x18(%ebp),%eax
0814405a +0x0f0:  mov    %eax,(%esp)
0814405d +0x0f3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08144062 +0x0f8:  mov    0x8(%ebp),%eax
08144065 +0x0fb:  mov    0x4(%eax),%eax
08144068 +0x0fe:  lea    -0x18(%ebp),%edx
0814406b +0x101:  mov    %edx,0x4(%esp)
0814406f +0x105:  mov    %eax,(%esp)
08144072 +0x108:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08144077 +0x10d:  jmp    08144094 <+0x12a>
08144079 +0x10f:  mov    %edx,%ebx
0814407b +0x111:  mov    %eax,%esi
0814407d +0x113:  lea    -0x18(%ebp),%eax
08144080 +0x116:  mov    %eax,(%esp)
08144083 +0x119:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144088 +0x11e:  mov    %esi,%eax
0814408a +0x120:  mov    %ebx,%edx
0814408c +0x122:  mov    %eax,(%esp)
0814408f +0x125:  call   08ae3750 <_Unwind_Resume>
08144094 +0x12a:  lea    -0x18(%ebp),%eax
08144097 +0x12d:  mov    %eax,(%esp)
0814409a +0x130:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814409f +0x135:  mov    $0x1,%eax
081440a4 +0x13a:  jmp    081440ab <+0x141>
081440a6 +0x13c:  mov    $0x0,%eax
081440ab +0x141:  add    $0x20,%esp
081440ae +0x144:  pop    %ebx
081440af +0x145:  pop    %esi
081440b0 +0x146:  pop    %ebp
081440b1 +0x147:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::handleFinishLoading @ 0x8143f6a

/* WongWork::CBossTower::handleFinishLoading(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleFinishLoading(CBossTower *this,CUser *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = CParty::GetMemberSlotNo(*(CParty **)(this + 4),param_1);
  if (local_10 != -1) {
    cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_08143fb5;
    }
  }
  bVar2 = false;
LAB_08143fb5:
  if (bVar2) {
    CBossPlay::setMemberReady((CBossPlay *)this,local_10,true);
    CUser::SendCmdOkPacket(param_1,0x28);
    pcVar1 = *(code **)(*(int *)this + 0xc);
    uVar4 = CParty::get_member_count(*(CParty **)(this + 4));
    cVar3 = (*pcVar1)(this,uVar4);
    if (cVar3 != '\0') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08144037 to 08144076 has its CatchHandler @ 08144079 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CParty::send_to_party(*(CParty **)(this + 4),local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
