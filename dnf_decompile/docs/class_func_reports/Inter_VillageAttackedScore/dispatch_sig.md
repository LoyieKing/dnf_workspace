# dispatch_sig

`_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedScore::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedScore` | `0x084dfd16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dfd16  _ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedScore::dispatch_sig(CUser*, char*, int)
# range [0x084dfd16, 0x084dfea5]
084dfd16 +0x000:  push   %ebp
084dfd17 +0x001:  mov    %esp,%ebp
084dfd19 +0x003:  push   %esi
084dfd1a +0x004:  push   %ebx
084dfd1b +0x005:  sub    $0x20,%esp
084dfd1e +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfd23 +0x00d:  mov    %eax,(%esp)
084dfd26 +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084dfd2b +0x015:  test   %al,%al
084dfd2d +0x017:  je     084dfd39 <+0x23>
084dfd2f +0x019:  mov    $0x0,%ebx
084dfd34 +0x01e:  jmp    084dfe9c <+0x186>
084dfd39 +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfd3e +0x028:  mov    0x1a8(%eax),%eax
084dfd44 +0x02e:  cmp    $0x1,%eax
084dfd47 +0x031:  je     084dfd59 <+0x43>
084dfd49 +0x033:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfd4e +0x038:  mov    0x1a8(%eax),%eax
084dfd54 +0x03e:  cmp    $0x2,%eax
084dfd57 +0x041:  jne    084dfd60 <+0x4a>
084dfd59 +0x043:  mov    $0x1,%eax
084dfd5e +0x048:  jmp    084dfd65 <+0x4f>
084dfd60 +0x04a:  mov    $0x0,%eax
084dfd65 +0x04f:  test   %al,%al
084dfd67 +0x051:  je     084dfd73 <+0x5d>
084dfd69 +0x053:  mov    $0x0,%ebx
084dfd6e +0x058:  jmp    084dfe9c <+0x186>
084dfd73 +0x05d:  mov    0xc(%ebp),%eax
084dfd76 +0x060:  mov    %eax,(%esp)
084dfd79 +0x063:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084dfd7e +0x068:  test   %eax,%eax
084dfd80 +0x06a:  sete   %al
084dfd83 +0x06d:  test   %al,%al
084dfd85 +0x06f:  je     084dfd91 <+0x7b>
084dfd87 +0x071:  mov    $0x0,%ebx
084dfd8c +0x076:  jmp    084dfe9c <+0x186>
084dfd91 +0x07b:  mov    0x10(%ebp),%eax
084dfd94 +0x07e:  mov    %eax,-0xc(%ebp)
084dfd97 +0x081:  movl   $0xffffffff,0x4(%esp)
084dfd9f +0x089:  mov    0xc(%ebp),%eax
084dfda2 +0x08c:  mov    %eax,(%esp)
084dfda5 +0x08f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dfdaa +0x094:  mov    %eax,%edx
084dfdac +0x096:  mov    -0xc(%ebp),%eax
084dfdaf +0x099:  mov    0xe(%eax),%eax
084dfdb2 +0x09c:  cmp    %eax,%edx
084dfdb4 +0x09e:  setne  %al
084dfdb7 +0x0a1:  test   %al,%al
084dfdb9 +0x0a3:  je     084dfdc5 <+0xaf>
084dfdbb +0x0a5:  mov    $0x0,%ebx
084dfdc0 +0x0aa:  jmp    084dfe9c <+0x186>
084dfdc5 +0x0af:  lea    -0x18(%ebp),%eax
084dfdc8 +0x0b2:  mov    %eax,(%esp)
084dfdcb +0x0b5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dfdd0 +0x0ba:  lea    -0x18(%ebp),%eax
084dfdd3 +0x0bd:  mov    %eax,(%esp)
084dfdd6 +0x0c0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084dfddb +0x0c5:  movl   $0xf8,0x8(%esp)
084dfde3 +0x0cd:  movl   $0x0,0x4(%esp)
084dfdeb +0x0d5:  lea    -0x18(%ebp),%eax
084dfdee +0x0d8:  mov    %eax,(%esp)
084dfdf1 +0x0db:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dfdf6 +0x0e0:  mov    -0xc(%ebp),%eax
084dfdf9 +0x0e3:  mov    0x12(%eax),%eax
084dfdfc +0x0e6:  mov    %eax,0x4(%esp)
084dfe00 +0x0ea:  lea    -0x18(%ebp),%eax
084dfe03 +0x0ed:  mov    %eax,(%esp)
084dfe06 +0x0f0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfe0b +0x0f5:  mov    -0xc(%ebp),%eax
084dfe0e +0x0f8:  mov    0x16(%eax),%eax
084dfe11 +0x0fb:  mov    %eax,0x4(%esp)
084dfe15 +0x0ff:  lea    -0x18(%ebp),%eax
084dfe18 +0x102:  mov    %eax,(%esp)
084dfe1b +0x105:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfe20 +0x10a:  mov    -0xc(%ebp),%eax
084dfe23 +0x10d:  mov    0x1a(%eax),%eax
084dfe26 +0x110:  mov    %eax,0x4(%esp)
084dfe2a +0x114:  lea    -0x18(%ebp),%eax
084dfe2d +0x117:  mov    %eax,(%esp)
084dfe30 +0x11a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfe35 +0x11f:  mov    -0xc(%ebp),%eax
084dfe38 +0x122:  mov    0x1e(%eax),%eax
084dfe3b +0x125:  mov    %eax,0x4(%esp)
084dfe3f +0x129:  lea    -0x18(%ebp),%eax
084dfe42 +0x12c:  mov    %eax,(%esp)
084dfe45 +0x12f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfe4a +0x134:  movl   $0x1,0x4(%esp)
084dfe52 +0x13c:  lea    -0x18(%ebp),%eax
084dfe55 +0x13f:  mov    %eax,(%esp)
084dfe58 +0x142:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dfe5d +0x147:  lea    -0x18(%ebp),%eax
084dfe60 +0x14a:  mov    %eax,0x4(%esp)
084dfe64 +0x14e:  mov    0xc(%ebp),%eax
084dfe67 +0x151:  mov    %eax,(%esp)
084dfe6a +0x154:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dfe6f +0x159:  mov    $0x0,%ebx
084dfe74 +0x15e:  lea    -0x18(%ebp),%eax
084dfe77 +0x161:  mov    %eax,(%esp)
084dfe7a +0x164:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfe7f +0x169:  jmp    084dfe9c <+0x186>
084dfe81 +0x16b:  mov    %edx,%ebx
084dfe83 +0x16d:  mov    %eax,%esi
084dfe85 +0x16f:  lea    -0x18(%ebp),%eax
084dfe88 +0x172:  mov    %eax,(%esp)
084dfe8b +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfe90 +0x17a:  mov    %esi,%eax
084dfe92 +0x17c:  mov    %ebx,%edx
084dfe94 +0x17e:  mov    %eax,(%esp)
084dfe97 +0x181:  call   08ae3750 <_Unwind_Resume>
084dfe9c +0x186:  mov    %ebx,%eax
084dfe9e +0x188:  add    $0x20,%esp
084dfea1 +0x18b:  pop    %ebx
084dfea2 +0x18c:  pop    %esi
084dfea3 +0x18d:  pop    %ebp
084dfea4 +0x18e:  ret
084dfea5 +0x18f:  nop
```

## 反编译 C

```c
// Inter_VillageAttackedScore::dispatch_sig @ 0x84dfd16

/* Inter_VillageAttackedScore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedScore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)
       ) {
      local_10 = param_3;
      iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar3 == *(int *)(local_10 + 0xe)) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dfdd6 to 084dfe6e has its CatchHandler @ 084dfe81 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf8);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1a));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1e));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
  }
  return 0;
}
```
