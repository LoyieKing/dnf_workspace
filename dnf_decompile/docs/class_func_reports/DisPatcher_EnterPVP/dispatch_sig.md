# dispatch_sig

`_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EnterPVP` | `0x081ed6c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ed6c8  _ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ed6c8, 0x081ed947]
081ed6c8 +0x000:  push   %ebp
081ed6c9 +0x001:  mov    %esp,%ebp
081ed6cb +0x003:  push   %esi
081ed6cc +0x004:  push   %ebx
081ed6cd +0x005:  sub    $0x40,%esp
081ed6d0 +0x008:  lea    -0x1b(%ebp),%eax
081ed6d3 +0x00b:  add    $0xd,%eax
081ed6d6 +0x00e:  mov    %eax,0x4(%esp)
081ed6da +0x012:  mov    0x10(%ebp),%eax
081ed6dd +0x015:  mov    %eax,(%esp)
081ed6e0 +0x018:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ed6e5 +0x01d:  xor    $0x1,%eax
081ed6e8 +0x020:  test   %al,%al
081ed6ea +0x022:  je     081ed717 <+0x4f>
081ed6ec +0x024:  movl   $0x0,0xc(%esp)
081ed6f4 +0x02c:  movl   $0x0,0x8(%esp)
081ed6fc +0x034:  movl   $&_ZZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ed704 +0x03c:  movl   $0x6fc7,(%esp)
081ed70b +0x043:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ed710 +0x048:  mov    %eax,%ebx
081ed712 +0x04a:  jmp    081ed93e <+0x276>
081ed717 +0x04f:  movb   $0x0,-0x1c(%ebp)
081ed71b +0x053:  movl   $0x0,-0x20(%ebp)
081ed722 +0x05a:  movl   $0x0,-0x29(%ebp)
081ed729 +0x061:  movl   $0x0,-0x25(%ebp)
081ed730 +0x068:  movb   $0x0,-0x21(%ebp)
081ed734 +0x06c:  lea    -0x1c(%ebp),%eax
081ed737 +0x06f:  mov    %eax,0x4(%esp)
081ed73b +0x073:  mov    0x10(%ebp),%eax
081ed73e +0x076:  mov    %eax,(%esp)
081ed741 +0x079:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ed746 +0x07e:  xor    $0x1,%eax
081ed749 +0x081:  test   %al,%al
081ed74b +0x083:  je     081ed778 <+0xb0>
081ed74d +0x085:  movl   $0x0,0xc(%esp)
081ed755 +0x08d:  movl   $0x0,0x8(%esp)
081ed75d +0x095:  movl   $&_ZZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ed765 +0x09d:  movl   $0x6fce,(%esp)
081ed76c +0x0a4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ed771 +0x0a9:  mov    %eax,%ebx
081ed773 +0x0ab:  jmp    081ed93e <+0x276>
081ed778 +0x0b0:  movzbl -0x1c(%ebp),%eax
081ed77c +0x0b4:  cmp    $0x1,%al
081ed77e +0x0b6:  jne    081ed846 <+0x17e>
081ed784 +0x0bc:  lea    -0x20(%ebp),%eax
081ed787 +0x0bf:  mov    %eax,0x4(%esp)
081ed78b +0x0c3:  mov    0x10(%ebp),%eax
081ed78e +0x0c6:  mov    %eax,(%esp)
081ed791 +0x0c9:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081ed796 +0x0ce:  xor    $0x1,%eax
081ed799 +0x0d1:  test   %al,%al
081ed79b +0x0d3:  je     081ed7c8 <+0x100>
081ed79d +0x0d5:  movl   $0x0,0xc(%esp)
081ed7a5 +0x0dd:  movl   $0x0,0x8(%esp)
081ed7ad +0x0e5:  movl   $&_ZZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ed7b5 +0x0ed:  movl   $0x6fd2,(%esp)
081ed7bc +0x0f4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ed7c1 +0x0f9:  mov    %eax,%ebx
081ed7c3 +0x0fb:  jmp    081ed93e <+0x276>
081ed7c8 +0x100:  mov    -0x20(%ebp),%eax
081ed7cb +0x103:  cmp    $0xa,%eax
081ed7ce +0x106:  jle    081ed7fb <+0x133>
081ed7d0 +0x108:  movl   $0x0,0xc(%esp)
081ed7d8 +0x110:  movl   $0x0,0x8(%esp)
081ed7e0 +0x118:  movl   $&_ZZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ed7e8 +0x120:  movl   $0x6fd4,(%esp)
081ed7ef +0x127:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ed7f4 +0x12c:  mov    %eax,%ebx
081ed7f6 +0x12e:  jmp    081ed93e <+0x276>
081ed7fb +0x133:  mov    -0x20(%ebp),%eax
081ed7fe +0x136:  mov    %eax,0x8(%esp)
081ed802 +0x13a:  lea    -0x29(%ebp),%eax
081ed805 +0x13d:  mov    %eax,0x4(%esp)
081ed809 +0x141:  mov    0x10(%ebp),%eax
081ed80c +0x144:  mov    %eax,(%esp)
081ed80f +0x147:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081ed814 +0x14c:  xor    $0x1,%eax
081ed817 +0x14f:  test   %al,%al
081ed819 +0x151:  je     081ed846 <+0x17e>
081ed81b +0x153:  movl   $0x0,0xc(%esp)
081ed823 +0x15b:  movl   $0x0,0x8(%esp)
081ed82b +0x163:  movl   $&_ZZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ed833 +0x16b:  movl   $0x6fd7,(%esp)
081ed83a +0x172:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ed83f +0x177:  mov    %eax,%ebx
081ed841 +0x179:  jmp    081ed93e <+0x276>
081ed846 +0x17e:  movzwl -0xe(%ebp),%eax
081ed84a +0x182:  movswl %ax,%ebx
081ed84d +0x185:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ed852 +0x18a:  movl   $0x0,0xc(%esp)
081ed85a +0x192:  mov    0xc(%ebp),%edx
081ed85d +0x195:  mov    %edx,0x8(%esp)
081ed861 +0x199:  mov    %ebx,0x4(%esp)
081ed865 +0x19d:  mov    %eax,(%esp)
081ed868 +0x1a0:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
081ed86d +0x1a5:  mov    %eax,-0xc(%ebp)
081ed870 +0x1a8:  cmpl   $0x0,-0xc(%ebp)
081ed874 +0x1ac:  jne    081ed918 <+0x250>
081ed87a +0x1b2:  lea    -0x38(%ebp),%eax
081ed87d +0x1b5:  mov    %eax,(%esp)
081ed880 +0x1b8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ed885 +0x1bd:  movl   $0x36,0x8(%esp)
081ed88d +0x1c5:  movl   $0x1,0x4(%esp)
081ed895 +0x1cd:  lea    -0x38(%ebp),%eax
081ed898 +0x1d0:  mov    %eax,(%esp)
081ed89b +0x1d3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ed8a0 +0x1d8:  movl   $0x0,0x4(%esp)
081ed8a8 +0x1e0:  lea    -0x38(%ebp),%eax
081ed8ab +0x1e3:  mov    %eax,(%esp)
081ed8ae +0x1e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ed8b3 +0x1eb:  movl   $0x16,0x4(%esp)
081ed8bb +0x1f3:  lea    -0x38(%ebp),%eax
081ed8be +0x1f6:  mov    %eax,(%esp)
081ed8c1 +0x1f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ed8c6 +0x1fe:  movl   $0x1,0x4(%esp)
081ed8ce +0x206:  lea    -0x38(%ebp),%eax
081ed8d1 +0x209:  mov    %eax,(%esp)
081ed8d4 +0x20c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ed8d9 +0x211:  lea    -0x38(%ebp),%eax
081ed8dc +0x214:  mov    %eax,0x4(%esp)
081ed8e0 +0x218:  mov    0xc(%ebp),%eax
081ed8e3 +0x21b:  mov    %eax,(%esp)
081ed8e6 +0x21e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ed8eb +0x223:  mov    $0x0,%ebx
081ed8f0 +0x228:  lea    -0x38(%ebp),%eax
081ed8f3 +0x22b:  mov    %eax,(%esp)
081ed8f6 +0x22e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ed8fb +0x233:  jmp    081ed93e <+0x276>
081ed8fd +0x235:  mov    %edx,%ebx
081ed8ff +0x237:  mov    %eax,%esi
081ed901 +0x239:  lea    -0x38(%ebp),%eax
081ed904 +0x23c:  mov    %eax,(%esp)
081ed907 +0x23f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ed90c +0x244:  mov    %esi,%eax
081ed90e +0x246:  mov    %ebx,%edx
081ed910 +0x248:  mov    %eax,(%esp)
081ed913 +0x24b:  call   08ae3750 <_Unwind_Resume>
081ed918 +0x250:  lea    -0x29(%ebp),%eax
081ed91b +0x253:  mov    %eax,0xc(%esp)
081ed91f +0x257:  movl   $0x36,0x8(%esp)
081ed927 +0x25f:  mov    -0xc(%ebp),%eax
081ed92a +0x262:  mov    %eax,0x4(%esp)
081ed92e +0x266:  mov    0xc(%ebp),%eax
081ed931 +0x269:  mov    %eax,(%esp)
081ed934 +0x26c:  call   081ed09a <_Z12EnterPVPRoomP5CUserP8PvP_Room14ENUM_CMDPACKETPKc>  ; EnterPVPRoom(CUser*, PvP_Room*, ENUM_CMDPACKET, char const*)
081ed939 +0x271:  mov    $0x0,%ebx
081ed93e +0x276:  mov    %ebx,%eax
081ed940 +0x278:  add    $0x40,%esp
081ed943 +0x27b:  pop    %ebx
081ed944 +0x27c:  pop    %esi
081ed945 +0x27d:  pop    %ebp
081ed946 +0x27e:  ret
081ed947 +0x27f:  nop
```

## 反编译 C

```c
// DisPatcher_EnterPVP::dispatch_sig @ 0x81ed6c8

/* DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_EnterPVP::dispatch_sig(DisPatcher_EnterPVP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CGameManager *this_00;
  PacketGuard local_3c [15];
  char local_2d [9];
  int local_24;
  char local_20 [14];
  short local_12;
  int local_10;
  
  cVar1 = PacketBuf::get_short(param_2,&local_12);
  if (cVar1 == '\x01') {
    local_20[0] = '\0';
    local_24 = 0;
    local_2d[0] = '\0';
    local_2d[1] = '\0';
    local_2d[2] = '\0';
    local_2d[3] = '\0';
    local_2d[4] = '\0';
    local_2d[5] = '\0';
    local_2d[6] = '\0';
    local_2d[7] = '\0';
    local_2d[8] = 0;
    cVar1 = PacketBuf::get_byte(param_2,local_20);
    if (cVar1 == '\x01') {
      if (local_20[0] == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x6fd2,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
        if (10 < local_24) {
          uVar2 = LineFunc(0x6fd4,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_binary(param_2,local_2d,local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x6fd7,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
      }
      this_00 = (CGameManager *)G_CGameManager();
      local_10 = CGameManager::GetPvp(this_00,(int)local_12,param_1,0);
      if (local_10 == 0) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081ed89b to 081ed8ea has its CatchHandler @ 081ed8fd */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x36);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x16);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        CUser::Send(param_1,local_3c);
        uVar2 = 0;
        PacketGuard::~PacketGuard(local_3c);
      }
      else {
        EnterPVPRoom(param_1,local_10,0x36,local_2d);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x6fce,"virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x6fc7,"virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar2;
}
```
