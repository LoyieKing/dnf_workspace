# dispatch_sig

`_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci`

`Inter_GuildCargoUpgrade::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoUpgrade` | `0x084ded42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ded42  _ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci
#           Inter_GuildCargoUpgrade::dispatch_sig(CUser*, char*, int)
# range [0x084ded42, 0x084dee69]
084ded42 +0x000:  push   %ebp
084ded43 +0x001:  mov    %esp,%ebp
084ded45 +0x003:  push   %esi
084ded46 +0x004:  push   %ebx
084ded47 +0x005:  sub    $0x20,%esp
084ded4a +0x008:  mov    0x10(%ebp),%eax
084ded4d +0x00b:  mov    %eax,-0xc(%ebp)
084ded50 +0x00e:  mov    0xc(%ebp),%eax
084ded53 +0x011:  mov    %eax,(%esp)
084ded56 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ded5b +0x019:  cmp    $0x2,%eax
084ded5e +0x01c:  setle  %al
084ded61 +0x01f:  test   %al,%al
084ded63 +0x021:  je     084ded6f <+0x2d>
084ded65 +0x023:  mov    $0x0,%ebx
084ded6a +0x028:  jmp    084dee61 <+0x11f>
084ded6f +0x02d:  movl   $0xffffffff,0x4(%esp)
084ded77 +0x035:  mov    0xc(%ebp),%eax
084ded7a +0x038:  mov    %eax,(%esp)
084ded7d +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ded82 +0x040:  mov    %eax,%edx
084ded84 +0x042:  mov    -0xc(%ebp),%eax
084ded87 +0x045:  mov    0xe(%eax),%eax
084ded8a +0x048:  cmp    %eax,%edx
084ded8c +0x04a:  setne  %al
084ded8f +0x04d:  test   %al,%al
084ded91 +0x04f:  je     084ded9d <+0x5b>
084ded93 +0x051:  mov    $0x0,%ebx
084ded98 +0x056:  jmp    084dee61 <+0x11f>
084ded9d +0x05b:  lea    -0x18(%ebp),%eax
084deda0 +0x05e:  mov    %eax,(%esp)
084deda3 +0x061:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084deda8 +0x066:  movl   $0x10d,0x8(%esp)
084dedb0 +0x06e:  movl   $0x1,0x4(%esp)
084dedb8 +0x076:  lea    -0x18(%ebp),%eax
084dedbb +0x079:  mov    %eax,(%esp)
084dedbe +0x07c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dedc3 +0x081:  mov    -0xc(%ebp),%eax
084dedc6 +0x084:  movzbl 0x12(%eax),%eax
084dedca +0x088:  cmp    $0xc1,%al
084dedcc +0x08a:  je     084dedfc <+0xba>
084dedce +0x08c:  movl   $0x0,0x4(%esp)
084dedd6 +0x094:  lea    -0x18(%ebp),%eax
084dedd9 +0x097:  mov    %eax,(%esp)
084deddc +0x09a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dede1 +0x09f:  mov    -0xc(%ebp),%eax
084dede4 +0x0a2:  movzbl 0x12(%eax),%eax
084dede8 +0x0a6:  movzbl %al,%eax
084dedeb +0x0a9:  mov    %eax,0x4(%esp)
084dedef +0x0ad:  lea    -0x18(%ebp),%eax
084dedf2 +0x0b0:  mov    %eax,(%esp)
084dedf5 +0x0b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dedfa +0x0b8:  jmp    084dee0f <+0xcd>
084dedfc +0x0ba:  movl   $0x1,0x4(%esp)
084dee04 +0x0c2:  lea    -0x18(%ebp),%eax
084dee07 +0x0c5:  mov    %eax,(%esp)
084dee0a +0x0c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dee0f +0x0cd:  movl   $0x1,0x4(%esp)
084dee17 +0x0d5:  lea    -0x18(%ebp),%eax
084dee1a +0x0d8:  mov    %eax,(%esp)
084dee1d +0x0db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dee22 +0x0e0:  lea    -0x18(%ebp),%eax
084dee25 +0x0e3:  mov    %eax,0x4(%esp)
084dee29 +0x0e7:  mov    0xc(%ebp),%eax
084dee2c +0x0ea:  mov    %eax,(%esp)
084dee2f +0x0ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dee34 +0x0f2:  mov    $0x0,%ebx
084dee39 +0x0f7:  lea    -0x18(%ebp),%eax
084dee3c +0x0fa:  mov    %eax,(%esp)
084dee3f +0x0fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dee44 +0x102:  jmp    084dee61 <+0x11f>
084dee46 +0x104:  mov    %edx,%ebx
084dee48 +0x106:  mov    %eax,%esi
084dee4a +0x108:  lea    -0x18(%ebp),%eax
084dee4d +0x10b:  mov    %eax,(%esp)
084dee50 +0x10e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dee55 +0x113:  mov    %esi,%eax
084dee57 +0x115:  mov    %ebx,%edx
084dee59 +0x117:  mov    %eax,(%esp)
084dee5c +0x11a:  call   08ae3750 <_Unwind_Resume>
084dee61 +0x11f:  mov    %ebx,%eax
084dee63 +0x121:  add    $0x20,%esp
084dee66 +0x124:  pop    %ebx
084dee67 +0x125:  pop    %esi
084dee68 +0x126:  pop    %ebp
084dee69 +0x127:  ret
```

## 反编译 C

```c
// Inter_GuildCargoUpgrade::dispatch_sig @ 0x84ded42

/* Inter_GuildCargoUpgrade::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoUpgrade::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0xe))) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dedbe to 084dee33 has its CatchHandler @ 084dee46 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x10d);
    if (*(char *)(local_10 + 0x12) == -0x3f) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
