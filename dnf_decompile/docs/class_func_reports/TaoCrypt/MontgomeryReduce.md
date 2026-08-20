# MontgomeryReduce

`_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j`

`TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875e1e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875e1e0  _ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j
#           TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875e1e0, 0x0875e2be]
0875e1e0 +0x00:  push   %ebp
0875e1e1 +0x01:  mov    %esp,%ebp
0875e1e3 +0x03:  push   %edi
0875e1e4 +0x04:  push   %esi
0875e1e5 +0x05:  push   %ebx
0875e1e6 +0x06:  sub    $0x3c,%esp
0875e1e9 +0x09:  mov    0x18(%ebp),%eax
0875e1ec +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875e1f1 +0x11:  add    $0xc0e9a7,%ebx
0875e1f7 +0x17:  mov    0xc(%ebp),%esi
0875e1fa +0x1a:  mov    0x1c(%ebp),%edi
0875e1fd +0x1d:  mov    0x8(%ebp),%edx
0875e200 +0x20:  mov    %eax,0xc(%esp)
0875e204 +0x24:  mov    0x10(%ebp),%eax
0875e207 +0x27:  mov    %esi,0x4(%esp)
0875e20b +0x2b:  mov    %edi,0x10(%esp)
0875e20f +0x2f:  mov    %edx,(%esp)
0875e212 +0x32:  mov    %eax,0x8(%esp)
0875e216 +0x36:  mov    %edx,-0x20(%ebp)
0875e219 +0x39:  call   0875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875e21e +0x3e:  lea    0x0(,%edi,4),%eax
0875e225 +0x45:  mov    -0x20(%ebp),%edx
0875e228 +0x48:  lea    (%esi,%eax,1),%ecx
0875e22b +0x4b:  mov    %ecx,-0x1c(%ebp)
0875e22e +0x4e:  mov    0x14(%ebp),%ecx
0875e231 +0x51:  mov    %esi,(%esp)
0875e234 +0x54:  mov    %edx,0xc(%esp)
0875e238 +0x58:  mov    %eax,-0x24(%ebp)
0875e23b +0x5b:  mov    %ecx,0x10(%esp)
0875e23f +0x5f:  mov    0x10(%ebp),%ecx
0875e242 +0x62:  mov    %edi,0x14(%esp)
0875e246 +0x66:  mov    %ecx,0x8(%esp)
0875e24a +0x6a:  mov    -0x1c(%ebp),%ecx
0875e24d +0x6d:  mov    %ecx,0x4(%esp)
0875e251 +0x71:  call   0875d980 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j>  ; TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875e256 +0x76:  mov    -0x24(%ebp),%eax
0875e259 +0x79:  add    0x10(%ebp),%eax
0875e25c +0x7c:  mov    %esi,0x8(%esp)
0875e260 +0x80:  mov    %esi,(%esp)
0875e263 +0x83:  mov    %edi,0xc(%esp)
0875e267 +0x87:  mov    %eax,0x4(%esp)
0875e26b +0x8b:  call   *0x124c90(%ebx)
0875e271 +0x91:  mov    %esi,0x4(%esp)
0875e275 +0x95:  mov    %edi,0xc(%esp)
0875e279 +0x99:  mov    %eax,%ecx
0875e27b +0x9b:  mov    0x14(%ebp),%eax
0875e27e +0x9e:  mov    %ecx,-0x24(%ebp)
0875e281 +0xa1:  mov    %eax,0x8(%esp)
0875e285 +0xa5:  mov    -0x1c(%ebp),%eax
0875e288 +0xa8:  mov    %eax,(%esp)
0875e28b +0xab:  call   *0x124c8c(%ebx)
0875e291 +0xb1:  mov    -0x24(%ebp),%ecx
0875e294 +0xb4:  mov    -0x20(%ebp),%edx
0875e297 +0xb7:  test   %ecx,%ecx
0875e299 +0xb9:  cmovne -0x1c(%ebp),%esi
0875e29d +0xbd:  test   %edi,%edi
0875e29f +0xbf:  je     0875e2b5 <+0xd5>
0875e2a1 +0xc1:  xor    %eax,%eax
0875e2a3 +0xc3:  nop
0875e2a4 +0xc4:  lea    0x0(%esi,%eiz,1),%esi
0875e2a8 +0xc8:  mov    (%esi,%eax,4),%ecx
0875e2ab +0xcb:  mov    %ecx,(%edx,%eax,4)
0875e2ae +0xce:  add    $0x1,%eax
0875e2b1 +0xd1:  cmp    %eax,%edi
0875e2b3 +0xd3:  ja     0875e2a8 <+0xc8>
0875e2b5 +0xd5:  add    $0x3c,%esp
0875e2b8 +0xd8:  pop    %ebx
0875e2b9 +0xd9:  pop    %esi
0875e2ba +0xda:  pop    %edi
0875e2bb +0xdb:  pop    %ebp
0875e2bc +0xdc:  ret
0875e2bd +0xdd:  nop
0875e2be +0xde:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::MontgomeryReduce @ 0x875e1e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int) */

void TaoCrypt::MontgomeryReduce
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  RecursiveMultiplyBottom(param_1,param_2,param_3,param_5,param_6);
  puVar1 = param_2 + param_6;
  RecursiveMultiplyTop(param_2,puVar1,param_3,param_1,param_4,param_6);
  iVar2 = (*s_pSub)(param_2,param_3 + param_6,param_2,param_6);
  (*s_pAdd)(puVar1,param_2,param_4,param_6);
  if (iVar2 != 0) {
    param_2 = puVar1;
  }
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      param_1[uVar3] = param_2[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_6);
  }
  return;
}
```
