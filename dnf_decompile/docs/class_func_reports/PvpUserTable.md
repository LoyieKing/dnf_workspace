# PvpUserTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## Calculate

```asm
// === 085d4bd0 PvpUserTable::Calculate  [0x085d4bd0-0x85d4d5d] ===
 85d4bd0:	55                   	push   %ebp
 85d4bd1:	89 e5                	mov    %esp,%ebp
 85d4bd3:	53                   	push   %ebx
 85d4bd4:	83 ec 34             	sub    $0x34,%esp
 85d4bd7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4bda:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 85d4be1:	00 
 85d4be2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d4be9:	00 
 85d4bea:	89 04 24             	mov    %eax,(%esp)
 85d4bed:	e8 ce 90 aa ff       	call   807dcc0 <memset@plt>
 85d4bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4bf5:	05 00 01 00 00       	add    $0x100,%eax
 85d4bfa:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 85d4c01:	00 
 85d4c02:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d4c09:	00 
 85d4c0a:	89 04 24             	mov    %eax,(%esp)
 85d4c0d:	e8 ae 90 aa ff       	call   807dcc0 <memset@plt>
 85d4c12:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4c15:	89 04 24             	mov    %eax,(%esp)
 85d4c18:	e8 a5 0b 00 00       	call   85d57c2 <_ZN12PvpUserTable8CheckDanEv>
 85d4c1d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85d4c24:	eb 52                	jmp    85d4c78 <_ZN12PvpUserTable9CalculateEv+0xa8>
 85d4c26:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d4c29:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4c2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4c30:	89 04 24             	mov    %eax,(%esp)
 85d4c33:	e8 26 0c 00 00       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85d4c38:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d4c3f:	eb 28                	jmp    85d4c69 <_ZN12PvpUserTable9CalculateEv+0x99>
 85d4c41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d4c44:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85d4c47:	74 1b                	je     85d4c64 <_ZN12PvpUserTable9CalculateEv+0x94>
 85d4c49:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d4c4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d4c50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d4c53:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4c57:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4c5a:	89 04 24             	mov    %eax,(%esp)
 85d4c5d:	e8 fc 00 00 00       	call   85d4d5e <_ZN12PvpUserTable18GetTeamVsTeamPointEii>
 85d4c62:	eb 01                	jmp    85d4c65 <_ZN12PvpUserTable9CalculateEv+0x95>
 85d4c64:	90                   	nop
 85d4c65:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85d4c69:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 85d4c6d:	0f 9e c0             	setle  %al
 85d4c70:	84 c0                	test   %al,%al
 85d4c72:	75 cd                	jne    85d4c41 <_ZN12PvpUserTable9CalculateEv+0x71>
 85d4c74:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85d4c78:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85d4c7c:	0f 9e c0             	setle  %al
 85d4c7f:	84 c0                	test   %al,%al
 85d4c81:	75 a3                	jne    85d4c26 <_ZN12PvpUserTable9CalculateEv+0x56>
 85d4c83:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85d4c8a:	eb 73                	jmp    85d4cff <_ZN12PvpUserTable9CalculateEv+0x12f>
 85d4c8c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d4c8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4c92:	8d 8a c8 00 00 00    	lea    0xc8(%edx),%ecx
 85d4c98:	ba 00 00 00 00       	mov    $0x0,%edx
 85d4c9d:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 85d4ca1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d4ca8:	eb 46                	jmp    85d4cf0 <_ZN12PvpUserTable9CalculateEv+0x120>
 85d4caa:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85d4cad:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85d4cb0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d4cb3:	c1 e2 03             	shl    $0x3,%edx
 85d4cb6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85d4cb9:	c1 e0 02             	shl    $0x2,%eax
 85d4cbc:	03 45 08             	add    0x8(%ebp),%eax
 85d4cbf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d4cc2:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 85d4cc8:	c1 e2 02             	shl    $0x2,%edx
 85d4ccb:	03 55 08             	add    0x8(%ebp),%edx
 85d4cce:	83 c2 04             	add    $0x4,%edx
 85d4cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4cd5:	89 14 24             	mov    %edx,(%esp)
 85d4cd8:	e8 c4 b1 00 00       	call   85dfea1 <_ZSt3minIfERKT_S2_S2_>
 85d4cdd:	8b 10                	mov    (%eax),%edx
 85d4cdf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4ce2:	8d 8b c8 00 00 00    	lea    0xc8(%ebx),%ecx
 85d4ce8:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 85d4cec:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d4cf0:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85d4cf4:	0f 9e c0             	setle  %al
 85d4cf7:	84 c0                	test   %al,%al
 85d4cf9:	75 af                	jne    85d4caa <_ZN12PvpUserTable9CalculateEv+0xda>
 85d4cfb:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85d4cff:	83 7d e8 07          	cmpl   $0x7,-0x18(%ebp)
 85d4d03:	0f 9e c0             	setle  %al
 85d4d06:	84 c0                	test   %al,%al
 85d4d08:	75 82                	jne    85d4c8c <_ZN12PvpUserTable9CalculateEv+0xbc>
 85d4d0a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d4d11:	eb 35                	jmp    85d4d48 <_ZN12PvpUserTable9CalculateEv+0x178>
 85d4d13:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d4d1a:	eb 1d                	jmp    85d4d39 <_ZN12PvpUserTable9CalculateEv+0x169>
 85d4d1c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85d4d1f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d4d22:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4d25:	c1 e1 03             	shl    $0x3,%ecx
 85d4d28:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4d2b:	83 c2 24             	add    $0x24,%edx
 85d4d2e:	c7 04 d0 00 00 00 00 	movl   $0x0,(%eax,%edx,8)
 85d4d35:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d4d39:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d4d3d:	0f 9e c0             	setle  %al
 85d4d40:	84 c0                	test   %al,%al
 85d4d42:	75 d8                	jne    85d4d1c <_ZN12PvpUserTable9CalculateEv+0x14c>
 85d4d44:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d4d48:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85d4d4c:	0f 9e c0             	setle  %al
 85d4d4f:	84 c0                	test   %al,%al
 85d4d51:	75 c0                	jne    85d4d13 <_ZN12PvpUserTable9CalculateEv+0x143>
 85d4d53:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4d58:	83 c4 34             	add    $0x34,%esp
 85d4d5b:	5b                   	pop    %ebx
 85d4d5c:	5d                   	pop    %ebp
 85d4d5d:	c3                   	ret

```

```c
// PvpUserTable::Calculate @ 0x85d4bd0

/* PvpUserTable::Calculate() */

undefined4 __thiscall PvpUserTable::Calculate(PvpUserTable *this)

{
  float *pfVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  memset(this,0,0x100);
  memset(this + 0x100,0,0x20);
  CheckDan(this);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    SetWinTeam(this,local_24);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (local_24 != local_20) {
        GetTeamVsTeamPoint(this,local_24,local_20);
      }
    }
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    *(undefined4 *)(this + (local_1c + 200) * 4 + 4) = 0;
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      pfVar1 = std::min<float>((float *)(this + (local_1c + 200) * 4 + 4),
                               (float *)(this + (local_18 * 8 + local_1c) * 4));
      *(float *)(this + (local_1c + 200) * 4 + 4) = *pfVar1;
    }
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 8 + local_10 + 0x24) * 8) = 0;
    }
  }
  return 1;
}

```

---

## CheckDan

```asm
// === 085d57c2 PvpUserTable::CheckDan  [0x085d57c2-0x85d585d] ===
 85d57c2:	55                   	push   %ebp
 85d57c3:	89 e5                	mov    %esp,%ebp
 85d57c5:	83 ec 28             	sub    $0x28,%esp
 85d57c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d57cb:	05 44 03 00 00       	add    $0x344,%eax
 85d57d0:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 85d57d7:	00 
 85d57d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d57df:	00 
 85d57e0:	89 04 24             	mov    %eax,(%esp)
 85d57e3:	e8 d8 84 aa ff       	call   807dcc0 <memset@plt>
 85d57e8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d57ef:	eb 60                	jmp    85d5851 <_ZN12PvpUserTable8CheckDanEv+0x8f>
 85d57f1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d57f8:	eb 48                	jmp    85d5842 <_ZN12PvpUserTable8CheckDanEv+0x80>
 85d57fa:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 85d57fd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d5800:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5803:	c1 e1 03             	shl    $0x3,%ecx
 85d5806:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5809:	83 c2 24             	add    $0x24,%edx
 85d580c:	8b 04 d0             	mov    (%eax,%edx,8),%eax
 85d580f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d5812:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d5816:	74 25                	je     85d583d <_ZN12PvpUserTable8CheckDanEv+0x7b>
 85d5818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d581b:	89 04 24             	mov    %eax,(%esp)
 85d581e:	e8 27 96 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85d5823:	83 f8 09             	cmp    $0x9,%eax
 85d5826:	0f 9f c0             	setg   %al
 85d5829:	84 c0                	test   %al,%al
 85d582b:	74 11                	je     85d583e <_ZN12PvpUserTable8CheckDanEv+0x7c>
 85d582d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d5830:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5833:	c6 84 02 44 03 00 00 	movb   $0x1,0x344(%edx,%eax,1)
 85d583a:	01 
 85d583b:	eb 10                	jmp    85d584d <_ZN12PvpUserTable8CheckDanEv+0x8b>
 85d583d:	90                   	nop
 85d583e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d5842:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85d5846:	0f 9e c0             	setle  %al
 85d5849:	84 c0                	test   %al,%al
 85d584b:	75 ad                	jne    85d57fa <_ZN12PvpUserTable8CheckDanEv+0x38>
 85d584d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d5851:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85d5855:	0f 9e c0             	setle  %al
 85d5858:	84 c0                	test   %al,%al
 85d585a:	75 95                	jne    85d57f1 <_ZN12PvpUserTable8CheckDanEv+0x2f>
 85d585c:	c9                   	leave
 85d585d:	c3                   	ret

```

```c
// PvpUserTable::CheckDan @ 0x85d57c2

/* PvpUserTable::CheckDan() */

void __thiscall PvpUserTable::CheckDan(PvpUserTable *this)

{
  int iVar1;
  int local_18;
  int local_14;
  
  memset(this + 0x344,0,8);
  local_18 = 0;
  do {
    if (7 < local_18) {
      return;
    }
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if (*(CUserCharacInfo **)(this + (local_18 * 8 + local_14 + 0x24) * 8) !=
          (CUserCharacInfo *)0x0) {
        iVar1 = CUserCharacInfo::get_pvp_grade
                          (*(CUserCharacInfo **)(this + (local_18 * 8 + local_14 + 0x24) * 8));
        if (9 < iVar1) {
          this[local_18 + 0x344] = (PvpUserTable)0x1;
          break;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## Clear

```asm
// === 085d490a PvpUserTable::Clear  [0x085d490a-0x85d497f] ===
 85d490a:	55                   	push   %ebp
 85d490b:	89 e5                	mov    %esp,%ebp
 85d490d:	83 ec 10             	sub    $0x10,%esp
 85d4910:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85d4917:	eb 4c                	jmp    85d4965 <_ZN12PvpUserTable5ClearEv+0x5b>
 85d4919:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d4920:	eb 34                	jmp    85d4956 <_ZN12PvpUserTable5ClearEv+0x4c>
 85d4922:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 85d4925:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85d4928:	8b 45 08             	mov    0x8(%ebp),%eax
 85d492b:	c1 e1 03             	shl    $0x3,%ecx
 85d492e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4931:	83 c2 24             	add    $0x24,%edx
 85d4934:	c7 04 d0 00 00 00 00 	movl   $0x0,(%eax,%edx,8)
 85d493b:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 85d493e:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85d4941:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4944:	c1 e1 03             	shl    $0x3,%ecx
 85d4947:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d494a:	83 c2 24             	add    $0x24,%edx
 85d494d:	c6 44 d0 04 00       	movb   $0x0,0x4(%eax,%edx,8)
 85d4952:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d4956:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d495a:	0f 9e c0             	setle  %al
 85d495d:	84 c0                	test   %al,%al
 85d495f:	75 c1                	jne    85d4922 <_ZN12PvpUserTable5ClearEv+0x18>
 85d4961:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85d4965:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 85d4969:	0f 9e c0             	setle  %al
 85d496c:	84 c0                	test   %al,%al
 85d496e:	75 a9                	jne    85d4919 <_ZN12PvpUserTable5ClearEv+0xf>
 85d4970:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4973:	c7 80 20 03 00 00 ff 	movl   $0xffffffff,0x320(%eax)
 85d497a:	ff ff ff 
 85d497d:	c9                   	leave
 85d497e:	c3                   	ret
 85d497f:	90                   	nop

```

```c
// PvpUserTable::Clear @ 0x85d490a

/* PvpUserTable::Clear() */

void __thiscall PvpUserTable::Clear(PvpUserTable *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      *(undefined4 *)(this + (local_8 * 8 + local_c + 0x24) * 8) = 0;
      this[(local_8 * 8 + local_c + 0x24) * 8 + 4] = (PvpUserTable)0x0;
    }
  }
  *(undefined4 *)(this + 800) = 0xffffffff;
  return;
}

```

---

## GetExpectVal

```asm
// === 085d4ab8 PvpUserTable::GetExpectVal  [0x085d4ab8-0x85d4bcf] ===
 85d4ab8:	55                   	push   %ebp
 85d4ab9:	89 e5                	mov    %esp,%ebp
 85d4abb:	83 ec 38             	sub    $0x38,%esp
 85d4abe:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4ac1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d4ac4:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4ac7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d4aca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4acd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4ad1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4ad4:	89 04 24             	mov    %eax,(%esp)
 85d4ad7:	e8 ae 0c 00 00       	call   85d578a <_ZN12PvpUserTable11GradeFilterEi>
 85d4adc:	89 45 0c             	mov    %eax,0xc(%ebp)
 85d4adf:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4ae2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4ae6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4ae9:	89 04 24             	mov    %eax,(%esp)
 85d4aec:	e8 99 0c 00 00       	call   85d578a <_ZN12PvpUserTable11GradeFilterEi>
 85d4af1:	89 45 10             	mov    %eax,0x10(%ebp)
 85d4af4:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 85d4af8:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85d4afc:	75 06                	jne    85d4b04 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x4c>
 85d4afe:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d4b02:	74 0c                	je     85d4b10 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x58>
 85d4b04:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d4b08:	75 3c                	jne    85d4b46 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x8e>
 85d4b0a:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 85d4b0e:	75 36                	jne    85d4b46 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x8e>
 85d4b10:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85d4b14:	74 17                	je     85d4b2d <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x75>
 85d4b16:	8b 45 14             	mov    0x14(%ebp),%eax
 85d4b19:	89 04 24             	mov    %eax,(%esp)
 85d4b1c:	e8 29 a3 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85d4b21:	83 f8 09             	cmp    $0x9,%eax
 85d4b24:	7f 07                	jg     85d4b2d <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x75>
 85d4b26:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4b2b:	eb 05                	jmp    85d4b32 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x7a>
 85d4b2d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4b32:	84 c0                	test   %al,%al
 85d4b34:	75 10                	jne    85d4b46 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x8e>
 85d4b36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d4b39:	89 45 0c             	mov    %eax,0xc(%ebp)
 85d4b3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d4b3f:	89 45 10             	mov    %eax,0x10(%ebp)
 85d4b42:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 85d4b46:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4b49:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4b50:	89 04 24             	mov    %eax,(%esp)
 85d4b53:	e8 da fe ff ff       	call   85d4a32 <_ZN12PvpUserTable21IsValidConvertedGradeEi>
 85d4b58:	83 f0 01             	xor    $0x1,%eax
 85d4b5b:	84 c0                	test   %al,%al
 85d4b5d:	74 06                	je     85d4b65 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xad>
 85d4b5f:	d9 e8                	fld1
 85d4b61:	d9 e0                	fchs
 85d4b63:	eb 68                	jmp    85d4bcd <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x115>
 85d4b65:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4b68:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4b6c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4b6f:	89 04 24             	mov    %eax,(%esp)
 85d4b72:	e8 bb fe ff ff       	call   85d4a32 <_ZN12PvpUserTable21IsValidConvertedGradeEi>
 85d4b77:	83 f0 01             	xor    $0x1,%eax
 85d4b7a:	84 c0                	test   %al,%al
 85d4b7c:	74 06                	je     85d4b84 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xcc>
 85d4b7e:	d9 e8                	fld1
 85d4b80:	d9 e0                	fchs
 85d4b82:	eb 49                	jmp    85d4bcd <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x115>
 85d4b84:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4b87:	3b 45 10             	cmp    0x10(%ebp),%eax
 85d4b8a:	74 1f                	je     85d4bab <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xf3>
 85d4b8c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 85d4b90:	83 f0 01             	xor    $0x1,%eax
 85d4b93:	84 c0                	test   %al,%al
 85d4b95:	74 14                	je     85d4bab <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xf3>
 85d4b97:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d4b9b:	75 04                	jne    85d4ba1 <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xe9>
 85d4b9d:	d9 ee                	fldz
 85d4b9f:	eb 2c                	jmp    85d4bcd <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x115>
 85d4ba1:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d4ba5:	75 04                	jne    85d4bab <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0xf3>
 85d4ba7:	d9 e8                	fld1
 85d4ba9:	eb 22                	jmp    85d4bcd <_ZN12PvpUserTable12GetExpectValEiiP5CUser+0x115>
 85d4bab:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4bae:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4bb1:	89 d1                	mov    %edx,%ecx
 85d4bb3:	29 c1                	sub    %eax,%ecx
 85d4bb5:	89 c8                	mov    %ecx,%eax
 85d4bb7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d4bba:	db 45 e4             	fildl  -0x1c(%ebp)
 85d4bbd:	d9 05 d0 27 cc 08    	flds   0x8cc27d0
 85d4bc3:	de c9                	fmulp  %st,%st(1)
 85d4bc5:	d9 05 d4 27 cc 08    	flds   0x8cc27d4
 85d4bcb:	de c1                	faddp  %st,%st(1)
 85d4bcd:	c9                   	leave
 85d4bce:	c3                   	ret
 85d4bcf:	90                   	nop

```

```c
// PvpUserTable::GetExpectVal @ 0x85d4ab8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetExpectVal(int, int, CUser*) */

longdouble __thiscall
PvpUserTable::GetExpectVal(PvpUserTable *this,int param_1,int param_2,CUser *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  
  iVar4 = GradeFilter(this,param_1);
  iVar5 = GradeFilter(this,param_2);
  bVar2 = false;
  if (((iVar4 == 1) && (iVar5 == 0)) || ((iVar4 == 0 && (iVar5 == 1)))) {
    if ((param_3 == (CUser *)0x0) ||
       (iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_3), 9 < iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar2 = true;
      iVar4 = param_1;
      iVar5 = param_2;
    }
  }
  param_2 = iVar5;
  param_1 = iVar4;
  cVar3 = IsValidConvertedGrade(this,param_1);
  if (cVar3 == '\x01') {
    cVar3 = IsValidConvertedGrade(this,param_2);
    if (cVar3 == '\x01') {
      if ((param_1 != param_2) && (!bVar2)) {
        if (param_1 == 0) {
          return (longdouble)0;
        }
        if (param_2 == 0) {
          return (longdouble)1;
        }
      }
      lVar7 = (longdouble)_DAT_08cc27d4 +
              (longdouble)_DAT_08cc27d0 * (longdouble)(param_1 - param_2);
    }
    else {
      lVar7 = -(longdouble)1;
    }
  }
  else {
    lVar7 = -(longdouble)1;
  }
  return lVar7;
}

```

---

## GetGhostVsTeamPoint

```asm
// === 085d4fca PvpUserTable::GetGhostVsTeamPoint  [0x085d4fca-0x85d5063] ===
 85d4fca:	55                   	push   %ebp
 85d4fcb:	89 e5                	mov    %esp,%ebp
 85d4fcd:	53                   	push   %ebx
 85d4fce:	83 ec 34             	sub    $0x34,%esp
 85d4fd1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d4fd8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d4fdf:	eb 6d                	jmp    85d504e <_ZN12PvpUserTable19GetGhostVsTeamPointEii+0x84>
 85d4fe1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d4fe4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d4fe7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4fea:	c1 e1 03             	shl    $0x3,%ecx
 85d4fed:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4ff0:	83 c2 24             	add    $0x24,%edx
 85d4ff3:	8b 04 d0             	mov    (%eax,%edx,8),%eax
 85d4ff6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d4ff9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85d4ffd:	74 4a                	je     85d5049 <_ZN12PvpUserTable19GetGhostVsTeamPointEii+0x7f>
 85d4fff:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85d5002:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5005:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5008:	83 c2 40             	add    $0x40,%edx
 85d500b:	d9 04 90             	flds   (%eax,%edx,4)
 85d500e:	d9 5d e4             	fstps  -0x1c(%ebp)
 85d5011:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d5014:	89 04 24             	mov    %eax,(%esp)
 85d5017:	e8 2e 9e bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85d501c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d5023:	00 
 85d5024:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d502b:	00 
 85d502c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d5030:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5033:	89 04 24             	mov    %eax,(%esp)
 85d5036:	e8 7d fa ff ff       	call   85d4ab8 <_ZN12PvpUserTable12GetExpectValEiiP5CUser>
 85d503b:	d8 45 e4             	fadds  -0x1c(%ebp)
 85d503e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5041:	8d 53 40             	lea    0x40(%ebx),%edx
 85d5044:	d9 1c 90             	fstps  (%eax,%edx,4)
 85d5047:	eb 01                	jmp    85d504a <_ZN12PvpUserTable19GetGhostVsTeamPointEii+0x80>
 85d5049:	90                   	nop
 85d504a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d504e:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d5052:	0f 9e c0             	setle  %al
 85d5055:	84 c0                	test   %al,%al
 85d5057:	75 88                	jne    85d4fe1 <_ZN12PvpUserTable19GetGhostVsTeamPointEii+0x17>
 85d5059:	b8 01 00 00 00       	mov    $0x1,%eax
 85d505e:	83 c4 34             	add    $0x34,%esp
 85d5061:	5b                   	pop    %ebx
 85d5062:	5d                   	pop    %ebp
 85d5063:	c3                   	ret

```

```c
// PvpUserTable::GetGhostVsTeamPoint @ 0x85d4fca

/* PvpUserTable::GetGhostVsTeamPoint(int, int) */

undefined4 PvpUserTable::GetGhostVsTeamPoint(int param_1,int param_2)

{
  float fVar1;
  CUserCharacInfo *this;
  int iVar2;
  longdouble lVar3;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    this = *(CUserCharacInfo **)(param_1 + (param_2 * 8 + local_10 + 0x24) * 8);
    if (this != (CUserCharacInfo *)0x0) {
      fVar1 = *(float *)(param_1 + (param_2 + 0x40) * 4);
      iVar2 = CUserCharacInfo::get_pvp_grade(this);
      lVar3 = (longdouble)GetExpectVal((PvpUserTable *)param_1,iVar2,0,(CUser *)0x0);
      *(float *)(param_1 + (param_2 + 0x40) * 4) = (float)(lVar3 + (longdouble)fVar1);
    }
  }
  return 1;
}

```

---

## GetLeavePenalty

```asm
// === 085d5730 PvpUserTable::GetLeavePenalty  [0x085d5730-0x85d5789] ===
 85d5730:	55                   	push   %ebp
 85d5731:	89 e5                	mov    %esp,%ebp
 85d5733:	83 ec 10             	sub    $0x10,%esp
 85d5736:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5739:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d573d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5740:	89 04 24             	mov    %eax,(%esp)
 85d5743:	e8 cc f2 ff ff       	call   85d4a14 <_ZN12PvpUserTable11IsValidTeamEi>
 85d5748:	83 f0 01             	xor    $0x1,%eax
 85d574b:	84 c0                	test   %al,%al
 85d574d:	74 07                	je     85d5756 <_ZN12PvpUserTable15GetLeavePenaltyEi+0x26>
 85d574f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d5754:	eb 31                	jmp    85d5787 <_ZN12PvpUserTable15GetLeavePenaltyEi+0x57>
 85d5756:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5759:	8b 45 08             	mov    0x8(%ebp),%eax
 85d575c:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 85d5762:	d9 44 90 04          	flds   0x4(%eax,%edx,4)
 85d5766:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d576c:	de c9                	fmulp  %st,%st(1)
 85d576e:	d9 7d fe             	fnstcw -0x2(%ebp)
 85d5771:	0f b7 45 fe          	movzwl -0x2(%ebp),%eax
 85d5775:	b4 0c                	mov    $0xc,%ah
 85d5777:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 85d577b:	d9 6d fc             	fldcw  -0x4(%ebp)
 85d577e:	db 5d f8             	fistpl -0x8(%ebp)
 85d5781:	d9 6d fe             	fldcw  -0x2(%ebp)
 85d5784:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85d5787:	c9                   	leave
 85d5788:	c3                   	ret
 85d5789:	90                   	nop

```

```c
// PvpUserTable::GetLeavePenalty @ 0x85d5730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetLeavePenalty(int) */

int __thiscall PvpUserTable::GetLeavePenalty(PvpUserTable *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IsValidTeam(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = (int)ROUND(_DAT_08cc27d8 * *(float *)(this + (param_1 + 200) * 4 + 4));
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

```

---

## GetResult

```asm
// === 085d5064 PvpUserTable::GetResult  [0x085d5064-0x85d572f] ===
 85d5064:	55                   	push   %ebp
 85d5065:	89 e5                	mov    %esp,%ebp
 85d5067:	53                   	push   %ebx
 85d5068:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 85d506e:	8b 45 10             	mov    0x10(%ebp),%eax
 85d5071:	88 45 94             	mov    %al,-0x6c(%ebp)
 85d5074:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5077:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d507b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d507e:	89 04 24             	mov    %eax,(%esp)
 85d5081:	e8 8e f9 ff ff       	call   85d4a14 <_ZN12PvpUserTable11IsValidTeamEi>
 85d5086:	83 f0 01             	xor    $0x1,%eax
 85d5089:	84 c0                	test   %al,%al
 85d508b:	74 0a                	je     85d5097 <_ZN12PvpUserTable9GetResultEibi+0x33>
 85d508d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d5092:	e9 90 06 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d5097:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 85d509b:	0f 84 ba 00 00 00    	je     85d515b <_ZN12PvpUserTable9GetResultEibi+0xf7>
 85d50a1:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85d50a5:	74 4d                	je     85d50f4 <_ZN12PvpUserTable9GetResultEibi+0x90>
 85d50a7:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85d50ab:	74 47                	je     85d50f4 <_ZN12PvpUserTable9GetResultEibi+0x90>
 85d50ad:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d50b4:	00 
 85d50b5:	c7 44 24 08 a0 01 00 	movl   $0x1a0,0x8(%esp)
 85d50bc:	00 
 85d50bd:	c7 44 24 04 60 27 cc 	movl   $0x8cc2760,0x4(%esp)
 85d50c4:	08 
 85d50c5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85d50c8:	89 04 24             	mov    %eax,(%esp)
 85d50cb:	e8 48 a6 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d50d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d50d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d50d7:	c7 44 24 04 14 0f cc 	movl   $0x8cc0f14,0x4(%esp)
 85d50de:	08 
 85d50df:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85d50e2:	89 04 24             	mov    %eax,(%esp)
 85d50e5:	e8 9e a6 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d50ea:	b8 00 00 00 00       	mov    $0x0,%eax
 85d50ef:	e9 33 06 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d50f4:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85d50f8:	75 07                	jne    85d5101 <_ZN12PvpUserTable9GetResultEibi+0x9d>
 85d50fa:	b8 02 00 00 00       	mov    $0x2,%eax
 85d50ff:	eb 05                	jmp    85d5106 <_ZN12PvpUserTable9GetResultEibi+0xa2>
 85d5101:	b8 01 00 00 00       	mov    $0x1,%eax
 85d5106:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d5109:	8b 45 08             	mov    0x8(%ebp),%eax
 85d510c:	8b 80 20 03 00 00    	mov    0x320(%eax),%eax
 85d5112:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d5115:	75 44                	jne    85d515b <_ZN12PvpUserTable9GetResultEibi+0xf7>
 85d5117:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d511a:	8b 55 08             	mov    0x8(%ebp),%edx
 85d511d:	0f b6 84 02 44 03 00 	movzbl 0x344(%edx,%eax,1),%eax
 85d5124:	00 
 85d5125:	83 f0 01             	xor    $0x1,%eax
 85d5128:	84 c0                	test   %al,%al
 85d512a:	74 2f                	je     85d515b <_ZN12PvpUserTable9GetResultEibi+0xf7>
 85d512c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d512f:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5135:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5138:	8b 45 08             	mov    0x8(%ebp),%eax
 85d513b:	c1 e1 03             	shl    $0x3,%ecx
 85d513e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5141:	d9 04 90             	flds   (%eax,%edx,4)
 85d5144:	d9 ee                	fldz
 85d5146:	d9 c9                	fxch   %st(1)
 85d5148:	da e9                	fucompp
 85d514a:	df e0                	fnstsw %ax
 85d514c:	9e                   	sahf
 85d514d:	7a 02                	jp     85d5151 <_ZN12PvpUserTable9GetResultEibi+0xed>
 85d514f:	74 0a                	je     85d515b <_ZN12PvpUserTable9GetResultEibi+0xf7>
 85d5151:	b8 00 00 00 00       	mov    $0x0,%eax
 85d5156:	e9 cc 05 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d515b:	e8 47 52 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d5160:	89 04 24             	mov    %eax,(%esp)
 85d5163:	e8 0e a9 00 00       	call   85dfa76 <_ZNK9GameWorld32IsCharacterPvPExpRevisionChannelEv>
 85d5168:	84 c0                	test   %al,%al
 85d516a:	0f 84 87 04 00 00    	je     85d55f7 <_ZN12PvpUserTable9GetResultEibi+0x593>
 85d5170:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5173:	8b 80 20 03 00 00    	mov    0x320(%eax),%eax
 85d5179:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d517c:	0f 84 f2 02 00 00    	je     85d5474 <_ZN12PvpUserTable9GetResultEibi+0x410>
 85d5182:	83 7d 14 0e          	cmpl   $0xe,0x14(%ebp)
 85d5186:	0f 8f 65 01 00 00    	jg     85d52f1 <_ZN12PvpUserTable9GetResultEibi+0x28d>
 85d518c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d518f:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5192:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5195:	c1 e1 03             	shl    $0x3,%ecx
 85d5198:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d519b:	d9 04 90             	flds   (%eax,%edx,4)
 85d519e:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d51a4:	de c9                	fmulp  %st,%st(1)
 85d51a6:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d51ac:	de c9                	fmulp  %st,%st(1)
 85d51ae:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d51b4:	de f9                	fdivrp %st,%st(1)
 85d51b6:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d51b9:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d51bd:	b4 0c                	mov    $0xc,%ah
 85d51bf:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d51c3:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d51c6:	db 5d 8c             	fistpl -0x74(%ebp)
 85d51c9:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d51cc:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d51cf:	3d 60 79 fe ff       	cmp    $0xfffe7960,%eax
 85d51d4:	7c 41                	jl     85d5217 <_ZN12PvpUserTable9GetResultEibi+0x1b3>
 85d51d6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d51d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d51dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d51df:	c1 e1 03             	shl    $0x3,%ecx
 85d51e2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d51e5:	d9 04 90             	flds   (%eax,%edx,4)
 85d51e8:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d51ee:	de c9                	fmulp  %st,%st(1)
 85d51f0:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d51f6:	de c9                	fmulp  %st,%st(1)
 85d51f8:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d51fe:	de f9                	fdivrp %st,%st(1)
 85d5200:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d5203:	db 5d 8c             	fistpl -0x74(%ebp)
 85d5206:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5209:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d520c:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 85d5211:	0f 8e 9f 00 00 00    	jle    85d52b6 <_ZN12PvpUserTable9GetResultEibi+0x252>
 85d5217:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d521a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d521d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5220:	c1 e1 03             	shl    $0x3,%ecx
 85d5223:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5226:	d9 04 90             	flds   (%eax,%edx,4)
 85d5229:	dd 9d 68 ff ff ff    	fstpl  -0x98(%ebp)
 85d522f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d5232:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5235:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5238:	c1 e1 03             	shl    $0x3,%ecx
 85d523b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d523e:	d9 04 90             	flds   (%eax,%edx,4)
 85d5241:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5247:	de c9                	fmulp  %st,%st(1)
 85d5249:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d524f:	de c9                	fmulp  %st,%st(1)
 85d5251:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d5257:	de f9                	fdivrp %st,%st(1)
 85d5259:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d525c:	db 5d 8c             	fistpl -0x74(%ebp)
 85d525f:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5262:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 85d5265:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d526c:	00 
 85d526d:	c7 44 24 08 b9 01 00 	movl   $0x1b9,0x8(%esp)
 85d5274:	00 
 85d5275:	c7 44 24 04 60 27 cc 	movl   $0x8cc2760,0x4(%esp)
 85d527c:	08 
 85d527d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85d5280:	89 04 24             	mov    %eax,(%esp)
 85d5283:	e8 90 a4 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d5288:	dd 85 68 ff ff ff    	fldl   -0x98(%ebp)
 85d528e:	dd 5c 24 0c          	fstpl  0xc(%esp)
 85d5292:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d5296:	c7 44 24 04 4b 0f cc 	movl   $0x8cc0f4b,0x4(%esp)
 85d529d:	08 
 85d529e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85d52a1:	89 04 24             	mov    %eax,(%esp)
 85d52a4:	e8 df a4 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d52a9:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d52ac:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d52b0:	b4 0c                	mov    $0xc,%ah
 85d52b2:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d52b6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d52b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d52bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d52bf:	c1 e1 03             	shl    $0x3,%ecx
 85d52c2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d52c5:	d9 04 90             	flds   (%eax,%edx,4)
 85d52c8:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d52ce:	de c9                	fmulp  %st,%st(1)
 85d52d0:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d52d6:	de c9                	fmulp  %st,%st(1)
 85d52d8:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d52de:	de f9                	fdivrp %st,%st(1)
 85d52e0:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d52e3:	db 5d 8c             	fistpl -0x74(%ebp)
 85d52e6:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d52e9:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d52ec:	e9 36 04 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d52f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d52f4:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d52fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d52fd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5300:	c1 e1 03             	shl    $0x3,%ecx
 85d5303:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5306:	d9 04 90             	flds   (%eax,%edx,4)
 85d5309:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d530f:	de c9                	fmulp  %st,%st(1)
 85d5311:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d5317:	de c9                	fmulp  %st,%st(1)
 85d5319:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d531f:	de f9                	fdivrp %st,%st(1)
 85d5321:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d5324:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d5328:	b4 0c                	mov    $0xc,%ah
 85d532a:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d532e:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d5331:	db 5d 8c             	fistpl -0x74(%ebp)
 85d5334:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5337:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d533a:	3d 60 79 fe ff       	cmp    $0xfffe7960,%eax
 85d533f:	7c 47                	jl     85d5388 <_ZN12PvpUserTable9GetResultEibi+0x324>
 85d5341:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5344:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d534a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d534d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5350:	c1 e1 03             	shl    $0x3,%ecx
 85d5353:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5356:	d9 04 90             	flds   (%eax,%edx,4)
 85d5359:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d535f:	de c9                	fmulp  %st,%st(1)
 85d5361:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d5367:	de c9                	fmulp  %st,%st(1)
 85d5369:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d536f:	de f9                	fdivrp %st,%st(1)
 85d5371:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d5374:	db 5d 8c             	fistpl -0x74(%ebp)
 85d5377:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d537a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d537d:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 85d5382:	0f 8e ab 00 00 00    	jle    85d5433 <_ZN12PvpUserTable9GetResultEibi+0x3cf>
 85d5388:	8b 45 08             	mov    0x8(%ebp),%eax
 85d538b:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5391:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5394:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5397:	c1 e1 03             	shl    $0x3,%ecx
 85d539a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d539d:	d9 04 90             	flds   (%eax,%edx,4)
 85d53a0:	dd 9d 70 ff ff ff    	fstpl  -0x90(%ebp)
 85d53a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d53a9:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d53af:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d53b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d53b5:	c1 e1 03             	shl    $0x3,%ecx
 85d53b8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d53bb:	d9 04 90             	flds   (%eax,%edx,4)
 85d53be:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d53c4:	de c9                	fmulp  %st,%st(1)
 85d53c6:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d53cc:	de c9                	fmulp  %st,%st(1)
 85d53ce:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d53d4:	de f9                	fdivrp %st,%st(1)
 85d53d6:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d53d9:	db 5d 8c             	fistpl -0x74(%ebp)
 85d53dc:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d53df:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 85d53e2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d53e9:	00 
 85d53ea:	c7 44 24 08 c4 01 00 	movl   $0x1c4,0x8(%esp)
 85d53f1:	00 
 85d53f2:	c7 44 24 04 60 27 cc 	movl   $0x8cc2760,0x4(%esp)
 85d53f9:	08 
 85d53fa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d53fd:	89 04 24             	mov    %eax,(%esp)
 85d5400:	e8 13 a3 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d5405:	dd 85 70 ff ff ff    	fldl   -0x90(%ebp)
 85d540b:	dd 5c 24 0c          	fstpl  0xc(%esp)
 85d540f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d5413:	c7 44 24 04 61 0f cc 	movl   $0x8cc0f61,0x4(%esp)
 85d541a:	08 
 85d541b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d541e:	89 04 24             	mov    %eax,(%esp)
 85d5421:	e8 62 a3 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d5426:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d5429:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d542d:	b4 0c                	mov    $0xc,%ah
 85d542f:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d5433:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5436:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d543c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d543f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5442:	c1 e1 03             	shl    $0x3,%ecx
 85d5445:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5448:	d9 04 90             	flds   (%eax,%edx,4)
 85d544b:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5451:	de c9                	fmulp  %st,%st(1)
 85d5453:	d9 05 dc 27 cc 08    	flds   0x8cc27dc
 85d5459:	de c9                	fmulp  %st,%st(1)
 85d545b:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d5461:	de f9                	fdivrp %st,%st(1)
 85d5463:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d5466:	db 5d 8c             	fistpl -0x74(%ebp)
 85d5469:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d546c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d546f:	e9 b3 02 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d5474:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5477:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d547d:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5480:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5483:	c1 e1 03             	shl    $0x3,%ecx
 85d5486:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5489:	d9 04 90             	flds   (%eax,%edx,4)
 85d548c:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5492:	de c9                	fmulp  %st,%st(1)
 85d5494:	d9 05 e4 27 cc 08    	flds   0x8cc27e4
 85d549a:	de c9                	fmulp  %st,%st(1)
 85d549c:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d54a2:	de f9                	fdivrp %st,%st(1)
 85d54a4:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d54a7:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d54ab:	b4 0c                	mov    $0xc,%ah
 85d54ad:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d54b1:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d54b4:	db 5d 8c             	fistpl -0x74(%ebp)
 85d54b7:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d54ba:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d54bd:	3d 60 79 fe ff       	cmp    $0xfffe7960,%eax
 85d54c2:	7c 47                	jl     85d550b <_ZN12PvpUserTable9GetResultEibi+0x4a7>
 85d54c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d54c7:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d54cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d54d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d54d3:	c1 e1 03             	shl    $0x3,%ecx
 85d54d6:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d54d9:	d9 04 90             	flds   (%eax,%edx,4)
 85d54dc:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d54e2:	de c9                	fmulp  %st,%st(1)
 85d54e4:	d9 05 e4 27 cc 08    	flds   0x8cc27e4
 85d54ea:	de c9                	fmulp  %st,%st(1)
 85d54ec:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d54f2:	de f9                	fdivrp %st,%st(1)
 85d54f4:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d54f7:	db 5d 8c             	fistpl -0x74(%ebp)
 85d54fa:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d54fd:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d5500:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 85d5505:	0f 8e ab 00 00 00    	jle    85d55b6 <_ZN12PvpUserTable9GetResultEibi+0x552>
 85d550b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d550e:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5514:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5517:	8b 45 08             	mov    0x8(%ebp),%eax
 85d551a:	c1 e1 03             	shl    $0x3,%ecx
 85d551d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5520:	d9 04 90             	flds   (%eax,%edx,4)
 85d5523:	dd 9d 78 ff ff ff    	fstpl  -0x88(%ebp)
 85d5529:	8b 45 08             	mov    0x8(%ebp),%eax
 85d552c:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5532:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5535:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5538:	c1 e1 03             	shl    $0x3,%ecx
 85d553b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d553e:	d9 04 90             	flds   (%eax,%edx,4)
 85d5541:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5547:	de c9                	fmulp  %st,%st(1)
 85d5549:	d9 05 e4 27 cc 08    	flds   0x8cc27e4
 85d554f:	de c9                	fmulp  %st,%st(1)
 85d5551:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d5557:	de f9                	fdivrp %st,%st(1)
 85d5559:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d555c:	db 5d 8c             	fistpl -0x74(%ebp)
 85d555f:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5562:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 85d5565:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d556c:	00 
 85d556d:	c7 44 24 08 d0 01 00 	movl   $0x1d0,0x8(%esp)
 85d5574:	00 
 85d5575:	c7 44 24 04 60 27 cc 	movl   $0x8cc2760,0x4(%esp)
 85d557c:	08 
 85d557d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d5580:	89 04 24             	mov    %eax,(%esp)
 85d5583:	e8 90 a1 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d5588:	dd 85 78 ff ff ff    	fldl   -0x88(%ebp)
 85d558e:	dd 5c 24 0c          	fstpl  0xc(%esp)
 85d5592:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d5596:	c7 44 24 04 77 0f cc 	movl   $0x8cc0f77,0x4(%esp)
 85d559d:	08 
 85d559e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d55a1:	89 04 24             	mov    %eax,(%esp)
 85d55a4:	e8 df a1 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d55a9:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d55ac:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d55b0:	b4 0c                	mov    $0xc,%ah
 85d55b2:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d55b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d55b9:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d55bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d55c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d55c5:	c1 e1 03             	shl    $0x3,%ecx
 85d55c8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d55cb:	d9 04 90             	flds   (%eax,%edx,4)
 85d55ce:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d55d4:	de c9                	fmulp  %st,%st(1)
 85d55d6:	d9 05 e4 27 cc 08    	flds   0x8cc27e4
 85d55dc:	de c9                	fmulp  %st,%st(1)
 85d55de:	d9 05 e0 27 cc 08    	flds   0x8cc27e0
 85d55e4:	de f9                	fdivrp %st,%st(1)
 85d55e6:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d55e9:	db 5d 8c             	fistpl -0x74(%ebp)
 85d55ec:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d55ef:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d55f2:	e9 30 01 00 00       	jmp    85d5727 <_ZN12PvpUserTable9GetResultEibi+0x6c3>
 85d55f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d55fa:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5600:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5603:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5606:	c1 e1 03             	shl    $0x3,%ecx
 85d5609:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d560c:	d9 04 90             	flds   (%eax,%edx,4)
 85d560f:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5615:	de c9                	fmulp  %st,%st(1)
 85d5617:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d561a:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d561e:	b4 0c                	mov    $0xc,%ah
 85d5620:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d5624:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d5627:	db 5d 8c             	fistpl -0x74(%ebp)
 85d562a:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d562d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d5630:	3d 60 79 fe ff       	cmp    $0xfffe7960,%eax
 85d5635:	7c 37                	jl     85d566e <_ZN12PvpUserTable9GetResultEibi+0x60a>
 85d5637:	8b 45 08             	mov    0x8(%ebp),%eax
 85d563a:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5640:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5643:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5646:	c1 e1 03             	shl    $0x3,%ecx
 85d5649:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d564c:	d9 04 90             	flds   (%eax,%edx,4)
 85d564f:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5655:	de c9                	fmulp  %st,%st(1)
 85d5657:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d565a:	db 5d 8c             	fistpl -0x74(%ebp)
 85d565d:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5660:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d5663:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 85d5668:	0f 8e 8d 00 00 00    	jle    85d56fb <_ZN12PvpUserTable9GetResultEibi+0x697>
 85d566e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5671:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5677:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d567a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d567d:	c1 e1 03             	shl    $0x3,%ecx
 85d5680:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5683:	d9 04 90             	flds   (%eax,%edx,4)
 85d5686:	dd 5d 80             	fstpl  -0x80(%ebp)
 85d5689:	8b 45 08             	mov    0x8(%ebp),%eax
 85d568c:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5692:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5695:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5698:	c1 e1 03             	shl    $0x3,%ecx
 85d569b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d569e:	d9 04 90             	flds   (%eax,%edx,4)
 85d56a1:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d56a4:	db 5d 8c             	fistpl -0x74(%ebp)
 85d56a7:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d56aa:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 85d56ad:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d56b4:	00 
 85d56b5:	c7 44 24 08 dd 01 00 	movl   $0x1dd,0x8(%esp)
 85d56bc:	00 
 85d56bd:	c7 44 24 04 60 27 cc 	movl   $0x8cc2760,0x4(%esp)
 85d56c4:	08 
 85d56c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d56c8:	89 04 24             	mov    %eax,(%esp)
 85d56cb:	e8 48 a0 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d56d0:	dd 45 80             	fldl   -0x80(%ebp)
 85d56d3:	dd 5c 24 0c          	fstpl  0xc(%esp)
 85d56d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d56db:	c7 44 24 04 8d 0f cc 	movl   $0x8cc0f8d,0x4(%esp)
 85d56e2:	08 
 85d56e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d56e6:	89 04 24             	mov    %eax,(%esp)
 85d56e9:	e8 9a a0 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d56ee:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85d56f1:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85d56f5:	b4 0c                	mov    $0xc,%ah
 85d56f7:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85d56fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d56fe:	8b 88 20 03 00 00    	mov    0x320(%eax),%ecx
 85d5704:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d5707:	8b 45 08             	mov    0x8(%ebp),%eax
 85d570a:	c1 e1 03             	shl    $0x3,%ecx
 85d570d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5710:	d9 04 90             	flds   (%eax,%edx,4)
 85d5713:	d9 05 d8 27 cc 08    	flds   0x8cc27d8
 85d5719:	de c9                	fmulp  %st,%st(1)
 85d571b:	d9 6d 90             	fldcw  -0x70(%ebp)
 85d571e:	db 5d 8c             	fistpl -0x74(%ebp)
 85d5721:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85d5724:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85d5727:	81 c4 b4 00 00 00    	add    $0xb4,%esp
 85d572d:	5b                   	pop    %ebx
 85d572e:	5d                   	pop    %ebp
 85d572f:	c3                   	ret

```

```c
// PvpUserTable::GetResult @ 0x85d5064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetResult(int, bool, int) */

int __thiscall PvpUserTable::GetResult(PvpUserTable *this,int param_1,bool param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  cVar3 = IsValidTeam(this,param_1);
  if (cVar3 != '\x01') {
    return -1;
  }
  if (param_2) {
    if ((param_1 != 2) && (param_1 != 1)) {
      cMyTrace::cMyTrace(local_60,"int PvpUserTable::GetResult(int, bool, int)",0x1a0,5);
      cMyTrace::operator()(local_60,&DAT_08cc0f14,param_1);
      return 0;
    }
    if (param_1 == 1) {
      local_10 = 2;
    }
    else {
      local_10 = 1;
    }
    if (((*(int *)(this + 800) == param_1) && (this[local_10 + 0x344] != (PvpUserTable)0x1)) &&
       (*(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4) != 0.0)) {
      return 0;
    }
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsCharacterPvPExpRevisionChannel(this_00);
  if (cVar3 == '\0') {
    if (((int)ROUND(_DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) <
         -100000) ||
       (100000 < (int)ROUND(_DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      cMyTrace::cMyTrace(local_20,"int PvpUserTable::GetResult(int, bool, int)",0x1dd,5);
      cMyTrace::operator()(local_20,"pvp_exp_error4 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND(_DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4));
  }
  else if (*(int *)(this + 800) == param_1) {
    if (((int)ROUND((_DAT_08cc27e4 *
                    _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27e4 *
                            _DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = (_DAT_08cc27e4 *
              _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
              _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_30,"int PvpUserTable::GetResult(int, bool, int)",0x1d0,5);
      cMyTrace::operator()(local_30,"pvp_exp_error3 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27e4 *
                       _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4))
                       / _DAT_08cc27e0);
  }
  else if (param_3 < 0xf) {
    if (((int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + param_1 * 0x24);
      fVar2 = (_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) / _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_50,"int PvpUserTable::GetResult(int, bool, int)",0x1b9,5);
      cMyTrace::operator()(local_50,"pvp_exp_error1 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                       _DAT_08cc27e0);
  }
  else {
    if (((int)ROUND((_DAT_08cc27dc *
                    _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27dc *
                            _DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = (_DAT_08cc27dc *
              _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
              _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_40,"int PvpUserTable::GetResult(int, bool, int)",0x1c4,5);
      cMyTrace::operator()(local_40,"pvp_exp_error2 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27dc *
                       _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4))
                       / _DAT_08cc27e0);
  }
  return iVar4;
}

```

---

## GetTeamUserCount

```asm
// === 085d4a50 PvpUserTable::GetTeamUserCount  [0x085d4a50-0x85d4ab7] ===
 85d4a50:	55                   	push   %ebp
 85d4a51:	89 e5                	mov    %esp,%ebp
 85d4a53:	83 ec 18             	sub    $0x18,%esp
 85d4a56:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4a59:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4a5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4a60:	89 04 24             	mov    %eax,(%esp)
 85d4a63:	e8 ac ff ff ff       	call   85d4a14 <_ZN12PvpUserTable11IsValidTeamEi>
 85d4a68:	83 f0 01             	xor    $0x1,%eax
 85d4a6b:	84 c0                	test   %al,%al
 85d4a6d:	74 07                	je     85d4a76 <_ZN12PvpUserTable16GetTeamUserCountEi+0x26>
 85d4a6f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d4a74:	eb 3f                	jmp    85d4ab5 <_ZN12PvpUserTable16GetTeamUserCountEi+0x65>
 85d4a76:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85d4a7d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d4a84:	eb 21                	jmp    85d4aa7 <_ZN12PvpUserTable16GetTeamUserCountEi+0x57>
 85d4a86:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d4a89:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d4a8c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4a8f:	c1 e1 03             	shl    $0x3,%ecx
 85d4a92:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4a95:	83 c2 24             	add    $0x24,%edx
 85d4a98:	8b 04 d0             	mov    (%eax,%edx,8),%eax
 85d4a9b:	85 c0                	test   %eax,%eax
 85d4a9d:	74 04                	je     85d4aa3 <_ZN12PvpUserTable16GetTeamUserCountEi+0x53>
 85d4a9f:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85d4aa3:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d4aa7:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d4aab:	0f 9e c0             	setle  %al
 85d4aae:	84 c0                	test   %al,%al
 85d4ab0:	75 d4                	jne    85d4a86 <_ZN12PvpUserTable16GetTeamUserCountEi+0x36>
 85d4ab2:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85d4ab5:	c9                   	leave
 85d4ab6:	c3                   	ret
 85d4ab7:	90                   	nop

```

```c
// PvpUserTable::GetTeamUserCount @ 0x85d4a50

/* PvpUserTable::GetTeamUserCount(int) */

int __thiscall PvpUserTable::GetTeamUserCount(PvpUserTable *this,int param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  cVar1 = IsValidTeam(this,param_1);
  if (cVar1 == '\x01') {
    local_c = 0;
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if (*(int *)(this + (param_1 * 8 + local_8 + 0x24) * 8) != 0) {
        local_c = local_c + 1;
      }
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}

```

---

## GetTeamVsTeamPoint

```asm
// === 085d4d5e PvpUserTable::GetTeamVsTeamPoint  [0x085d4d5e-0x85d4fc9] ===
 85d4d5e:	55                   	push   %ebp
 85d4d5f:	89 e5                	mov    %esp,%ebp
 85d4d61:	56                   	push   %esi
 85d4d62:	53                   	push   %ebx
 85d4d63:	83 ec 60             	sub    $0x60,%esp
 85d4d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4d69:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4d70:	89 04 24             	mov    %eax,(%esp)
 85d4d73:	e8 d8 fc ff ff       	call   85d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>
 85d4d78:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85d4d7b:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4d7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4d82:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4d85:	89 04 24             	mov    %eax,(%esp)
 85d4d88:	e8 c3 fc ff ff       	call   85d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>
 85d4d8d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85d4d90:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85d4d94:	74 06                	je     85d4d9c <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x3e>
 85d4d96:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85d4d9a:	75 0a                	jne    85d4da6 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x48>
 85d4d9c:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4da1:	e9 1c 02 00 00       	jmp    85d4fc2 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x264>
 85d4da6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4da9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4dac:	c1 e2 06             	shl    $0x6,%edx
 85d4daf:	01 d0                	add    %edx,%eax
 85d4db1:	05 20 01 00 00       	add    $0x120,%eax
 85d4db6:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 85d4dba:	83 f0 01             	xor    $0x1,%eax
 85d4dbd:	84 c0                	test   %al,%al
 85d4dbf:	74 0a                	je     85d4dcb <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x6d>
 85d4dc1:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4dc6:	e9 f7 01 00 00       	jmp    85d4fc2 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x264>
 85d4dcb:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4dce:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4dd1:	8d 4a 40             	lea    0x40(%edx),%ecx
 85d4dd4:	ba 00 00 00 00       	mov    $0x0,%edx
 85d4dd9:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d4ddc:	8b 55 10             	mov    0x10(%ebp),%edx
 85d4ddf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4de2:	8d 4a 40             	lea    0x40(%edx),%ecx
 85d4de5:	ba 00 00 00 00       	mov    $0x0,%edx
 85d4dea:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d4ded:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85d4df4:	eb 6a                	jmp    85d4e60 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x102>
 85d4df6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d4df9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d4dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4dff:	c1 e1 03             	shl    $0x3,%ecx
 85d4e02:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4e05:	83 c2 24             	add    $0x24,%edx
 85d4e08:	8b 04 d0             	mov    (%eax,%edx,8),%eax
 85d4e0b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d4e0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d4e11:	89 44 24 10          	mov    %eax,0x10(%esp)
 85d4e15:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4e18:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d4e1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4e1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d4e23:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d4e26:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4e2d:	89 04 24             	mov    %eax,(%esp)
 85d4e30:	e8 a7 af 00 00       	call   85dfddc <_ZN12PvpUserTable18GetUserVsTeamPointEiiiP5CUser>
 85d4e35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d4e38:	89 44 24 10          	mov    %eax,0x10(%esp)
 85d4e3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4e3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d4e43:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4e46:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d4e4a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d4e4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4e51:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4e54:	89 04 24             	mov    %eax,(%esp)
 85d4e57:	e8 80 af 00 00       	call   85dfddc <_ZN12PvpUserTable18GetUserVsTeamPointEiiiP5CUser>
 85d4e5c:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85d4e60:	83 7d e8 07          	cmpl   $0x7,-0x18(%ebp)
 85d4e64:	0f 9e c0             	setle  %al
 85d4e67:	84 c0                	test   %al,%al
 85d4e69:	75 8b                	jne    85d4df6 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x98>
 85d4e6b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d4e6e:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 85d4e71:	7e 42                	jle    85d4eb5 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x157>
 85d4e73:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d4e76:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d4e79:	89 d1                	mov    %edx,%ecx
 85d4e7b:	29 c1                	sub    %eax,%ecx
 85d4e7d:	89 c8                	mov    %ecx,%eax
 85d4e7f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d4e82:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d4e89:	eb 1d                	jmp    85d4ea8 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x14a>
 85d4e8b:	8b 45 10             	mov    0x10(%ebp),%eax
 85d4e8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d4e92:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d4e95:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d4e99:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4e9c:	89 04 24             	mov    %eax,(%esp)
 85d4e9f:	e8 26 01 00 00       	call   85d4fca <_ZN12PvpUserTable19GetGhostVsTeamPointEii>
 85d4ea4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d4ea8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d4eab:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85d4eae:	0f 9c c0             	setl   %al
 85d4eb1:	84 c0                	test   %al,%al
 85d4eb3:	75 d6                	jne    85d4e8b <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x12d>
 85d4eb5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4eb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4ebb:	83 c2 40             	add    $0x40,%edx
 85d4ebe:	d9 04 90             	flds   (%eax,%edx,4)
 85d4ec1:	8b 55 10             	mov    0x10(%ebp),%edx
 85d4ec4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4ec7:	83 c2 40             	add    $0x40,%edx
 85d4eca:	d9 04 90             	flds   (%eax,%edx,4)
 85d4ecd:	de c1                	faddp  %st,%st(1)
 85d4ecf:	d9 5d e0             	fstps  -0x20(%ebp)
 85d4ed2:	d9 45 e0             	flds   -0x20(%ebp)
 85d4ed5:	d9 ee                	fldz
 85d4ed7:	da e9                	fucompp
 85d4ed9:	df e0                	fnstsw %ax
 85d4edb:	9e                   	sahf
 85d4edc:	0f 95 c0             	setne  %al
 85d4edf:	0f 9a c2             	setp   %dl
 85d4ee2:	09 d0                	or     %edx,%eax
 85d4ee4:	83 f0 01             	xor    $0x1,%eax
 85d4ee7:	84 c0                	test   %al,%al
 85d4ee9:	74 4d                	je     85d4f38 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x1da>
 85d4eeb:	d9 45 e0             	flds   -0x20(%ebp)
 85d4eee:	dd 5d b8             	fstpl  -0x48(%ebp)
 85d4ef1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d4ef8:	00 
 85d4ef9:	c7 44 24 08 62 01 00 	movl   $0x162,0x8(%esp)
 85d4f00:	00 
 85d4f01:	c7 44 24 04 a0 27 cc 	movl   $0x8cc27a0,0x4(%esp)
 85d4f08:	08 
 85d4f09:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85d4f0c:	89 04 24             	mov    %eax,(%esp)
 85d4f0f:	e8 04 a8 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d4f14:	dd 45 b8             	fldl   -0x48(%ebp)
 85d4f17:	dd 5c 24 08          	fstpl  0x8(%esp)
 85d4f1b:	c7 44 24 04 dc 0e cc 	movl   $0x8cc0edc,0x4(%esp)
 85d4f22:	08 
 85d4f23:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85d4f26:	89 04 24             	mov    %eax,(%esp)
 85d4f29:	e8 5a a8 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d4f2e:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4f33:	e9 8a 00 00 00       	jmp    85d4fc2 <_ZN12PvpUserTable18GetTeamVsTeamPointEii+0x264>
 85d4f38:	8b 55 10             	mov    0x10(%ebp),%edx
 85d4f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4f3e:	83 c2 40             	add    $0x40,%edx
 85d4f41:	d9 04 90             	flds   (%eax,%edx,4)
 85d4f44:	d8 75 e0             	fdivs  -0x20(%ebp)
 85d4f47:	d9 5d e4             	fstps  -0x1c(%ebp)
 85d4f4a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d4f4d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d4f50:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85d4f53:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d4f56:	db 45 c4             	fildl  -0x3c(%ebp)
 85d4f59:	d9 45 e4             	flds   -0x1c(%ebp)
 85d4f5c:	de c9                	fmulp  %st,%st(1)
 85d4f5e:	d9 5d e4             	fstps  -0x1c(%ebp)
 85d4f61:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d4f64:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4f67:	8b 75 0c             	mov    0xc(%ebp),%esi
 85d4f6a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85d4f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4f70:	c1 e6 03             	shl    $0x3,%esi
 85d4f73:	8d 1c 1e             	lea    (%esi,%ebx,1),%ebx
 85d4f76:	d9 04 98             	flds   (%eax,%ebx,4)
 85d4f79:	db 45 d8             	fildl  -0x28(%ebp)
 85d4f7c:	d9 45 e4             	flds   -0x1c(%ebp)
 85d4f7f:	de f1                	fdivp  %st,%st(1)
 85d4f81:	de c1                	faddp  %st,%st(1)
 85d4f83:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4f86:	c1 e1 03             	shl    $0x3,%ecx
 85d4f89:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4f8c:	d9 1c 90             	fstps  (%eax,%edx,4)
 85d4f8f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85d4f92:	8b 55 10             	mov    0x10(%ebp),%edx
 85d4f95:	8b 75 0c             	mov    0xc(%ebp),%esi
 85d4f98:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85d4f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4f9e:	c1 e6 03             	shl    $0x3,%esi
 85d4fa1:	8d 1c 1e             	lea    (%esi,%ebx,1),%ebx
 85d4fa4:	d9 04 98             	flds   (%eax,%ebx,4)
 85d4fa7:	db 45 dc             	fildl  -0x24(%ebp)
 85d4faa:	d9 45 e4             	flds   -0x1c(%ebp)
 85d4fad:	de f1                	fdivp  %st,%st(1)
 85d4faf:	de e9                	fsubrp %st,%st(1)
 85d4fb1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4fb4:	c1 e1 03             	shl    $0x3,%ecx
 85d4fb7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d4fba:	d9 1c 90             	fstps  (%eax,%edx,4)
 85d4fbd:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4fc2:	83 c4 60             	add    $0x60,%esp
 85d4fc5:	5b                   	pop    %ebx
 85d4fc6:	5e                   	pop    %esi
 85d4fc7:	5d                   	pop    %ebp
 85d4fc8:	c3                   	ret
 85d4fc9:	90                   	nop

```

```c
// PvpUserTable::GetTeamVsTeamPoint @ 0x85d4d5e

/* PvpUserTable::GetTeamVsTeamPoint(int, int) */

undefined4 __thiscall PvpUserTable::GetTeamVsTeamPoint(PvpUserTable *this,int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  float local_24;
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_2c = GetTeamUserCount(this,param_1);
  local_28 = GetTeamUserCount(this,param_2);
  if ((local_2c == 0) || (local_28 == 0)) {
    uVar3 = 0;
  }
  else if (this[param_1 * 0x40 + 0x124] == (PvpUserTable)0x1) {
    *(undefined4 *)(this + (param_1 + 0x40) * 4) = 0;
    *(undefined4 *)(this + (param_2 + 0x40) * 4) = 0;
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      local_18 = *(CUser **)(this + (param_1 * 8 + local_1c + 0x24) * 8);
      GetUserVsTeamPoint(this,local_1c,param_1,param_2,local_18);
      GetUserVsTeamPoint(this,local_1c,param_2,param_1,local_18);
    }
    if (local_28 < local_2c) {
      local_14 = local_2c - local_28;
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        GetGhostVsTeamPoint((int)this,param_1);
      }
    }
    local_24 = *(float *)(this + (param_2 + 0x40) * 4) + *(float *)(this + (param_1 + 0x40) * 4);
    if (local_24 == 0.0) {
      dVar1 = (double)local_24;
      cMyTrace::cMyTrace(local_3c,"bool PvpUserTable::GetTeamVsTeamPoint(int, int)",0x162,5);
      cMyTrace::operator()(local_3c,"[FPE][PvpUserTable::GetTeamVsTeamPoint] RatioSum: %f",dVar1);
      uVar3 = 0;
    }
    else {
      fVar2 = (*(float *)(this + (param_2 + 0x40) * 4) / local_24) * (float)(local_2c + local_28);
      *(float *)(this + param_1 * 0x24) =
           fVar2 / (float)local_2c + *(float *)(this + param_1 * 0x24);
      *(float *)(this + (param_1 * 8 + param_2) * 4) =
           *(float *)(this + (param_1 * 8 + param_2) * 4) - fVar2 / (float)local_28;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## GradeFilter

```asm
// === 085d578a PvpUserTable::GradeFilter  [0x085d578a-0x85d57c1] ===
 85d578a:	55                   	push   %ebp
 85d578b:	89 e5                	mov    %esp,%ebp
 85d578d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d5791:	78 06                	js     85d5799 <_ZN12PvpUserTable11GradeFilterEi+0xf>
 85d5793:	83 7d 0c 22          	cmpl   $0x22,0xc(%ebp)
 85d5797:	7e 07                	jle    85d57a0 <_ZN12PvpUserTable11GradeFilterEi+0x16>
 85d5799:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d579e:	eb 20                	jmp    85d57c0 <_ZN12PvpUserTable11GradeFilterEi+0x36>
 85d57a0:	83 7d 0c 14          	cmpl   $0x14,0xc(%ebp)
 85d57a4:	7e 07                	jle    85d57ad <_ZN12PvpUserTable11GradeFilterEi+0x23>
 85d57a6:	b8 14 00 00 00       	mov    $0x14,%eax
 85d57ab:	eb 13                	jmp    85d57c0 <_ZN12PvpUserTable11GradeFilterEi+0x36>
 85d57ad:	83 7d 0c 09          	cmpl   $0x9,0xc(%ebp)
 85d57b1:	7f 07                	jg     85d57ba <_ZN12PvpUserTable11GradeFilterEi+0x30>
 85d57b3:	b8 00 00 00 00       	mov    $0x0,%eax
 85d57b8:	eb 06                	jmp    85d57c0 <_ZN12PvpUserTable11GradeFilterEi+0x36>
 85d57ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d57bd:	83 e8 09             	sub    $0x9,%eax
 85d57c0:	5d                   	pop    %ebp
 85d57c1:	c3                   	ret

```

```c
// PvpUserTable::GradeFilter @ 0x85d578a

/* PvpUserTable::GradeFilter(int) */

int __thiscall PvpUserTable::GradeFilter(PvpUserTable *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x22 < param_1)) {
    iVar1 = -1;
  }
  else if (param_1 < 0x15) {
    if (param_1 < 10) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + -9;
    }
  }
  else {
    iVar1 = 0x14;
  }
  return iVar1;
}

```

---

## IsValidConvertedGrade

```asm
// === 085d4a32 PvpUserTable::IsValidConvertedGrade  [0x085d4a32-0x85d4a4f] ===
 85d4a32:	55                   	push   %ebp
 85d4a33:	89 e5                	mov    %esp,%ebp
 85d4a35:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d4a39:	78 0d                	js     85d4a48 <_ZN12PvpUserTable21IsValidConvertedGradeEi+0x16>
 85d4a3b:	83 7d 0c 14          	cmpl   $0x14,0xc(%ebp)
 85d4a3f:	7f 07                	jg     85d4a48 <_ZN12PvpUserTable21IsValidConvertedGradeEi+0x16>
 85d4a41:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4a46:	eb 05                	jmp    85d4a4d <_ZN12PvpUserTable21IsValidConvertedGradeEi+0x1b>
 85d4a48:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4a4d:	5d                   	pop    %ebp
 85d4a4e:	c3                   	ret
 85d4a4f:	90                   	nop

```

```c
// PvpUserTable::IsValidConvertedGrade @ 0x85d4a32

/* PvpUserTable::IsValidConvertedGrade(int) */

undefined4 __thiscall PvpUserTable::IsValidConvertedGrade(PvpUserTable *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x14 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## IsValidTeam

```asm
// === 085d4a14 PvpUserTable::IsValidTeam  [0x085d4a14-0x85d4a31] ===
 85d4a14:	55                   	push   %ebp
 85d4a15:	89 e5                	mov    %esp,%ebp
 85d4a17:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d4a1b:	78 0d                	js     85d4a2a <_ZN12PvpUserTable11IsValidTeamEi+0x16>
 85d4a1d:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85d4a21:	7f 07                	jg     85d4a2a <_ZN12PvpUserTable11IsValidTeamEi+0x16>
 85d4a23:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4a28:	eb 05                	jmp    85d4a2f <_ZN12PvpUserTable11IsValidTeamEi+0x1b>
 85d4a2a:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4a2f:	5d                   	pop    %ebp
 85d4a30:	c3                   	ret
 85d4a31:	90                   	nop

```

```c
// PvpUserTable::IsValidTeam @ 0x85d4a14

/* PvpUserTable::IsValidTeam(int) */

undefined4 __thiscall PvpUserTable::IsValidTeam(PvpUserTable *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## PvpUserTable

```asm
// === 085d48f0 PvpUserTable::PvpUserTable  [0x085d48f0-0x85d4903] ===
 85d48f0:	55                   	push   %ebp
 85d48f1:	89 e5                	mov    %esp,%ebp
 85d48f3:	83 ec 18             	sub    $0x18,%esp
 85d48f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d48f9:	89 04 24             	mov    %eax,(%esp)
 85d48fc:	e8 09 00 00 00       	call   85d490a <_ZN12PvpUserTable5ClearEv>
 85d4901:	c9                   	leave
 85d4902:	c3                   	ret
 85d4903:	90                   	nop

```

```c
// PvpUserTable::PvpUserTable @ 0x85d48f0

/* PvpUserTable::PvpUserTable() */

void __thiscall PvpUserTable::PvpUserTable(PvpUserTable *this)

{
  Clear(this);
  return;
}

```

---

## Set

```asm
// === 085d4980 PvpUserTable::Set  [0x085d4980-0x85d4a13] ===
 85d4980:	55                   	push   %ebp
 85d4981:	89 e5                	mov    %esp,%ebp
 85d4983:	53                   	push   %ebx
 85d4984:	83 ec 24             	sub    $0x24,%esp
 85d4987:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d498a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d498e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4991:	89 04 24             	mov    %eax,(%esp)
 85d4994:	e8 7b 00 00 00       	call   85d4a14 <_ZN12PvpUserTable11IsValidTeamEi>
 85d4999:	83 f0 01             	xor    $0x1,%eax
 85d499c:	84 c0                	test   %al,%al
 85d499e:	75 06                	jne    85d49a6 <_ZN12PvpUserTable3SetEiP5CUser+0x26>
 85d49a0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d49a4:	75 07                	jne    85d49ad <_ZN12PvpUserTable3SetEiP5CUser+0x2d>
 85d49a6:	b8 01 00 00 00       	mov    $0x1,%eax
 85d49ab:	eb 05                	jmp    85d49b2 <_ZN12PvpUserTable3SetEiP5CUser+0x32>
 85d49ad:	b8 00 00 00 00       	mov    $0x0,%eax
 85d49b2:	84 c0                	test   %al,%al
 85d49b4:	74 07                	je     85d49bd <_ZN12PvpUserTable3SetEiP5CUser+0x3d>
 85d49b6:	b8 00 00 00 00       	mov    $0x0,%eax
 85d49bb:	eb 50                	jmp    85d4a0d <_ZN12PvpUserTable3SetEiP5CUser+0x8d>
 85d49bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d49c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d49c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d49c7:	89 04 24             	mov    %eax,(%esp)
 85d49ca:	e8 81 00 00 00       	call   85d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>
 85d49cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d49d2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d49d6:	7e 07                	jle    85d49df <_ZN12PvpUserTable3SetEiP5CUser+0x5f>
 85d49d8:	b8 00 00 00 00       	mov    $0x0,%eax
 85d49dd:	eb 2e                	jmp    85d4a0d <_ZN12PvpUserTable3SetEiP5CUser+0x8d>
 85d49df:	8b 45 10             	mov    0x10(%ebp),%eax
 85d49e2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d49e5:	c6 45 f0 00          	movb   $0x0,-0x10(%ebp)
 85d49e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d49ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d49ef:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d49f2:	c1 e2 03             	shl    $0x3,%edx
 85d49f5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85d49f8:	8d 58 24             	lea    0x24(%eax),%ebx
 85d49fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d49fe:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d4a01:	89 04 d9             	mov    %eax,(%ecx,%ebx,8)
 85d4a04:	89 54 d9 04          	mov    %edx,0x4(%ecx,%ebx,8)
 85d4a08:	b8 01 00 00 00       	mov    $0x1,%eax
 85d4a0d:	83 c4 24             	add    $0x24,%esp
 85d4a10:	5b                   	pop    %ebx
 85d4a11:	5d                   	pop    %ebp
 85d4a12:	c3                   	ret
 85d4a13:	90                   	nop

```

```c
// PvpUserTable::Set @ 0x85d4980

/* PvpUserTable::Set(int, CUser*) */

undefined4 __thiscall PvpUserTable::Set(PvpUserTable *this,int param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_14;
  
  cVar2 = IsValidTeam(this,param_1);
  if ((cVar2 == '\x01') && (param_2 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = GetTeamUserCount(this,param_1);
    if (iVar4 < 8) {
      local_14 = local_14 & 0xffffff00;
      iVar4 = param_1 * 8 + iVar4 + 0x24;
      *(CUser **)(this + iVar4 * 8) = param_2;
      *(uint *)(this + iVar4 * 8 + 4) = local_14;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## SetWinTeam

```asm
// === 085d585e PvpUserTable::SetWinTeam  [0x085d585e-0x85d58d9] ===
 85d585e:	55                   	push   %ebp
 85d585f:	89 e5                	mov    %esp,%ebp
 85d5861:	83 ec 10             	sub    $0x10,%esp
 85d5864:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5867:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d586a:	89 90 20 03 00 00    	mov    %edx,0x320(%eax)
 85d5870:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85d5877:	eb 54                	jmp    85d58cd <_ZN12PvpUserTable10SetWinTeamEi+0x6f>
 85d5879:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d5880:	eb 3c                	jmp    85d58be <_ZN12PvpUserTable10SetWinTeamEi+0x60>
 85d5882:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85d5885:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d5888:	75 19                	jne    85d58a3 <_ZN12PvpUserTable10SetWinTeamEi+0x45>
 85d588a:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 85d588d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d5890:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5893:	c1 e1 03             	shl    $0x3,%ecx
 85d5896:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d5899:	83 c2 24             	add    $0x24,%edx
 85d589c:	c6 44 d0 04 01       	movb   $0x1,0x4(%eax,%edx,8)
 85d58a1:	eb 17                	jmp    85d58ba <_ZN12PvpUserTable10SetWinTeamEi+0x5c>
 85d58a3:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 85d58a6:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d58a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d58ac:	c1 e1 03             	shl    $0x3,%ecx
 85d58af:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d58b2:	83 c2 24             	add    $0x24,%edx
 85d58b5:	c6 44 d0 04 00       	movb   $0x0,0x4(%eax,%edx,8)
 85d58ba:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d58be:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d58c2:	0f 9e c0             	setle  %al
 85d58c5:	84 c0                	test   %al,%al
 85d58c7:	75 b9                	jne    85d5882 <_ZN12PvpUserTable10SetWinTeamEi+0x24>
 85d58c9:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85d58cd:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 85d58d1:	0f 9e c0             	setle  %al
 85d58d4:	84 c0                	test   %al,%al
 85d58d6:	75 a1                	jne    85d5879 <_ZN12PvpUserTable10SetWinTeamEi+0x1b>
 85d58d8:	c9                   	leave
 85d58d9:	c3                   	ret

```

```c
// PvpUserTable::SetWinTeam @ 0x85d585e

/* PvpUserTable::SetWinTeam(int) */

void __thiscall PvpUserTable::SetWinTeam(PvpUserTable *this,int param_1)

{
  int local_c;
  int local_8;
  
  *(int *)(this + 800) = param_1;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if (local_c == param_1) {
        this[(local_c * 8 + local_8 + 0x24) * 8 + 4] = (PvpUserTable)0x1;
      }
      else {
        this[(local_c * 8 + local_8 + 0x24) * 8 + 4] = (PvpUserTable)0x0;
      }
    }
  }
  return;
}

```

---

## ~PvpUserTable

```asm
// === 085d4904 PvpUserTable::~PvpUserTable  [0x085d4904-0x85d4909] ===
 85d4904:	55                   	push   %ebp
 85d4905:	89 e5                	mov    %esp,%ebp
 85d4907:	5d                   	pop    %ebp
 85d4908:	c3                   	ret
 85d4909:	90                   	nop

```

```c
// PvpUserTable::~PvpUserTable @ 0x85d4904

/* PvpUserTable::~PvpUserTable() */

void __thiscall PvpUserTable::~PvpUserTable(PvpUserTable *this)

{
  return;
}

```

