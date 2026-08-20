# MakeHashForSending

`_ZN15PISenderManager18MakeHashForSendingEPhjb`

`PISenderManager::MakeHashForSending(unsigned char*, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `PISenderManager` | `0x0808be6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808be6e  _ZN15PISenderManager18MakeHashForSendingEPhjb
#           PISenderManager::MakeHashForSending(unsigned char*, unsigned int, bool)
# range [0x0808be6e, 0x0808bf67]
0808be6e +0x00:  push   %ebp
0808be6f +0x01:  mov    %esp,%ebp
0808be71 +0x03:  push   %ebx
0808be72 +0x04:  sub    $0x34,%esp
0808be75 +0x07:  mov    0x14(%ebp),%eax
0808be78 +0x0a:  mov    %al,-0x1c(%ebp)
0808be7b +0x0d:  cmpb   $0x0,-0x1c(%ebp)
0808be7f +0x11:  je     0808be88 <+0x1a>
0808be81 +0x13:  mov    0x8(%ebp),%eax
0808be84 +0x16:  movb   $0x27,0x4(%eax)
0808be88 +0x1a:  mov    0x8(%ebp),%eax
0808be8b +0x1d:  movzbl 0x4(%eax),%eax
0808be8f +0x21:  mov    %al,-0x16(%ebp)
0808be92 +0x24:  call   0807dca0 <_init+0x598>
0808be97 +0x29:  mov    %al,-0x15(%ebp)
0808be9a +0x2c:  mov    0x8(%ebp),%eax
0808be9d +0x2f:  movzbl -0x15(%ebp),%edx
0808bea1 +0x33:  mov    %dl,0x4(%eax)
0808bea4 +0x36:  movl   $0x0,-0x14(%ebp)
0808beab +0x3d:  movl   $0x0,-0x10(%ebp)
0808beb2 +0x44:  movb   $0x0,-0x9(%ebp)
0808beb6 +0x48:  cmpl   $0x0,0x10(%ebp)
0808beba +0x4c:  jne    0808bec6 <+0x58>
0808bebc +0x4e:  call   0807dca0 <_init+0x598>
0808bec1 +0x53:  mov    %al,-0x9(%ebp)
0808bec4 +0x56:  jmp    0808bee3 <+0x75>
0808bec6 +0x58:  movzbl -0x16(%ebp),%eax
0808beca +0x5c:  mov    %eax,0x8(%esp)
0808bece +0x60:  mov    0x10(%ebp),%eax
0808bed1 +0x63:  mov    %eax,0x4(%esp)
0808bed5 +0x67:  mov    0xc(%ebp),%eax
0808bed8 +0x6a:  mov    %eax,(%esp)
0808bedb +0x6d:  call   0808c311 <_GLOBAL__I_hashkey_map+0x242>  ; global constructors keyed to hashkey_map+0x242
0808bee0 +0x72:  mov    %al,-0x9(%ebp)
0808bee3 +0x75:  movzbl -0x9(%ebp),%eax
0808bee7 +0x79:  shl    $0x6,%eax
0808beea +0x7c:  movzbl %al,%edx
0808beed +0x7f:  movzbl -0x9(%ebp),%eax
0808bef1 +0x83:  and    $0xc,%eax
0808bef4 +0x86:  shl    $0xc,%eax
0808bef7 +0x89:  or     %eax,%edx
0808bef9 +0x8b:  movzbl -0x9(%ebp),%eax
0808befd +0x8f:  and    $0x30,%eax
0808bf00 +0x92:  sar    $0x2,%eax
0808bf03 +0x95:  or     %eax,%edx
0808bf05 +0x97:  movzbl -0x9(%ebp),%eax
0808bf09 +0x9b:  and    $0xc0,%ax
0808bf0d +0x9f:  shl    $0x4,%eax
0808bf10 +0xa2:  or     %eax,%edx
0808bf12 +0xa4:  movzbl -0x15(%ebp),%eax
0808bf16 +0xa8:  and    $0x3,%eax
0808bf19 +0xab:  shl    $0xc,%eax
0808bf1c +0xae:  or     %eax,%edx
0808bf1e +0xb0:  movzbl -0x15(%ebp),%eax
0808bf22 +0xb4:  and    $0xc,%eax
0808bf25 +0xb7:  shl    $0x2,%eax
0808bf28 +0xba:  or     %eax,%edx
0808bf2a +0xbc:  movzbl -0x15(%ebp),%eax
0808bf2e +0xc0:  and    $0x30,%eax
0808bf31 +0xc3:  shl    $0x4,%eax
0808bf34 +0xc6:  or     %eax,%edx
0808bf36 +0xc8:  movzbl -0x15(%ebp),%eax
0808bf3a +0xcc:  shr    $0x6,%al
0808bf3d +0xcf:  movzbl %al,%eax
0808bf40 +0xd2:  or     %edx,%eax
0808bf42 +0xd4:  movzwl %ax,%eax
0808bf45 +0xd7:  mov    %eax,-0x14(%ebp)
0808bf48 +0xda:  mov    -0x14(%ebp),%eax
0808bf4b +0xdd:  mov    %eax,%ebx
0808bf4d +0xdf:  shl    $0x8,%ebx
0808bf50 +0xe2:  call   0807dca0 <_init+0x598>
0808bf55 +0xe7:  and    $0xff,%eax
0808bf5a +0xec:  or     %ebx,%eax
0808bf5c +0xee:  mov    %eax,-0x10(%ebp)
0808bf5f +0xf1:  mov    -0x10(%ebp),%eax
0808bf62 +0xf4:  add    $0x34,%esp
0808bf65 +0xf7:  pop    %ebx
0808bf66 +0xf8:  pop    %ebp
0808bf67 +0xf9:  ret
```

## 反编译 C

```c
// PISenderManager::MakeHashForSending @ 0x808be6e

/* PISenderManager::MakeHashForSending(unsigned char*, unsigned int, bool) */

uint __thiscall
PISenderManager::MakeHashForSending(PISenderManager *this,uchar *param_1,uint param_2,bool param_3)

{
  PISenderManager PVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte local_d;
  
  if (param_3) {
    this[4] = (PISenderManager)0x27;
  }
  PVar1 = this[4];
  uVar2 = rand();
  this[4] = SUB41(uVar2,0);
  if (param_2 == 0) {
    iVar3 = rand();
    local_d = (byte)iVar3;
  }
  else {
    local_d = MakeHash(param_1,param_2,(uchar)PVar1);
  }
  uVar4 = rand();
  return uVar4 & 0xff |
         ((uint)((byte)SUB41(uVar2,0) >> 6) |
         (local_d & 3) << 6 | (local_d & 0xc) << 0xc | (int)(local_d & 0x30) >> 2 |
         (uint)(local_d & 0xc0) << 4 | (uVar2 & 3) << 0xc | (uVar2 & 0xc) << 2 | (uVar2 & 0x30) << 4
         ) << 8;
}
```
