# ~CBossStage

`_ZN8WongWork10CBossStageD1Ev`

`WongWork::CBossStage::~CBossStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814bdd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814bdd6  _ZN8WongWork10CBossStageD1Ev
#           WongWork::CBossStage::~CBossStage()
# range [0x0814bdd6, 0x0814bea1]
0814bdd6 +0x00:  push   %ebp
0814bdd7 +0x01:  mov    %esp,%ebp
0814bdd9 +0x03:  push   %esi
0814bdda +0x04:  push   %ebx
0814bddb +0x05:  sub    $0x10,%esp
0814bdde +0x08:  mov    0x8(%ebp),%eax
0814bde1 +0x0b:  movl   $&_ZTVN8WongWork10CBossStageE+0x8,(%eax)
0814bde7 +0x11:  mov    0x8(%ebp),%eax
0814bdea +0x14:  movl   $0x1,0xae0(%eax)
0814bdf4 +0x1e:  mov    0x8(%ebp),%eax
0814bdf7 +0x21:  movl   $0x0,0x9f0(%eax)
0814be01 +0x2b:  mov    0x8(%ebp),%eax
0814be04 +0x2e:  movl   $0x0,0xae8(%eax)
0814be0e +0x38:  mov    0x8(%ebp),%eax
0814be11 +0x3b:  add    $0x9f4,%eax
0814be16 +0x40:  mov    %eax,(%esp)
0814be19 +0x43:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
0814be1e +0x48:  movl   $0xea60,(%esp)
0814be25 +0x4f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814be2a +0x54:  mov    0x8(%ebp),%edx
0814be2d +0x57:  mov    %eax,0xa30(%edx)
0814be33 +0x5d:  movl   $0xea60,(%esp)
0814be3a +0x64:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814be3f +0x69:  mov    0x8(%ebp),%edx
0814be42 +0x6c:  mov    %eax,0xa34(%edx)
0814be48 +0x72:  mov    0x8(%ebp),%eax
0814be4b +0x75:  add    $0x9f4,%eax
0814be50 +0x7a:  mov    %eax,(%esp)
0814be53 +0x7d:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0814be58 +0x82:  jmp    0814be8f <+0xb9>
0814be5a +0x84:  mov    %edx,%ebx
0814be5c +0x86:  mov    %eax,%esi
0814be5e +0x88:  mov    0x8(%ebp),%eax
0814be61 +0x8b:  add    $0x9f4,%eax
0814be66 +0x90:  mov    %eax,(%esp)
0814be69 +0x93:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0814be6e +0x98:  mov    %esi,%eax
0814be70 +0x9a:  mov    %ebx,%edx
0814be72 +0x9c:  jmp    0814be74 <+0x9e>
0814be74 +0x9e:  mov    %edx,%ebx
0814be76 +0xa0:  mov    %eax,%esi
0814be78 +0xa2:  mov    0x8(%ebp),%eax
0814be7b +0xa5:  mov    %eax,(%esp)
0814be7e +0xa8:  call   08151a3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x136f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x136f
0814be83 +0xad:  mov    %esi,%eax
0814be85 +0xaf:  mov    %ebx,%edx
0814be87 +0xb1:  mov    %eax,(%esp)
0814be8a +0xb4:  call   08ae3750 <_Unwind_Resume>
0814be8f +0xb9:  mov    0x8(%ebp),%eax
0814be92 +0xbc:  mov    %eax,(%esp)
0814be95 +0xbf:  call   08151a3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x136f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x136f
0814be9a +0xc4:  add    $0x10,%esp
0814be9d +0xc7:  pop    %ebx
0814be9e +0xc8:  pop    %esi
0814be9f +0xc9:  pop    %ebp
0814bea0 +0xca:  ret
0814bea1 +0xcb:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::~CBossStage @ 0x814bdd6

/* WongWork::CBossStage::~CBossStage() */

void __thiscall WongWork::CBossStage::~CBossStage(CBossStage *this)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_generateRewardItem_08b75f08;
  *(undefined4 *)(this + 0xae0) = 1;
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 0xae8) = 0;
                    /* try { // try from 0814be19 to 0814be3e has its CatchHandler @ 0814be5a */
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa30) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa34) = uVar1;
                    /* try { // try from 0814be53 to 0814be57 has its CatchHandler @ 0814be74 */
  MapInfo::~MapInfo((MapInfo *)(this + 0x9f4));
  CBossPlay::~CBossPlay((CBossPlay *)this);
  return;
}
```
