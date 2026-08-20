# SendGetRewardItem

`_ZN8APSystem9CUserProc17SendGetRewardItemER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemEb`

`APSystem::CUserProc::SendGetRewardItem(CUser&, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem, bool)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x081224ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081224ac  _ZN8APSystem9CUserProc17SendGetRewardItemER5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemEb
#           APSystem::CUserProc::SendGetRewardItem(CUser&, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem, bool)
# range [0x081224ac, 0x0812255b]
081224ac +0x00:  push   %ebp
081224ad +0x01:  mov    %esp,%ebp
081224af +0x03:  push   %esi
081224b0 +0x04:  push   %ebx
081224b1 +0x05:  sub    $0x40,%esp
081224b4 +0x08:  mov    0x10(%ebp),%eax
081224b7 +0x0b:  mov    %al,-0x2c(%ebp)
081224ba +0x0e:  lea    -0x14(%ebp),%eax
081224bd +0x11:  mov    %eax,(%esp)
081224c0 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081224c5 +0x19:  movl   $0x229,0x8(%esp)
081224cd +0x21:  movl   $0x1,0x4(%esp)
081224d5 +0x29:  lea    -0x14(%ebp),%eax
081224d8 +0x2c:  mov    %eax,(%esp)
081224db +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081224e0 +0x34:  mov    0xc(%ebp),%eax
081224e3 +0x37:  mov    %eax,-0x18(%ebp)
081224e6 +0x3a:  movzbl -0x2c(%ebp),%eax
081224ea +0x3e:  mov    %al,-0x19(%ebp)
081224ed +0x41:  lea    -0x19(%ebp),%eax
081224f0 +0x44:  movl   $0x5,0x8(%esp)
081224f8 +0x4c:  mov    %eax,0x4(%esp)
081224fc +0x50:  lea    -0x14(%ebp),%eax
081224ff +0x53:  mov    %eax,(%esp)
08122502 +0x56:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08122507 +0x5b:  movl   $0x1,0x4(%esp)
0812250f +0x63:  lea    -0x14(%ebp),%eax
08122512 +0x66:  mov    %eax,(%esp)
08122515 +0x69:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812251a +0x6e:  lea    -0x14(%ebp),%eax
0812251d +0x71:  mov    %eax,0x4(%esp)
08122521 +0x75:  mov    0x8(%ebp),%eax
08122524 +0x78:  mov    %eax,(%esp)
08122527 +0x7b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812252c +0x80:  jmp    08122549 <+0x9d>
0812252e +0x82:  mov    %edx,%ebx
08122530 +0x84:  mov    %eax,%esi
08122532 +0x86:  lea    -0x14(%ebp),%eax
08122535 +0x89:  mov    %eax,(%esp)
08122538 +0x8c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812253d +0x91:  mov    %esi,%eax
0812253f +0x93:  mov    %ebx,%edx
08122541 +0x95:  mov    %eax,(%esp)
08122544 +0x98:  call   08ae3750 <_Unwind_Resume>
08122549 +0x9d:  lea    -0x14(%ebp),%eax
0812254c +0xa0:  mov    %eax,(%esp)
0812254f +0xa3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08122554 +0xa8:  add    $0x40,%esp
08122557 +0xab:  pop    %ebx
08122558 +0xac:  pop    %esi
08122559 +0xad:  pop    %ebp
0812255a +0xae:  ret
0812255b +0xaf:  nop
```

## 反编译 C

```c
// APSystem::CUserProc::SendGetRewardItem @ 0x81224ac

/* APSystem::CUserProc::SendGetRewardItem(CUser&,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem, bool) */

void APSystem::CUserProc::SendGetRewardItem(CUser *param_1,undefined4 param_2,char param_3)

{
  char local_1d;
  undefined4 local_1c;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081224db to 0812252b has its CatchHandler @ 0812252e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x229);
  local_1c = param_2;
  local_1d = param_3;
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,&local_1d,5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
