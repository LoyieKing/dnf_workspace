# dispatch_sig

`_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci`

`Inter_RemovePvPBuddyResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_RemovePvPBuddyResult` | `0x084e1c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1c1e  _ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci
#           Inter_RemovePvPBuddyResult::dispatch_sig(CUser*, char*, int)
# range [0x084e1c1e, 0x084e1d95]
084e1c1e +0x000:  push   %ebp
084e1c1f +0x001:  mov    %esp,%ebp
084e1c21 +0x003:  push   %esi
084e1c22 +0x004:  push   %ebx
084e1c23 +0x005:  sub    $0x30,%esp
084e1c26 +0x008:  mov    0x10(%ebp),%eax
084e1c29 +0x00b:  mov    %eax,-0x10(%ebp)
084e1c2c +0x00e:  mov    0xc(%ebp),%eax
084e1c2f +0x011:  mov    %eax,(%esp)
084e1c32 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e1c37 +0x019:  cmp    $0x2,%eax
084e1c3a +0x01c:  setle  %al
084e1c3d +0x01f:  test   %al,%al
084e1c3f +0x021:  je     084e1c4b <+0x2d>
084e1c41 +0x023:  mov    $0x0,%eax
084e1c46 +0x028:  jmp    084e1d8e <+0x170>
084e1c4b +0x02d:  mov    -0x10(%ebp),%eax
084e1c4e +0x030:  mov    0xa(%eax),%ebx
084e1c51 +0x033:  mov    0xc(%ebp),%eax
084e1c54 +0x036:  mov    %eax,(%esp)
084e1c57 +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e1c5c +0x03e:  cmp    %eax,%ebx
084e1c5e +0x040:  setne  %al
084e1c61 +0x043:  test   %al,%al
084e1c63 +0x045:  je     084e1c6f <+0x51>
084e1c65 +0x047:  mov    $0x0,%eax
084e1c6a +0x04c:  jmp    084e1d8e <+0x170>
084e1c6f +0x051:  mov    -0x10(%ebp),%eax
084e1c72 +0x054:  movzbl 0x31(%eax),%eax
084e1c76 +0x058:  test   %al,%al
084e1c78 +0x05a:  je     084e1ca0 <+0x82>
084e1c7a +0x05c:  mov    -0x10(%ebp),%eax
084e1c7d +0x05f:  movzbl 0x31(%eax),%eax
084e1c81 +0x063:  movzbl %al,%eax
084e1c84 +0x066:  mov    %eax,0x8(%esp)
084e1c88 +0x06a:  movl   $0x123,0x4(%esp)
084e1c90 +0x072:  mov    0xc(%ebp),%eax
084e1c93 +0x075:  mov    %eax,(%esp)
084e1c96 +0x078:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1c9b +0x07d:  jmp    084e1d89 <+0x16b>
084e1ca0 +0x082:  lea    -0x1c(%ebp),%eax
084e1ca3 +0x085:  mov    %eax,(%esp)
084e1ca6 +0x088:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e1cab +0x08d:  lea    -0x1c(%ebp),%eax
084e1cae +0x090:  mov    %eax,(%esp)
084e1cb1 +0x093:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084e1cb6 +0x098:  movl   $0x123,0x8(%esp)
084e1cbe +0x0a0:  movl   $0x1,0x4(%esp)
084e1cc6 +0x0a8:  lea    -0x1c(%ebp),%eax
084e1cc9 +0x0ab:  mov    %eax,(%esp)
084e1ccc +0x0ae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1cd1 +0x0b3:  movl   $0x1,0x4(%esp)
084e1cd9 +0x0bb:  lea    -0x1c(%ebp),%eax
084e1cdc +0x0be:  mov    %eax,(%esp)
084e1cdf +0x0c1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1ce4 +0x0c6:  mov    -0x10(%ebp),%eax
084e1ce7 +0x0c9:  movzbl 0x12(%eax),%eax
084e1ceb +0x0cd:  movsbl %al,%eax
084e1cee +0x0d0:  mov    %eax,0x4(%esp)
084e1cf2 +0x0d4:  lea    -0x1c(%ebp),%eax
084e1cf5 +0x0d7:  mov    %eax,(%esp)
084e1cf8 +0x0da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e1cfd +0x0df:  mov    -0x10(%ebp),%eax
084e1d00 +0x0e2:  add    $0x13,%eax
084e1d03 +0x0e5:  mov    %eax,(%esp)
084e1d06 +0x0e8:  call   0807e3b0 <_init+0xca8>
084e1d0b +0x0ed:  mov    %eax,-0xc(%ebp)
084e1d0e +0x0f0:  mov    -0xc(%ebp),%eax
084e1d11 +0x0f3:  mov    %eax,0x4(%esp)
084e1d15 +0x0f7:  lea    -0x1c(%ebp),%eax
084e1d18 +0x0fa:  mov    %eax,(%esp)
084e1d1b +0x0fd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e1d20 +0x102:  mov    -0x10(%ebp),%eax
084e1d23 +0x105:  lea    0x13(%eax),%edx
084e1d26 +0x108:  mov    -0xc(%ebp),%eax
084e1d29 +0x10b:  mov    %eax,0x8(%esp)
084e1d2d +0x10f:  mov    %edx,0x4(%esp)
084e1d31 +0x113:  lea    -0x1c(%ebp),%eax
084e1d34 +0x116:  mov    %eax,(%esp)
084e1d37 +0x119:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e1d3c +0x11e:  movl   $0x1,0x4(%esp)
084e1d44 +0x126:  lea    -0x1c(%ebp),%eax
084e1d47 +0x129:  mov    %eax,(%esp)
084e1d4a +0x12c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e1d4f +0x131:  lea    -0x1c(%ebp),%eax
084e1d52 +0x134:  mov    %eax,0x4(%esp)
084e1d56 +0x138:  mov    0xc(%ebp),%eax
084e1d59 +0x13b:  mov    %eax,(%esp)
084e1d5c +0x13e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e1d61 +0x143:  jmp    084e1d7e <+0x160>
084e1d63 +0x145:  mov    %edx,%ebx
084e1d65 +0x147:  mov    %eax,%esi
084e1d67 +0x149:  lea    -0x1c(%ebp),%eax
084e1d6a +0x14c:  mov    %eax,(%esp)
084e1d6d +0x14f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1d72 +0x154:  mov    %esi,%eax
084e1d74 +0x156:  mov    %ebx,%edx
084e1d76 +0x158:  mov    %eax,(%esp)
084e1d79 +0x15b:  call   08ae3750 <_Unwind_Resume>
084e1d7e +0x160:  lea    -0x1c(%ebp),%eax
084e1d81 +0x163:  mov    %eax,(%esp)
084e1d84 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e1d89 +0x16b:  mov    $0x0,%eax
084e1d8e +0x170:  add    $0x30,%esp
084e1d91 +0x173:  pop    %ebx
084e1d92 +0x174:  pop    %esi
084e1d93 +0x175:  pop    %ebp
084e1d94 +0x176:  ret
084e1d95 +0x177:  nop
```

## 反编译 C

```c
// Inter_RemovePvPBuddyResult::dispatch_sig @ 0x84e1c1e

/* Inter_RemovePvPBuddyResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RemovePvPBuddyResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_14 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    if (*(char *)(local_14 + 0x31) == '\0') {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e1cb1 to 084e1d60 has its CatchHandler @ 084e1d63 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x123);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x12));
      local_10 = strlen((char *)(local_14 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x123,*(undefined1 *)(local_14 + 0x31));
    }
  }
  return 0;
}
```
