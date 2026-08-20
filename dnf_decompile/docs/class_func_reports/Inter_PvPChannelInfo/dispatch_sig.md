# dispatch_sig

`_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci`

`Inter_PvPChannelInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PvPChannelInfo` | `0x084d8096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d8096  _ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci
#           Inter_PvPChannelInfo::dispatch_sig(CUser*, char*, int)
# range [0x084d8096, 0x084d8261]
084d8096 +0x000:  push   %ebp
084d8097 +0x001:  mov    %esp,%ebp
084d8099 +0x003:  push   %esi
084d809a +0x004:  push   %ebx
084d809b +0x005:  sub    $0x30,%esp
084d809e +0x008:  cmpl   $0x0,0xc(%ebp)
084d80a2 +0x00c:  jne    084d80ae <+0x18>
084d80a4 +0x00e:  mov    $0x0,%ebx
084d80a9 +0x013:  jmp    084d8259 <+0x1c3>
084d80ae +0x018:  mov    0x10(%ebp),%eax
084d80b1 +0x01b:  mov    %eax,-0x10(%ebp)
084d80b4 +0x01e:  mov    0xc(%ebp),%eax
084d80b7 +0x021:  mov    %eax,(%esp)
084d80ba +0x024:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d80bf +0x029:  test   %eax,%eax
084d80c1 +0x02b:  je     084d80d8 <+0x42>
084d80c3 +0x02d:  mov    0xc(%ebp),%eax
084d80c6 +0x030:  mov    %eax,(%esp)
084d80c9 +0x033:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d80ce +0x038:  mov    -0x10(%ebp),%edx
084d80d1 +0x03b:  mov    0xa(%edx),%edx
084d80d4 +0x03e:  cmp    %edx,%eax
084d80d6 +0x040:  je     084d80df <+0x49>
084d80d8 +0x042:  mov    $0x1,%eax
084d80dd +0x047:  jmp    084d80e4 <+0x4e>
084d80df +0x049:  mov    $0x0,%eax
084d80e4 +0x04e:  test   %al,%al
084d80e6 +0x050:  je     084d80f2 <+0x5c>
084d80e8 +0x052:  mov    $0x0,%ebx
084d80ed +0x057:  jmp    084d8259 <+0x1c3>
084d80f2 +0x05c:  lea    -0x1c(%ebp),%eax
084d80f5 +0x05f:  mov    %eax,(%esp)
084d80f8 +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d80fd +0x067:  movl   $0xc6,0x8(%esp)
084d8105 +0x06f:  movl   $0x1,0x4(%esp)
084d810d +0x077:  lea    -0x1c(%ebp),%eax
084d8110 +0x07a:  mov    %eax,(%esp)
084d8113 +0x07d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d8118 +0x082:  movl   $0x1,0x4(%esp)
084d8120 +0x08a:  lea    -0x1c(%ebp),%eax
084d8123 +0x08d:  mov    %eax,(%esp)
084d8126 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d812b +0x095:  mov    -0x10(%ebp),%eax
084d812e +0x098:  mov    0x12(%eax),%eax
084d8131 +0x09b:  mov    %eax,0x4(%esp)
084d8135 +0x09f:  lea    -0x1c(%ebp),%eax
084d8138 +0x0a2:  mov    %eax,(%esp)
084d813b +0x0a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d8140 +0x0aa:  mov    -0x10(%ebp),%eax
084d8143 +0x0ad:  movzbl 0x17(%eax),%eax
084d8147 +0x0b1:  movzbl %al,%eax
084d814a +0x0b4:  mov    %eax,0x4(%esp)
084d814e +0x0b8:  lea    -0x1c(%ebp),%eax
084d8151 +0x0bb:  mov    %eax,(%esp)
084d8154 +0x0be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d8159 +0x0c3:  movl   $0x0,-0xc(%ebp)
084d8160 +0x0ca:  jmp    084d81ef <+0x159>
084d8165 +0x0cf:  mov    -0xc(%ebp),%edx
084d8168 +0x0d2:  mov    -0x10(%ebp),%eax
084d816b +0x0d5:  add    $0x1,%edx
084d816e +0x0d8:  shl    $0x4,%edx
084d8171 +0x0db:  mov    0x8(%edx,%eax,1),%eax
084d8175 +0x0df:  mov    %eax,0x4(%esp)
084d8179 +0x0e3:  lea    -0x1c(%ebp),%eax
084d817c +0x0e6:  mov    %eax,(%esp)
084d817f +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d8184 +0x0ee:  mov    -0xc(%ebp),%edx
084d8187 +0x0f1:  mov    -0x10(%ebp),%eax
084d818a +0x0f4:  add    $0x1,%edx
084d818d +0x0f7:  shl    $0x4,%edx
084d8190 +0x0fa:  mov    0xc(%edx,%eax,1),%eax
084d8194 +0x0fe:  mov    %eax,0x4(%esp)
084d8198 +0x102:  lea    -0x1c(%ebp),%eax
084d819b +0x105:  mov    %eax,(%esp)
084d819e +0x108:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d81a3 +0x10d:  mov    -0xc(%ebp),%edx
084d81a6 +0x110:  mov    -0x10(%ebp),%eax
084d81a9 +0x113:  add    $0x1,%edx
084d81ac +0x116:  shl    $0x4,%edx
084d81af +0x119:  mov    0x14(%edx,%eax,1),%eax
084d81b3 +0x11d:  cmp    $0x2,%eax
084d81b6 +0x120:  jne    084d81cc <+0x136>
084d81b8 +0x122:  mov    -0xc(%ebp),%edx
084d81bb +0x125:  mov    -0x10(%ebp),%eax
084d81be +0x128:  add    $0x1,%edx
084d81c1 +0x12b:  shl    $0x4,%edx
084d81c4 +0x12e:  movl   $0x4,0x10(%edx,%eax,1)
084d81cc +0x136:  mov    -0xc(%ebp),%edx
084d81cf +0x139:  mov    -0x10(%ebp),%eax
084d81d2 +0x13c:  add    $0x1,%edx
084d81d5 +0x13f:  shl    $0x4,%edx
084d81d8 +0x142:  mov    0x10(%edx,%eax,1),%eax
084d81dc +0x146:  mov    %eax,0x4(%esp)
084d81e0 +0x14a:  lea    -0x1c(%ebp),%eax
084d81e3 +0x14d:  mov    %eax,(%esp)
084d81e6 +0x150:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d81eb +0x155:  addl   $0x1,-0xc(%ebp)
084d81ef +0x159:  mov    -0x10(%ebp),%eax
084d81f2 +0x15c:  movzbl 0x17(%eax),%eax
084d81f6 +0x160:  movzbl %al,%eax
084d81f9 +0x163:  cmp    -0xc(%ebp),%eax
084d81fc +0x166:  setg   %al
084d81ff +0x169:  test   %al,%al
084d8201 +0x16b:  jne    084d8165 <+0xcf>
084d8207 +0x171:  movl   $0x1,0x4(%esp)
084d820f +0x179:  lea    -0x1c(%ebp),%eax
084d8212 +0x17c:  mov    %eax,(%esp)
084d8215 +0x17f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d821a +0x184:  lea    -0x1c(%ebp),%eax
084d821d +0x187:  mov    %eax,0x4(%esp)
084d8221 +0x18b:  mov    0xc(%ebp),%eax
084d8224 +0x18e:  mov    %eax,(%esp)
084d8227 +0x191:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d822c +0x196:  mov    $0x0,%ebx
084d8231 +0x19b:  lea    -0x1c(%ebp),%eax
084d8234 +0x19e:  mov    %eax,(%esp)
084d8237 +0x1a1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d823c +0x1a6:  jmp    084d8259 <+0x1c3>
084d823e +0x1a8:  mov    %edx,%ebx
084d8240 +0x1aa:  mov    %eax,%esi
084d8242 +0x1ac:  lea    -0x1c(%ebp),%eax
084d8245 +0x1af:  mov    %eax,(%esp)
084d8248 +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d824d +0x1b7:  mov    %esi,%eax
084d824f +0x1b9:  mov    %ebx,%edx
084d8251 +0x1bb:  mov    %eax,(%esp)
084d8254 +0x1be:  call   08ae3750 <_Unwind_Resume>
084d8259 +0x1c3:  mov    %ebx,%eax
084d825b +0x1c5:  add    $0x30,%esp
084d825e +0x1c8:  pop    %ebx
084d825f +0x1c9:  pop    %esi
084d8260 +0x1ca:  pop    %ebp
084d8261 +0x1cb:  ret
```

## 反编译 C

```c
// Inter_PvPChannelInfo::dispatch_sig @ 0x84d8096

/* Inter_PvPChannelInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPChannelInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = param_3;
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar2 == 0) ||
       (iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
       iVar2 != *(int *)(local_14 + 10))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d8113 to 084d822b has its CatchHandler @ 084d823e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xc6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x17));
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_14 + 0x17); local_10 = local_10 + 1)
      {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 8 + local_14));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 0xc + local_14));
        if (*(int *)((local_10 + 1) * 0x10 + 0x14 + local_14) == 2) {
          *(undefined4 *)((local_10 + 1) * 0x10 + 0x10 + local_14) = 4;
        }
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 0x10 + local_14))
        ;
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```
