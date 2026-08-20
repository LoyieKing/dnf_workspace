# dispatch_sig

`_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SDC_Damage_Check` | `0x081e9e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e9e84  _ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)
# range [0x081e9e84, 0x081ea16d]
081e9e84 +0x000:  push   %ebp
081e9e85 +0x001:  mov    %esp,%ebp
081e9e87 +0x003:  push   %edi
081e9e88 +0x004:  push   %ebx
081e9e89 +0x005:  sub    $0x440,%esp
081e9e8f +0x00b:  movl   $0x0,-0x2c(%ebp)
081e9e96 +0x012:  movb   $0x0,-0x2d(%ebp)
081e9e9a +0x016:  lea    -0x2d(%ebp),%eax
081e9e9d +0x019:  mov    %eax,0x4(%esp)
081e9ea1 +0x01d:  mov    0x10(%ebp),%eax
081e9ea4 +0x020:  mov    %eax,(%esp)
081e9ea7 +0x023:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e9eac +0x028:  xor    $0x1,%eax
081e9eaf +0x02b:  test   %al,%al
081e9eb1 +0x02d:  je     081e9edc <+0x58>
081e9eb3 +0x02f:  movl   $0x0,0xc(%esp)
081e9ebb +0x037:  movl   $0x0,0x8(%esp)
081e9ec3 +0x03f:  movl   $&_ZZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9ecb +0x047:  movl   $0x6ab5,(%esp)
081e9ed2 +0x04e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9ed7 +0x053:  jmp    081ea163 <+0x2df>
081e9edc +0x058:  movl   $0x1f4,-0x24(%ebp)
081e9ee3 +0x05f:  movl   $0x1f4,-0x20(%ebp)
081e9eea +0x066:  movl   $0x1f4,-0x34(%ebp)
081e9ef1 +0x06d:  movl   $0x1f4,-0x1c(%ebp)
081e9ef8 +0x074:  lea    -0x22c(%ebp),%ebx
081e9efe +0x07a:  mov    $0x0,%eax
081e9f03 +0x07f:  mov    $0x7d,%edx
081e9f08 +0x084:  mov    %ebx,%edi
081e9f0a +0x086:  mov    %edx,%ecx
081e9f0c +0x088:  rep stos %eax,%es:(%edi)
081e9f0e +0x08a:  lea    -0x420(%ebp),%ebx
081e9f14 +0x090:  mov    $0x0,%eax
081e9f19 +0x095:  mov    $0x7d,%edx
081e9f1e +0x09a:  mov    %ebx,%edi
081e9f20 +0x09c:  mov    %edx,%ecx
081e9f22 +0x09e:  rep stos %eax,%es:(%edi)
081e9f24 +0x0a0:  lea    -0x420(%ebp),%eax
081e9f2a +0x0a6:  mov    %eax,-0x2c(%ebp)
081e9f2d +0x0a9:  movb   $0x0,-0x25(%ebp)
081e9f31 +0x0ad:  jmp    081ea14c <+0x2c8>
081e9f36 +0x0b2:  movl   $0x0,-0x38(%ebp)
081e9f3d +0x0b9:  lea    -0x38(%ebp),%eax
081e9f40 +0x0bc:  mov    %eax,0x4(%esp)
081e9f44 +0x0c0:  mov    0x10(%ebp),%eax
081e9f47 +0x0c3:  mov    %eax,(%esp)
081e9f4a +0x0c6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e9f4f +0x0cb:  xor    $0x1,%eax
081e9f52 +0x0ce:  test   %al,%al
081e9f54 +0x0d0:  je     081e9f7f <+0xfb>
081e9f56 +0x0d2:  movl   $0x0,0xc(%esp)
081e9f5e +0x0da:  movl   $0x0,0x8(%esp)
081e9f66 +0x0e2:  movl   $&_ZZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9f6e +0x0ea:  movl   $0x6ac9,(%esp)
081e9f75 +0x0f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9f7a +0x0f6:  jmp    081ea163 <+0x2df>
081e9f7f +0x0fb:  mov    -0x38(%ebp),%eax
081e9f82 +0x0fe:  cmp    $0x1f4,%eax
081e9f87 +0x103:  jle    081e9fb2 <+0x12e>
081e9f89 +0x105:  movl   $0x0,0xc(%esp)
081e9f91 +0x10d:  movl   $0x0,0x8(%esp)
081e9f99 +0x115:  movl   $&_ZZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9fa1 +0x11d:  movl   $0x6acb,(%esp)
081e9fa8 +0x124:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9fad +0x129:  jmp    081ea163 <+0x2df>
081e9fb2 +0x12e:  mov    -0x38(%ebp),%edx
081e9fb5 +0x131:  lea    -0x22c(%ebp),%eax
081e9fbb +0x137:  mov    %edx,0x8(%esp)
081e9fbf +0x13b:  mov    %eax,0x4(%esp)
081e9fc3 +0x13f:  mov    0x10(%ebp),%eax
081e9fc6 +0x142:  mov    %eax,(%esp)
081e9fc9 +0x145:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081e9fce +0x14a:  xor    $0x1,%eax
081e9fd1 +0x14d:  test   %al,%al
081e9fd3 +0x14f:  je     081e9ffe <+0x17a>
081e9fd5 +0x151:  movl   $0x0,0xc(%esp)
081e9fdd +0x159:  movl   $0x0,0x8(%esp)
081e9fe5 +0x161:  movl   $&_ZZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9fed +0x169:  movl   $0x6ace,(%esp)
081e9ff4 +0x170:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9ff9 +0x175:  jmp    081ea163 <+0x2df>
081e9ffe +0x17a:  mov    -0x38(%ebp),%eax
081ea001 +0x17d:  mov    %eax,-0x1c(%ebp)
081ea004 +0x180:  mov    -0x1c(%ebp),%eax
081ea007 +0x183:  mov    %eax,0xc(%esp)
081ea00b +0x187:  lea    -0x22c(%ebp),%eax
081ea011 +0x18d:  mov    %eax,0x8(%esp)
081ea015 +0x191:  lea    -0x34(%ebp),%eax
081ea018 +0x194:  mov    %eax,0x4(%esp)
081ea01c +0x198:  lea    -0x420(%ebp),%eax
081ea022 +0x19e:  mov    %eax,(%esp)
081ea025 +0x1a1:  call   08775ce0 <uncompress>
081ea02a +0x1a6:  mov    %eax,-0x18(%ebp)
081ea02d +0x1a9:  cmpl   $0x0,-0x18(%ebp)
081ea031 +0x1ad:  je     081ea05c <+0x1d8>
081ea033 +0x1af:  movl   $0x0,0xc(%esp)
081ea03b +0x1b7:  movl   $0x0,0x8(%esp)
081ea043 +0x1bf:  movl   $&_ZZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea04b +0x1c7:  movl   $0x6ad8,(%esp)
081ea052 +0x1ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea057 +0x1d3:  jmp    081ea163 <+0x2df>
081ea05c +0x1d8:  movl   $0x0,-0x14(%ebp)
081ea063 +0x1df:  mov    -0x2c(%ebp),%eax
081ea066 +0x1e2:  mov    0x1e6(%eax),%eax
081ea06c +0x1e8:  mov    %eax,-0x10(%ebp)
081ea06f +0x1eb:  movl   $0x0,0x8(%esp)
081ea077 +0x1f3:  movl   $0x0,0x4(%esp)
081ea07f +0x1fb:  mov    -0x2c(%ebp),%eax
081ea082 +0x1fe:  mov    %eax,(%esp)
081ea085 +0x201:  call   08095c32 <_Z18computeHpDamageSDCP23STComputeDamageVariablePvS1_>  ; computeHpDamageSDC(STComputeDamageVariable*, void*, void*)
081ea08a +0x206:  mov    %eax,-0x14(%ebp)
081ea08d +0x209:  mov    -0x14(%ebp),%eax
081ea090 +0x20c:  sub    $0x1,%eax
081ea093 +0x20f:  cmp    -0x10(%ebp),%eax
081ea096 +0x212:  jg     081ea0a3 <+0x21f>
081ea098 +0x214:  mov    -0x14(%ebp),%eax
081ea09b +0x217:  add    $0x1,%eax
081ea09e +0x21a:  cmp    -0x10(%ebp),%eax
081ea0a1 +0x21d:  jge    081ea0dd <+0x259>
081ea0a3 +0x21f:  mov    0xc(%ebp),%eax
081ea0a6 +0x222:  mov    %eax,(%esp)
081ea0a9 +0x225:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ea0ae +0x22a:  movl   $0x0,0x14(%esp)
081ea0b6 +0x232:  movl   $0x0,0x10(%esp)
081ea0be +0x23a:  movl   $0x1,0xc(%esp)
081ea0c6 +0x242:  movl   $0x25d,0x8(%esp)
081ea0ce +0x24a:  mov    0xc(%ebp),%edx
081ea0d1 +0x24d:  mov    %edx,0x4(%esp)
081ea0d5 +0x251:  mov    %eax,(%esp)
081ea0d8 +0x254:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ea0dd +0x259:  mov    0xc(%ebp),%eax
081ea0e0 +0x25c:  mov    %eax,(%esp)
081ea0e3 +0x25f:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ea0e8 +0x264:  movswl %ax,%ebx
081ea0eb +0x267:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ea0f0 +0x26c:  mov    %ebx,0x4(%esp)
081ea0f4 +0x270:  mov    %eax,(%esp)
081ea0f7 +0x273:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ea0fc +0x278:  mov    %eax,-0xc(%ebp)
081ea0ff +0x27b:  cmpl   $0x0,-0xc(%ebp)
081ea103 +0x27f:  je     081ea148 <+0x2c4>
081ea105 +0x281:  mov    -0x2c(%ebp),%eax
081ea108 +0x284:  mov    0x1ca(%eax),%eax
081ea10e +0x28a:  mov    -0xc(%ebp),%edx
081ea111 +0x28d:  add    $0xb24,%edx
081ea117 +0x293:  mov    %eax,0x4(%esp)
081ea11b +0x297:  mov    %edx,(%esp)
081ea11e +0x29a:  call   08308f4e <_ZN13CBattle_Field19SetDamagedPacketCntEi>  ; CBattle_Field::SetDamagedPacketCnt(int)
081ea123 +0x29f:  mov    -0x2c(%ebp),%eax
081ea126 +0x2a2:  mov    0x1ca(%eax),%eax
081ea12c +0x2a8:  mov    -0xc(%ebp),%edx
081ea12f +0x2ab:  lea    0xb24(%edx),%ecx
081ea135 +0x2b1:  mov    -0x10(%ebp),%edx
081ea138 +0x2b4:  mov    %edx,0x8(%esp)
081ea13c +0x2b8:  mov    %eax,0x4(%esp)
081ea140 +0x2bc:  mov    %ecx,(%esp)
081ea143 +0x2bf:  call   08308ff8 <_ZN13CBattle_Field14SetDamageValueEii>  ; CBattle_Field::SetDamageValue(int, int)
081ea148 +0x2c4:  addb   $0x1,-0x25(%ebp)
081ea14c +0x2c8:  movzbl -0x2d(%ebp),%eax
081ea150 +0x2cc:  cmp    %al,-0x25(%ebp)
081ea153 +0x2cf:  setb   %al
081ea156 +0x2d2:  test   %al,%al
081ea158 +0x2d4:  jne    081e9f36 <+0xb2>
081ea15e +0x2da:  mov    $0x0,%eax
081ea163 +0x2df:  add    $0x440,%esp
081ea169 +0x2e5:  pop    %ebx
081ea16a +0x2e6:  pop    %edi
081ea16b +0x2e7:  pop    %ebp
081ea16c +0x2e8:  ret
081ea16d +0x2e9:  nop
```

## 反编译 C

```c
// Dispatcher_SDC_Damage_Check::dispatch_sig @ 0x81e9e84

/* WARNING: Type propagation algorithm not settling */
/* Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SDC_Damage_Check::dispatch_sig
          (Dispatcher_SDC_Damage_Check *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  char *pcVar5;
  STComputeDamageVariable *pSVar6;
  byte bVar7;
  STComputeDamageVariable local_424 [500];
  char local_230 [500];
  int local_3c [2];
  byte local_31;
  STComputeDamageVariable *local_30;
  byte local_29;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  local_30 = (STComputeDamageVariable *)0x0;
  local_31 = 0;
  cVar1 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar1 == '\x01') {
    local_28 = 500;
    local_24 = 500;
    local_3c[1] = 500;
    local_20 = 500;
    pcVar5 = local_230;
    for (iVar4 = 0x7d; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
    }
    pSVar6 = local_424;
    for (iVar4 = 0x7d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar6 = 0;
      pSVar6 = pSVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    local_30 = local_424;
    for (local_29 = 0; local_29 < local_31; local_29 = local_29 + 1) {
      local_3c[0] = 0;
      cVar1 = PacketBuf::get_int(param_2,local_3c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x6ac9,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (500 < local_3c[0]) {
        uVar2 = LineFunc(0x6acb,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      cVar1 = PacketBuf::get_binary(param_2,local_230,local_3c[0]);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x6ace,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_20 = local_3c[0];
      local_1c = uncompress(local_424,local_3c + 1,local_230,local_3c[0]);
      if (local_1c != 0) {
        uVar2 = LineFunc(0x6ad8,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_18 = 0;
      local_14 = *(int *)(local_30 + 0x1e6);
      local_18 = computeHpDamageSDC(local_30,(void *)0x0,(void *)0x0);
      if ((local_14 < local_18 + -1) || (local_18 + 1 < local_14)) {
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_1,0x25d,1,0,0);
      }
      CUser::GetPartyIndex(param_1);
      iVar4 = G_CGameManager();
      local_10 = CGameManager::GetParty(iVar4);
      if (local_10 != 0) {
        CBattle_Field::SetDamagedPacketCnt(local_10 + 0xb24);
        CBattle_Field::SetDamageValue
                  ((CBattle_Field *)(local_10 + 0xb24),*(int *)(local_30 + 0x1ca),local_14);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x6ab5,
                     "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}
```
