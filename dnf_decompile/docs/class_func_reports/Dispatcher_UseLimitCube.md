# Dispatcher_UseLimitCube

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d3bbc Dispatcher_UseLimitCube::check_error  [0x081d3bbc-0x81d3c61] ===
 81d3bbc:	55                   	push   %ebp
 81d3bbd:	89 e5                	mov    %esp,%ebp
 81d3bbf:	83 ec 18             	sub    $0x18,%esp
 81d3bc2:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 81d3bc6:	75 0a                	jne    81d3bd2 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x16>
 81d3bc8:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3bcd:	e9 8e 00 00 00       	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3bd2:	8b 45 18             	mov    0x18(%ebp),%eax
 81d3bd5:	8b 40 02             	mov    0x2(%eax),%eax
 81d3bd8:	85 c0                	test   %eax,%eax
 81d3bda:	74 0b                	je     81d3be7 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x2b>
 81d3bdc:	8b 45 18             	mov    0x18(%ebp),%eax
 81d3bdf:	8b 40 02             	mov    0x2(%eax),%eax
 81d3be2:	3b 45 10             	cmp    0x10(%ebp),%eax
 81d3be5:	74 07                	je     81d3bee <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x32>
 81d3be7:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3bec:	eb 72                	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3bee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81d3bf1:	8b 40 02             	mov    0x2(%eax),%eax
 81d3bf4:	85 c0                	test   %eax,%eax
 81d3bf6:	75 07                	jne    81d3bff <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x43>
 81d3bf8:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3bfd:	eb 61                	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3bff:	8b 45 20             	mov    0x20(%ebp),%eax
 81d3c02:	89 04 24             	mov    %eax,(%esp)
 81d3c05:	e8 f0 d6 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d3c0a:	83 f0 01             	xor    $0x1,%eax
 81d3c0d:	84 c0                	test   %al,%al
 81d3c0f:	74 07                	je     81d3c18 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x5c>
 81d3c11:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3c16:	eb 48                	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3c18:	8b 45 20             	mov    0x20(%ebp),%eax
 81d3c1b:	8b 00                	mov    (%eax),%eax
 81d3c1d:	83 c0 0c             	add    $0xc,%eax
 81d3c20:	8b 10                	mov    (%eax),%edx
 81d3c22:	8b 45 20             	mov    0x20(%ebp),%eax
 81d3c25:	89 04 24             	mov    %eax,(%esp)
 81d3c28:	ff d2                	call   *%edx
 81d3c2a:	83 f8 1d             	cmp    $0x1d,%eax
 81d3c2d:	0f 95 c0             	setne  %al
 81d3c30:	84 c0                	test   %al,%al
 81d3c32:	74 07                	je     81d3c3b <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x7f>
 81d3c34:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3c39:	eb 25                	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3c3b:	8b 45 20             	mov    0x20(%ebp),%eax
 81d3c3e:	8b 55 10             	mov    0x10(%ebp),%edx
 81d3c41:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3c45:	89 04 24             	mov    %eax,(%esp)
 81d3c48:	e8 3d be 33 00       	call   850fa8a <_ZN14CStackableItem35is_included_material_for_limit_cubeEj>
 81d3c4d:	83 f0 01             	xor    $0x1,%eax
 81d3c50:	84 c0                	test   %al,%al
 81d3c52:	74 07                	je     81d3c5b <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0x9f>
 81d3c54:	b8 11 00 00 00       	mov    $0x11,%eax
 81d3c59:	eb 05                	jmp    81d3c60 <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem+0xa4>
 81d3c5b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3c60:	c9                   	leave
 81d3c61:	c3                   	ret

```

```c
// Dispatcher_UseLimitCube::check_error @ 0x81d3bbc

/* Dispatcher_UseLimitCube::check_error(int, unsigned int, int, Inven_Item&, Inven_Item&, CItem
   const*) */

undefined4 __thiscall
Dispatcher_UseLimitCube::check_error
          (Dispatcher_UseLimitCube *this,int param_1,uint param_2,int param_3,Inven_Item *param_4,
          Inven_Item *param_5,CItem *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_6 == (CItem *)0x0) {
    uVar2 = 0x11;
  }
  else if ((*(int *)(param_4 + 2) == 0) || (*(uint *)(param_4 + 2) != param_2)) {
    uVar2 = 0x11;
  }
  else if (*(int *)(param_5 + 2) == 0) {
    uVar2 = 0x11;
  }
  else {
    cVar1 = CItem::is_stackable(param_6);
    if (cVar1 == '\x01') {
      iVar3 = (**(code **)(*(int *)param_6 + 0xc))(param_6);
      if (iVar3 == 0x1d) {
        cVar1 = CStackableItem::is_included_material_for_limit_cube
                          ((CStackableItem *)param_6,param_2);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x11;
        }
      }
      else {
        uVar2 = 0x11;
      }
    }
    else {
      uVar2 = 0x11;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081d3d38 Dispatcher_UseLimitCube::process  [0x081d3d38-0x81d4783] ===
 81d3d38:	55                   	push   %ebp
 81d3d39:	89 e5                	mov    %esp,%ebp
 81d3d3b:	56                   	push   %esi
 81d3d3c:	53                   	push   %ebx
 81d3d3d:	81 ec c0 ca 00 00    	sub    $0xcac0,%esp
 81d3d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3d46:	89 04 24             	mov    %eax,(%esp)
 81d3d49:	e8 3e 66 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d3d4e:	83 f8 03             	cmp    $0x3,%eax
 81d3d51:	0f 95 c0             	setne  %al
 81d3d54:	84 c0                	test   %al,%al
 81d3d56:	74 0a                	je     81d3d62 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x2a>
 81d3d58:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d3d5d:	e9 16 0a 00 00       	jmp    81d4778 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa40>
 81d3d62:	8b 45 14             	mov    0x14(%ebp),%eax
 81d3d65:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81d3d68:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3d6b:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81d3d6e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d3d71:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d3d75:	98                   	cwtl
 81d3d76:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 81d3d7c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d3d7f:	8b 40 0f             	mov    0xf(%eax),%eax
 81d3d82:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 81d3d88:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d3d8b:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81d3d8f:	98                   	cwtl
 81d3d90:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 81d3d96:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 81d3d9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3d9f:	89 04 24             	mov    %eax,(%esp)
 81d3da2:	e8 d7 64 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d3da7:	8d 95 07 ff ff ff    	lea    -0xf9(%ebp),%edx
 81d3dad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d3db1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d3db8:	00 
 81d3db9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3dbd:	89 14 24             	mov    %edx,(%esp)
 81d3dc0:	e8 53 7b 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d3dc5:	83 ec 04             	sub    $0x4,%esp
 81d3dc8:	8b 9d 74 ff ff ff    	mov    -0x8c(%ebp),%ebx
 81d3dce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3dd1:	89 04 24             	mov    %eax,(%esp)
 81d3dd4:	e8 a5 64 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d3dd9:	8d 95 ca fe ff ff    	lea    -0x136(%ebp),%edx
 81d3ddf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d3de3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d3dea:	00 
 81d3deb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3def:	89 14 24             	mov    %edx,(%esp)
 81d3df2:	e8 21 7b 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d3df7:	83 ec 04             	sub    $0x4,%esp
 81d3dfa:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d3e00:	89 c3                	mov    %eax,%ebx
 81d3e02:	e8 94 83 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d3e07:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d3e0b:	89 04 24             	mov    %eax,(%esp)
 81d3e0e:	e8 1f bc 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d3e13:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81d3e16:	8b 85 09 ff ff ff    	mov    -0xf7(%ebp),%eax
 81d3e1c:	89 c3                	mov    %eax,%ebx
 81d3e1e:	e8 78 83 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d3e23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d3e27:	89 04 24             	mov    %eax,(%esp)
 81d3e2a:	e8 03 bc 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d3e2f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81d3e32:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 81d3e38:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81d3e3f:	e8 01 3a f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d3e44:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d3e48:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3e4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3e4f:	89 04 24             	mov    %eax,(%esp)
 81d3e52:	e8 eb 2a 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81d3e57:	84 c0                	test   %al,%al
 81d3e59:	74 11                	je     81d3e6c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x134>
 81d3e5b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d3e5e:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 81d3e62:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d3e67:	e9 0c 09 00 00       	jmp    81d4778 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa40>
 81d3e6c:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 81d3e73:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 81d3e79:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 81d3e7f:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 81d3e85:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 81d3e88:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81d3e8c:	8d 9d ca fe ff ff    	lea    -0x136(%ebp),%ebx
 81d3e92:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81d3e96:	8d 9d 07 ff ff ff    	lea    -0xf9(%ebp),%ebx
 81d3e9c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81d3ea0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d3ea4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d3ea8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3eac:	8b 45 08             	mov    0x8(%ebp),%eax
 81d3eaf:	89 04 24             	mov    %eax,(%esp)
 81d3eb2:	e8 05 fd ff ff       	call   81d3bbc <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem>
 81d3eb7:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81d3eba:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81d3ebe:	0f 95 c0             	setne  %al
 81d3ec1:	84 c0                	test   %al,%al
 81d3ec3:	74 15                	je     81d3eda <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x1a2>
 81d3ec5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d3ec8:	89 c2                	mov    %eax,%edx
 81d3eca:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d3ecd:	88 50 04             	mov    %dl,0x4(%eax)
 81d3ed0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d3ed5:	e9 9e 08 00 00       	jmp    81d4778 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa40>
 81d3eda:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81d3ee0:	89 04 24             	mov    %eax,(%esp)
 81d3ee3:	e8 a6 1d fe ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 81d3ee8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81d3eeb:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 81d3ef1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3ef5:	89 04 24             	mov    %eax,(%esp)
 81d3ef8:	e8 e7 bc 33 00       	call   850fbe4 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE>
 81d3efd:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81d3f03:	85 c0                	test   %eax,%eax
 81d3f05:	75 1b                	jne    81d3f22 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x1ea>
 81d3f07:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81d3f0d:	85 c0                	test   %eax,%eax
 81d3f0f:	75 11                	jne    81d3f22 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x1ea>
 81d3f11:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d3f14:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d3f18:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d3f1d:	e9 56 08 00 00       	jmp    81d4778 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa40>
 81d3f22:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81d3f28:	89 c2                	mov    %eax,%edx
 81d3f2a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d3f2d:	89 50 08             	mov    %edx,0x8(%eax)
 81d3f30:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81d3f36:	89 c2                	mov    %eax,%edx
 81d3f38:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d3f3b:	89 50 0c             	mov    %edx,0xc(%eax)
 81d3f3e:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 81d3f44:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81d3f47:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3f4b:	89 04 24             	mov    %eax,(%esp)
 81d3f4e:	e8 df bb 33 00       	call   850fb32 <_ZN14CStackableItem22get_1st_material_countEj>
 81d3f53:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 81d3f59:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81d3f5c:	89 04 24             	mov    %eax,(%esp)
 81d3f5f:	e8 7c 8a 05 00       	call   822c9e0 <_ZN14CStackableItem22get_2nd_material_indexEv>
 81d3f64:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 81d3f6a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81d3f6d:	89 04 24             	mov    %eax,(%esp)
 81d3f70:	e8 79 8a 05 00       	call   822c9ee <_ZN14CStackableItem22get_2nd_material_countEv>
 81d3f75:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 81d3f7b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d3f81:	89 04 24             	mov    %eax,(%esp)
 81d3f84:	e8 4d 0a f6 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 81d3f89:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81d3f8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d3f93:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81d3f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3f9d:	8d 45 80             	lea    -0x80(%ebp),%eax
 81d3fa0:	89 04 24             	mov    %eax,(%esp)
 81d3fa3:	e8 0e 30 06 00       	call   8236fb6 <_ZNSt4pairIiiEC1IRjRiEEOT_OT0_>
 81d3fa8:	8d 45 80             	lea    -0x80(%ebp),%eax
 81d3fab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3faf:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d3fb5:	89 04 24             	mov    %eax,(%esp)
 81d3fb8:	e8 49 96 f0 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81d3fbd:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
 81d3fc4:	8d 45 90             	lea    -0x70(%ebp),%eax
 81d3fc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d3fcb:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 81d3fd1:	83 c0 02             	add    $0x2,%eax
 81d3fd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3fd8:	8d 45 88             	lea    -0x78(%ebp),%eax
 81d3fdb:	89 04 24             	mov    %eax,(%esp)
 81d3fde:	e8 03 30 06 00       	call   8236fe6 <_ZNSt4pairIiiEC1IRmiEEOT_OT0_>
 81d3fe3:	8d 45 88             	lea    -0x78(%ebp),%eax
 81d3fe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3fea:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d3ff0:	89 04 24             	mov    %eax,(%esp)
 81d3ff3:	e8 0e 96 f0 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81d3ff8:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81d3ffe:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d4002:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81d4008:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d400c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81d400f:	89 04 24             	mov    %eax,(%esp)
 81d4012:	e8 db 2c ef ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 81d4017:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81d401a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d401e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d4024:	89 04 24             	mov    %eax,(%esp)
 81d4027:	e8 da 95 f0 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81d402c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d402f:	89 04 24             	mov    %eax,(%esp)
 81d4032:	e8 47 62 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d4037:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81d403d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4041:	89 04 24             	mov    %eax,(%esp)
 81d4044:	e8 83 3a 33 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 81d4049:	83 f0 01             	xor    $0x1,%eax
 81d404c:	84 c0                	test   %al,%al
 81d404e:	74 11                	je     81d4061 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x329>
 81d4050:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d4053:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d4057:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d405c:	e9 09 07 00 00       	jmp    81d476a <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa32>
 81d4061:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d4067:	89 04 24             	mov    %eax,(%esp)
 81d406a:	e8 bd 94 05 00       	call   822d52c <_ZN10CInventoryC1Ev>
 81d406f:	8d 85 95 35 ff ff    	lea    -0xca6b(%ebp),%eax
 81d4075:	89 04 24             	mov    %eax,(%esp)
 81d4078:	e8 3b 93 05 00       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 81d407d:	8d 85 95 35 ff ff    	lea    -0xca6b(%ebp),%eax
 81d4083:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4087:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d408d:	89 04 24             	mov    %eax,(%esp)
 81d4090:	e8 61 94 05 00       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 81d4095:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4098:	89 04 24             	mov    %eax,(%esp)
 81d409b:	e8 2a c3 fa ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81d40a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d40a4:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d40aa:	89 04 24             	mov    %eax,(%esp)
 81d40ad:	e8 62 62 32 00       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 81d40b2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d40b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d40bc:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d40c2:	89 04 24             	mov    %eax,(%esp)
 81d40c5:	e8 10 18 33 00       	call   85058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>
 81d40ca:	83 f0 01             	xor    $0x1,%eax
 81d40cd:	84 c0                	test   %al,%al
 81d40cf:	74 11                	je     81d40e2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x3aa>
 81d40d1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d40d4:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d40d8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d40dd:	e9 5a 06 00 00       	jmp    81d473c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa04>
 81d40e2:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 81d40e6:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81d40ed:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81d40f4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81d40fb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d40fe:	89 04 24             	mov    %eax,(%esp)
 81d4101:	e8 f4 d1 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d4106:	83 f0 01             	xor    $0x1,%eax
 81d4109:	84 c0                	test   %al,%al
 81d410b:	74 38                	je     81d4145 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x40d>
 81d410d:	0f b6 85 07 ff ff ff 	movzbl -0xf9(%ebp),%eax
 81d4114:	88 45 cf             	mov    %al,-0x31(%ebp)
 81d4117:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 81d411d:	89 04 24             	mov    %eax,(%esp)
 81d4120:	e8 31 73 05 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 81d4125:	0f b6 c0             	movzbl %al,%eax
 81d4128:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81d412b:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 81d4131:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d4134:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 81d413a:	89 04 24             	mov    %eax,(%esp)
 81d413d:	e8 f8 36 f2 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81d4142:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81d4145:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d414b:	89 04 24             	mov    %eax,(%esp)
 81d414e:	e8 59 a0 eb ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81d4153:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 81d4159:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 81d415f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4162:	89 04 24             	mov    %eax,(%esp)
 81d4165:	e8 24 61 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d416a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d4171:	00 
 81d4172:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 81d4179:	00 
 81d417a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d417e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d4182:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d4189:	00 
 81d418a:	89 04 24             	mov    %eax,(%esp)
 81d418d:	e8 7a fe 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d4192:	84 c0                	test   %al,%al
 81d4194:	74 4c                	je     81d41e2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x4aa>
 81d4196:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81d419d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81d41a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d41a4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d41aa:	89 04 24             	mov    %eax,(%esp)
 81d41ad:	e8 3c a0 eb ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81d41b2:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81d41b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d41bc:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d41c2:	89 04 24             	mov    %eax,(%esp)
 81d41c5:	e8 5c cf f3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 81d41ca:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81d41d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d41d4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d41da:	89 04 24             	mov    %eax,(%esp)
 81d41dd:	e8 44 cf f3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 81d41e2:	8b 9d 74 ff ff ff    	mov    -0x8c(%ebp),%ebx
 81d41e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d41eb:	89 04 24             	mov    %eax,(%esp)
 81d41ee:	e8 9b 60 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d41f3:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d41fa:	00 
 81d41fb:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 81d4202:	00 
 81d4203:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d420a:	00 
 81d420b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d420f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d4216:	00 
 81d4217:	89 04 24             	mov    %eax,(%esp)
 81d421a:	e8 ed fd 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d421f:	84 c0                	test   %al,%al
 81d4221:	74 50                	je     81d4273 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x53b>
 81d4223:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 81d422a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81d422d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4231:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d4237:	89 04 24             	mov    %eax,(%esp)
 81d423a:	e8 af 9f eb ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81d423f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81d4245:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4249:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d424f:	89 04 24             	mov    %eax,(%esp)
 81d4252:	e8 cf ce f3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 81d4257:	c7 45 a4 01 00 00 00 	movl   $0x1,-0x5c(%ebp)
 81d425e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81d4261:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4265:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d426b:	89 04 24             	mov    %eax,(%esp)
 81d426e:	e8 7b 9f eb ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81d4273:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
 81d4279:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d427c:	89 04 24             	mov    %eax,(%esp)
 81d427f:	e8 fa 5f f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d4284:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d4288:	89 04 24             	mov    %eax,(%esp)
 81d428b:	e8 e2 0e 33 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 81d4290:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 81d4294:	66 83 7d de 00       	cmpw   $0x0,-0x22(%ebp)
 81d4299:	79 11                	jns    81d42ac <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x574>
 81d429b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d429e:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d42a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d42a7:	e9 68 04 00 00       	jmp    81d4714 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x9dc>
 81d42ac:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
 81d42b2:	0f bf 5d de          	movswl -0x22(%ebp),%ebx
 81d42b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d42b9:	89 04 24             	mov    %eax,(%esp)
 81d42bc:	e8 cd 5f f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d42c1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d42c8:	00 
 81d42c9:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 81d42d0:	00 
 81d42d1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d42d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d42d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d42e0:	00 
 81d42e1:	89 04 24             	mov    %eax,(%esp)
 81d42e4:	e8 23 fd 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d42e9:	84 c0                	test   %al,%al
 81d42eb:	74 50                	je     81d433d <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x605>
 81d42ed:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 81d42f4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81d42f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d42fb:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d4301:	89 04 24             	mov    %eax,(%esp)
 81d4304:	e8 e5 9e eb ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81d4309:	0f bf 45 de          	movswl -0x22(%ebp),%eax
 81d430d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81d4310:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81d4313:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4317:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d431d:	89 04 24             	mov    %eax,(%esp)
 81d4320:	e8 c9 9e eb ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81d4325:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81d432b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d432f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d4335:	89 04 24             	mov    %eax,(%esp)
 81d4338:	e8 e9 cd f3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 81d433d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81d4344:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d4347:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81d434d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4351:	89 04 24             	mov    %eax,(%esp)
 81d4354:	e8 ef 9e eb ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81d4359:	83 ec 04             	sub    $0x4,%esp
 81d435c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d435f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4363:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d4369:	89 04 24             	mov    %eax,(%esp)
 81d436c:	e8 7b 56 f2 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 81d4371:	e9 88 00 00 00       	jmp    81d43fe <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x6c6>
 81d4376:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d437c:	89 04 24             	mov    %eax,(%esp)
 81d437f:	e8 98 56 f2 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 81d4384:	8b 00                	mov    (%eax),%eax
 81d4386:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d4389:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d438f:	89 04 24             	mov    %eax,(%esp)
 81d4392:	e8 6f 56 f2 ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 81d4397:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d439d:	89 04 24             	mov    %eax,(%esp)
 81d43a0:	e8 77 56 f2 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 81d43a5:	8b 00                	mov    (%eax),%eax
 81d43a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d43aa:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d43b0:	89 04 24             	mov    %eax,(%esp)
 81d43b3:	e8 4e 56 f2 ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 81d43b8:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d43be:	89 04 24             	mov    %eax,(%esp)
 81d43c1:	e8 56 56 f2 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 81d43c6:	8b 00                	mov    (%eax),%eax
 81d43c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d43cb:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d43d1:	89 04 24             	mov    %eax,(%esp)
 81d43d4:	e8 2d 56 f2 ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 81d43d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d43dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d43e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d43e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d43e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d43ee:	00 
 81d43ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d43f2:	89 04 24             	mov    %eax,(%esp)
 81d43f5:	e8 de 7e 4a 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d43fa:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81d43fe:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81d4401:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81d4407:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d440b:	89 04 24             	mov    %eax,(%esp)
 81d440e:	e8 59 9e eb ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81d4413:	83 ec 04             	sub    $0x4,%esp
 81d4416:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81d4419:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d441d:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81d4423:	89 04 24             	mov    %eax,(%esp)
 81d4426:	e8 fd ef fb ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 81d442b:	84 c0                	test   %al,%al
 81d442d:	74 0d                	je     81d443c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x704>
 81d442f:	83 7d e0 09          	cmpl   $0x9,-0x20(%ebp)
 81d4433:	7f 07                	jg     81d443c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x704>
 81d4435:	b8 01 00 00 00       	mov    $0x1,%eax
 81d443a:	eb 05                	jmp    81d4441 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x709>
 81d443c:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4441:	84 c0                	test   %al,%al
 81d4443:	0f 85 2d ff ff ff    	jne    81d4376 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x63e>
 81d4449:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 81d444f:	89 04 24             	mov    %eax,(%esp)
 81d4452:	e8 fd 73 ef ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81d4457:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81d445d:	89 85 8f fe ff ff    	mov    %eax,-0x171(%ebp)
 81d4463:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 81d4469:	89 c3                	mov    %eax,%ebx
 81d446b:	e8 2b 7d ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d4470:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d4474:	89 04 24             	mov    %eax,(%esp)
 81d4477:	e8 b6 b5 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d447c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d447f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d4483:	75 11                	jne    81d4496 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x75e>
 81d4485:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d4488:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d448c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d4491:	e9 7e 02 00 00       	jmp    81d4714 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x9dc>
 81d4496:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d4499:	8b 00                	mov    (%eax),%eax
 81d449b:	83 c0 08             	add    $0x8,%eax
 81d449e:	8b 10                	mov    (%eax),%edx
 81d44a0:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 81d44a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d44aa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d44ad:	89 04 24             	mov    %eax,(%esp)
 81d44b0:	ff d2                	call   *%edx
 81d44b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d44b5:	89 04 24             	mov    %eax,(%esp)
 81d44b8:	e8 3d ce f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d44bd:	84 c0                	test   %al,%al
 81d44bf:	74 0e                	je     81d44cf <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x797>
 81d44c1:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81d44c7:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 81d44cd:	eb 40                	jmp    81d450f <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x7d7>
 81d44cf:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 81d44d3:	88 85 8d fe ff ff    	mov    %al,-0x173(%ebp)
 81d44d9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81d44dc:	0f b6 c0             	movzbl %al,%eax
 81d44df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d44e3:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 81d44e9:	89 04 24             	mov    %eax,(%esp)
 81d44ec:	e8 75 6f 05 00       	call   822b466 <_ZN10Inven_Item14SetReSealCountEh>
 81d44f1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d44f4:	89 85 9a fe ff ff    	mov    %eax,-0x166(%ebp)
 81d44fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d44fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4501:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 81d4507:	89 04 24             	mov    %eax,(%esp)
 81d450a:	e8 75 73 ef ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 81d450f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4512:	89 04 24             	mov    %eax,(%esp)
 81d4515:	e8 74 5d f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d451a:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81d4521:	00 
 81d4522:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81d4529:	00 
 81d452a:	c7 44 24 44 09 00 00 	movl   $0x9,0x44(%esp)
 81d4531:	00 
 81d4532:	8b 95 8d fe ff ff    	mov    -0x173(%ebp),%edx
 81d4538:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d453c:	8b 95 91 fe ff ff    	mov    -0x16f(%ebp),%edx
 81d4542:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d4546:	8b 95 95 fe ff ff    	mov    -0x16b(%ebp),%edx
 81d454c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d4550:	8b 95 99 fe ff ff    	mov    -0x167(%ebp),%edx
 81d4556:	89 54 24 10          	mov    %edx,0x10(%esp)
 81d455a:	8b 95 9d fe ff ff    	mov    -0x163(%ebp),%edx
 81d4560:	89 54 24 14          	mov    %edx,0x14(%esp)
 81d4564:	8b 95 a1 fe ff ff    	mov    -0x15f(%ebp),%edx
 81d456a:	89 54 24 18          	mov    %edx,0x18(%esp)
 81d456e:	8b 95 a5 fe ff ff    	mov    -0x15b(%ebp),%edx
 81d4574:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81d4578:	8b 95 a9 fe ff ff    	mov    -0x157(%ebp),%edx
 81d457e:	89 54 24 20          	mov    %edx,0x20(%esp)
 81d4582:	8b 95 ad fe ff ff    	mov    -0x153(%ebp),%edx
 81d4588:	89 54 24 24          	mov    %edx,0x24(%esp)
 81d458c:	8b 95 b1 fe ff ff    	mov    -0x14f(%ebp),%edx
 81d4592:	89 54 24 28          	mov    %edx,0x28(%esp)
 81d4596:	8b 95 b5 fe ff ff    	mov    -0x14b(%ebp),%edx
 81d459c:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81d45a0:	8b 95 b9 fe ff ff    	mov    -0x147(%ebp),%edx
 81d45a6:	89 54 24 30          	mov    %edx,0x30(%esp)
 81d45aa:	8b 95 bd fe ff ff    	mov    -0x143(%ebp),%edx
 81d45b0:	89 54 24 34          	mov    %edx,0x34(%esp)
 81d45b4:	8b 95 c1 fe ff ff    	mov    -0x13f(%ebp),%edx
 81d45ba:	89 54 24 38          	mov    %edx,0x38(%esp)
 81d45be:	8b 95 c5 fe ff ff    	mov    -0x13b(%ebp),%edx
 81d45c4:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81d45c8:	0f b6 95 c9 fe ff ff 	movzbl -0x137(%ebp),%edx
 81d45cf:	88 54 24 40          	mov    %dl,0x40(%esp)
 81d45d3:	89 04 24             	mov    %eax,(%esp)
 81d45d6:	e8 ab e7 32 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81d45db:	66 89 45 ea          	mov    %ax,-0x16(%ebp)
 81d45df:	66 83 7d ea 00       	cmpw   $0x0,-0x16(%ebp)
 81d45e4:	79 11                	jns    81d45f7 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x8bf>
 81d45e6:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d45e9:	c6 40 04 11          	movb   $0x11,0x4(%eax)
 81d45ed:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d45f2:	e9 1d 01 00 00       	jmp    81d4714 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x9dc>
 81d45f7:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d45fa:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 81d45fe:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d4604:	3d 06 1f 00 00       	cmp    $0x1f06,%eax
 81d4609:	75 60                	jne    81d466b <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x933>
 81d460b:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 81d4611:	3d 1d 67 00 00       	cmp    $0x671d,%eax
 81d4616:	76 11                	jbe    81d4629 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x8f1>
 81d4618:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 81d461e:	3d 49 67 00 00       	cmp    $0x6749,%eax
 81d4623:	0f 86 a9 00 00 00    	jbe    81d46d2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x99a>
 81d4629:	8b 95 8f fe ff ff    	mov    -0x171(%ebp),%edx
 81d462f:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d4635:	89 54 24 18          	mov    %edx,0x18(%esp)
 81d4639:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d463d:	c7 44 24 10 2c 18 bc 	movl   $0x8bc182c,0x10(%esp)
 81d4644:	08 
 81d4645:	c7 44 24 0c 4b 34 00 	movl   $0x344b,0xc(%esp)
 81d464c:	00 
 81d464d:	c7 44 24 08 20 33 bd 	movl   $0x8bd3320,0x8(%esp)
 81d4654:	08 
 81d4655:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81d465c:	08 
 81d465d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81d4664:	e8 a1 f5 8f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81d4669:	eb 67                	jmp    81d46d2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x99a>
 81d466b:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d4671:	3d 11 1f 00 00       	cmp    $0x1f11,%eax
 81d4676:	75 5a                	jne    81d46d2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x99a>
 81d4678:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 81d467e:	3d 49 67 00 00       	cmp    $0x6749,%eax
 81d4683:	76 0d                	jbe    81d4692 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x95a>
 81d4685:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 81d468b:	3d 75 67 00 00       	cmp    $0x6775,%eax
 81d4690:	76 40                	jbe    81d46d2 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x99a>
 81d4692:	8b 95 8f fe ff ff    	mov    -0x171(%ebp),%edx
 81d4698:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d469e:	89 54 24 18          	mov    %edx,0x18(%esp)
 81d46a2:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d46a6:	c7 44 24 10 2c 18 bc 	movl   $0x8bc182c,0x10(%esp)
 81d46ad:	08 
 81d46ae:	c7 44 24 0c 52 34 00 	movl   $0x3452,0xc(%esp)
 81d46b5:	00 
 81d46b6:	c7 44 24 08 20 33 bd 	movl   $0x8bd3320,0x8(%esp)
 81d46bd:	08 
 81d46be:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81d46c5:	08 
 81d46c6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81d46cd:	e8 38 f5 8f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81d46d2:	0f bf 45 ea          	movswl -0x16(%ebp),%eax
 81d46d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d46da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d46e1:	00 
 81d46e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d46e9:	00 
 81d46ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d46ed:	89 04 24             	mov    %eax,(%esp)
 81d46f0:	e8 e3 7b 4a 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d46f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d46fa:	eb 18                	jmp    81d4714 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x9dc>
 81d46fc:	89 d3                	mov    %edx,%ebx
 81d46fe:	89 c6                	mov    %eax,%esi
 81d4700:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d4706:	89 04 24             	mov    %eax,(%esp)
 81d4709:	e8 cc f6 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d470e:	89 f0                	mov    %esi,%eax
 81d4710:	89 da                	mov    %ebx,%edx
 81d4712:	eb 10                	jmp    81d4724 <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0x9ec>
 81d4714:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81d471a:	89 04 24             	mov    %eax,(%esp)
 81d471d:	e8 b8 f6 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d4722:	eb 18                	jmp    81d473c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa04>
 81d4724:	89 d3                	mov    %edx,%ebx
 81d4726:	89 c6                	mov    %eax,%esi
 81d4728:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d472e:	89 04 24             	mov    %eax,(%esp)
 81d4731:	e8 ca 8e 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81d4736:	89 f0                	mov    %esi,%eax
 81d4738:	89 da                	mov    %ebx,%edx
 81d473a:	eb 10                	jmp    81d474c <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa14>
 81d473c:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 81d4742:	89 04 24             	mov    %eax,(%esp)
 81d4745:	e8 b6 8e 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81d474a:	eb 1e                	jmp    81d476a <_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase+0xa32>
 81d474c:	89 d3                	mov    %edx,%ebx
 81d474e:	89 c6                	mov    %eax,%esi
 81d4750:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d4756:	89 04 24             	mov    %eax,(%esp)
 81d4759:	e8 8c 02 f6 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d475e:	89 f0                	mov    %esi,%eax
 81d4760:	89 da                	mov    %ebx,%edx
 81d4762:	89 04 24             	mov    %eax,(%esp)
 81d4765:	e8 e6 ef 90 00       	call   8ae3750 <_Unwind_Resume>
 81d476a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81d4770:	89 04 24             	mov    %eax,(%esp)
 81d4773:	e8 72 02 f6 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d4778:	89 d8                	mov    %ebx,%eax
 81d477a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81d477d:	83 c4 00             	add    $0x0,%esp
 81d4780:	5b                   	pop    %ebx
 81d4781:	5e                   	pop    %esi
 81d4782:	5d                   	pop    %ebp
 81d4783:	c3                   	ret

```

```c
// Dispatcher_UseLimitCube::process @ 0x81d3d38

/* Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseLimitCube::process
          (Dispatcher_UseLimitCube *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  InventoryMemory local_ca6f [49471];
  CInventory local_930 [1977];
  Inven_Item local_177;
  undefined1 uStack_176;
  undefined2 uStack_175;
  undefined2 uStack_173;
  undefined1 uStack_171;
  int iStack_170;
  undefined1 uStack_16c;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined4 local_153;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined1 local_13b;
  Inven_Item local_13a [2];
  ulong local_138 [14];
  Inven_Item local_fd [2];
  int local_fb;
  undefined4 local_f0;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_c0 [4];
  vector<int,std::allocator<int>> local_bc [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_b0 [12];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  pair<int,int> local_84 [8];
  pair<int,int> local_7c [8];
  int local_74;
  pair<int,int> local_70 [8];
  int local_68 [5];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  ParamBase *local_4c;
  MSG_BASE *local_48;
  CItem *local_44;
  CItem *local_40;
  int local_3c;
  Inven_Item local_35;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  short local_26;
  int local_24;
  CItem *local_20;
  short local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    local_4c = param_3;
    local_48 = param_2;
    local_88 = (int)*(short *)(param_2 + 0xd);
    local_8c = *(uint *)(param_2 + 0xf);
    local_90 = (int)*(short *)(param_2 + 0x13);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_fd,iVar4);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_13a,iVar4);
    uVar1 = local_138[0];
    pCVar5 = (CDataManager *)G_CDataManager();
    local_44 = (CItem *)CDataManager::find_item(pCVar5,uVar1);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_40 = (CItem *)CDataManager::find_item(pCVar5,local_fb);
    iVar4 = local_88;
    iVar6 = GetInvenTypeFromItemSpace(0);
    cVar2 = CUser::CheckItemLock(param_1,iVar6,iVar4);
    if (cVar2 == '\0') {
      local_3c = 0;
      local_3c = check_error(this,local_88,local_8c,local_90,local_fd,local_13a,local_44);
      if (local_3c == 0) {
        std::pair<int,int>::pair((pair<int,int> *)&local_98);
        CStackableItem::get_limit_cube_item((CStackableItem *)local_44,(pair *)&local_98);
        if ((local_98 == 0) && (local_94 == 0)) {
          local_4c[4] = (ParamBase)0x11;
        }
        else {
          *(int *)(local_4c + 8) = local_98;
          *(int *)(local_4c + 0xc) = local_94;
          local_9c = CStackableItem::get_1st_material_count((CStackableItem *)local_44,local_8c);
          local_a0 = CStackableItem::get_2nd_material_index((CStackableItem *)local_44);
          local_a4 = CStackableItem::get_2nd_material_count((CStackableItem *)local_44);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_b0);
                    /* try { // try from 081d3fa3 to 081d406e has its CatchHandler @ 081d474c */
          std::pair<int,int>::pair<unsigned_int&,int&>(local_84,&local_8c,&local_9c);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_84);
          local_74 = 1;
          std::pair<int,int>::pair<unsigned_long&,int>(local_7c,local_138,&local_74);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_7c);
          std::pair<int,int>::pair<int&,int&>(local_70,&local_a0,&local_a4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_70);
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::CheckNeedItemList(pCVar7,(vector *)local_b0);
          if (cVar2 == '\x01') {
            CInventory::CInventory(local_930);
            InventoryMemory::InventoryMemory(local_ca6f);
            CInventory::SetInventoryMemory(local_930,local_ca6f);
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081d40ad to 081d4152 has its CatchHandler @ 081d4724 */
            CInventory::setCopy(local_930,pCVar7);
            cVar2 = CInventory::tryDeleteEventItems(local_930,(vector *)local_b0);
            if (cVar2 == '\x01') {
              local_35 = (Inven_Item)0x0;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0;
              cVar2 = CItem::is_stackable(local_40);
              if (cVar2 != '\x01') {
                local_35 = local_fd[0];
                local_34 = Inven_Item::GetReSealCount(local_fd);
                local_34 = local_34 & 0xff;
                local_30 = local_f0;
                local_2c = Inven_Item::get_add_info(local_fd);
              }
              std::vector<int,std::allocator<int>>::vector(local_bc);
              iVar6 = local_88;
              iVar4 = local_9c;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
                    /* try { // try from 081d418d to 081d46f4 has its CatchHandler @ 081d46fc */
              cVar2 = CInventory::delete_item(pCVar7,1,iVar6,iVar4,8,1);
              if (cVar2 != '\0') {
                local_68[0] = 0;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_88);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_9c);
              }
              iVar4 = local_90;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::delete_item(pCVar7,1,iVar4,1,8,1);
              if (cVar2 != '\0') {
                local_68[1] = 0;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 1);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_90);
                local_68[2] = 1;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 2);
              }
              iVar4 = local_a0;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              local_26 = CInventory::check_item_exist(pCVar7,iVar4);
              iVar4 = local_a4;
              if (local_26 < 0) {
                local_4c[4] = (ParamBase)0x11;
              }
              else {
                iVar6 = (int)local_26;
                pCVar7 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar2 = CInventory::delete_item(pCVar7,1,iVar6,iVar4,8,1);
                if (cVar2 != '\0') {
                  local_68[3] = 0;
                  std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 3);
                  local_68[4] = (int)local_26;
                  std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 4);
                  std::vector<int,std::allocator<int>>::push_back(local_bc,&local_a4);
                }
                local_24 = 0;
                std::vector<int,std::allocator<int>>::begin();
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                __normal_iterator<int*>(local_c0,local_54);
                while( true ) {
                  std::vector<int,std::allocator<int>>::end();
                  bVar3 = __gnu_cxx::operator!=(local_c0,local_50);
                  if ((bVar3) && (local_24 < 10)) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (!bVar3) break;
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_18 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_14 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_10 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  CUser::SendUpdateItem(param_1,1,local_18,local_14);
                  local_24 = local_24 + 1;
                }
                Inven_Item::Inven_Item(&local_177);
                uStack_175 = (undefined2)local_98;
                uStack_173 = (undefined2)((uint)local_98 >> 0x10);
                pCVar5 = (CDataManager *)G_CDataManager();
                local_20 = (CItem *)CDataManager::find_item(pCVar5,local_98);
                if (local_20 == (CItem *)0x0) {
                  local_4c[4] = (ParamBase)0x11;
                }
                else {
                  (**(code **)(*(int *)local_20 + 8))(local_20,&local_177);
                  cVar2 = CItem::is_stackable(local_20);
                  if (cVar2 == '\0') {
                    local_177 = local_35;
                    Inven_Item::SetReSealCount(&local_177,(uchar)local_34);
                    local_16b._1_3_ = (undefined3)local_30;
                    local_167._0_1_ = (undefined1)((uint)local_30 >> 0x18);
                    Inven_Item::set_add_info(&local_177,local_2c);
                  }
                  else {
                    iStack_170 = local_94;
                  }
                  uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_1a = CInventory::insertItemIntoInventory
                                       (uVar9,CONCAT22(uStack_175,CONCAT11(uStack_176,local_177)),
                                        CONCAT13((undefined1)iStack_170,
                                                 CONCAT12(uStack_171,uStack_173)),
                                        CONCAT13(uStack_16c,iStack_170._1_3_),local_16b,local_167,
                                        local_163,local_15f,local_15b,local_157,local_153,local_14f,
                                        local_14b,local_147,local_143,local_13f,local_13b,9,1,1);
                  if (local_1a < 0) {
                    local_4c[4] = (ParamBase)0x11;
                  }
                  else {
                    local_4c[4] = (ParamBase)0x0;
                    if (local_138[0] == 0x1f06) {
                      if ((CONCAT22(uStack_173,uStack_175) < 0x671e) ||
                         (0x6749 < CONCAT22(uStack_173,uStack_175))) {
                        LogManager::logFormat
                                  (1,"PacketDispatcher_Impl_1.cpp",
                                   "virtual int Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)"
                                   ,0x344b,
                                   "LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",
                                   0x1f06,CONCAT22(uStack_173,uStack_175));
                      }
                    }
                    else if ((local_138[0] == 0x1f11) &&
                            ((CONCAT22(uStack_173,uStack_175) < 0x674a ||
                             (0x6775 < CONCAT22(uStack_173,uStack_175))))) {
                      LogManager::logFormat
                                (1,"PacketDispatcher_Impl_1.cpp",
                                 "virtual int Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0x3452,
                                 "LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",0x1f11
                                 ,CONCAT22(uStack_173,uStack_175));
                    }
                    CUser::SendUpdateItem(param_1,1,0,(int)local_1a);
                  }
                }
              }
                    /* try { // try from 081d471d to 081d4721 has its CatchHandler @ 081d4724 */
              std::vector<int,std::allocator<int>>::~vector(local_bc);
            }
            else {
              local_4c[4] = (ParamBase)0x11;
            }
                    /* try { // try from 081d4745 to 081d4749 has its CatchHandler @ 081d474c */
            CInventory::~CInventory(local_930);
          }
          else {
            local_4c[4] = (ParamBase)0x11;
          }
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_b0);
        }
      }
      else {
        local_4c[4] = SUB41(local_3c,0);
      }
    }
    else {
      local_4c[4] = (ParamBase)0x1;
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d3c62 Dispatcher_UseLimitCube::read  [0x081d3c62-0x81d3d37] ===
 81d3c62:	55                   	push   %ebp
 81d3c63:	89 e5                	mov    %esp,%ebp
 81d3c65:	83 ec 18             	sub    $0x18,%esp
 81d3c68:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3c6b:	83 c0 0d             	add    $0xd,%eax
 81d3c6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3c72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3c75:	89 04 24             	mov    %eax,(%esp)
 81d3c78:	e8 43 93 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d3c7d:	83 f0 01             	xor    $0x1,%eax
 81d3c80:	84 c0                	test   %al,%al
 81d3c82:	74 29                	je     81d3cad <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0x4b>
 81d3c84:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3c8b:	00 
 81d3c8c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3c93:	00 
 81d3c94:	c7 44 24 04 80 33 bd 	movl   $0x8bd3380,0x4(%esp)
 81d3c9b:	08 
 81d3c9c:	c7 04 24 7d 33 00 00 	movl   $0x337d,(%esp)
 81d3ca3:	e8 2f cc 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3ca8:	e9 89 00 00 00       	jmp    81d3d36 <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0xd4>
 81d3cad:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3cb0:	83 c0 0f             	add    $0xf,%eax
 81d3cb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3cba:	89 04 24             	mov    %eax,(%esp)
 81d3cbd:	e8 7e 95 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d3cc2:	83 f0 01             	xor    $0x1,%eax
 81d3cc5:	84 c0                	test   %al,%al
 81d3cc7:	74 26                	je     81d3cef <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0x8d>
 81d3cc9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3cd0:	00 
 81d3cd1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3cd8:	00 
 81d3cd9:	c7 44 24 04 80 33 bd 	movl   $0x8bd3380,0x4(%esp)
 81d3ce0:	08 
 81d3ce1:	c7 04 24 81 33 00 00 	movl   $0x3381,(%esp)
 81d3ce8:	e8 ea cb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3ced:	eb 47                	jmp    81d3d36 <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0xd4>
 81d3cef:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3cf2:	83 c0 13             	add    $0x13,%eax
 81d3cf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3cfc:	89 04 24             	mov    %eax,(%esp)
 81d3cff:	e8 bc 92 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d3d04:	83 f0 01             	xor    $0x1,%eax
 81d3d07:	84 c0                	test   %al,%al
 81d3d09:	74 26                	je     81d3d31 <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0xcf>
 81d3d0b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3d12:	00 
 81d3d13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3d1a:	00 
 81d3d1b:	c7 44 24 04 80 33 bd 	movl   $0x8bd3380,0x4(%esp)
 81d3d22:	08 
 81d3d23:	c7 04 24 85 33 00 00 	movl   $0x3385,(%esp)
 81d3d2a:	e8 a8 cb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3d2f:	eb 05                	jmp    81d3d36 <_ZN23Dispatcher_UseLimitCube4readER9PacketBufR8MSG_BASE+0xd4>
 81d3d31:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3d36:	c9                   	leave
 81d3d37:	c3                   	ret

```

```c
// Dispatcher_UseLimitCube::read @ 0x81d3c62

/* Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseLimitCube::read(Dispatcher_UseLimitCube *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x3385,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x3381,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x337d,"virtual int Dispatcher_UseLimitCube::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d4784 Dispatcher_UseLimitCube::send  [0x081d4784-0x81d487b] ===
 81d4784:	55                   	push   %ebp
 81d4785:	89 e5                	mov    %esp,%ebp
 81d4787:	56                   	push   %esi
 81d4788:	53                   	push   %ebx
 81d4789:	83 ec 20             	sub    $0x20,%esp
 81d478c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d478f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4792:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4795:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d4799:	84 c0                	test   %al,%al
 81d479b:	74 26                	je     81d47c3 <_ZN23Dispatcher_UseLimitCube4sendEP5CUserR9ParamBase+0x3f>
 81d479d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d47a0:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d47a4:	0f b6 c0             	movzbl %al,%eax
 81d47a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d47ab:	c7 44 24 04 53 01 00 	movl   $0x153,0x4(%esp)
 81d47b2:	00 
 81d47b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d47b6:	89 04 24             	mov    %eax,(%esp)
 81d47b9:	e8 84 77 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d47be:	e9 b1 00 00 00       	jmp    81d4874 <_ZN23Dispatcher_UseLimitCube4sendEP5CUserR9ParamBase+0xf0>
 81d47c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d47c6:	89 04 24             	mov    %eax,(%esp)
 81d47c9:	e8 7e 95 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d47ce:	c7 44 24 08 53 01 00 	movl   $0x153,0x8(%esp)
 81d47d5:	00 
 81d47d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d47dd:	00 
 81d47de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d47e1:	89 04 24             	mov    %eax,(%esp)
 81d47e4:	e8 13 71 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d47e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d47f0:	00 
 81d47f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d47f4:	89 04 24             	mov    %eax,(%esp)
 81d47f7:	e8 24 71 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d47fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d47ff:	8b 40 08             	mov    0x8(%eax),%eax
 81d4802:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4806:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d4809:	89 04 24             	mov    %eax,(%esp)
 81d480c:	e8 2b 71 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d4811:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4814:	8b 40 0c             	mov    0xc(%eax),%eax
 81d4817:	98                   	cwtl
 81d4818:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d481c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d481f:	89 04 24             	mov    %eax,(%esp)
 81d4822:	e8 7d 56 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d4827:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d482e:	00 
 81d482f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d4832:	89 04 24             	mov    %eax,(%esp)
 81d4835:	e8 1e 71 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d483a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d483d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4841:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4844:	89 04 24             	mov    %eax,(%esp)
 81d4847:	e8 6e 3d 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d484c:	eb 1b                	jmp    81d4869 <_ZN23Dispatcher_UseLimitCube4sendEP5CUserR9ParamBase+0xe5>
 81d484e:	89 d3                	mov    %edx,%ebx
 81d4850:	89 c6                	mov    %eax,%esi
 81d4852:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d4855:	89 04 24             	mov    %eax,(%esp)
 81d4858:	e8 23 96 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d485d:	89 f0                	mov    %esi,%eax
 81d485f:	89 da                	mov    %ebx,%edx
 81d4861:	89 04 24             	mov    %eax,(%esp)
 81d4864:	e8 e7 ee 90 00       	call   8ae3750 <_Unwind_Resume>
 81d4869:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d486c:	89 04 24             	mov    %eax,(%esp)
 81d486f:	e8 0c 96 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d4874:	83 c4 20             	add    $0x20,%esp
 81d4877:	5b                   	pop    %ebx
 81d4878:	5e                   	pop    %esi
 81d4879:	5d                   	pop    %ebp
 81d487a:	c3                   	ret
 81d487b:	90                   	nop

```

```c
// Dispatcher_UseLimitCube::send @ 0x81d4784

/* Dispatcher_UseLimitCube::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UseLimitCube::send(Dispatcher_UseLimitCube *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (param_2[4] == (ParamBase)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d47e4 to 081d484b has its CatchHandler @ 081d484e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x153);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(int)(short)*(undefined4 *)(local_10 + 0xc));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x153,param_2[4]);
  }
  return;
}

```

