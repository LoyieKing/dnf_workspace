# CCharacter

`_ZN10CCharacterC1Ev`

`CCharacter::CCharacter()`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x0834828c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834828c  _ZN10CCharacterC1Ev
#           CCharacter::CCharacter()
# range [0x0834828c, 0x08348429]
0834828c +0x000:  push   %ebp
0834828d +0x001:  mov    %esp,%ebp
0834828f +0x003:  push   %edi
08348290 +0x004:  push   %esi
08348291 +0x005:  push   %ebx
08348292 +0x006:  sub    $0x2c,%esp
08348295 +0x009:  mov    0x8(%ebp),%eax
08348298 +0x00c:  mov    %eax,(%esp)
0834829b +0x00f:  call   08348254 <_ZN15_Additioal_infoC1Ev>  ; _Additioal_info::_Additioal_info()
083482a0 +0x014:  mov    0x8(%ebp),%eax
083482a3 +0x017:  add    $0x52,%eax
083482a6 +0x01a:  mov    %eax,%ebx
083482a8 +0x01c:  mov    $0x5,%esi
083482ad +0x021:  jmp    083482bd <+0x31>
083482af +0x023:  mov    %ebx,(%esp)
083482b2 +0x026:  call   08348254 <_ZN15_Additioal_infoC1Ev>  ; _Additioal_info::_Additioal_info()
083482b7 +0x02b:  add    $0x52,%ebx
083482ba +0x02e:  sub    $0x1,%esi
083482bd +0x031:  cmp    $0xffffffff,%esi
083482c0 +0x034:  setne  %al
083482c3 +0x037:  test   %al,%al
083482c5 +0x039:  jne    083482af <+0x23>
083482c7 +0x03b:  mov    0x8(%ebp),%eax
083482ca +0x03e:  lea    0x240(%eax),%esi
083482d0 +0x044:  mov    %esi,%edi
083482d2 +0x046:  mov    $0x6,%ebx
083482d7 +0x04b:  jmp    083482e7 <+0x5b>
083482d9 +0x04d:  mov    %edi,(%esp)
083482dc +0x050:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
083482e1 +0x055:  add    $0xc,%edi
083482e4 +0x058:  sub    $0x1,%ebx
083482e7 +0x05b:  cmp    $0xffffffff,%ebx
083482ea +0x05e:  setne  %al
083482ed +0x061:  test   %al,%al
083482ef +0x063:  jne    083482d9 <+0x4d>
083482f1 +0x065:  jmp    0834832f <+0xa3>
083482f3 +0x067:  mov    %edx,%edi
083482f5 +0x069:  mov    %eax,-0x20(%ebp)
083482f8 +0x06c:  test   %esi,%esi
083482fa +0x06e:  je     08348322 <+0x96>
083482fc +0x070:  mov    $0x6,%eax
08348301 +0x075:  sub    %ebx,%eax
08348303 +0x077:  mov    %eax,%edx
08348305 +0x079:  mov    %edx,%eax
08348307 +0x07b:  add    %eax,%eax
08348309 +0x07d:  add    %edx,%eax
0834830b +0x07f:  shl    $0x2,%eax
0834830e +0x082:  lea    (%esi,%eax,1),%ebx
08348311 +0x085:  cmp    %esi,%ebx
08348313 +0x087:  je     08348322 <+0x96>
08348315 +0x089:  sub    $0xc,%ebx
08348318 +0x08c:  mov    %ebx,(%esp)
0834831b +0x08f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08348320 +0x094:  jmp    08348311 <+0x85>
08348322 +0x096:  mov    -0x20(%ebp),%eax
08348325 +0x099:  mov    %edi,%edx
08348327 +0x09b:  mov    %eax,(%esp)
0834832a +0x09e:  call   08ae3750 <_Unwind_Resume>
0834832f +0x0a3:  mov    0x8(%ebp),%eax
08348332 +0x0a6:  lea    0x294(%eax),%esi
08348338 +0x0ac:  mov    %esi,%edi
0834833a +0x0ae:  mov    $0x6,%ebx
0834833f +0x0b3:  jmp    08348352 <+0xc6>
08348341 +0x0b5:  mov    %edi,(%esp)
08348344 +0x0b8:  call   08373934 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd900>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd900
08348349 +0x0bd:  add    $0xc0,%edi
0834834f +0x0c3:  sub    $0x1,%ebx
08348352 +0x0c6:  cmp    $0xffffffff,%ebx
08348355 +0x0c9:  setne  %al
08348358 +0x0cc:  test   %al,%al
0834835a +0x0ce:  jne    08348341 <+0xb5>
0834835c +0x0d0:  jmp    08348397 <+0x10b>
0834835e +0x0d2:  mov    %edx,%edi
08348360 +0x0d4:  mov    %eax,-0x1c(%ebp)
08348363 +0x0d7:  test   %esi,%esi
08348365 +0x0d9:  je     08348390 <+0x104>
08348367 +0x0db:  mov    $0x6,%eax
0834836c +0x0e0:  sub    %ebx,%eax
0834836e +0x0e2:  mov    %eax,%edx
08348370 +0x0e4:  mov    %edx,%eax
08348372 +0x0e6:  add    %eax,%eax
08348374 +0x0e8:  add    %edx,%eax
08348376 +0x0ea:  shl    $0x6,%eax
08348379 +0x0ed:  lea    (%esi,%eax,1),%ebx
0834837c +0x0f0:  cmp    %esi,%ebx
0834837e +0x0f2:  je     08348390 <+0x104>
08348380 +0x0f4:  sub    $0xc0,%ebx
08348386 +0x0fa:  mov    %ebx,(%esp)
08348389 +0x0fd:  call   08376324 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5dc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5dc4
0834838e +0x102:  jmp    0834837c <+0xf0>
08348390 +0x104:  mov    -0x1c(%ebp),%eax
08348393 +0x107:  mov    %edi,%edx
08348395 +0x109:  jmp    083483e2 <+0x156>
08348397 +0x10b:  mov    0x8(%ebp),%eax
0834839a +0x10e:  mov    %eax,(%esp)
0834839d +0x111:  call   0834852e <_ZN10CCharacter5clearEv>  ; CCharacter::clear()
083483a2 +0x116:  jmp    08348422 <+0x196>
083483a4 +0x118:  mov    %edx,%esi
083483a6 +0x11a:  mov    %eax,%edi
083483a8 +0x11c:  mov    0x8(%ebp),%eax
083483ab +0x11f:  add    $0x294,%eax
083483b0 +0x124:  test   %eax,%eax
083483b2 +0x126:  je     083483de <+0x152>
083483b4 +0x128:  mov    0x8(%ebp),%eax
083483b7 +0x12b:  add    $0x294,%eax
083483bc +0x130:  lea    0x540(%eax),%ebx
083483c2 +0x136:  mov    0x8(%ebp),%eax
083483c5 +0x139:  add    $0x294,%eax
083483ca +0x13e:  cmp    %eax,%ebx
083483cc +0x140:  je     083483de <+0x152>
083483ce +0x142:  sub    $0xc0,%ebx
083483d4 +0x148:  mov    %ebx,(%esp)
083483d7 +0x14b:  call   08376324 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5dc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5dc4
083483dc +0x150:  jmp    083483c2 <+0x136>
083483de +0x152:  mov    %edi,%eax
083483e0 +0x154:  mov    %esi,%edx
083483e2 +0x156:  mov    %edx,%esi
083483e4 +0x158:  mov    %eax,%edi
083483e6 +0x15a:  mov    0x8(%ebp),%eax
083483e9 +0x15d:  add    $0x240,%eax
083483ee +0x162:  test   %eax,%eax
083483f0 +0x164:  je     08348416 <+0x18a>
083483f2 +0x166:  mov    0x8(%ebp),%eax
083483f5 +0x169:  add    $0x240,%eax
083483fa +0x16e:  lea    0x54(%eax),%ebx
083483fd +0x171:  mov    0x8(%ebp),%eax
08348400 +0x174:  add    $0x240,%eax
08348405 +0x179:  cmp    %eax,%ebx
08348407 +0x17b:  je     08348416 <+0x18a>
08348409 +0x17d:  sub    $0xc,%ebx
0834840c +0x180:  mov    %ebx,(%esp)
0834840f +0x183:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08348414 +0x188:  jmp    083483fd <+0x171>
08348416 +0x18a:  mov    %edi,%eax
08348418 +0x18c:  mov    %esi,%edx
0834841a +0x18e:  mov    %eax,(%esp)
0834841d +0x191:  call   08ae3750 <_Unwind_Resume>
08348422 +0x196:  add    $0x2c,%esp
08348425 +0x199:  pop    %ebx
08348426 +0x19a:  pop    %esi
08348427 +0x19b:  pop    %edi
08348428 +0x19c:  pop    %ebp
08348429 +0x19d:  ret
```

## 反编译 C

```c
// CCharacter::CCharacter @ 0x834828c

/* CCharacter::CCharacter() */

void __thiscall CCharacter::CCharacter(CCharacter *this)

{
  _Additioal_info *this_00;
  int iVar1;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_01;
  STSecondGrowTypeInfo *this_02;
  
  _Additioal_info::_Additioal_info((_Additioal_info *)this);
  this_00 = (_Additioal_info *)this;
  for (iVar1 = 5; this_00 = this_00 + 0x52, iVar1 != -1; iVar1 = iVar1 + -1) {
    _Additioal_info::_Additioal_info(this_00);
  }
  this_01 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x240);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 083482dc to 083482e0 has its CatchHandler @ 083482f3 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
  this_02 = (STSecondGrowTypeInfo *)(this + 0x294);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08348344 to 08348348 has its CatchHandler @ 0834835e */
    STSecondGrowTypeInfo::STSecondGrowTypeInfo(this_02);
    this_02 = this_02 + 0xc0;
  }
                    /* try { // try from 0834839d to 083483a1 has its CatchHandler @ 083483a4 */
  clear(this);
  return;
}
```
