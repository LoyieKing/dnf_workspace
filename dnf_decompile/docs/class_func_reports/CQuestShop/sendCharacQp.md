# sendCharacQp

`_ZN10CQuestShop12sendCharacQpEP5CUserc`

`CQuestShop::sendCharacQp(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef6fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef6fc  _ZN10CQuestShop12sendCharacQpEP5CUserc
#           CQuestShop::sendCharacQp(CUser*, char)
# range [0x085ef6fc, 0x085ef7cb]
085ef6fc +0x00:  push   %ebp
085ef6fd +0x01:  mov    %esp,%ebp
085ef6ff +0x03:  push   %esi
085ef700 +0x04:  push   %ebx
085ef701 +0x05:  sub    $0x30,%esp
085ef704 +0x08:  mov    0x10(%ebp),%eax
085ef707 +0x0b:  mov    %al,-0x1c(%ebp)
085ef70a +0x0e:  lea    -0x14(%ebp),%eax
085ef70d +0x11:  mov    %eax,(%esp)
085ef710 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085ef715 +0x19:  movl   $0x15c,0x8(%esp)
085ef71d +0x21:  movl   $0x0,0x4(%esp)
085ef725 +0x29:  lea    -0x14(%ebp),%eax
085ef728 +0x2c:  mov    %eax,(%esp)
085ef72b +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ef730 +0x34:  mov    0x8(%ebp),%eax
085ef733 +0x37:  mov    %eax,(%esp)
085ef736 +0x3a:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef73b +0x3f:  mov    %eax,0x4(%esp)
085ef73f +0x43:  lea    -0x14(%ebp),%eax
085ef742 +0x46:  mov    %eax,(%esp)
085ef745 +0x49:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085ef74a +0x4e:  mov    0x8(%ebp),%eax
085ef74d +0x51:  mov    %eax,(%esp)
085ef750 +0x54:  call   085eff0a <_GLOBAL__I__ZN10CQuestShopC2Ev+0x76>  ; global constructors keyed to CQuestShop::CQuestShop()+0x76
085ef755 +0x59:  mov    %eax,0x4(%esp)
085ef759 +0x5d:  lea    -0x14(%ebp),%eax
085ef75c +0x60:  mov    %eax,(%esp)
085ef75f +0x63:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085ef764 +0x68:  movsbl -0x1c(%ebp),%eax
085ef768 +0x6c:  mov    %eax,0x4(%esp)
085ef76c +0x70:  lea    -0x14(%ebp),%eax
085ef76f +0x73:  mov    %eax,(%esp)
085ef772 +0x76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ef777 +0x7b:  movl   $0x1,0x4(%esp)
085ef77f +0x83:  lea    -0x14(%ebp),%eax
085ef782 +0x86:  mov    %eax,(%esp)
085ef785 +0x89:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ef78a +0x8e:  lea    -0x14(%ebp),%eax
085ef78d +0x91:  mov    %eax,0x4(%esp)
085ef791 +0x95:  mov    0xc(%ebp),%eax
085ef794 +0x98:  mov    %eax,(%esp)
085ef797 +0x9b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085ef79c +0xa0:  jmp    085ef7b9 <+0xbd>
085ef79e +0xa2:  mov    %edx,%ebx
085ef7a0 +0xa4:  mov    %eax,%esi
085ef7a2 +0xa6:  lea    -0x14(%ebp),%eax
085ef7a5 +0xa9:  mov    %eax,(%esp)
085ef7a8 +0xac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ef7ad +0xb1:  mov    %esi,%eax
085ef7af +0xb3:  mov    %ebx,%edx
085ef7b1 +0xb5:  mov    %eax,(%esp)
085ef7b4 +0xb8:  call   08ae3750 <_Unwind_Resume>
085ef7b9 +0xbd:  lea    -0x14(%ebp),%eax
085ef7bc +0xc0:  mov    %eax,(%esp)
085ef7bf +0xc3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ef7c4 +0xc8:  add    $0x30,%esp
085ef7c7 +0xcb:  pop    %ebx
085ef7c8 +0xcc:  pop    %esi
085ef7c9 +0xcd:  pop    %ebp
085ef7ca +0xce:  ret
085ef7cb +0xcf:  nop
```

## 反编译 C

```c
// CQuestShop::sendCharacQp @ 0x85ef6fc

/* CQuestShop::sendCharacQp(CUser*, char) */

void __thiscall CQuestShop::sendCharacQp(CQuestShop *this,CUser *param_1,char param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ef72b to 085ef79b has its CatchHandler @ 085ef79e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x15c);
  iVar1 = getQp(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  iVar1 = getInitCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
