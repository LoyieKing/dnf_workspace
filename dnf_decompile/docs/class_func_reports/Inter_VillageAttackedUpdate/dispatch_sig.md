# dispatch_sig

`_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedUpdate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedUpdate` | `0x084dfbe6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dfbe6  _ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedUpdate::dispatch_sig(CUser*, char*, int)
# range [0x084dfbe6, 0x084dfd15]
084dfbe6 +0x000:  push   %ebp
084dfbe7 +0x001:  mov    %esp,%ebp
084dfbe9 +0x003:  push   %esi
084dfbea +0x004:  push   %ebx
084dfbeb +0x005:  sub    $0x20,%esp
084dfbee +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfbf3 +0x00d:  mov    %eax,(%esp)
084dfbf6 +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084dfbfb +0x015:  test   %al,%al
084dfbfd +0x017:  je     084dfc09 <+0x23>
084dfbff +0x019:  mov    $0x0,%ebx
084dfc04 +0x01e:  jmp    084dfd0d <+0x127>
084dfc09 +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfc0e +0x028:  mov    0x1a8(%eax),%eax
084dfc14 +0x02e:  cmp    $0x1,%eax
084dfc17 +0x031:  je     084dfc29 <+0x43>
084dfc19 +0x033:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084dfc1e +0x038:  mov    0x1a8(%eax),%eax
084dfc24 +0x03e:  cmp    $0x2,%eax
084dfc27 +0x041:  jne    084dfc30 <+0x4a>
084dfc29 +0x043:  mov    $0x1,%eax
084dfc2e +0x048:  jmp    084dfc35 <+0x4f>
084dfc30 +0x04a:  mov    $0x0,%eax
084dfc35 +0x04f:  test   %al,%al
084dfc37 +0x051:  je     084dfc43 <+0x5d>
084dfc39 +0x053:  mov    $0x0,%ebx
084dfc3e +0x058:  jmp    084dfd0d <+0x127>
084dfc43 +0x05d:  mov    0x10(%ebp),%eax
084dfc46 +0x060:  mov    %eax,-0xc(%ebp)
084dfc49 +0x063:  lea    -0x18(%ebp),%eax
084dfc4c +0x066:  mov    %eax,(%esp)
084dfc4f +0x069:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dfc54 +0x06e:  lea    -0x18(%ebp),%eax
084dfc57 +0x071:  mov    %eax,(%esp)
084dfc5a +0x074:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084dfc5f +0x079:  movl   $0xf7,0x8(%esp)
084dfc67 +0x081:  movl   $0x0,0x4(%esp)
084dfc6f +0x089:  lea    -0x18(%ebp),%eax
084dfc72 +0x08c:  mov    %eax,(%esp)
084dfc75 +0x08f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dfc7a +0x094:  mov    -0xc(%ebp),%eax
084dfc7d +0x097:  mov    0xa(%eax),%eax
084dfc80 +0x09a:  mov    %eax,0x4(%esp)
084dfc84 +0x09e:  lea    -0x18(%ebp),%eax
084dfc87 +0x0a1:  mov    %eax,(%esp)
084dfc8a +0x0a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfc8f +0x0a9:  mov    -0xc(%ebp),%eax
084dfc92 +0x0ac:  mov    0xe(%eax),%eax
084dfc95 +0x0af:  mov    %eax,0x4(%esp)
084dfc99 +0x0b3:  lea    -0x18(%ebp),%eax
084dfc9c +0x0b6:  mov    %eax,(%esp)
084dfc9f +0x0b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfca4 +0x0be:  mov    -0xc(%ebp),%eax
084dfca7 +0x0c1:  mov    0x12(%eax),%eax
084dfcaa +0x0c4:  mov    %eax,0x4(%esp)
084dfcae +0x0c8:  lea    -0x18(%ebp),%eax
084dfcb1 +0x0cb:  mov    %eax,(%esp)
084dfcb4 +0x0ce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dfcb9 +0x0d3:  movl   $0x1,0x4(%esp)
084dfcc1 +0x0db:  lea    -0x18(%ebp),%eax
084dfcc4 +0x0de:  mov    %eax,(%esp)
084dfcc7 +0x0e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dfccc +0x0e6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dfcd1 +0x0eb:  lea    -0x18(%ebp),%edx
084dfcd4 +0x0ee:  mov    %edx,0x4(%esp)
084dfcd8 +0x0f2:  mov    %eax,(%esp)
084dfcdb +0x0f5:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dfce0 +0x0fa:  mov    $0x0,%ebx
084dfce5 +0x0ff:  lea    -0x18(%ebp),%eax
084dfce8 +0x102:  mov    %eax,(%esp)
084dfceb +0x105:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfcf0 +0x10a:  jmp    084dfd0d <+0x127>
084dfcf2 +0x10c:  mov    %edx,%ebx
084dfcf4 +0x10e:  mov    %eax,%esi
084dfcf6 +0x110:  lea    -0x18(%ebp),%eax
084dfcf9 +0x113:  mov    %eax,(%esp)
084dfcfc +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dfd01 +0x11b:  mov    %esi,%eax
084dfd03 +0x11d:  mov    %ebx,%edx
084dfd05 +0x11f:  mov    %eax,(%esp)
084dfd08 +0x122:  call   08ae3750 <_Unwind_Resume>
084dfd0d +0x127:  mov    %ebx,%eax
084dfd0f +0x129:  add    $0x20,%esp
084dfd12 +0x12c:  pop    %ebx
084dfd13 +0x12d:  pop    %esi
084dfd14 +0x12e:  pop    %ebp
084dfd15 +0x12f:  ret
```

## 反编译 C

```c
// Inter_VillageAttackedUpdate::dispatch_sig @ 0x84dfbe6

/* Inter_VillageAttackedUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084dfc5a to 084dfcdf has its CatchHandler @ 084dfcf2 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf7);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
