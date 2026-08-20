# CheckHashReceived

`_ZN17PIReceiverManager17CheckHashReceivedEPhjjb`

`PIReceiverManager::CheckHashReceived(unsigned char*, unsigned int, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `PIReceiverManager` | `0x0808bf7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bf7e  _ZN17PIReceiverManager17CheckHashReceivedEPhjjb
#           PIReceiverManager::CheckHashReceived(unsigned char*, unsigned int, unsigned int, bool)
# range [0x0808bf7e, 0x0808c065]
0808bf7e +0x00:  push   %ebp
0808bf7f +0x01:  mov    %esp,%ebp
0808bf81 +0x03:  sub    $0x38,%esp
0808bf84 +0x06:  mov    0x18(%ebp),%eax
0808bf87 +0x09:  mov    %al,-0x1c(%ebp)
0808bf8a +0x0c:  cmpb   $0x0,-0x1c(%ebp)
0808bf8e +0x10:  je     0808bf97 <+0x19>
0808bf90 +0x12:  mov    0x8(%ebp),%eax
0808bf93 +0x15:  movb   $0x27,0x4(%eax)
0808bf97 +0x19:  mov    0x14(%ebp),%eax
0808bf9a +0x1c:  shr    $0x8,%eax
0808bf9d +0x1f:  mov    %ax,-0x10(%ebp)
0808bfa1 +0x23:  mov    0x8(%ebp),%eax
0808bfa4 +0x26:  movzbl 0x4(%eax),%eax
0808bfa8 +0x2a:  mov    %al,-0xd(%ebp)
0808bfab +0x2d:  movzwl -0x10(%ebp),%eax
0808bfaf +0x31:  and    $0x3000,%eax
0808bfb4 +0x36:  sar    $0xc,%eax
0808bfb7 +0x39:  mov    %eax,%edx
0808bfb9 +0x3b:  movzwl -0x10(%ebp),%eax
0808bfbd +0x3f:  and    $0x30,%eax
0808bfc0 +0x42:  sar    $0x2,%eax
0808bfc3 +0x45:  or     %eax,%edx
0808bfc5 +0x47:  movzwl -0x10(%ebp),%eax
0808bfc9 +0x4b:  and    $0x300,%eax
0808bfce +0x50:  sar    $0x4,%eax
0808bfd1 +0x53:  or     %eax,%edx
0808bfd3 +0x55:  movzwl -0x10(%ebp),%eax
0808bfd7 +0x59:  shl    $0x6,%eax
0808bfda +0x5c:  or     %edx,%eax
0808bfdc +0x5e:  mov    %al,-0xc(%ebp)
0808bfdf +0x61:  mov    0x8(%ebp),%eax
0808bfe2 +0x64:  movzbl -0xc(%ebp),%edx
0808bfe6 +0x68:  mov    %dl,0x4(%eax)
0808bfe9 +0x6b:  movb   $0x0,-0xb(%ebp)
0808bfed +0x6f:  movb   $0x0,-0xa(%ebp)
0808bff1 +0x73:  movzwl -0x10(%ebp),%eax
0808bff5 +0x77:  and    $0xc0,%eax
0808bffa +0x7c:  sar    $0x6,%eax
0808bffd +0x7f:  mov    %eax,%edx
0808bfff +0x81:  movzwl -0x10(%ebp),%eax
0808c003 +0x85:  and    $0xc000,%eax
0808c008 +0x8a:  sar    $0xc,%eax
0808c00b +0x8d:  or     %eax,%edx
0808c00d +0x8f:  movzwl -0x10(%ebp),%eax
0808c011 +0x93:  and    $0xc,%eax
0808c014 +0x96:  shl    $0x2,%eax
0808c017 +0x99:  or     %eax,%edx
0808c019 +0x9b:  movzwl -0x10(%ebp),%eax
0808c01d +0x9f:  and    $0xc00,%eax
0808c022 +0xa4:  sar    $0x4,%eax
0808c025 +0xa7:  or     %edx,%eax
0808c027 +0xa9:  mov    %al,-0x9(%ebp)
0808c02a +0xac:  cmpl   $0x0,0x10(%ebp)
0808c02e +0xb0:  jne    0808c036 <+0xb8>
0808c030 +0xb2:  movb   $0x1,-0xb(%ebp)
0808c034 +0xb6:  jmp    0808c060 <+0xe2>
0808c036 +0xb8:  movzbl -0xd(%ebp),%eax
0808c03a +0xbc:  mov    %eax,0x8(%esp)
0808c03e +0xc0:  mov    0x10(%ebp),%eax
0808c041 +0xc3:  mov    %eax,0x4(%esp)
0808c045 +0xc7:  mov    0xc(%ebp),%eax
0808c048 +0xca:  mov    %eax,(%esp)
0808c04b +0xcd:  call   0808c311 <_GLOBAL__I_hashkey_map+0x242>  ; global constructors keyed to hashkey_map+0x242
0808c050 +0xd2:  mov    %al,-0xa(%ebp)
0808c053 +0xd5:  movzbl -0xa(%ebp),%eax
0808c057 +0xd9:  cmp    -0x9(%ebp),%al
0808c05a +0xdc:  sete   %al
0808c05d +0xdf:  mov    %al,-0xb(%ebp)
0808c060 +0xe2:  movzbl -0xb(%ebp),%eax
0808c064 +0xe6:  leave
0808c065 +0xe7:  ret
```

## 反编译 C

```c
// PIReceiverManager::CheckHashReceived @ 0x808bf7e

/* PIReceiverManager::CheckHashReceived(unsigned char*, unsigned int, unsigned int, bool) */

bool __thiscall
PIReceiverManager::CheckHashReceived
          (PIReceiverManager *this,uchar *param_1,uint param_2,uint param_3,bool param_4)

{
  PIReceiverManager PVar1;
  byte bVar2;
  ushort uVar3;
  bool local_f;
  
  if (param_4) {
    this[4] = (PIReceiverManager)0x27;
  }
  uVar3 = (ushort)(param_3 >> 8);
  PVar1 = this[4];
  this[4] = (PIReceiverManager)
            ((char)(param_3 >> 8) << 6 |
            (byte)((int)(uVar3 & 0x3000) >> 0xc) | (byte)((int)(uVar3 & 0x30) >> 2) |
            (byte)((int)(uVar3 & 0x300) >> 4));
  if (param_2 == 0) {
    local_f = true;
  }
  else {
    bVar2 = MakeHash(param_1,param_2,(uchar)PVar1);
    local_f = bVar2 == (byte)((byte)((int)(uVar3 & 0xc00) >> 4) |
                             (byte)((int)(uVar3 & 0xc0) >> 6) | (byte)((int)(uVar3 & 0xc000) >> 0xc)
                             | (byte)((uVar3 & 0xc) << 2));
  }
  return local_f;
}
```
