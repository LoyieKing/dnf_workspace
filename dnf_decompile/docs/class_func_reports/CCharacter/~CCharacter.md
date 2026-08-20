# ~CCharacter

`_ZN10CCharacterD1Ev`

`CCharacter::~CCharacter()`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x0834842a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834842a  _ZN10CCharacterD1Ev
#           CCharacter::~CCharacter()
# range [0x0834842a, 0x0834852d]
0834842a +0x000:  push   %ebp
0834842b +0x001:  mov    %esp,%ebp
0834842d +0x003:  push   %edi
0834842e +0x004:  push   %esi
0834842f +0x005:  push   %ebx
08348430 +0x006:  sub    $0x1c,%esp
08348433 +0x009:  mov    0x8(%ebp),%eax
08348436 +0x00c:  mov    %eax,(%esp)
08348439 +0x00f:  call   083485c4 <_ZN10CCharacter7destroyEv>  ; CCharacter::destroy()
0834843e +0x014:  jmp    08348480 <+0x56>
08348440 +0x016:  mov    %edx,%esi
08348442 +0x018:  mov    %eax,%edi
08348444 +0x01a:  mov    0x8(%ebp),%eax
08348447 +0x01d:  add    $0x294,%eax
0834844c +0x022:  test   %eax,%eax
0834844e +0x024:  je     0834847a <+0x50>
08348450 +0x026:  mov    0x8(%ebp),%eax
08348453 +0x029:  add    $0x294,%eax
08348458 +0x02e:  lea    0x540(%eax),%ebx
0834845e +0x034:  mov    0x8(%ebp),%eax
08348461 +0x037:  add    $0x294,%eax
08348466 +0x03c:  cmp    %eax,%ebx
08348468 +0x03e:  je     0834847a <+0x50>
0834846a +0x040:  sub    $0xc0,%ebx
08348470 +0x046:  mov    %ebx,(%esp)
08348473 +0x049:  call   08376324 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5dc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5dc4
08348478 +0x04e:  jmp    0834845e <+0x34>
0834847a +0x050:  mov    %edi,%eax
0834847c +0x052:  mov    %esi,%edx
0834847e +0x054:  jmp    083484b6 <+0x8c>
08348480 +0x056:  mov    0x8(%ebp),%eax
08348483 +0x059:  add    $0x294,%eax
08348488 +0x05e:  test   %eax,%eax
0834848a +0x060:  je     083484f6 <+0xcc>
0834848c +0x062:  mov    0x8(%ebp),%eax
0834848f +0x065:  add    $0x294,%eax
08348494 +0x06a:  lea    0x540(%eax),%ebx
0834849a +0x070:  mov    0x8(%ebp),%eax
0834849d +0x073:  add    $0x294,%eax
083484a2 +0x078:  cmp    %eax,%ebx
083484a4 +0x07a:  je     083484f6 <+0xcc>
083484a6 +0x07c:  sub    $0xc0,%ebx
083484ac +0x082:  mov    %ebx,(%esp)
083484af +0x085:  call   08376324 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5dc4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5dc4
083484b4 +0x08a:  jmp    0834849a <+0x70>
083484b6 +0x08c:  mov    %edx,%esi
083484b8 +0x08e:  mov    %eax,%edi
083484ba +0x090:  mov    0x8(%ebp),%eax
083484bd +0x093:  add    $0x240,%eax
083484c2 +0x098:  test   %eax,%eax
083484c4 +0x09a:  je     083484ea <+0xc0>
083484c6 +0x09c:  mov    0x8(%ebp),%eax
083484c9 +0x09f:  add    $0x240,%eax
083484ce +0x0a4:  lea    0x54(%eax),%ebx
083484d1 +0x0a7:  mov    0x8(%ebp),%eax
083484d4 +0x0aa:  add    $0x240,%eax
083484d9 +0x0af:  cmp    %eax,%ebx
083484db +0x0b1:  je     083484ea <+0xc0>
083484dd +0x0b3:  sub    $0xc,%ebx
083484e0 +0x0b6:  mov    %ebx,(%esp)
083484e3 +0x0b9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083484e8 +0x0be:  jmp    083484d1 <+0xa7>
083484ea +0x0c0:  mov    %edi,%eax
083484ec +0x0c2:  mov    %esi,%edx
083484ee +0x0c4:  mov    %eax,(%esp)
083484f1 +0x0c7:  call   08ae3750 <_Unwind_Resume>
083484f6 +0x0cc:  mov    0x8(%ebp),%eax
083484f9 +0x0cf:  add    $0x240,%eax
083484fe +0x0d4:  test   %eax,%eax
08348500 +0x0d6:  je     08348526 <+0xfc>
08348502 +0x0d8:  mov    0x8(%ebp),%eax
08348505 +0x0db:  add    $0x240,%eax
0834850a +0x0e0:  lea    0x54(%eax),%ebx
0834850d +0x0e3:  mov    0x8(%ebp),%eax
08348510 +0x0e6:  add    $0x240,%eax
08348515 +0x0eb:  cmp    %eax,%ebx
08348517 +0x0ed:  je     08348526 <+0xfc>
08348519 +0x0ef:  sub    $0xc,%ebx
0834851c +0x0f2:  mov    %ebx,(%esp)
0834851f +0x0f5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08348524 +0x0fa:  jmp    0834850d <+0xe3>
08348526 +0x0fc:  add    $0x1c,%esp
08348529 +0x0ff:  pop    %ebx
0834852a +0x100:  pop    %esi
0834852b +0x101:  pop    %edi
0834852c +0x102:  pop    %ebp
0834852d +0x103:  ret
```

## 反编译 C

```c
// CCharacter::~CCharacter @ 0x834842a

/* CCharacter::~CCharacter() */

void __thiscall CCharacter::~CCharacter(CCharacter *this)

{
  STSecondGrowTypeInfo *this_00;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_01;
  
                    /* try { // try from 08348439 to 0834843d has its CatchHandler @ 08348440 */
  destroy(this);
  if (this != (CCharacter *)0xfffffd6c) {
    this_00 = (STSecondGrowTypeInfo *)(this + 0x7d4);
    while (this_00 != (STSecondGrowTypeInfo *)(this + 0x294)) {
      this_00 = this_00 + -0xc0;
                    /* try { // try from 083484af to 083484b3 has its CatchHandler @ 083484b6 */
      STSecondGrowTypeInfo::~STSecondGrowTypeInfo(this_00);
    }
  }
  if (this != (CCharacter *)0xfffffdc0) {
    this_01 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x294);
    while (this_01 !=
           (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x240)) {
      this_01 = this_01 + -0xc;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(this_01);
    }
  }
  return;
}
```
