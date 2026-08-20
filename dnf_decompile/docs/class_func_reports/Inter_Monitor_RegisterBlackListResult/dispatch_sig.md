# dispatch_sig

`_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci`

`Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_RegisterBlackListResult` | `0x084d0de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0de0  _ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci
#           Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int)
# range [0x084d0de0, 0x084d1033]
084d0de0 +0x000:  push   %ebp
084d0de1 +0x001:  mov    %esp,%ebp
084d0de3 +0x003:  push   %esi
084d0de4 +0x004:  push   %ebx
084d0de5 +0x005:  sub    $0x40,%esp
084d0de8 +0x008:  mov    0xc(%ebp),%eax
084d0deb +0x00b:  mov    %eax,(%esp)
084d0dee +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d0df3 +0x013:  test   %eax,%eax
084d0df5 +0x015:  sete   %al
084d0df8 +0x018:  test   %al,%al
084d0dfa +0x01a:  je     084d0e06 <+0x26>
084d0dfc +0x01c:  mov    $0x0,%ebx
084d0e01 +0x021:  jmp    084d102a <+0x24a>
084d0e06 +0x026:  mov    0x10(%ebp),%eax
084d0e09 +0x029:  mov    %eax,-0x10(%ebp)
084d0e0c +0x02c:  lea    -0x1c(%ebp),%eax
084d0e0f +0x02f:  mov    %eax,(%esp)
084d0e12 +0x032:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d0e17 +0x037:  movl   $0x79,0x8(%esp)
084d0e1f +0x03f:  movl   $0x1,0x4(%esp)
084d0e27 +0x047:  lea    -0x1c(%ebp),%eax
084d0e2a +0x04a:  mov    %eax,(%esp)
084d0e2d +0x04d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d0e32 +0x052:  mov    -0x10(%ebp),%eax
084d0e35 +0x055:  movzbl 0x30(%eax),%eax
084d0e39 +0x059:  cmp    $0x1,%al
084d0e3b +0x05b:  jne    084d0ecc <+0xec>
084d0e41 +0x061:  mov    -0x10(%ebp),%eax
084d0e44 +0x064:  mov    0x2c(%eax),%eax
084d0e47 +0x067:  mov    %eax,0x4(%esp)
084d0e4b +0x06b:  mov    0xc(%ebp),%eax
084d0e4e +0x06e:  mov    %eax,(%esp)
084d0e51 +0x071:  call   0867efae <_ZN5CUser19registerToBlackListEj>  ; CUser::registerToBlackList(unsigned int)
084d0e56 +0x076:  xor    $0x1,%eax
084d0e59 +0x079:  test   %al,%al
084d0e5b +0x07b:  je     084d0eb4 <+0xd4>
084d0e5d +0x07d:  movl   $"_BLACK_LIST_ :: false == pUser->registerToBlackList( recv->m_uCharacNo )",0x10(%esp)
084d0e65 +0x085:  movl   $0x2f90,0xc(%esp)
084d0e6d +0x08d:  movl   $&_ZZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d0e75 +0x095:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d0e7d +0x09d:  movl   $0x1,(%esp)
084d0e84 +0x0a4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d0e89 +0x0a9:  movl   $0x0,0x4(%esp)
084d0e91 +0x0b1:  lea    -0x1c(%ebp),%eax
084d0e94 +0x0b4:  mov    %eax,(%esp)
084d0e97 +0x0b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0e9c +0x0bc:  movl   $0x4a,0x4(%esp)
084d0ea4 +0x0c4:  lea    -0x1c(%ebp),%eax
084d0ea7 +0x0c7:  mov    %eax,(%esp)
084d0eaa +0x0ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0eaf +0x0cf:  jmp    084d0f99 <+0x1b9>
084d0eb4 +0x0d4:  movl   $0x1,0x4(%esp)
084d0ebc +0x0dc:  lea    -0x1c(%ebp),%eax
084d0ebf +0x0df:  mov    %eax,(%esp)
084d0ec2 +0x0e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0ec7 +0x0e7:  jmp    084d0f99 <+0x1b9>
084d0ecc +0x0ec:  mov    -0x10(%ebp),%eax
084d0ecf +0x0ef:  movzbl 0x30(%eax),%eax
084d0ed3 +0x0f3:  cmp    $0x2,%al
084d0ed5 +0x0f5:  jne    084d0f02 <+0x122>
084d0ed7 +0x0f7:  movl   $0x0,0x4(%esp)
084d0edf +0x0ff:  lea    -0x1c(%ebp),%eax
084d0ee2 +0x102:  mov    %eax,(%esp)
084d0ee5 +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0eea +0x10a:  movl   $0x4a,0x4(%esp)
084d0ef2 +0x112:  lea    -0x1c(%ebp),%eax
084d0ef5 +0x115:  mov    %eax,(%esp)
084d0ef8 +0x118:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0efd +0x11d:  jmp    084d0f99 <+0x1b9>
084d0f02 +0x122:  mov    -0x10(%ebp),%eax
084d0f05 +0x125:  movzbl 0x30(%eax),%eax
084d0f09 +0x129:  cmp    $0x3,%al
084d0f0b +0x12b:  jne    084d0f35 <+0x155>
084d0f0d +0x12d:  movl   $0x0,0x4(%esp)
084d0f15 +0x135:  lea    -0x1c(%ebp),%eax
084d0f18 +0x138:  mov    %eax,(%esp)
084d0f1b +0x13b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0f20 +0x140:  movl   $0x4c,0x4(%esp)
084d0f28 +0x148:  lea    -0x1c(%ebp),%eax
084d0f2b +0x14b:  mov    %eax,(%esp)
084d0f2e +0x14e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0f33 +0x153:  jmp    084d0f99 <+0x1b9>
084d0f35 +0x155:  mov    -0x10(%ebp),%eax
084d0f38 +0x158:  movzbl 0x30(%eax),%eax
084d0f3c +0x15c:  cmp    $0x4,%al
084d0f3e +0x15e:  jne    084d0f68 <+0x188>
084d0f40 +0x160:  movl   $0x0,0x4(%esp)
084d0f48 +0x168:  lea    -0x1c(%ebp),%eax
084d0f4b +0x16b:  mov    %eax,(%esp)
084d0f4e +0x16e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0f53 +0x173:  movl   $0x4e,0x4(%esp)
084d0f5b +0x17b:  lea    -0x1c(%ebp),%eax
084d0f5e +0x17e:  mov    %eax,(%esp)
084d0f61 +0x181:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0f66 +0x186:  jmp    084d0f99 <+0x1b9>
084d0f68 +0x188:  mov    -0x10(%ebp),%eax
084d0f6b +0x18b:  movzbl 0x30(%eax),%eax
084d0f6f +0x18f:  cmp    $0x5,%al
084d0f71 +0x191:  jne    084d0f99 <+0x1b9>
084d0f73 +0x193:  movl   $0x0,0x4(%esp)
084d0f7b +0x19b:  lea    -0x1c(%ebp),%eax
084d0f7e +0x19e:  mov    %eax,(%esp)
084d0f81 +0x1a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d0f86 +0x1a6:  movl   $0x5a,0x4(%esp)
084d0f8e +0x1ae:  lea    -0x1c(%ebp),%eax
084d0f91 +0x1b1:  mov    %eax,(%esp)
084d0f94 +0x1b4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0f99 +0x1b9:  mov    -0x10(%ebp),%eax
084d0f9c +0x1bc:  add    $0xe,%eax
084d0f9f +0x1bf:  mov    %eax,(%esp)
084d0fa2 +0x1c2:  call   0807e3b0 <_init+0xca8>
084d0fa7 +0x1c7:  mov    %eax,-0xc(%ebp)
084d0faa +0x1ca:  mov    -0xc(%ebp),%eax
084d0fad +0x1cd:  mov    %eax,0x4(%esp)
084d0fb1 +0x1d1:  lea    -0x1c(%ebp),%eax
084d0fb4 +0x1d4:  mov    %eax,(%esp)
084d0fb7 +0x1d7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d0fbc +0x1dc:  mov    -0x10(%ebp),%eax
084d0fbf +0x1df:  lea    0xe(%eax),%edx
084d0fc2 +0x1e2:  mov    -0xc(%ebp),%eax
084d0fc5 +0x1e5:  mov    %eax,0x8(%esp)
084d0fc9 +0x1e9:  mov    %edx,0x4(%esp)
084d0fcd +0x1ed:  lea    -0x1c(%ebp),%eax
084d0fd0 +0x1f0:  mov    %eax,(%esp)
084d0fd3 +0x1f3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d0fd8 +0x1f8:  movl   $0x1,0x4(%esp)
084d0fe0 +0x200:  lea    -0x1c(%ebp),%eax
084d0fe3 +0x203:  mov    %eax,(%esp)
084d0fe6 +0x206:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d0feb +0x20b:  lea    -0x1c(%ebp),%eax
084d0fee +0x20e:  mov    %eax,0x4(%esp)
084d0ff2 +0x212:  mov    0xc(%ebp),%eax
084d0ff5 +0x215:  mov    %eax,(%esp)
084d0ff8 +0x218:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d0ffd +0x21d:  mov    $0x0,%ebx
084d1002 +0x222:  lea    -0x1c(%ebp),%eax
084d1005 +0x225:  mov    %eax,(%esp)
084d1008 +0x228:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d100d +0x22d:  jmp    084d102a <+0x24a>
084d100f +0x22f:  mov    %edx,%ebx
084d1011 +0x231:  mov    %eax,%esi
084d1013 +0x233:  lea    -0x1c(%ebp),%eax
084d1016 +0x236:  mov    %eax,(%esp)
084d1019 +0x239:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d101e +0x23e:  mov    %esi,%eax
084d1020 +0x240:  mov    %ebx,%edx
084d1022 +0x242:  mov    %eax,(%esp)
084d1025 +0x245:  call   08ae3750 <_Unwind_Resume>
084d102a +0x24a:  mov    %ebx,%eax
084d102c +0x24c:  add    $0x40,%esp
084d102f +0x24f:  pop    %ebx
084d1030 +0x250:  pop    %esi
084d1031 +0x251:  pop    %ebp
084d1032 +0x252:  ret
084d1033 +0x253:  nop
```

## 反编译 C

```c
// Inter_Monitor_RegisterBlackListResult::dispatch_sig @ 0x84d0de0

/* Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d0e2d to 084d0ffc has its CatchHandler @ 084d100f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x79);
    if (*(char *)(local_14 + 0x30) == '\x01') {
      cVar1 = CUser::registerToBlackList((CUser *)param_2,*(uint *)(local_14 + 0x2c));
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int)"
                   ,0x2f90,
                   "_BLACK_LIST_ :: false == pUser->registerToBlackList( recv->m_uCharacNo )");
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4a);
      }
    }
    else if (*(char *)(local_14 + 0x30) == '\x02') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4a);
    }
    else if (*(char *)(local_14 + 0x30) == '\x03') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4c);
    }
    else if (*(char *)(local_14 + 0x30) == '\x04') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4e);
    }
    else if (*(char *)(local_14 + 0x30) == '\x05') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x5a);
    }
    local_10 = strlen((char *)(local_14 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0xe),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
