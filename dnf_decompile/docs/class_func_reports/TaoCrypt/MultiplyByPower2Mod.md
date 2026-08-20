# MultiplyByPower2Mod

`_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j`

`TaoCrypt::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875cf90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875cf90  _ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j
#           TaoCrypt::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
# range [0x0875cf90, 0x0875d07e]
0875cf90 +0x00:  push   %ebp
0875cf91 +0x01:  mov    %esp,%ebp
0875cf93 +0x03:  push   %edi
0875cf94 +0x04:  push   %esi
0875cf95 +0x05:  push   %ebx
0875cf96 +0x06:  sub    $0x2c,%esp
0875cf99 +0x09:  mov    0x18(%ebp),%edi
0875cf9c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875cfa1 +0x11:  add    $0xc0fbf7,%ebx
0875cfa7 +0x17:  mov    0x8(%ebp),%esi
0875cfaa +0x1a:  mov    0xc(%ebp),%ecx
0875cfad +0x1d:  test   %edi,%edi
0875cfaf +0x1f:  je     0875cfc5 <+0x35>
0875cfb1 +0x21:  mov    0x18(%ebp),%edi
0875cfb4 +0x24:  xor    %eax,%eax
0875cfb6 +0x26:  xchg   %ax,%ax
0875cfb8 +0x28:  mov    (%ecx,%eax,4),%edx
0875cfbb +0x2b:  mov    %edx,(%esi,%eax,4)
0875cfbe +0x2e:  add    $0x1,%eax
0875cfc1 +0x31:  cmp    %eax,%edi
0875cfc3 +0x33:  ja     0875cfb8 <+0x28>
0875cfc5 +0x35:  mov    0x18(%ebp),%edx
0875cfc8 +0x38:  mov    0x10(%ebp),%ecx
0875cfcb +0x3b:  lea    -0x4(,%edx,4),%eax
0875cfd2 +0x42:  lea    (%esi,%eax,1),%edx
0875cfd5 +0x45:  add    0x14(%ebp),%eax
0875cfd8 +0x48:  test   %ecx,%ecx
0875cfda +0x4a:  mov    %edx,-0x20(%ebp)
0875cfdd +0x4d:  mov    %eax,-0x24(%ebp)
0875cfe0 +0x50:  je     0875d03b <+0xab>
0875cfe2 +0x52:  lea    0x0(%esi),%esi
0875cfe8 +0x58:  mov    0x18(%ebp),%edx
0875cfeb +0x5b:  xor    %edi,%edi
0875cfed +0x5d:  xor    %eax,%eax
0875cfef +0x5f:  test   %edx,%edx
0875cff1 +0x61:  je     0875d048 <+0xb8>
0875cff3 +0x63:  nop
0875cff4 +0x64:  lea    0x0(%esi,%eiz,1),%esi
0875cff8 +0x68:  mov    (%esi,%eax,4),%ecx
0875cffb +0x6b:  lea    (%ecx,%ecx,1),%edx
0875cffe +0x6e:  or     %edi,%edx
0875d000 +0x70:  mov    %ecx,%edi
0875d002 +0x72:  mov    %edx,(%esi,%eax,4)
0875d005 +0x75:  shr    $0x1f,%edi
0875d008 +0x78:  add    $0x1,%eax
0875d00b +0x7b:  cmp    %eax,0x18(%ebp)
0875d00e +0x7e:  ja     0875cff8 <+0x68>
0875d010 +0x80:  test   %edi,%edi
0875d012 +0x82:  je     0875d048 <+0xb8>
0875d014 +0x84:  mov    0x18(%ebp),%eax
0875d017 +0x87:  mov    0x14(%ebp),%edx
0875d01a +0x8a:  mov    %esi,0x4(%esp)
0875d01e +0x8e:  mov    %esi,(%esp)
0875d021 +0x91:  mov    %eax,0xc(%esp)
0875d025 +0x95:  mov    %edx,0x8(%esp)
0875d029 +0x99:  call   *0x124c90(%ebx)
0875d02f +0x9f:  nop
0875d030 +0xa0:  subl   $0x1,0x10(%ebp)
0875d034 +0xa4:  mov    0x10(%ebp),%ecx
0875d037 +0xa7:  test   %ecx,%ecx
0875d039 +0xa9:  jne    0875cfe8 <+0x58>
0875d03b +0xab:  add    $0x2c,%esp
0875d03e +0xae:  pop    %ebx
0875d03f +0xaf:  pop    %esi
0875d040 +0xb0:  pop    %edi
0875d041 +0xb1:  pop    %ebp
0875d042 +0xb2:  ret
0875d043 +0xb3:  nop
0875d044 +0xb4:  lea    0x0(%esi,%eiz,1),%esi
0875d048 +0xb8:  mov    -0x20(%ebp),%ecx
0875d04b +0xbb:  mov    -0x24(%ebp),%edx
0875d04e +0xbe:  mov    0x18(%ebp),%eax
0875d051 +0xc1:  mov    %esi,-0x1c(%ebp)
0875d054 +0xc4:  lea    0x0(%esi,%eiz,1),%esi
0875d058 +0xc8:  test   %eax,%eax
0875d05a +0xca:  je     0875d078 <+0xe8>
0875d05c +0xcc:  mov    (%ecx),%edi
0875d05e +0xce:  sub    $0x1,%eax
0875d061 +0xd1:  mov    (%edx),%esi
0875d063 +0xd3:  cmp    %esi,%edi
0875d065 +0xd5:  ja     0875d078 <+0xe8>
0875d067 +0xd7:  sub    $0x4,%ecx
0875d06a +0xda:  sub    $0x4,%edx
0875d06d +0xdd:  cmp    %esi,%edi
0875d06f +0xdf:  jae    0875d058 <+0xc8>
0875d071 +0xe1:  mov    -0x1c(%ebp),%esi
0875d074 +0xe4:  jmp    0875d030 <+0xa0>
0875d076 +0xe6:  xchg   %ax,%ax
0875d078 +0xe8:  mov    -0x1c(%ebp),%esi
0875d07b +0xeb:  jmp    0875d014 <+0x84>
0875d07d +0xed:  nop
0875d07e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::MultiplyByPower2Mod @ 0x875cf90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int
   const*, unsigned int) */

void TaoCrypt::MultiplyByPower2Mod
               (uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_5 != 0) {
    uVar2 = 0;
    do {
      param_1[uVar2] = param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_5);
  }
  do {
    if (param_3 == 0) {
      return;
    }
    uVar6 = 0;
    uVar3 = 0;
    uVar2 = param_5;
    puVar4 = param_1 + (param_5 - 1);
    puVar5 = param_4 + (param_5 - 1);
    if (param_5 == 0) {
LAB_0875d058:
      do {
        if (uVar2 == 0) goto LAB_0875d014;
        uVar3 = *puVar4;
        uVar6 = *puVar5;
        if (uVar6 < uVar3) goto LAB_0875d014;
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      } while (uVar6 <= uVar3);
    }
    else {
      do {
        uVar1 = param_1[uVar3];
        param_1[uVar3] = uVar1 * 2 | uVar6;
        uVar6 = -((int)uVar1 >> 0x1f);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_5);
      if (uVar6 == 0) goto LAB_0875d058;
LAB_0875d014:
      (*s_pSub)(param_1,param_1,param_4,param_5);
    }
    param_3 = param_3 - 1;
  } while( true );
}
```
