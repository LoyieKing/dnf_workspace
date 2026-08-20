# sendInformNoticeFlag

`_ZN5CUser20sendInformNoticeFlagEv`

`CUser::sendInformNoticeFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fb22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fb22  _ZN5CUser20sendInformNoticeFlagEv
#           CUser::sendInformNoticeFlag()
# range [0x0868fb22, 0x0868fc45]
0868fb22 +0x000:  push   %ebp
0868fb23 +0x001:  mov    %esp,%ebp
0868fb25 +0x003:  push   %esi
0868fb26 +0x004:  push   %ebx
0868fb27 +0x005:  sub    $0x30,%esp
0868fb2a +0x008:  lea    -0x18(%ebp),%eax
0868fb2d +0x00b:  mov    %eax,(%esp)
0868fb30 +0x00e:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0868fb35 +0x013:  lea    -0x18(%ebp),%eax
0868fb38 +0x016:  mov    %eax,0x4(%esp)
0868fb3c +0x01a:  mov    0x8(%ebp),%eax
0868fb3f +0x01d:  mov    %eax,(%esp)
0868fb42 +0x020:  call   0868fa8a <_ZN5CUser24getInformNoticeFlagIndexERSt6vectorIhSaIhEE>  ; CUser::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)
0868fb47 +0x025:  lea    -0x24(%ebp),%eax
0868fb4a +0x028:  mov    %eax,(%esp)
0868fb4d +0x02b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868fb52 +0x030:  movl   $0x1a0,0x8(%esp)
0868fb5a +0x038:  movl   $0x0,0x4(%esp)
0868fb62 +0x040:  lea    -0x24(%ebp),%eax
0868fb65 +0x043:  mov    %eax,(%esp)
0868fb68 +0x046:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868fb6d +0x04b:  lea    -0x18(%ebp),%eax
0868fb70 +0x04e:  mov    %eax,(%esp)
0868fb73 +0x051:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0868fb78 +0x056:  mov    %eax,0x4(%esp)
0868fb7c +0x05a:  lea    -0x24(%ebp),%eax
0868fb7f +0x05d:  mov    %eax,(%esp)
0868fb82 +0x060:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868fb87 +0x065:  movl   $0x0,-0xc(%ebp)
0868fb8e +0x06c:  jmp    0868fbbb <+0x99>
0868fb90 +0x06e:  mov    -0xc(%ebp),%eax
0868fb93 +0x071:  mov    %eax,0x4(%esp)
0868fb97 +0x075:  lea    -0x18(%ebp),%eax
0868fb9a +0x078:  mov    %eax,(%esp)
0868fb9d +0x07b:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
0868fba2 +0x080:  movzbl (%eax),%eax
0868fba5 +0x083:  movzbl %al,%eax
0868fba8 +0x086:  mov    %eax,0x4(%esp)
0868fbac +0x08a:  lea    -0x24(%ebp),%eax
0868fbaf +0x08d:  mov    %eax,(%esp)
0868fbb2 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868fbb7 +0x095:  addl   $0x1,-0xc(%ebp)
0868fbbb +0x099:  lea    -0x18(%ebp),%eax
0868fbbe +0x09c:  mov    %eax,(%esp)
0868fbc1 +0x09f:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0868fbc6 +0x0a4:  cmp    -0xc(%ebp),%eax
0868fbc9 +0x0a7:  seta   %al
0868fbcc +0x0aa:  test   %al,%al
0868fbce +0x0ac:  jne    0868fb90 <+0x6e>
0868fbd0 +0x0ae:  movl   $0x1,0x4(%esp)
0868fbd8 +0x0b6:  lea    -0x24(%ebp),%eax
0868fbdb +0x0b9:  mov    %eax,(%esp)
0868fbde +0x0bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868fbe3 +0x0c1:  lea    -0x24(%ebp),%eax
0868fbe6 +0x0c4:  mov    %eax,0x4(%esp)
0868fbea +0x0c8:  mov    0x8(%ebp),%eax
0868fbed +0x0cb:  mov    %eax,(%esp)
0868fbf0 +0x0ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868fbf5 +0x0d3:  jmp    0868fc0c <+0xea>
0868fbf7 +0x0d5:  mov    %edx,%ebx
0868fbf9 +0x0d7:  mov    %eax,%esi
0868fbfb +0x0d9:  lea    -0x24(%ebp),%eax
0868fbfe +0x0dc:  mov    %eax,(%esp)
0868fc01 +0x0df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868fc06 +0x0e4:  mov    %esi,%eax
0868fc08 +0x0e6:  mov    %ebx,%edx
0868fc0a +0x0e8:  jmp    0868fc19 <+0xf7>
0868fc0c +0x0ea:  lea    -0x24(%ebp),%eax
0868fc0f +0x0ed:  mov    %eax,(%esp)
0868fc12 +0x0f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868fc17 +0x0f5:  jmp    0868fc34 <+0x112>
0868fc19 +0x0f7:  mov    %edx,%ebx
0868fc1b +0x0f9:  mov    %eax,%esi
0868fc1d +0x0fb:  lea    -0x18(%ebp),%eax
0868fc20 +0x0fe:  mov    %eax,(%esp)
0868fc23 +0x101:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0868fc28 +0x106:  mov    %esi,%eax
0868fc2a +0x108:  mov    %ebx,%edx
0868fc2c +0x10a:  mov    %eax,(%esp)
0868fc2f +0x10d:  call   08ae3750 <_Unwind_Resume>
0868fc34 +0x112:  lea    -0x18(%ebp),%eax
0868fc37 +0x115:  mov    %eax,(%esp)
0868fc3a +0x118:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0868fc3f +0x11d:  add    $0x30,%esp
0868fc42 +0x120:  pop    %ebx
0868fc43 +0x121:  pop    %esi
0868fc44 +0x122:  pop    %ebp
0868fc45 +0x123:  ret
```

## 反编译 C

```c
// CUser::sendInformNoticeFlag @ 0x868fb22

/* CUser::sendInformNoticeFlag() */

void __thiscall CUser::sendInformNoticeFlag(CUser *this)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  PacketGuard local_28 [12];
  vector<unsigned_char,std::allocator<unsigned_char>> local_1c [12];
  uint local_10;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_1c);
                    /* try { // try from 0868fb42 to 0868fb51 has its CatchHandler @ 0868fc19 */
  getInformNoticeFlagIndex(this,(vector *)local_1c);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0868fb68 to 0868fbf4 has its CatchHandler @ 0868fbf7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x1a0);
  iVar1 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_1c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar1);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_1c);
    if (uVar3 <= local_10) break;
    pbVar2 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                               (local_1c,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*pbVar2);
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  Send(this,local_28);
                    /* try { // try from 0868fc12 to 0868fc16 has its CatchHandler @ 0868fc19 */
  PacketGuard::~PacketGuard(local_28);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_1c);
  return;
}
```
