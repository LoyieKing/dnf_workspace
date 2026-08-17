# TaoCrypt__DES

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ProcessAndXorBlock

```asm
// === 087a7df0 TaoCrypt::DES::ProcessAndXorBlock  [0x087a7df0-0x87a7f9f] ===
 87a7df0:	55                   	push   %ebp
 87a7df1:	89 e5                	mov    %esp,%ebp
 87a7df3:	57                   	push   %edi
 87a7df4:	56                   	push   %esi
 87a7df5:	53                   	push   %ebx
 87a7df6:	83 ec 2c             	sub    $0x2c,%esp
 87a7df9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a7dfc:	e8 f7 af f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a7e01:	81 c3 97 4d bc 00    	add    $0xbc4d97,%ebx
 87a7e07:	8b 75 10             	mov    0x10(%ebp),%esi
 87a7e0a:	8b 7d 14             	mov    0x14(%ebp),%edi
 87a7e0d:	8b 11                	mov    (%ecx),%edx
 87a7e0f:	89 d0                	mov    %edx,%eax
 87a7e11:	c1 c8 08             	ror    $0x8,%eax
 87a7e14:	c1 ca 18             	ror    $0x18,%edx
 87a7e17:	25 00 ff 00 ff       	and    $0xff00ff00,%eax
 87a7e1c:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a7e22:	09 c2                	or     %eax,%edx
 87a7e24:	8b 41 04             	mov    0x4(%ecx),%eax
 87a7e27:	89 c1                	mov    %eax,%ecx
 87a7e29:	c1 c9 08             	ror    $0x8,%ecx
 87a7e2c:	c1 c8 18             	ror    $0x18,%eax
 87a7e2f:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a7e35:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7e3a:	09 c8                	or     %ecx,%eax
 87a7e3c:	c1 c8 1c             	ror    $0x1c,%eax
 87a7e3f:	89 c1                	mov    %eax,%ecx
 87a7e41:	31 d1                	xor    %edx,%ecx
 87a7e43:	81 e1 f0 f0 f0 f0    	and    $0xf0f0f0f0,%ecx
 87a7e49:	31 c8                	xor    %ecx,%eax
 87a7e4b:	31 ca                	xor    %ecx,%edx
 87a7e4d:	c1 c8 14             	ror    $0x14,%eax
 87a7e50:	89 c1                	mov    %eax,%ecx
 87a7e52:	31 d1                	xor    %edx,%ecx
 87a7e54:	66 31 c9             	xor    %cx,%cx
 87a7e57:	31 c8                	xor    %ecx,%eax
 87a7e59:	31 ca                	xor    %ecx,%edx
 87a7e5b:	c1 c8 12             	ror    $0x12,%eax
 87a7e5e:	89 c1                	mov    %eax,%ecx
 87a7e60:	31 d1                	xor    %edx,%ecx
 87a7e62:	81 e1 33 33 33 33    	and    $0x33333333,%ecx
 87a7e68:	31 c8                	xor    %ecx,%eax
 87a7e6a:	31 ca                	xor    %ecx,%edx
 87a7e6c:	c1 c8 06             	ror    $0x6,%eax
 87a7e6f:	89 c1                	mov    %eax,%ecx
 87a7e71:	31 d1                	xor    %edx,%ecx
 87a7e73:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a7e79:	31 c8                	xor    %ecx,%eax
 87a7e7b:	31 ca                	xor    %ecx,%edx
 87a7e7d:	c1 c8 17             	ror    $0x17,%eax
 87a7e80:	89 c1                	mov    %eax,%ecx
 87a7e82:	31 d1                	xor    %edx,%ecx
 87a7e84:	81 e1 aa aa aa aa    	and    $0xaaaaaaaa,%ecx
 87a7e8a:	31 c8                	xor    %ecx,%eax
 87a7e8c:	31 ca                	xor    %ecx,%edx
 87a7e8e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87a7e91:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87a7e94:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a7e98:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a7e9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a7e9f:	8b 45 08             	mov    0x8(%ebp),%eax
 87a7ea2:	c1 ca 1f             	ror    $0x1f,%edx
 87a7ea5:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a7ea8:	83 c0 38             	add    $0x38,%eax
 87a7eab:	89 04 24             	mov    %eax,(%esp)
 87a7eae:	e8 ed dc ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a7eb3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a7eb6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a7eb9:	d1 c9                	ror    $1,%ecx
 87a7ebb:	89 c8                	mov    %ecx,%eax
 87a7ebd:	31 d0                	xor    %edx,%eax
 87a7ebf:	25 aa aa aa aa       	and    $0xaaaaaaaa,%eax
 87a7ec4:	31 c2                	xor    %eax,%edx
 87a7ec6:	31 c1                	xor    %eax,%ecx
 87a7ec8:	c1 ca 09             	ror    $0x9,%edx
 87a7ecb:	89 d0                	mov    %edx,%eax
 87a7ecd:	31 c8                	xor    %ecx,%eax
 87a7ecf:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7ed4:	31 c2                	xor    %eax,%edx
 87a7ed6:	31 c1                	xor    %eax,%ecx
 87a7ed8:	c1 ca 1a             	ror    $0x1a,%edx
 87a7edb:	89 d0                	mov    %edx,%eax
 87a7edd:	31 c8                	xor    %ecx,%eax
 87a7edf:	25 33 33 33 33       	and    $0x33333333,%eax
 87a7ee4:	31 c2                	xor    %eax,%edx
 87a7ee6:	31 c1                	xor    %eax,%ecx
 87a7ee8:	c1 ca 0e             	ror    $0xe,%edx
 87a7eeb:	89 d0                	mov    %edx,%eax
 87a7eed:	31 c8                	xor    %ecx,%eax
 87a7eef:	66 31 c0             	xor    %ax,%ax
 87a7ef2:	31 c2                	xor    %eax,%edx
 87a7ef4:	31 c1                	xor    %eax,%ecx
 87a7ef6:	c1 ca 0c             	ror    $0xc,%edx
 87a7ef9:	89 d0                	mov    %edx,%eax
 87a7efb:	31 c8                	xor    %ecx,%eax
 87a7efd:	25 f0 f0 f0 f0       	and    $0xf0f0f0f0,%eax
 87a7f02:	31 c2                	xor    %eax,%edx
 87a7f04:	31 c1                	xor    %eax,%ecx
 87a7f06:	c1 ca 04             	ror    $0x4,%edx
 87a7f09:	85 f6                	test   %esi,%esi
 87a7f0b:	74 4b                	je     87a7f58 <_ZNK8TaoCrypt3DES18ProcessAndXorBlockEPKhS2_Ph+0x168>
 87a7f0d:	89 c8                	mov    %ecx,%eax
 87a7f0f:	c1 c8 18             	ror    $0x18,%eax
 87a7f12:	c1 c9 08             	ror    $0x8,%ecx
 87a7f15:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7f1a:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a7f20:	09 c8                	or     %ecx,%eax
 87a7f22:	33 06                	xor    (%esi),%eax
 87a7f24:	83 fe fc             	cmp    $0xfffffffc,%esi
 87a7f27:	89 07                	mov    %eax,(%edi)
 87a7f29:	8d 47 04             	lea    0x4(%edi),%eax
 87a7f2c:	74 44                	je     87a7f72 <_ZNK8TaoCrypt3DES18ProcessAndXorBlockEPKhS2_Ph+0x182>
 87a7f2e:	89 d0                	mov    %edx,%eax
 87a7f30:	c1 c8 18             	ror    $0x18,%eax
 87a7f33:	c1 ca 08             	ror    $0x8,%edx
 87a7f36:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7f3b:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a7f41:	09 d0                	or     %edx,%eax
 87a7f43:	33 46 04             	xor    0x4(%esi),%eax
 87a7f46:	89 47 04             	mov    %eax,0x4(%edi)
 87a7f49:	83 c4 2c             	add    $0x2c,%esp
 87a7f4c:	5b                   	pop    %ebx
 87a7f4d:	5e                   	pop    %esi
 87a7f4e:	5f                   	pop    %edi
 87a7f4f:	5d                   	pop    %ebp
 87a7f50:	c3                   	ret
 87a7f51:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a7f58:	89 c8                	mov    %ecx,%eax
 87a7f5a:	c1 c8 18             	ror    $0x18,%eax
 87a7f5d:	c1 c9 08             	ror    $0x8,%ecx
 87a7f60:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7f65:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a7f6b:	09 c8                	or     %ecx,%eax
 87a7f6d:	89 07                	mov    %eax,(%edi)
 87a7f6f:	8d 47 04             	lea    0x4(%edi),%eax
 87a7f72:	89 d1                	mov    %edx,%ecx
 87a7f74:	c1 c9 18             	ror    $0x18,%ecx
 87a7f77:	c1 ca 08             	ror    $0x8,%edx
 87a7f7a:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a7f80:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a7f86:	09 d1                	or     %edx,%ecx
 87a7f88:	89 08                	mov    %ecx,(%eax)
 87a7f8a:	83 c4 2c             	add    $0x2c,%esp
 87a7f8d:	5b                   	pop    %ebx
 87a7f8e:	5e                   	pop    %esi
 87a7f8f:	5f                   	pop    %edi
 87a7f90:	5d                   	pop    %ebp
 87a7f91:	c3                   	ret
 87a7f92:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a7f99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DES::ProcessAndXorBlock @ 0x87a7df0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned char*)
   const */

void __thiscall
TaoCrypt::DES::ProcessAndXorBlock(DES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20 [4];
  
  uVar2 = *(uint *)param_1;
  uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = (uVar2 << 0x18) >> 0x1c |
          (uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18) << 4;
  uVar2 = (uVar1 ^ uVar4) & 0xf0f0f0f0;
  uVar1 = uVar1 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar1 << 0xc;
  uVar3 = (uint)(ushort)((ushort)(uVar2 >> 0x10) ^ (ushort)(uVar4 >> 0x10)) << 0x10;
  uVar2 = (uVar1 >> 0x14 | uVar2) ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar2 = uVar2 >> 0x12 | uVar2 << 0xe;
  uVar1 = (uVar2 ^ uVar4) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 >> 6 | uVar2 << 0x1a;
  uVar1 = (uVar2 ^ uVar4) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  local_24 = uVar2 >> 0x17 | uVar2 << 9;
  uVar2 = (local_24 ^ uVar4) & 0xaaaaaaaa;
  local_24 = local_24 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  local_20[0] = uVar4 >> 0x1f | uVar4 << 1;
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  uVar3 = local_24 >> 1 | (uint)((local_24 & 1) != 0) << 0x1f;
  uVar2 = (uVar3 ^ local_20[0]) & 0xaaaaaaaa;
  local_20[0] = local_20[0] ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = local_20[0] << 0x17;
  uVar4 = local_20[0] >> 9 | uVar2;
  uVar1 = (uVar4 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 >> 0x1a | (uVar4 ^ uVar1) << 6;
  uVar2 = (uVar1 ^ uVar3) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = uVar1 >> 0xe;
  uVar4 = uVar2 | uVar1 << 0x12;
  uVar1 = (uint)(ushort)((ushort)(uVar4 >> 0x10) ^ (ushort)(uVar3 >> 0x10)) << 0x10;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = (uVar4 ^ uVar1) >> 0xc;
  uVar4 = uVar1 | uVar2 << 0x14;
  uVar2 = (uVar4 ^ uVar3) & 0xf0f0f0f0;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar4 ^ uVar2) >> 4;
  uVar1 = uVar2 | uVar1 << 0x1c;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18) ^
         *(uint *)param_2;
    if (param_2 != (uchar *)0xfffffffc) {
      *(uint *)(param_3 + 4) =
           (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18) ^
           *(uint *)(param_2 + 4);
      return;
    }
  }
  *(uint *)(param_3 + 4) =
       uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18;
  return;
}

```

