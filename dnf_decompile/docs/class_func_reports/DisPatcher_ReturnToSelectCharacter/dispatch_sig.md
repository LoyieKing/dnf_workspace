# dispatch_sig

`_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ReturnToSelectCharacter` | `0x081fd25c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fd25c  _ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fd25c, 0x081fd35f]
081fd25c +0x000:  push   %ebp
081fd25d +0x001:  mov    %esp,%ebp
081fd25f +0x003:  push   %esi
081fd260 +0x004:  push   %ebx
081fd261 +0x005:  sub    $0x20,%esp
081fd264 +0x008:  movb   $0x1,-0x9(%ebp)
081fd268 +0x00c:  mov    0xc(%ebp),%eax
081fd26b +0x00f:  mov    %eax,(%esp)
081fd26e +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fd273 +0x017:  cmp    $0x2,%eax
081fd276 +0x01a:  setle  %al
081fd279 +0x01d:  test   %al,%al
081fd27b +0x01f:  je     081fd283 <+0x27>
081fd27d +0x021:  movb   $0x0,-0x9(%ebp)
081fd281 +0x025:  jmp    081fd2b0 <+0x54>
081fd283 +0x027:  mov    0xc(%ebp),%eax
081fd286 +0x02a:  mov    %eax,(%esp)
081fd289 +0x02d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081fd28e +0x032:  cmp    $0x7,%al
081fd290 +0x034:  sete   %al
081fd293 +0x037:  test   %al,%al
081fd295 +0x039:  je     081fd29d <+0x41>
081fd297 +0x03b:  movb   $0x0,-0x9(%ebp)
081fd29b +0x03f:  jmp    081fd2b0 <+0x54>
081fd29d +0x041:  movl   $0x0,0x4(%esp)
081fd2a5 +0x049:  mov    0xc(%ebp),%eax
081fd2a8 +0x04c:  mov    %eax,(%esp)
081fd2ab +0x04f:  call   08686fee <_ZN5CUser24ReturnToSelectCharacListEb>  ; CUser::ReturnToSelectCharacList(bool)
081fd2b0 +0x054:  lea    -0x18(%ebp),%eax
081fd2b3 +0x057:  mov    %eax,(%esp)
081fd2b6 +0x05a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fd2bb +0x05f:  movl   $0x7,0x8(%esp)
081fd2c3 +0x067:  movl   $0x1,0x4(%esp)
081fd2cb +0x06f:  lea    -0x18(%ebp),%eax
081fd2ce +0x072:  mov    %eax,(%esp)
081fd2d1 +0x075:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fd2d6 +0x07a:  movzbl -0x9(%ebp),%eax
081fd2da +0x07e:  mov    %eax,0x4(%esp)
081fd2de +0x082:  lea    -0x18(%ebp),%eax
081fd2e1 +0x085:  mov    %eax,(%esp)
081fd2e4 +0x088:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fd2e9 +0x08d:  movzbl -0x9(%ebp),%eax
081fd2ed +0x091:  xor    $0x1,%eax
081fd2f0 +0x094:  test   %al,%al
081fd2f2 +0x096:  je     081fd307 <+0xab>
081fd2f4 +0x098:  movl   $0x13,0x4(%esp)
081fd2fc +0x0a0:  lea    -0x18(%ebp),%eax
081fd2ff +0x0a3:  mov    %eax,(%esp)
081fd302 +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fd307 +0x0ab:  movl   $0x1,0x4(%esp)
081fd30f +0x0b3:  lea    -0x18(%ebp),%eax
081fd312 +0x0b6:  mov    %eax,(%esp)
081fd315 +0x0b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fd31a +0x0be:  lea    -0x18(%ebp),%eax
081fd31d +0x0c1:  mov    %eax,0x4(%esp)
081fd321 +0x0c5:  mov    0xc(%ebp),%eax
081fd324 +0x0c8:  mov    %eax,(%esp)
081fd327 +0x0cb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081fd32c +0x0d0:  jmp    081fd349 <+0xed>
081fd32e +0x0d2:  mov    %edx,%ebx
081fd330 +0x0d4:  mov    %eax,%esi
081fd332 +0x0d6:  lea    -0x18(%ebp),%eax
081fd335 +0x0d9:  mov    %eax,(%esp)
081fd338 +0x0dc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fd33d +0x0e1:  mov    %esi,%eax
081fd33f +0x0e3:  mov    %ebx,%edx
081fd341 +0x0e5:  mov    %eax,(%esp)
081fd344 +0x0e8:  call   08ae3750 <_Unwind_Resume>
081fd349 +0x0ed:  lea    -0x18(%ebp),%eax
081fd34c +0x0f0:  mov    %eax,(%esp)
081fd34f +0x0f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fd354 +0x0f8:  mov    $0x0,%eax
081fd359 +0x0fd:  add    $0x20,%esp
081fd35c +0x100:  pop    %ebx
081fd35d +0x101:  pop    %esi
081fd35e +0x102:  pop    %ebp
081fd35f +0x103:  ret
```

## 反编译 C

```c
// DisPatcher_ReturnToSelectCharacter::dispatch_sig @ 0x81fd25c

/* DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  PacketGuard local_1c [15];
  byte local_d;
  
  local_d = 1;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 3) {
    local_d = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
    if (cVar1 == '\a') {
      local_d = 0;
    }
    else {
      CUser::ReturnToSelectCharacList((CUser *)param_2,false);
    }
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081fd2d1 to 081fd32b has its CatchHandler @ 081fd32e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
  if (local_d != 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
