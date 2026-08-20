# operator=

`_ZN8TaoCrypt9RIPEMD160aSERKS0_`

`TaoCrypt::RIPEMD160::operator=(TaoCrypt::RIPEMD160 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087ab620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087ab620  _ZN8TaoCrypt9RIPEMD160aSERKS0_
#           TaoCrypt::RIPEMD160::operator=(TaoCrypt::RIPEMD160 const&)
# range [0x087ab620, 0x087ab6ef]
087ab620 +0x00:  push   %ebp
087ab621 +0x01:  mov    %esp,%ebp
087ab623 +0x03:  sub    $0x98,%esp
087ab629 +0x09:  mov    %ebx,-0xc(%ebp)
087ab62c +0x0c:  mov    0xc(%ebp),%eax
087ab62f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087ab634 +0x14:  add    $0xbc1564,%ebx
087ab63a +0x1a:  mov    %esi,-0x8(%ebp)
087ab63d +0x1d:  mov    0x8(%ebp),%esi
087ab640 +0x20:  mov    %edi,-0x4(%ebp)
087ab643 +0x23:  lea    -0x88(%ebp),%edi
087ab649 +0x29:  mov    %eax,0x4(%esp)
087ab64d +0x2d:  mov    %edi,(%esp)
087ab650 +0x30:  call   087ab530 <_ZN8TaoCrypt9RIPEMD160C1ERKS0_>  ; TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&)
087ab655 +0x35:  mov    %edi,0x4(%esp)
087ab659 +0x39:  mov    %esi,(%esp)
087ab65c +0x3c:  call   087ab320 <_ZN8TaoCrypt9RIPEMD1604SwapERS0_>  ; TaoCrypt::RIPEMD160::Swap(TaoCrypt::RIPEMD160&)
087ab661 +0x41:  mov    %esi,%eax
087ab663 +0x43:  mov    -0xc(%ebp),%ebx
087ab666 +0x46:  mov    -0x8(%ebp),%esi
087ab669 +0x49:  mov    -0x4(%ebp),%edi
087ab66c +0x4c:  mov    %ebp,%esp
087ab66e +0x4e:  pop    %ebp
087ab66f +0x4f:  ret
087ab670 +0x50:  push   %ebp
087ab671 +0x51:  xor    %eax,%eax
087ab673 +0x53:  mov    %esp,%ebp
087ab675 +0x55:  pop    %ebp
087ab676 +0x56:  ret
087ab677 +0x57:  nop
087ab678 +0x58:  nop
087ab679 +0x59:  nop
087ab67a +0x5a:  nop
087ab67b +0x5b:  nop
087ab67c +0x5c:  nop
087ab67d +0x5d:  nop
087ab67e +0x5e:  nop
087ab67f +0x5f:  nop
087ab680 +0x60:  push   %ebp
087ab681 +0x61:  mov    $0x40,%eax
087ab686 +0x66:  mov    %esp,%ebp
087ab688 +0x68:  pop    %ebp
087ab689 +0x69:  ret
087ab68a +0x6a:  nop
087ab68b +0x6b:  nop
087ab68c +0x6c:  nop
087ab68d +0x6d:  nop
087ab68e +0x6e:  nop
087ab68f +0x6f:  nop
087ab690 +0x70:  push   %ebp
087ab691 +0x71:  mov    $0x14,%eax
087ab696 +0x76:  mov    %esp,%ebp
087ab698 +0x78:  pop    %ebp
087ab699 +0x79:  ret
087ab69a +0x7a:  nop
087ab69b +0x7b:  nop
087ab69c +0x7c:  nop
087ab69d +0x7d:  nop
087ab69e +0x7e:  nop
087ab69f +0x7f:  nop
087ab6a0 +0x80:  push   %ebp
087ab6a1 +0x81:  mov    $0x38,%eax
087ab6a6 +0x86:  mov    %esp,%ebp
087ab6a8 +0x88:  pop    %ebp
087ab6a9 +0x89:  ret
087ab6aa +0x8a:  nop
087ab6ab +0x8b:  nop
087ab6ac +0x8c:  nop
087ab6ad +0x8d:  nop
087ab6ae +0x8e:  nop
087ab6af +0x8f:  nop
087ab6b0 +0x90:  call   087245c4 <__i686.get_pc_thunk.cx>
087ab6b5 +0x95:  add    $0xbc14e3,%ecx
087ab6bb +0x9b:  push   %ebp
087ab6bc +0x9c:  mov    %esp,%ebp
087ab6be +0x9e:  mov    -0x3c(%ecx),%eax
087ab6c4 +0xa4:  lea    0x8(%eax),%edx
087ab6c7 +0xa7:  mov    0x8(%ebp),%eax
087ab6ca +0xaa:  mov    %edx,(%eax)
087ab6cc +0xac:  pop    %ebp
087ab6cd +0xad:  ret
087ab6ce +0xae:  nop
087ab6cf +0xaf:  nop
087ab6d0 +0xb0:  call   087245c4 <__i686.get_pc_thunk.cx>
087ab6d5 +0xb5:  add    $0xbc14c3,%ecx
087ab6db +0xbb:  push   %ebp
087ab6dc +0xbc:  mov    %esp,%ebp
087ab6de +0xbe:  mov    -0x3c(%ecx),%eax
087ab6e4 +0xc4:  lea    0x8(%eax),%edx
087ab6e7 +0xc7:  mov    0x8(%ebp),%eax
087ab6ea +0xca:  mov    %edx,(%eax)
087ab6ec +0xcc:  pop    %ebp
087ab6ed +0xcd:  ret
087ab6ee +0xce:  nop
087ab6ef +0xcf:  nop
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::operator= @ 0x87ab620

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RIPEMD160::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::RIPEMD160 const&) */

RIPEMD160 * __thiscall TaoCrypt::RIPEMD160::operator=(RIPEMD160 *this,RIPEMD160 *param_1)

{
  RIPEMD160 local_8c [124];
  
  RIPEMD160(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
