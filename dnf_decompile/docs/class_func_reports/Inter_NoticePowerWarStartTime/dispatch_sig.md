# dispatch_sig

`_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci`

`Inter_NoticePowerWarStartTime::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePowerWarStartTime` | `0x084d4bd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4bd2  _ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci
#           Inter_NoticePowerWarStartTime::dispatch_sig(CUser*, char*, int)
# range [0x084d4bd2, 0x084d4d45]
084d4bd2 +0x000:  push   %ebp
084d4bd3 +0x001:  mov    %esp,%ebp
084d4bd5 +0x003:  push   %esi
084d4bd6 +0x004:  push   %ebx
084d4bd7 +0x005:  sub    $0x30,%esp
084d4bda +0x008:  mov    0x10(%ebp),%eax
084d4bdd +0x00b:  mov    %eax,-0xc(%ebp)
084d4be0 +0x00e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084d4be5 +0x013:  mov    0x1a8(%eax),%eax
084d4beb +0x019:  cmp    $0x1,%eax
084d4bee +0x01c:  je     084d4c00 <+0x2e>
084d4bf0 +0x01e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084d4bf5 +0x023:  mov    0x1a8(%eax),%eax
084d4bfb +0x029:  cmp    $0x2,%eax
084d4bfe +0x02c:  jne    084d4c07 <+0x35>
084d4c00 +0x02e:  mov    $0x1,%eax
084d4c05 +0x033:  jmp    084d4c0c <+0x3a>
084d4c07 +0x035:  mov    $0x0,%eax
084d4c0c +0x03a:  test   %al,%al
084d4c0e +0x03c:  je     084d4c1a <+0x48>
084d4c10 +0x03e:  mov    $0x0,%ebx
084d4c15 +0x043:  jmp    084d4d3d <+0x16b>
084d4c1a +0x048:  mov    -0xc(%ebp),%eax
084d4c1d +0x04b:  movzbl 0xd(%eax),%eax
084d4c21 +0x04f:  movzbl %al,%esi
084d4c24 +0x052:  mov    -0xc(%ebp),%eax
084d4c27 +0x055:  movzbl 0xc(%eax),%eax
084d4c2b +0x059:  movzbl %al,%ebx
084d4c2e +0x05c:  mov    -0xc(%ebp),%eax
084d4c31 +0x05f:  movzbl 0xb(%eax),%eax
084d4c35 +0x063:  movzbl %al,%ecx
084d4c38 +0x066:  mov    -0xc(%ebp),%eax
084d4c3b +0x069:  movzbl 0xa(%eax),%eax
084d4c3f +0x06d:  movzbl %al,%edx
084d4c42 +0x070:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084d4c47 +0x075:  mov    %esi,0x10(%esp)
084d4c4b +0x079:  mov    %ebx,0xc(%esp)
084d4c4f +0x07d:  mov    %ecx,0x8(%esp)
084d4c53 +0x081:  mov    %edx,0x4(%esp)
084d4c57 +0x085:  mov    %eax,(%esp)
084d4c5a +0x088:  call   0847fa2e <_ZN13CPowerManager20SetPowerWarStartTimeEhhhh>  ; CPowerManager::SetPowerWarStartTime(unsigned char, unsigned char, unsigned char, unsigned char)
084d4c5f +0x08d:  lea    -0x18(%ebp),%eax
084d4c62 +0x090:  mov    %eax,(%esp)
084d4c65 +0x093:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4c6a +0x098:  movl   $0xa1,0x8(%esp)
084d4c72 +0x0a0:  movl   $0x0,0x4(%esp)
084d4c7a +0x0a8:  lea    -0x18(%ebp),%eax
084d4c7d +0x0ab:  mov    %eax,(%esp)
084d4c80 +0x0ae:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d4c85 +0x0b3:  mov    -0xc(%ebp),%eax
084d4c88 +0x0b6:  movzbl 0xa(%eax),%eax
084d4c8c +0x0ba:  movzbl %al,%eax
084d4c8f +0x0bd:  mov    %eax,0x4(%esp)
084d4c93 +0x0c1:  lea    -0x18(%ebp),%eax
084d4c96 +0x0c4:  mov    %eax,(%esp)
084d4c99 +0x0c7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4c9e +0x0cc:  mov    -0xc(%ebp),%eax
084d4ca1 +0x0cf:  movzbl 0xb(%eax),%eax
084d4ca5 +0x0d3:  movzbl %al,%eax
084d4ca8 +0x0d6:  mov    %eax,0x4(%esp)
084d4cac +0x0da:  lea    -0x18(%ebp),%eax
084d4caf +0x0dd:  mov    %eax,(%esp)
084d4cb2 +0x0e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4cb7 +0x0e5:  mov    -0xc(%ebp),%eax
084d4cba +0x0e8:  movzbl 0xc(%eax),%eax
084d4cbe +0x0ec:  movzbl %al,%eax
084d4cc1 +0x0ef:  mov    %eax,0x4(%esp)
084d4cc5 +0x0f3:  lea    -0x18(%ebp),%eax
084d4cc8 +0x0f6:  mov    %eax,(%esp)
084d4ccb +0x0f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4cd0 +0x0fe:  mov    -0xc(%ebp),%eax
084d4cd3 +0x101:  movzbl 0xd(%eax),%eax
084d4cd7 +0x105:  movzbl %al,%eax
084d4cda +0x108:  mov    %eax,0x4(%esp)
084d4cde +0x10c:  lea    -0x18(%ebp),%eax
084d4ce1 +0x10f:  mov    %eax,(%esp)
084d4ce4 +0x112:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4ce9 +0x117:  movl   $0x1,0x4(%esp)
084d4cf1 +0x11f:  lea    -0x18(%ebp),%eax
084d4cf4 +0x122:  mov    %eax,(%esp)
084d4cf7 +0x125:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d4cfc +0x12a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d4d01 +0x12f:  lea    -0x18(%ebp),%edx
084d4d04 +0x132:  mov    %edx,0x4(%esp)
084d4d08 +0x136:  mov    %eax,(%esp)
084d4d0b +0x139:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d4d10 +0x13e:  mov    $0x0,%ebx
084d4d15 +0x143:  lea    -0x18(%ebp),%eax
084d4d18 +0x146:  mov    %eax,(%esp)
084d4d1b +0x149:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4d20 +0x14e:  jmp    084d4d3d <+0x16b>
084d4d22 +0x150:  mov    %edx,%ebx
084d4d24 +0x152:  mov    %eax,%esi
084d4d26 +0x154:  lea    -0x18(%ebp),%eax
084d4d29 +0x157:  mov    %eax,(%esp)
084d4d2c +0x15a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4d31 +0x15f:  mov    %esi,%eax
084d4d33 +0x161:  mov    %ebx,%edx
084d4d35 +0x163:  mov    %eax,(%esp)
084d4d38 +0x166:  call   08ae3750 <_Unwind_Resume>
084d4d3d +0x16b:  mov    %ebx,%eax
084d4d3f +0x16d:  add    $0x30,%esp
084d4d42 +0x170:  pop    %ebx
084d4d43 +0x171:  pop    %esi
084d4d44 +0x172:  pop    %ebp
084d4d45 +0x173:  ret
```

## 反编译 C

```c
// Inter_NoticePowerWarStartTime::dispatch_sig @ 0x84d4bd2

/* Inter_NoticePowerWarStartTime::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarStartTime::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = G_CEnvironment();
  if ((*(int *)(iVar2 + 0x1a8) == 1) || (iVar2 = G_CEnvironment(), *(int *)(iVar2 + 0x1a8) == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CPowerManager::SetPowerWarStartTime
              (GlobalData::s_power_manager,*(uchar *)(local_10 + 10),*(uchar *)(local_10 + 0xb),
               *(uchar *)(local_10 + 0xc),*(uchar *)(local_10 + 0xd));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4c80 to 084d4d0f has its CatchHandler @ 084d4d22 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xd));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
