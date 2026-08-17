# CAutoMarketConditionsControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CAutoMarketConditionsControl

```asm
// === 082f8108 CAutoMarketConditionsControl::CAutoMarketConditionsControl  [0x082f8108-0x82f8143] ===
 82f8108:	55                   	push   %ebp
 82f8109:	89 e5                	mov    %esp,%ebp
 82f810b:	83 ec 18             	sub    $0x18,%esp
 82f810e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8111:	05 dc 03 00 00       	add    $0x3dc,%eax
 82f8116:	89 04 24             	mov    %eax,(%esp)
 82f8119:	e8 8e 60 d9 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 82f811e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8121:	c7 80 80 03 00 00 00 	movl   $0x0,0x380(%eax)
 82f8128:	00 00 00 
 82f812b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f812e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82f8134:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8137:	c7 80 e8 03 00 00 00 	movl   $0x0,0x3e8(%eax)
 82f813e:	00 00 00 
 82f8141:	c9                   	leave
 82f8142:	c3                   	ret
 82f8143:	90                   	nop

```

```c
// CAutoMarketConditionsControl::CAutoMarketConditionsControl @ 0x82f8108

/* CAutoMarketConditionsControl::CAutoMarketConditionsControl() */

void __thiscall
CAutoMarketConditionsControl::CAutoMarketConditionsControl(CAutoMarketConditionsControl *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x3dc));
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 1000) = 0;
  return;
}

```

---

## ChangeItemRarity

```asm
// === 082f8c8c CAutoMarketConditionsControl::ChangeItemRarity  [0x082f8c8c-0x82f8f3e] ===
 82f8c8c:	55                   	push   %ebp
 82f8c8d:	89 e5                	mov    %esp,%ebp
 82f8c8f:	57                   	push   %edi
 82f8c90:	56                   	push   %esi
 82f8c91:	53                   	push   %ebx
 82f8c92:	81 ec ac 00 00 00    	sub    $0xac,%esp
 82f8c98:	8b 45 18             	mov    0x18(%ebp),%eax
 82f8c9b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82f8c9e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82f8ca1:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 82f8ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8ca7:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 82f8cad:	85 c0                	test   %eax,%eax
 82f8caf:	0f 84 7a 02 00 00    	je     82f8f2f <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x2a3>
 82f8cb5:	8b 0d 70 bd 43 09    	mov    0x943bd70,%ecx
 82f8cbb:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 82f8cc0:	89 c8                	mov    %ecx,%eax
 82f8cc2:	f7 ea                	imul   %edx
 82f8cc4:	c1 fa 06             	sar    $0x6,%edx
 82f8cc7:	89 c8                	mov    %ecx,%eax
 82f8cc9:	c1 f8 1f             	sar    $0x1f,%eax
 82f8ccc:	89 d3                	mov    %edx,%ebx
 82f8cce:	29 c3                	sub    %eax,%ebx
 82f8cd0:	89 d8                	mov    %ebx,%eax
 82f8cd2:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 82f8cd8:	89 ca                	mov    %ecx,%edx
 82f8cda:	29 c2                	sub    %eax,%edx
 82f8cdc:	89 d0                	mov    %edx,%eax
 82f8cde:	85 c0                	test   %eax,%eax
 82f8ce0:	0f 94 c0             	sete   %al
 82f8ce3:	8d 51 01             	lea    0x1(%ecx),%edx
 82f8ce6:	89 15 70 bd 43 09    	mov    %edx,0x943bd70
 82f8cec:	84 c0                	test   %al,%al
 82f8cee:	0f 84 bc 00 00 00    	je     82f8db0 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x124>
 82f8cf4:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8cf7:	83 c0 0c             	add    $0xc,%eax
 82f8cfa:	8b 38                	mov    (%eax),%edi
 82f8cfc:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8cff:	83 c0 08             	add    $0x8,%eax
 82f8d02:	8b 00                	mov    (%eax),%eax
 82f8d04:	89 45 90             	mov    %eax,-0x70(%ebp)
 82f8d07:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8d0a:	83 c0 04             	add    $0x4,%eax
 82f8d0d:	8b 00                	mov    (%eax),%eax
 82f8d0f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 82f8d12:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8d15:	8b 00                	mov    (%eax),%eax
 82f8d17:	89 45 98             	mov    %eax,-0x68(%ebp)
 82f8d1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8d1d:	83 c0 0c             	add    $0xc,%eax
 82f8d20:	8b 00                	mov    (%eax),%eax
 82f8d22:	89 45 9c             	mov    %eax,-0x64(%ebp)
 82f8d25:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8d28:	83 c0 08             	add    $0x8,%eax
 82f8d2b:	8b 00                	mov    (%eax),%eax
 82f8d2d:	89 45 a0             	mov    %eax,-0x60(%ebp)
 82f8d30:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8d33:	83 c0 04             	add    $0x4,%eax
 82f8d36:	8b 30                	mov    (%eax),%esi
 82f8d38:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8d3b:	8b 18                	mov    (%eax),%ebx
 82f8d3d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8d44:	00 
 82f8d45:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 82f8d4c:	00 
 82f8d4d:	c7 44 24 04 00 fb c1 	movl   $0x8c1fb00,0x4(%esp)
 82f8d54:	08 
 82f8d55:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82f8d58:	89 04 24             	mov    %eax,(%esp)
 82f8d5b:	e8 b8 69 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8d60:	dd 45 b0             	fldl   -0x50(%ebp)
 82f8d63:	dd 5c 24 2c          	fstpl  0x2c(%esp)
 82f8d67:	8b 45 14             	mov    0x14(%ebp),%eax
 82f8d6a:	89 44 24 28          	mov    %eax,0x28(%esp)
 82f8d6e:	89 7c 24 24          	mov    %edi,0x24(%esp)
 82f8d72:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 82f8d75:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 82f8d79:	8b 45 94             	mov    -0x6c(%ebp),%eax
 82f8d7c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82f8d80:	8b 55 98             	mov    -0x68(%ebp),%edx
 82f8d83:	89 54 24 18          	mov    %edx,0x18(%esp)
 82f8d87:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 82f8d8a:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82f8d8e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 82f8d91:	89 44 24 10          	mov    %eax,0x10(%esp)
 82f8d95:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82f8d99:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82f8d9d:	c7 44 24 04 40 ee c1 	movl   $0x8c1ee40,0x4(%esp)
 82f8da4:	08 
 82f8da5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82f8da8:	89 04 24             	mov    %eax,(%esp)
 82f8dab:	e8 d8 69 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f8db0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82f8db7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82f8dbe:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 82f8dc5:	eb 1a                	jmp    82f8de1 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x155>
 82f8dc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8dca:	c1 e0 02             	shl    $0x2,%eax
 82f8dcd:	03 45 10             	add    0x10(%ebp),%eax
 82f8dd0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82f8dd3:	c1 e2 02             	shl    $0x2,%edx
 82f8dd6:	03 55 0c             	add    0xc(%ebp),%edx
 82f8dd9:	8b 12                	mov    (%edx),%edx
 82f8ddb:	89 10                	mov    %edx,(%eax)
 82f8ddd:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82f8de1:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 82f8de5:	0f 9e c0             	setle  %al
 82f8de8:	84 c0                	test   %al,%al
 82f8dea:	75 db                	jne    82f8dc7 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x13b>
 82f8dec:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 82f8df3:	eb 7f                	jmp    82f8e74 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x1e8>
 82f8df5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8df8:	83 c0 01             	add    $0x1,%eax
 82f8dfb:	c1 e0 02             	shl    $0x2,%eax
 82f8dfe:	03 45 0c             	add    0xc(%ebp),%eax
 82f8e01:	8b 10                	mov    (%eax),%edx
 82f8e03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8e06:	c1 e0 02             	shl    $0x2,%eax
 82f8e09:	03 45 0c             	add    0xc(%ebp),%eax
 82f8e0c:	8b 00                	mov    (%eax),%eax
 82f8e0e:	89 d1                	mov    %edx,%ecx
 82f8e10:	29 c1                	sub    %eax,%ecx
 82f8e12:	89 c8                	mov    %ecx,%eax
 82f8e14:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82f8e17:	db 45 e4             	fildl  -0x1c(%ebp)
 82f8e1a:	dc 4d b0             	fmull  -0x50(%ebp)
 82f8e1d:	d9 7d ae             	fnstcw -0x52(%ebp)
 82f8e20:	0f b7 45 ae          	movzwl -0x52(%ebp),%eax
 82f8e24:	b4 0c                	mov    $0xc,%ah
 82f8e26:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 82f8e2a:	d9 6d ac             	fldcw  -0x54(%ebp)
 82f8e2d:	db 5d a8             	fistpl -0x58(%ebp)
 82f8e30:	d9 6d ae             	fldcw  -0x52(%ebp)
 82f8e33:	8b 45 a8             	mov    -0x58(%ebp),%eax
 82f8e36:	01 45 dc             	add    %eax,-0x24(%ebp)
 82f8e39:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8e3c:	c1 e0 02             	shl    $0x2,%eax
 82f8e3f:	03 45 10             	add    0x10(%ebp),%eax
 82f8e42:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82f8e45:	c1 e2 02             	shl    $0x2,%edx
 82f8e48:	03 55 0c             	add    0xc(%ebp),%edx
 82f8e4b:	8b 12                	mov    (%edx),%edx
 82f8e4d:	2b 55 dc             	sub    -0x24(%ebp),%edx
 82f8e50:	89 10                	mov    %edx,(%eax)
 82f8e52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8e55:	c1 e0 02             	shl    $0x2,%eax
 82f8e58:	03 45 10             	add    0x10(%ebp),%eax
 82f8e5b:	8b 00                	mov    (%eax),%eax
 82f8e5d:	85 c0                	test   %eax,%eax
 82f8e5f:	79 0f                	jns    82f8e70 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x1e4>
 82f8e61:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8e64:	c1 e0 02             	shl    $0x2,%eax
 82f8e67:	03 45 10             	add    0x10(%ebp),%eax
 82f8e6a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82f8e70:	83 6d e0 01          	subl   $0x1,-0x20(%ebp)
 82f8e74:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8e77:	f7 d0                	not    %eax
 82f8e79:	c1 e8 1f             	shr    $0x1f,%eax
 82f8e7c:	84 c0                	test   %al,%al
 82f8e7e:	0f 85 71 ff ff ff    	jne    82f8df5 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x169>
 82f8e84:	8b 0d 74 bd 43 09    	mov    0x943bd74,%ecx
 82f8e8a:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 82f8e8f:	89 c8                	mov    %ecx,%eax
 82f8e91:	f7 ea                	imul   %edx
 82f8e93:	c1 fa 06             	sar    $0x6,%edx
 82f8e96:	89 c8                	mov    %ecx,%eax
 82f8e98:	c1 f8 1f             	sar    $0x1f,%eax
 82f8e9b:	89 d3                	mov    %edx,%ebx
 82f8e9d:	29 c3                	sub    %eax,%ebx
 82f8e9f:	89 d8                	mov    %ebx,%eax
 82f8ea1:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 82f8ea7:	89 ca                	mov    %ecx,%edx
 82f8ea9:	29 c2                	sub    %eax,%edx
 82f8eab:	89 d0                	mov    %edx,%eax
 82f8ead:	85 c0                	test   %eax,%eax
 82f8eaf:	0f 94 c0             	sete   %al
 82f8eb2:	8d 51 01             	lea    0x1(%ecx),%edx
 82f8eb5:	89 15 74 bd 43 09    	mov    %edx,0x943bd74
 82f8ebb:	84 c0                	test   %al,%al
 82f8ebd:	74 69                	je     82f8f28 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x29c>
 82f8ebf:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8ec2:	83 c0 0c             	add    $0xc,%eax
 82f8ec5:	8b 00                	mov    (%eax),%eax
 82f8ec7:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 82f8eca:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8ecd:	83 c0 08             	add    $0x8,%eax
 82f8ed0:	8b 38                	mov    (%eax),%edi
 82f8ed2:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8ed5:	83 c0 04             	add    $0x4,%eax
 82f8ed8:	8b 30                	mov    (%eax),%esi
 82f8eda:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8edd:	8b 18                	mov    (%eax),%ebx
 82f8edf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8ee6:	00 
 82f8ee7:	c7 44 24 08 14 01 00 	movl   $0x114,0x8(%esp)
 82f8eee:	00 
 82f8eef:	c7 44 24 04 00 fb c1 	movl   $0x8c1fb00,0x4(%esp)
 82f8ef6:	08 
 82f8ef7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82f8efa:	89 04 24             	mov    %eax,(%esp)
 82f8efd:	e8 16 68 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8f02:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 82f8f05:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82f8f09:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82f8f0d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82f8f11:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82f8f15:	c7 44 24 04 b0 ee c1 	movl   $0x8c1eeb0,0x4(%esp)
 82f8f1c:	08 
 82f8f1d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82f8f20:	89 04 24             	mov    %eax,(%esp)
 82f8f23:	e8 60 68 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f8f28:	b8 01 00 00 00       	mov    $0x1,%eax
 82f8f2d:	eb 05                	jmp    82f8f34 <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id+0x2a8>
 82f8f2f:	b8 00 00 00 00       	mov    $0x0,%eax
 82f8f34:	81 c4 ac 00 00 00    	add    $0xac,%esp
 82f8f3a:	5b                   	pop    %ebx
 82f8f3b:	5e                   	pop    %esi
 82f8f3c:	5f                   	pop    %edi
 82f8f3d:	5d                   	pop    %ebp
 82f8f3e:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::ChangeItemRarity @ 0x82f8c8c

/* CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double) */

undefined4
CAutoMarketConditionsControl::ChangeItemRarity(int *param_1,int *param_2,int param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 in_stack_00000018;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  if (param_1[0xe0] == 0) {
    uVar8 = 0;
  }
  else {
    bVar9 = ChangeItemRarity(int*,int*,int,double)::logCount ==
            (ChangeItemRarity(int*,int*,int,double)::logCount / 1000) * 1000;
    ChangeItemRarity(int*,int*,int,double)::logCount =
         ChangeItemRarity(int*,int*,int,double)::logCount + 1;
    if (bVar9) {
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 4);
      uVar3 = *(undefined4 *)param_3;
      iVar4 = param_2[3];
      iVar5 = param_2[2];
      iVar6 = param_2[1];
      iVar7 = *param_2;
      cMyTrace::cMyTrace(local_48,
                         "bool CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)"
                         ,0xf4,0);
      cMyTrace::operator()
                (local_48,
                 "ChangeItemRarity itemRarity[%d,%d,%d,%d], outItemRarity[%d,%d,%d,%d], itemRaritySize(%d), controlRarity(%lf)"
                 ,iVar7,iVar6,iVar5,iVar4,uVar3,uVar2,uVar1,uVar8,param_4._0_4_,
                 CONCAT44(in_stack_00000018,param_4._4_4_));
    }
    local_28 = 0;
    for (local_24 = 2; local_24 < 6; local_24 = local_24 + 1) {
      *(int *)(local_24 * 4 + param_3) = param_2[local_24];
    }
    for (local_24 = 2; -1 < local_24; local_24 = local_24 + -1) {
      local_20 = param_2[local_24 + 1] - param_2[local_24];
      local_28 = local_28 +
                 (int)ROUND((double)local_20 * (double)CONCAT44(in_stack_00000018,param_4._4_4_));
      *(int *)(local_24 * 4 + param_3) = param_2[local_24] - local_28;
      if (*(int *)(local_24 * 4 + param_3) < 0) {
        *(undefined4 *)(local_24 * 4 + param_3) = 0;
      }
    }
    bVar9 = ChangeItemRarity(int*,int*,int,double)::logCount2 ==
            (ChangeItemRarity(int*,int*,int,double)::logCount2 / 1000) * 1000;
    ChangeItemRarity(int*,int*,int,double)::logCount2 =
         ChangeItemRarity(int*,int*,int,double)::logCount2 + 1;
    if (bVar9) {
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 4);
      uVar3 = *(undefined4 *)param_3;
      cMyTrace::cMyTrace(local_38,
                         "bool CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)"
                         ,0x114,0);
      cMyTrace::operator()
                (local_38,"ChangeItemRarity outItemRarity[%d,%d,%d,%d]",uVar3,uVar2,uVar1,uVar8);
    }
    uVar8 = 1;
  }
  return uVar8;
}

```

---

## GetGoldDropAmountRate

```asm
// === 082f89bc CAutoMarketConditionsControl::GetGoldDropAmountRate  [0x082f89bc-0x82f8ae7] ===
 82f89bc:	55                   	push   %ebp
 82f89bd:	89 e5                	mov    %esp,%ebp
 82f89bf:	53                   	push   %ebx
 82f89c0:	83 ec 54             	sub    $0x54,%esp
 82f89c3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82f89ca:	8b 45 08             	mov    0x8(%ebp),%eax
 82f89cd:	8b 00                	mov    (%eax),%eax
 82f89cf:	85 c0                	test   %eax,%eax
 82f89d1:	0f 84 01 01 00 00    	je     82f8ad8 <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii+0x11c>
 82f89d7:	8b 45 08             	mov    0x8(%ebp),%eax
 82f89da:	dd 40 54             	fldl   0x54(%eax)
 82f89dd:	d9 e8                	fld1
 82f89df:	de e1                	fsubp  %st,%st(1)
 82f89e1:	8b 55 0c             	mov    0xc(%ebp),%edx
 82f89e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82f89e7:	83 c2 14             	add    $0x14,%edx
 82f89ea:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 82f89ee:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82f89f1:	db 45 d0             	fildl  -0x30(%ebp)
 82f89f4:	de c9                	fmulp  %st,%st(1)
 82f89f6:	dd 05 70 fc c1 08    	fldl   0x8c1fc70
 82f89fc:	de f9                	fdivrp %st,%st(1)
 82f89fe:	d9 e8                	fld1
 82f8a00:	de c1                	faddp  %st,%st(1)
 82f8a02:	dd 5d f0             	fstpl  -0x10(%ebp)
 82f8a05:	dd 45 f0             	fldl   -0x10(%ebp)
 82f8a08:	d9 ee                	fldz
 82f8a0a:	da e9                	fucompp
 82f8a0c:	df e0                	fnstsw %ax
 82f8a0e:	f6 c4 45             	test   $0x45,%ah
 82f8a11:	0f 94 c0             	sete   %al
 82f8a14:	84 c0                	test   %al,%al
 82f8a16:	75 13                	jne    82f8a2b <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii+0x6f>
 82f8a18:	dd 45 f0             	fldl   -0x10(%ebp)
 82f8a1b:	d9 e8                	fld1
 82f8a1d:	d9 c9                	fxch   %st(1)
 82f8a1f:	da e9                	fucompp
 82f8a21:	df e0                	fnstsw %ax
 82f8a23:	9e                   	sahf
 82f8a24:	0f 97 c0             	seta   %al
 82f8a27:	84 c0                	test   %al,%al
 82f8a29:	74 09                	je     82f8a34 <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii+0x78>
 82f8a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8a2e:	dd 40 54             	fldl   0x54(%eax)
 82f8a31:	dd 5d f0             	fstpl  -0x10(%ebp)
 82f8a34:	db 45 10             	fildl  0x10(%ebp)
 82f8a37:	dc 4d f0             	fmull  -0x10(%ebp)
 82f8a3a:	d9 7d d6             	fnstcw -0x2a(%ebp)
 82f8a3d:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82f8a41:	b4 0c                	mov    $0xc,%ah
 82f8a43:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 82f8a47:	d9 6d d4             	fldcw  -0x2c(%ebp)
 82f8a4a:	db 5d ec             	fistpl -0x14(%ebp)
 82f8a4d:	d9 6d d6             	fldcw  -0x2a(%ebp)
 82f8a50:	8b 0d 7c bd 43 09    	mov    0x943bd7c,%ecx
 82f8a56:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 82f8a5b:	89 c8                	mov    %ecx,%eax
 82f8a5d:	f7 ea                	imul   %edx
 82f8a5f:	c1 fa 06             	sar    $0x6,%edx
 82f8a62:	89 c8                	mov    %ecx,%eax
 82f8a64:	c1 f8 1f             	sar    $0x1f,%eax
 82f8a67:	89 d3                	mov    %edx,%ebx
 82f8a69:	29 c3                	sub    %eax,%ebx
 82f8a6b:	89 d8                	mov    %ebx,%eax
 82f8a6d:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 82f8a73:	89 ca                	mov    %ecx,%edx
 82f8a75:	29 c2                	sub    %eax,%edx
 82f8a77:	89 d0                	mov    %edx,%eax
 82f8a79:	85 c0                	test   %eax,%eax
 82f8a7b:	0f 94 c0             	sete   %al
 82f8a7e:	8d 51 01             	lea    0x1(%ecx),%edx
 82f8a81:	89 15 7c bd 43 09    	mov    %edx,0x943bd7c
 82f8a87:	84 c0                	test   %al,%al
 82f8a89:	74 53                	je     82f8ade <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii+0x122>
 82f8a8b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8a92:	00 
 82f8a93:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 82f8a9a:	00 
 82f8a9b:	c7 44 24 04 a0 fb c1 	movl   $0x8c1fba0,0x4(%esp)
 82f8aa2:	08 
 82f8aa3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f8aa6:	89 04 24             	mov    %eax,(%esp)
 82f8aa9:	e8 6a 6c 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8aae:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8ab1:	89 44 24 14          	mov    %eax,0x14(%esp)
 82f8ab5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f8ab8:	89 44 24 10          	mov    %eax,0x10(%esp)
 82f8abc:	dd 45 f0             	fldl   -0x10(%ebp)
 82f8abf:	dd 5c 24 08          	fstpl  0x8(%esp)
 82f8ac3:	c7 44 24 04 b8 ed c1 	movl   $0x8c1edb8,0x4(%esp)
 82f8aca:	08 
 82f8acb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82f8ace:	89 04 24             	mov    %eax,(%esp)
 82f8ad1:	e8 b2 6c 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f8ad6:	eb 06                	jmp    82f8ade <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii+0x122>
 82f8ad8:	8b 45 10             	mov    0x10(%ebp),%eax
 82f8adb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82f8ade:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82f8ae1:	83 c4 54             	add    $0x54,%esp
 82f8ae4:	5b                   	pop    %ebx
 82f8ae5:	5d                   	pop    %ebp
 82f8ae6:	c3                   	ret
 82f8ae7:	90                   	nop

```

```c
// CAutoMarketConditionsControl::GetGoldDropAmountRate @ 0x82f89bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int) */

int __thiscall
CAutoMarketConditionsControl::GetGoldDropAmountRate
          (CAutoMarketConditionsControl *this,int param_1,int param_2)

{
  bool bVar1;
  cMyTrace local_28 [16];
  int local_18;
  double local_14;
  
  if (*(int *)this == 0) {
    local_18 = param_2;
  }
  else {
    local_14 = ((double)*(int *)(this + (param_1 + 0x14) * 4 + 0xc) *
               (1.0 - *(double *)(this + 0x54))) / _DAT_08c1fc70 + 1.0;
    if ((local_14 < 0.0) || (1.0 < local_14)) {
      local_14 = *(double *)(this + 0x54);
    }
    local_18 = (int)ROUND((double)param_2 * local_14);
    bVar1 = GetGoldDropAmountRate(int,int)::logCount ==
            (GetGoldDropAmountRate(int,int)::logCount / 1000) * 1000;
    GetGoldDropAmountRate(int,int)::logCount = GetGoldDropAmountRate(int,int)::logCount + 1;
    if (bVar1) {
      cMyTrace::cMyTrace(local_28,
                         "int CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int)",0xce,0)
      ;
      cMyTrace::operator()
                (local_28,"goldDropAmountRate(%lf) gold(%d), baseGold(%d)",local_14,local_18,param_2
                );
    }
  }
  return local_18;
}

```

---

## GetItemDropRate

```asm
// === 082f8ae8 CAutoMarketConditionsControl::GetItemDropRate  [0x082f8ae8-0x82f8c8b] ===
 82f8ae8:	55                   	push   %ebp
 82f8ae9:	89 e5                	mov    %esp,%ebp
 82f8aeb:	53                   	push   %ebx
 82f8aec:	81 ec 84 00 00 00    	sub    $0x84,%esp
 82f8af2:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 82f8af7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f8afa:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8afd:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 82f8b03:	85 c0                	test   %eax,%eax
 82f8b05:	0f 84 6f 01 00 00    	je     82f8c7a <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x192>
 82f8b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8b0e:	05 dc 03 00 00       	add    $0x3dc,%eax
 82f8b13:	89 04 24             	mov    %eax,(%esp)
 82f8b16:	e8 a5 56 d9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 82f8b1b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82f8b1e:	7e 06                	jle    82f8b26 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x3e>
 82f8b20:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82f8b24:	79 07                	jns    82f8b2d <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x45>
 82f8b26:	b8 01 00 00 00       	mov    $0x1,%eax
 82f8b2b:	eb 05                	jmp    82f8b32 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x4a>
 82f8b2d:	b8 00 00 00 00       	mov    $0x0,%eax
 82f8b32:	84 c0                	test   %al,%al
 82f8b34:	74 45                	je     82f8b7b <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x93>
 82f8b36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8b3d:	00 
 82f8b3e:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 82f8b45:	00 
 82f8b46:	c7 44 24 04 60 fb c1 	movl   $0x8c1fb60,0x4(%esp)
 82f8b4d:	08 
 82f8b4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82f8b51:	89 04 24             	mov    %eax,(%esp)
 82f8b54:	e8 bf 6b 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8b59:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8b5c:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f8b60:	c7 44 24 04 e8 ed c1 	movl   $0x8c1ede8,0x4(%esp)
 82f8b67:	08 
 82f8b68:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82f8b6b:	89 04 24             	mov    %eax,(%esp)
 82f8b6e:	e8 15 6c 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f8b73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f8b76:	e9 02 01 00 00       	jmp    82f8c7d <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x195>
 82f8b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8b7e:	8b 55 08             	mov    0x8(%ebp),%edx
 82f8b81:	81 c2 dc 03 00 00    	add    $0x3dc,%edx
 82f8b87:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f8b8b:	89 14 24             	mov    %edx,(%esp)
 82f8b8e:	e8 49 56 d9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 82f8b93:	8b 00                	mov    (%eax),%eax
 82f8b95:	85 c0                	test   %eax,%eax
 82f8b97:	0f 95 c0             	setne  %al
 82f8b9a:	84 c0                	test   %al,%al
 82f8b9c:	74 44                	je     82f8be2 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0xfa>
 82f8b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8ba1:	dd 80 d4 03 00 00    	fldl   0x3d4(%eax)
 82f8ba7:	d9 e8                	fld1
 82f8ba9:	de e1                	fsubp  %st,%st(1)
 82f8bab:	dd 5d a8             	fstpl  -0x58(%ebp)
 82f8bae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8bb1:	8b 55 08             	mov    0x8(%ebp),%edx
 82f8bb4:	81 c2 dc 03 00 00    	add    $0x3dc,%edx
 82f8bba:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f8bbe:	89 14 24             	mov    %edx,(%esp)
 82f8bc1:	e8 16 56 d9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 82f8bc6:	8b 00                	mov    (%eax),%eax
 82f8bc8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82f8bcb:	db 45 c0             	fildl  -0x40(%ebp)
 82f8bce:	dd 45 a8             	fldl   -0x58(%ebp)
 82f8bd1:	de c9                	fmulp  %st,%st(1)
 82f8bd3:	dd 05 70 fc c1 08    	fldl   0x8c1fc70
 82f8bd9:	de f9                	fdivrp %st,%st(1)
 82f8bdb:	d9 e8                	fld1
 82f8bdd:	de c1                	faddp  %st,%st(1)
 82f8bdf:	d9 5d f4             	fstps  -0xc(%ebp)
 82f8be2:	8b 0d 78 bd 43 09    	mov    0x943bd78,%ecx
 82f8be8:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 82f8bed:	89 c8                	mov    %ecx,%eax
 82f8bef:	f7 ea                	imul   %edx
 82f8bf1:	c1 fa 06             	sar    $0x6,%edx
 82f8bf4:	89 c8                	mov    %ecx,%eax
 82f8bf6:	c1 f8 1f             	sar    $0x1f,%eax
 82f8bf9:	89 d3                	mov    %edx,%ebx
 82f8bfb:	29 c3                	sub    %eax,%ebx
 82f8bfd:	89 d8                	mov    %ebx,%eax
 82f8bff:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 82f8c05:	89 ca                	mov    %ecx,%edx
 82f8c07:	29 c2                	sub    %eax,%edx
 82f8c09:	89 d0                	mov    %edx,%eax
 82f8c0b:	85 c0                	test   %eax,%eax
 82f8c0d:	0f 94 c0             	sete   %al
 82f8c10:	8d 51 01             	lea    0x1(%ecx),%edx
 82f8c13:	89 15 78 bd 43 09    	mov    %edx,0x943bd78
 82f8c19:	84 c0                	test   %al,%al
 82f8c1b:	74 5d                	je     82f8c7a <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi+0x192>
 82f8c1d:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8c20:	dd 80 d4 03 00 00    	fldl   0x3d4(%eax)
 82f8c26:	dd 5d b0             	fstpl  -0x50(%ebp)
 82f8c29:	d9 45 f4             	flds   -0xc(%ebp)
 82f8c2c:	dd 5d b8             	fstpl  -0x48(%ebp)
 82f8c2f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8c36:	00 
 82f8c37:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 82f8c3e:	00 
 82f8c3f:	c7 44 24 04 60 fb c1 	movl   $0x8c1fb60,0x4(%esp)
 82f8c46:	08 
 82f8c47:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f8c4a:	89 04 24             	mov    %eax,(%esp)
 82f8c4d:	e8 c6 6a 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8c52:	dd 45 b0             	fldl   -0x50(%ebp)
 82f8c55:	dd 5c 24 14          	fstpl  0x14(%esp)
 82f8c59:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8c5c:	89 44 24 10          	mov    %eax,0x10(%esp)
 82f8c60:	dd 45 b8             	fldl   -0x48(%ebp)
 82f8c63:	dd 5c 24 08          	fstpl  0x8(%esp)
 82f8c67:	c7 44 24 04 10 ee c1 	movl   $0x8c1ee10,0x4(%esp)
 82f8c6e:	08 
 82f8c6f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f8c72:	89 04 24             	mov    %eax,(%esp)
 82f8c75:	e8 0e 6b 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f8c7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f8c7d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 82f8c80:	d9 45 a4             	flds   -0x5c(%ebp)
 82f8c83:	81 c4 84 00 00 00    	add    $0x84,%esp
 82f8c89:	5b                   	pop    %ebx
 82f8c8a:	5d                   	pop    %ebp
 82f8c8b:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::GetItemDropRate @ 0x82f8ae8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::GetItemDropRate(int) */

longdouble __thiscall
CAutoMarketConditionsControl::GetItemDropRate(CAutoMarketConditionsControl *this,int param_1)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  float local_10;
  
  local_10 = 1.0;
  if (*(int *)(this + 0x380) != 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x3dc));
    if ((param_1 < iVar3) && (-1 < param_1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      cMyTrace::cMyTrace(local_30,"float CAutoMarketConditionsControl::GetItemDropRate(int)",0xde,0)
      ;
      cMyTrace::operator()(local_30,"GetItemDropRate() error levelRange(%d)",param_1);
    }
    else {
      piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x3dc),param_1);
      if (*piVar4 != 0) {
        dVar1 = *(double *)(this + 0x3d4);
        piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(this + 0x3dc),param_1);
        local_10 = ((float)(1.0 - dVar1) * (float)*piVar4) / (float)_DAT_08c1fc70 + 1.0;
      }
      bVar5 = GetItemDropRate(int)::logCount == (GetItemDropRate(int)::logCount / 1000) * 1000;
      GetItemDropRate(int)::logCount = GetItemDropRate(int)::logCount + 1;
      if (bVar5) {
        uVar2 = *(undefined8 *)(this + 0x3d4);
        dVar1 = (double)local_10;
        cMyTrace::cMyTrace(local_20,"float CAutoMarketConditionsControl::GetItemDropRate(int)",0xe8,
                           0);
        cMyTrace::operator()
                  (local_20,"itemDropRate(%f), levelRange(%d), curRate(%lf)",dVar1,param_1,uVar2);
      }
    }
  }
  return (longdouble)local_10;
}

```

---

## LoadDatabase

```asm
// === 082f8684 CAutoMarketConditionsControl::LoadDatabase  [0x082f8684-0x82f89bb] ===
 82f8684:	55                   	push   %ebp
 82f8685:	89 e5                	mov    %esp,%ebp
 82f8687:	57                   	push   %edi
 82f8688:	56                   	push   %esi
 82f8689:	53                   	push   %ebx
 82f868a:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 82f8690:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82f8697:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82f869e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f86a1:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 82f86a5:	84 c0                	test   %al,%al
 82f86a7:	74 10                	je     82f86b9 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x35>
 82f86a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f86ac:	8b 50 04             	mov    0x4(%eax),%edx
 82f86af:	8b 00                	mov    (%eax),%eax
 82f86b1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82f86b4:	89 55 dc             	mov    %edx,-0x24(%ebp)
 82f86b7:	eb 4b                	jmp    82f8704 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x80>
 82f86b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f86bc:	8b 48 3c             	mov    0x3c(%eax),%ecx
 82f86bf:	8b 58 40             	mov    0x40(%eax),%ebx
 82f86c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f86c5:	8b 50 48             	mov    0x48(%eax),%edx
 82f86c8:	8b 40 44             	mov    0x44(%eax),%eax
 82f86cb:	01 c8                	add    %ecx,%eax
 82f86cd:	11 da                	adc    %ebx,%edx
 82f86cf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82f86d2:	8b 71 10             	mov    0x10(%ecx),%esi
 82f86d5:	8b 79 14             	mov    0x14(%ecx),%edi
 82f86d8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82f86db:	8b 59 1c             	mov    0x1c(%ecx),%ebx
 82f86de:	8b 49 18             	mov    0x18(%ecx),%ecx
 82f86e1:	01 f1                	add    %esi,%ecx
 82f86e3:	11 fb                	adc    %edi,%ebx
 82f86e5:	89 c6                	mov    %eax,%esi
 82f86e7:	89 d7                	mov    %edx,%edi
 82f86e9:	29 ce                	sub    %ecx,%esi
 82f86eb:	19 df                	sbb    %ebx,%edi
 82f86ed:	89 f1                	mov    %esi,%ecx
 82f86ef:	89 fb                	mov    %edi,%ebx
 82f86f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f86f4:	8b 50 24             	mov    0x24(%eax),%edx
 82f86f7:	8b 40 20             	mov    0x20(%eax),%eax
 82f86fa:	01 c8                	add    %ecx,%eax
 82f86fc:	11 da                	adc    %ebx,%edx
 82f86fe:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82f8701:	89 55 dc             	mov    %edx,-0x24(%ebp)
 82f8704:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8707:	8d 78 54             	lea    0x54(%eax),%edi
 82f870a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 82f870d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8710:	8b 48 30             	mov    0x30(%eax),%ecx
 82f8713:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8716:	8d 70 04             	lea    0x4(%eax),%esi
 82f8719:	df 6d d8             	fildll -0x28(%ebp)
 82f871c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f871f:	8b 50 0c             	mov    0xc(%eax),%edx
 82f8722:	8b 40 08             	mov    0x8(%eax),%eax
 82f8725:	89 45 b8             	mov    %eax,-0x48(%ebp)
 82f8728:	89 55 bc             	mov    %edx,-0x44(%ebp)
 82f872b:	df 6d b8             	fildll -0x48(%ebp)
 82f872e:	85 d2                	test   %edx,%edx
 82f8730:	79 08                	jns    82f873a <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0xb6>
 82f8732:	db 2d 60 fc c1 08    	fldt   0x8c1fc60
 82f8738:	de c1                	faddp  %st,%st(1)
 82f873a:	dd 5d c0             	fstpl  -0x40(%ebp)
 82f873d:	dd 45 c0             	fldl   -0x40(%ebp)
 82f8740:	d9 c9                	fxch   %st(1)
 82f8742:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 82f8746:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 82f874a:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82f874e:	89 74 24 10          	mov    %esi,0x10(%esp)
 82f8752:	dd 5c 24 08          	fstpl  0x8(%esp)
 82f8756:	dd 1c 24             	fstpl  (%esp)
 82f8759:	e8 e1 fc ff ff       	call   82f843f <_Z22GetMarketConditionRateddPdiRiRd>
 82f875e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8761:	8d b8 d4 03 00 00    	lea    0x3d4(%eax),%edi
 82f8767:	8b 45 08             	mov    0x8(%ebp),%eax
 82f876a:	8d b0 80 03 00 00    	lea    0x380(%eax),%esi
 82f8770:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8773:	8b 48 34             	mov    0x34(%eax),%ecx
 82f8776:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8779:	8d 98 84 03 00 00    	lea    0x384(%eax),%ebx
 82f877f:	df 6d d8             	fildll -0x28(%ebp)
 82f8782:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8785:	8b 50 0c             	mov    0xc(%eax),%edx
 82f8788:	8b 40 08             	mov    0x8(%eax),%eax
 82f878b:	89 45 b8             	mov    %eax,-0x48(%ebp)
 82f878e:	89 55 bc             	mov    %edx,-0x44(%ebp)
 82f8791:	df 6d b8             	fildll -0x48(%ebp)
 82f8794:	85 d2                	test   %edx,%edx
 82f8796:	79 08                	jns    82f87a0 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x11c>
 82f8798:	db 2d 60 fc c1 08    	fldt   0x8c1fc60
 82f879e:	de c1                	faddp  %st,%st(1)
 82f87a0:	dd 5d c0             	fstpl  -0x40(%ebp)
 82f87a3:	dd 45 c0             	fldl   -0x40(%ebp)
 82f87a6:	d9 c9                	fxch   %st(1)
 82f87a8:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 82f87ac:	89 74 24 18          	mov    %esi,0x18(%esp)
 82f87b0:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82f87b4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82f87b8:	dd 5c 24 08          	fstpl  0x8(%esp)
 82f87bc:	dd 1c 24             	fstpl  (%esp)
 82f87bf:	e8 7b fc ff ff       	call   82f843f <_Z22GetMarketConditionRateddPdiRiRd>
 82f87c4:	8b 45 08             	mov    0x8(%ebp),%eax
 82f87c7:	8d b8 3c 04 00 00    	lea    0x43c(%eax),%edi
 82f87cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82f87d0:	8d b0 e8 03 00 00    	lea    0x3e8(%eax),%esi
 82f87d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f87d9:	8b 48 38             	mov    0x38(%eax),%ecx
 82f87dc:	8b 45 08             	mov    0x8(%ebp),%eax
 82f87df:	8d 98 ec 03 00 00    	lea    0x3ec(%eax),%ebx
 82f87e5:	df 6d d8             	fildll -0x28(%ebp)
 82f87e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f87eb:	8b 50 0c             	mov    0xc(%eax),%edx
 82f87ee:	8b 40 08             	mov    0x8(%eax),%eax
 82f87f1:	89 45 b8             	mov    %eax,-0x48(%ebp)
 82f87f4:	89 55 bc             	mov    %edx,-0x44(%ebp)
 82f87f7:	df 6d b8             	fildll -0x48(%ebp)
 82f87fa:	85 d2                	test   %edx,%edx
 82f87fc:	79 08                	jns    82f8806 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x182>
 82f87fe:	db 2d 60 fc c1 08    	fldt   0x8c1fc60
 82f8804:	de c1                	faddp  %st,%st(1)
 82f8806:	dd 5d c0             	fstpl  -0x40(%ebp)
 82f8809:	dd 45 c0             	fldl   -0x40(%ebp)
 82f880c:	d9 c9                	fxch   %st(1)
 82f880e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 82f8812:	89 74 24 18          	mov    %esi,0x18(%esp)
 82f8816:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82f881a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82f881e:	dd 5c 24 08          	fstpl  0x8(%esp)
 82f8822:	dd 1c 24             	fstpl  (%esp)
 82f8825:	e8 15 fc ff ff       	call   82f843f <_Z22GetMarketConditionRateddPdiRiRd>
 82f882a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f882d:	8b 50 38             	mov    0x38(%eax),%edx
 82f8830:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8833:	8b 80 e8 03 00 00    	mov    0x3e8(%eax),%eax
 82f8839:	39 c2                	cmp    %eax,%edx
 82f883b:	74 0b                	je     82f8848 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x1c4>
 82f883d:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8840:	89 04 24             	mov    %eax,(%esp)
 82f8843:	e8 60 fd ff ff       	call   82f85a8 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEv>
 82f8848:	8b 45 08             	mov    0x8(%ebp),%eax
 82f884b:	8b 80 e8 03 00 00    	mov    0x3e8(%eax),%eax
 82f8851:	89 45 9c             	mov    %eax,-0x64(%ebp)
 82f8854:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8857:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 82f885d:	89 45 a0             	mov    %eax,-0x60(%ebp)
 82f8860:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8863:	8b 38                	mov    (%eax),%edi
 82f8865:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8868:	8b 58 08             	mov    0x8(%eax),%ebx
 82f886b:	8b 70 0c             	mov    0xc(%eax),%esi
 82f886e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82f8875:	00 
 82f8876:	c7 44 24 08 ae 00 00 	movl   $0xae,0x8(%esp)
 82f887d:	00 
 82f887e:	c7 44 24 04 00 fc c1 	movl   $0x8c1fc00,0x4(%esp)
 82f8885:	08 
 82f8886:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82f8889:	89 04 24             	mov    %eax,(%esp)
 82f888c:	e8 87 6e 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82f8891:	8b 45 9c             	mov    -0x64(%ebp),%eax
 82f8894:	89 44 24 20          	mov    %eax,0x20(%esp)
 82f8898:	8b 55 a0             	mov    -0x60(%ebp),%edx
 82f889b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82f889f:	89 7c 24 18          	mov    %edi,0x18(%esp)
 82f88a3:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 82f88a7:	89 74 24 14          	mov    %esi,0x14(%esp)
 82f88ab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f88ae:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82f88b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f88b5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f88b9:	c7 44 24 04 98 ed c1 	movl   $0x8c1ed98,0x4(%esp)
 82f88c0:	08 
 82f88c1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82f88c4:	89 04 24             	mov    %eax,(%esp)
 82f88c7:	e8 bc 6e 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82f88cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82f88cf:	8b 55 dc             	mov    -0x24(%ebp),%edx
 82f88d2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82f88d5:	8b 59 0c             	mov    0xc(%ecx),%ebx
 82f88d8:	8b 49 08             	mov    0x8(%ecx),%ecx
 82f88db:	29 c8                	sub    %ecx,%eax
 82f88dd:	19 da                	sbb    %ebx,%edx
 82f88df:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82f88e2:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 82f88e5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82f88e9:	79 0e                	jns    82f88f9 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x275>
 82f88eb:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82f88f2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82f88f9:	e8 83 38 dd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82f88fe:	89 04 24             	mov    %eax,(%esp)
 82f8901:	e8 c4 21 e5 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 82f8906:	83 f8 01             	cmp    $0x1,%eax
 82f8909:	0f 94 c0             	sete   %al
 82f890c:	84 c0                	test   %al,%al
 82f890e:	0f 84 98 00 00 00    	je     82f89ac <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL+0x328>
 82f8914:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8917:	8b 80 e8 03 00 00    	mov    0x3e8(%eax),%eax
 82f891d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 82f8920:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8923:	8b 80 80 03 00 00    	mov    0x380(%eax),%eax
 82f8929:	89 45 a8             	mov    %eax,-0x58(%ebp)
 82f892c:	8b 45 08             	mov    0x8(%ebp),%eax
 82f892f:	8b 00                	mov    (%eax),%eax
 82f8931:	89 45 ac             	mov    %eax,-0x54(%ebp)
 82f8934:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8937:	8b 70 08             	mov    0x8(%eax),%esi
 82f893a:	8b 78 0c             	mov    0xc(%eax),%edi
 82f893d:	89 75 b0             	mov    %esi,-0x50(%ebp)
 82f8940:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 82f8943:	8b 75 e0             	mov    -0x20(%ebp),%esi
 82f8946:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 82f8949:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f894c:	8b 48 44             	mov    0x44(%eax),%ecx
 82f894f:	8b 58 48             	mov    0x48(%eax),%ebx
 82f8952:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8955:	89 45 90             	mov    %eax,-0x70(%ebp)
 82f8958:	8b 55 90             	mov    -0x70(%ebp),%edx
 82f895b:	8b 42 3c             	mov    0x3c(%edx),%eax
 82f895e:	8b 52 40             	mov    0x40(%edx),%edx
 82f8961:	89 45 90             	mov    %eax,-0x70(%ebp)
 82f8964:	89 55 94             	mov    %edx,-0x6c(%ebp)
 82f8967:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 82f896a:	89 44 24 28          	mov    %eax,0x28(%esp)
 82f896e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 82f8971:	89 54 24 24          	mov    %edx,0x24(%esp)
 82f8975:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82f8978:	89 44 24 20          	mov    %eax,0x20(%esp)
 82f897c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82f897f:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 82f8982:	89 44 24 18          	mov    %eax,0x18(%esp)
 82f8986:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82f898a:	89 74 24 10          	mov    %esi,0x10(%esp)
 82f898e:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82f8992:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82f8996:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82f899a:	8b 55 90             	mov    -0x70(%ebp),%edx
 82f899d:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 82f89a0:	89 14 24             	mov    %edx,(%esp)
 82f89a3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f89a7:	e8 c4 b3 13 00       	call   8433d70 <_ZN36DB_UpdateAutoMarketConditionsControl11makeRequestEyyyyiii>
 82f89ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82f89b1:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 82f89b7:	5b                   	pop    %ebx
 82f89b8:	5e                   	pop    %esi
 82f89b9:	5f                   	pop    %edi
 82f89ba:	5d                   	pop    %ebp
 82f89bb:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::LoadDatabase @ 0x82f8684

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*) */

undefined4 __thiscall
CAutoMarketConditionsControl::LoadDatabase
          (CAutoMarketConditionsControl *this,SIG_AUTO_MARKET_CONDITIONS_CONTROL *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  CEnvironment *this_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longdouble lVar10;
  cMyTrace local_3c [16];
  uint local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  
  if (param_1[0x68] == (SIG_AUTO_MARKET_CONDITIONS_CONTROL)0x0) {
    uVar6 = *(uint *)(param_1 + 0x44) + *(uint *)(param_1 + 0x3c);
    uVar8 = *(uint *)(param_1 + 0x18) + *(uint *)(param_1 + 0x10);
    uVar9 = uVar6 - uVar8;
    local_2c = *(uint *)(param_1 + 0x20) + uVar9;
    iStack_28 = *(int *)(param_1 + 0x24) +
                (((*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x40) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x44),*(uint *)(param_1 + 0x3c))) -
                 (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x10)))) -
                (uint)(uVar6 < uVar8)) + (uint)CARRY4(*(uint *)(param_1 + 0x20),uVar9);
  }
  else {
    iStack_28 = *(int *)(param_1 + 4);
    local_2c = *(uint *)param_1;
  }
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 4),
             *(int *)(param_1 + 0x30),(int *)this,(double *)(this + 0x54));
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 900),
             *(int *)(param_1 + 0x34),(int *)(this + 0x380),(double *)(this + 0x3d4));
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 0x3ec),
             *(int *)(param_1 + 0x38),(int *)(this + 1000),(double *)(this + 0x43c));
  if (*(int *)(param_1 + 0x38) != *(int *)(this + 1000)) {
    SendNotiSetDurability(this);
  }
  uVar1 = *(undefined4 *)(this + 1000);
  uVar2 = *(undefined4 *)(this + 0x380);
  uVar3 = *(undefined4 *)this;
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  cMyTrace::cMyTrace(local_3c,
                     "int CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*)"
                     ,0xae,0);
  cMyTrace::operator()
            (local_3c,"LoadDatabase() %qd %u %d %d %d",local_2c,iStack_28,uVar4,uVar5,uVar3,uVar2,
             uVar1);
  local_24 = local_2c - *(uint *)(param_1 + 8);
  local_20 = (iStack_28 - *(int *)(param_1 + 0xc)) - (uint)(local_2c < *(uint *)(param_1 + 8));
  if (local_20 < 0) {
    local_24 = 0;
    local_20 = 0;
  }
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar7 = CEnvironment::get_channel_no(this_00);
  if (iVar7 == 1) {
    DB_UpdateAutoMarketConditionsControl::makeRequest
              (*(ulonglong *)(param_1 + 0x3c),*(ulonglong *)(param_1 + 0x44),
               CONCAT44(local_20,local_24),*(ulonglong *)(param_1 + 8),*(int *)this,
               *(int *)(this + 0x380),*(int *)(this + 1000));
  }
  return 0;
}

```

---

## LoadScript

```asm
// === 082f815c CAutoMarketConditionsControl::LoadScript  [0x082f815c-0x82f843e] ===
 82f815c:	55                   	push   %ebp
 82f815d:	89 e5                	mov    %esp,%ebp
 82f815f:	56                   	push   %esi
 82f8160:	53                   	push   %ebx
 82f8161:	83 ec 30             	sub    $0x30,%esp
 82f8164:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8167:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f816b:	c7 04 24 c3 ec c1 08 	movl   $0x8c1ecc3,(%esp)
 82f8172:	e8 b2 3b 5c 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 82f8177:	83 f0 01             	xor    $0x1,%eax
 82f817a:	84 c0                	test   %al,%al
 82f817c:	74 0a                	je     82f8188 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2c>
 82f817e:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 82f8183:	e9 ae 02 00 00       	jmp    82f8436 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2da>
 82f8188:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f818b:	89 04 24             	mov    %eax,(%esp)
 82f818e:	e8 3d e4 40 00       	call   87065d0 <_ZNSsC1Ev>
 82f8193:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82f819a:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 82f819e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82f81a5:	00 
 82f81a6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f81a9:	89 04 24             	mov    %eax,(%esp)
 82f81ac:	e8 ae 46 5c 00       	call   88bc85f <_Z8ScanTypeRSsb>
 82f81b1:	83 f0 01             	xor    $0x1,%eax
 82f81b4:	84 c0                	test   %al,%al
 82f81b6:	0f 85 4c 02 00 00    	jne    82f8408 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2ac>
 82f81bc:	c7 44 24 04 c4 ec c1 	movl   $0x8c1ecc4,0x4(%esp)
 82f81c3:	08 
 82f81c4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f81c7:	89 04 24             	mov    %eax,(%esp)
 82f81ca:	e8 d2 87 d8 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82f81cf:	84 c0                	test   %al,%al
 82f81d1:	74 4f                	je     82f8222 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0xc6>
 82f81d3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82f81da:	eb 36                	jmp    82f8212 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0xb6>
 82f81dc:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 82f81df:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f81e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f81e6:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 82f81ed:	e8 5f 42 5c 00       	call   88bc451 <_Z9ScanFloatiPb>
 82f81f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82f81f5:	dd 5c d8 04          	fstpl  0x4(%eax,%ebx,8)
 82f81f9:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f81fd:	83 f0 01             	xor    $0x1,%eax
 82f8200:	84 c0                	test   %al,%al
 82f8202:	74 0a                	je     82f820e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0xb2>
 82f8204:	bb 2f 00 00 00       	mov    $0x2f,%ebx
 82f8209:	e9 1d 02 00 00       	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f820e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 82f8212:	83 7d e8 09          	cmpl   $0x9,-0x18(%ebp)
 82f8216:	0f 9e c0             	setle  %al
 82f8219:	84 c0                	test   %al,%al
 82f821b:	75 bf                	jne    82f81dc <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x80>
 82f821d:	e9 7c ff ff ff       	jmp    82f819e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x42>
 82f8222:	c7 44 24 04 e8 ec c1 	movl   $0x8c1ece8,0x4(%esp)
 82f8229:	08 
 82f822a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f822d:	89 04 24             	mov    %eax,(%esp)
 82f8230:	e8 6c 87 d8 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82f8235:	84 c0                	test   %al,%al
 82f8237:	0f 84 88 00 00 00    	je     82f82c5 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x169>
 82f823d:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8240:	83 c0 5c             	add    $0x5c,%eax
 82f8243:	c7 44 24 08 24 03 00 	movl   $0x324,0x8(%esp)
 82f824a:	00 
 82f824b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82f8252:	00 
 82f8253:	89 04 24             	mov    %eax,(%esp)
 82f8256:	e8 65 5a d8 ff       	call   807dcc0 <memset@plt>
 82f825b:	eb 01                	jmp    82f825e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x102>
 82f825d:	90                   	nop
 82f825e:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f8261:	89 04 24             	mov    %eax,(%esp)
 82f8264:	e8 12 41 5c 00       	call   88bc37b <_Z7ScanIntPb>
 82f8269:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82f826c:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f8270:	83 f0 01             	xor    $0x1,%eax
 82f8273:	84 c0                	test   %al,%al
 82f8275:	74 06                	je     82f827d <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x121>
 82f8277:	90                   	nop
 82f8278:	e9 21 ff ff ff       	jmp    82f819e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x42>
 82f827d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8280:	85 c0                	test   %eax,%eax
 82f8282:	7e 0a                	jle    82f828e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x132>
 82f8284:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8287:	3d c8 00 00 00       	cmp    $0xc8,%eax
 82f828c:	7e 0a                	jle    82f8298 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x13c>
 82f828e:	bb 3c 00 00 00       	mov    $0x3c,%ebx
 82f8293:	e9 93 01 00 00       	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f8298:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82f829b:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f829e:	89 04 24             	mov    %eax,(%esp)
 82f82a1:	e8 d5 40 5c 00       	call   88bc37b <_Z7ScanIntPb>
 82f82a6:	8b 55 08             	mov    0x8(%ebp),%edx
 82f82a9:	8d 4b 14             	lea    0x14(%ebx),%ecx
 82f82ac:	89 44 8a 0c          	mov    %eax,0xc(%edx,%ecx,4)
 82f82b0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f82b4:	83 f0 01             	xor    $0x1,%eax
 82f82b7:	84 c0                	test   %al,%al
 82f82b9:	74 a2                	je     82f825d <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x101>
 82f82bb:	bb 40 00 00 00       	mov    $0x40,%ebx
 82f82c0:	e9 66 01 00 00       	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f82c5:	c7 44 24 04 18 ed c1 	movl   $0x8c1ed18,0x4(%esp)
 82f82cc:	08 
 82f82cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f82d0:	89 04 24             	mov    %eax,(%esp)
 82f82d3:	e8 c9 86 d8 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82f82d8:	84 c0                	test   %al,%al
 82f82da:	74 52                	je     82f832e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x1d2>
 82f82dc:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82f82e3:	eb 39                	jmp    82f831e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x1c2>
 82f82e5:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 82f82e8:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f82eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f82ef:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 82f82f6:	e8 56 41 5c 00       	call   88bc451 <_Z9ScanFloatiPb>
 82f82fb:	8b 45 08             	mov    0x8(%ebp),%eax
 82f82fe:	8d 53 70             	lea    0x70(%ebx),%edx
 82f8301:	dd 5c d0 04          	fstpl  0x4(%eax,%edx,8)
 82f8305:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f8309:	83 f0 01             	xor    $0x1,%eax
 82f830c:	84 c0                	test   %al,%al
 82f830e:	74 0a                	je     82f831a <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x1be>
 82f8310:	bb 49 00 00 00       	mov    $0x49,%ebx
 82f8315:	e9 11 01 00 00       	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f831a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 82f831e:	83 7d ec 09          	cmpl   $0x9,-0x14(%ebp)
 82f8322:	0f 9e c0             	setle  %al
 82f8325:	84 c0                	test   %al,%al
 82f8327:	75 bc                	jne    82f82e5 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x189>
 82f8329:	e9 70 fe ff ff       	jmp    82f819e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x42>
 82f832e:	c7 44 24 04 3c ed c1 	movl   $0x8c1ed3c,0x4(%esp)
 82f8335:	08 
 82f8336:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f8339:	89 04 24             	mov    %eax,(%esp)
 82f833c:	e8 60 86 d8 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82f8341:	84 c0                	test   %al,%al
 82f8343:	74 56                	je     82f839b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x23f>
 82f8345:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82f834c:	eb 01                	jmp    82f834f <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x1f3>
 82f834e:	90                   	nop
 82f834f:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f8352:	89 04 24             	mov    %eax,(%esp)
 82f8355:	e8 21 40 5c 00       	call   88bc37b <_Z7ScanIntPb>
 82f835a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82f835d:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f8361:	83 f0 01             	xor    $0x1,%eax
 82f8364:	84 c0                	test   %al,%al
 82f8366:	74 06                	je     82f836e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x212>
 82f8368:	90                   	nop
 82f8369:	e9 30 fe ff ff       	jmp    82f819e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x42>
 82f836e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f8371:	8d 90 dc 03 00 00    	lea    0x3dc(%eax),%edx
 82f8377:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82f837a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f837e:	89 14 24             	mov    %edx,(%esp)
 82f8381:	e8 a0 8d e1 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 82f8386:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f838a:	83 f0 01             	xor    $0x1,%eax
 82f838d:	84 c0                	test   %al,%al
 82f838f:	74 bd                	je     82f834e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x1f2>
 82f8391:	bb 57 00 00 00       	mov    $0x57,%ebx
 82f8396:	e9 90 00 00 00       	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f839b:	c7 44 24 04 70 ed c1 	movl   $0x8c1ed70,0x4(%esp)
 82f83a2:	08 
 82f83a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f83a6:	89 04 24             	mov    %eax,(%esp)
 82f83a9:	e8 f3 85 d8 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82f83ae:	84 c0                	test   %al,%al
 82f83b0:	74 4f                	je     82f8401 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2a5>
 82f83b2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82f83b9:	eb 36                	jmp    82f83f1 <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x295>
 82f83bb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 82f83be:	8d 45 df             	lea    -0x21(%ebp),%eax
 82f83c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f83c5:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 82f83cc:	e8 80 40 5c 00       	call   88bc451 <_Z9ScanFloatiPb>
 82f83d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82f83d4:	8d 53 7c             	lea    0x7c(%ebx),%edx
 82f83d7:	dd 5c d0 0c          	fstpl  0xc(%eax,%edx,8)
 82f83db:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82f83df:	83 f0 01             	xor    $0x1,%eax
 82f83e2:	84 c0                	test   %al,%al
 82f83e4:	74 07                	je     82f83ed <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x291>
 82f83e6:	bb 60 00 00 00       	mov    $0x60,%ebx
 82f83eb:	eb 3e                	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f83ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82f83f1:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 82f83f5:	0f 9e c0             	setle  %al
 82f83f8:	84 c0                	test   %al,%al
 82f83fa:	75 bf                	jne    82f83bb <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x25f>
 82f83fc:	e9 9d fd ff ff       	jmp    82f819e <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x42>
 82f8401:	bb 64 00 00 00       	mov    $0x64,%ebx
 82f8406:	eb 23                	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f8408:	90                   	nop
 82f8409:	bb 00 00 00 00       	mov    $0x0,%ebx
 82f840e:	eb 1b                	jmp    82f842b <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc+0x2cf>
 82f8410:	89 d3                	mov    %edx,%ebx
 82f8412:	89 c6                	mov    %eax,%esi
 82f8414:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f8417:	89 04 24             	mov    %eax,(%esp)
 82f841a:	e8 c1 f7 40 00       	call   8707be0 <_ZNSsD1Ev>
 82f841f:	89 f0                	mov    %esi,%eax
 82f8421:	89 da                	mov    %ebx,%edx
 82f8423:	89 04 24             	mov    %eax,(%esp)
 82f8426:	e8 25 b3 7e 00       	call   8ae3750 <_Unwind_Resume>
 82f842b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82f842e:	89 04 24             	mov    %eax,(%esp)
 82f8431:	e8 aa f7 40 00       	call   8707be0 <_ZNSsD1Ev>
 82f8436:	89 d8                	mov    %ebx,%eax
 82f8438:	83 c4 30             	add    $0x30,%esp
 82f843b:	5b                   	pop    %ebx
 82f843c:	5e                   	pop    %esi
 82f843d:	5d                   	pop    %ebp
 82f843e:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::LoadScript @ 0x82f815c

/* CAutoMarketConditionsControl::LoadScript(char const*) */

undefined4 __thiscall
CAutoMarketConditionsControl::LoadScript(CAutoMarketConditionsControl *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  bool local_25;
  int local_24;
  string local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_20);
    local_24 = 0;
    local_25 = false;
                    /* try { // try from 082f81ac to 082f83d0 has its CatchHandler @ 082f8410 */
    while (cVar1 = ScanType((string *)&local_20,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_20,"[control of gold drop amount rate]");
      if (bVar2) {
        for (local_1c = 0; iVar3 = local_1c, local_1c < 10; local_1c = local_1c + 1) {
          lVar5 = (longdouble)ScanFloat(3,&local_25);
          *(double *)(this + iVar3 * 8 + 4) = (double)lVar5;
          if (local_25 != true) {
            uVar4 = 0x2f;
            goto LAB_082f842b;
          }
        }
      }
      else {
        bVar2 = std::operator==(&local_20,"[control of gold drop amount rate per level]");
        if (bVar2) {
          memset(this + 0x5c,0,0x324);
          while (iVar3 = ScanInt(&local_25), local_24 = iVar3, local_25 == true) {
            if ((iVar3 < 1) || (200 < iVar3)) {
              uVar4 = 0x3c;
              goto LAB_082f842b;
            }
            uVar4 = ScanInt(&local_25);
            *(undefined4 *)(this + (iVar3 + 0x14) * 4 + 0xc) = uVar4;
            if (local_25 != true) {
              uVar4 = 0x40;
              goto LAB_082f842b;
            }
          }
        }
        else {
          bVar2 = std::operator==(&local_20,"[control of equipment drop prob]");
          if (bVar2) {
            for (local_18 = 0; iVar3 = local_18, local_18 < 10; local_18 = local_18 + 1) {
              lVar5 = (longdouble)ScanFloat(3,&local_25);
              *(double *)(this + (iVar3 + 0x70) * 8 + 4) = (double)lVar5;
              if (local_25 != true) {
                uVar4 = 0x49;
                goto LAB_082f842b;
              }
            }
          }
          else {
            bVar2 = std::operator==(&local_20,"[control of equipment drop prob per level range]");
            if (bVar2) {
              local_14 = 0;
              while (local_24 = ScanInt(&local_25), local_25 == true) {
                std::vector<int,std::allocator<int>>::push_back
                          ((vector<int,std::allocator<int>> *)(this + 0x3dc),&local_24);
                if (local_25 != true) {
                  uVar4 = 0x57;
                  goto LAB_082f842b;
                }
              }
            }
            else {
              bVar2 = std::operator==(&local_20,"[control of durability decrease rate]");
              if (!bVar2) {
                uVar4 = 100;
                goto LAB_082f842b;
              }
              for (local_10 = 0; iVar3 = local_10, local_10 < 10; local_10 = local_10 + 1) {
                lVar5 = (longdouble)ScanFloat(3,&local_25);
                *(double *)(this + (iVar3 + 0x7c) * 8 + 0xc) = (double)lVar5;
                if (local_25 != true) {
                  uVar4 = 0x60;
                  goto LAB_082f842b;
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
LAB_082f842b:
    std::string::~string((string *)&local_20);
  }
  else {
    uVar4 = 0x1e;
  }
  return uVar4;
}

```

---

## SendNotiSetDurability

```asm
// === 082f8540 CAutoMarketConditionsControl::SendNotiSetDurability  [0x082f8540-0x82f85a7] ===
 82f8540:	55                   	push   %ebp
 82f8541:	89 e5                	mov    %esp,%ebp
 82f8543:	56                   	push   %esi
 82f8544:	53                   	push   %ebx
 82f8545:	83 ec 20             	sub    $0x20,%esp
 82f8548:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f854b:	89 04 24             	mov    %eax,(%esp)
 82f854e:	e8 f9 57 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82f8553:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f8556:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f855a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f855d:	89 04 24             	mov    %eax,(%esp)
 82f8560:	e8 93 ff ff ff       	call   82f84f8 <_Z21MakeNotiSetDurabilityR11PacketGuardi>
 82f8565:	e8 3d 1e de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82f856a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82f856d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f8571:	89 04 24             	mov    %eax,(%esp)
 82f8574:	e8 9b 06 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82f8579:	eb 1b                	jmp    82f8596 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEi+0x56>
 82f857b:	89 d3                	mov    %edx,%ebx
 82f857d:	89 c6                	mov    %eax,%esi
 82f857f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f8582:	89 04 24             	mov    %eax,(%esp)
 82f8585:	e8 f6 58 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f858a:	89 f0                	mov    %esi,%eax
 82f858c:	89 da                	mov    %ebx,%edx
 82f858e:	89 04 24             	mov    %eax,(%esp)
 82f8591:	e8 ba b1 7e 00       	call   8ae3750 <_Unwind_Resume>
 82f8596:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f8599:	89 04 24             	mov    %eax,(%esp)
 82f859c:	e8 df 58 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f85a1:	83 c4 20             	add    $0x20,%esp
 82f85a4:	5b                   	pop    %ebx
 82f85a5:	5e                   	pop    %esi
 82f85a6:	5d                   	pop    %ebp
 82f85a7:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f8540

/* CAutoMarketConditionsControl::SendNotiSetDurability(int) */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability(CAutoMarketConditionsControl *this,int param_1)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082f8560 to 082f8578 has its CatchHandler @ 082f857b */
  MakeNotiSetDurability(local_18,param_1);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendNotiSetDurability_082f85a8

```asm
// === 082f85a8 CAutoMarketConditionsControl::SendNotiSetDurability  [0x082f85a8-0x82f85e9] ===
 82f85a8:	55                   	push   %ebp
 82f85a9:	89 e5                	mov    %esp,%ebp
 82f85ab:	83 ec 28             	sub    $0x28,%esp
 82f85ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82f85b1:	dd 80 3c 04 00 00    	fldl   0x43c(%eax)
 82f85b7:	dd 05 58 fc c1 08    	fldl   0x8c1fc58
 82f85bd:	de c9                	fmulp  %st,%st(1)
 82f85bf:	d9 7d f6             	fnstcw -0xa(%ebp)
 82f85c2:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 82f85c6:	b4 0c                	mov    $0xc,%ah
 82f85c8:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 82f85cc:	d9 6d f4             	fldcw  -0xc(%ebp)
 82f85cf:	db 5d f0             	fistpl -0x10(%ebp)
 82f85d2:	d9 6d f6             	fldcw  -0xa(%ebp)
 82f85d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82f85d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f85dc:	8b 45 08             	mov    0x8(%ebp),%eax
 82f85df:	89 04 24             	mov    %eax,(%esp)
 82f85e2:	e8 59 ff ff ff       	call   82f8540 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEi>
 82f85e7:	c9                   	leave
 82f85e8:	c3                   	ret
 82f85e9:	90                   	nop

```

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f85a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::SendNotiSetDurability() */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability(CAutoMarketConditionsControl *this)

{
  SendNotiSetDurability(this,(int)ROUND(_DAT_08c1fc58 * *(double *)(this + 0x43c)));
  return;
}

```

---

## SendNotiSetDurability_082f85ea

```asm
// === 082f85ea CAutoMarketConditionsControl::SendNotiSetDurability  [0x082f85ea-0x82f8683] ===
 82f85ea:	55                   	push   %ebp
 82f85eb:	89 e5                	mov    %esp,%ebp
 82f85ed:	56                   	push   %esi
 82f85ee:	53                   	push   %ebx
 82f85ef:	83 ec 30             	sub    $0x30,%esp
 82f85f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82f85f5:	8b 80 e8 03 00 00    	mov    0x3e8(%eax),%eax
 82f85fb:	85 c0                	test   %eax,%eax
 82f85fd:	74 7e                	je     82f867d <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser+0x93>
 82f85ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f8602:	89 04 24             	mov    %eax,(%esp)
 82f8605:	e8 42 57 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82f860a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f860d:	dd 80 3c 04 00 00    	fldl   0x43c(%eax)
 82f8613:	dd 05 58 fc c1 08    	fldl   0x8c1fc58
 82f8619:	de c9                	fmulp  %st,%st(1)
 82f861b:	d9 7d e6             	fnstcw -0x1a(%ebp)
 82f861e:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 82f8622:	b4 0c                	mov    $0xc,%ah
 82f8624:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 82f8628:	d9 6d e4             	fldcw  -0x1c(%ebp)
 82f862b:	db 5d e0             	fistpl -0x20(%ebp)
 82f862e:	d9 6d e6             	fldcw  -0x1a(%ebp)
 82f8631:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82f8634:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f8638:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f863b:	89 04 24             	mov    %eax,(%esp)
 82f863e:	e8 b5 fe ff ff       	call   82f84f8 <_Z21MakeNotiSetDurabilityR11PacketGuardi>
 82f8643:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f8646:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f864a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f864d:	89 04 24             	mov    %eax,(%esp)
 82f8650:	e8 65 ff 34 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82f8655:	eb 1b                	jmp    82f8672 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser+0x88>
 82f8657:	89 d3                	mov    %edx,%ebx
 82f8659:	89 c6                	mov    %eax,%esi
 82f865b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f865e:	89 04 24             	mov    %eax,(%esp)
 82f8661:	e8 1a 58 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f8666:	89 f0                	mov    %esi,%eax
 82f8668:	89 da                	mov    %ebx,%edx
 82f866a:	89 04 24             	mov    %eax,(%esp)
 82f866d:	e8 de b0 7e 00       	call   8ae3750 <_Unwind_Resume>
 82f8672:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f8675:	89 04 24             	mov    %eax,(%esp)
 82f8678:	e8 03 58 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f867d:	83 c4 30             	add    $0x30,%esp
 82f8680:	5b                   	pop    %ebx
 82f8681:	5e                   	pop    %esi
 82f8682:	5d                   	pop    %ebp
 82f8683:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f85ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::SendNotiSetDurability(CUser*) */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability
          (CAutoMarketConditionsControl *this,CUser *param_1)

{
  PacketGuard local_18 [12];
  
  if (*(int *)(this + 1000) != 0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082f863e to 082f8654 has its CatchHandler @ 082f8657 */
    MakeNotiSetDurability(local_18,(int)ROUND(_DAT_08c1fc58 * *(double *)(this + 0x43c)));
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## ~CAutoMarketConditionsControl

```asm
// === 082f8144 CAutoMarketConditionsControl::~CAutoMarketConditionsControl  [0x082f8144-0x82f815b] ===
 82f8144:	55                   	push   %ebp
 82f8145:	89 e5                	mov    %esp,%ebp
 82f8147:	83 ec 18             	sub    $0x18,%esp
 82f814a:	8b 45 08             	mov    0x8(%ebp),%eax
 82f814d:	05 dc 03 00 00       	add    $0x3dc,%eax
 82f8152:	89 04 24             	mov    %eax,(%esp)
 82f8155:	e8 80 bc d8 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 82f815a:	c9                   	leave
 82f815b:	c3                   	ret

```

```c
// CAutoMarketConditionsControl::~CAutoMarketConditionsControl @ 0x82f8144

/* CAutoMarketConditionsControl::~CAutoMarketConditionsControl() */

void __thiscall
CAutoMarketConditionsControl::~CAutoMarketConditionsControl(CAutoMarketConditionsControl *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x3dc));
  return;
}

```

