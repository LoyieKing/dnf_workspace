# ~CBossTower

`_ZN8WongWork10CBossTowerD1Ev`

`WongWork::CBossTower::~CBossTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142a74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142a74  _ZN8WongWork10CBossTowerD1Ev
#           WongWork::CBossTower::~CBossTower()
# range [0x08142a74, 0x08142b35]
08142a74 +0x00:  push   %ebp
08142a75 +0x01:  mov    %esp,%ebp
08142a77 +0x03:  push   %esi
08142a78 +0x04:  push   %ebx
08142a79 +0x05:  sub    $0x10,%esp
08142a7c +0x08:  mov    0x8(%ebp),%eax
08142a7f +0x0b:  movl   $&_ZTVN8WongWork10CBossTowerE+0x8,(%eax)
08142a85 +0x11:  mov    0x8(%ebp),%eax
08142a88 +0x14:  mov    %eax,(%esp)
08142a8b +0x17:  call   0814bea2 <_ZN8WongWork10CBossStage5resetEv>  ; WongWork::CBossStage::reset()
08142a90 +0x1c:  mov    0x8(%ebp),%eax
08142a93 +0x1f:  movl   $0x0,0xaf0(%eax)
08142a9d +0x29:  mov    0x8(%ebp),%eax
08142aa0 +0x2c:  movl   $0x0,0x8(%eax)
08142aa7 +0x33:  mov    0x8(%ebp),%eax
08142aaa +0x36:  add    $0xd,%eax
08142aad +0x39:  movl   $0x4,0x8(%esp)
08142ab5 +0x41:  movl   $0x0,0x4(%esp)
08142abd +0x49:  mov    %eax,(%esp)
08142ac0 +0x4c:  call   0807dcc0 <_init+0x5b8>
08142ac5 +0x51:  mov    0x8(%ebp),%eax
08142ac8 +0x54:  movl   $0x0,0x9f0(%eax)
08142ad2 +0x5e:  mov    0x8(%ebp),%eax
08142ad5 +0x61:  movl   $0x0,0x4(%eax)
08142adc +0x68:  mov    0x8(%ebp),%eax
08142adf +0x6b:  add    $0xb00,%eax
08142ae4 +0x70:  mov    %eax,(%esp)
08142ae7 +0x73:  call   08145704 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x187>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x187
08142aec +0x78:  jmp    08142b23 <+0xaf>
08142aee +0x7a:  mov    %edx,%ebx
08142af0 +0x7c:  mov    %eax,%esi
08142af2 +0x7e:  mov    0x8(%ebp),%eax
08142af5 +0x81:  add    $0xb00,%eax
08142afa +0x86:  mov    %eax,(%esp)
08142afd +0x89:  call   08145704 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x187>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x187
08142b02 +0x8e:  mov    %esi,%eax
08142b04 +0x90:  mov    %ebx,%edx
08142b06 +0x92:  jmp    08142b08 <+0x94>
08142b08 +0x94:  mov    %edx,%ebx
08142b0a +0x96:  mov    %eax,%esi
08142b0c +0x98:  mov    0x8(%ebp),%eax
08142b0f +0x9b:  mov    %eax,(%esp)
08142b12 +0x9e:  call   0814bdd6 <_ZN8WongWork10CBossStageD1Ev>  ; WongWork::CBossStage::~CBossStage()
08142b17 +0xa3:  mov    %esi,%eax
08142b19 +0xa5:  mov    %ebx,%edx
08142b1b +0xa7:  mov    %eax,(%esp)
08142b1e +0xaa:  call   08ae3750 <_Unwind_Resume>
08142b23 +0xaf:  mov    0x8(%ebp),%eax
08142b26 +0xb2:  mov    %eax,(%esp)
08142b29 +0xb5:  call   0814bdd6 <_ZN8WongWork10CBossStageD1Ev>  ; WongWork::CBossStage::~CBossStage()
08142b2e +0xba:  add    $0x10,%esp
08142b31 +0xbd:  pop    %ebx
08142b32 +0xbe:  pop    %esi
08142b33 +0xbf:  pop    %ebp
08142b34 +0xc0:  ret
08142b35 +0xc1:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::~CBossTower @ 0x8142a74

/* WongWork::CBossTower::~CBossTower() */

void __thiscall WongWork::CBossTower::~CBossTower(CBossTower *this)

{
  *(undefined ***)this = &PTR_generateRewardItem_08b70268;
                    /* try { // try from 08142a8b to 08142a8f has its CatchHandler @ 08142aee */
  CBossStage::reset((CBossStage *)this);
  *(undefined4 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 8) = 0;
  memset(this + 0xd,0,4);
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 08142ae7 to 08142aeb has its CatchHandler @ 08142b08 */
  CBossDungeonEntranceLog::~CBossDungeonEntranceLog((CBossDungeonEntranceLog *)(this + 0xb00));
  CBossStage::~CBossStage((CBossStage *)this);
  return;
}
```
