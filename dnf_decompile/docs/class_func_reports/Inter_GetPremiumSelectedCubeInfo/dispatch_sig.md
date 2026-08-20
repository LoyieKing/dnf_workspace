# dispatch_sig

`_ZN32Inter_GetPremiumSelectedCubeInfo12dispatch_sigEP5CUserPci`

`Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GetPremiumSelectedCubeInfo` | `0x084e8936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8936  _ZN32Inter_GetPremiumSelectedCubeInfo12dispatch_sigEP5CUserPci
#           Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e8936, 0x084e8a41]
084e8936 +0x000:  push   %ebp
084e8937 +0x001:  mov    %esp,%ebp
084e8939 +0x003:  push   %esi
084e893a +0x004:  push   %ebx
084e893b +0x005:  sub    $0x20,%esp
084e893e +0x008:  mov    0x10(%ebp),%eax
084e8941 +0x00b:  mov    %eax,-0xc(%ebp)
084e8944 +0x00e:  mov    0xc(%ebp),%eax
084e8947 +0x011:  mov    %eax,(%esp)
084e894a +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e894f +0x019:  test   %eax,%eax
084e8951 +0x01b:  sete   %al
084e8954 +0x01e:  test   %al,%al
084e8956 +0x020:  je     084e8962 <+0x2c>
084e8958 +0x022:  mov    $0x0,%ebx
084e895d +0x027:  jmp    084e8a38 <+0x102>
084e8962 +0x02c:  mov    -0xc(%ebp),%eax
084e8965 +0x02f:  movzbl 0x5(%eax),%eax
084e8969 +0x033:  movzbl %al,%ecx
084e896c +0x036:  mov    -0xc(%ebp),%eax
084e896f +0x039:  movzbl 0x4(%eax),%eax
084e8973 +0x03d:  test   %al,%al
084e8975 +0x03f:  setne  %al
084e8978 +0x042:  movzbl %al,%edx
084e897b +0x045:  mov    0xc(%ebp),%eax
084e897e +0x048:  mov    %ecx,0x8(%esp)
084e8982 +0x04c:  mov    %edx,0x4(%esp)
084e8986 +0x050:  mov    %eax,(%esp)
084e8989 +0x053:  call   084ec580 <_GLOBAL__I__Z7getUserj+0x3532>  ; global constructors keyed to getUser(unsigned int)+0x3532
084e898e +0x058:  lea    -0x18(%ebp),%eax
084e8991 +0x05b:  mov    %eax,(%esp)
084e8994 +0x05e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e8999 +0x063:  movl   $0x217,0x8(%esp)
084e89a1 +0x06b:  movl   $0x0,0x4(%esp)
084e89a9 +0x073:  lea    -0x18(%ebp),%eax
084e89ac +0x076:  mov    %eax,(%esp)
084e89af +0x079:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e89b4 +0x07e:  mov    -0xc(%ebp),%eax
084e89b7 +0x081:  movzbl 0x4(%eax),%eax
084e89bb +0x085:  movzbl %al,%eax
084e89be +0x088:  mov    %eax,0x4(%esp)
084e89c2 +0x08c:  lea    -0x18(%ebp),%eax
084e89c5 +0x08f:  mov    %eax,(%esp)
084e89c8 +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e89cd +0x097:  mov    -0xc(%ebp),%eax
084e89d0 +0x09a:  movzbl 0x5(%eax),%eax
084e89d4 +0x09e:  movzbl %al,%eax
084e89d7 +0x0a1:  mov    %eax,0x4(%esp)
084e89db +0x0a5:  lea    -0x18(%ebp),%eax
084e89de +0x0a8:  mov    %eax,(%esp)
084e89e1 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e89e6 +0x0b0:  movl   $0x1,0x4(%esp)
084e89ee +0x0b8:  lea    -0x18(%ebp),%eax
084e89f1 +0x0bb:  mov    %eax,(%esp)
084e89f4 +0x0be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e89f9 +0x0c3:  lea    -0x18(%ebp),%eax
084e89fc +0x0c6:  mov    %eax,0x4(%esp)
084e8a00 +0x0ca:  mov    0xc(%ebp),%eax
084e8a03 +0x0cd:  mov    %eax,(%esp)
084e8a06 +0x0d0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e8a0b +0x0d5:  mov    $0x0,%ebx
084e8a10 +0x0da:  lea    -0x18(%ebp),%eax
084e8a13 +0x0dd:  mov    %eax,(%esp)
084e8a16 +0x0e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e8a1b +0x0e5:  jmp    084e8a38 <+0x102>
084e8a1d +0x0e7:  mov    %edx,%ebx
084e8a1f +0x0e9:  mov    %eax,%esi
084e8a21 +0x0eb:  lea    -0x18(%ebp),%eax
084e8a24 +0x0ee:  mov    %eax,(%esp)
084e8a27 +0x0f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e8a2c +0x0f6:  mov    %esi,%eax
084e8a2e +0x0f8:  mov    %ebx,%edx
084e8a30 +0x0fa:  mov    %eax,(%esp)
084e8a33 +0x0fd:  call   08ae3750 <_Unwind_Resume>
084e8a38 +0x102:  mov    %ebx,%eax
084e8a3a +0x104:  add    $0x20,%esp
084e8a3d +0x107:  pop    %ebx
084e8a3e +0x108:  pop    %esi
084e8a3f +0x109:  pop    %ebp
084e8a40 +0x10a:  ret
084e8a41 +0x10b:  nop
```

## 反编译 C

```c
// Inter_GetPremiumSelectedCubeInfo::dispatch_sig @ 0x84e8936

/* Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar1 != 0) {
    CUserCharacInfo::initContractOfCubePremiumInfo
              ((CUserCharacInfo *)param_2,*(char *)(local_10 + 4) != '\0',*(uchar *)(local_10 + 5));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e89af to 084e8a0a has its CatchHandler @ 084e8a1d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x217);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 4));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 5));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
