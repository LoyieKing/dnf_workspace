# dispatch_sig

`_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci`

`Inter_MultiMailBoxReqSend::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MultiMailBoxReqSend` | `0x084e27b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e27b8  _ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci
#           Inter_MultiMailBoxReqSend::dispatch_sig(CUser*, char*, int)
# range [0x084e27b8, 0x084e2a05]
084e27b8 +0x000:  push   %ebp
084e27b9 +0x001:  mov    %esp,%ebp
084e27bb +0x003:  push   %esi
084e27bc +0x004:  push   %ebx
084e27bd +0x005:  sub    $0x180,%esp
084e27c3 +0x00b:  mov    0xc(%ebp),%eax
084e27c6 +0x00e:  mov    %eax,(%esp)
084e27c9 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e27ce +0x016:  cmp    $0x2,%eax
084e27d1 +0x019:  setle  %al
084e27d4 +0x01c:  test   %al,%al
084e27d6 +0x01e:  je     084e27e2 <+0x2a>
084e27d8 +0x020:  mov    $0x0,%ebx
084e27dd +0x025:  jmp    084e29f9 <+0x241>
084e27e2 +0x02a:  mov    0x10(%ebp),%eax
084e27e5 +0x02d:  mov    %eax,-0x14(%ebp)
084e27e8 +0x030:  movl   $0x0,-0x10(%ebp)
084e27ef +0x037:  movl   $0x0,-0xc(%ebp)
084e27f6 +0x03e:  jmp    084e2956 <+0x19e>
084e27fb +0x043:  movl   $0x145,0x8(%esp)
084e2803 +0x04b:  movl   $0x0,0x4(%esp)
084e280b +0x053:  lea    -0x165(%ebp),%eax
084e2811 +0x059:  mov    %eax,(%esp)
084e2814 +0x05c:  call   0807dcc0 <_init+0x5b8>
084e2819 +0x061:  mov    -0x14(%ebp),%eax
084e281c +0x064:  mov    0x42(%eax),%eax
084e281f +0x067:  mov    %eax,-0x158(%ebp)
084e2825 +0x06d:  mov    -0x158(%ebp),%eax
084e282b +0x073:  mov    %eax,%edx
084e282d +0x075:  mov    -0x14(%ebp),%eax
084e2830 +0x078:  add    $0x46,%eax
084e2833 +0x07b:  mov    %edx,0x8(%esp)
084e2837 +0x07f:  mov    %eax,0x4(%esp)
084e283b +0x083:  lea    -0x165(%ebp),%eax
084e2841 +0x089:  add    $0x11,%eax
084e2844 +0x08c:  mov    %eax,(%esp)
084e2847 +0x08f:  call   0807d8d0 <_init+0x1c8>
084e284c +0x094:  mov    -0x14(%ebp),%eax
084e284f +0x097:  mov    0x64(%eax),%eax
084e2852 +0x09a:  mov    %eax,-0x137(%ebp)
084e2858 +0x0a0:  mov    -0x14(%ebp),%eax
084e285b +0x0a3:  movl   $0x0,0x64(%eax)
084e2862 +0x0aa:  mov    -0xc(%ebp),%edx
084e2865 +0x0ad:  mov    -0x14(%ebp),%ecx
084e2868 +0x0b0:  mov    %edx,%eax
084e286a +0x0b2:  shl    $0x2,%eax
084e286d +0x0b5:  add    %edx,%eax
084e286f +0x0b7:  add    %eax,%eax
084e2871 +0x0b9:  add    %edx,%eax
084e2873 +0x0bb:  lea    (%ecx,%eax,1),%eax
084e2876 +0x0be:  add    $0x69,%eax
084e2879 +0x0c1:  movzbl (%eax),%eax
084e287c +0x0c4:  mov    %al,-0x12f(%ebp)
084e2882 +0x0ca:  mov    -0xc(%ebp),%edx
084e2885 +0x0cd:  mov    -0x14(%ebp),%ecx
084e2888 +0x0d0:  mov    %edx,%eax
084e288a +0x0d2:  shl    $0x2,%eax
084e288d +0x0d5:  add    %edx,%eax
084e288f +0x0d7:  add    %eax,%eax
084e2891 +0x0d9:  add    %edx,%eax
084e2893 +0x0db:  lea    (%ecx,%eax,1),%eax
084e2896 +0x0de:  add    $0x60,%eax
084e2899 +0x0e1:  movzwl 0xa(%eax),%eax
084e289d +0x0e5:  mov    %ax,-0x12e(%ebp)
084e28a4 +0x0ec:  mov    -0xc(%ebp),%edx
084e28a7 +0x0ef:  mov    -0x14(%ebp),%ecx
084e28aa +0x0f2:  mov    %edx,%eax
084e28ac +0x0f4:  shl    $0x2,%eax
084e28af +0x0f7:  add    %edx,%eax
084e28b1 +0x0f9:  add    %eax,%eax
084e28b3 +0x0fb:  add    %edx,%eax
084e28b5 +0x0fd:  lea    (%ecx,%eax,1),%eax
084e28b8 +0x100:  add    $0x60,%eax
084e28bb +0x103:  mov    0xc(%eax),%eax
084e28be +0x106:  mov    %eax,-0x12c(%ebp)
084e28c4 +0x10c:  mov    -0xc(%ebp),%edx
084e28c7 +0x10f:  mov    -0x14(%ebp),%ecx
084e28ca +0x112:  mov    %edx,%eax
084e28cc +0x114:  shl    $0x2,%eax
084e28cf +0x117:  add    %edx,%eax
084e28d1 +0x119:  add    %eax,%eax
084e28d3 +0x11b:  add    %edx,%eax
084e28d5 +0x11d:  lea    (%ecx,%eax,1),%eax
084e28d8 +0x120:  add    $0x60,%eax
084e28db +0x123:  mov    0x10(%eax),%eax
084e28de +0x126:  mov    %eax,-0x128(%ebp)
084e28e4 +0x12c:  mov    -0x14(%ebp),%eax
084e28e7 +0x12f:  mov    0x3fbd(%eax),%ecx
084e28ed +0x135:  mov    -0x14(%ebp),%eax
084e28f0 +0x138:  mov    0x29(%eax),%edx
084e28f3 +0x13b:  mov    -0x14(%ebp),%eax
084e28f6 +0x13e:  mov    0x1d(%eax),%eax
084e28f9 +0x141:  mov    %ecx,0x14(%esp)
084e28fd +0x145:  mov    %edx,0x10(%esp)
084e2901 +0x149:  movl   $0x0,0xc(%esp)
084e2909 +0x151:  mov    %eax,0x8(%esp)
084e290d +0x155:  lea    -0x165(%ebp),%eax
084e2913 +0x15b:  mov    %eax,0x4(%esp)
084e2917 +0x15f:  mov    0xc(%ebp),%eax
084e291a +0x162:  mov    %eax,(%esp)
084e291d +0x165:  call   08555b14 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool, unsigned int, int)
084e2922 +0x16a:  mov    %eax,-0x10(%ebp)
084e2925 +0x16d:  cmpl   $0x0,-0x10(%ebp)
084e2929 +0x171:  je     084e2952 <+0x19a>
084e292b +0x173:  mov    -0x10(%ebp),%eax
084e292e +0x176:  movzbl %al,%eax
084e2931 +0x179:  mov    %eax,0x8(%esp)
084e2935 +0x17d:  movl   $0x13c,0x4(%esp)
084e293d +0x185:  mov    0xc(%ebp),%eax
084e2940 +0x188:  mov    %eax,(%esp)
084e2943 +0x18b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e2948 +0x190:  mov    $0x0,%ebx
084e294d +0x195:  jmp    084e29f9 <+0x241>
084e2952 +0x19a:  addl   $0x1,-0xc(%ebp)
084e2956 +0x19e:  mov    -0x14(%ebp),%eax
084e2959 +0x1a1:  movzbl 0x68(%eax),%eax
084e295d +0x1a5:  movzbl %al,%eax
084e2960 +0x1a8:  cmp    -0xc(%ebp),%eax
084e2963 +0x1ab:  setg   %al
084e2966 +0x1ae:  test   %al,%al
084e2968 +0x1b0:  jne    084e27fb <+0x43>
084e296e +0x1b6:  lea    -0x20(%ebp),%eax
084e2971 +0x1b9:  mov    %eax,(%esp)
084e2974 +0x1bc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e2979 +0x1c1:  movl   $0x13c,0x8(%esp)
084e2981 +0x1c9:  movl   $0x1,0x4(%esp)
084e2989 +0x1d1:  lea    -0x20(%ebp),%eax
084e298c +0x1d4:  mov    %eax,(%esp)
084e298f +0x1d7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e2994 +0x1dc:  movl   $0x1,0x4(%esp)
084e299c +0x1e4:  lea    -0x20(%ebp),%eax
084e299f +0x1e7:  mov    %eax,(%esp)
084e29a2 +0x1ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e29a7 +0x1ef:  movl   $0x1,0x4(%esp)
084e29af +0x1f7:  lea    -0x20(%ebp),%eax
084e29b2 +0x1fa:  mov    %eax,(%esp)
084e29b5 +0x1fd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e29ba +0x202:  lea    -0x20(%ebp),%eax
084e29bd +0x205:  mov    %eax,0x4(%esp)
084e29c1 +0x209:  mov    0xc(%ebp),%eax
084e29c4 +0x20c:  mov    %eax,(%esp)
084e29c7 +0x20f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e29cc +0x214:  mov    $0x0,%ebx
084e29d1 +0x219:  lea    -0x20(%ebp),%eax
084e29d4 +0x21c:  mov    %eax,(%esp)
084e29d7 +0x21f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e29dc +0x224:  jmp    084e29f9 <+0x241>
084e29de +0x226:  mov    %edx,%ebx
084e29e0 +0x228:  mov    %eax,%esi
084e29e2 +0x22a:  lea    -0x20(%ebp),%eax
084e29e5 +0x22d:  mov    %eax,(%esp)
084e29e8 +0x230:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e29ed +0x235:  mov    %esi,%eax
084e29ef +0x237:  mov    %ebx,%edx
084e29f1 +0x239:  mov    %eax,(%esp)
084e29f4 +0x23c:  call   08ae3750 <_Unwind_Resume>
084e29f9 +0x241:  mov    %ebx,%eax
084e29fb +0x243:  add    $0x180,%esp
084e2a01 +0x249:  pop    %ebx
084e2a02 +0x24a:  pop    %esi
084e2a03 +0x24b:  pop    %ebp
084e2a04 +0x24c:  ret
084e2a05 +0x24d:  nop
```

## 反编译 C

```c
// Inter_MultiMailBoxReqSend::dispatch_sig @ 0x84e27b8

/* Inter_MultiMailBoxReqSend::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MultiMailBoxReqSend::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  MSG_MAILBOX_SEND local_169 [13];
  size_t local_15c;
  char acStack_158 [29];
  undefined4 local_13b;
  undefined1 local_133;
  undefined2 local_132;
  undefined4 local_130;
  undefined4 local_12c;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_18 = param_3;
    for (local_10 = 0; local_14 = 0, local_10 < (int)(uint)*(byte *)(local_18 + 0x68);
        local_10 = local_10 + 1) {
      memset(local_169,0,0x145);
      local_15c = *(size_t *)(local_18 + 0x42);
      strncpy(acStack_158,(char *)(local_18 + 0x46),local_15c);
      local_13b = *(undefined4 *)(local_18 + 100);
      *(undefined4 *)(local_18 + 100) = 0;
      local_133 = *(undefined1 *)(local_18 + local_10 * 0xb + 0x69);
      local_132 = *(undefined2 *)(local_18 + local_10 * 0xb + 0x6a);
      local_130 = *(undefined4 *)(local_18 + local_10 * 0xb + 0x6c);
      local_12c = *(undefined4 *)(local_18 + local_10 * 0xb + 0x70);
      local_14 = WongWork::CMailBoxHelper::ReqDBSendNewMail
                           ((CUser *)param_2,local_169,*(uint *)(local_18 + 0x1d),false,
                            *(uint *)(local_18 + 0x29),*(int *)(local_18 + 0x3fbd));
      if (local_14 != 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,local_14 & 0xff);
        return 0;
      }
    }
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e298f to 084e29cb has its CatchHandler @ 084e29de */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x13c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send((CUser *)param_2,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}
```
