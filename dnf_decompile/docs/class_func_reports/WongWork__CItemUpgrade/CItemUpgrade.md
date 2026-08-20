# CItemUpgrade

`_ZN8WongWork12CItemUpgradeC1Ev`

`WongWork::CItemUpgrade::CItemUpgrade()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x085461c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085461c8  _ZN8WongWork12CItemUpgradeC1Ev
#           WongWork::CItemUpgrade::CItemUpgrade()
# range [0x085461c8, 0x085462c5]
085461c8 +0x00:  push   %ebp
085461c9 +0x01:  mov    %esp,%ebp
085461cb +0x03:  push   %edi
085461cc +0x04:  push   %esi
085461cd +0x05:  push   %ebx
085461ce +0x06:  sub    $0x2c,%esp
085461d1 +0x09:  mov    0x8(%ebp),%eax
085461d4 +0x0c:  add    $0x4,%eax
085461d7 +0x0f:  mov    %eax,(%esp)
085461da +0x12:  call   0854b496 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x31e>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x31e
085461df +0x17:  mov    0x8(%ebp),%eax
085461e2 +0x1a:  mov    %eax,(%esp)
085461e5 +0x1d:  call   080fc834 <_ZN8WongWork12IItemUpgradeC1Ev>  ; WongWork::IItemUpgrade::IItemUpgrade()
085461ea +0x22:  mov    0x8(%ebp),%eax
085461ed +0x25:  movl   $&_ZTVN8WongWork12CItemUpgradeE+0x8,(%eax)
085461f3 +0x2b:  mov    0x8(%ebp),%eax
085461f6 +0x2e:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x4ec(%eax)
08546200 +0x38:  movl   $0x0,(%esp)
08546207 +0x3f:  call   0807d750 <_init+0x48>
0854620c +0x44:  mov    %eax,-0x24(%ebp)
0854620f +0x47:  lea    -0x24(%ebp),%esi
08546212 +0x4a:  movl   $0x9c8,(%esp)
08546219 +0x51:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0854621e +0x56:  mov    %eax,%ebx
08546220 +0x58:  mov    %ebx,%eax
08546222 +0x5a:  mov    %esi,0x4(%esp)
08546226 +0x5e:  mov    %eax,(%esp)
08546229 +0x61:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0854622e +0x66:  jmp    08546242 <+0x7a>
08546230 +0x68:  mov    %edx,%esi
08546232 +0x6a:  mov    %eax,%edi
08546234 +0x6c:  mov    %ebx,(%esp)
08546237 +0x6f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854623c +0x74:  mov    %edi,%eax
0854623e +0x76:  mov    %esi,%edx
08546240 +0x78:  jmp    0854628b <+0xc3>
08546242 +0x7a:  mov    %ebx,%edx
08546244 +0x7c:  mov    0x8(%ebp),%eax
08546247 +0x7f:  mov    %edx,0x4e8(%eax)
0854624d +0x85:  movl   $0x0,-0x1c(%ebp)
08546254 +0x8c:  jmp    0854627e <+0xb6>
08546256 +0x8e:  mov    0x8(%ebp),%eax
08546259 +0x91:  mov    0x4ec(%eax),%eax
0854625f +0x97:  mov    %eax,-0x20(%ebp)
08546262 +0x9a:  mov    0x8(%ebp),%eax
08546265 +0x9d:  mov    0x4e8(%eax),%eax
0854626b +0xa3:  lea    -0x20(%ebp),%edx
0854626e +0xa6:  mov    %edx,0x4(%esp)
08546272 +0xaa:  mov    %eax,(%esp)
08546275 +0xad:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0854627a +0xb2:  addl   $0x1,-0x1c(%ebp)
0854627e +0xb6:  cmpl   $0x63,-0x1c(%ebp)
08546282 +0xba:  setle  %al
08546285 +0xbd:  test   %al,%al
08546287 +0xbf:  jne    08546256 <+0x8e>
08546289 +0xc1:  jmp    085462be <+0xf6>
0854628b +0xc3:  mov    %edx,%ebx
0854628d +0xc5:  mov    %eax,%esi
0854628f +0xc7:  mov    0x8(%ebp),%eax
08546292 +0xca:  mov    %eax,(%esp)
08546295 +0xcd:  call   080fc842 <_ZN8WongWork12IItemUpgradeD1Ev>  ; WongWork::IItemUpgrade::~IItemUpgrade()
0854629a +0xd2:  mov    %esi,%eax
0854629c +0xd4:  mov    %ebx,%edx
0854629e +0xd6:  jmp    085462a0 <+0xd8>
085462a0 +0xd8:  mov    %edx,%ebx
085462a2 +0xda:  mov    %eax,%esi
085462a4 +0xdc:  mov    0x8(%ebp),%eax
085462a7 +0xdf:  add    $0x4,%eax
085462aa +0xe2:  mov    %eax,(%esp)
085462ad +0xe5:  call   0854b4aa <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x332>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x332
085462b2 +0xea:  mov    %esi,%eax
085462b4 +0xec:  mov    %ebx,%edx
085462b6 +0xee:  mov    %eax,(%esp)
085462b9 +0xf1:  call   08ae3750 <_Unwind_Resume>
085462be +0xf6:  add    $0x2c,%esp
085462c1 +0xf9:  pop    %ebx
085462c2 +0xfa:  pop    %esi
085462c3 +0xfb:  pop    %edi
085462c4 +0xfc:  pop    %ebp
085462c5 +0xfd:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::CItemUpgrade @ 0x85461c8

/* WongWork::CItemUpgrade::CItemUpgrade() */

void __thiscall WongWork::CItemUpgrade::CItemUpgrade(CItemUpgrade *this)

{
  CMTRand *this_00;
  ulong local_28;
  ulong local_24;
  int local_20;
  
  CItemUpgradeTable::CItemUpgradeTable((CItemUpgradeTable *)(this + 4));
                    /* try { // try from 085461e5 to 085461e9 has its CatchHandler @ 085462a0 */
  IItemUpgrade::IItemUpgrade((IItemUpgrade *)this);
  *(undefined ***)this = &PTR_ProcUpgrade_08c9d318;
  *(undefined4 *)(this + 0x4ec) = 100000;
  local_28 = time((time_t *)0x0);
                    /* try { // try from 08546219 to 0854621d has its CatchHandler @ 0854628b */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08546229 to 0854622d has its CatchHandler @ 08546230 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x4e8) = this_00;
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    local_24 = *(ulong *)(this + 0x4ec);
    CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_24);
  }
  return;
}
```
