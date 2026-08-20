# SendCashData

`_ZN5CUser12SendCashDataEb`

`CUser::SendCashData(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865082a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865082a  _ZN5CUser12SendCashDataEb
#           CUser::SendCashData(bool)
# range [0x0865082a, 0x08650953]
0865082a +0x000:  push   %ebp
0865082b +0x001:  mov    %esp,%ebp
0865082d +0x003:  push   %esi
0865082e +0x004:  push   %ebx
0865082f +0x005:  sub    $0x30,%esp
08650832 +0x008:  mov    0xc(%ebp),%eax
08650835 +0x00b:  mov    %al,-0x1c(%ebp)
08650838 +0x00e:  lea    -0x14(%ebp),%eax
0865083b +0x011:  mov    %eax,(%esp)
0865083e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08650843 +0x019:  movl   $0x35,0x8(%esp)
0865084b +0x021:  movl   $0x0,0x4(%esp)
08650853 +0x029:  lea    -0x14(%ebp),%eax
08650856 +0x02c:  mov    %eax,(%esp)
08650859 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865085e +0x034:  movl   $0x1,0x4(%esp)
08650866 +0x03c:  lea    -0x14(%ebp),%eax
08650869 +0x03f:  mov    %eax,(%esp)
0865086c +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08650871 +0x047:  cmpb   $0x0,-0x1c(%ebp)
08650875 +0x04b:  je     086508b2 <+0x88>
08650877 +0x04d:  movl   $0x0,0x4(%esp)
0865087f +0x055:  lea    -0x14(%ebp),%eax
08650882 +0x058:  mov    %eax,(%esp)
08650885 +0x05b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865088a +0x060:  movl   $0x0,0x4(%esp)
08650892 +0x068:  lea    -0x14(%ebp),%eax
08650895 +0x06b:  mov    %eax,(%esp)
08650898 +0x06e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865089d +0x073:  movl   $0x0,0x4(%esp)
086508a5 +0x07b:  lea    -0x14(%ebp),%eax
086508a8 +0x07e:  mov    %eax,(%esp)
086508ab +0x081:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086508b0 +0x086:  jmp    08650900 <+0xd6>
086508b2 +0x088:  mov    0x8(%ebp),%eax
086508b5 +0x08b:  mov    %eax,(%esp)
086508b8 +0x08e:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
086508bd +0x093:  mov    %eax,0x4(%esp)
086508c1 +0x097:  lea    -0x14(%ebp),%eax
086508c4 +0x09a:  mov    %eax,(%esp)
086508c7 +0x09d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086508cc +0x0a2:  mov    0x8(%ebp),%eax
086508cf +0x0a5:  mov    %eax,(%esp)
086508d2 +0x0a8:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
086508d7 +0x0ad:  mov    %eax,0x4(%esp)
086508db +0x0b1:  lea    -0x14(%ebp),%eax
086508de +0x0b4:  mov    %eax,(%esp)
086508e1 +0x0b7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086508e6 +0x0bc:  mov    0x8(%ebp),%eax
086508e9 +0x0bf:  mov    %eax,(%esp)
086508ec +0x0c2:  call   08692af6 <_ZN5CUser12GetCeraPointEv>  ; CUser::GetCeraPoint()
086508f1 +0x0c7:  mov    %eax,0x4(%esp)
086508f5 +0x0cb:  lea    -0x14(%ebp),%eax
086508f8 +0x0ce:  mov    %eax,(%esp)
086508fb +0x0d1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08650900 +0x0d6:  movl   $0x1,0x4(%esp)
08650908 +0x0de:  lea    -0x14(%ebp),%eax
0865090b +0x0e1:  mov    %eax,(%esp)
0865090e +0x0e4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08650913 +0x0e9:  lea    -0x14(%ebp),%eax
08650916 +0x0ec:  mov    %eax,0x4(%esp)
0865091a +0x0f0:  mov    0x8(%ebp),%eax
0865091d +0x0f3:  mov    %eax,(%esp)
08650920 +0x0f6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08650925 +0x0fb:  jmp    08650942 <+0x118>
08650927 +0x0fd:  mov    %edx,%ebx
08650929 +0x0ff:  mov    %eax,%esi
0865092b +0x101:  lea    -0x14(%ebp),%eax
0865092e +0x104:  mov    %eax,(%esp)
08650931 +0x107:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08650936 +0x10c:  mov    %esi,%eax
08650938 +0x10e:  mov    %ebx,%edx
0865093a +0x110:  mov    %eax,(%esp)
0865093d +0x113:  call   08ae3750 <_Unwind_Resume>
08650942 +0x118:  lea    -0x14(%ebp),%eax
08650945 +0x11b:  mov    %eax,(%esp)
08650948 +0x11e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865094d +0x123:  add    $0x30,%esp
08650950 +0x126:  pop    %ebx
08650951 +0x127:  pop    %esi
08650952 +0x128:  pop    %ebp
08650953 +0x129:  ret
```

## 反编译 C

```c
// CUser::SendCashData @ 0x865082a

/* CUser::SendCashData(bool) */

void __thiscall CUser::SendCashData(CUser *this,bool param_1)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08650859 to 08650924 has its CatchHandler @ 08650927 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x35);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  if (param_1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
  }
  else {
    iVar1 = GetCera(this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
    iVar1 = GetMileage(this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
    iVar1 = GetCeraPoint(this);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
