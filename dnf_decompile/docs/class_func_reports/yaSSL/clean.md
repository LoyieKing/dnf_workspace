# clean

`_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE`

`yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747c30  _ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE
#           yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&)
# range [0x08747c30, 0x08747caa]
08747c30 +0x00:  push   %ebp
08747c31 +0x01:  mov    %esp,%ebp
08747c33 +0x03:  push   %edi
08747c34 +0x04:  push   %esi
08747c35 +0x05:  push   %ebx
08747c36 +0x06:  sub    $0x1c,%esp
08747c39 +0x09:  mov    0xc(%ebp),%esi
08747c3c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747c41 +0x11:  add    $0xc24f57,%ebx
08747c47 +0x17:  mov    0x8(%ebp),%edi
08747c4a +0x1a:  mov    0x10(%ebp),%ecx
08747c4d +0x1d:  test   %esi,%esi
08747c4f +0x1f:  je     08747c8d <+0x5d>
08747c51 +0x21:  xor    %eax,%eax
08747c53 +0x23:  nop
08747c54 +0x24:  lea    0x0(%esi,%eiz,1),%esi
08747c58 +0x28:  lea    (%edi,%eax,1),%edx
08747c5b +0x2b:  add    $0x1,%eax
08747c5e +0x2e:  cmp    %eax,%esi
08747c60 +0x30:  movb   $0x0,(%edx)
08747c63 +0x33:  ja     08747c58 <+0x28>
08747c65 +0x35:  mov    %esi,0x8(%esp)
08747c69 +0x39:  mov    %edi,0x4(%esp)
08747c6d +0x3d:  mov    %ecx,(%esp)
08747c70 +0x40:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
08747c75 +0x45:  xor    %eax,%eax
08747c77 +0x47:  nop
08747c78 +0x48:  lea    (%edi,%eax,1),%edx
08747c7b +0x4b:  add    $0x1,%eax
08747c7e +0x4e:  cmp    %eax,%esi
08747c80 +0x50:  movb   $0x0,(%edx)
08747c83 +0x53:  ja     08747c78 <+0x48>
08747c85 +0x55:  add    $0x1c,%esp
08747c88 +0x58:  pop    %ebx
08747c89 +0x59:  pop    %esi
08747c8a +0x5a:  pop    %edi
08747c8b +0x5b:  pop    %ebp
08747c8c +0x5c:  ret
08747c8d +0x5d:  movl   $0x0,0x8(%esp)
08747c95 +0x65:  mov    %edi,0x4(%esp)
08747c99 +0x69:  mov    %ecx,(%esp)
08747c9c +0x6c:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
08747ca1 +0x71:  jmp    08747c85 <+0x55>
08747ca3 +0x73:  nop
08747ca4 +0x74:  lea    0x0(%esi),%esi
08747caa +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::clean @ 0x8747c30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&) */

void yaSSL::clean(uchar *param_1,uint param_2,RandomPool *param_3)

{
  uchar *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    RandomPool::Fill(param_3,param_1,0);
  }
  else {
    uVar2 = 0;
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      *puVar1 = '\0';
    } while (uVar2 < param_2);
    RandomPool::Fill(param_3,param_1,param_2);
    uVar2 = 0;
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      *puVar1 = '\0';
    } while (uVar2 < param_2);
  }
  return;
}
```
