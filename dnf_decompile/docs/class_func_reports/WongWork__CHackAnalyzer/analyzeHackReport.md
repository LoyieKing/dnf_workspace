# analyzeHackReport

`_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf`

`WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7a22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7a22  _ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf
#           WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*)
# range [0x080f7a22, 0x080f7cb5]
080f7a22 +0x000:  push   %ebp
080f7a23 +0x001:  mov    %esp,%ebp
080f7a25 +0x003:  sub    $0x78,%esp
080f7a28 +0x006:  lea    -0x4c(%ebp),%eax
080f7a2b +0x009:  add    $0xd,%eax
080f7a2e +0x00c:  mov    %eax,0x4(%esp)
080f7a32 +0x010:  mov    0x10(%ebp),%eax
080f7a35 +0x013:  mov    %eax,(%esp)
080f7a38 +0x016:  call   080f9b82 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x38e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x38e
080f7a3d +0x01b:  xor    $0x1,%eax
080f7a40 +0x01e:  test   %al,%al
080f7a42 +0x020:  je     080f7a4e <+0x2c>
080f7a44 +0x022:  mov    $0x0,%eax
080f7a49 +0x027:  jmp    080f7cb3 <+0x291>
080f7a4e +0x02c:  mov    0x8(%ebp),%eax
080f7a51 +0x02f:  mov    (%eax),%eax
080f7a53 +0x031:  test   %eax,%eax
080f7a55 +0x033:  jne    080f7a61 <+0x3f>
080f7a57 +0x035:  mov    $0x1,%eax
080f7a5c +0x03a:  jmp    080f7cb3 <+0x291>
080f7a61 +0x03f:  movzwl -0x3f(%ebp),%eax
080f7a65 +0x043:  movzwl %ax,%eax
080f7a68 +0x046:  and    $0x1,%eax
080f7a6b +0x049:  test   %al,%al
080f7a6d +0x04b:  je     080f7aa7 <+0x85>
080f7a6f +0x04d:  lea    -0x4c(%ebp),%eax
080f7a72 +0x050:  add    $0xf,%eax
080f7a75 +0x053:  mov    %eax,0x4(%esp)
080f7a79 +0x057:  mov    0x10(%ebp),%eax
080f7a7c +0x05a:  mov    %eax,(%esp)
080f7a7f +0x05d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
080f7a84 +0x062:  xor    $0x1,%eax
080f7a87 +0x065:  test   %al,%al
080f7a89 +0x067:  je     080f7a95 <+0x73>
080f7a8b +0x069:  mov    $0x0,%eax
080f7a90 +0x06e:  jmp    080f7cb3 <+0x291>
080f7a95 +0x073:  mov    -0x3d(%ebp),%eax
080f7a98 +0x076:  mov    %eax,0x4(%esp)
080f7a9c +0x07a:  mov    0x8(%ebp),%eax
080f7a9f +0x07d:  mov    %eax,(%esp)
080f7aa2 +0x080:  call   080f7cca <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj>  ; WongWork::CHackAnalyzer::_analyzeSpeedHack(unsigned int)
080f7aa7 +0x085:  movzwl -0x3f(%ebp),%eax
080f7aab +0x089:  movzwl %ax,%eax
080f7aae +0x08c:  and    $0x2,%eax
080f7ab1 +0x08f:  test   %eax,%eax
080f7ab3 +0x091:  je     080f7aed <+0xcb>
080f7ab5 +0x093:  movl   $0x0,0x4(%esp)
080f7abd +0x09b:  mov    0x8(%ebp),%eax
080f7ac0 +0x09e:  mov    %eax,(%esp)
080f7ac3 +0x0a1:  call   080f7d82 <_ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc>  ; WongWork::CHackAnalyzer::_analyzeDifficultyHack(char)
080f7ac8 +0x0a6:  mov    0x8(%ebp),%eax
080f7acb +0x0a9:  mov    (%eax),%eax
080f7acd +0x0ab:  movl   $0x0,0xc(%esp)
080f7ad5 +0x0b3:  movl   $0x0,0x8(%esp)
080f7add +0x0bb:  movl   $0x18,0x4(%esp)
080f7ae5 +0x0c3:  mov    %eax,(%esp)
080f7ae8 +0x0c6:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
080f7aed +0x0cb:  movzwl -0x3f(%ebp),%eax
080f7af1 +0x0cf:  movzwl %ax,%eax
080f7af4 +0x0d2:  and    $0x8,%eax
080f7af7 +0x0d5:  test   %eax,%eax
080f7af9 +0x0d7:  je     080f7b33 <+0x111>
080f7afb +0x0d9:  lea    -0x4c(%ebp),%eax
080f7afe +0x0dc:  add    $0x40,%eax
080f7b01 +0x0df:  mov    %eax,0x4(%esp)
080f7b05 +0x0e3:  mov    0x10(%ebp),%eax
080f7b08 +0x0e6:  mov    %eax,(%esp)
080f7b0b +0x0e9:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
080f7b10 +0x0ee:  xor    $0x1,%eax
080f7b13 +0x0f1:  test   %al,%al
080f7b15 +0x0f3:  je     080f7b21 <+0xff>
080f7b17 +0x0f5:  mov    $0x0,%eax
080f7b1c +0x0fa:  jmp    080f7cb3 <+0x291>
080f7b21 +0x0ff:  mov    -0xc(%ebp),%eax
080f7b24 +0x102:  mov    %eax,0x4(%esp)
080f7b28 +0x106:  mov    0x8(%ebp),%eax
080f7b2b +0x109:  mov    %eax,(%esp)
080f7b2e +0x10c:  call   080f7dce <_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj>  ; WongWork::CHackAnalyzer::_analyzeMemoryHack(unsigned int)
080f7b33 +0x111:  movzwl -0x3f(%ebp),%eax
080f7b37 +0x115:  movzwl %ax,%eax
080f7b3a +0x118:  and    $0x4,%eax
080f7b3d +0x11b:  test   %eax,%eax
080f7b3f +0x11d:  je     080f7ba6 <+0x184>
080f7b41 +0x11f:  movl   $0x0,0xc(%esp)
080f7b49 +0x127:  movl   $0x3c5,0x8(%esp)
080f7b51 +0x12f:  movl   $0x4,0x4(%esp)
080f7b59 +0x137:  mov    0x8(%ebp),%eax
080f7b5c +0x13a:  mov    %eax,(%esp)
080f7b5f +0x13d:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7b64 +0x142:  mov    0x8(%ebp),%eax
080f7b67 +0x145:  mov    (%eax),%eax
080f7b69 +0x147:  mov    %eax,(%esp)
080f7b6c +0x14a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080f7b71 +0x14f:  movl   $0xa8,0x4(%esp)
080f7b79 +0x157:  mov    %eax,(%esp)
080f7b7c +0x15a:  call   080f906a <_ZN8WongWork13CHackAnalyzer23ReqDBSaveHackUserPunishEjj>  ; WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(unsigned int, unsigned int)
080f7b81 +0x15f:  mov    0x8(%ebp),%eax
080f7b84 +0x162:  mov    (%eax),%eax
080f7b86 +0x164:  movl   $0x0,0xc(%esp)
080f7b8e +0x16c:  movl   $0x0,0x8(%esp)
080f7b96 +0x174:  movl   $0x18,0x4(%esp)
080f7b9e +0x17c:  mov    %eax,(%esp)
080f7ba1 +0x17f:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
080f7ba6 +0x184:  movzwl -0x3f(%ebp),%eax
080f7baa +0x188:  movzwl %ax,%eax
080f7bad +0x18b:  and    $0x80,%eax
080f7bb2 +0x190:  test   %eax,%eax
080f7bb4 +0x192:  je     080f7bd9 <+0x1b7>
080f7bb6 +0x194:  movl   $0x0,0xc(%esp)
080f7bbe +0x19c:  movl   $0x3bd,0x8(%esp)
080f7bc6 +0x1a4:  movl   $0x80,0x4(%esp)
080f7bce +0x1ac:  mov    0x8(%ebp),%eax
080f7bd1 +0x1af:  mov    %eax,(%esp)
080f7bd4 +0x1b2:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7bd9 +0x1b7:  movzwl -0x3f(%ebp),%eax
080f7bdd +0x1bb:  movzwl %ax,%eax
080f7be0 +0x1be:  and    $0x10,%eax
080f7be3 +0x1c1:  test   %eax,%eax
080f7be5 +0x1c3:  je     080f7c33 <+0x211>
080f7be7 +0x1c5:  lea    -0x4c(%ebp),%eax
080f7bea +0x1c8:  add    $0x13,%eax
080f7bed +0x1cb:  mov    %eax,0x4(%esp)
080f7bf1 +0x1cf:  mov    0x10(%ebp),%eax
080f7bf4 +0x1d2:  mov    %eax,(%esp)
080f7bf7 +0x1d5:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
080f7bfc +0x1da:  xor    $0x1,%eax
080f7bff +0x1dd:  test   %al,%al
080f7c01 +0x1df:  je     080f7c0d <+0x1eb>
080f7c03 +0x1e1:  mov    $0x0,%eax
080f7c08 +0x1e6:  jmp    080f7cb3 <+0x291>
080f7c0d +0x1eb:  movzbl -0x39(%ebp),%eax
080f7c11 +0x1ef:  movsbl %al,%eax
080f7c14 +0x1f2:  mov    %eax,0xc(%esp)
080f7c18 +0x1f6:  movl   $0x3be,0x8(%esp)
080f7c20 +0x1fe:  movl   $0x10,0x4(%esp)
080f7c28 +0x206:  mov    0x8(%ebp),%eax
080f7c2b +0x209:  mov    %eax,(%esp)
080f7c2e +0x20c:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7c33 +0x211:  movzwl -0x3f(%ebp),%eax
080f7c37 +0x215:  movzwl %ax,%eax
080f7c3a +0x218:  and    $0x20,%eax
080f7c3d +0x21b:  test   %eax,%eax
080f7c3f +0x21d:  je     080f7c64 <+0x242>
080f7c41 +0x21f:  movl   $0x0,0xc(%esp)
080f7c49 +0x227:  movl   $0x3c6,0x8(%esp)
080f7c51 +0x22f:  movl   $0x20,0x4(%esp)
080f7c59 +0x237:  mov    0x8(%ebp),%eax
080f7c5c +0x23a:  mov    %eax,(%esp)
080f7c5f +0x23d:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7c64 +0x242:  movzwl -0x3f(%ebp),%eax
080f7c68 +0x246:  movzwl %ax,%eax
080f7c6b +0x249:  and    $0x100,%eax
080f7c70 +0x24e:  test   %eax,%eax
080f7c72 +0x250:  je     080f7cae <+0x28c>
080f7c74 +0x252:  mov    0xc(%ebp),%eax
080f7c77 +0x255:  mov    %eax,(%esp)
080f7c7a +0x258:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
080f7c7f +0x25d:  movl   $0x0,0x14(%esp)
080f7c87 +0x265:  movl   $0x0,0x10(%esp)
080f7c8f +0x26d:  movl   $0x1,0xc(%esp)
080f7c97 +0x275:  movl   $0x32c,0x8(%esp)
080f7c9f +0x27d:  mov    0xc(%ebp),%edx
080f7ca2 +0x280:  mov    %edx,0x4(%esp)
080f7ca6 +0x284:  mov    %eax,(%esp)
080f7ca9 +0x287:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
080f7cae +0x28c:  mov    $0x1,%eax
080f7cb3 +0x291:  leave
080f7cb4 +0x292:  ret
080f7cb5 +0x293:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::analyzeHackReport @ 0x80f7a22

/* WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*) */

undefined4 __thiscall
WongWork::CHackAnalyzer::analyzeHackReport(CHackAnalyzer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  CHackAnalyzer *pCVar4;
  ushort local_43;
  uint local_41;
  char local_3d [45];
  uint local_10 [3];
  
  cVar1 = stGetHackTypeOperator<unsigned_short,2>::getHackType(param_2,&local_43);
  if (cVar1 == '\x01') {
    if (*(int *)this == 0) {
      uVar2 = 1;
    }
    else {
      if ((local_43 & 1) != 0) {
        cVar1 = PacketBuf::get_int(param_2,&local_41);
        if (cVar1 != '\x01') {
          return 0;
        }
        _analyzeSpeedHack(this,local_41);
      }
      if ((local_43 & 2) != 0) {
        _analyzeDifficultyHack(this,'\0');
        CUser::DisConnSig(*(CUser **)this,0x18,0,0);
      }
      if ((local_43 & 8) != 0) {
        cVar1 = PacketBuf::get_int(param_2,local_10);
        if (cVar1 != '\x01') {
          return 0;
        }
        _analyzeMemoryHack(this,local_10[0]);
      }
      if ((local_43 & 4) != 0) {
        _addHackInfo(this,4,0x3c5,0);
        uVar3 = CUser::get_acc_id(*(CUser **)this);
        ReqDBSaveHackUserPunish(uVar3,0xa8);
        CUser::DisConnSig(*(CUser **)this,0x18,0,0);
      }
      if ((local_43 & 0x80) != 0) {
        _addHackInfo(this,0x80,0x3bd,0);
      }
      if ((local_43 & 0x10) != 0) {
        cVar1 = PacketBuf::get_byte(param_2,local_3d);
        if (cVar1 != '\x01') {
          return 0;
        }
        _addHackInfo(this,0x10,0x3be,(int)local_3d[0]);
      }
      if ((local_43 & 0x20) != 0) {
        _addHackInfo(this,0x20,0x3c6,0);
      }
      if ((local_43 & 0x100) != 0) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        addServerHackCnt(pCVar4,param_1,0x32c,1,0,0);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
