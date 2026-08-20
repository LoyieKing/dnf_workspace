# xorbuf

`_ZN8TaoCrypt6xorbufEPhPKhj`

`TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08767410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767410  _ZN8TaoCrypt6xorbufEPhPKhj
#           TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
# range [0x08767410, 0x087674fe]
08767410 +0x00:  push   %ebp
08767411 +0x01:  mov    %esp,%ebp
08767413 +0x03:  push   %edi
08767414 +0x04:  push   %esi
08767415 +0x05:  sub    $0x4,%esp
08767418 +0x08:  mov    0xc(%ebp),%edi
0876741b +0x0b:  mov    0x10(%ebp),%eax
0876741e +0x0e:  mov    0x8(%ebp),%edx
08767421 +0x11:  or     %edi,%eax
08767423 +0x13:  or     %edx,%eax
08767425 +0x15:  test   $0x3,%al
08767427 +0x17:  je     087674b0 <+0xa0>
0876742d +0x1d:  mov    0x10(%ebp),%eax
08767430 +0x20:  test   %eax,%eax
08767432 +0x22:  je     087674a2 <+0x92>
08767434 +0x24:  cmpl   $0x6,0x10(%ebp)
08767438 +0x28:  jbe    087674e8 <+0xd8>
0876743e +0x2e:  mov    %edx,%eax
08767440 +0x30:  or     %edi,%eax
08767442 +0x32:  test   $0x3,%al
08767444 +0x34:  jne    087674e8 <+0xd8>
0876744a +0x3a:  lea    0x4(%edi),%eax
0876744d +0x3d:  cmp    %eax,%edx
0876744f +0x3f:  jbe    087674d8 <+0xc8>
08767455 +0x45:  mov    0x10(%ebp),%ecx
08767458 +0x48:  shr    $0x2,%ecx
0876745b +0x4b:  lea    0x0(,%ecx,4),%esi
08767462 +0x52:  test   %esi,%esi
08767464 +0x54:  je     08767488 <+0x78>
08767466 +0x56:  mov    %esi,-0xc(%ebp)
08767469 +0x59:  xor    %eax,%eax
0876746b +0x5b:  mov    %ecx,%esi
0876746d +0x5d:  lea    0x0(%esi),%esi
08767470 +0x60:  mov    (%edx,%eax,4),%ecx
08767473 +0x63:  xor    (%edi,%eax,4),%ecx
08767476 +0x66:  mov    %ecx,(%edx,%eax,4)
08767479 +0x69:  add    $0x1,%eax
0876747c +0x6c:  cmp    %esi,%eax
0876747e +0x6e:  jb     08767470 <+0x60>
08767480 +0x70:  mov    -0xc(%ebp),%esi
08767483 +0x73:  cmp    %esi,0x10(%ebp)
08767486 +0x76:  je     087674a2 <+0x92>
08767488 +0x78:  mov    0x10(%ebp),%ecx
0876748b +0x7b:  add    %esi,%edx
0876748d +0x7d:  add    %esi,%edi
0876748f +0x7f:  nop
08767490 +0x80:  movzbl (%edi),%eax
08767493 +0x83:  add    $0x1,%esi
08767496 +0x86:  add    $0x1,%edi
08767499 +0x89:  xor    %al,(%edx)
0876749b +0x8b:  add    $0x1,%edx
0876749e +0x8e:  cmp    %esi,%ecx
087674a0 +0x90:  ja     08767490 <+0x80>
087674a2 +0x92:  add    $0x4,%esp
087674a5 +0x95:  pop    %esi
087674a6 +0x96:  pop    %edi
087674a7 +0x97:  pop    %ebp
087674a8 +0x98:  ret
087674a9 +0x99:  lea    0x0(%esi,%eiz,1),%esi
087674b0 +0xa0:  mov    0x10(%ebp),%esi
087674b3 +0xa3:  shr    $0x2,%esi
087674b6 +0xa6:  test   %esi,%esi
087674b8 +0xa8:  je     087674a2 <+0x92>
087674ba +0xaa:  xor    %eax,%eax
087674bc +0xac:  lea    0x0(%esi,%eiz,1),%esi
087674c0 +0xb0:  mov    (%edi,%eax,4),%ecx
087674c3 +0xb3:  xor    %ecx,(%edx,%eax,4)
087674c6 +0xb6:  add    $0x1,%eax
087674c9 +0xb9:  cmp    %eax,%esi
087674cb +0xbb:  ja     087674c0 <+0xb0>
087674cd +0xbd:  add    $0x4,%esp
087674d0 +0xc0:  pop    %esi
087674d1 +0xc1:  pop    %edi
087674d2 +0xc2:  pop    %ebp
087674d3 +0xc3:  ret
087674d4 +0xc4:  lea    0x0(%esi,%eiz,1),%esi
087674d8 +0xc8:  lea    0x4(%edx),%eax
087674db +0xcb:  cmp    %eax,%edi
087674dd +0xcd:  ja     08767455 <+0x45>
087674e3 +0xd3:  nop
087674e4 +0xd4:  lea    0x0(%esi,%eiz,1),%esi
087674e8 +0xd8:  mov    0x10(%ebp),%esi
087674eb +0xdb:  xor    %eax,%eax
087674ed +0xdd:  lea    0x0(%esi),%esi
087674f0 +0xe0:  movzbl (%edi,%eax,1),%ecx
087674f4 +0xe4:  xor    %cl,(%edx,%eax,1)
087674f7 +0xe7:  add    $0x1,%eax
087674fa +0xea:  cmp    %eax,%esi
087674fc +0xec:  ja     087674f0 <+0xe0>
087674fe +0xee:  jmp    087674a2 <+0x92>
```

## 反编译 C

```c
// TaoCrypt::xorbuf @ 0x8767410

/* TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int) */

void TaoCrypt::xorbuf(uchar *param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (((param_3 | (uint)param_2 | (uint)param_1) & 3) == 0) {
    if (param_3 >> 2 != 0) {
      uVar5 = 0;
      do {
        *(uint *)(param_1 + uVar5 * 4) =
             *(uint *)(param_1 + uVar5 * 4) ^ *(uint *)(param_2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3 >> 2);
      return;
    }
  }
  else if (param_3 != 0) {
    if (((param_3 < 7) || ((((uint)param_1 | (uint)param_2) & 3) != 0)) ||
       ((param_1 <= param_2 + 4 && (param_2 <= param_1 + 4)))) {
      uVar5 = 0;
      do {
        param_1[uVar5] = param_1[uVar5] ^ param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    else {
      uVar3 = param_3 >> 2;
      uVar5 = uVar3 * 4;
      if (uVar3 != 0) {
        uVar2 = 0;
        do {
          *(uint *)(param_1 + uVar2 * 4) =
               *(uint *)(param_1 + uVar2 * 4) ^ *(uint *)(param_2 + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
        if (param_3 == uVar5) {
          return;
        }
      }
      pbVar4 = param_1 + uVar5;
      pbVar6 = param_2 + uVar5;
      do {
        bVar1 = *pbVar6;
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar6 + 1;
        *pbVar4 = *pbVar4 ^ bVar1;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 < param_3);
    }
  }
  return;
}
```
