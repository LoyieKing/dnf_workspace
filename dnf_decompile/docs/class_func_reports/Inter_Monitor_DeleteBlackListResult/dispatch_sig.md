# dispatch_sig

`_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci`

`Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Monitor_DeleteBlackListResult` | `0x084d1034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1034  _ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci
#           Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int)
# range [0x084d1034, 0x084d1217]
084d1034 +0x000:  push   %ebp
084d1035 +0x001:  mov    %esp,%ebp
084d1037 +0x003:  push   %esi
084d1038 +0x004:  push   %ebx
084d1039 +0x005:  sub    $0x40,%esp
084d103c +0x008:  mov    0xc(%ebp),%eax
084d103f +0x00b:  mov    %eax,(%esp)
084d1042 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d1047 +0x013:  test   %eax,%eax
084d1049 +0x015:  sete   %al
084d104c +0x018:  test   %al,%al
084d104e +0x01a:  je     084d105a <+0x26>
084d1050 +0x01c:  mov    $0x0,%ebx
084d1055 +0x021:  jmp    084d120f <+0x1db>
084d105a +0x026:  mov    0x10(%ebp),%eax
084d105d +0x029:  mov    %eax,-0x10(%ebp)
084d1060 +0x02c:  lea    -0x1c(%ebp),%eax
084d1063 +0x02f:  mov    %eax,(%esp)
084d1066 +0x032:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d106b +0x037:  movl   $0x7a,0x8(%esp)
084d1073 +0x03f:  movl   $0x1,0x4(%esp)
084d107b +0x047:  lea    -0x1c(%ebp),%eax
084d107e +0x04a:  mov    %eax,(%esp)
084d1081 +0x04d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1086 +0x052:  mov    -0x10(%ebp),%eax
084d1089 +0x055:  movzbl 0x30(%eax),%eax
084d108d +0x059:  cmp    $0x1,%al
084d108f +0x05b:  jne    084d111a <+0xe6>
084d1095 +0x061:  mov    -0x10(%ebp),%eax
084d1098 +0x064:  mov    0x2c(%eax),%eax
084d109b +0x067:  mov    %eax,0x4(%esp)
084d109f +0x06b:  mov    0xc(%ebp),%eax
084d10a2 +0x06e:  mov    %eax,(%esp)
084d10a5 +0x071:  call   0867f040 <_ZN5CUser17deleteToBlackListEj>  ; CUser::deleteToBlackList(unsigned int)
084d10aa +0x076:  xor    $0x1,%eax
084d10ad +0x079:  test   %al,%al
084d10af +0x07b:  je     084d1105 <+0xd1>
084d10b1 +0x07d:  movl   $"_BLACK_LIST_ :: false == pUser->deleteToBlackList( recv->m_uCharacNo )",0x10(%esp)
084d10b9 +0x085:  movl   $0x2fd7,0xc(%esp)
084d10c1 +0x08d:  movl   $&_ZZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d10c9 +0x095:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d10d1 +0x09d:  movl   $0x1,(%esp)
084d10d8 +0x0a4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d10dd +0x0a9:  movl   $0x0,0x4(%esp)
084d10e5 +0x0b1:  lea    -0x1c(%ebp),%eax
084d10e8 +0x0b4:  mov    %eax,(%esp)
084d10eb +0x0b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d10f0 +0x0bc:  movl   $0x4b,0x4(%esp)
084d10f8 +0x0c4:  lea    -0x1c(%ebp),%eax
084d10fb +0x0c7:  mov    %eax,(%esp)
084d10fe +0x0ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d1103 +0x0cf:  jmp    084d117e <+0x14a>
084d1105 +0x0d1:  movl   $0x1,0x4(%esp)
084d110d +0x0d9:  lea    -0x1c(%ebp),%eax
084d1110 +0x0dc:  mov    %eax,(%esp)
084d1113 +0x0df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1118 +0x0e4:  jmp    084d117e <+0x14a>
084d111a +0x0e6:  mov    -0x10(%ebp),%eax
084d111d +0x0e9:  movzbl 0x30(%eax),%eax
084d1121 +0x0ed:  cmp    $0x2,%al
084d1123 +0x0ef:  jne    084d114d <+0x119>
084d1125 +0x0f1:  movl   $0x0,0x4(%esp)
084d112d +0x0f9:  lea    -0x1c(%ebp),%eax
084d1130 +0x0fc:  mov    %eax,(%esp)
084d1133 +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1138 +0x104:  movl   $0x4b,0x4(%esp)
084d1140 +0x10c:  lea    -0x1c(%ebp),%eax
084d1143 +0x10f:  mov    %eax,(%esp)
084d1146 +0x112:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d114b +0x117:  jmp    084d117e <+0x14a>
084d114d +0x119:  mov    -0x10(%ebp),%eax
084d1150 +0x11c:  movzbl 0x30(%eax),%eax
084d1154 +0x120:  cmp    $0x3,%al
084d1156 +0x122:  jne    084d117e <+0x14a>
084d1158 +0x124:  movl   $0x0,0x4(%esp)
084d1160 +0x12c:  lea    -0x1c(%ebp),%eax
084d1163 +0x12f:  mov    %eax,(%esp)
084d1166 +0x132:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d116b +0x137:  movl   $0x4c,0x4(%esp)
084d1173 +0x13f:  lea    -0x1c(%ebp),%eax
084d1176 +0x142:  mov    %eax,(%esp)
084d1179 +0x145:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d117e +0x14a:  mov    -0x10(%ebp),%eax
084d1181 +0x14d:  add    $0xe,%eax
084d1184 +0x150:  mov    %eax,(%esp)
084d1187 +0x153:  call   0807e3b0 <_init+0xca8>
084d118c +0x158:  mov    %eax,-0xc(%ebp)
084d118f +0x15b:  mov    -0xc(%ebp),%eax
084d1192 +0x15e:  mov    %eax,0x4(%esp)
084d1196 +0x162:  lea    -0x1c(%ebp),%eax
084d1199 +0x165:  mov    %eax,(%esp)
084d119c +0x168:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d11a1 +0x16d:  mov    -0x10(%ebp),%eax
084d11a4 +0x170:  lea    0xe(%eax),%edx
084d11a7 +0x173:  mov    -0xc(%ebp),%eax
084d11aa +0x176:  mov    %eax,0x8(%esp)
084d11ae +0x17a:  mov    %edx,0x4(%esp)
084d11b2 +0x17e:  lea    -0x1c(%ebp),%eax
084d11b5 +0x181:  mov    %eax,(%esp)
084d11b8 +0x184:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d11bd +0x189:  movl   $0x1,0x4(%esp)
084d11c5 +0x191:  lea    -0x1c(%ebp),%eax
084d11c8 +0x194:  mov    %eax,(%esp)
084d11cb +0x197:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d11d0 +0x19c:  lea    -0x1c(%ebp),%eax
084d11d3 +0x19f:  mov    %eax,0x4(%esp)
084d11d7 +0x1a3:  mov    0xc(%ebp),%eax
084d11da +0x1a6:  mov    %eax,(%esp)
084d11dd +0x1a9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d11e2 +0x1ae:  mov    $0x0,%ebx
084d11e7 +0x1b3:  lea    -0x1c(%ebp),%eax
084d11ea +0x1b6:  mov    %eax,(%esp)
084d11ed +0x1b9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d11f2 +0x1be:  jmp    084d120f <+0x1db>
084d11f4 +0x1c0:  mov    %edx,%ebx
084d11f6 +0x1c2:  mov    %eax,%esi
084d11f8 +0x1c4:  lea    -0x1c(%ebp),%eax
084d11fb +0x1c7:  mov    %eax,(%esp)
084d11fe +0x1ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1203 +0x1cf:  mov    %esi,%eax
084d1205 +0x1d1:  mov    %ebx,%edx
084d1207 +0x1d3:  mov    %eax,(%esp)
084d120a +0x1d6:  call   08ae3750 <_Unwind_Resume>
084d120f +0x1db:  mov    %ebx,%eax
084d1211 +0x1dd:  add    $0x40,%esp
084d1214 +0x1e0:  pop    %ebx
084d1215 +0x1e1:  pop    %esi
084d1216 +0x1e2:  pop    %ebp
084d1217 +0x1e3:  ret
```

## 反编译 C

```c
// Inter_Monitor_DeleteBlackListResult::dispatch_sig @ 0x84d1034

/* Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084d1081 to 084d11e1 has its CatchHandler @ 084d11f4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x7a);
    if (*(char *)(local_14 + 0x30) == '\x01') {
      cVar1 = CUser::deleteToBlackList((CUser *)param_2,*(uint *)(local_14 + 0x2c));
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int)"
                   ,0x2fd7,"_BLACK_LIST_ :: false == pUser->deleteToBlackList( recv->m_uCharacNo )")
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4b);
      }
    }
    else if (*(char *)(local_14 + 0x30) == '\x02') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4b);
    }
    else if (*(char *)(local_14 + 0x30) == '\x03') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4c);
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
