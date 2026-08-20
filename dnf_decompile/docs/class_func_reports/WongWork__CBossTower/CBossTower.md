# CBossTower

`_ZN8WongWork10CBossTowerC1Ev`

`WongWork::CBossTower::CBossTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081429b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081429b4  _ZN8WongWork10CBossTowerC1Ev
#           WongWork::CBossTower::CBossTower()
# range [0x081429b4, 0x08142a73]
081429b4 +0x00:  push   %ebp
081429b5 +0x01:  mov    %esp,%ebp
081429b7 +0x03:  push   %esi
081429b8 +0x04:  push   %ebx
081429b9 +0x05:  sub    $0x10,%esp
081429bc +0x08:  mov    0x8(%ebp),%eax
081429bf +0x0b:  mov    %eax,(%esp)
081429c2 +0x0e:  call   0814bd0c <_ZN8WongWork10CBossStageC1Ev>  ; WongWork::CBossStage::CBossStage()
081429c7 +0x13:  mov    0x8(%ebp),%eax
081429ca +0x16:  movl   $&_ZTVN8WongWork10CBossTowerE+0x8,(%eax)
081429d0 +0x1c:  mov    0x8(%ebp),%eax
081429d3 +0x1f:  add    $0xb00,%eax
081429d8 +0x24:  mov    %eax,(%esp)
081429db +0x27:  call   081456c2 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x145>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x145
081429e0 +0x2c:  mov    0x8(%ebp),%eax
081429e3 +0x2f:  mov    %eax,(%esp)
081429e6 +0x32:  call   0814bea2 <_ZN8WongWork10CBossStage5resetEv>  ; WongWork::CBossStage::reset()
081429eb +0x37:  mov    0x8(%ebp),%eax
081429ee +0x3a:  movl   $0x0,0xaf0(%eax)
081429f8 +0x44:  mov    0x8(%ebp),%eax
081429fb +0x47:  movl   $0x0,0x8(%eax)
08142a02 +0x4e:  mov    0x8(%ebp),%eax
08142a05 +0x51:  add    $0xd,%eax
08142a08 +0x54:  movl   $0x4,0x8(%esp)
08142a10 +0x5c:  movl   $0x0,0x4(%esp)
08142a18 +0x64:  mov    %eax,(%esp)
08142a1b +0x67:  call   0807dcc0 <_init+0x5b8>
08142a20 +0x6c:  mov    0x8(%ebp),%eax
08142a23 +0x6f:  movl   $0x0,0x9f0(%eax)
08142a2d +0x79:  mov    0x8(%ebp),%eax
08142a30 +0x7c:  movl   $0x0,0x4(%eax)
08142a37 +0x83:  add    $0x10,%esp
08142a3a +0x86:  pop    %ebx
08142a3b +0x87:  pop    %esi
08142a3c +0x88:  pop    %ebp
08142a3d +0x89:  ret
08142a3e +0x8a:  mov    %edx,%ebx
08142a40 +0x8c:  mov    %eax,%esi
08142a42 +0x8e:  mov    0x8(%ebp),%eax
08142a45 +0x91:  add    $0xb00,%eax
08142a4a +0x96:  mov    %eax,(%esp)
08142a4d +0x99:  call   08145704 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x187>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x187
08142a52 +0x9e:  mov    %esi,%eax
08142a54 +0xa0:  mov    %ebx,%edx
08142a56 +0xa2:  jmp    08142a58 <+0xa4>
08142a58 +0xa4:  mov    %edx,%ebx
08142a5a +0xa6:  mov    %eax,%esi
08142a5c +0xa8:  mov    0x8(%ebp),%eax
08142a5f +0xab:  mov    %eax,(%esp)
08142a62 +0xae:  call   0814bdd6 <_ZN8WongWork10CBossStageD1Ev>  ; WongWork::CBossStage::~CBossStage()
08142a67 +0xb3:  mov    %esi,%eax
08142a69 +0xb5:  mov    %ebx,%edx
08142a6b +0xb7:  mov    %eax,(%esp)
08142a6e +0xba:  call   08ae3750 <_Unwind_Resume>
08142a73 +0xbf:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::CBossTower @ 0x81429b4

/* WongWork::CBossTower::CBossTower() */

void __thiscall WongWork::CBossTower::CBossTower(CBossTower *this)

{
  CBossStage::CBossStage((CBossStage *)this);
  *(undefined ***)this = &PTR_generateRewardItem_08b70268;
                    /* try { // try from 081429db to 081429df has its CatchHandler @ 08142a58 */
  CBossDungeonEntranceLog::CBossDungeonEntranceLog((CBossDungeonEntranceLog *)(this + 0xb00));
                    /* try { // try from 081429e6 to 081429ea has its CatchHandler @ 08142a3e */
  CBossStage::reset((CBossStage *)this);
  *(undefined4 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 8) = 0;
  memset(this + 0xd,0,4);
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
