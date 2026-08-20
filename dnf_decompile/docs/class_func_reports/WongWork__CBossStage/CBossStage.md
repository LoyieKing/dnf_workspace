# CBossStage

`_ZN8WongWork10CBossStageC1Ev`

`WongWork::CBossStage::CBossStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814bd0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814bd0c  _ZN8WongWork10CBossStageC1Ev
#           WongWork::CBossStage::CBossStage()
# range [0x0814bd0c, 0x0814bdd5]
0814bd0c +0x00:  push   %ebp
0814bd0d +0x01:  mov    %esp,%ebp
0814bd0f +0x03:  push   %esi
0814bd10 +0x04:  push   %ebx
0814bd11 +0x05:  sub    $0x10,%esp
0814bd14 +0x08:  mov    0x8(%ebp),%eax
0814bd17 +0x0b:  mov    %eax,(%esp)
0814bd1a +0x0e:  call   081519ec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1321>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1321
0814bd1f +0x13:  mov    0x8(%ebp),%eax
0814bd22 +0x16:  movl   $&_ZTVN8WongWork10CBossStageE+0x8,(%eax)
0814bd28 +0x1c:  mov    0x8(%ebp),%eax
0814bd2b +0x1f:  add    $0x9f4,%eax
0814bd30 +0x24:  mov    %eax,(%esp)
0814bd33 +0x27:  call   08151394 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xcc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xcc9
0814bd38 +0x2c:  mov    0x8(%ebp),%eax
0814bd3b +0x2f:  movl   $0x1,0xae0(%eax)
0814bd45 +0x39:  mov    0x8(%ebp),%eax
0814bd48 +0x3c:  movl   $0x0,0x9f0(%eax)
0814bd52 +0x46:  mov    0x8(%ebp),%eax
0814bd55 +0x49:  movl   $0x0,0xae8(%eax)
0814bd5f +0x53:  mov    0x8(%ebp),%eax
0814bd62 +0x56:  add    $0x9f4,%eax
0814bd67 +0x5b:  mov    %eax,(%esp)
0814bd6a +0x5e:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
0814bd6f +0x63:  movl   $0xea60,(%esp)
0814bd76 +0x6a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814bd7b +0x6f:  mov    0x8(%ebp),%edx
0814bd7e +0x72:  mov    %eax,0xa30(%edx)
0814bd84 +0x78:  movl   $0xea60,(%esp)
0814bd8b +0x7f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814bd90 +0x84:  mov    0x8(%ebp),%edx
0814bd93 +0x87:  mov    %eax,0xa34(%edx)
0814bd99 +0x8d:  add    $0x10,%esp
0814bd9c +0x90:  pop    %ebx
0814bd9d +0x91:  pop    %esi
0814bd9e +0x92:  pop    %ebp
0814bd9f +0x93:  ret
0814bda0 +0x94:  mov    %edx,%ebx
0814bda2 +0x96:  mov    %eax,%esi
0814bda4 +0x98:  mov    0x8(%ebp),%eax
0814bda7 +0x9b:  add    $0x9f4,%eax
0814bdac +0xa0:  mov    %eax,(%esp)
0814bdaf +0xa3:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0814bdb4 +0xa8:  mov    %esi,%eax
0814bdb6 +0xaa:  mov    %ebx,%edx
0814bdb8 +0xac:  jmp    0814bdba <+0xae>
0814bdba +0xae:  mov    %edx,%ebx
0814bdbc +0xb0:  mov    %eax,%esi
0814bdbe +0xb2:  mov    0x8(%ebp),%eax
0814bdc1 +0xb5:  mov    %eax,(%esp)
0814bdc4 +0xb8:  call   08151a3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x136f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x136f
0814bdc9 +0xbd:  mov    %esi,%eax
0814bdcb +0xbf:  mov    %ebx,%edx
0814bdcd +0xc1:  mov    %eax,(%esp)
0814bdd0 +0xc4:  call   08ae3750 <_Unwind_Resume>
0814bdd5 +0xc9:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::CBossStage @ 0x814bd0c

/* WongWork::CBossStage::CBossStage() */

void __thiscall WongWork::CBossStage::CBossStage(CBossStage *this)

{
  undefined4 uVar1;
  
  CBossPlay::CBossPlay((CBossPlay *)this);
  *(undefined ***)this = &PTR_generateRewardItem_08b75f08;
                    /* try { // try from 0814bd33 to 0814bd37 has its CatchHandler @ 0814bdba */
  MapInfo::MapInfo((MapInfo *)(this + 0x9f4));
  *(undefined4 *)(this + 0xae0) = 1;
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 0xae8) = 0;
                    /* try { // try from 0814bd6a to 0814bd8f has its CatchHandler @ 0814bda0 */
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa30) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa34) = uVar1;
  return;
}
```
