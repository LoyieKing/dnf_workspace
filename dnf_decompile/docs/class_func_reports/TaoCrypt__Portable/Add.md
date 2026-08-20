# Add

`_ZN8TaoCrypt8Portable3AddEPjPKjS3_j`

`TaoCrypt::Portable::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759400  _ZN8TaoCrypt8Portable3AddEPjPKjS3_j
#           TaoCrypt::Portable::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x08759400, 0x0875948f]
08759400 +0x00:  push   %ebp
08759401 +0x01:  xor    %eax,%eax
08759403 +0x03:  mov    %esp,%ebp
08759405 +0x05:  push   %edi
08759406 +0x06:  push   %esi
08759407 +0x07:  xor    %esi,%esi
08759409 +0x09:  sub    $0x20,%esp
0875940c +0x0c:  mov    0x14(%ebp),%edx
0875940f +0x0f:  movl   $0x0,-0x20(%ebp)
08759416 +0x16:  test   %edx,%edx
08759418 +0x18:  jne    08759423 <+0x23>
0875941a +0x1a:  jmp    08759487 <+0x87>
0875941c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
08759420 +0x20:  mov    %ecx,-0x20(%ebp)
08759423 +0x23:  mov    0x10(%ebp),%esi
08759426 +0x26:  xor    %ecx,%ecx
08759428 +0x28:  mov    0xc(%ebp),%edi
0875942b +0x2b:  mov    (%esi,%eax,4),%edx
0875942e +0x2e:  mov    (%edi,%eax,4),%esi
08759431 +0x31:  xor    %edi,%edi
08759433 +0x33:  add    %esi,%edx
08759435 +0x35:  mov    -0x20(%ebp),%esi
08759438 +0x38:  adc    %edi,%ecx
0875943a +0x3a:  xor    %edi,%edi
0875943c +0x3c:  add    %esi,%edx
0875943e +0x3e:  mov    0x8(%ebp),%esi
08759441 +0x41:  adc    %edi,%ecx
08759443 +0x43:  mov    %edx,%edi
08759445 +0x45:  mov    %ecx,-0xc(%ebp)
08759448 +0x48:  xor    %ecx,%ecx
0875944a +0x4a:  mov    %edx,-0x10(%ebp)
0875944d +0x4d:  mov    -0xc(%ebp),%edx
08759450 +0x50:  mov    %edi,(%esi,%eax,4)
08759453 +0x53:  mov    0x10(%ebp),%edi
08759456 +0x56:  mov    %edx,-0x28(%ebp)
08759459 +0x59:  mov    0x4(%edi,%eax,4),%edx
0875945d +0x5d:  mov    0xc(%ebp),%edi
08759460 +0x60:  mov    0x4(%edi,%eax,4),%esi
08759464 +0x64:  xor    %edi,%edi
08759466 +0x66:  add    %esi,%edx
08759468 +0x68:  mov    -0x28(%ebp),%esi
0875946b +0x6b:  adc    %edi,%ecx
0875946d +0x6d:  xor    %edi,%edi
0875946f +0x6f:  add    %esi,%edx
08759471 +0x71:  mov    0x8(%ebp),%esi
08759474 +0x74:  adc    %edi,%ecx
08759476 +0x76:  mov    %ecx,-0x28(%ebp)
08759479 +0x79:  mov    %edx,0x4(%esi,%eax,4)
0875947d +0x7d:  add    $0x2,%eax
08759480 +0x80:  cmp    %eax,0x14(%ebp)
08759483 +0x83:  ja     08759420 <+0x20>
08759485 +0x85:  mov    %ecx,%esi
08759487 +0x87:  add    $0x20,%esp
0875948a +0x8a:  mov    %esi,%eax
0875948c +0x8c:  pop    %esi
0875948d +0x8d:  pop    %edi
0875948e +0x8e:  pop    %ebp
0875948f +0x8f:  ret
```

## 反编译 C

```c
// TaoCrypt::Portable::Add @ 0x8759400

/* TaoCrypt::Portable::Add(unsigned int*, unsigned int const*, unsigned int const*, unsigned int) */

uint TaoCrypt::Portable::Add(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  
  uVar1 = 0;
  uVar4 = 0;
  local_24 = 0;
  if (param_4 != 0) {
    do {
      uVar4 = param_3[uVar1] + param_2[uVar1];
      uVar2 = (uint)CARRY4(param_3[uVar1],param_2[uVar1]) + (uint)CARRY4(uVar4,local_24);
      param_1[uVar1] = uVar4 + local_24;
      uVar3 = param_3[uVar1 + 1] + param_2[uVar1 + 1];
      uVar4 = (uint)CARRY4(param_3[uVar1 + 1],param_2[uVar1 + 1]) + (uint)CARRY4(uVar3,uVar2);
      param_1[uVar1 + 1] = uVar3 + uVar2;
      uVar1 = uVar1 + 2;
      local_24 = uVar4;
    } while (uVar1 < param_4);
  }
  return uVar4;
}
```
