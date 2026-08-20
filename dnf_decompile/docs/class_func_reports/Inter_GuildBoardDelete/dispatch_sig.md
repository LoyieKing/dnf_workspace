# dispatch_sig

`_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci`

`Inter_GuildBoardDelete::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildBoardDelete` | `0x084df2ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084df2ac  _ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci
#           Inter_GuildBoardDelete::dispatch_sig(CUser*, char*, int)
# range [0x084df2ac, 0x084df3d5]
084df2ac +0x000:  push   %ebp
084df2ad +0x001:  mov    %esp,%ebp
084df2af +0x003:  push   %esi
084df2b0 +0x004:  push   %ebx
084df2b1 +0x005:  sub    $0x20,%esp
084df2b4 +0x008:  mov    0x10(%ebp),%eax
084df2b7 +0x00b:  mov    %eax,-0xc(%ebp)
084df2ba +0x00e:  mov    0xc(%ebp),%eax
084df2bd +0x011:  mov    %eax,(%esp)
084df2c0 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084df2c5 +0x019:  cmp    $0x2,%eax
084df2c8 +0x01c:  setle  %al
084df2cb +0x01f:  test   %al,%al
084df2cd +0x021:  je     084df2d9 <+0x2d>
084df2cf +0x023:  mov    $0x0,%ebx
084df2d4 +0x028:  jmp    084df3cc <+0x120>
084df2d9 +0x02d:  movl   $0xffffffff,0x4(%esp)
084df2e1 +0x035:  mov    0xc(%ebp),%eax
084df2e4 +0x038:  mov    %eax,(%esp)
084df2e7 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084df2ec +0x040:  mov    %eax,%edx
084df2ee +0x042:  mov    -0xc(%ebp),%eax
084df2f1 +0x045:  mov    0x13(%eax),%eax
084df2f4 +0x048:  cmp    %eax,%edx
084df2f6 +0x04a:  setne  %al
084df2f9 +0x04d:  test   %al,%al
084df2fb +0x04f:  je     084df307 <+0x5b>
084df2fd +0x051:  mov    $0x0,%ebx
084df302 +0x056:  jmp    084df3cc <+0x120>
084df307 +0x05b:  lea    -0x18(%ebp),%eax
084df30a +0x05e:  mov    %eax,(%esp)
084df30d +0x061:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084df312 +0x066:  movl   $0x157,0x8(%esp)
084df31a +0x06e:  movl   $0x1,0x4(%esp)
084df322 +0x076:  lea    -0x18(%ebp),%eax
084df325 +0x079:  mov    %eax,(%esp)
084df328 +0x07c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084df32d +0x081:  mov    -0xc(%ebp),%eax
084df330 +0x084:  movzwl 0xa(%eax),%eax
084df334 +0x088:  test   %ax,%ax
084df337 +0x08b:  jne    084df34e <+0xa2>
084df339 +0x08d:  movl   $0x1,0x4(%esp)
084df341 +0x095:  lea    -0x18(%ebp),%eax
084df344 +0x098:  mov    %eax,(%esp)
084df347 +0x09b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084df34c +0x0a0:  jmp    084df37a <+0xce>
084df34e +0x0a2:  movl   $0x0,0x4(%esp)
084df356 +0x0aa:  lea    -0x18(%ebp),%eax
084df359 +0x0ad:  mov    %eax,(%esp)
084df35c +0x0b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084df361 +0x0b5:  mov    -0xc(%ebp),%eax
084df364 +0x0b8:  movzwl 0xa(%eax),%eax
084df368 +0x0bc:  movzwl %ax,%eax
084df36b +0x0bf:  mov    %eax,0x4(%esp)
084df36f +0x0c3:  lea    -0x18(%ebp),%eax
084df372 +0x0c6:  mov    %eax,(%esp)
084df375 +0x0c9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084df37a +0x0ce:  movl   $0x1,0x4(%esp)
084df382 +0x0d6:  lea    -0x18(%ebp),%eax
084df385 +0x0d9:  mov    %eax,(%esp)
084df388 +0x0dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084df38d +0x0e1:  lea    -0x18(%ebp),%eax
084df390 +0x0e4:  mov    %eax,0x4(%esp)
084df394 +0x0e8:  mov    0xc(%ebp),%eax
084df397 +0x0eb:  mov    %eax,(%esp)
084df39a +0x0ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084df39f +0x0f3:  mov    $0x0,%ebx
084df3a4 +0x0f8:  lea    -0x18(%ebp),%eax
084df3a7 +0x0fb:  mov    %eax,(%esp)
084df3aa +0x0fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df3af +0x103:  jmp    084df3cc <+0x120>
084df3b1 +0x105:  mov    %edx,%ebx
084df3b3 +0x107:  mov    %eax,%esi
084df3b5 +0x109:  lea    -0x18(%ebp),%eax
084df3b8 +0x10c:  mov    %eax,(%esp)
084df3bb +0x10f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df3c0 +0x114:  mov    %esi,%eax
084df3c2 +0x116:  mov    %ebx,%edx
084df3c4 +0x118:  mov    %eax,(%esp)
084df3c7 +0x11b:  call   08ae3750 <_Unwind_Resume>
084df3cc +0x120:  mov    %ebx,%eax
084df3ce +0x122:  add    $0x20,%esp
084df3d1 +0x125:  pop    %ebx
084df3d2 +0x126:  pop    %esi
084df3d3 +0x127:  pop    %ebp
084df3d4 +0x128:  ret
084df3d5 +0x129:  nop
```

## 反编译 C

```c
// Inter_GuildBoardDelete::dispatch_sig @ 0x84df2ac

/* Inter_GuildBoardDelete::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildBoardDelete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0x13))) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084df328 to 084df39e has its CatchHandler @ 084df3b1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x157);
    if (*(short *)(local_10 + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10))
      ;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
