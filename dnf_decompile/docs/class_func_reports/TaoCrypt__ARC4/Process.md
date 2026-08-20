# Process

`_ZN8TaoCrypt4ARC47ProcessEPhPKhj`

`TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ARC4` | `0x087a5a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a5a20  _ZN8TaoCrypt4ARC47ProcessEPhPKhj
#           TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int)
# range [0x087a5a20, 0x087a5b8f]
087a5a20 +0x000:  push   %ebp
087a5a21 +0x001:  mov    %esp,%ebp
087a5a23 +0x003:  push   %edi
087a5a24 +0x004:  push   %esi
087a5a25 +0x005:  push   %ebx
087a5a26 +0x006:  sub    $0x3c,%esp
087a5a29 +0x009:  mov    0x14(%ebp),%edx
087a5a2c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a5a31 +0x011:  add    $0xbc7167,%ebx
087a5a37 +0x017:  mov    0x8(%ebp),%eax
087a5a3a +0x01a:  test   %edx,%edx
087a5a3c +0x01c:  je     087a5ae1 <+0xc1>
087a5a42 +0x022:  mov    -0x5c8(%ebx),%edx
087a5a48 +0x028:  cmpb   $0x0,(%edx)
087a5a4b +0x02b:  jne    087a5af0 <+0xd0>
087a5a51 +0x031:  mov    0xc(%ebp),%edi
087a5a54 +0x034:  xor    %edx,%edx
087a5a56 +0x036:  cmp    %edi,0x10(%ebp)
087a5a59 +0x039:  movzbl (%eax),%esi
087a5a5c +0x03c:  movzbl 0x1(%eax),%ecx
087a5a60 +0x040:  je     087a5b18 <+0xf8>
087a5a66 +0x046:  mov    %edx,-0x30(%ebp)
087a5a69 +0x049:  mov    %ecx,-0x1c(%ebp)
087a5a6c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
087a5a70 +0x050:  mov    0x10(%ebp),%ecx
087a5a73 +0x053:  mov    -0x30(%ebp),%edx
087a5a76 +0x056:  movzbl (%ecx,%edx,1),%edx
087a5a7a +0x05a:  mov    %dl,-0x29(%ebp)
087a5a7d +0x05d:  movzbl 0x2(%eax,%esi,1),%edx
087a5a82 +0x062:  movzbl %dl,%edi
087a5a85 +0x065:  mov    %edi,-0x24(%ebp)
087a5a88 +0x068:  add    -0x1c(%ebp),%edi
087a5a8b +0x06b:  and    $0xff,%edi
087a5a91 +0x071:  mov    %edi,-0x1c(%ebp)
087a5a94 +0x074:  movzbl 0x2(%eax,%edi,1),%ecx
087a5a99 +0x079:  mov    %cl,0x2(%eax,%esi,1)
087a5a9d +0x07d:  add    $0x1,%esi
087a5aa0 +0x080:  mov    %dl,0x2(%eax,%edi,1)
087a5aa4 +0x084:  movzbl -0x24(%ebp),%edx
087a5aa8 +0x088:  and    $0xff,%esi
087a5aae +0x08e:  lea    (%ecx,%edx,1),%edi
087a5ab1 +0x091:  and    $0xff,%edi
087a5ab7 +0x097:  movzbl 0x2(%eax,%edi,1),%ecx
087a5abc +0x09c:  xor    %cl,-0x29(%ebp)
087a5abf +0x09f:  movzbl -0x29(%ebp),%edx
087a5ac3 +0x0a3:  mov    -0x30(%ebp),%ecx
087a5ac6 +0x0a6:  mov    0xc(%ebp),%edi
087a5ac9 +0x0a9:  mov    %dl,(%edi,%ecx,1)
087a5acc +0x0ac:  add    $0x1,%ecx
087a5acf +0x0af:  cmp    %ecx,0x14(%ebp)
087a5ad2 +0x0b2:  mov    %ecx,-0x30(%ebp)
087a5ad5 +0x0b5:  jne    087a5a70 <+0x50>
087a5ad7 +0x0b7:  mov    -0x1c(%ebp),%ecx
087a5ada +0x0ba:  mov    %esi,%edx
087a5adc +0x0bc:  mov    %dl,(%eax)
087a5ade +0x0be:  mov    %cl,0x1(%eax)
087a5ae1 +0x0c1:  add    $0x3c,%esp
087a5ae4 +0x0c4:  pop    %ebx
087a5ae5 +0x0c5:  pop    %esi
087a5ae6 +0x0c6:  pop    %edi
087a5ae7 +0x0c7:  pop    %ebp
087a5ae8 +0x0c8:  ret
087a5ae9 +0x0c9:  lea    0x0(%esi,%eiz,1),%esi
087a5af0 +0x0d0:  mov    0xc(%ebp),%edi
087a5af3 +0x0d3:  mov    0x14(%ebp),%edx
087a5af6 +0x0d6:  mov    0x10(%ebp),%ecx
087a5af9 +0x0d9:  mov    %eax,(%esp)
087a5afc +0x0dc:  mov    %edi,0x4(%esp)
087a5b00 +0x0e0:  mov    %edx,0xc(%esp)
087a5b04 +0x0e4:  mov    %ecx,0x8(%esp)
087a5b08 +0x0e8:  call   087a5990 <_ZN8TaoCrypt4ARC410AsmProcessEPhPKhj>  ; TaoCrypt::ARC4::AsmProcess(unsigned char*, unsigned char const*, unsigned int)
087a5b0d +0x0ed:  add    $0x3c,%esp
087a5b10 +0x0f0:  pop    %ebx
087a5b11 +0x0f1:  pop    %esi
087a5b12 +0x0f2:  pop    %edi
087a5b13 +0x0f3:  pop    %ebp
087a5b14 +0x0f4:  ret
087a5b15 +0x0f5:  lea    0x0(%esi),%esi
087a5b18 +0x0f8:  mov    %edx,-0x30(%ebp)
087a5b1b +0x0fb:  mov    %ecx,-0x1c(%ebp)
087a5b1e +0x0fe:  xchg   %ax,%ax
087a5b20 +0x100:  mov    0x10(%ebp),%ecx
087a5b23 +0x103:  mov    -0x30(%ebp),%edx
087a5b26 +0x106:  movzbl (%ecx,%edx,1),%edx
087a5b2a +0x10a:  mov    %dl,-0x29(%ebp)
087a5b2d +0x10d:  movzbl 0x2(%eax,%esi,1),%edx
087a5b32 +0x112:  movzbl %dl,%edi
087a5b35 +0x115:  mov    %edi,-0x24(%ebp)
087a5b38 +0x118:  add    -0x1c(%ebp),%edi
087a5b3b +0x11b:  and    $0xff,%edi
087a5b41 +0x121:  mov    %edi,-0x1c(%ebp)
087a5b44 +0x124:  movzbl 0x2(%eax,%edi,1),%ecx
087a5b49 +0x129:  mov    %cl,0x2(%eax,%esi,1)
087a5b4d +0x12d:  add    $0x1,%esi
087a5b50 +0x130:  mov    %dl,0x2(%eax,%edi,1)
087a5b54 +0x134:  movzbl -0x24(%ebp),%edx
087a5b58 +0x138:  and    $0xff,%esi
087a5b5e +0x13e:  lea    (%ecx,%edx,1),%edi
087a5b61 +0x141:  and    $0xff,%edi
087a5b67 +0x147:  movzbl 0x2(%eax,%edi,1),%ecx
087a5b6c +0x14c:  xor    %cl,-0x29(%ebp)
087a5b6f +0x14f:  movzbl -0x29(%ebp),%edx
087a5b73 +0x153:  mov    -0x30(%ebp),%ecx
087a5b76 +0x156:  mov    0x10(%ebp),%edi
087a5b79 +0x159:  mov    %dl,(%edi,%ecx,1)
087a5b7c +0x15c:  add    $0x1,%ecx
087a5b7f +0x15f:  cmp    %ecx,0x14(%ebp)
087a5b82 +0x162:  mov    %ecx,-0x30(%ebp)
087a5b85 +0x165:  jne    087a5b20 <+0x100>
087a5b87 +0x167:  jmp    087a5ad7 <+0xb7>
087a5b8c +0x16c:  nop
087a5b8d +0x16d:  nop
087a5b8e +0x16e:  nop
087a5b8f +0x16f:  nop
```

## 反编译 C

```c
// TaoCrypt::ARC4::Process @ 0x87a5a20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::ARC4::Process(ARC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  ARC4 AVar2;
  ARC4 AVar3;
  uint uVar4;
  uint local_34;
  uint local_20;
  
  if (param_3 != 0) {
    if (*PTR_isMMX_0936c5d0 != '\0') {
      AsmProcess(this,param_1,param_2,param_3);
      return;
    }
    uVar4 = (uint)(byte)*this;
    local_20 = (uint)(byte)this[1];
    if (param_2 == param_1) {
      local_34 = 0;
      do {
        bVar1 = param_2[local_34];
        AVar2 = this[uVar4 + 2];
        local_20 = (byte)AVar2 + local_20 & 0xff;
        AVar3 = this[local_20 + 2];
        this[uVar4 + 2] = AVar3;
        this[local_20 + 2] = AVar2;
        uVar4 = uVar4 + 1 & 0xff;
        param_2[local_34] = bVar1 ^ (byte)this[(byte)((char)AVar3 + (char)AVar2) + 2];
        local_34 = local_34 + 1;
      } while (param_3 != local_34);
    }
    else {
      local_34 = 0;
      do {
        bVar1 = param_2[local_34];
        AVar2 = this[uVar4 + 2];
        local_20 = (byte)AVar2 + local_20 & 0xff;
        AVar3 = this[local_20 + 2];
        this[uVar4 + 2] = AVar3;
        this[local_20 + 2] = AVar2;
        uVar4 = uVar4 + 1 & 0xff;
        param_1[local_34] = bVar1 ^ (byte)this[(byte)((char)AVar3 + (char)AVar2) + 2];
        local_34 = local_34 + 1;
      } while (param_3 != local_34);
    }
    *this = SUB41(uVar4,0);
    this[1] = SUB41(local_20,0);
  }
  return;
}
```
