# SendActionClear

`_ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS`

`APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool, ENUM_PACKETCLASS)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x081223b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081223b4  _ZN8APSystem9CUserProc15SendActionClearER5CUsertNS_17_ActionGroupIndexEb16ENUM_PACKETCLASS
#           APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool, ENUM_PACKETCLASS)
# range [0x081223b4, 0x0812249f]
081223b4 +0x00:  push   %ebp
081223b5 +0x01:  mov    %esp,%ebp
081223b7 +0x03:  push   %esi
081223b8 +0x04:  push   %ebx
081223b9 +0x05:  sub    $0x40,%esp
081223bc +0x08:  mov    0xc(%ebp),%edx
081223bf +0x0b:  mov    0x14(%ebp),%eax
081223c2 +0x0e:  mov    %dx,-0x2c(%ebp)
081223c6 +0x12:  mov    %al,-0x30(%ebp)
081223c9 +0x15:  lea    -0x13(%ebp),%eax
081223cc +0x18:  mov    %eax,(%esp)
081223cf +0x1b:  call   08122aaa <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x1d>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x1d
081223d4 +0x20:  movzwl -0x2c(%ebp),%eax
081223d8 +0x24:  mov    %ax,-0xb(%ebp)
081223dc +0x28:  mov    0x10(%ebp),%eax
081223df +0x2b:  mov    %eax,-0x13(%ebp)
081223e2 +0x2e:  movzbl -0x30(%ebp),%eax
081223e6 +0x32:  mov    %al,-0x9(%ebp)
081223e9 +0x35:  lea    -0x20(%ebp),%eax
081223ec +0x38:  mov    %eax,(%esp)
081223ef +0x3b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081223f4 +0x40:  cmpl   $0x0,0x18(%ebp)
081223f8 +0x44:  jne    08122417 <+0x63>
081223fa +0x46:  movl   $0x1f3,0x8(%esp)
08122402 +0x4e:  movl   $0x0,0x4(%esp)
0812240a +0x56:  lea    -0x20(%ebp),%eax
0812240d +0x59:  mov    %eax,(%esp)
08122410 +0x5c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08122415 +0x61:  jmp    08122432 <+0x7e>
08122417 +0x63:  movl   $0x228,0x8(%esp)
0812241f +0x6b:  movl   $0x1,0x4(%esp)
08122427 +0x73:  lea    -0x20(%ebp),%eax
0812242a +0x76:  mov    %eax,(%esp)
0812242d +0x79:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08122432 +0x7e:  lea    -0x13(%ebp),%eax
08122435 +0x81:  movl   $0xb,0x8(%esp)
0812243d +0x89:  mov    %eax,0x4(%esp)
08122441 +0x8d:  lea    -0x20(%ebp),%eax
08122444 +0x90:  mov    %eax,(%esp)
08122447 +0x93:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812244c +0x98:  movl   $0x1,0x4(%esp)
08122454 +0xa0:  lea    -0x20(%ebp),%eax
08122457 +0xa3:  mov    %eax,(%esp)
0812245a +0xa6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812245f +0xab:  lea    -0x20(%ebp),%eax
08122462 +0xae:  mov    %eax,0x4(%esp)
08122466 +0xb2:  mov    0x8(%ebp),%eax
08122469 +0xb5:  mov    %eax,(%esp)
0812246c +0xb8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08122471 +0xbd:  jmp    0812248e <+0xda>
08122473 +0xbf:  mov    %edx,%ebx
08122475 +0xc1:  mov    %eax,%esi
08122477 +0xc3:  lea    -0x20(%ebp),%eax
0812247a +0xc6:  mov    %eax,(%esp)
0812247d +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08122482 +0xce:  mov    %esi,%eax
08122484 +0xd0:  mov    %ebx,%edx
08122486 +0xd2:  mov    %eax,(%esp)
08122489 +0xd5:  call   08ae3750 <_Unwind_Resume>
0812248e +0xda:  lea    -0x20(%ebp),%eax
08122491 +0xdd:  mov    %eax,(%esp)
08122494 +0xe0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08122499 +0xe5:  add    $0x40,%esp
0812249c +0xe8:  pop    %ebx
0812249d +0xe9:  pop    %esi
0812249e +0xea:  pop    %ebp
0812249f +0xeb:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::SendActionClear @ 0x81223b4

/* APSystem::CUserProc::SendActionClear(CUser&, unsigned short, APSystem::_ActionGroupIndex, bool,
   ENUM_PACKETCLASS) */

void APSystem::CUserProc::SendActionClear
               (CUser *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  PacketGuard local_24 [13];
  undefined4 local_17 [2];
  undefined2 local_f;
  undefined1 local_d;
  
  _MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR
            ((_MSG_ACTION_POINT_ACTION_CLEAR *)local_17);
  local_17[0] = param_3;
  local_f = param_2;
  local_d = param_4;
  PacketGuard::PacketGuard(local_24);
  if (param_5 == 0) {
                    /* try { // try from 08122410 to 08122470 has its CatchHandler @ 08122473 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,499);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x228);
  }
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_17,0xb);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
