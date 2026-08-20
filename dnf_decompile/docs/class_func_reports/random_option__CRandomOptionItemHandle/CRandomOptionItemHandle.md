# CRandomOptionItemHandle

`_ZN13random_option23CRandomOptionItemHandleC1Ev`

`random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0d64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0d64  _ZN13random_option23CRandomOptionItemHandleC1Ev
#           random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()
# range [0x085f0d64, 0x085f0e45]
085f0d64 +0x00:  push   %ebp
085f0d65 +0x01:  mov    %esp,%ebp
085f0d67 +0x03:  push   %edi
085f0d68 +0x04:  push   %esi
085f0d69 +0x05:  push   %ebx
085f0d6a +0x06:  sub    $0x2c,%esp
085f0d6d +0x09:  mov    0x8(%ebp),%eax
085f0d70 +0x0c:  movl   $&_ZTVN13random_option23CRandomOptionItemHandleE+0x8,(%eax)
085f0d76 +0x12:  movl   $0x7f28,(%esp)
085f0d7d +0x19:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
085f0d82 +0x1e:  mov    %eax,%ebx
085f0d84 +0x20:  mov    %ebx,%eax
085f0d86 +0x22:  mov    %eax,%esi
085f0d88 +0x24:  mov    $0xc,%edi
085f0d8d +0x29:  jmp    085f0da0 <+0x3c>
085f0d8f +0x2b:  mov    %esi,(%esp)
085f0d92 +0x2e:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
085f0d97 +0x33:  add    $0x9c8,%esi
085f0d9d +0x39:  sub    $0x1,%edi
085f0da0 +0x3c:  cmp    $0xffffffff,%edi
085f0da3 +0x3f:  setne  %al
085f0da6 +0x42:  test   %al,%al
085f0da8 +0x44:  jne    085f0d8f <+0x2b>
085f0daa +0x46:  mov    %ebx,%edx
085f0dac +0x48:  mov    0x8(%ebp),%eax
085f0daf +0x4b:  mov    %edx,0x4(%eax)
085f0db2 +0x4e:  movl   $0x0,(%esp)
085f0db9 +0x55:  call   0807d750 <_init+0x48>
085f0dbe +0x5a:  mov    %eax,-0x20(%ebp)
085f0dc1 +0x5d:  movl   $0x0,-0x1c(%ebp)
085f0dc8 +0x64:  jmp    085f0e07 <+0xa3>
085f0dca +0x66:  mov    %edx,%esi
085f0dcc +0x68:  mov    %eax,%edi
085f0dce +0x6a:  mov    %ebx,(%esp)
085f0dd1 +0x6d:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
085f0dd6 +0x72:  mov    %edi,%eax
085f0dd8 +0x74:  mov    %esi,%edx
085f0dda +0x76:  mov    %eax,(%esp)
085f0ddd +0x79:  call   08ae3750 <_Unwind_Resume>
085f0de2 +0x7e:  mov    -0x20(%ebp),%eax
085f0de5 +0x81:  mov    0x8(%ebp),%edx
085f0de8 +0x84:  mov    0x4(%edx),%ecx
085f0deb +0x87:  mov    -0x1c(%ebp),%edx
085f0dee +0x8a:  imul   $0x9c8,%edx,%edx
085f0df4 +0x90:  lea    (%ecx,%edx,1),%edx
085f0df7 +0x93:  mov    %eax,0x4(%esp)
085f0dfb +0x97:  mov    %edx,(%esp)
085f0dfe +0x9a:  call   080cbb1e <_GLOBAL__I__ZN10BingoEventC2Ev+0x96b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x96b
085f0e03 +0x9f:  addl   $0x1,-0x1c(%ebp)
085f0e07 +0xa3:  cmpl   $0xc,-0x1c(%ebp)
085f0e0b +0xa7:  setle  %al
085f0e0e +0xaa:  test   %al,%al
085f0e10 +0xac:  jne    085f0de2 <+0x7e>
085f0e12 +0xae:  mov    0x8(%ebp),%eax
085f0e15 +0xb1:  movl   $0x0,0x8(%eax)
085f0e1c +0xb8:  mov    0x8(%ebp),%eax
085f0e1f +0xbb:  movb   $0x0,0xc(%eax)
085f0e23 +0xbf:  mov    0x8(%ebp),%eax
085f0e26 +0xc2:  movl   $0x0,0x10(%eax)
085f0e2d +0xc9:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f0e32 +0xce:  lea    0x148(%eax),%edx
085f0e38 +0xd4:  mov    0x8(%ebp),%eax
085f0e3b +0xd7:  mov    %edx,0x14(%eax)
085f0e3e +0xda:  add    $0x2c,%esp
085f0e41 +0xdd:  pop    %ebx
085f0e42 +0xde:  pop    %esi
085f0e43 +0xdf:  pop    %edi
085f0e44 +0xe0:  pop    %ebp
085f0e45 +0xe1:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::CRandomOptionItemHandle @ 0x85f0d64

/* random_option::CRandomOptionItemHandle::CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  CMTRand *pCVar1;
  ulong uVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(undefined ***)this = &PTR__CRandomOptionItemHandle_08cd11a0;
  pCVar1 = operator_new__(0x7f28);
  this_00 = pCVar1;
  for (iVar3 = 0xc; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 085f0d92 to 085f0d96 has its CatchHandler @ 085f0dca */
    CMTRand::CMTRand(this_00);
    this_00 = this_00 + 0x9c8;
  }
  *(CMTRand **)(this + 4) = pCVar1;
  uVar2 = time((time_t *)0x0);
  for (local_20 = 0; local_20 < 0xd; local_20 = local_20 + 1) {
    CMTRand::seed((CMTRand *)(*(int *)(this + 4) + local_20 * 0x9c8),uVar2);
  }
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CRandomOptionItemHandle)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  iVar3 = GetRandomOption();
  *(int *)(this + 0x14) = iVar3 + 0x148;
  return;
}
```
