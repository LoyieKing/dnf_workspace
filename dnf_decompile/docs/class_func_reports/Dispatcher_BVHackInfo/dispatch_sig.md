# dispatch_sig

`_ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BVHackInfo` | `0x08207568` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207568  _ZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08207568, 0x08207851]
08207568 +0x000:  push   %ebp
08207569 +0x001:  mov    %esp,%ebp
0820756b +0x003:  sub    $0x108,%esp
08207571 +0x009:  mov    0xc(%ebp),%eax
08207574 +0x00c:  mov    %eax,(%esp)
08207577 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820757c +0x014:  cmp    $0x1,%eax
0820757f +0x017:  setle  %al
08207582 +0x01a:  test   %al,%al
08207584 +0x01c:  je     082075af <+0x47>
08207586 +0x01e:  movl   $0x0,0xc(%esp)
0820758e +0x026:  movl   $0x0,0x8(%esp)
08207596 +0x02e:  movl   $&_ZZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820759e +0x036:  movl   $0xa216,(%esp)
082075a5 +0x03d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082075aa +0x042:  jmp    0820784f <+0x2e7>
082075af +0x047:  movl   $0x0,-0xc(%ebp)
082075b6 +0x04e:  lea    -0xc(%ebp),%eax
082075b9 +0x051:  mov    %eax,0x4(%esp)
082075bd +0x055:  mov    0x10(%ebp),%eax
082075c0 +0x058:  mov    %eax,(%esp)
082075c3 +0x05b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082075c8 +0x060:  xor    $0x1,%eax
082075cb +0x063:  test   %al,%al
082075cd +0x065:  jne    082075d7 <+0x6f>
082075cf +0x067:  mov    -0xc(%ebp),%eax
082075d2 +0x06a:  cmp    $0x40,%eax
082075d5 +0x06d:  je     082075de <+0x76>
082075d7 +0x06f:  mov    $0x1,%eax
082075dc +0x074:  jmp    082075e3 <+0x7b>
082075de +0x076:  mov    $0x0,%eax
082075e3 +0x07b:  test   %al,%al
082075e5 +0x07d:  je     08207610 <+0xa8>
082075e7 +0x07f:  movl   $0x0,0xc(%esp)
082075ef +0x087:  movl   $0x0,0x8(%esp)
082075f7 +0x08f:  movl   $&_ZZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082075ff +0x097:  movl   $0xa21a,(%esp)
08207606 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820760b +0x0a3:  jmp    0820784f <+0x2e7>
08207610 +0x0a8:  movl   $0x40,0x8(%esp)
08207618 +0x0b0:  lea    -0x80(%ebp),%eax
0820761b +0x0b3:  mov    %eax,0x4(%esp)
0820761f +0x0b7:  mov    0x10(%ebp),%eax
08207622 +0x0ba:  mov    %eax,(%esp)
08207625 +0x0bd:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0820762a +0x0c2:  xor    $0x1,%eax
0820762d +0x0c5:  test   %al,%al
0820762f +0x0c7:  je     0820765a <+0xf2>
08207631 +0x0c9:  movl   $0x0,0xc(%esp)
08207639 +0x0d1:  movl   $0x0,0x8(%esp)
08207641 +0x0d9:  movl   $&_ZZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207649 +0x0e1:  movl   $0xa21c,(%esp)
08207650 +0x0e8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207655 +0x0ed:  jmp    0820784f <+0x2e7>
0820765a +0x0f2:  lea    -0x40(%ebp),%eax
0820765d +0x0f5:  mov    %eax,0x4(%esp)
08207661 +0x0f9:  lea    -0x80(%ebp),%eax
08207664 +0x0fc:  mov    %eax,(%esp)
08207667 +0x0ff:  call   088920f1 <_Z19decryptBVHackPacketPcR14stBVHackInfo_t>  ; decryptBVHackPacket(char*, stBVHackInfo_t&)
0820766c +0x104:  xor    $0x1,%eax
0820766f +0x107:  test   %al,%al
08207671 +0x109:  je     0820769c <+0x134>
08207673 +0x10b:  movl   $0x0,0xc(%esp)
0820767b +0x113:  movl   $0x0,0x8(%esp)
08207683 +0x11b:  movl   $&_ZZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820768b +0x123:  movl   $0xa224,(%esp)
08207692 +0x12a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207697 +0x12f:  jmp    0820784f <+0x2e7>
0820769c +0x134:  fldl   -0x40(%ebp)
0820769f +0x137:  fldz
082076a1 +0x139:  fxch   %st(1)
082076a3 +0x13b:  fucompp
082076a5 +0x13d:  fnstsw %ax
082076a7 +0x13f:  sahf
082076a8 +0x140:  jne    082076f0 <+0x188>
082076aa +0x142:  jp     082076f0 <+0x188>
082076ac +0x144:  fldl   -0x38(%ebp)
082076af +0x147:  fldz
082076b1 +0x149:  fxch   %st(1)
082076b3 +0x14b:  fucompp
082076b5 +0x14d:  fnstsw %ax
082076b7 +0x14f:  sahf
082076b8 +0x150:  jne    082076f0 <+0x188>
082076ba +0x152:  jp     082076f0 <+0x188>
082076bc +0x154:  fldl   -0x30(%ebp)
082076bf +0x157:  fldz
082076c1 +0x159:  fxch   %st(1)
082076c3 +0x15b:  fucompp
082076c5 +0x15d:  fnstsw %ax
082076c7 +0x15f:  sahf
082076c8 +0x160:  jne    082076f0 <+0x188>
082076ca +0x162:  jp     082076f0 <+0x188>
082076cc +0x164:  fldl   -0x28(%ebp)
082076cf +0x167:  fldz
082076d1 +0x169:  fxch   %st(1)
082076d3 +0x16b:  fucompp
082076d5 +0x16d:  fnstsw %ax
082076d7 +0x16f:  sahf
082076d8 +0x170:  jne    082076f0 <+0x188>
082076da +0x172:  jp     082076f0 <+0x188>
082076dc +0x174:  fldl   -0x20(%ebp)
082076df +0x177:  fldz
082076e1 +0x179:  fxch   %st(1)
082076e3 +0x17b:  fucompp
082076e5 +0x17d:  fnstsw %ax
082076e7 +0x17f:  sahf
082076e8 +0x180:  jp     082076f0 <+0x188>
082076ea +0x182:  je     082077ad <+0x245>
082076f0 +0x188:  fldl   -0x18(%ebp)
082076f3 +0x18b:  fstpl  -0xb8(%ebp)
082076f9 +0x191:  fldl   -0x20(%ebp)
082076fc +0x194:  fstpl  -0xb0(%ebp)
08207702 +0x19a:  fldl   -0x28(%ebp)
08207705 +0x19d:  fstpl  -0xa8(%ebp)
0820770b +0x1a3:  fldl   -0x30(%ebp)
0820770e +0x1a6:  fstpl  -0xa0(%ebp)
08207714 +0x1ac:  fldl   -0x38(%ebp)
08207717 +0x1af:  fstpl  -0x98(%ebp)
0820771d +0x1b5:  fldl   -0x40(%ebp)
08207720 +0x1b8:  fstpl  -0x90(%ebp)
08207726 +0x1be:  mov    0xc(%ebp),%eax
08207729 +0x1c1:  mov    %eax,(%esp)
0820772c +0x1c4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08207731 +0x1c9:  movl   $0x0,0x4(%esp)
08207739 +0x1d1:  mov    %eax,(%esp)
0820773c +0x1d4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08207741 +0x1d9:  fldl   -0xb8(%ebp)
08207747 +0x1df:  fstpl  0x40(%esp)
0820774b +0x1e3:  fldl   -0xb0(%ebp)
08207751 +0x1e9:  fstpl  0x38(%esp)
08207755 +0x1ed:  fldl   -0xa8(%ebp)
0820775b +0x1f3:  fstpl  0x30(%esp)
0820775f +0x1f7:  fldl   -0xa0(%ebp)
08207765 +0x1fd:  fstpl  0x28(%esp)
08207769 +0x201:  fldl   -0x98(%ebp)
0820776f +0x207:  fstpl  0x20(%esp)
08207773 +0x20b:  fldl   -0x90(%ebp)
08207779 +0x211:  fstpl  0x18(%esp)
0820777d +0x215:  mov    %eax,0x14(%esp)
08207781 +0x219:  movl   $"(m_id: %s)(%5f)(%5f)(%5f)(%5f)(%5f)(%5f)",0x10(%esp)
08207789 +0x221:  movl   $0xa228,0xc(%esp)
08207791 +0x229:  movl   $&_ZZN21Dispatcher_BVHackInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08207799 +0x231:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
082077a1 +0x239:  movl   $0x1,(%esp)
082077a8 +0x240:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082077ad +0x245:  fldl   -0x38(%ebp)
082077b0 +0x248:  fldl   &data#dd575a2f(.rodata)
082077b6 +0x24e:  fxch   %st(1)
082077b8 +0x250:  fucompp
082077ba +0x252:  fnstsw %ax
082077bc +0x254:  sahf
082077bd +0x255:  setae  %al
082077c0 +0x258:  test   %al,%al
082077c2 +0x25a:  je     0820784a <+0x2e2>
082077c8 +0x260:  fldl   -0x30(%ebp)
082077cb +0x263:  fldz
082077cd +0x265:  fxch   %st(1)
082077cf +0x267:  fucompp
082077d1 +0x269:  fnstsw %ax
082077d3 +0x26b:  sahf
082077d4 +0x26c:  jne    082077e8 <+0x280>
082077d6 +0x26e:  jp     082077e8 <+0x280>
082077d8 +0x270:  fldl   -0x20(%ebp)
082077db +0x273:  fldz
082077dd +0x275:  fxch   %st(1)
082077df +0x277:  fucompp
082077e1 +0x279:  fnstsw %ax
082077e3 +0x27b:  sahf
082077e4 +0x27c:  jp     082077e8 <+0x280>
082077e6 +0x27e:  je     0820784a <+0x2e2>
082077e8 +0x280:  mov    0xc(%ebp),%eax
082077eb +0x283:  mov    %eax,(%esp)
082077ee +0x286:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082077f3 +0x28b:  movl   $0x0,0x14(%esp)
082077fb +0x293:  movl   $0x0,0x10(%esp)
08207803 +0x29b:  movl   $0x1,0xc(%esp)
0820780b +0x2a3:  movl   $0x328,0x8(%esp)
08207813 +0x2ab:  mov    0xc(%ebp),%edx
08207816 +0x2ae:  mov    %edx,0x4(%esp)
0820781a +0x2b2:  mov    %eax,(%esp)
0820781d +0x2b5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08207822 +0x2ba:  mov    0xc(%ebp),%eax
08207825 +0x2bd:  mov    %eax,(%esp)
08207828 +0x2c0:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820782d +0x2c5:  cmp    $0x5,%eax
08207830 +0x2c8:  setne  %al
08207833 +0x2cb:  test   %al,%al
08207835 +0x2cd:  je     0820784a <+0x2e2>
08207837 +0x2cf:  movl   $0x10,0x4(%esp)
0820783f +0x2d7:  mov    0xc(%ebp),%eax
08207842 +0x2da:  mov    %eax,(%esp)
08207845 +0x2dd:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
0820784a +0x2e2:  mov    $0x0,%eax
0820784f +0x2e7:  leave
08207850 +0x2e8:  ret
08207851 +0x2e9:  nop
```

## 反编译 C

```c
// Dispatcher_BVHackInfo::dispatch_sig @ 0x8207568

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BVHackInfo::dispatch_sig(Dispatcher_BVHackInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  CHackAnalyzer *pCVar9;
  char local_84 [64];
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  undefined8 local_1c;
  int local_10 [3];
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 < 2) {
    uVar7 = LineFunc(0xa216,"virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_10[0] = 0;
    cVar5 = PacketBuf::get_int(param_2,local_10);
    if ((cVar5 == '\x01') && (local_10[0] == 0x40)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = LineFunc(0xa21a,"virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      cVar5 = PacketBuf::get_binary(param_2,local_84,0x40);
      if (cVar5 == '\x01') {
        cVar5 = decryptBVHackPacket(local_84,(stBVHackInfo_t *)&local_44);
        dVar4 = local_24;
        dVar3 = local_34;
        dVar2 = local_3c;
        if (cVar5 == '\x01') {
          if ((((local_44 != 0.0) || (NAN(local_44))) || (local_3c != 0.0)) ||
             ((((NAN(local_3c) || (local_34 != 0.0)) ||
               ((NAN(local_34) || ((local_2c != 0.0 || (NAN(local_2c))))))) || (local_24 != 0.0))))
          {
            uVar8 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar8,0);
            LogManager::logFormat
                      (1,"PacketDispatcher_Impl_1.cpp",
                       "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0xa228,
                       "(m_id: %s)(%5f)(%5f)(%5f)(%5f)(%5f)(%5f)",uVar7,local_44,dVar2,dVar3,
                       local_2c,dVar4,local_1c);
          }
          if ((_DAT_08bd6360 <= local_3c) &&
             (((local_34 != 0.0 || (NAN(local_34))) || (local_24 != 0.0)))) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x328,1,0,0);
            iVar6 = CUser::get_state(param_1);
            if (iVar6 != 5) {
              CUser::SetTradePunishType(param_1,0x10);
            }
          }
          uVar7 = 0;
        }
        else {
          uVar7 = LineFunc(0xa224,
                           "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
        }
      }
      else {
        uVar7 = LineFunc(0xa21c,
                         "virtual int Dispatcher_BVHackInfo::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar7;
}
```
