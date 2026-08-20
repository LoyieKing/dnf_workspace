# Subtract

`_ZN8TaoCrypt8Portable8SubtractEPjPKjS3_j`

`TaoCrypt::Portable::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759490  _ZN8TaoCrypt8Portable8SubtractEPjPKjS3_j
#           TaoCrypt::Portable::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x08759490, 0x0875952a]
08759490 +0x00:  push   %ebp
08759491 +0x01:  xor    %eax,%eax
08759493 +0x03:  mov    %esp,%ebp
08759495 +0x05:  push   %edi
08759496 +0x06:  push   %esi
08759497 +0x07:  xor    %esi,%esi
08759499 +0x09:  sub    $0x20,%esp
0875949c +0x0c:  mov    0x14(%ebp),%ecx
0875949f +0x0f:  movl   $0x0,-0x20(%ebp)
087594a6 +0x16:  test   %ecx,%ecx
087594a8 +0x18:  jne    087594b3 <+0x23>
087594aa +0x1a:  jmp    0875951b <+0x8b>
087594ac +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087594b0 +0x20:  mov    %ecx,-0x20(%ebp)
087594b3 +0x23:  mov    0xc(%ebp),%esi
087594b6 +0x26:  xor    %ecx,%ecx
087594b8 +0x28:  mov    0x10(%ebp),%edi
087594bb +0x2b:  mov    (%esi,%eax,4),%edx
087594be +0x2e:  mov    (%edi,%eax,4),%esi
087594c1 +0x31:  xor    %edi,%edi
087594c3 +0x33:  sub    %esi,%edx
087594c5 +0x35:  mov    -0x20(%ebp),%esi
087594c8 +0x38:  sbb    %edi,%ecx
087594ca +0x3a:  xor    %edi,%edi
087594cc +0x3c:  neg    %esi
087594ce +0x3e:  sub    %esi,%edx
087594d0 +0x40:  mov    0x8(%ebp),%esi
087594d3 +0x43:  sbb    %edi,%ecx
087594d5 +0x45:  mov    %edx,%edi
087594d7 +0x47:  mov    %ecx,-0xc(%ebp)
087594da +0x4a:  xor    %ecx,%ecx
087594dc +0x4c:  mov    %edx,-0x10(%ebp)
087594df +0x4f:  mov    -0xc(%ebp),%edx
087594e2 +0x52:  mov    %edi,(%esi,%eax,4)
087594e5 +0x55:  mov    0xc(%ebp),%edi
087594e8 +0x58:  mov    %edx,-0x28(%ebp)
087594eb +0x5b:  mov    0x4(%edi,%eax,4),%edx
087594ef +0x5f:  mov    0x10(%ebp),%edi
087594f2 +0x62:  mov    0x4(%edi,%eax,4),%esi
087594f6 +0x66:  xor    %edi,%edi
087594f8 +0x68:  sub    %esi,%edx
087594fa +0x6a:  sbb    %edi,%ecx
087594fc +0x6c:  xor    %edi,%edi
087594fe +0x6e:  negl   -0x28(%ebp)
08759501 +0x71:  mov    -0x28(%ebp),%esi
08759504 +0x74:  sub    %esi,%edx
08759506 +0x76:  sbb    %edi,%ecx
08759508 +0x78:  mov    0x8(%ebp),%edi
0875950b +0x7b:  mov    %ecx,%esi
0875950d +0x7d:  mov    %edx,0x4(%edi,%eax,4)
08759511 +0x81:  add    $0x2,%eax
08759514 +0x84:  cmp    %eax,0x14(%ebp)
08759517 +0x87:  ja     087594b0 <+0x20>
08759519 +0x89:  neg    %esi
0875951b +0x8b:  add    $0x20,%esp
0875951e +0x8e:  mov    %esi,%eax
08759520 +0x90:  pop    %esi
08759521 +0x91:  pop    %edi
08759522 +0x92:  pop    %ebp
08759523 +0x93:  ret
08759524 +0x94:  lea    0x0(%esi),%esi
0875952a +0x9a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Portable::Subtract @ 0x8759490

/* TaoCrypt::Portable::Subtract(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

int TaoCrypt::Portable::Subtract(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_24;
  
  uVar1 = 0;
  iVar3 = 0;
  local_24 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = param_2[uVar1] - param_3[uVar1];
      iVar3 = -(uint)(uVar2 < (uint)-local_24) - (uint)(param_2[uVar1] < param_3[uVar1]);
      param_1[uVar1] = uVar2 + local_24;
      uVar2 = param_2[uVar1 + 1] - param_3[uVar1 + 1];
      local_24 = -(uint)(uVar2 < (uint)-iVar3) - (uint)(param_2[uVar1 + 1] < param_3[uVar1 + 1]);
      param_1[uVar1 + 1] = uVar2 + iVar3;
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_4);
    iVar3 = -local_24;
  }
  return iVar3;
}
```
