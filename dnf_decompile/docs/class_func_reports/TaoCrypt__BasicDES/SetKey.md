# SetKey

`_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE`

`TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BasicDES` | `0x087a7a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a7a10  _ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE
#           TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
# range [0x087a7a10, 0x087a7c6c]
087a7a10 +0x000:  push   %ebp
087a7a11 +0x001:  xor    %eax,%eax
087a7a13 +0x003:  mov    %esp,%ebp
087a7a15 +0x005:  push   %edi
087a7a16 +0x006:  push   %esi
087a7a17 +0x007:  push   %ebx
087a7a18 +0x008:  call   08722df8 <__i686.get_pc_thunk.bx>
087a7a1d +0x00d:  add    $0xbc517b,%ebx
087a7a23 +0x013:  sub    $0x94,%esp
087a7a29 +0x019:  mov    0xc(%ebp),%edi
087a7a2c +0x01c:  lea    -0x84(%ebp),%ecx
087a7a32 +0x022:  lea    0x0(%esi),%esi
087a7a38 +0x028:  movzbl -0x65c2b8(%eax,%ebx,1),%edx
087a7a40 +0x030:  sub    $0x1,%edx
087a7a43 +0x033:  mov    %edx,%esi
087a7a45 +0x035:  and    $0x7,%edx
087a7a48 +0x038:  sar    $0x3,%esi
087a7a4b +0x03b:  movzbl (%edi,%esi,1),%esi
087a7a4f +0x03f:  test   %esi,-0x65c278(%ebx,%edx,4)
087a7a56 +0x046:  setne  (%ecx,%eax,1)
087a7a5a +0x04a:  add    $0x1,%eax
087a7a5d +0x04d:  cmp    $0x38,%eax
087a7a60 +0x050:  jne    087a7a38 <+0x28>
087a7a62 +0x052:  movl   $0x0,-0x98(%ebp)
087a7a6c +0x05c:  mov    -0x98(%ebp),%edi
087a7a72 +0x062:  lea    -0x14(%ebp),%eax
087a7a75 +0x065:  mov    %eax,-0x9c(%ebp)
087a7a7b +0x06b:  nop
087a7a7c +0x06c:  lea    0x0(%esi,%eiz,1),%esi
087a7a80 +0x070:  mov    -0x9c(%ebp),%edx
087a7a86 +0x076:  xor    %eax,%eax
087a7a88 +0x078:  movzbl -0x65c258(%ebx,%edi,1),%esi
087a7a90 +0x080:  mov    %ecx,-0xa0(%ebp)
087a7a96 +0x086:  movl   $0x0,(%edx)
087a7a9c +0x08c:  movl   $0x0,0x4(%edx)
087a7aa3 +0x093:  lea    -0x1c(%esi),%edx
087a7aa6 +0x096:  mov    %esi,-0x94(%ebp)
087a7aac +0x09c:  lea    0x0(%esi,%eiz,1),%esi
087a7ab0 +0x0a0:  mov    -0x94(%ebp),%ecx
087a7ab6 +0x0a6:  mov    $0x1c,%esi
087a7abb +0x0ab:  mov    $0x38,%edi
087a7ac0 +0x0b0:  add    %eax,%ecx
087a7ac2 +0x0b2:  cmp    $0x1c,%eax
087a7ac5 +0x0b5:  cmovl  %esi,%edi
087a7ac8 +0x0b8:  cmp    %ecx,%edi
087a7aca +0x0ba:  mov    -0xa0(%ebp),%edi
087a7ad0 +0x0c0:  lea    0x1c(%edx),%esi
087a7ad3 +0x0c3:  cmovle %edx,%esi
087a7ad6 +0x0c6:  add    $0x1,%edx
087a7ad9 +0x0c9:  movzbl (%edi,%esi,1),%esi
087a7add +0x0cd:  mov    %esi,%ecx
087a7adf +0x0cf:  mov    %cl,0x38(%edi,%eax,1)
087a7ae3 +0x0d3:  add    $0x1,%eax
087a7ae6 +0x0d6:  cmp    $0x38,%eax
087a7ae9 +0x0d9:  jne    087a7ab0 <+0xa0>
087a7aeb +0x0db:  mov    %edi,%ecx
087a7aed +0x0dd:  xor    %esi,%esi
087a7aef +0x0df:  nop
087a7af0 +0x0e0:  movzbl -0x65c238(%esi,%ebx,1),%eax
087a7af8 +0x0e8:  cmpb   $0x0,0x37(%ecx,%eax,1)
087a7afd +0x0ed:  je     087a7b2a <+0x11a>
087a7aff +0x0ef:  mov    $0x2aaaaaab,%eax
087a7b04 +0x0f4:  imul   %esi
087a7b06 +0x0f6:  mov    %esi,%eax
087a7b08 +0x0f8:  sar    $0x1f,%eax
087a7b0b +0x0fb:  sub    %eax,%edx
087a7b0d +0x0fd:  lea    (%edx,%edx,2),%eax
087a7b10 +0x100:  lea    (%eax,%eax,1),%edi
087a7b13 +0x103:  mov    %esi,%eax
087a7b15 +0x105:  sub    %edi,%eax
087a7b17 +0x107:  mov    -0x9c(%ebp),%edi
087a7b1d +0x10d:  mov    -0x65c278(%ebx,%eax,4),%eax
087a7b24 +0x114:  sar    $0x2,%eax
087a7b27 +0x117:  or     %al,(%edi,%edx,1)
087a7b2a +0x11a:  add    $0x1,%esi
087a7b2d +0x11d:  cmp    $0x30,%esi
087a7b30 +0x120:  jne    087a7af0 <+0xe0>
087a7b32 +0x122:  movzbl -0x14(%ebp),%eax
087a7b36 +0x126:  movzbl -0x12(%ebp),%edx
087a7b3a +0x12a:  mov    0x8(%ebp),%esi
087a7b3d +0x12d:  mov    -0x98(%ebp),%edi
087a7b43 +0x133:  shl    $0x18,%eax
087a7b46 +0x136:  shl    $0x10,%edx
087a7b49 +0x139:  or     %edx,%eax
087a7b4b +0x13b:  movzbl -0xe(%ebp),%edx
087a7b4f +0x13f:  or     %edx,%eax
087a7b51 +0x141:  movzbl -0x10(%ebp),%edx
087a7b55 +0x145:  shl    $0x8,%edx
087a7b58 +0x148:  or     %edx,%eax
087a7b5a +0x14a:  mov    -0x98(%ebp),%edx
087a7b60 +0x150:  mov    %eax,(%esi,%edx,8)
087a7b63 +0x153:  movzbl -0x13(%ebp),%eax
087a7b67 +0x157:  movzbl -0x11(%ebp),%edx
087a7b6b +0x15b:  shl    $0x18,%eax
087a7b6e +0x15e:  shl    $0x10,%edx
087a7b71 +0x161:  or     %edx,%eax
087a7b73 +0x163:  movzbl -0xd(%ebp),%edx
087a7b77 +0x167:  or     %edx,%eax
087a7b79 +0x169:  movzbl -0xf(%ebp),%edx
087a7b7d +0x16d:  shl    $0x8,%edx
087a7b80 +0x170:  or     %edx,%eax
087a7b82 +0x172:  mov    %eax,0x4(%esi,%edi,8)
087a7b86 +0x176:  add    $0x1,%edi
087a7b89 +0x179:  cmp    $0x10,%edi
087a7b8c +0x17c:  mov    %edi,-0x98(%ebp)
087a7b92 +0x182:  jne    087a7a80 <+0x70>
087a7b98 +0x188:  cmpl   $0x1,0x14(%ebp)
087a7b9c +0x18c:  jne    087a7c60 <+0x250>
087a7ba2 +0x192:  mov    (%esi),%eax
087a7ba4 +0x194:  mov    0x78(%esi),%edx
087a7ba7 +0x197:  mov    %eax,0x78(%esi)
087a7baa +0x19a:  mov    0x4(%esi),%eax
087a7bad +0x19d:  mov    %edx,(%esi)
087a7baf +0x19f:  mov    0x7c(%esi),%edx
087a7bb2 +0x1a2:  mov    %eax,0x7c(%esi)
087a7bb5 +0x1a5:  mov    0x8(%esi),%eax
087a7bb8 +0x1a8:  mov    %edx,0x4(%esi)
087a7bbb +0x1ab:  mov    0x70(%esi),%edx
087a7bbe +0x1ae:  mov    %eax,0x70(%esi)
087a7bc1 +0x1b1:  mov    0xc(%esi),%eax
087a7bc4 +0x1b4:  mov    %edx,0x8(%esi)
087a7bc7 +0x1b7:  mov    0x74(%esi),%edx
087a7bca +0x1ba:  mov    %eax,0x74(%esi)
087a7bcd +0x1bd:  mov    0x10(%esi),%eax
087a7bd0 +0x1c0:  mov    %edx,0xc(%esi)
087a7bd3 +0x1c3:  mov    0x68(%esi),%edx
087a7bd6 +0x1c6:  mov    %eax,0x68(%esi)
087a7bd9 +0x1c9:  mov    0x14(%esi),%eax
087a7bdc +0x1cc:  mov    %edx,0x10(%esi)
087a7bdf +0x1cf:  mov    0x6c(%esi),%edx
087a7be2 +0x1d2:  mov    %eax,0x6c(%esi)
087a7be5 +0x1d5:  mov    0x18(%esi),%eax
087a7be8 +0x1d8:  mov    %edx,0x14(%esi)
087a7beb +0x1db:  mov    0x60(%esi),%edx
087a7bee +0x1de:  mov    %eax,0x60(%esi)
087a7bf1 +0x1e1:  mov    0x1c(%esi),%eax
087a7bf4 +0x1e4:  mov    %edx,0x18(%esi)
087a7bf7 +0x1e7:  mov    0x64(%esi),%edx
087a7bfa +0x1ea:  mov    %eax,0x64(%esi)
087a7bfd +0x1ed:  mov    0x20(%esi),%eax
087a7c00 +0x1f0:  mov    %edx,0x1c(%esi)
087a7c03 +0x1f3:  mov    0x58(%esi),%edx
087a7c06 +0x1f6:  mov    %edx,0x20(%esi)
087a7c09 +0x1f9:  mov    0x5c(%esi),%edx
087a7c0c +0x1fc:  mov    %eax,0x58(%esi)
087a7c0f +0x1ff:  mov    0x24(%esi),%eax
087a7c12 +0x202:  mov    %edx,0x24(%esi)
087a7c15 +0x205:  mov    0x50(%esi),%edx
087a7c18 +0x208:  mov    %eax,0x5c(%esi)
087a7c1b +0x20b:  mov    0x28(%esi),%eax
087a7c1e +0x20e:  mov    %edx,0x28(%esi)
087a7c21 +0x211:  mov    0x54(%esi),%edx
087a7c24 +0x214:  mov    %eax,0x50(%esi)
087a7c27 +0x217:  mov    0x2c(%esi),%eax
087a7c2a +0x21a:  mov    %edx,0x2c(%esi)
087a7c2d +0x21d:  mov    0x48(%esi),%edx
087a7c30 +0x220:  mov    %eax,0x54(%esi)
087a7c33 +0x223:  mov    0x30(%esi),%eax
087a7c36 +0x226:  mov    %edx,0x30(%esi)
087a7c39 +0x229:  mov    0x4c(%esi),%edx
087a7c3c +0x22c:  mov    %eax,0x48(%esi)
087a7c3f +0x22f:  mov    0x34(%esi),%eax
087a7c42 +0x232:  mov    %edx,0x34(%esi)
087a7c45 +0x235:  mov    0x40(%esi),%edx
087a7c48 +0x238:  mov    %eax,0x4c(%esi)
087a7c4b +0x23b:  mov    0x38(%esi),%eax
087a7c4e +0x23e:  mov    %edx,0x38(%esi)
087a7c51 +0x241:  mov    0x44(%esi),%edx
087a7c54 +0x244:  mov    %eax,0x40(%esi)
087a7c57 +0x247:  mov    0x3c(%esi),%eax
087a7c5a +0x24a:  mov    %edx,0x3c(%esi)
087a7c5d +0x24d:  mov    %eax,0x44(%esi)
087a7c60 +0x250:  add    $0x94,%esp
087a7c66 +0x256:  pop    %ebx
087a7c67 +0x257:  pop    %esi
087a7c68 +0x258:  pop    %edi
087a7c69 +0x259:  pop    %ebp
087a7c6a +0x25a:  ret
087a7c6b +0x25b:  nop
087a7c6c +0x25c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::BasicDES::SetKey @ 0x87a7a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::BasicDES::SetKey(BasicDES *this,int param_1,undefined4 param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_9c;
  char local_88 [112];
  byte local_18 [8];
  
  iVar4 = 0;
  do {
    local_88[iVar4] =
         ((&bytebit)[(byte)(&pc1)[iVar4] - 1 & 7] &
         (uint)*(byte *)(param_1 + ((int)((byte)(&pc1)[iVar4] - 1) >> 3))) != 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x38);
  local_9c = 0;
  do {
    iVar5 = 0;
    bVar1 = totrot[local_9c];
    iVar4 = bVar1 - 0x1c;
    do {
      iVar7 = 0x38;
      if (iVar5 < 0x1c) {
        iVar7 = 0x1c;
      }
      iVar6 = iVar4 + 0x1c;
      if (iVar7 <= (int)((uint)bVar1 + iVar5)) {
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
      local_88[iVar5 + 0x38] = local_88[iVar6];
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x38);
    iVar4 = 0;
    do {
      if (local_88[(byte)(&pc2)[iVar4] + 0x37] != '\0') {
        local_18[iVar4 / 6] = local_18[iVar4 / 6] | (byte)((int)(&bytebit)[iVar4 % 6] >> 2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x30);
    *(undefined4 *)(this + local_9c * 8) = 0;
    *(undefined4 *)(this + local_9c * 8 + 4) = 0;
    local_9c = local_9c + 1;
  } while (local_9c != 0x10);
  if (param_4 == 1) {
    uVar2 = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 0x78) = *(undefined4 *)this;
    *(undefined4 *)this = uVar2;
    uVar2 = *(undefined4 *)(this + 0x7c);
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 4) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = uVar2;
    uVar2 = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x1c);
    uVar3 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x1c) = uVar2;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x58) = uVar3;
    uVar2 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x5c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(this + 0x54) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x4c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x44) = uVar2;
  }
  return;
}
```
