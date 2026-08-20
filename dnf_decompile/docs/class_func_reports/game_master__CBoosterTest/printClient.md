# printClient

`_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_`

`game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084aebf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aebf2  _ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_
#           game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
# range [0x084aebf2, 0x084aed03]
084aebf2 +0x000:  push   %ebp
084aebf3 +0x001:  mov    %esp,%ebp
084aebf5 +0x003:  push   %esi
084aebf6 +0x004:  push   %ebx
084aebf7 +0x005:  sub    $0x30,%esp
084aebfa +0x008:  mov    0xc(%ebp),%eax
084aebfd +0x00b:  mov    %al,-0x1c(%ebp)
084aec00 +0x00e:  lea    -0x14(%ebp),%eax
084aec03 +0x011:  mov    %eax,(%esp)
084aec06 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084aec0b +0x019:  movl   $0x13e,0x8(%esp)
084aec13 +0x021:  movl   $0x0,0x4(%esp)
084aec1b +0x029:  lea    -0x14(%ebp),%eax
084aec1e +0x02c:  mov    %eax,(%esp)
084aec21 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084aec26 +0x034:  movzbl -0x1c(%ebp),%eax
084aec2a +0x038:  mov    %eax,0x4(%esp)
084aec2e +0x03c:  lea    -0x14(%ebp),%eax
084aec31 +0x03f:  mov    %eax,(%esp)
084aec34 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aec39 +0x047:  mov    0x10(%ebp),%eax
084aec3c +0x04a:  mov    %eax,(%esp)
084aec3f +0x04d:  call   0807e3b0 <_init+0xca8>
084aec44 +0x052:  mov    %eax,0x4(%esp)
084aec48 +0x056:  lea    -0x14(%ebp),%eax
084aec4b +0x059:  mov    %eax,(%esp)
084aec4e +0x05c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084aec53 +0x061:  mov    0x10(%ebp),%eax
084aec56 +0x064:  mov    %eax,(%esp)
084aec59 +0x067:  call   0807e3b0 <_init+0xca8>
084aec5e +0x06c:  mov    %eax,0x8(%esp)
084aec62 +0x070:  mov    0x10(%ebp),%eax
084aec65 +0x073:  mov    %eax,0x4(%esp)
084aec69 +0x077:  lea    -0x14(%ebp),%eax
084aec6c +0x07a:  mov    %eax,(%esp)
084aec6f +0x07d:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084aec74 +0x082:  mov    0x14(%ebp),%eax
084aec77 +0x085:  mov    %eax,(%esp)
084aec7a +0x088:  call   0807e3b0 <_init+0xca8>
084aec7f +0x08d:  mov    %eax,0x4(%esp)
084aec83 +0x091:  lea    -0x14(%ebp),%eax
084aec86 +0x094:  mov    %eax,(%esp)
084aec89 +0x097:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084aec8e +0x09c:  mov    0x14(%ebp),%eax
084aec91 +0x09f:  mov    %eax,(%esp)
084aec94 +0x0a2:  call   0807e3b0 <_init+0xca8>
084aec99 +0x0a7:  mov    %eax,0x8(%esp)
084aec9d +0x0ab:  mov    0x14(%ebp),%eax
084aeca0 +0x0ae:  mov    %eax,0x4(%esp)
084aeca4 +0x0b2:  lea    -0x14(%ebp),%eax
084aeca7 +0x0b5:  mov    %eax,(%esp)
084aecaa +0x0b8:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084aecaf +0x0bd:  movl   $0x1,0x4(%esp)
084aecb7 +0x0c5:  lea    -0x14(%ebp),%eax
084aecba +0x0c8:  mov    %eax,(%esp)
084aecbd +0x0cb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084aecc2 +0x0d0:  lea    -0x14(%ebp),%eax
084aecc5 +0x0d3:  mov    %eax,0x4(%esp)
084aecc9 +0x0d7:  mov    0x8(%ebp),%eax
084aeccc +0x0da:  mov    %eax,(%esp)
084aeccf +0x0dd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aecd4 +0x0e2:  jmp    084aecf1 <+0xff>
084aecd6 +0x0e4:  mov    %edx,%ebx
084aecd8 +0x0e6:  mov    %eax,%esi
084aecda +0x0e8:  lea    -0x14(%ebp),%eax
084aecdd +0x0eb:  mov    %eax,(%esp)
084aece0 +0x0ee:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aece5 +0x0f3:  mov    %esi,%eax
084aece7 +0x0f5:  mov    %ebx,%edx
084aece9 +0x0f7:  mov    %eax,(%esp)
084aecec +0x0fa:  call   08ae3750 <_Unwind_Resume>
084aecf1 +0x0ff:  lea    -0x14(%ebp),%eax
084aecf4 +0x102:  mov    %eax,(%esp)
084aecf7 +0x105:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aecfc +0x10a:  add    $0x30,%esp
084aecff +0x10d:  pop    %ebx
084aed00 +0x10e:  pop    %esi
084aed01 +0x10f:  pop    %ebp
084aed02 +0x110:  ret
084aed03 +0x111:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::printClient @ 0x84aebf2

/* game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*) */

void game_master::CBoosterTest::printClient(CUser *param_1,bool param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084aec21 to 084aecd3 has its CatchHandler @ 084aecd6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_3,sVar1);
  sVar1 = strlen(param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_4);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_4,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
