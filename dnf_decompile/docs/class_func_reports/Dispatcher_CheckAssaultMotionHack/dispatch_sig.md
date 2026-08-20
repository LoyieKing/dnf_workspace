# dispatch_sig

`_ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CheckAssaultMotionHack` | `0x08221f3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08221f3c  _ZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)
# range [0x08221f3c, 0x0822226f]
08221f3c +0x000:  push   %ebp
08221f3d +0x001:  mov    %esp,%ebp
08221f3f +0x003:  push   %ebx
08221f40 +0x004:  sub    $0x64,%esp
08221f43 +0x007:  cmpl   $0x0,0xc(%ebp)
08221f47 +0x00b:  jne    08221f72 <+0x36>
08221f49 +0x00d:  movl   $0x0,0xc(%esp)
08221f51 +0x015:  movl   $0x0,0x8(%esp)
08221f59 +0x01d:  movl   $&_ZZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08221f61 +0x025:  movl   $0xdb73,(%esp)
08221f68 +0x02c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08221f6d +0x031:  jmp    0822226a <+0x32e>
08221f72 +0x036:  mov    0xc(%ebp),%eax
08221f75 +0x039:  mov    %eax,(%esp)
08221f78 +0x03c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08221f7d +0x041:  test   %eax,%eax
08221f7f +0x043:  sete   %al
08221f82 +0x046:  test   %al,%al
08221f84 +0x048:  je     08221f90 <+0x54>
08221f86 +0x04a:  mov    $0x0,%eax
08221f8b +0x04f:  jmp    0822226a <+0x32e>
08221f90 +0x054:  movl   $0x0,-0x18(%ebp)
08221f97 +0x05b:  movl   $0x0,-0x1c(%ebp)
08221f9e +0x062:  lea    -0x18(%ebp),%eax
08221fa1 +0x065:  mov    %eax,0x4(%esp)
08221fa5 +0x069:  mov    0x10(%ebp),%eax
08221fa8 +0x06c:  mov    %eax,(%esp)
08221fab +0x06f:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08221fb0 +0x074:  xor    $0x1,%eax
08221fb3 +0x077:  test   %al,%al
08221fb5 +0x079:  je     08221fe0 <+0xa4>
08221fb7 +0x07b:  movl   $0x0,0xc(%esp)
08221fbf +0x083:  movl   $0x0,0x8(%esp)
08221fc7 +0x08b:  movl   $&_ZZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08221fcf +0x093:  movl   $0xdb7e,(%esp)
08221fd6 +0x09a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08221fdb +0x09f:  jmp    0822226a <+0x32e>
08221fe0 +0x0a4:  lea    -0x1c(%ebp),%eax
08221fe3 +0x0a7:  mov    %eax,0x4(%esp)
08221fe7 +0x0ab:  mov    0x10(%ebp),%eax
08221fea +0x0ae:  mov    %eax,(%esp)
08221fed +0x0b1:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08221ff2 +0x0b6:  xor    $0x1,%eax
08221ff5 +0x0b9:  test   %al,%al
08221ff7 +0x0bb:  je     08222022 <+0xe6>
08221ff9 +0x0bd:  movl   $0x0,0xc(%esp)
08222001 +0x0c5:  movl   $0x0,0x8(%esp)
08222009 +0x0cd:  movl   $&_ZZN33Dispatcher_CheckAssaultMotionHack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222011 +0x0d5:  movl   $0xdb7f,(%esp)
08222018 +0x0dc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822201d +0x0e1:  jmp    0822226a <+0x32e>
08222022 +0x0e6:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08222027 +0x0eb:  mov    %eax,(%esp)
0822202a +0x0ee:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0822202f +0x0f3:  test   %al,%al
08222031 +0x0f5:  je     08222049 <+0x10d>
08222033 +0x0f7:  mov    0xc(%ebp),%eax
08222036 +0x0fa:  mov    %eax,(%esp)
08222039 +0x0fd:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0822203e +0x102:  cmp    $0x7,%al
08222040 +0x104:  jne    08222049 <+0x10d>
08222042 +0x106:  mov    $0x1,%eax
08222047 +0x10b:  jmp    0822204e <+0x112>
08222049 +0x10d:  mov    $0x0,%eax
0822204e +0x112:  test   %al,%al
08222050 +0x114:  je     08222058 <+0x11c>
08222052 +0x116:  movb   $0x1,-0x11(%ebp)
08222056 +0x11a:  jmp    0822205c <+0x120>
08222058 +0x11c:  movb   $0x0,-0x11(%ebp)
0822205c +0x120:  mov    -0x18(%ebp),%eax
0822205f +0x123:  cmp    $0x2710,%eax
08222064 +0x128:  jbe    08222130 <+0x1f4>
0822206a +0x12e:  movl   $0x0,-0x10(%ebp)
08222071 +0x135:  movl   $0x0,-0xc(%ebp)
08222078 +0x13c:  mov    -0x18(%ebp),%eax
0822207b +0x13f:  mov    %eax,-0x3c(%ebp)
0822207e +0x142:  mov    $0xd1b71759,%edx
08222083 +0x147:  mov    -0x3c(%ebp),%eax
08222086 +0x14a:  mul    %edx
08222088 +0x14c:  mov    %edx,%eax
0822208a +0x14e:  shr    $0xd,%eax
0822208d +0x151:  mov    %eax,-0x10(%ebp)
08222090 +0x154:  mov    -0x18(%ebp),%ecx
08222093 +0x157:  mov    $0xd1b71759,%edx
08222098 +0x15c:  mov    %ecx,%eax
0822209a +0x15e:  mul    %edx
0822209c +0x160:  mov    %edx,%eax
0822209e +0x162:  shr    $0xd,%eax
082220a1 +0x165:  imul   $0x2710,%eax,%eax
082220a7 +0x16b:  mov    %ecx,%edx
082220a9 +0x16d:  sub    %eax,%edx
082220ab +0x16f:  mov    %edx,%eax
082220ad +0x171:  mov    %eax,-0xc(%ebp)
082220b0 +0x174:  cmpb   $0x0,-0x11(%ebp)
082220b4 +0x178:  je     082220f1 <+0x1b5>
082220b6 +0x17a:  mov    -0x10(%ebp),%ebx
082220b9 +0x17d:  mov    0xc(%ebp),%eax
082220bc +0x180:  mov    %eax,(%esp)
082220bf +0x183:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082220c4 +0x188:  movl   $0x0,0x14(%esp)
082220cc +0x190:  mov    %ebx,0x10(%esp)
082220d0 +0x194:  movl   $0x1,0xc(%esp)
082220d8 +0x19c:  movl   $0x7c,0x8(%esp)
082220e0 +0x1a4:  mov    0xc(%ebp),%edx
082220e3 +0x1a7:  mov    %edx,0x4(%esp)
082220e7 +0x1ab:  mov    %eax,(%esp)
082220ea +0x1ae:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082220ef +0x1b3:  jmp    0822212a <+0x1ee>
082220f1 +0x1b5:  mov    -0x10(%ebp),%ebx
082220f4 +0x1b8:  mov    0xc(%ebp),%eax
082220f7 +0x1bb:  mov    %eax,(%esp)
082220fa +0x1be:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082220ff +0x1c3:  movl   $0x0,0x14(%esp)
08222107 +0x1cb:  mov    %ebx,0x10(%esp)
0822210b +0x1cf:  movl   $0x1,0xc(%esp)
08222113 +0x1d7:  movl   $0x7a,0x8(%esp)
0822211b +0x1df:  mov    0xc(%ebp),%edx
0822211e +0x1e2:  mov    %edx,0x4(%esp)
08222122 +0x1e6:  mov    %eax,(%esp)
08222125 +0x1e9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0822212a +0x1ee:  mov    -0xc(%ebp),%eax
0822212d +0x1f1:  mov    %eax,-0x18(%ebp)
08222130 +0x1f4:  mov    0xc(%ebp),%eax
08222133 +0x1f7:  mov    %eax,(%esp)
08222136 +0x1fa:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0822213b +0x1ff:  cmp    $0x3,%eax
0822213e +0x202:  je     0822215f <+0x223>
08222140 +0x204:  mov    0xc(%ebp),%eax
08222143 +0x207:  mov    %eax,(%esp)
08222146 +0x20a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0822214b +0x20f:  cmp    $0x4,%eax
0822214e +0x212:  jne    08222166 <+0x22a>
08222150 +0x214:  mov    0xc(%ebp),%eax
08222153 +0x217:  mov    %eax,(%esp)
08222156 +0x21a:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0822215b +0x21f:  cmp    $0x2,%al
0822215d +0x221:  jne    08222166 <+0x22a>
0822215f +0x223:  mov    $0x1,%eax
08222164 +0x228:  jmp    0822216b <+0x22f>
08222166 +0x22a:  mov    $0x0,%eax
0822216b +0x22f:  test   %al,%al
0822216d +0x231:  je     082221a9 <+0x26d>
0822216f +0x233:  mov    -0x18(%ebp),%eax
08222172 +0x236:  mov    $0x0,%edx
08222177 +0x23b:  mov    %eax,-0x30(%ebp)
0822217a +0x23e:  mov    %edx,-0x2c(%ebp)
0822217d +0x241:  fildll -0x30(%ebp)
08222180 +0x244:  fldl   &data#78e7013f(.rodata)
08222186 +0x24a:  fmulp  %st,%st(1)
08222188 +0x24c:  fnstcw -0x32(%ebp)
0822218b +0x24f:  movzwl -0x32(%ebp),%eax
0822218f +0x253:  mov    $0xc,%ah
08222191 +0x255:  mov    %ax,-0x34(%ebp)
08222195 +0x259:  fldcw  -0x34(%ebp)
08222198 +0x25c:  fistpll -0x30(%ebp)
0822219b +0x25f:  fldcw  -0x32(%ebp)
0822219e +0x262:  mov    -0x30(%ebp),%eax
082221a1 +0x265:  mov    -0x2c(%ebp),%edx
082221a4 +0x268:  mov    %eax,-0x18(%ebp)
082221a7 +0x26b:  jmp    082221e1 <+0x2a5>
082221a9 +0x26d:  mov    -0x18(%ebp),%eax
082221ac +0x270:  mov    $0x0,%edx
082221b1 +0x275:  mov    %eax,-0x30(%ebp)
082221b4 +0x278:  mov    %edx,-0x2c(%ebp)
082221b7 +0x27b:  fildll -0x30(%ebp)
082221ba +0x27e:  fldl   &data#7055a9cf(.rodata)
082221c0 +0x284:  fmulp  %st,%st(1)
082221c2 +0x286:  fnstcw -0x32(%ebp)
082221c5 +0x289:  movzwl -0x32(%ebp),%eax
082221c9 +0x28d:  mov    $0xc,%ah
082221cb +0x28f:  mov    %ax,-0x34(%ebp)
082221cf +0x293:  fldcw  -0x34(%ebp)
082221d2 +0x296:  fistpll -0x30(%ebp)
082221d5 +0x299:  fldcw  -0x32(%ebp)
082221d8 +0x29c:  mov    -0x30(%ebp),%eax
082221db +0x29f:  mov    -0x2c(%ebp),%edx
082221de +0x2a2:  mov    %eax,-0x18(%ebp)
082221e1 +0x2a5:  mov    -0x1c(%ebp),%edx
082221e4 +0x2a8:  mov    -0x18(%ebp),%eax
082221e7 +0x2ab:  cmp    %eax,%edx
082221e9 +0x2ad:  jae    08222265 <+0x329>
082221eb +0x2af:  cmpb   $0x0,-0x11(%ebp)
082221ef +0x2b3:  je     0822222c <+0x2f0>
082221f1 +0x2b5:  mov    -0x18(%ebp),%ebx
082221f4 +0x2b8:  mov    0xc(%ebp),%eax
082221f7 +0x2bb:  mov    %eax,(%esp)
082221fa +0x2be:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082221ff +0x2c3:  movl   $0x0,0x14(%esp)
08222207 +0x2cb:  mov    %ebx,0x10(%esp)
0822220b +0x2cf:  movl   $0x1,0xc(%esp)
08222213 +0x2d7:  movl   $0x7b,0x8(%esp)
0822221b +0x2df:  mov    0xc(%ebp),%edx
0822221e +0x2e2:  mov    %edx,0x4(%esp)
08222222 +0x2e6:  mov    %eax,(%esp)
08222225 +0x2e9:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0822222a +0x2ee:  jmp    08222265 <+0x329>
0822222c +0x2f0:  mov    -0x18(%ebp),%ebx
0822222f +0x2f3:  mov    0xc(%ebp),%eax
08222232 +0x2f6:  mov    %eax,(%esp)
08222235 +0x2f9:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0822223a +0x2fe:  movl   $0x0,0x14(%esp)
08222242 +0x306:  mov    %ebx,0x10(%esp)
08222246 +0x30a:  movl   $0x1,0xc(%esp)
0822224e +0x312:  movl   $0x79,0x8(%esp)
08222256 +0x31a:  mov    0xc(%ebp),%edx
08222259 +0x31d:  mov    %edx,0x4(%esp)
0822225d +0x321:  mov    %eax,(%esp)
08222260 +0x324:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08222265 +0x329:  mov    $0x0,%eax
0822226a +0x32e:  add    $0x64,%esp
0822226d +0x331:  pop    %ebx
0822226e +0x332:  pop    %ebp
0822226f +0x333:  ret
```

## 反编译 C

```c
// Dispatcher_CheckAssaultMotionHack::dispatch_sig @ 0x8221f3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckAssaultMotionHack::dispatch_sig
          (Dispatcher_CheckAssaultMotionHack *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  ulonglong local_34;
  uint local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = LineFunc(0xdb73,
                     "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_1c = 0;
      local_20 = 0;
      cVar2 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_2,&local_20);
        if (cVar2 == '\x01') {
          cVar2 = CPowerManager::IsPowerWarEventOn();
          if ((cVar2 == '\0') ||
             (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a'))
          {
            local_15 = false;
          }
          else {
            local_15 = true;
          }
          if (10000 < local_1c) {
            uVar5 = local_1c / 10000;
            local_10 = local_1c % 10000;
            local_14 = uVar5;
            if ((bool)local_15) {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7c,1,uVar5,0);
            }
            else {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7a,1,uVar5,0);
            }
            local_1c = local_10;
          }
          iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          if ((iVar4 == 3) ||
             ((iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar4 == 4 &&
              (cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
              cVar2 == '\x02')))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_34 = (ulonglong)local_1c;
            local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6320 * (double)local_34);
            local_1c = (uint)local_34;
          }
          else {
            local_34 = (ulonglong)local_1c;
            local_34._0_4_ = (uint)(longlong)ROUND(_DAT_08bd6328 * (double)local_34);
            local_1c = (uint)local_34;
          }
          uVar5 = local_1c;
          if (local_20 < local_1c) {
            if (local_15 == '\0') {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x79,1,uVar5,0);
            }
            else {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x7b,1,uVar5,0);
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xdb7f,
                           "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xdb7e,
                         "virtual int Dispatcher_CheckAssaultMotionHack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar3;
}
```
