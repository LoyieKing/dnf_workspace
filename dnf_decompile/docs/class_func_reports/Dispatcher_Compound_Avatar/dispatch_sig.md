# dispatch_sig

`_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_Avatar` | `0x081ead40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ead40  _ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ead40, 0x081eb0c3]
081ead40 +0x000:  push   %ebp
081ead41 +0x001:  mov    %esp,%ebp
081ead43 +0x003:  sub    $0x48,%esp
081ead46 +0x006:  mov    0xc(%ebp),%eax
081ead49 +0x009:  mov    %eax,(%esp)
081ead4c +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ead51 +0x011:  cmp    $0x2,%eax
081ead54 +0x014:  setle  %al
081ead57 +0x017:  test   %al,%al
081ead59 +0x019:  je     081ead65 <+0x25>
081ead5b +0x01b:  mov    $0x0,%eax
081ead60 +0x020:  jmp    081eb0c2 <+0x382>
081ead65 +0x025:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081ead6a +0x02a:  movl   $0x12,0x8(%esp)
081ead72 +0x032:  mov    0xc(%ebp),%edx
081ead75 +0x035:  mov    %edx,0x4(%esp)
081ead79 +0x039:  mov    %eax,(%esp)
081ead7c +0x03c:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081ead81 +0x041:  mov    %eax,-0xc(%ebp)
081ead84 +0x044:  cmpl   $0x0,-0xc(%ebp)
081ead88 +0x048:  je     081eadb1 <+0x71>
081ead8a +0x04a:  mov    -0xc(%ebp),%eax
081ead8d +0x04d:  movzbl %al,%eax
081ead90 +0x050:  mov    %eax,0x8(%esp)
081ead94 +0x054:  movl   $0x66,0x4(%esp)
081ead9c +0x05c:  mov    0xc(%ebp),%eax
081ead9f +0x05f:  mov    %eax,(%esp)
081eada2 +0x062:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081eada7 +0x067:  mov    $0x0,%eax
081eadac +0x06c:  jmp    081eb0c2 <+0x382>
081eadb1 +0x071:  lea    -0x2f(%ebp),%eax
081eadb4 +0x074:  add    $0xd,%eax
081eadb7 +0x077:  mov    %eax,0x4(%esp)
081eadbb +0x07b:  mov    0x10(%ebp),%eax
081eadbe +0x07e:  mov    %eax,(%esp)
081eadc1 +0x081:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eadc6 +0x086:  xor    $0x1,%eax
081eadc9 +0x089:  test   %al,%al
081eadcb +0x08b:  je     081eadf6 <+0xb6>
081eadcd +0x08d:  movl   $0x0,0xc(%esp)
081eadd5 +0x095:  movl   $0x0,0x8(%esp)
081eaddd +0x09d:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eade5 +0x0a5:  movl   $0x6c89,(%esp)
081eadec +0x0ac:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eadf1 +0x0b1:  jmp    081eb0c2 <+0x382>
081eadf6 +0x0b6:  lea    -0x2f(%ebp),%eax
081eadf9 +0x0b9:  add    $0xf,%eax
081eadfc +0x0bc:  mov    %eax,0x4(%esp)
081eae00 +0x0c0:  mov    0x10(%ebp),%eax
081eae03 +0x0c3:  mov    %eax,(%esp)
081eae06 +0x0c6:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eae0b +0x0cb:  xor    $0x1,%eax
081eae0e +0x0ce:  test   %al,%al
081eae10 +0x0d0:  je     081eae3b <+0xfb>
081eae12 +0x0d2:  movl   $0x0,0xc(%esp)
081eae1a +0x0da:  movl   $0x0,0x8(%esp)
081eae22 +0x0e2:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eae2a +0x0ea:  movl   $0x6c8a,(%esp)
081eae31 +0x0f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eae36 +0x0f6:  jmp    081eb0c2 <+0x382>
081eae3b +0x0fb:  lea    -0x2f(%ebp),%eax
081eae3e +0x0fe:  add    $0x11,%eax
081eae41 +0x101:  mov    %eax,0x4(%esp)
081eae45 +0x105:  mov    0x10(%ebp),%eax
081eae48 +0x108:  mov    %eax,(%esp)
081eae4b +0x10b:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081eae50 +0x110:  xor    $0x1,%eax
081eae53 +0x113:  test   %al,%al
081eae55 +0x115:  je     081eae80 <+0x140>
081eae57 +0x117:  movl   $0x0,0xc(%esp)
081eae5f +0x11f:  movl   $0x0,0x8(%esp)
081eae67 +0x127:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eae6f +0x12f:  movl   $0x6c8b,(%esp)
081eae76 +0x136:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eae7b +0x13b:  jmp    081eb0c2 <+0x382>
081eae80 +0x140:  lea    -0x2f(%ebp),%eax
081eae83 +0x143:  add    $0x15,%eax
081eae86 +0x146:  mov    %eax,0x4(%esp)
081eae8a +0x14a:  mov    0x10(%ebp),%eax
081eae8d +0x14d:  mov    %eax,(%esp)
081eae90 +0x150:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eae95 +0x155:  xor    $0x1,%eax
081eae98 +0x158:  test   %al,%al
081eae9a +0x15a:  je     081eaec5 <+0x185>
081eae9c +0x15c:  movl   $0x0,0xc(%esp)
081eaea4 +0x164:  movl   $0x0,0x8(%esp)
081eaeac +0x16c:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eaeb4 +0x174:  movl   $0x6c8c,(%esp)
081eaebb +0x17b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eaec0 +0x180:  jmp    081eb0c2 <+0x382>
081eaec5 +0x185:  lea    -0x2f(%ebp),%eax
081eaec8 +0x188:  add    $0x17,%eax
081eaecb +0x18b:  mov    %eax,0x4(%esp)
081eaecf +0x18f:  mov    0x10(%ebp),%eax
081eaed2 +0x192:  mov    %eax,(%esp)
081eaed5 +0x195:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081eaeda +0x19a:  xor    $0x1,%eax
081eaedd +0x19d:  test   %al,%al
081eaedf +0x19f:  je     081eaf0a <+0x1ca>
081eaee1 +0x1a1:  movl   $0x0,0xc(%esp)
081eaee9 +0x1a9:  movl   $0x0,0x8(%esp)
081eaef1 +0x1b1:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eaef9 +0x1b9:  movl   $0x6c8d,(%esp)
081eaf00 +0x1c0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eaf05 +0x1c5:  jmp    081eb0c2 <+0x382>
081eaf0a +0x1ca:  lea    -0x2f(%ebp),%eax
081eaf0d +0x1cd:  add    $0x1b,%eax
081eaf10 +0x1d0:  mov    %eax,0x4(%esp)
081eaf14 +0x1d4:  mov    0x10(%ebp),%eax
081eaf17 +0x1d7:  mov    %eax,(%esp)
081eaf1a +0x1da:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081eaf1f +0x1df:  xor    $0x1,%eax
081eaf22 +0x1e2:  test   %al,%al
081eaf24 +0x1e4:  je     081eaf4f <+0x20f>
081eaf26 +0x1e6:  movl   $0x0,0xc(%esp)
081eaf2e +0x1ee:  movl   $0x0,0x8(%esp)
081eaf36 +0x1f6:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eaf3e +0x1fe:  movl   $0x6c8e,(%esp)
081eaf45 +0x205:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eaf4a +0x20a:  jmp    081eb0c2 <+0x382>
081eaf4f +0x20f:  lea    -0x2f(%ebp),%eax
081eaf52 +0x212:  add    $0x1f,%eax
081eaf55 +0x215:  mov    %eax,0x4(%esp)
081eaf59 +0x219:  mov    0x10(%ebp),%eax
081eaf5c +0x21c:  mov    %eax,(%esp)
081eaf5f +0x21f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081eaf64 +0x224:  xor    $0x1,%eax
081eaf67 +0x227:  test   %al,%al
081eaf69 +0x229:  je     081eaf94 <+0x254>
081eaf6b +0x22b:  movl   $0x0,0xc(%esp)
081eaf73 +0x233:  movl   $0x0,0x8(%esp)
081eaf7b +0x23b:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eaf83 +0x243:  movl   $0x6c8f,(%esp)
081eaf8a +0x24a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eaf8f +0x24f:  jmp    081eb0c2 <+0x382>
081eaf94 +0x254:  lea    -0x2f(%ebp),%eax
081eaf97 +0x257:  add    $0x21,%eax
081eaf9a +0x25a:  mov    %eax,0x4(%esp)
081eaf9e +0x25e:  mov    0x10(%ebp),%eax
081eafa1 +0x261:  mov    %eax,(%esp)
081eafa4 +0x264:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081eafa9 +0x269:  xor    $0x1,%eax
081eafac +0x26c:  test   %al,%al
081eafae +0x26e:  je     081eafd9 <+0x299>
081eafb0 +0x270:  movl   $0x0,0xc(%esp)
081eafb8 +0x278:  movl   $0x0,0x8(%esp)
081eafc0 +0x280:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eafc8 +0x288:  movl   $0x6c90,(%esp)
081eafcf +0x28f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eafd4 +0x294:  jmp    081eb0c2 <+0x382>
081eafd9 +0x299:  lea    -0x2f(%ebp),%eax
081eafdc +0x29c:  add    $0x22,%eax
081eafdf +0x29f:  mov    %eax,0x4(%esp)
081eafe3 +0x2a3:  mov    0x10(%ebp),%eax
081eafe6 +0x2a6:  mov    %eax,(%esp)
081eafe9 +0x2a9:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081eafee +0x2ae:  xor    $0x1,%eax
081eaff1 +0x2b1:  test   %al,%al
081eaff3 +0x2b3:  je     081eb01e <+0x2de>
081eaff5 +0x2b5:  movl   $0x0,0xc(%esp)
081eaffd +0x2bd:  movl   $0x0,0x8(%esp)
081eb005 +0x2c5:  movl   $&_ZZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eb00d +0x2cd:  movl   $0x6c92,(%esp)
081eb014 +0x2d4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eb019 +0x2d9:  jmp    081eb0c2 <+0x382>
081eb01e +0x2de:  movzwl -0x20(%ebp),%eax
081eb022 +0x2e2:  cwtl
081eb023 +0x2e3:  mov    %eax,0x8(%esp)
081eb027 +0x2e7:  movl   $0x2,0x4(%esp)
081eb02f +0x2ef:  mov    0xc(%ebp),%eax
081eb032 +0x2f2:  mov    %eax,(%esp)
081eb035 +0x2f5:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081eb03a +0x2fa:  test   %al,%al
081eb03c +0x2fc:  je     081eb060 <+0x320>
081eb03e +0x2fe:  movl   $0xd5,0x8(%esp)
081eb046 +0x306:  movl   $0x66,0x4(%esp)
081eb04e +0x30e:  mov    0xc(%ebp),%eax
081eb051 +0x311:  mov    %eax,(%esp)
081eb054 +0x314:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081eb059 +0x319:  mov    $0x0,%eax
081eb05e +0x31e:  jmp    081eb0c2 <+0x382>
081eb060 +0x320:  movzwl -0x1a(%ebp),%eax
081eb064 +0x324:  cwtl
081eb065 +0x325:  mov    %eax,0x8(%esp)
081eb069 +0x329:  movl   $0x2,0x4(%esp)
081eb071 +0x331:  mov    0xc(%ebp),%eax
081eb074 +0x334:  mov    %eax,(%esp)
081eb077 +0x337:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081eb07c +0x33c:  test   %al,%al
081eb07e +0x33e:  je     081eb0a2 <+0x362>
081eb080 +0x340:  movl   $0xd5,0x8(%esp)
081eb088 +0x348:  movl   $0x66,0x4(%esp)
081eb090 +0x350:  mov    0xc(%ebp),%eax
081eb093 +0x353:  mov    %eax,(%esp)
081eb096 +0x356:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081eb09b +0x35b:  mov    $0x0,%eax
081eb0a0 +0x360:  jmp    081eb0c2 <+0x382>
081eb0a2 +0x362:  mov    &_ZN10GlobalData17s_pCompoundAvatarE,%eax
081eb0a7 +0x367:  lea    -0x2f(%ebp),%edx
081eb0aa +0x36a:  mov    %edx,0x8(%esp)
081eb0ae +0x36e:  mov    0xc(%ebp),%edx
081eb0b1 +0x371:  mov    %edx,0x4(%esp)
081eb0b5 +0x375:  mov    %eax,(%esp)
081eb0b8 +0x378:  call   083338c2 <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR>  ; WongWork::CCompoundAvatar::ProcCompound(CUser*, MSG_COMPOUND_AVATAR const*)
081eb0bd +0x37d:  mov    $0x0,%eax
081eb0c2 +0x382:  leave
081eb0c3 +0x383:  ret
```

## 反编译 C

```c
// Dispatcher_Compound_Avatar::dispatch_sig @ 0x81ead40

/* Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_Avatar::dispatch_sig
          (Dispatcher_Compound_Avatar *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  MSG_COMPOUND_AVATAR local_33 [13];
  short sStack_26;
  short local_24;
  ulong uStack_22;
  short local_1e;
  ulong uStack_1c;
  ulong uStack_18;
  short sStack_14;
  uchar uStack_12;
  char cStack_11;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x12);
    if (local_10 == 0) {
      cVar1 = PacketBuf::get_short(param_2,&sStack_26);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,&local_24);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&uStack_22);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_1e);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,&uStack_1c);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_2,&uStack_18);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_short(param_2,&sStack_14);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_2,&uStack_12);
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_byte(param_2,&cStack_11);
                      if (cVar1 == '\x01') {
                        cVar1 = CUser::CheckItemLock(param_1,2,(int)local_24);
                        if (cVar1 == '\0') {
                          cVar1 = CUser::CheckItemLock(param_1,2,(int)local_1e);
                          if (cVar1 == '\0') {
                            WongWork::CCompoundAvatar::ProcCompound
                                      (GlobalData::s_pCompoundAvatar,param_1,local_33);
                            uVar3 = 0;
                          }
                          else {
                            CUser::SendCmdErrorPacket(param_1,0x66,0xd5);
                            uVar3 = 0;
                          }
                        }
                        else {
                          CUser::SendCmdErrorPacket(param_1,0x66,0xd5);
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = LineFunc(0x6c92,
                                         "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar3 = LineFunc(0x6c90,
                                       "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar3 = LineFunc(0x6c8f,
                                     "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x6c8e,
                                   "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x6c8d,
                                 "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x6c8c,
                               "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x6c8b,
                             "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x6c8a,
                           "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x6c89,
                         "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x66,local_10 & 0xff);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
