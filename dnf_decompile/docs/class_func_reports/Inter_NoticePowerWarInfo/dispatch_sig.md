# dispatch_sig

`_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci`

`Inter_NoticePowerWarInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePowerWarInfo` | `0x084d4e18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4e18  _ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci
#           Inter_NoticePowerWarInfo::dispatch_sig(CUser*, char*, int)
# range [0x084d4e18, 0x084d4f45]
084d4e18 +0x000:  push   %ebp
084d4e19 +0x001:  mov    %esp,%ebp
084d4e1b +0x003:  push   %esi
084d4e1c +0x004:  push   %ebx
084d4e1d +0x005:  sub    $0x20,%esp
084d4e20 +0x008:  mov    0x10(%ebp),%eax
084d4e23 +0x00b:  mov    %eax,-0xc(%ebp)
084d4e26 +0x00e:  mov    -0xc(%ebp),%eax
084d4e29 +0x011:  mov    0xe(%eax),%ebx
084d4e2c +0x014:  mov    -0xc(%ebp),%eax
084d4e2f +0x017:  mov    0xa(%eax),%ecx
084d4e32 +0x01a:  mov    -0xc(%ebp),%eax
084d4e35 +0x01d:  movzbl 0x12(%eax),%eax
084d4e39 +0x021:  movsbl %al,%edx
084d4e3c +0x024:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084d4e41 +0x029:  mov    %ebx,0xc(%esp)
084d4e45 +0x02d:  mov    %ecx,0x8(%esp)
084d4e49 +0x031:  mov    %edx,0x4(%esp)
084d4e4d +0x035:  mov    %eax,(%esp)
084d4e50 +0x038:  call   0847eb76 <_ZN13CPowerManager12SetPowerInfoEcii>  ; CPowerManager::SetPowerInfo(char, int, int)
084d4e55 +0x03d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d4e5a +0x042:  mov    %eax,(%esp)
084d4e5d +0x045:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084d4e62 +0x04a:  test   %al,%al
084d4e64 +0x04c:  je     084d4e70 <+0x58>
084d4e66 +0x04e:  mov    $0x0,%ebx
084d4e6b +0x053:  jmp    084d4f3d <+0x125>
084d4e70 +0x058:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084d4e75 +0x05d:  mov    0x1a8(%eax),%eax
084d4e7b +0x063:  cmp    $0x1,%eax
084d4e7e +0x066:  je     084d4e90 <+0x78>
084d4e80 +0x068:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084d4e85 +0x06d:  mov    0x1a8(%eax),%eax
084d4e8b +0x073:  cmp    $0x2,%eax
084d4e8e +0x076:  jne    084d4e97 <+0x7f>
084d4e90 +0x078:  mov    $0x1,%eax
084d4e95 +0x07d:  jmp    084d4e9c <+0x84>
084d4e97 +0x07f:  mov    $0x0,%eax
084d4e9c +0x084:  test   %al,%al
084d4e9e +0x086:  je     084d4eaa <+0x92>
084d4ea0 +0x088:  mov    $0x0,%ebx
084d4ea5 +0x08d:  jmp    084d4f3d <+0x125>
084d4eaa +0x092:  lea    -0x18(%ebp),%eax
084d4ead +0x095:  mov    %eax,(%esp)
084d4eb0 +0x098:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4eb5 +0x09d:  movl   $0xbc,0x8(%esp)
084d4ebd +0x0a5:  movl   $0x0,0x4(%esp)
084d4ec5 +0x0ad:  lea    -0x18(%ebp),%eax
084d4ec8 +0x0b0:  mov    %eax,(%esp)
084d4ecb +0x0b3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d4ed0 +0x0b8:  mov    -0xc(%ebp),%eax
084d4ed3 +0x0bb:  movzbl 0x12(%eax),%eax
084d4ed7 +0x0bf:  movsbl %al,%eax
084d4eda +0x0c2:  mov    %eax,0x4(%esp)
084d4ede +0x0c6:  lea    -0x18(%ebp),%eax
084d4ee1 +0x0c9:  mov    %eax,(%esp)
084d4ee4 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4ee9 +0x0d1:  movl   $0x1,0x4(%esp)
084d4ef1 +0x0d9:  lea    -0x18(%ebp),%eax
084d4ef4 +0x0dc:  mov    %eax,(%esp)
084d4ef7 +0x0df:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d4efc +0x0e4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d4f01 +0x0e9:  lea    -0x18(%ebp),%edx
084d4f04 +0x0ec:  mov    %edx,0x4(%esp)
084d4f08 +0x0f0:  mov    %eax,(%esp)
084d4f0b +0x0f3:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d4f10 +0x0f8:  mov    $0x0,%ebx
084d4f15 +0x0fd:  lea    -0x18(%ebp),%eax
084d4f18 +0x100:  mov    %eax,(%esp)
084d4f1b +0x103:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4f20 +0x108:  jmp    084d4f3d <+0x125>
084d4f22 +0x10a:  mov    %edx,%ebx
084d4f24 +0x10c:  mov    %eax,%esi
084d4f26 +0x10e:  lea    -0x18(%ebp),%eax
084d4f29 +0x111:  mov    %eax,(%esp)
084d4f2c +0x114:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4f31 +0x119:  mov    %esi,%eax
084d4f33 +0x11b:  mov    %ebx,%edx
084d4f35 +0x11d:  mov    %eax,(%esp)
084d4f38 +0x120:  call   08ae3750 <_Unwind_Resume>
084d4f3d +0x125:  mov    %ebx,%eax
084d4f3f +0x127:  add    $0x20,%esp
084d4f42 +0x12a:  pop    %ebx
084d4f43 +0x12b:  pop    %esi
084d4f44 +0x12c:  pop    %ebp
084d4f45 +0x12d:  ret
```

## 反编译 C

```c
// Inter_NoticePowerWarInfo::dispatch_sig @ 0x84d4e18

/* Inter_NoticePowerWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  CPowerManager::SetPowerInfo
            (GlobalData::s_power_manager,*(char *)(param_3 + 0x12),*(int *)(param_3 + 10),
             *(int *)(param_3 + 0xe));
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
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4ecb to 084d4f0f has its CatchHandler @ 084d4f22 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbc);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*(char *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
