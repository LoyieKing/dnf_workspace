# CGenerateRandomNumber

`_ZN8WongWork21CGenerateRandomNumberC1Ei`

`WongWork::CGenerateRandomNumber::CGenerateRandomNumber(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGenerateRandomNumber` | `0x085334ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085334ea  _ZN8WongWork21CGenerateRandomNumberC1Ei
#           WongWork::CGenerateRandomNumber::CGenerateRandomNumber(int)
# range [0x085334ea, 0x085335cf]
085334ea +0x00:  push   %ebp
085334eb +0x01:  mov    %esp,%ebp
085334ed +0x03:  push   %edi
085334ee +0x04:  push   %esi
085334ef +0x05:  push   %ebx
085334f0 +0x06:  sub    $0x2c,%esp
085334f3 +0x09:  mov    0x8(%ebp),%eax
085334f6 +0x0c:  mov    0xc(%ebp),%edx
085334f9 +0x0f:  mov    %edx,0x4(%eax)
085334fc +0x12:  cmpl   $0x0,0xc(%ebp)
08533500 +0x16:  je     085335c8 <+0xde>
08533506 +0x1c:  mov    0x8(%ebp),%eax
08533509 +0x1f:  mov    0x4(%eax),%eax
0853350c +0x22:  mov    %eax,%edi
0853350e +0x24:  imul   $0x9c8,%edi,%eax
08533514 +0x2a:  mov    %eax,(%esp)
08533517 +0x2d:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0853351c +0x32:  mov    %eax,%ebx
0853351e +0x34:  mov    %ebx,%eax
08533520 +0x36:  mov    %eax,%esi
08533522 +0x38:  lea    -0x1(%edi),%eax
08533525 +0x3b:  mov    %eax,%edi
08533527 +0x3d:  jmp    0853353a <+0x50>
08533529 +0x3f:  mov    %esi,(%esp)
0853352c +0x42:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
08533531 +0x47:  add    $0x9c8,%esi
08533537 +0x4d:  sub    $0x1,%edi
0853353a +0x50:  cmp    $0xffffffff,%edi
0853353d +0x53:  setne  %al
08533540 +0x56:  test   %al,%al
08533542 +0x58:  jne    08533529 <+0x3f>
08533544 +0x5a:  mov    %ebx,%edx
08533546 +0x5c:  mov    0x8(%ebp),%eax
08533549 +0x5f:  mov    %edx,(%eax)
0853354b +0x61:  movl   $0x0,-0x1c(%ebp)
08533552 +0x68:  movl   $0x0,-0x1c(%ebp)
08533559 +0x6f:  jmp    085335ab <+0xc1>
0853355b +0x71:  mov    %edx,%esi
0853355d +0x73:  mov    %eax,%edi
0853355f +0x75:  mov    %ebx,(%esp)
08533562 +0x78:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08533567 +0x7d:  mov    %edi,%eax
08533569 +0x7f:  mov    %esi,%edx
0853356b +0x81:  mov    %eax,(%esp)
0853356e +0x84:  call   08ae3750 <_Unwind_Resume>
08533573 +0x89:  movl   $0x0,(%esp)
0853357a +0x90:  call   0807d750 <_init+0x48>
0853357f +0x95:  mov    &_ZZN8WongWork21CGenerateRandomNumberC1EiE12seedIncValue,%edx
08533585 +0x9b:  add    %edx,%eax
08533587 +0x9d:  add    -0x1c(%ebp),%eax
0853358a +0xa0:  mov    0x8(%ebp),%edx
0853358d +0xa3:  mov    (%edx),%ecx
0853358f +0xa5:  mov    -0x1c(%ebp),%edx
08533592 +0xa8:  imul   $0x9c8,%edx,%edx
08533598 +0xae:  lea    (%ecx,%edx,1),%edx
0853359b +0xb1:  mov    %eax,0x4(%esp)
0853359f +0xb5:  mov    %edx,(%esp)
085335a2 +0xb8:  call   080cbb1e <_GLOBAL__I__ZN10BingoEventC2Ev+0x96b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x96b
085335a7 +0xbd:  addl   $0x1,-0x1c(%ebp)
085335ab +0xc1:  mov    0x8(%ebp),%eax
085335ae +0xc4:  mov    0x4(%eax),%eax
085335b1 +0xc7:  cmp    -0x1c(%ebp),%eax
085335b4 +0xca:  setg   %al
085335b7 +0xcd:  test   %al,%al
085335b9 +0xcf:  jne    08533573 <+0x89>
085335bb +0xd1:  mov    &_ZZN8WongWork21CGenerateRandomNumberC1EiE12seedIncValue,%eax
085335c0 +0xd6:  add    -0x1c(%ebp),%eax
085335c3 +0xd9:  mov    %eax,&_ZZN8WongWork21CGenerateRandomNumberC1EiE12seedIncValue
085335c8 +0xde:  add    $0x2c,%esp
085335cb +0xe1:  pop    %ebx
085335cc +0xe2:  pop    %esi
085335cd +0xe3:  pop    %edi
085335ce +0xe4:  pop    %ebp
085335cf +0xe5:  ret
```

## 反编译 C

```c
// WongWork::CGenerateRandomNumber::CGenerateRandomNumber @ 0x85334ea

/* WongWork::CGenerateRandomNumber::CGenerateRandomNumber(int) */

void __thiscall
WongWork::CGenerateRandomNumber::CGenerateRandomNumber(CGenerateRandomNumber *this,int param_1)

{
  CMTRand *pCVar1;
  time_t tVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(int *)(this + 4) = param_1;
  if (param_1 != 0) {
    iVar3 = *(int *)(this + 4);
    pCVar1 = operator_new__(iVar3 * 0x9c8);
    this_00 = pCVar1;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
                    /* try { // try from 0853352c to 08533530 has its CatchHandler @ 0853355b */
      CMTRand::CMTRand(this_00);
      this_00 = this_00 + 0x9c8;
    }
    *(CMTRand **)this = pCVar1;
    for (local_20 = 0; local_20 < *(int *)(this + 4); local_20 = local_20 + 1) {
      tVar2 = time((time_t *)0x0);
      CMTRand::seed((CMTRand *)(*(int *)this + local_20 * 0x9c8),
                    tVar2 + CGenerateRandomNumber(int)::seedIncValue + local_20);
    }
    CGenerateRandomNumber(int)::seedIncValue = CGenerateRandomNumber(int)::seedIncValue + local_20;
  }
  return;
}
```
