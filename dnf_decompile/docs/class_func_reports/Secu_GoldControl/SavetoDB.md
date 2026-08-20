# SavetoDB

`_ZN16Secu_GoldControl8SavetoDBEbbb`

`Secu_GoldControl::SavetoDB(bool, bool, bool)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x082872ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082872ca  _ZN16Secu_GoldControl8SavetoDBEbbb
#           Secu_GoldControl::SavetoDB(bool, bool, bool)
# range [0x082872ca, 0x08287551]
082872ca +0x000:  push   %ebp
082872cb +0x001:  mov    %esp,%ebp
082872cd +0x003:  push   %edi
082872ce +0x004:  push   %ebx
082872cf +0x005:  sub    $0xc0,%esp
082872d5 +0x00b:  mov    0xc(%ebp),%ecx
082872d8 +0x00e:  mov    0x10(%ebp),%edx
082872db +0x011:  mov    0x14(%ebp),%eax
082872de +0x014:  mov    %cl,-0xac(%ebp)
082872e4 +0x01a:  mov    %dl,-0xb0(%ebp)
082872ea +0x020:  mov    %al,-0xb4(%ebp)
082872f0 +0x026:  cmpb   $0x0,-0xac(%ebp)
082872f7 +0x02d:  je     08287432 <+0x168>
082872fd +0x033:  mov    0x8(%ebp),%eax
08287300 +0x036:  movzwl 0x74(%eax),%eax
08287304 +0x03a:  test   %ax,%ax
08287307 +0x03d:  jne    08287326 <+0x5c>
08287309 +0x03f:  mov    0x8(%ebp),%eax
0828730c +0x042:  movzwl 0x78(%eax),%eax
08287310 +0x046:  test   %ax,%ax
08287313 +0x049:  jne    08287326 <+0x5c>
08287315 +0x04b:  mov    0x8(%ebp),%eax
08287318 +0x04e:  mov    0xb8(%eax),%eax
0828731e +0x054:  test   %eax,%eax
08287320 +0x056:  je     08287432 <+0x168>
08287326 +0x05c:  movl   $0x0,-0x18(%ebp)
0828732d +0x063:  movl   $0x0,-0x14(%ebp)
08287334 +0x06a:  movl   $0x0,-0x10(%ebp)
0828733b +0x071:  movl   $0x0,-0xc(%ebp)
08287342 +0x078:  mov    0x8(%ebp),%eax
08287345 +0x07b:  mov    (%eax),%eax
08287347 +0x07d:  mov    %eax,(%esp)
0828734a +0x080:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0828734f +0x085:  lea    -0x18(%ebp),%edx
08287352 +0x088:  mov    %edx,0x4(%esp)
08287356 +0x08c:  mov    %eax,(%esp)
08287359 +0x08f:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
0828735e +0x094:  lea    -0xa5(%ebp),%edx
08287364 +0x09a:  mov    $0x41,%ebx
08287369 +0x09f:  mov    $0x0,%eax
0828736e +0x0a4:  mov    %edx,%ecx
08287370 +0x0a6:  and    $0x1,%ecx
08287373 +0x0a9:  test   %ecx,%ecx
08287375 +0x0ab:  je     0828737f <+0xb5>
08287377 +0x0ad:  mov    %al,(%edx)
08287379 +0x0af:  add    $0x1,%edx
0828737c +0x0b2:  sub    $0x1,%ebx
0828737f +0x0b5:  mov    %edx,%ecx
08287381 +0x0b7:  and    $0x2,%ecx
08287384 +0x0ba:  test   %ecx,%ecx
08287386 +0x0bc:  je     08287391 <+0xc7>
08287388 +0x0be:  mov    %ax,(%edx)
0828738b +0x0c1:  add    $0x2,%edx
0828738e +0x0c4:  sub    $0x2,%ebx
08287391 +0x0c7:  mov    %ebx,%ecx
08287393 +0x0c9:  shr    $0x2,%ecx
08287396 +0x0cc:  mov    %edx,%edi
08287398 +0x0ce:  rep stos %eax,%es:(%edi)
0828739a +0x0d0:  mov    %edi,%edx
0828739c +0x0d2:  mov    %ebx,%ecx
0828739e +0x0d4:  and    $0x2,%ecx
082873a1 +0x0d7:  test   %ecx,%ecx
082873a3 +0x0d9:  je     082873ab <+0xe1>
082873a5 +0x0db:  mov    %ax,(%edx)
082873a8 +0x0de:  add    $0x2,%edx
082873ab +0x0e1:  mov    %ebx,%ecx
082873ad +0x0e3:  and    $0x1,%ecx
082873b0 +0x0e6:  test   %ecx,%ecx
082873b2 +0x0e8:  je     082873b9 <+0xef>
082873b4 +0x0ea:  mov    %al,(%edx)
082873b6 +0x0ec:  add    $0x1,%edx
082873b9 +0x0ef:  mov    0x8(%ebp),%eax
082873bc +0x0f2:  mov    (%eax),%eax
082873be +0x0f4:  add    $0xe0,%eax
082873c3 +0x0f9:  mov    %eax,(%esp)
082873c6 +0x0fc:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
082873cb +0x101:  movl   $0x41,0x8(%esp)
082873d3 +0x109:  mov    %eax,0x4(%esp)
082873d7 +0x10d:  lea    -0xa5(%ebp),%eax
082873dd +0x113:  mov    %eax,(%esp)
082873e0 +0x116:  call   0807d8d0 <_init+0x1c8>
082873e5 +0x11b:  cmpb   $0x0,-0xb4(%ebp)
082873ec +0x122:  je     08287417 <+0x14d>
082873ee +0x124:  lea    -0x64(%ebp),%eax
082873f1 +0x127:  mov    %eax,(%esp)
082873f4 +0x12a:  call   08287f6a <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x1c>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x1c
082873f9 +0x12f:  mov    0x8(%ebp),%eax
082873fc +0x132:  lea    0x40(%eax),%edx
082873ff +0x135:  lea    -0x64(%ebp),%eax
08287402 +0x138:  mov    %eax,0x8(%esp)
08287406 +0x13c:  mov    %edx,0x4(%esp)
0828740a +0x140:  mov    0x8(%ebp),%eax
0828740d +0x143:  mov    %eax,(%esp)
08287410 +0x146:  call   08287bdc <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_>  ; Secu_GoldControl::resetRangeMoney(user_gold_info&, user_gold_info&)
08287415 +0x14b:  jmp    08287425 <+0x15b>
08287417 +0x14d:  mov    0x8(%ebp),%eax
0828741a +0x150:  add    $0x40,%eax
0828741d +0x153:  mov    %eax,(%esp)
08287420 +0x156:  call   0828800a <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xbc>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xbc
08287425 +0x15b:  mov    0x8(%ebp),%eax
08287428 +0x15e:  movl   $0x0,0xb8(%eax)
08287432 +0x168:  cmpb   $0x0,-0xb0(%ebp)
08287439 +0x16f:  je     08287548 <+0x27e>
0828743f +0x175:  mov    0x8(%ebp),%eax
08287442 +0x178:  movzwl 0xb0(%eax),%eax
08287449 +0x17f:  test   %ax,%ax
0828744c +0x182:  jne    0828746e <+0x1a4>
0828744e +0x184:  mov    0x8(%ebp),%eax
08287451 +0x187:  movzwl 0xb4(%eax),%eax
08287458 +0x18e:  test   %ax,%ax
0828745b +0x191:  jne    0828746e <+0x1a4>
0828745d +0x193:  mov    0x8(%ebp),%eax
08287460 +0x196:  mov    0xbc(%eax),%eax
08287466 +0x19c:  test   %eax,%eax
08287468 +0x19e:  je     08287548 <+0x27e>
0828746e +0x1a4:  movl   $0x0,-0x28(%ebp)
08287475 +0x1ab:  movl   $0x0,-0x24(%ebp)
0828747c +0x1b2:  movl   $0x0,-0x20(%ebp)
08287483 +0x1b9:  movl   $0x0,-0x1c(%ebp)
0828748a +0x1c0:  mov    0x8(%ebp),%eax
0828748d +0x1c3:  mov    (%eax),%eax
0828748f +0x1c5:  mov    %eax,(%esp)
08287492 +0x1c8:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08287497 +0x1cd:  lea    -0x28(%ebp),%edx
0828749a +0x1d0:  mov    %edx,0x4(%esp)
0828749e +0x1d4:  mov    %eax,(%esp)
082874a1 +0x1d7:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
082874a6 +0x1dc:  lea    -0xa5(%ebp),%edx
082874ac +0x1e2:  mov    $0x41,%ebx
082874b1 +0x1e7:  mov    $0x0,%eax
082874b6 +0x1ec:  mov    %edx,%ecx
082874b8 +0x1ee:  and    $0x1,%ecx
082874bb +0x1f1:  test   %ecx,%ecx
082874bd +0x1f3:  je     082874c7 <+0x1fd>
082874bf +0x1f5:  mov    %al,(%edx)
082874c1 +0x1f7:  add    $0x1,%edx
082874c4 +0x1fa:  sub    $0x1,%ebx
082874c7 +0x1fd:  mov    %edx,%ecx
082874c9 +0x1ff:  and    $0x2,%ecx
082874cc +0x202:  test   %ecx,%ecx
082874ce +0x204:  je     082874d9 <+0x20f>
082874d0 +0x206:  mov    %ax,(%edx)
082874d3 +0x209:  add    $0x2,%edx
082874d6 +0x20c:  sub    $0x2,%ebx
082874d9 +0x20f:  mov    %ebx,%ecx
082874db +0x211:  shr    $0x2,%ecx
082874de +0x214:  mov    %edx,%edi
082874e0 +0x216:  rep stos %eax,%es:(%edi)
082874e2 +0x218:  mov    %edi,%edx
082874e4 +0x21a:  mov    %ebx,%ecx
082874e6 +0x21c:  and    $0x2,%ecx
082874e9 +0x21f:  test   %ecx,%ecx
082874eb +0x221:  je     082874f3 <+0x229>
082874ed +0x223:  mov    %ax,(%edx)
082874f0 +0x226:  add    $0x2,%edx
082874f3 +0x229:  mov    %ebx,%ecx
082874f5 +0x22b:  and    $0x1,%ecx
082874f8 +0x22e:  test   %ecx,%ecx
082874fa +0x230:  je     08287501 <+0x237>
082874fc +0x232:  mov    %al,(%edx)
082874fe +0x234:  add    $0x1,%edx
08287501 +0x237:  mov    0x8(%ebp),%eax
08287504 +0x23a:  mov    (%eax),%eax
08287506 +0x23c:  add    $0xe0,%eax
0828750b +0x241:  mov    %eax,(%esp)
0828750e +0x244:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
08287513 +0x249:  movl   $0x41,0x8(%esp)
0828751b +0x251:  mov    %eax,0x4(%esp)
0828751f +0x255:  lea    -0xa5(%ebp),%eax
08287525 +0x25b:  mov    %eax,(%esp)
08287528 +0x25e:  call   0807d8d0 <_init+0x1c8>
0828752d +0x263:  mov    0x8(%ebp),%eax
08287530 +0x266:  add    $0x7c,%eax
08287533 +0x269:  mov    %eax,(%esp)
08287536 +0x26c:  call   0828800a <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xbc>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xbc
0828753b +0x271:  mov    0x8(%ebp),%eax
0828753e +0x274:  movl   $0x0,0xbc(%eax)
08287548 +0x27e:  add    $0xc0,%esp
0828754e +0x284:  pop    %ebx
0828754f +0x285:  pop    %edi
08287550 +0x286:  pop    %ebp
08287551 +0x287:  ret
```

## 反编译 C

```c
// Secu_GoldControl::SavetoDB @ 0x82872ca

/* Secu_GoldControl::SavetoDB(bool, bool, bool) */

void __thiscall
Secu_GoldControl::SavetoDB(Secu_GoldControl *this,bool param_1,bool param_2,bool param_3)

{
  CHades *pCVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char local_a9;
  char local_a8 [64];
  user_gold_info local_68 [60];
  char local_2c [32];
  
  bVar6 = 0;
  if ((param_1) &&
     (((*(short *)(this + 0x74) != 0 || (*(short *)(this + 0x78) != 0)) ||
      (*(int *)(this + 0xb8) != 0)))) {
    local_2c[0x10] = '\0';
    local_2c[0x11] = '\0';
    local_2c[0x12] = '\0';
    local_2c[0x13] = '\0';
    local_2c[0x14] = '\0';
    local_2c[0x15] = '\0';
    local_2c[0x16] = '\0';
    local_2c[0x17] = '\0';
    local_2c[0x18] = '\0';
    local_2c[0x19] = '\0';
    local_2c[0x1a] = '\0';
    local_2c[0x1b] = '\0';
    local_2c[0x1c] = '\0';
    local_2c[0x1d] = '\0';
    local_2c[0x1e] = '\0';
    local_2c[0x1f] = '\0';
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_2c + 0x10);
    pcVar3 = &local_a9;
    uVar4 = 0x41;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_a9 = '\0';
      pcVar3 = local_a8;
      uVar4 = 0x40;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)CNetwork<4096,450000>::get_mac_addr
                               ((CNetwork<4096,450000> *)(*(int *)this + 0xe0));
    strncpy(&local_a9,pcVar3,0x41);
    if (param_3) {
      user_gold_info::user_gold_info(local_68);
      resetRangeMoney(this,(user_gold_info *)(this + 0x40),local_68);
    }
    else {
      user_gold_info::reset((user_gold_info *)(this + 0x40));
    }
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if ((param_2) &&
     (((*(short *)(this + 0xb0) != 0 || (*(short *)(this + 0xb4) != 0)) ||
      (*(int *)(this + 0xbc) != 0)))) {
    local_2c[0] = '\0';
    local_2c[1] = '\0';
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[4] = '\0';
    local_2c[5] = '\0';
    local_2c[6] = '\0';
    local_2c[7] = '\0';
    local_2c[8] = '\0';
    local_2c[9] = '\0';
    local_2c[10] = '\0';
    local_2c[0xb] = '\0';
    local_2c[0xc] = '\0';
    local_2c[0xd] = '\0';
    local_2c[0xe] = '\0';
    local_2c[0xf] = '\0';
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_2c);
    pcVar3 = &local_a9;
    uVar4 = 0x41;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_a9 = '\0';
      pcVar3 = local_a8;
      uVar4 = 0x40;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)CNetwork<4096,450000>::get_mac_addr
                               ((CNetwork<4096,450000> *)(*(int *)this + 0xe0));
    strncpy(&local_a9,pcVar3,0x41);
    user_gold_info::reset((user_gold_info *)(this + 0x7c));
    *(undefined4 *)(this + 0xbc) = 0;
  }
  return;
}
```
