# dispatch_sig

`_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci`

`Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfoRenew` | `0x084e6e82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6e82  _ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci
#           Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser*, char*, int)
# range [0x084e6e82, 0x084e7023]
084e6e82 +0x000:  push   %ebp
084e6e83 +0x001:  mov    %esp,%ebp
084e6e85 +0x003:  push   %esi
084e6e86 +0x004:  push   %ebx
084e6e87 +0x005:  sub    $0x30,%esp
084e6e8a +0x008:  mov    0x10(%ebp),%eax
084e6e8d +0x00b:  mov    %eax,-0x10(%ebp)
084e6e90 +0x00e:  lea    -0x1c(%ebp),%eax
084e6e93 +0x011:  mov    %eax,(%esp)
084e6e96 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e6e9b +0x019:  movl   $0x193,0x8(%esp)
084e6ea3 +0x021:  movl   $0x0,0x4(%esp)
084e6eab +0x029:  lea    -0x1c(%ebp),%eax
084e6eae +0x02c:  mov    %eax,(%esp)
084e6eb1 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e6eb6 +0x034:  mov    -0x10(%ebp),%eax
084e6eb9 +0x037:  mov    0xa(%eax),%eax
084e6ebc +0x03a:  mov    %eax,0x4(%esp)
084e6ec0 +0x03e:  lea    -0x1c(%ebp),%eax
084e6ec3 +0x041:  mov    %eax,(%esp)
084e6ec6 +0x044:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6ecb +0x049:  movl   $0x0,-0xc(%ebp)
084e6ed2 +0x050:  jmp    084e6fa3 <+0x121>
084e6ed7 +0x055:  mov    -0xc(%ebp),%edx
084e6eda +0x058:  mov    -0x10(%ebp),%ecx
084e6edd +0x05b:  mov    %edx,%eax
084e6edf +0x05d:  add    %eax,%eax
084e6ee1 +0x05f:  add    %edx,%eax
084e6ee3 +0x061:  shl    $0x2,%eax
084e6ee6 +0x064:  mov    0xe(%eax,%ecx,1),%eax
084e6eea +0x068:  mov    %eax,0x4(%esp)
084e6eee +0x06c:  lea    -0x1c(%ebp),%eax
084e6ef1 +0x06f:  mov    %eax,(%esp)
084e6ef4 +0x072:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6ef9 +0x077:  mov    -0xc(%ebp),%edx
084e6efc +0x07a:  mov    -0x10(%ebp),%ecx
084e6eff +0x07d:  mov    %edx,%eax
084e6f01 +0x07f:  add    %eax,%eax
084e6f03 +0x081:  add    %edx,%eax
084e6f05 +0x083:  shl    $0x2,%eax
084e6f08 +0x086:  mov    0x12(%eax,%ecx,1),%eax
084e6f0c +0x08a:  test   %eax,%eax
084e6f0e +0x08c:  jne    084e6f25 <+0xa3>
084e6f10 +0x08e:  movl   $0x0,0x4(%esp)
084e6f18 +0x096:  lea    -0x1c(%ebp),%eax
084e6f1b +0x099:  mov    %eax,(%esp)
084e6f1e +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6f23 +0x0a1:  jmp    084e6f9f <+0x11d>
084e6f25 +0x0a3:  mov    -0xc(%ebp),%edx
084e6f28 +0x0a6:  mov    -0x10(%ebp),%ecx
084e6f2b +0x0a9:  mov    %edx,%eax
084e6f2d +0x0ab:  add    %eax,%eax
084e6f2f +0x0ad:  add    %edx,%eax
084e6f31 +0x0af:  shl    $0x2,%eax
084e6f34 +0x0b2:  mov    0x16(%eax,%ecx,1),%ebx
084e6f38 +0x0b6:  mov    -0xc(%ebp),%edx
084e6f3b +0x0b9:  mov    -0x10(%ebp),%ecx
084e6f3e +0x0bc:  mov    %edx,%eax
084e6f40 +0x0be:  add    %eax,%eax
084e6f42 +0x0c0:  add    %edx,%eax
084e6f44 +0x0c2:  shl    $0x2,%eax
084e6f47 +0x0c5:  mov    0x12(%eax,%ecx,1),%eax
084e6f4b +0x0c9:  cmp    %eax,%ebx
084e6f4d +0x0cb:  jb     084e6f64 <+0xe2>
084e6f4f +0x0cd:  movl   $0x0,0x4(%esp)
084e6f57 +0x0d5:  lea    -0x1c(%ebp),%eax
084e6f5a +0x0d8:  mov    %eax,(%esp)
084e6f5d +0x0db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6f62 +0x0e0:  jmp    084e6f9f <+0x11d>
084e6f64 +0x0e2:  mov    -0xc(%ebp),%edx
084e6f67 +0x0e5:  mov    -0x10(%ebp),%ecx
084e6f6a +0x0e8:  mov    %edx,%eax
084e6f6c +0x0ea:  add    %eax,%eax
084e6f6e +0x0ec:  add    %edx,%eax
084e6f70 +0x0ee:  shl    $0x2,%eax
084e6f73 +0x0f1:  mov    0x12(%eax,%ecx,1),%ebx
084e6f77 +0x0f5:  mov    -0xc(%ebp),%edx
084e6f7a +0x0f8:  mov    -0x10(%ebp),%ecx
084e6f7d +0x0fb:  mov    %edx,%eax
084e6f7f +0x0fd:  add    %eax,%eax
084e6f81 +0x0ff:  add    %edx,%eax
084e6f83 +0x101:  shl    $0x2,%eax
084e6f86 +0x104:  mov    0x16(%eax,%ecx,1),%eax
084e6f8a +0x108:  mov    %ebx,%edx
084e6f8c +0x10a:  sub    %eax,%edx
084e6f8e +0x10c:  mov    %edx,%eax
084e6f90 +0x10e:  mov    %eax,0x4(%esp)
084e6f94 +0x112:  lea    -0x1c(%ebp),%eax
084e6f97 +0x115:  mov    %eax,(%esp)
084e6f9a +0x118:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6f9f +0x11d:  addl   $0x1,-0xc(%ebp)
084e6fa3 +0x121:  mov    -0x10(%ebp),%eax
084e6fa6 +0x124:  mov    0xa(%eax),%eax
084e6fa9 +0x127:  cmp    -0xc(%ebp),%eax
084e6fac +0x12a:  jle    084e6fbb <+0x139>
084e6fae +0x12c:  cmpl   $0x1d,-0xc(%ebp)
084e6fb2 +0x130:  jg     084e6fbb <+0x139>
084e6fb4 +0x132:  mov    $0x1,%eax
084e6fb9 +0x137:  jmp    084e6fc0 <+0x13e>
084e6fbb +0x139:  mov    $0x0,%eax
084e6fc0 +0x13e:  test   %al,%al
084e6fc2 +0x140:  jne    084e6ed7 <+0x55>
084e6fc8 +0x146:  movl   $0x1,0x4(%esp)
084e6fd0 +0x14e:  lea    -0x1c(%ebp),%eax
084e6fd3 +0x151:  mov    %eax,(%esp)
084e6fd6 +0x154:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e6fdb +0x159:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e6fe0 +0x15e:  lea    -0x1c(%ebp),%edx
084e6fe3 +0x161:  mov    %edx,0x4(%esp)
084e6fe7 +0x165:  mov    %eax,(%esp)
084e6fea +0x168:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084e6fef +0x16d:  mov    $0x0,%ebx
084e6ff4 +0x172:  lea    -0x1c(%ebp),%eax
084e6ff7 +0x175:  mov    %eax,(%esp)
084e6ffa +0x178:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6fff +0x17d:  mov    %ebx,%eax
084e7001 +0x17f:  add    $0x30,%esp
084e7004 +0x182:  pop    %ebx
084e7005 +0x183:  pop    %esi
084e7006 +0x184:  pop    %ebp
084e7007 +0x185:  ret
084e7008 +0x186:  mov    %edx,%ebx
084e700a +0x188:  mov    %eax,%esi
084e700c +0x18a:  lea    -0x1c(%ebp),%eax
084e700f +0x18d:  mov    %eax,(%esp)
084e7012 +0x190:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e7017 +0x195:  mov    %esi,%eax
084e7019 +0x197:  mov    %ebx,%edx
084e701b +0x199:  mov    %eax,(%esp)
084e701e +0x19c:  call   08ae3750 <_Unwind_Resume>
084e7023 +0x1a1:  nop
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfoRenew::dispatch_sig @ 0x84e6e82

/* Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  GameWorld *this;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e6eb1 to 084e6fee has its CatchHandler @ 084e7008 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x193);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
  local_10 = 0;
  while( true ) {
    if ((local_10 < *(int *)(local_14 + 10)) && (local_10 < 0x1e)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_20,*(int *)(local_10 * 0xc + 0xe + local_14));
    if (*(int *)(local_10 * 0xc + 0x12 + local_14) == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    }
    else if (*(uint *)(local_10 * 0xc + 0x16 + local_14) <
             *(uint *)(local_10 * 0xc + 0x12 + local_14)) {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_20,
                 *(int *)(local_10 * 0xc + 0x12 + local_14) -
                 *(int *)(local_10 * 0xc + 0x16 + local_14));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    }
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_20);
  PacketGuard::~PacketGuard(local_20);
  return 0;
}
```
