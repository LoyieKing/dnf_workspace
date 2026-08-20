# sendInformNoticeFlag

`_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser`

`CCharacInformNotice::sendInformNoticeFlag(CUser*)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4994  _ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser
#           CCharacInformNotice::sendInformNoticeFlag(CUser*)
# range [0x080e4994, 0x080e4ab7]
080e4994 +0x000:  push   %ebp
080e4995 +0x001:  mov    %esp,%ebp
080e4997 +0x003:  push   %esi
080e4998 +0x004:  push   %ebx
080e4999 +0x005:  sub    $0x30,%esp
080e499c +0x008:  lea    -0x18(%ebp),%eax
080e499f +0x00b:  mov    %eax,(%esp)
080e49a2 +0x00e:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
080e49a7 +0x013:  lea    -0x18(%ebp),%eax
080e49aa +0x016:  mov    %eax,0x4(%esp)
080e49ae +0x01a:  mov    0x8(%ebp),%eax
080e49b1 +0x01d:  mov    %eax,(%esp)
080e49b4 +0x020:  call   080e48fc <_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE>  ; CCharacInformNotice::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)
080e49b9 +0x025:  lea    -0x24(%ebp),%eax
080e49bc +0x028:  mov    %eax,(%esp)
080e49bf +0x02b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080e49c4 +0x030:  movl   $0x1b8,0x8(%esp)
080e49cc +0x038:  movl   $0x0,0x4(%esp)
080e49d4 +0x040:  lea    -0x24(%ebp),%eax
080e49d7 +0x043:  mov    %eax,(%esp)
080e49da +0x046:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080e49df +0x04b:  lea    -0x18(%ebp),%eax
080e49e2 +0x04e:  mov    %eax,(%esp)
080e49e5 +0x051:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
080e49ea +0x056:  mov    %eax,0x4(%esp)
080e49ee +0x05a:  lea    -0x24(%ebp),%eax
080e49f1 +0x05d:  mov    %eax,(%esp)
080e49f4 +0x060:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080e49f9 +0x065:  movl   $0x0,-0xc(%ebp)
080e4a00 +0x06c:  jmp    080e4a2d <+0x99>
080e4a02 +0x06e:  mov    -0xc(%ebp),%eax
080e4a05 +0x071:  mov    %eax,0x4(%esp)
080e4a09 +0x075:  lea    -0x18(%ebp),%eax
080e4a0c +0x078:  mov    %eax,(%esp)
080e4a0f +0x07b:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
080e4a14 +0x080:  movzbl (%eax),%eax
080e4a17 +0x083:  movzbl %al,%eax
080e4a1a +0x086:  mov    %eax,0x4(%esp)
080e4a1e +0x08a:  lea    -0x24(%ebp),%eax
080e4a21 +0x08d:  mov    %eax,(%esp)
080e4a24 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080e4a29 +0x095:  addl   $0x1,-0xc(%ebp)
080e4a2d +0x099:  lea    -0x18(%ebp),%eax
080e4a30 +0x09c:  mov    %eax,(%esp)
080e4a33 +0x09f:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
080e4a38 +0x0a4:  cmp    -0xc(%ebp),%eax
080e4a3b +0x0a7:  seta   %al
080e4a3e +0x0aa:  test   %al,%al
080e4a40 +0x0ac:  jne    080e4a02 <+0x6e>
080e4a42 +0x0ae:  movl   $0x1,0x4(%esp)
080e4a4a +0x0b6:  lea    -0x24(%ebp),%eax
080e4a4d +0x0b9:  mov    %eax,(%esp)
080e4a50 +0x0bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080e4a55 +0x0c1:  lea    -0x24(%ebp),%eax
080e4a58 +0x0c4:  mov    %eax,0x4(%esp)
080e4a5c +0x0c8:  mov    0xc(%ebp),%eax
080e4a5f +0x0cb:  mov    %eax,(%esp)
080e4a62 +0x0ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080e4a67 +0x0d3:  jmp    080e4a7e <+0xea>
080e4a69 +0x0d5:  mov    %edx,%ebx
080e4a6b +0x0d7:  mov    %eax,%esi
080e4a6d +0x0d9:  lea    -0x24(%ebp),%eax
080e4a70 +0x0dc:  mov    %eax,(%esp)
080e4a73 +0x0df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080e4a78 +0x0e4:  mov    %esi,%eax
080e4a7a +0x0e6:  mov    %ebx,%edx
080e4a7c +0x0e8:  jmp    080e4a8b <+0xf7>
080e4a7e +0x0ea:  lea    -0x24(%ebp),%eax
080e4a81 +0x0ed:  mov    %eax,(%esp)
080e4a84 +0x0f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080e4a89 +0x0f5:  jmp    080e4aa6 <+0x112>
080e4a8b +0x0f7:  mov    %edx,%ebx
080e4a8d +0x0f9:  mov    %eax,%esi
080e4a8f +0x0fb:  lea    -0x18(%ebp),%eax
080e4a92 +0x0fe:  mov    %eax,(%esp)
080e4a95 +0x101:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
080e4a9a +0x106:  mov    %esi,%eax
080e4a9c +0x108:  mov    %ebx,%edx
080e4a9e +0x10a:  mov    %eax,(%esp)
080e4aa1 +0x10d:  call   08ae3750 <_Unwind_Resume>
080e4aa6 +0x112:  lea    -0x18(%ebp),%eax
080e4aa9 +0x115:  mov    %eax,(%esp)
080e4aac +0x118:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
080e4ab1 +0x11d:  add    $0x30,%esp
080e4ab4 +0x120:  pop    %ebx
080e4ab5 +0x121:  pop    %esi
080e4ab6 +0x122:  pop    %ebp
080e4ab7 +0x123:  ret
```

## 反编译 C

```c
// CCharacInformNotice::sendInformNoticeFlag @ 0x80e4994

/* CCharacInformNotice::sendInformNoticeFlag(CUser*) */

void __thiscall CCharacInformNotice::sendInformNoticeFlag(CCharacInformNotice *this,CUser *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  PacketGuard local_28 [12];
  vector<unsigned_char,std::allocator<unsigned_char>> local_1c [12];
  uint local_10;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_1c);
                    /* try { // try from 080e49b4 to 080e49c3 has its CatchHandler @ 080e4a8b */
  getInformNoticeFlagIndex(this,(vector *)local_1c);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 080e49da to 080e4a66 has its CatchHandler @ 080e4a69 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x1b8);
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
  CUser::Send(param_1,local_28);
                    /* try { // try from 080e4a84 to 080e4a88 has its CatchHandler @ 080e4a8b */
  PacketGuard::~PacketGuard(local_28);
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_1c);
  return;
}
```
