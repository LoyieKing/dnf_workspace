# DivideByPower2Mod

`_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j`

`TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875ce90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ce90  _ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j
#           TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
# range [0x0875ce90, 0x0875cf8e]
0875ce90 +0x00:  push   %ebp
0875ce91 +0x01:  mov    %esp,%ebp
0875ce93 +0x03:  push   %edi
0875ce94 +0x04:  push   %esi
0875ce95 +0x05:  push   %ebx
0875ce96 +0x06:  sub    $0x2c,%esp
0875ce99 +0x09:  mov    0x18(%ebp),%edi
0875ce9c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875cea1 +0x11:  add    $0xc0fcf7,%ebx
0875cea7 +0x17:  mov    0xc(%ebp),%ecx
0875ceaa +0x1a:  test   %edi,%edi
0875ceac +0x1c:  je     0875cec5 <+0x35>
0875ceae +0x1e:  mov    0x8(%ebp),%esi
0875ceb1 +0x21:  xor    %eax,%eax
0875ceb3 +0x23:  mov    0x18(%ebp),%edi
0875ceb6 +0x26:  xchg   %ax,%ax
0875ceb8 +0x28:  mov    (%ecx,%eax,4),%edx
0875cebb +0x2b:  mov    %edx,(%esi,%eax,4)
0875cebe +0x2e:  add    $0x1,%eax
0875cec1 +0x31:  cmp    %eax,%edi
0875cec3 +0x33:  ja     0875ceb8 <+0x28>
0875cec5 +0x35:  mov    0x18(%ebp),%eax
0875cec8 +0x38:  mov    0x8(%ebp),%edx
0875cecb +0x3b:  sub    $0x1,%eax
0875cece +0x3e:  lea    (%edx,%eax,4),%edx
0875ced1 +0x41:  mov    %eax,-0x1c(%ebp)
0875ced4 +0x44:  mov    0x18(%ebp),%eax
0875ced7 +0x47:  mov    %edx,-0x24(%ebp)
0875ceda +0x4a:  mov    0x8(%ebp),%edx
0875cedd +0x4d:  lea    -0x4(%edx,%eax,4),%eax
0875cee1 +0x51:  mov    0x10(%ebp),%edx
0875cee4 +0x54:  mov    %eax,-0x20(%ebp)
0875cee7 +0x57:  test   %edx,%edx
0875cee9 +0x59:  je     0875cf2a <+0x9a>
0875ceeb +0x5b:  nop
0875ceec +0x5c:  lea    0x0(%esi,%eiz,1),%esi
0875cef0 +0x60:  mov    0x8(%ebp),%edx
0875cef3 +0x63:  testb  $0x1,(%edx)
0875cef6 +0x66:  jne    0875cf38 <+0xa8>
0875cef8 +0x68:  mov    -0x1c(%ebp),%esi
0875cefb +0x6b:  test   %esi,%esi
0875cefd +0x6d:  js     0875cf1f <+0x8f>
0875ceff +0x6f:  mov    -0x20(%ebp),%eax
0875cf02 +0x72:  xor    %edi,%edi
0875cf04 +0x74:  mov    -0x1c(%ebp),%ecx
0875cf07 +0x77:  nop
0875cf08 +0x78:  mov    (%eax),%esi
0875cf0a +0x7a:  mov    %esi,%edx
0875cf0c +0x7c:  shr    %edx
0875cf0e +0x7e:  or     %edi,%edx
0875cf10 +0x80:  mov    %esi,%edi
0875cf12 +0x82:  mov    %edx,(%eax)
0875cf14 +0x84:  shl    $0x1f,%edi
0875cf17 +0x87:  sub    $0x4,%eax
0875cf1a +0x8a:  sub    $0x1,%ecx
0875cf1d +0x8d:  jns    0875cf08 <+0x78>
0875cf1f +0x8f:  subl   $0x1,0x10(%ebp)
0875cf23 +0x93:  mov    0x10(%ebp),%edx
0875cf26 +0x96:  test   %edx,%edx
0875cf28 +0x98:  jne    0875cef0 <+0x60>
0875cf2a +0x9a:  add    $0x2c,%esp
0875cf2d +0x9d:  pop    %ebx
0875cf2e +0x9e:  pop    %esi
0875cf2f +0x9f:  pop    %edi
0875cf30 +0xa0:  pop    %ebp
0875cf31 +0xa1:  ret
0875cf32 +0xa2:  lea    0x0(%esi),%esi
0875cf38 +0xa8:  mov    0x18(%ebp),%eax
0875cf3b +0xab:  mov    0x14(%ebp),%edx
0875cf3e +0xae:  mov    %eax,0xc(%esp)
0875cf42 +0xb2:  mov    0x8(%ebp),%eax
0875cf45 +0xb5:  mov    %edx,0x8(%esp)
0875cf49 +0xb9:  mov    %eax,0x4(%esp)
0875cf4d +0xbd:  mov    %eax,(%esp)
0875cf50 +0xc0:  call   *0x124c8c(%ebx)
0875cf56 +0xc6:  mov    -0x1c(%ebp),%ecx
0875cf59 +0xc9:  test   %ecx,%ecx
0875cf5b +0xcb:  mov    %eax,-0x28(%ebp)
0875cf5e +0xce:  js     0875cf7f <+0xef>
0875cf60 +0xd0:  mov    -0x20(%ebp),%eax
0875cf63 +0xd3:  xor    %edi,%edi
0875cf65 +0xd5:  mov    -0x1c(%ebp),%ecx
0875cf68 +0xd8:  mov    (%eax),%esi
0875cf6a +0xda:  mov    %esi,%edx
0875cf6c +0xdc:  shr    %edx
0875cf6e +0xde:  or     %edi,%edx
0875cf70 +0xe0:  mov    %esi,%edi
0875cf72 +0xe2:  mov    %edx,(%eax)
0875cf74 +0xe4:  shl    $0x1f,%edi
0875cf77 +0xe7:  sub    $0x4,%eax
0875cf7a +0xea:  sub    $0x1,%ecx
0875cf7d +0xed:  jns    0875cf68 <+0xd8>
0875cf7f +0xef:  mov    -0x28(%ebp),%eax
0875cf82 +0xf2:  mov    -0x24(%ebp),%edx
0875cf85 +0xf5:  shl    $0x1f,%eax
0875cf88 +0xf8:  add    %eax,(%edx)
0875cf8a +0xfa:  subl   $0x1,0x10(%ebp)
0875cf8e +0xfe:  jmp    0875cf23 <+0x93>
```

## 反编译 C

```c
// TaoCrypt::DivideByPower2Mod @ 0x875ce90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int
   const*, unsigned int) */

void TaoCrypt::DivideByPower2Mod
               (uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_5 != 0) {
    uVar2 = 0;
    do {
      param_1[uVar2] = param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_5);
  }
  iVar3 = param_5 - 1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if ((*param_1 & 1) == 0) {
      if (-1 < iVar3) {
        uVar2 = 0;
        puVar4 = param_1 + (param_5 - 1);
        iVar5 = iVar3;
        do {
          uVar1 = *puVar4;
          *puVar4 = uVar1 >> 1 | uVar2;
          uVar2 = uVar1 << 0x1f;
          puVar4 = puVar4 + -1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    else {
      iVar5 = (*s_pAdd)(param_1,param_1,param_4,param_5);
      if (-1 < iVar3) {
        uVar2 = 0;
        puVar4 = param_1 + (param_5 - 1);
        iVar6 = iVar3;
        do {
          uVar1 = *puVar4;
          *puVar4 = uVar1 >> 1 | uVar2;
          uVar2 = uVar1 << 0x1f;
          puVar4 = puVar4 + -1;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      param_1[iVar3] = param_1[iVar3] + iVar5 * -0x80000000;
    }
  }
  return;
}
```
