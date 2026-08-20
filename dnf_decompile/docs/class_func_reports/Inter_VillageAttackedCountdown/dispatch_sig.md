# dispatch_sig

`_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedCountdown::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedCountdown` | `0x084dfae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dfae0  _ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedCountdown::dispatch_sig(CUser*, char*, int)
# range [0x084dfae0, 0x084dfbe5]
084dfae0 +0x000:  push   %ebp
084dfae1 +0x001:  mov    %esp,%ebp
084dfae3 +0x003:  push   %esi
084dfae4 +0x004:  push   %ebx
084dfae5 +0x005:  sub    $0x20,%esp
084dfae8 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfaed +0x00d:  mov    %eax,(%esp)
084dfaf0 +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084dfaf5 +0x015:  test   %al,%al
084dfaf7 +0x017:  je     084dfb03 <+0x23>
084dfaf9 +0x019:  mov    $0x0,%ebx
084dfafe +0x01e:  jmp    084dfbdd <+0xfd>
084dfb03 +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfb08 +0x028:  mov    0x1a8(%eax),%eax
084dfb0e +0x02e:  cmp    $0x1,%eax
084dfb11 +0x031:  je     084dfb23 <+0x43>
084dfb13 +0x033:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfb18 +0x038:  mov    0x1a8(%eax),%eax
084dfb1e +0x03e:  cmp    $0x2,%eax
084dfb21 +0x041:  jne    084dfb2a <+0x4a>
084dfb23 +0x043:  mov    $0x1,%eax
084dfb28 +0x048:  jmp    084dfb2f <+0x4f>
084dfb2a +0x04a:  mov    $0x0,%eax
084dfb2f +0x04f:  test   %al,%al
084dfb31 +0x051:  je     084dfb3d <+0x5d>
084dfb33 +0x053:  mov    $0x0,%ebx
084dfb38 +0x058:  jmp    084dfbdd <+0xfd>
084dfb3d +0x05d:  mov    0x10(%ebp),%eax
084dfb40 +0x060:  mov    %eax,-0xc(%ebp)
084dfb43 +0x063:  lea    -0x18(%ebp),%eax
084dfb46 +0x066:  mov    %eax,(%esp)
084dfb49 +0x069:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dfb4e +0x06e:  lea    -0x18(%ebp),%eax
084dfb51 +0x071:  mov    %eax,(%esp)
084dfb54 +0x074:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084dfb59 +0x079:  movl   $0xf1,0x8(%esp)
084dfb61 +0x081:  movl   $0x0,0x4(%esp)
084dfb69 +0x089:  lea    -0x18(%ebp),%eax
084dfb6c +0x08c:  mov    %eax,(%esp)
084dfb6f +0x08f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dfb74 +0x094:  mov    -0xc(%ebp),%eax
084dfb77 +0x097:  mov    0xa(%eax),%eax
084dfb7a +0x09a:  mov    %eax,0x4(%esp)
084dfb7e +0x09e:  lea    -0x18(%ebp),%eax
084dfb81 +0x0a1:  mov    %eax,(%esp)
084dfb84 +0x0a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfb89 +0x0a9:  movl   $0x1,0x4(%esp)
084dfb91 +0x0b1:  lea    -0x18(%ebp),%eax
084dfb94 +0x0b4:  mov    %eax,(%esp)
084dfb97 +0x0b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dfb9c +0x0bc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfba1 +0x0c1:  lea    -0x18(%ebp),%edx
084dfba4 +0x0c4:  mov    %edx,0x4(%esp)
084dfba8 +0x0c8:  mov    %eax,(%esp)
084dfbab +0x0cb:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dfbb0 +0x0d0:  mov    $0x0,%ebx
084dfbb5 +0x0d5:  lea    -0x18(%ebp),%eax
084dfbb8 +0x0d8:  mov    %eax,(%esp)
084dfbbb +0x0db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfbc0 +0x0e0:  jmp    084dfbdd <+0xfd>
084dfbc2 +0x0e2:  mov    %edx,%ebx
084dfbc4 +0x0e4:  mov    %eax,%esi
084dfbc6 +0x0e6:  lea    -0x18(%ebp),%eax
084dfbc9 +0x0e9:  mov    %eax,(%esp)
084dfbcc +0x0ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfbd1 +0x0f1:  mov    %esi,%eax
084dfbd3 +0x0f3:  mov    %ebx,%edx
084dfbd5 +0x0f5:  mov    %eax,(%esp)
084dfbd8 +0x0f8:  call   08ae3750 <_Unwind_Resume>
084dfbdd +0x0fd:  mov    %ebx,%eax
084dfbdf +0x0ff:  add    $0x20,%esp
084dfbe2 +0x102:  pop    %ebx
084dfbe3 +0x103:  pop    %esi
084dfbe4 +0x104:  pop    %ebp
084dfbe5 +0x105:  ret
```

## 反编译 C

```c
// Inter_VillageAttackedCountdown::dispatch_sig @ 0x84dfae0

/* Inter_VillageAttackedCountdown::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedCountdown::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    if ((*(int *)(iVar4 + 0x1a8) == 1) || (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_10 = param_3;
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dfb54 to 084dfbaf has its CatchHandler @ 084dfbc2 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
