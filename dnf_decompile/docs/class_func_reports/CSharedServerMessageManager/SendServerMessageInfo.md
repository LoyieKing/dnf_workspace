# SendServerMessageInfo

`_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc`

`CSharedServerMessageManager::SendServerMessageInfo(CUser*, SIG_EVENT_SERVER_MESSAGE*, char)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x086008d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086008d8  _ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc
#           CSharedServerMessageManager::SendServerMessageInfo(CUser*, SIG_EVENT_SERVER_MESSAGE*, char)
# range [0x086008d8, 0x08600b75]
086008d8 +0x000:  push   %ebp
086008d9 +0x001:  mov    %esp,%ebp
086008db +0x003:  push   %esi
086008dc +0x004:  push   %ebx
086008dd +0x005:  sub    $0x60,%esp
086008e0 +0x008:  mov    0x14(%ebp),%eax
086008e3 +0x00b:  mov    %al,-0x4c(%ebp)
086008e6 +0x00e:  lea    -0x2c(%ebp),%eax
086008e9 +0x011:  mov    %eax,(%esp)
086008ec +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086008f1 +0x019:  movl   $0xc0,0x8(%esp)
086008f9 +0x021:  movl   $0x0,0x4(%esp)
08600901 +0x029:  lea    -0x2c(%ebp),%eax
08600904 +0x02c:  mov    %eax,(%esp)
08600907 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0860090c +0x034:  movsbl -0x4c(%ebp),%eax
08600910 +0x038:  mov    %eax,0x4(%esp)
08600914 +0x03c:  lea    -0x2c(%ebp),%eax
08600917 +0x03f:  mov    %eax,(%esp)
0860091a +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860091f +0x047:  movl   $0x0,-0x18(%ebp)
08600926 +0x04e:  lea    -0x3c(%ebp),%eax
08600929 +0x051:  mov    %eax,(%esp)
0860092c +0x054:  call   08601a1a <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x66>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x66
08600931 +0x059:  movb   $0x0,-0x3c(%ebp)
08600935 +0x05d:  movl   $0x0,-0x14(%ebp)
0860093c +0x064:  jmp    0860098e <+0xb6>
0860093e +0x066:  mov    -0x14(%ebp),%edx
08600941 +0x069:  mov    0x10(%ebp),%eax
08600944 +0x06c:  imul   $0x58,%edx,%edx
08600947 +0x06f:  movzbl 0x5(%edx,%eax,1),%eax
0860094c +0x074:  movzbl %al,%edx
0860094f +0x077:  mov    0x8(%ebp),%eax
08600952 +0x07a:  mov    %edx,0x4(%esp)
08600956 +0x07e:  mov    %eax,(%esp)
08600959 +0x081:  call   08601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)
0860095e +0x086:  test   %al,%al
08600960 +0x088:  je     0860098a <+0xb2>
08600962 +0x08a:  movzbl -0x3c(%ebp),%eax
08600966 +0x08e:  add    $0x1,%eax
08600969 +0x091:  mov    %al,-0x3c(%ebp)
0860096c +0x094:  mov    -0x14(%ebp),%eax
0860096f +0x097:  imul   $0x58,%eax,%eax
08600972 +0x09a:  add    0x10(%ebp),%eax
08600975 +0x09d:  add    $0x4,%eax
08600978 +0x0a0:  mov    %eax,0x4(%esp)
0860097c +0x0a4:  lea    -0x3c(%ebp),%eax
0860097f +0x0a7:  add    $0x4,%eax
08600982 +0x0aa:  mov    %eax,(%esp)
08600985 +0x0ad:  call   08601ad4 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x120>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x120
0860098a +0x0b2:  addl   $0x1,-0x14(%ebp)
0860098e +0x0b6:  mov    0x10(%ebp),%eax
08600991 +0x0b9:  movzbl (%eax),%eax
08600994 +0x0bc:  movzbl %al,%eax
08600997 +0x0bf:  cmp    -0x14(%ebp),%eax
0860099a +0x0c2:  setg   %al
0860099d +0x0c5:  test   %al,%al
0860099f +0x0c7:  jne    0860093e <+0x66>
086009a1 +0x0c9:  movzbl -0x3c(%ebp),%eax
086009a5 +0x0cd:  cmp    $0x32,%al
086009a7 +0x0cf:  jbe    086009b3 <+0xdb>
086009a9 +0x0d1:  mov    $0x0,%ebx
086009ae +0x0d6:  jmp    08600b3d <+0x265>
086009b3 +0x0db:  movzbl -0x3c(%ebp),%eax
086009b7 +0x0df:  movzbl %al,%eax
086009ba +0x0e2:  mov    %eax,0x4(%esp)
086009be +0x0e6:  lea    -0x2c(%ebp),%eax
086009c1 +0x0e9:  mov    %eax,(%esp)
086009c4 +0x0ec:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086009c9 +0x0f1:  lea    -0x40(%ebp),%eax
086009cc +0x0f4:  mov    %eax,(%esp)
086009cf +0x0f7:  call   08601b48 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x194>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x194
086009d4 +0x0fc:  lea    -0x50(%ebp),%eax
086009d7 +0x0ff:  lea    -0x3c(%ebp),%edx
086009da +0x102:  add    $0x4,%edx
086009dd +0x105:  mov    %edx,0x4(%esp)
086009e1 +0x109:  mov    %eax,(%esp)
086009e4 +0x10c:  call   084f13fc <_GLOBAL__I__Z7getUserj+0x83ae>  ; global constructors keyed to getUser(unsigned int)+0x83ae
086009e9 +0x111:  sub    $0x4,%esp
086009ec +0x114:  mov    -0x50(%ebp),%eax
086009ef +0x117:  mov    %eax,-0x40(%ebp)
086009f2 +0x11a:  movl   $0x0,-0x10(%ebp)
086009f9 +0x121:  jmp    08600aae <+0x1d6>
086009fe +0x126:  lea    -0x40(%ebp),%eax
08600a01 +0x129:  mov    %eax,(%esp)
08600a04 +0x12c:  call   08601b82 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1ce>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1ce
08600a09 +0x131:  mov    %eax,-0xc(%ebp)
08600a0c +0x134:  mov    -0xc(%ebp),%eax
08600a0f +0x137:  movzbl 0x1(%eax),%eax
08600a13 +0x13b:  movzbl %al,%eax
08600a16 +0x13e:  mov    %eax,0x4(%esp)
08600a1a +0x142:  lea    -0x2c(%ebp),%eax
08600a1d +0x145:  mov    %eax,(%esp)
08600a20 +0x148:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08600a25 +0x14d:  mov    -0xc(%ebp),%eax
08600a28 +0x150:  mov    0x4(%eax),%eax
08600a2b +0x153:  mov    %eax,0x4(%esp)
08600a2f +0x157:  lea    -0x2c(%ebp),%eax
08600a32 +0x15a:  mov    %eax,(%esp)
08600a35 +0x15d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08600a3a +0x162:  mov    -0xc(%ebp),%eax
08600a3d +0x165:  mov    0x4(%eax),%eax
08600a40 +0x168:  mov    -0xc(%ebp),%edx
08600a43 +0x16b:  add    $0x8,%edx
08600a46 +0x16e:  mov    %eax,0x8(%esp)
08600a4a +0x172:  mov    %edx,0x4(%esp)
08600a4e +0x176:  lea    -0x2c(%ebp),%eax
08600a51 +0x179:  mov    %eax,(%esp)
08600a54 +0x17c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08600a59 +0x181:  mov    -0xc(%ebp),%eax
08600a5c +0x184:  mov    0x3c(%eax),%eax
08600a5f +0x187:  mov    %eax,0x4(%esp)
08600a63 +0x18b:  lea    -0x2c(%ebp),%eax
08600a66 +0x18e:  mov    %eax,(%esp)
08600a69 +0x191:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08600a6e +0x196:  mov    -0xc(%ebp),%eax
08600a71 +0x199:  mov    0x3c(%eax),%eax
08600a74 +0x19c:  mov    -0xc(%ebp),%edx
08600a77 +0x19f:  add    $0x40,%edx
08600a7a +0x1a2:  mov    %eax,0x8(%esp)
08600a7e +0x1a6:  mov    %edx,0x4(%esp)
08600a82 +0x1aa:  lea    -0x2c(%ebp),%eax
08600a85 +0x1ad:  mov    %eax,(%esp)
08600a88 +0x1b0:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08600a8d +0x1b5:  lea    -0x1c(%ebp),%eax
08600a90 +0x1b8:  movl   $0x0,0x8(%esp)
08600a98 +0x1c0:  lea    -0x40(%ebp),%edx
08600a9b +0x1c3:  mov    %edx,0x4(%esp)
08600a9f +0x1c7:  mov    %eax,(%esp)
08600aa2 +0x1ca:  call   08601b8c <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1d8>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1d8
08600aa7 +0x1cf:  sub    $0x4,%esp
08600aaa +0x1d2:  addl   $0x1,-0x10(%ebp)
08600aae +0x1d6:  movzbl -0x3c(%ebp),%eax
08600ab2 +0x1da:  movzbl %al,%eax
08600ab5 +0x1dd:  cmp    -0x10(%ebp),%eax
08600ab8 +0x1e0:  jg     08600ae8 <+0x210>
08600aba +0x1e2:  lea    -0x20(%ebp),%eax
08600abd +0x1e5:  lea    -0x3c(%ebp),%edx
08600ac0 +0x1e8:  add    $0x4,%edx
08600ac3 +0x1eb:  mov    %edx,0x4(%esp)
08600ac7 +0x1ef:  mov    %eax,(%esp)
08600aca +0x1f2:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08600acf +0x1f7:  sub    $0x4,%esp
08600ad2 +0x1fa:  lea    -0x20(%ebp),%eax
08600ad5 +0x1fd:  mov    %eax,0x4(%esp)
08600ad9 +0x201:  lea    -0x40(%ebp),%eax
08600adc +0x204:  mov    %eax,(%esp)
08600adf +0x207:  call   08601b56 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1a2>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1a2
08600ae4 +0x20c:  test   %al,%al
08600ae6 +0x20e:  je     08600aef <+0x217>
08600ae8 +0x210:  mov    $0x1,%eax
08600aed +0x215:  jmp    08600af4 <+0x21c>
08600aef +0x217:  mov    $0x0,%eax
08600af4 +0x21c:  test   %al,%al
08600af6 +0x21e:  jne    086009fe <+0x126>
08600afc +0x224:  movl   $0x1,0x4(%esp)
08600b04 +0x22c:  lea    -0x2c(%ebp),%eax
08600b07 +0x22f:  mov    %eax,(%esp)
08600b0a +0x232:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08600b0f +0x237:  lea    -0x2c(%ebp),%eax
08600b12 +0x23a:  mov    %eax,0x4(%esp)
08600b16 +0x23e:  mov    0xc(%ebp),%eax
08600b19 +0x241:  mov    %eax,(%esp)
08600b1c +0x244:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08600b21 +0x249:  mov    $0x1,%ebx
08600b26 +0x24e:  jmp    08600b3d <+0x265>
08600b28 +0x250:  mov    %edx,%ebx
08600b2a +0x252:  mov    %eax,%esi
08600b2c +0x254:  lea    -0x3c(%ebp),%eax
08600b2f +0x257:  mov    %eax,(%esp)
08600b32 +0x25a:  call   08601a30 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x7c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x7c
08600b37 +0x25f:  mov    %esi,%eax
08600b39 +0x261:  mov    %ebx,%edx
08600b3b +0x263:  jmp    08600b5f <+0x287>
08600b3d +0x265:  lea    -0x3c(%ebp),%eax
08600b40 +0x268:  mov    %eax,(%esp)
08600b43 +0x26b:  call   08601a30 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x7c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x7c
08600b48 +0x270:  test   %ebx,%ebx
08600b4a +0x272:  lea    -0x2c(%ebp),%eax
08600b4d +0x275:  mov    %eax,(%esp)
08600b50 +0x278:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08600b55 +0x27d:  lea    -0x8(%ebp),%esp
08600b58 +0x280:  add    $0x0,%esp
08600b5b +0x283:  pop    %ebx
08600b5c +0x284:  pop    %esi
08600b5d +0x285:  pop    %ebp
08600b5e +0x286:  ret
08600b5f +0x287:  mov    %edx,%ebx
08600b61 +0x289:  mov    %eax,%esi
08600b63 +0x28b:  lea    -0x2c(%ebp),%eax
08600b66 +0x28e:  mov    %eax,(%esp)
08600b69 +0x291:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08600b6e +0x296:  mov    %esi,%eax
08600b70 +0x298:  mov    %ebx,%edx
08600b72 +0x29a:  mov    %eax,(%esp)
08600b75 +0x29d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CSharedServerMessageManager::SendServerMessageInfo @ 0x86008d8

/* CSharedServerMessageManager::SendServerMessageInfo(CUser*, SIG_EVENT_SERVER_MESSAGE*, char) */

void __thiscall
CSharedServerMessageManager::SendServerMessageInfo
          (CSharedServerMessageManager *this,CUser *param_1,SIG_EVENT_SERVER_MESSAGE *param_2,
          char param_3)

{
  char cVar1;
  bool bVar2;
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_44 [4];
  EVENT_SERVER_MESSAGE local_40 [4];
  vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> avStack_3c [12];
  PacketGuard local_30 [12];
  __normal_iterator local_24 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08600907 to 08600930 has its CatchHandler @ 08600b5f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xc0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)param_3);
  local_1c = 0;
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE(local_40);
  local_40[0] = (EVENT_SERVER_MESSAGE)0x0;
  for (local_18 = 0; local_18 < (int)(uint)(byte)*param_2; local_18 = local_18 + 1) {
                    /* try { // try from 08600959 to 08600b20 has its CatchHandler @ 08600b28 */
    cVar1 = CSharedServerMessageAdapter::IsOnIndex
                      ((CSharedServerMessageAdapter *)this,(uint)(byte)param_2[local_18 * 0x58 + 5])
    ;
    if (cVar1 != '\0') {
      local_40[0] = (EVENT_SERVER_MESSAGE)((char)local_40[0] + 1);
      std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
                (avStack_3c,(stSERVER_MESSAGE *)(param_2 + local_18 * 0x58 + 4));
    }
  }
  if ((byte)local_40[0] < 0x33) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)(byte)local_40[0]);
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::__normal_iterator(local_44);
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
    local_14 = 0;
    do {
      if (local_14 < (int)(uint)(byte)local_40[0]) {
LAB_08600ae8:
        bVar2 = true;
      }
      else {
        std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
        bVar2 = __gnu_cxx::operator!=(local_44,local_24);
        if (bVar2) goto LAB_08600ae8;
        bVar2 = false;
      }
      if (!bVar2) goto code_r0x08600afc;
      local_10 = __gnu_cxx::
                 __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                 ::operator*(local_44);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_10 + 1));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_10 + 4));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_30,(char *)(local_10 + 8),*(int *)(local_10 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_10 + 0x3c));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_30,(char *)(local_10 + 0x40),*(int *)(local_10 + 0x3c))
      ;
      __gnu_cxx::
      __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
      ::operator++(local_20,(int)local_44);
      local_14 = local_14 + 1;
    } while( true );
  }
LAB_08600b3d:
                    /* try { // try from 08600b43 to 08600b47 has its CatchHandler @ 08600b5f */
  EVENT_SERVER_MESSAGE::~EVENT_SERVER_MESSAGE(local_40);
  PacketGuard::~PacketGuard(local_30);
  return;
code_r0x08600afc:
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  goto LAB_08600b3d;
}
```
