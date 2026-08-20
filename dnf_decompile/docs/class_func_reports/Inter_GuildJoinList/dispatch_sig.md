# dispatch_sig

`_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci`

`Inter_GuildJoinList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildJoinList` | `0x084e3c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3c60  _ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci
#           Inter_GuildJoinList::dispatch_sig(CUser*, char*, int)
# range [0x084e3c60, 0x084e3f0d]
084e3c60 +0x000:  push   %ebp
084e3c61 +0x001:  mov    %esp,%ebp
084e3c63 +0x003:  push   %esi
084e3c64 +0x004:  push   %ebx
084e3c65 +0x005:  sub    $0x30,%esp
084e3c68 +0x008:  mov    0xc(%ebp),%eax
084e3c6b +0x00b:  mov    %eax,(%esp)
084e3c6e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e3c73 +0x013:  cmp    $0x2,%eax
084e3c76 +0x016:  setle  %al
084e3c79 +0x019:  test   %al,%al
084e3c7b +0x01b:  je     084e3c87 <+0x27>
084e3c7d +0x01d:  mov    $0x0,%ebx
084e3c82 +0x022:  jmp    084e3f05 <+0x2a5>
084e3c87 +0x027:  mov    0x10(%ebp),%eax
084e3c8a +0x02a:  mov    %eax,-0x18(%ebp)
084e3c8d +0x02d:  lea    -0x24(%ebp),%eax
084e3c90 +0x030:  mov    %eax,(%esp)
084e3c93 +0x033:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3c98 +0x038:  movl   $0x161,0x8(%esp)
084e3ca0 +0x040:  movl   $0x1,0x4(%esp)
084e3ca8 +0x048:  lea    -0x24(%ebp),%eax
084e3cab +0x04b:  mov    %eax,(%esp)
084e3cae +0x04e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3cb3 +0x053:  movl   $0x1,0x4(%esp)
084e3cbb +0x05b:  lea    -0x24(%ebp),%eax
084e3cbe +0x05e:  mov    %eax,(%esp)
084e3cc1 +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3cc6 +0x066:  mov    -0x18(%ebp),%eax
084e3cc9 +0x069:  mov    (%eax),%eax
084e3ccb +0x06b:  mov    %eax,0x4(%esp)
084e3ccf +0x06f:  lea    -0x24(%ebp),%eax
084e3cd2 +0x072:  mov    %eax,(%esp)
084e3cd5 +0x075:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3cda +0x07a:  movl   $0x0,-0x14(%ebp)
084e3ce1 +0x081:  jmp    084e3ea0 <+0x240>
084e3ce6 +0x086:  mov    -0x14(%ebp),%eax
084e3ce9 +0x089:  mov    -0x18(%ebp),%edx
084e3cec +0x08c:  shl    $0x2,%eax
084e3cef +0x08f:  mov    %eax,%ecx
084e3cf1 +0x091:  shl    $0x4,%ecx
084e3cf4 +0x094:  add    %ecx,%eax
084e3cf6 +0x096:  lea    (%edx,%eax,1),%eax
084e3cf9 +0x099:  add    $0x4,%eax
084e3cfc +0x09c:  mov    (%eax),%eax
084e3cfe +0x09e:  mov    %eax,0x4(%esp)
084e3d02 +0x0a2:  lea    -0x24(%ebp),%eax
084e3d05 +0x0a5:  mov    %eax,(%esp)
084e3d08 +0x0a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3d0d +0x0ad:  mov    -0x14(%ebp),%eax
084e3d10 +0x0b0:  shl    $0x2,%eax
084e3d13 +0x0b3:  mov    %eax,%edx
084e3d15 +0x0b5:  shl    $0x4,%edx
084e3d18 +0x0b8:  add    %edx,%eax
084e3d1a +0x0ba:  add    -0x18(%ebp),%eax
084e3d1d +0x0bd:  add    $0x8,%eax
084e3d20 +0x0c0:  mov    %eax,(%esp)
084e3d23 +0x0c3:  call   0807e3b0 <_init+0xca8>
084e3d28 +0x0c8:  mov    %eax,-0x10(%ebp)
084e3d2b +0x0cb:  mov    -0x10(%ebp),%eax
084e3d2e +0x0ce:  mov    %eax,0x4(%esp)
084e3d32 +0x0d2:  lea    -0x24(%ebp),%eax
084e3d35 +0x0d5:  mov    %eax,(%esp)
084e3d38 +0x0d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3d3d +0x0dd:  mov    -0x14(%ebp),%eax
084e3d40 +0x0e0:  shl    $0x2,%eax
084e3d43 +0x0e3:  mov    %eax,%edx
084e3d45 +0x0e5:  shl    $0x4,%edx
084e3d48 +0x0e8:  add    %edx,%eax
084e3d4a +0x0ea:  add    -0x18(%ebp),%eax
084e3d4d +0x0ed:  lea    0x8(%eax),%edx
084e3d50 +0x0f0:  mov    -0x10(%ebp),%eax
084e3d53 +0x0f3:  mov    %eax,0x8(%esp)
084e3d57 +0x0f7:  mov    %edx,0x4(%esp)
084e3d5b +0x0fb:  lea    -0x24(%ebp),%eax
084e3d5e +0x0fe:  mov    %eax,(%esp)
084e3d61 +0x101:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3d66 +0x106:  mov    -0x14(%ebp),%eax
084e3d69 +0x109:  mov    -0x18(%ebp),%edx
084e3d6c +0x10c:  shl    $0x2,%eax
084e3d6f +0x10f:  mov    %eax,%ecx
084e3d71 +0x111:  shl    $0x4,%ecx
084e3d74 +0x114:  add    %ecx,%eax
084e3d76 +0x116:  lea    (%edx,%eax,1),%eax
084e3d79 +0x119:  add    $0x20,%eax
084e3d7c +0x11c:  movzbl 0x6(%eax),%eax
084e3d80 +0x120:  movsbl %al,%eax
084e3d83 +0x123:  mov    %eax,0x4(%esp)
084e3d87 +0x127:  lea    -0x24(%ebp),%eax
084e3d8a +0x12a:  mov    %eax,(%esp)
084e3d8d +0x12d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3d92 +0x132:  mov    -0x14(%ebp),%eax
084e3d95 +0x135:  mov    -0x18(%ebp),%edx
084e3d98 +0x138:  shl    $0x2,%eax
084e3d9b +0x13b:  mov    %eax,%ecx
084e3d9d +0x13d:  shl    $0x4,%ecx
084e3da0 +0x140:  add    %ecx,%eax
084e3da2 +0x142:  lea    (%edx,%eax,1),%eax
084e3da5 +0x145:  add    $0x20,%eax
084e3da8 +0x148:  movzbl 0x7(%eax),%eax
084e3dac +0x14c:  movsbl %al,%eax
084e3daf +0x14f:  mov    %eax,0x4(%esp)
084e3db3 +0x153:  lea    -0x24(%ebp),%eax
084e3db6 +0x156:  mov    %eax,(%esp)
084e3db9 +0x159:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3dbe +0x15e:  mov    -0x14(%ebp),%eax
084e3dc1 +0x161:  mov    -0x18(%ebp),%edx
084e3dc4 +0x164:  shl    $0x2,%eax
084e3dc7 +0x167:  mov    %eax,%ecx
084e3dc9 +0x169:  shl    $0x4,%ecx
084e3dcc +0x16c:  add    %ecx,%eax
084e3dce +0x16e:  lea    (%edx,%eax,1),%eax
084e3dd1 +0x171:  add    $0x20,%eax
084e3dd4 +0x174:  movzbl 0x9(%eax),%eax
084e3dd8 +0x178:  movsbl %al,%eax
084e3ddb +0x17b:  mov    %eax,0x4(%esp)
084e3ddf +0x17f:  lea    -0x24(%ebp),%eax
084e3de2 +0x182:  mov    %eax,(%esp)
084e3de5 +0x185:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3dea +0x18a:  mov    -0x14(%ebp),%eax
084e3ded +0x18d:  mov    -0x18(%ebp),%edx
084e3df0 +0x190:  shl    $0x2,%eax
084e3df3 +0x193:  mov    %eax,%ecx
084e3df5 +0x195:  shl    $0x4,%ecx
084e3df8 +0x198:  add    %ecx,%eax
084e3dfa +0x19a:  lea    (%edx,%eax,1),%eax
084e3dfd +0x19d:  add    $0x20,%eax
084e3e00 +0x1a0:  movzbl 0x8(%eax),%eax
084e3e04 +0x1a4:  movsbl %al,%eax
084e3e07 +0x1a7:  mov    %eax,0x4(%esp)
084e3e0b +0x1ab:  lea    -0x24(%ebp),%eax
084e3e0e +0x1ae:  mov    %eax,(%esp)
084e3e11 +0x1b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3e16 +0x1b6:  mov    -0x14(%ebp),%eax
084e3e19 +0x1b9:  shl    $0x2,%eax
084e3e1c +0x1bc:  mov    %eax,%edx
084e3e1e +0x1be:  shl    $0x4,%edx
084e3e21 +0x1c1:  add    %edx,%eax
084e3e23 +0x1c3:  add    $0x20,%eax
084e3e26 +0x1c6:  add    -0x18(%ebp),%eax
084e3e29 +0x1c9:  add    $0xa,%eax
084e3e2c +0x1cc:  mov    %eax,(%esp)
084e3e2f +0x1cf:  call   0807e3b0 <_init+0xca8>
084e3e34 +0x1d4:  mov    %eax,-0xc(%ebp)
084e3e37 +0x1d7:  mov    -0xc(%ebp),%eax
084e3e3a +0x1da:  mov    %eax,0x4(%esp)
084e3e3e +0x1de:  lea    -0x24(%ebp),%eax
084e3e41 +0x1e1:  mov    %eax,(%esp)
084e3e44 +0x1e4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3e49 +0x1e9:  mov    -0x14(%ebp),%eax
084e3e4c +0x1ec:  shl    $0x2,%eax
084e3e4f +0x1ef:  mov    %eax,%edx
084e3e51 +0x1f1:  shl    $0x4,%edx
084e3e54 +0x1f4:  add    %edx,%eax
084e3e56 +0x1f6:  add    $0x20,%eax
084e3e59 +0x1f9:  add    -0x18(%ebp),%eax
084e3e5c +0x1fc:  lea    0xa(%eax),%edx
084e3e5f +0x1ff:  mov    -0xc(%ebp),%eax
084e3e62 +0x202:  mov    %eax,0x8(%esp)
084e3e66 +0x206:  mov    %edx,0x4(%esp)
084e3e6a +0x20a:  lea    -0x24(%ebp),%eax
084e3e6d +0x20d:  mov    %eax,(%esp)
084e3e70 +0x210:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3e75 +0x215:  mov    -0x14(%ebp),%eax
084e3e78 +0x218:  mov    -0x18(%ebp),%edx
084e3e7b +0x21b:  shl    $0x2,%eax
084e3e7e +0x21e:  mov    %eax,%ecx
084e3e80 +0x220:  shl    $0x4,%ecx
084e3e83 +0x223:  add    %ecx,%eax
084e3e85 +0x225:  lea    (%edx,%eax,1),%eax
084e3e88 +0x228:  add    $0x44,%eax
084e3e8b +0x22b:  mov    (%eax),%eax
084e3e8d +0x22d:  mov    %eax,0x4(%esp)
084e3e91 +0x231:  lea    -0x24(%ebp),%eax
084e3e94 +0x234:  mov    %eax,(%esp)
084e3e97 +0x237:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3e9c +0x23c:  addl   $0x1,-0x14(%ebp)
084e3ea0 +0x240:  mov    -0x18(%ebp),%eax
084e3ea3 +0x243:  mov    (%eax),%eax
084e3ea5 +0x245:  cmp    -0x14(%ebp),%eax
084e3ea8 +0x248:  setg   %al
084e3eab +0x24b:  test   %al,%al
084e3ead +0x24d:  jne    084e3ce6 <+0x86>
084e3eb3 +0x253:  movl   $0x1,0x4(%esp)
084e3ebb +0x25b:  lea    -0x24(%ebp),%eax
084e3ebe +0x25e:  mov    %eax,(%esp)
084e3ec1 +0x261:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e3ec6 +0x266:  lea    -0x24(%ebp),%eax
084e3ec9 +0x269:  mov    %eax,0x4(%esp)
084e3ecd +0x26d:  mov    0xc(%ebp),%eax
084e3ed0 +0x270:  mov    %eax,(%esp)
084e3ed3 +0x273:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e3ed8 +0x278:  mov    $0x0,%ebx
084e3edd +0x27d:  lea    -0x24(%ebp),%eax
084e3ee0 +0x280:  mov    %eax,(%esp)
084e3ee3 +0x283:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3ee8 +0x288:  jmp    084e3f05 <+0x2a5>
084e3eea +0x28a:  mov    %edx,%ebx
084e3eec +0x28c:  mov    %eax,%esi
084e3eee +0x28e:  lea    -0x24(%ebp),%eax
084e3ef1 +0x291:  mov    %eax,(%esp)
084e3ef4 +0x294:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3ef9 +0x299:  mov    %esi,%eax
084e3efb +0x29b:  mov    %ebx,%edx
084e3efd +0x29d:  mov    %eax,(%esp)
084e3f00 +0x2a0:  call   08ae3750 <_Unwind_Resume>
084e3f05 +0x2a5:  mov    %ebx,%eax
084e3f07 +0x2a7:  add    $0x30,%esp
084e3f0a +0x2aa:  pop    %ebx
084e3f0b +0x2ab:  pop    %esi
084e3f0c +0x2ac:  pop    %ebp
084e3f0d +0x2ad:  ret
```

## 反编译 C

```c
// Inter_GuildJoinList::dispatch_sig @ 0x84e3c60

/* Inter_GuildJoinList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildJoinList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int *local_1c;
  int local_18;
  size_t local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_1c = (int *)param_3;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e3cae to 084e3ed7 has its CatchHandler @ 084e3eea */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x161);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*local_1c);
    for (local_18 = 0; local_18 < *local_1c; local_18 = local_18 + 1) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c[local_18 * 0x11 + 1]);
      local_14 = strlen((char *)(local_1c + local_18 * 0x11 + 2));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_28,(char *)(local_1c + local_18 * 0x11 + 2),local_14);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x26));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x27));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x29));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,(int)(char)local_1c[local_18 * 0x11 + 10]);
      local_10 = strlen((char *)((int)local_1c + local_18 * 0x44 + 0x2a));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_28,(char *)((int)local_1c + local_18 * 0x44 + 0x2a),
                 local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c[local_18 * 0x11 + 0x11]);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}
```
