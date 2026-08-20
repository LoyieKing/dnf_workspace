# CItemUpgrade_Separate

`_ZN8WongWork21CItemUpgrade_SeparateC1Ev`

`WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811dfc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811dfc0  _ZN8WongWork21CItemUpgrade_SeparateC1Ev
#           WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()
# range [0x0811dfc0, 0x0811e0bd]
0811dfc0 +0x00:  push   %ebp
0811dfc1 +0x01:  mov    %esp,%ebp
0811dfc3 +0x03:  push   %edi
0811dfc4 +0x04:  push   %esi
0811dfc5 +0x05:  push   %ebx
0811dfc6 +0x06:  sub    $0x2c,%esp
0811dfc9 +0x09:  mov    0x8(%ebp),%eax
0811dfcc +0x0c:  mov    %eax,(%esp)
0811dfcf +0x0f:  call   080fc834 <_ZN8WongWork12IItemUpgradeC1Ev>  ; WongWork::IItemUpgrade::IItemUpgrade()
0811dfd4 +0x14:  mov    0x8(%ebp),%eax
0811dfd7 +0x17:  movl   $&_ZTVN8WongWork21CItemUpgrade_SeparateE+0x8,(%eax)
0811dfdd +0x1d:  mov    0x8(%ebp),%eax
0811dfe0 +0x20:  add    $0x4,%eax
0811dfe3 +0x23:  mov    %eax,(%esp)
0811dfe6 +0x26:  call   0811ee5e <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x159>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x159
0811dfeb +0x2b:  mov    0x8(%ebp),%eax
0811dfee +0x2e:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x190(%eax)
0811dff8 +0x38:  movl   $0x0,(%esp)
0811dfff +0x3f:  call   0807d750 <_init+0x48>
0811e004 +0x44:  mov    %eax,-0x24(%ebp)
0811e007 +0x47:  lea    -0x24(%ebp),%esi
0811e00a +0x4a:  movl   $0x9c8,(%esp)
0811e011 +0x51:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0811e016 +0x56:  mov    %eax,%ebx
0811e018 +0x58:  mov    %ebx,%eax
0811e01a +0x5a:  mov    %esi,0x4(%esp)
0811e01e +0x5e:  mov    %eax,(%esp)
0811e021 +0x61:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0811e026 +0x66:  jmp    0811e03a <+0x7a>
0811e028 +0x68:  mov    %edx,%esi
0811e02a +0x6a:  mov    %eax,%edi
0811e02c +0x6c:  mov    %ebx,(%esp)
0811e02f +0x6f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811e034 +0x74:  mov    %edi,%eax
0811e036 +0x76:  mov    %esi,%edx
0811e038 +0x78:  jmp    0811e083 <+0xc3>
0811e03a +0x7a:  mov    %ebx,%edx
0811e03c +0x7c:  mov    0x8(%ebp),%eax
0811e03f +0x7f:  mov    %edx,0x18c(%eax)
0811e045 +0x85:  movl   $0x0,-0x1c(%ebp)
0811e04c +0x8c:  jmp    0811e076 <+0xb6>
0811e04e +0x8e:  mov    0x8(%ebp),%eax
0811e051 +0x91:  mov    0x190(%eax),%eax
0811e057 +0x97:  mov    %eax,-0x20(%ebp)
0811e05a +0x9a:  mov    0x8(%ebp),%eax
0811e05d +0x9d:  mov    0x18c(%eax),%eax
0811e063 +0xa3:  lea    -0x20(%ebp),%edx
0811e066 +0xa6:  mov    %edx,0x4(%esp)
0811e06a +0xaa:  mov    %eax,(%esp)
0811e06d +0xad:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0811e072 +0xb2:  addl   $0x1,-0x1c(%ebp)
0811e076 +0xb6:  cmpl   $0x63,-0x1c(%ebp)
0811e07a +0xba:  setle  %al
0811e07d +0xbd:  test   %al,%al
0811e07f +0xbf:  jne    0811e04e <+0x8e>
0811e081 +0xc1:  jmp    0811e0b6 <+0xf6>
0811e083 +0xc3:  mov    %edx,%ebx
0811e085 +0xc5:  mov    %eax,%esi
0811e087 +0xc7:  mov    0x8(%ebp),%eax
0811e08a +0xca:  add    $0x4,%eax
0811e08d +0xcd:  mov    %eax,(%esp)
0811e090 +0xd0:  call   0811eeda <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x1d5>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x1d5
0811e095 +0xd5:  mov    %esi,%eax
0811e097 +0xd7:  mov    %ebx,%edx
0811e099 +0xd9:  jmp    0811e09b <+0xdb>
0811e09b +0xdb:  mov    %edx,%ebx
0811e09d +0xdd:  mov    %eax,%esi
0811e09f +0xdf:  mov    0x8(%ebp),%eax
0811e0a2 +0xe2:  mov    %eax,(%esp)
0811e0a5 +0xe5:  call   080fc842 <_ZN8WongWork12IItemUpgradeD1Ev>  ; WongWork::IItemUpgrade::~IItemUpgrade()
0811e0aa +0xea:  mov    %esi,%eax
0811e0ac +0xec:  mov    %ebx,%edx
0811e0ae +0xee:  mov    %eax,(%esp)
0811e0b1 +0xf1:  call   08ae3750 <_Unwind_Resume>
0811e0b6 +0xf6:  add    $0x2c,%esp
0811e0b9 +0xf9:  pop    %ebx
0811e0ba +0xfa:  pop    %esi
0811e0bb +0xfb:  pop    %edi
0811e0bc +0xfc:  pop    %ebp
0811e0bd +0xfd:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate @ 0x811dfc0

/* WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate() */

void __thiscall WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate(CItemUpgrade_Separate *this)

{
  CMTRand *this_00;
  ulong local_28;
  ulong local_24;
  int local_20;
  
  IItemUpgrade::IItemUpgrade((IItemUpgrade *)this);
  *(undefined ***)this = &PTR_ProcUpgrade_08b56950;
                    /* try { // try from 0811dfe6 to 0811dfea has its CatchHandler @ 0811e09b */
  GenuineDamageUpgradeTable::GenuineDamageUpgradeTable((GenuineDamageUpgradeTable *)(this + 4));
  *(undefined4 *)(this + 400) = 100000;
  local_28 = time((time_t *)0x0);
                    /* try { // try from 0811e011 to 0811e015 has its CatchHandler @ 0811e083 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0811e021 to 0811e025 has its CatchHandler @ 0811e028 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x18c) = this_00;
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    local_24 = *(ulong *)(this + 400);
    CMTRand::randInt(*(CMTRand **)(this + 0x18c),&local_24);
  }
  return;
}
```
