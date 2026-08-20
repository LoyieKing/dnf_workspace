# SetControlData

`_ZN16Secu_DataControl14SetControlDataEP5CUserhtt`

`Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `Secu_DataControl` | `0x08286a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286a30  _ZN16Secu_DataControl14SetControlDataEP5CUserhtt
#           Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)
# range [0x08286a30, 0x08286e3f]
08286a30 +0x000:  push   %ebp
08286a31 +0x001:  mov    %esp,%ebp
08286a33 +0x003:  push   %ebx
08286a34 +0x004:  sub    $0xb4,%esp
08286a3a +0x00a:  mov    0x10(%ebp),%ecx
08286a3d +0x00d:  mov    0x14(%ebp),%edx
08286a40 +0x010:  mov    0x18(%ebp),%eax
08286a43 +0x013:  mov    %cl,-0x7c(%ebp)
08286a46 +0x016:  mov    %dx,-0x80(%ebp)
08286a4a +0x01a:  mov    %ax,-0x84(%ebp)
08286a51 +0x021:  cmpl   $0x0,0xc(%ebp)
08286a55 +0x025:  je     08286e29 <+0x3f9>
08286a5b +0x02b:  movzbl -0x7c(%ebp),%eax
08286a5f +0x02f:  cmp    $0x1,%eax
08286a62 +0x032:  je     08286bb6 <+0x186>
08286a68 +0x038:  cmp    $0x1,%eax
08286a6b +0x03b:  jg     08286a76 <+0x46>
08286a6d +0x03d:  test   %eax,%eax
08286a6f +0x03f:  je     08286a8d <+0x5d>
08286a71 +0x041:  jmp    08286e36 <+0x406>
08286a76 +0x046:  cmp    $0x2,%eax
08286a79 +0x049:  je     08286ce1 <+0x2b1>
08286a7f +0x04f:  cmp    $0x3,%eax
08286a82 +0x052:  je     08286d66 <+0x336>
08286a88 +0x058:  jmp    08286e36 <+0x406>
08286a8d +0x05d:  movzwl -0x80(%ebp),%eax
08286a91 +0x061:  mov    %eax,-0x1c(%ebp)
08286a94 +0x064:  movzwl -0x84(%ebp),%eax
08286a9b +0x06b:  mov    %eax,-0x18(%ebp)
08286a9e +0x06e:  cmpl   $0x64,-0x1c(%ebp)
08286aa2 +0x072:  jle    08286b77 <+0x147>
08286aa8 +0x078:  cmpl   $0xfa0,-0x1c(%ebp)
08286aaf +0x07f:  jg     08286b77 <+0x147>
08286ab5 +0x085:  cmpl   $0x9,-0x18(%ebp)
08286ab9 +0x089:  jg     08286b77 <+0x147>
08286abf +0x08f:  mov    0xc(%ebp),%eax
08286ac2 +0x092:  mov    %eax,(%esp)
08286ac5 +0x095:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08286aca +0x09a:  movl   $0x0,0x4(%esp)
08286ad2 +0x0a2:  mov    %eax,(%esp)
08286ad5 +0x0a5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08286ada +0x0aa:  mov    %eax,%ebx
08286adc +0x0ac:  movl   $0x0,0xc(%esp)
08286ae4 +0x0b4:  movl   $0x1e,0x8(%esp)
08286aec +0x0bc:  movl   $&_ZZN16Secu_DataControl14SetControlDataEP5CUserhttE19__PRETTY_FUNCTION__,0x4(%esp)
08286af4 +0x0c4:  lea    -0x74(%ebp),%eax
08286af7 +0x0c7:  mov    %eax,(%esp)
08286afa +0x0ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08286aff +0x0cf:  mov    -0x18(%ebp),%eax
08286b02 +0x0d2:  mov    %eax,0x10(%esp)
08286b06 +0x0d6:  mov    -0x1c(%ebp),%eax
08286b09 +0x0d9:  mov    %eax,0xc(%esp)
08286b0d +0x0dd:  mov    %ebx,0x8(%esp)
08286b11 +0x0e1:  movl   $"[SecuCommand] (mid:%s) Hacktype : %d     Cnt : %d ",0x4(%esp)
08286b19 +0x0e9:  lea    -0x74(%ebp),%eax
08286b1c +0x0ec:  mov    %eax,(%esp)
08286b1f +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08286b24 +0x0f4:  movl   $0x0,-0x14(%ebp)
08286b2b +0x0fb:  jmp    08286b6a <+0x13a>
08286b2d +0x0fd:  mov    -0x1c(%ebp),%ebx
08286b30 +0x100:  mov    0xc(%ebp),%eax
08286b33 +0x103:  mov    %eax,(%esp)
08286b36 +0x106:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08286b3b +0x10b:  movl   $0x0,0x14(%esp)
08286b43 +0x113:  movl   $0x0,0x10(%esp)
08286b4b +0x11b:  movl   $0x1,0xc(%esp)
08286b53 +0x123:  mov    %ebx,0x8(%esp)
08286b57 +0x127:  mov    0xc(%ebp),%edx
08286b5a +0x12a:  mov    %edx,0x4(%esp)
08286b5e +0x12e:  mov    %eax,(%esp)
08286b61 +0x131:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08286b66 +0x136:  addl   $0x1,-0x14(%ebp)
08286b6a +0x13a:  mov    -0x14(%ebp),%eax
08286b6d +0x13d:  cmp    -0x18(%ebp),%eax
08286b70 +0x140:  setl   %al
08286b73 +0x143:  test   %al,%al
08286b75 +0x145:  jne    08286b2d <+0xfd>
08286b77 +0x147:  mov    0xc(%ebp),%eax
08286b7a +0x14a:  mov    %eax,(%esp)
08286b7d +0x14d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08286b82 +0x152:  movl   $0x0,0x14(%esp)
08286b8a +0x15a:  movl   $0x0,0x10(%esp)
08286b92 +0x162:  movl   $0x1,0xc(%esp)
08286b9a +0x16a:  movl   $0x262,0x8(%esp)
08286ba2 +0x172:  mov    0xc(%ebp),%edx
08286ba5 +0x175:  mov    %edx,0x4(%esp)
08286ba9 +0x179:  mov    %eax,(%esp)
08286bac +0x17c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08286bb1 +0x181:  jmp    08286e36 <+0x406>
08286bb6 +0x186:  mov    0xc(%ebp),%eax
08286bb9 +0x189:  mov    %eax,(%esp)
08286bbc +0x18c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08286bc1 +0x191:  xor    $0x1,%eax
08286bc4 +0x194:  test   %al,%al
08286bc6 +0x196:  jne    08286e2c <+0x3fc>
08286bcc +0x19c:  movl   $0x2710,-0x64(%ebp)
08286bd3 +0x1a3:  movl   $0x0,-0x60(%ebp)
08286bda +0x1aa:  movzwl -0x80(%ebp),%eax
08286bde +0x1ae:  mov    %eax,-0x5c(%ebp)
08286be1 +0x1b1:  lea    -0x60(%ebp),%eax
08286be4 +0x1b4:  mov    %eax,0x4(%esp)
08286be8 +0x1b8:  lea    -0x5c(%ebp),%eax
08286beb +0x1bb:  mov    %eax,(%esp)
08286bee +0x1be:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08286bf3 +0x1c3:  lea    -0x64(%ebp),%edx
08286bf6 +0x1c6:  mov    %edx,0x4(%esp)
08286bfa +0x1ca:  mov    %eax,(%esp)
08286bfd +0x1cd:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08286c02 +0x1d2:  mov    (%eax),%eax
08286c04 +0x1d4:  mov    %eax,-0x10(%ebp)
08286c07 +0x1d7:  mov    0xc(%ebp),%eax
08286c0a +0x1da:  mov    %eax,(%esp)
08286c0d +0x1dd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08286c12 +0x1e2:  movl   $0x0,0x4(%esp)
08286c1a +0x1ea:  mov    %eax,(%esp)
08286c1d +0x1ed:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08286c22 +0x1f2:  mov    %eax,%ebx
08286c24 +0x1f4:  movl   $0x0,0xc(%esp)
08286c2c +0x1fc:  movl   $0x32,0x8(%esp)
08286c34 +0x204:  movl   $&_ZZN16Secu_DataControl14SetControlDataEP5CUserhttE19__PRETTY_FUNCTION__,0x4(%esp)
08286c3c +0x20c:  lea    -0x58(%ebp),%eax
08286c3f +0x20f:  mov    %eax,(%esp)
08286c42 +0x212:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08286c47 +0x217:  mov    -0x10(%ebp),%eax
08286c4a +0x21a:  mov    %eax,0xc(%esp)
08286c4e +0x21e:  mov    %ebx,0x8(%esp)
08286c52 +0x222:  movl   $"[SecuCommand] (mid:%s) CleanPad Set Point : %d",0x4(%esp)
08286c5a +0x22a:  lea    -0x58(%ebp),%eax
08286c5d +0x22d:  mov    %eax,(%esp)
08286c60 +0x230:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08286c65 +0x235:  mov    -0x10(%ebp),%eax
08286c68 +0x238:  movzwl %ax,%eax
08286c6b +0x23b:  mov    0xc(%ebp),%edx
08286c6e +0x23e:  add    $0x8e3f0,%edx
08286c74 +0x244:  mov    %eax,0x4(%esp)
08286c78 +0x248:  mov    %edx,(%esp)
08286c7b +0x24b:  call   082870de <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x1c>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x1c
08286c80 +0x250:  mov    0xc(%ebp),%eax
08286c83 +0x253:  add    $0x8e3f0,%eax
08286c88 +0x258:  mov    %eax,(%esp)
08286c8b +0x25b:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08286c90 +0x260:  cmp    $0x3e8,%eax
08286c95 +0x265:  seta   %al
08286c98 +0x268:  test   %al,%al
08286c9a +0x26a:  je     08286e2f <+0x3ff>
08286ca0 +0x270:  mov    0xc(%ebp),%eax
08286ca3 +0x273:  add    $0x8e3f0,%eax
08286ca8 +0x278:  mov    %eax,(%esp)
08286cab +0x27b:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08286cb0 +0x280:  mov    %eax,-0x8c(%ebp)
08286cb6 +0x286:  mov    $0x51eb851f,%edx
08286cbb +0x28b:  mov    -0x8c(%ebp),%eax
08286cc1 +0x291:  mul    %edx
08286cc3 +0x293:  shr    $0x5,%edx
08286cc6 +0x296:  mov    $0x64,%eax
08286ccb +0x29b:  sub    %edx,%eax
08286ccd +0x29d:  mov    %eax,0x4(%esp)
08286cd1 +0x2a1:  mov    0xc(%ebp),%eax
08286cd4 +0x2a4:  mov    %eax,(%esp)
08286cd7 +0x2a7:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
08286cdc +0x2ac:  jmp    08286e36 <+0x406>
08286ce1 +0x2b1:  mov    0xc(%ebp),%eax
08286ce4 +0x2b4:  mov    %eax,(%esp)
08286ce7 +0x2b7:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08286cec +0x2bc:  xor    $0x1,%eax
08286cef +0x2bf:  test   %al,%al
08286cf1 +0x2c1:  jne    08286e32 <+0x402>
08286cf7 +0x2c7:  mov    0xc(%ebp),%eax
08286cfa +0x2ca:  mov    %eax,(%esp)
08286cfd +0x2cd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08286d02 +0x2d2:  movl   $0x0,0x4(%esp)
08286d0a +0x2da:  mov    %eax,(%esp)
08286d0d +0x2dd:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08286d12 +0x2e2:  mov    %eax,%ebx
08286d14 +0x2e4:  movl   $0x0,0xc(%esp)
08286d1c +0x2ec:  movl   $0x40,0x8(%esp)
08286d24 +0x2f4:  movl   $&_ZZN16Secu_DataControl14SetControlDataEP5CUserhttE19__PRETTY_FUNCTION__,0x4(%esp)
08286d2c +0x2fc:  lea    -0x48(%ebp),%eax
08286d2f +0x2ff:  mov    %eax,(%esp)
08286d32 +0x302:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08286d37 +0x307:  mov    %ebx,0x8(%esp)
08286d3b +0x30b:  movl   $"[SecuCommand] (mid:%s) CleanPad Open!",0x4(%esp)
08286d43 +0x313:  lea    -0x48(%ebp),%eax
08286d46 +0x316:  mov    %eax,(%esp)
08286d49 +0x319:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08286d4e +0x31e:  movl   $0x0,0x4(%esp)
08286d56 +0x326:  mov    0xc(%ebp),%eax
08286d59 +0x329:  mov    %eax,(%esp)
08286d5c +0x32c:  call   086802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>  ; CUser::reqHumanCertify4ClearMap(bool)
08286d61 +0x331:  jmp    08286e36 <+0x406>
08286d66 +0x336:  mov    0xc(%ebp),%eax
08286d69 +0x339:  mov    %eax,(%esp)
08286d6c +0x33c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08286d71 +0x341:  xor    $0x1,%eax
08286d74 +0x344:  test   %al,%al
08286d76 +0x346:  jne    08286e35 <+0x405>
08286d7c +0x34c:  movl   $0x64,-0x38(%ebp)
08286d83 +0x353:  movl   $0x0,-0x34(%ebp)
08286d8a +0x35a:  movzwl -0x80(%ebp),%eax
08286d8e +0x35e:  mov    %eax,-0x30(%ebp)
08286d91 +0x361:  lea    -0x34(%ebp),%eax
08286d94 +0x364:  mov    %eax,0x4(%esp)
08286d98 +0x368:  lea    -0x30(%ebp),%eax
08286d9b +0x36b:  mov    %eax,(%esp)
08286d9e +0x36e:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08286da3 +0x373:  lea    -0x38(%ebp),%edx
08286da6 +0x376:  mov    %edx,0x4(%esp)
08286daa +0x37a:  mov    %eax,(%esp)
08286dad +0x37d:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08286db2 +0x382:  mov    (%eax),%eax
08286db4 +0x384:  mov    %eax,-0xc(%ebp)
08286db7 +0x387:  mov    0xc(%ebp),%eax
08286dba +0x38a:  mov    %eax,(%esp)
08286dbd +0x38d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08286dc2 +0x392:  movl   $0x0,0x4(%esp)
08286dca +0x39a:  mov    %eax,(%esp)
08286dcd +0x39d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08286dd2 +0x3a2:  mov    %eax,%ebx
08286dd4 +0x3a4:  movl   $0x0,0xc(%esp)
08286ddc +0x3ac:  movl   $0x4a,0x8(%esp)
08286de4 +0x3b4:  movl   $&_ZZN16Secu_DataControl14SetControlDataEP5CUserhttE19__PRETTY_FUNCTION__,0x4(%esp)
08286dec +0x3bc:  lea    -0x2c(%ebp),%eax
08286def +0x3bf:  mov    %eax,(%esp)
08286df2 +0x3c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08286df7 +0x3c7:  mov    -0xc(%ebp),%eax
08286dfa +0x3ca:  mov    %eax,0xc(%esp)
08286dfe +0x3ce:  mov    %ebx,0x8(%esp)
08286e02 +0x3d2:  movl   $"[SecuCommand] (mid:%s) DropRate : %d",0x4(%esp)
08286e0a +0x3da:  lea    -0x2c(%ebp),%eax
08286e0d +0x3dd:  mov    %eax,(%esp)
08286e10 +0x3e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08286e15 +0x3e5:  mov    -0xc(%ebp),%eax
08286e18 +0x3e8:  mov    %eax,0x4(%esp)
08286e1c +0x3ec:  mov    0xc(%ebp),%eax
08286e1f +0x3ef:  mov    %eax,(%esp)
08286e22 +0x3f2:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
08286e27 +0x3f7:  jmp    08286e36 <+0x406>
08286e29 +0x3f9:  nop
08286e2a +0x3fa:  jmp    08286e36 <+0x406>
08286e2c +0x3fc:  nop
08286e2d +0x3fd:  jmp    08286e36 <+0x406>
08286e2f +0x3ff:  nop
08286e30 +0x400:  jmp    08286e36 <+0x406>
08286e32 +0x402:  nop
08286e33 +0x403:  jmp    08286e36 <+0x406>
08286e35 +0x405:  nop
08286e36 +0x406:  add    $0xb4,%esp
08286e3c +0x40c:  pop    %ebx
08286e3d +0x40d:  pop    %ebp
08286e3e +0x40e:  ret
08286e3f +0x40f:  nop
```

## 反编译 C

```c
// Secu_DataControl::SetControlData @ 0x8286a30

/* Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short) */

void __thiscall
Secu_DataControl::SetControlData
          (Secu_DataControl *this,CUser *param_1,uchar param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  int *piVar5;
  cMyTrace local_78 [16];
  int local_68 [3];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  int local_3c [3];
  cMyTrace local_30 [16];
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    if (param_2 == '\x01') {
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
        local_68[0] = 10000;
        local_68[1] = 0;
        local_68[2] = (int)param_3;
        piVar5 = std::max<int>(local_68 + 2,local_68 + 1);
        piVar5 = std::min<int>(piVar5,local_68);
        local_14 = *piVar5;
        uVar2 = CUser::get_acc_id(param_1);
        uVar3 = NumberToString(uVar2,0);
        cMyTrace::cMyTrace(local_5c,
                           "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                           ,0x32,0);
        cMyTrace::operator()
                  (local_5c,"[SecuCommand] (mid:%s) CleanPad Set Point : %d",uVar3,local_14);
        WongWork::CMCAPManager::setPoint((CMCAPManager *)(param_1 + 0x8e3f0),(ushort)local_14);
        uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
        if (1000 < uVar2) {
          uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
          CUser::setStdDropRate(param_1,100 - uVar2 / 100);
        }
      }
    }
    else if (param_2 < 2) {
      if (param_2 == '\0') {
        local_20 = (uint)param_3;
        local_1c = (uint)param_4;
        if (((100 < local_20) && (local_20 < 0xfa1)) && (local_1c < 10)) {
          uVar2 = CUser::get_acc_id(param_1);
          uVar3 = NumberToString(uVar2,0);
          cMyTrace::cMyTrace(local_78,
                             "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                             ,0x1e,0);
          cMyTrace::operator()
                    (local_78,"[SecuCommand] (mid:%s) Hacktype : %d     Cnt : %d ",uVar3,local_20,
                     local_1c);
          for (local_18 = 0; uVar2 = local_20, local_18 < (int)local_1c; local_18 = local_18 + 1) {
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,uVar2,1,0,0);
          }
        }
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x262,1,0,0);
      }
    }
    else if (param_2 == '\x02') {
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
        uVar2 = CUser::get_acc_id(param_1);
        uVar3 = NumberToString(uVar2,0);
        cMyTrace::cMyTrace(local_4c,
                           "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                           ,0x40,0);
        cMyTrace::operator()(local_4c,"[SecuCommand] (mid:%s) CleanPad Open!",uVar3);
        CUser::reqHumanCertify4ClearMap(param_1,false);
      }
    }
    else if ((param_2 == '\x03') && (cVar1 = CUser::isGMUser(param_1), cVar1 == '\x01')) {
      local_3c[0] = 100;
      local_3c[1] = 0;
      local_3c[2] = (int)param_3;
      piVar5 = std::max<int>(local_3c + 2,local_3c + 1);
      piVar5 = std::min<int>(piVar5,local_3c);
      local_10 = *piVar5;
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_30,
                         "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                         ,0x4a,0);
      cMyTrace::operator()(local_30,"[SecuCommand] (mid:%s) DropRate : %d",uVar3,local_10);
      CUser::setStdDropRate(param_1,local_10);
    }
  }
  return;
}
```
