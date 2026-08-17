# CNCryptoXTea

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoXTea

```asm
// === 0809d8cc CNCryptoXTea::CNCryptoXTea  [0x0809d8cc-0x809d969] ===
 809d8cc:	55                   	push   %ebp
 809d8cd:	89 e5                	mov    %esp,%ebp
 809d8cf:	56                   	push   %esi
 809d8d0:	53                   	push   %ebx
 809d8d1:	83 ec 30             	sub    $0x30,%esp
 809d8d4:	8b 45 08             	mov    0x8(%ebp),%eax
 809d8d7:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 809d8de:	00 
 809d8df:	89 04 24             	mov    %eax,(%esp)
 809d8e2:	e8 09 06 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809d8e7:	8b 45 08             	mov    0x8(%ebp),%eax
 809d8ea:	c7 00 68 3b b1 08    	movl   $0x8b13b68,(%eax)
 809d8f0:	8b 45 08             	mov    0x8(%ebp),%eax
 809d8f3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809d8fa:	c7 04 24 00 01 00 00 	movl   $0x100,(%esp)
 809d901:	e8 4a 6b 68 00       	call   8724450 <_Znwj>
 809d906:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d909:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809d90d:	74 53                	je     809d962 <_ZN12CNCryptoXTeaC1Ev+0x96>
 809d90f:	8b 45 08             	mov    0x8(%ebp),%eax
 809d912:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809d915:	89 50 08             	mov    %edx,0x8(%eax)
 809d918:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 809d91f:	00 
 809d920:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809d923:	89 04 24             	mov    %eax,(%esp)
 809d926:	e8 87 0d 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809d92b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809d932:	00 
 809d933:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809d936:	89 44 24 04          	mov    %eax,0x4(%esp)
 809d93a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d93d:	89 04 24             	mov    %eax,(%esp)
 809d940:	e8 db 00 00 00       	call   809da20 <_ZN12CNCryptoXTea10InitializeEPKhi>
 809d945:	eb 1b                	jmp    809d962 <_ZN12CNCryptoXTeaC1Ev+0x96>
 809d947:	89 d3                	mov    %edx,%ebx
 809d949:	89 c6                	mov    %eax,%esi
 809d94b:	8b 45 08             	mov    0x8(%ebp),%eax
 809d94e:	89 04 24             	mov    %eax,(%esp)
 809d951:	e8 b2 05 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809d956:	89 f0                	mov    %esi,%eax
 809d958:	89 da                	mov    %ebx,%edx
 809d95a:	89 04 24             	mov    %eax,(%esp)
 809d95d:	e8 ee 5d a4 00       	call   8ae3750 <_Unwind_Resume>
 809d962:	83 c4 30             	add    $0x30,%esp
 809d965:	5b                   	pop    %ebx
 809d966:	5e                   	pop    %esi
 809d967:	5d                   	pop    %ebp
 809d968:	c3                   	ret
 809d969:	90                   	nop

```

```c
// CNCryptoXTea::CNCryptoXTea @ 0x809d8cc

/* CNCryptoXTea::CNCryptoXTea() */

void __thiscall CNCryptoXTea::CNCryptoXTea(CNCryptoXTea *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,7);
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809d901 to 0809d944 has its CatchHandler @ 0809d947 */
  local_10 = operator_new(0x100);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoXTea_0809d9dc

```asm
// === 0809d9dc CNCryptoXTea::CNCryptoXTea  [0x0809d9dc-0x809d9ff] ===
 809d9dc:	55                   	push   %ebp
 809d9dd:	89 e5                	mov    %esp,%ebp
 809d9df:	83 ec 18             	sub    $0x18,%esp
 809d9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9e5:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 809d9ec:	00 
 809d9ed:	89 04 24             	mov    %eax,(%esp)
 809d9f0:	e8 fb 04 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809d9f5:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9f8:	c7 00 68 3b b1 08    	movl   $0x8b13b68,(%eax)
 809d9fe:	c9                   	leave
 809d9ff:	c3                   	ret

```

```c
// CNCryptoXTea::CNCryptoXTea @ 0x809d9dc

/* CNCryptoXTea::CNCryptoXTea(CNCryptoXTea const&) */

void __thiscall CNCryptoXTea::CNCryptoXTea(CNCryptoXTea *this,CNCryptoXTea *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,7);
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  return;
}

```

---

## Decrypt

```asm
// === 0809dba0 CNCryptoXTea::Decrypt  [0x0809dba0-0x809dc77] ===
 809dba0:	55                   	push   %ebp
 809dba1:	89 e5                	mov    %esp,%ebp
 809dba3:	83 ec 38             	sub    $0x38,%esp
 809dba6:	8b 45 08             	mov    0x8(%ebp),%eax
 809dba9:	8b 40 08             	mov    0x8(%eax),%eax
 809dbac:	85 c0                	test   %eax,%eax
 809dbae:	75 0a                	jne    809dbba <_ZN12CNCryptoXTea7DecryptEPhi+0x1a>
 809dbb0:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809dbb5:	e9 bb 00 00 00       	jmp    809dc75 <_ZN12CNCryptoXTea7DecryptEPhi+0xd5>
 809dbba:	8b 45 08             	mov    0x8(%ebp),%eax
 809dbbd:	8b 00                	mov    (%eax),%eax
 809dbbf:	83 c0 24             	add    $0x24,%eax
 809dbc2:	8b 10                	mov    (%eax),%edx
 809dbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 809dbc7:	89 04 24             	mov    %eax,(%esp)
 809dbca:	ff d2                	call   *%edx
 809dbcc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809dbcf:	8b 55 10             	mov    0x10(%ebp),%edx
 809dbd2:	89 d0                	mov    %edx,%eax
 809dbd4:	c1 fa 1f             	sar    $0x1f,%edx
 809dbd7:	f7 7d e0             	idivl  -0x20(%ebp)
 809dbda:	89 d0                	mov    %edx,%eax
 809dbdc:	85 c0                	test   %eax,%eax
 809dbde:	0f 95 c0             	setne  %al
 809dbe1:	84 c0                	test   %al,%al
 809dbe3:	74 0a                	je     809dbef <_ZN12CNCryptoXTea7DecryptEPhi+0x4f>
 809dbe5:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809dbea:	e9 86 00 00 00       	jmp    809dc75 <_ZN12CNCryptoXTea7DecryptEPhi+0xd5>
 809dbef:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809dbf3:	7f 07                	jg     809dbfc <_ZN12CNCryptoXTea7DecryptEPhi+0x5c>
 809dbf5:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809dbfa:	eb 79                	jmp    809dc75 <_ZN12CNCryptoXTea7DecryptEPhi+0xd5>
 809dbfc:	8b 45 08             	mov    0x8(%ebp),%eax
 809dbff:	8b 40 08             	mov    0x8(%eax),%eax
 809dc02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809dc05:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc08:	8b 00                	mov    (%eax),%eax
 809dc0a:	83 c0 24             	add    $0x24,%eax
 809dc0d:	8b 10                	mov    (%eax),%edx
 809dc0f:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc12:	89 04 24             	mov    %eax,(%esp)
 809dc15:	ff d2                	call   *%edx
 809dc17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809dc1a:	8b 45 10             	mov    0x10(%ebp),%eax
 809dc1d:	89 c2                	mov    %eax,%edx
 809dc1f:	c1 fa 1f             	sar    $0x1f,%edx
 809dc22:	f7 7d e4             	idivl  -0x1c(%ebp)
 809dc25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809dc28:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809dc2f:	eb 32                	jmp    809dc63 <_ZN12CNCryptoXTea7DecryptEPhi+0xc3>
 809dc31:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809dc34:	89 44 24 08          	mov    %eax,0x8(%esp)
 809dc38:	8b 45 0c             	mov    0xc(%ebp),%eax
 809dc3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 809dc3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 809dc42:	89 04 24             	mov    %eax,(%esp)
 809dc45:	e8 3c 7b 02 00       	call   80c5786 <_Z16xtea_ecb_decryptPKhPhP13symmetric_key>
 809dc4a:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc4d:	8b 00                	mov    (%eax),%eax
 809dc4f:	83 c0 24             	add    $0x24,%eax
 809dc52:	8b 10                	mov    (%eax),%edx
 809dc54:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc57:	89 04 24             	mov    %eax,(%esp)
 809dc5a:	ff d2                	call   *%edx
 809dc5c:	01 45 0c             	add    %eax,0xc(%ebp)
 809dc5f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809dc63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809dc66:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809dc69:	0f 9c c0             	setl   %al
 809dc6c:	84 c0                	test   %al,%al
 809dc6e:	75 c1                	jne    809dc31 <_ZN12CNCryptoXTea7DecryptEPhi+0x91>
 809dc70:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809dc75:	c9                   	leave
 809dc76:	c3                   	ret
 809dc77:	90                   	nop

```

```c
// CNCryptoXTea::Decrypt @ 0x809dba0

/* CNCryptoXTea::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoXTea::Decrypt(CNCryptoXTea *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          xtea_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Decrypt_0809dd6a

```asm
// === 0809dd6a CNCryptoXTea::Decrypt  [0x0809dd6a-0x809de5b] ===
 809dd6a:	55                   	push   %ebp
 809dd6b:	89 e5                	mov    %esp,%ebp
 809dd6d:	83 ec 38             	sub    $0x38,%esp
 809dd70:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd73:	8b 40 08             	mov    0x8(%eax),%eax
 809dd76:	85 c0                	test   %eax,%eax
 809dd78:	75 0a                	jne    809dd84 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0x1a>
 809dd7a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809dd7f:	e9 d5 00 00 00       	jmp    809de59 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0xef>
 809dd84:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd87:	8b 00                	mov    (%eax),%eax
 809dd89:	83 c0 24             	add    $0x24,%eax
 809dd8c:	8b 10                	mov    (%eax),%edx
 809dd8e:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd91:	89 04 24             	mov    %eax,(%esp)
 809dd94:	ff d2                	call   *%edx
 809dd96:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809dd99:	8b 55 10             	mov    0x10(%ebp),%edx
 809dd9c:	89 d0                	mov    %edx,%eax
 809dd9e:	c1 fa 1f             	sar    $0x1f,%edx
 809dda1:	f7 7d e0             	idivl  -0x20(%ebp)
 809dda4:	89 d0                	mov    %edx,%eax
 809dda6:	85 c0                	test   %eax,%eax
 809dda8:	0f 95 c0             	setne  %al
 809ddab:	84 c0                	test   %al,%al
 809ddad:	74 0a                	je     809ddb9 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0x4f>
 809ddaf:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ddb4:	e9 a0 00 00 00       	jmp    809de59 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0xef>
 809ddb9:	8b 45 10             	mov    0x10(%ebp),%eax
 809ddbc:	3b 45 18             	cmp    0x18(%ebp),%eax
 809ddbf:	7e 0a                	jle    809ddcb <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0x61>
 809ddc1:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ddc6:	e9 8e 00 00 00       	jmp    809de59 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0xef>
 809ddcb:	8b 45 08             	mov    0x8(%ebp),%eax
 809ddce:	8b 40 08             	mov    0x8(%eax),%eax
 809ddd1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809ddd4:	8b 45 08             	mov    0x8(%ebp),%eax
 809ddd7:	8b 00                	mov    (%eax),%eax
 809ddd9:	83 c0 24             	add    $0x24,%eax
 809dddc:	8b 10                	mov    (%eax),%edx
 809ddde:	8b 45 08             	mov    0x8(%ebp),%eax
 809dde1:	89 04 24             	mov    %eax,(%esp)
 809dde4:	ff d2                	call   *%edx
 809dde6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809dde9:	8b 45 10             	mov    0x10(%ebp),%eax
 809ddec:	89 c2                	mov    %eax,%edx
 809ddee:	c1 fa 1f             	sar    $0x1f,%edx
 809ddf1:	f7 7d e4             	idivl  -0x1c(%ebp)
 809ddf4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809ddf7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809ddfe:	eb 47                	jmp    809de47 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0xdd>
 809de00:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809de03:	89 44 24 08          	mov    %eax,0x8(%esp)
 809de07:	8b 45 14             	mov    0x14(%ebp),%eax
 809de0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809de0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 809de11:	89 04 24             	mov    %eax,(%esp)
 809de14:	e8 6d 79 02 00       	call   80c5786 <_Z16xtea_ecb_decryptPKhPhP13symmetric_key>
 809de19:	8b 45 08             	mov    0x8(%ebp),%eax
 809de1c:	8b 00                	mov    (%eax),%eax
 809de1e:	83 c0 24             	add    $0x24,%eax
 809de21:	8b 10                	mov    (%eax),%edx
 809de23:	8b 45 08             	mov    0x8(%ebp),%eax
 809de26:	89 04 24             	mov    %eax,(%esp)
 809de29:	ff d2                	call   *%edx
 809de2b:	01 45 0c             	add    %eax,0xc(%ebp)
 809de2e:	8b 45 08             	mov    0x8(%ebp),%eax
 809de31:	8b 00                	mov    (%eax),%eax
 809de33:	83 c0 24             	add    $0x24,%eax
 809de36:	8b 10                	mov    (%eax),%edx
 809de38:	8b 45 08             	mov    0x8(%ebp),%eax
 809de3b:	89 04 24             	mov    %eax,(%esp)
 809de3e:	ff d2                	call   *%edx
 809de40:	01 45 14             	add    %eax,0x14(%ebp)
 809de43:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809de47:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809de4a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809de4d:	0f 9c c0             	setl   %al
 809de50:	84 c0                	test   %al,%al
 809de52:	75 ac                	jne    809de00 <_ZN12CNCryptoXTea7DecryptEPKhiPhi+0x96>
 809de54:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809de59:	c9                   	leave
 809de5a:	c3                   	ret
 809de5b:	90                   	nop

```

```c
// CNCryptoXTea::Decrypt @ 0x809dd6a

/* CNCryptoXTea::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoXTea::Decrypt(CNCryptoXTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          xtea_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}

```

---

## Encrypt

```asm
// === 0809dac8 CNCryptoXTea::Encrypt  [0x0809dac8-0x809db9f] ===
 809dac8:	55                   	push   %ebp
 809dac9:	89 e5                	mov    %esp,%ebp
 809dacb:	83 ec 38             	sub    $0x38,%esp
 809dace:	8b 45 08             	mov    0x8(%ebp),%eax
 809dad1:	8b 40 08             	mov    0x8(%eax),%eax
 809dad4:	85 c0                	test   %eax,%eax
 809dad6:	75 0a                	jne    809dae2 <_ZN12CNCryptoXTea7EncryptEPhi+0x1a>
 809dad8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809dadd:	e9 bb 00 00 00       	jmp    809db9d <_ZN12CNCryptoXTea7EncryptEPhi+0xd5>
 809dae2:	8b 45 08             	mov    0x8(%ebp),%eax
 809dae5:	8b 00                	mov    (%eax),%eax
 809dae7:	83 c0 24             	add    $0x24,%eax
 809daea:	8b 10                	mov    (%eax),%edx
 809daec:	8b 45 08             	mov    0x8(%ebp),%eax
 809daef:	89 04 24             	mov    %eax,(%esp)
 809daf2:	ff d2                	call   *%edx
 809daf4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809daf7:	8b 55 10             	mov    0x10(%ebp),%edx
 809dafa:	89 d0                	mov    %edx,%eax
 809dafc:	c1 fa 1f             	sar    $0x1f,%edx
 809daff:	f7 7d e0             	idivl  -0x20(%ebp)
 809db02:	89 d0                	mov    %edx,%eax
 809db04:	85 c0                	test   %eax,%eax
 809db06:	0f 95 c0             	setne  %al
 809db09:	84 c0                	test   %al,%al
 809db0b:	74 0a                	je     809db17 <_ZN12CNCryptoXTea7EncryptEPhi+0x4f>
 809db0d:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809db12:	e9 86 00 00 00       	jmp    809db9d <_ZN12CNCryptoXTea7EncryptEPhi+0xd5>
 809db17:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809db1b:	7f 07                	jg     809db24 <_ZN12CNCryptoXTea7EncryptEPhi+0x5c>
 809db1d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809db22:	eb 79                	jmp    809db9d <_ZN12CNCryptoXTea7EncryptEPhi+0xd5>
 809db24:	8b 45 08             	mov    0x8(%ebp),%eax
 809db27:	8b 40 08             	mov    0x8(%eax),%eax
 809db2a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809db2d:	8b 45 08             	mov    0x8(%ebp),%eax
 809db30:	8b 00                	mov    (%eax),%eax
 809db32:	83 c0 24             	add    $0x24,%eax
 809db35:	8b 10                	mov    (%eax),%edx
 809db37:	8b 45 08             	mov    0x8(%ebp),%eax
 809db3a:	89 04 24             	mov    %eax,(%esp)
 809db3d:	ff d2                	call   *%edx
 809db3f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809db42:	8b 45 10             	mov    0x10(%ebp),%eax
 809db45:	89 c2                	mov    %eax,%edx
 809db47:	c1 fa 1f             	sar    $0x1f,%edx
 809db4a:	f7 7d e4             	idivl  -0x1c(%ebp)
 809db4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809db50:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809db57:	eb 32                	jmp    809db8b <_ZN12CNCryptoXTea7EncryptEPhi+0xc3>
 809db59:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809db5c:	89 44 24 08          	mov    %eax,0x8(%esp)
 809db60:	8b 45 0c             	mov    0xc(%ebp),%eax
 809db63:	89 44 24 04          	mov    %eax,0x4(%esp)
 809db67:	8b 45 0c             	mov    0xc(%ebp),%eax
 809db6a:	89 04 24             	mov    %eax,(%esp)
 809db6d:	e8 c4 79 02 00       	call   80c5536 <_Z16xtea_ecb_encryptPKhPhP13symmetric_key>
 809db72:	8b 45 08             	mov    0x8(%ebp),%eax
 809db75:	8b 00                	mov    (%eax),%eax
 809db77:	83 c0 24             	add    $0x24,%eax
 809db7a:	8b 10                	mov    (%eax),%edx
 809db7c:	8b 45 08             	mov    0x8(%ebp),%eax
 809db7f:	89 04 24             	mov    %eax,(%esp)
 809db82:	ff d2                	call   *%edx
 809db84:	01 45 0c             	add    %eax,0xc(%ebp)
 809db87:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809db8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809db8e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809db91:	0f 9c c0             	setl   %al
 809db94:	84 c0                	test   %al,%al
 809db96:	75 c1                	jne    809db59 <_ZN12CNCryptoXTea7EncryptEPhi+0x91>
 809db98:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809db9d:	c9                   	leave
 809db9e:	c3                   	ret
 809db9f:	90                   	nop

```

```c
// CNCryptoXTea::Encrypt @ 0x809dac8

/* CNCryptoXTea::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoXTea::Encrypt(CNCryptoXTea *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          xtea_ecb_encrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt_0809dc78

```asm
// === 0809dc78 CNCryptoXTea::Encrypt  [0x0809dc78-0x809dd69] ===
 809dc78:	55                   	push   %ebp
 809dc79:	89 e5                	mov    %esp,%ebp
 809dc7b:	83 ec 38             	sub    $0x38,%esp
 809dc7e:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc81:	8b 40 08             	mov    0x8(%eax),%eax
 809dc84:	85 c0                	test   %eax,%eax
 809dc86:	75 0a                	jne    809dc92 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0x1a>
 809dc88:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809dc8d:	e9 d5 00 00 00       	jmp    809dd67 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0xef>
 809dc92:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc95:	8b 00                	mov    (%eax),%eax
 809dc97:	83 c0 24             	add    $0x24,%eax
 809dc9a:	8b 10                	mov    (%eax),%edx
 809dc9c:	8b 45 08             	mov    0x8(%ebp),%eax
 809dc9f:	89 04 24             	mov    %eax,(%esp)
 809dca2:	ff d2                	call   *%edx
 809dca4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809dca7:	8b 55 10             	mov    0x10(%ebp),%edx
 809dcaa:	89 d0                	mov    %edx,%eax
 809dcac:	c1 fa 1f             	sar    $0x1f,%edx
 809dcaf:	f7 7d e0             	idivl  -0x20(%ebp)
 809dcb2:	89 d0                	mov    %edx,%eax
 809dcb4:	85 c0                	test   %eax,%eax
 809dcb6:	0f 95 c0             	setne  %al
 809dcb9:	84 c0                	test   %al,%al
 809dcbb:	74 0a                	je     809dcc7 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0x4f>
 809dcbd:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809dcc2:	e9 a0 00 00 00       	jmp    809dd67 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0xef>
 809dcc7:	8b 45 10             	mov    0x10(%ebp),%eax
 809dcca:	3b 45 18             	cmp    0x18(%ebp),%eax
 809dccd:	7e 0a                	jle    809dcd9 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0x61>
 809dccf:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809dcd4:	e9 8e 00 00 00       	jmp    809dd67 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0xef>
 809dcd9:	8b 45 08             	mov    0x8(%ebp),%eax
 809dcdc:	8b 40 08             	mov    0x8(%eax),%eax
 809dcdf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809dce2:	8b 45 08             	mov    0x8(%ebp),%eax
 809dce5:	8b 00                	mov    (%eax),%eax
 809dce7:	83 c0 24             	add    $0x24,%eax
 809dcea:	8b 10                	mov    (%eax),%edx
 809dcec:	8b 45 08             	mov    0x8(%ebp),%eax
 809dcef:	89 04 24             	mov    %eax,(%esp)
 809dcf2:	ff d2                	call   *%edx
 809dcf4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809dcf7:	8b 45 10             	mov    0x10(%ebp),%eax
 809dcfa:	89 c2                	mov    %eax,%edx
 809dcfc:	c1 fa 1f             	sar    $0x1f,%edx
 809dcff:	f7 7d e4             	idivl  -0x1c(%ebp)
 809dd02:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809dd05:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809dd0c:	eb 47                	jmp    809dd55 <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0xdd>
 809dd0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809dd11:	89 44 24 08          	mov    %eax,0x8(%esp)
 809dd15:	8b 45 14             	mov    0x14(%ebp),%eax
 809dd18:	89 44 24 04          	mov    %eax,0x4(%esp)
 809dd1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809dd1f:	89 04 24             	mov    %eax,(%esp)
 809dd22:	e8 0f 78 02 00       	call   80c5536 <_Z16xtea_ecb_encryptPKhPhP13symmetric_key>
 809dd27:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd2a:	8b 00                	mov    (%eax),%eax
 809dd2c:	83 c0 24             	add    $0x24,%eax
 809dd2f:	8b 10                	mov    (%eax),%edx
 809dd31:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd34:	89 04 24             	mov    %eax,(%esp)
 809dd37:	ff d2                	call   *%edx
 809dd39:	01 45 0c             	add    %eax,0xc(%ebp)
 809dd3c:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd3f:	8b 00                	mov    (%eax),%eax
 809dd41:	83 c0 24             	add    $0x24,%eax
 809dd44:	8b 10                	mov    (%eax),%edx
 809dd46:	8b 45 08             	mov    0x8(%ebp),%eax
 809dd49:	89 04 24             	mov    %eax,(%esp)
 809dd4c:	ff d2                	call   *%edx
 809dd4e:	01 45 14             	add    %eax,0x14(%ebp)
 809dd51:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809dd55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809dd58:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809dd5b:	0f 9c c0             	setl   %al
 809dd5e:	84 c0                	test   %al,%al
 809dd60:	75 ac                	jne    809dd0e <_ZN12CNCryptoXTea7EncryptEPKhiPhi+0x96>
 809dd62:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809dd67:	c9                   	leave
 809dd68:	c3                   	ret
 809dd69:	90                   	nop

```

```c
// CNCryptoXTea::Encrypt @ 0x809dc78

/* CNCryptoXTea::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoXTea::Encrypt(CNCryptoXTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          xtea_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 0809de5c CNCryptoXTea::GetBlockSize  [0x0809de5c-0x809de65] ===
 809de5c:	55                   	push   %ebp
 809de5d:	89 e5                	mov    %esp,%ebp
 809de5f:	b8 08 00 00 00       	mov    $0x8,%eax
 809de64:	5d                   	pop    %ebp
 809de65:	c3                   	ret

```

```c
// CNCryptoXTea::GetBlockSize @ 0x809de5c

/* CNCryptoXTea::GetBlockSize() const */

undefined4 CNCryptoXTea::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809de66 CNCryptoXTea::GetKeySize  [0x0809de66-0x809de6f] ===
 809de66:	55                   	push   %ebp
 809de67:	89 e5                	mov    %esp,%ebp
 809de69:	b8 10 00 00 00       	mov    $0x10,%eax
 809de6e:	5d                   	pop    %ebp
 809de6f:	c3                   	ret

```

```c
// CNCryptoXTea::GetKeySize @ 0x809de66

/* CNCryptoXTea::GetKeySize() const */

undefined4 CNCryptoXTea::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809da20 CNCryptoXTea::Initialize  [0x0809da20-0x809dac7] ===
 809da20:	55                   	push   %ebp
 809da21:	89 e5                	mov    %esp,%ebp
 809da23:	83 ec 28             	sub    $0x28,%esp
 809da26:	8b 45 08             	mov    0x8(%ebp),%eax
 809da29:	8b 40 08             	mov    0x8(%eax),%eax
 809da2c:	85 c0                	test   %eax,%eax
 809da2e:	75 0a                	jne    809da3a <_ZN12CNCryptoXTea10InitializeEPKhi+0x1a>
 809da30:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809da35:	e9 8b 00 00 00       	jmp    809dac5 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa5>
 809da3a:	8b 45 08             	mov    0x8(%ebp),%eax
 809da3d:	8b 00                	mov    (%eax),%eax
 809da3f:	83 c0 20             	add    $0x20,%eax
 809da42:	8b 10                	mov    (%eax),%edx
 809da44:	8b 45 08             	mov    0x8(%ebp),%eax
 809da47:	89 04 24             	mov    %eax,(%esp)
 809da4a:	ff d2                	call   *%edx
 809da4c:	3b 45 10             	cmp    0x10(%ebp),%eax
 809da4f:	0f 9f c0             	setg   %al
 809da52:	84 c0                	test   %al,%al
 809da54:	74 07                	je     809da5d <_ZN12CNCryptoXTea10InitializeEPKhi+0x3d>
 809da56:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809da5b:	eb 68                	jmp    809dac5 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa5>
 809da5d:	8b 45 08             	mov    0x8(%ebp),%eax
 809da60:	8b 40 08             	mov    0x8(%eax),%eax
 809da63:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809da66:	8b 45 08             	mov    0x8(%ebp),%eax
 809da69:	8b 00                	mov    (%eax),%eax
 809da6b:	83 c0 20             	add    $0x20,%eax
 809da6e:	8b 10                	mov    (%eax),%edx
 809da70:	8b 45 08             	mov    0x8(%ebp),%eax
 809da73:	89 04 24             	mov    %eax,(%esp)
 809da76:	ff d2                	call   *%edx
 809da78:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809da7b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809da7f:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 809da86:	00 
 809da87:	89 44 24 04          	mov    %eax,0x4(%esp)
 809da8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809da8e:	89 04 24             	mov    %eax,(%esp)
 809da91:	e8 f2 78 02 00       	call   80c5388 <_Z10xtea_setupPKhiiP13symmetric_key>
 809da96:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809da99:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809da9d:	75 07                	jne    809daa6 <_ZN12CNCryptoXTea10InitializeEPKhi+0x86>
 809da9f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809daa4:	eb 1f                	jmp    809dac5 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa5>
 809daa6:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809daaa:	75 07                	jne    809dab3 <_ZN12CNCryptoXTea10InitializeEPKhi+0x93>
 809daac:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809dab1:	eb 12                	jmp    809dac5 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa5>
 809dab3:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809dab7:	75 07                	jne    809dac0 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa0>
 809dab9:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809dabe:	eb 05                	jmp    809dac5 <_ZN12CNCryptoXTea10InitializeEPKhi+0xa5>
 809dac0:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809dac5:	c9                   	leave
 809dac6:	c3                   	ret
 809dac7:	90                   	nop

```

```c
// CNCryptoXTea::Initialize @ 0x809da20

/* CNCryptoXTea::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoXTea::Initialize(CNCryptoXTea *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x7000000a;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = xtea_setup(param_1,iVar3,0x20,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}

```

---

## SetMode

```asm
// === 0809da08 CNCryptoXTea::SetMode  [0x0809da08-0x809da1f] ===
 809da08:	55                   	push   %ebp
 809da09:	89 e5                	mov    %esp,%ebp
 809da0b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809da0f:	75 07                	jne    809da18 <_ZN12CNCryptoXTea7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809da11:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809da16:	eb 05                	jmp    809da1d <_ZN12CNCryptoXTea7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809da18:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809da1d:	5d                   	pop    %ebp
 809da1e:	c3                   	ret
 809da1f:	90                   	nop

```

```c
// CNCryptoXTea::SetMode @ 0x809da08

/* CNCryptoXTea::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoXTea::SetMode(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 0809da00 CNCryptoXTea::operator=  [0x0809da00-0x809da07] ===
 809da00:	55                   	push   %ebp
 809da01:	89 e5                	mov    %esp,%ebp
 809da03:	8b 45 08             	mov    0x8(%ebp),%eax
 809da06:	5d                   	pop    %ebp
 809da07:	c3                   	ret

```

```c
// CNCryptoXTea::operator= @ 0x809da00

/* CNCryptoXTea::TEMPNAMEPLACEHOLDERVALUE(CNCryptoXTea const&) */

CNCryptoXTea * __thiscall CNCryptoXTea::operator=(CNCryptoXTea *this,CNCryptoXTea *param_1)

{
  return this;
}

```

---

## ~CNCryptoXTea

```asm
// === 0809d96a CNCryptoXTea::~CNCryptoXTea  [0x0809d96a-0x809d9bd] ===
 809d96a:	55                   	push   %ebp
 809d96b:	89 e5                	mov    %esp,%ebp
 809d96d:	83 ec 28             	sub    $0x28,%esp
 809d970:	8b 45 08             	mov    0x8(%ebp),%eax
 809d973:	c7 00 68 3b b1 08    	movl   $0x8b13b68,(%eax)
 809d979:	8b 45 08             	mov    0x8(%ebp),%eax
 809d97c:	8b 40 08             	mov    0x8(%eax),%eax
 809d97f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d982:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809d986:	74 15                	je     809d99d <_ZN12CNCryptoXTeaD1Ev+0x33>
 809d988:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809d98b:	89 04 24             	mov    %eax,(%esp)
 809d98e:	e8 5d 6b 68 00       	call   87244f0 <_ZdlPv>
 809d993:	8b 45 08             	mov    0x8(%ebp),%eax
 809d996:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809d99d:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9a0:	89 04 24             	mov    %eax,(%esp)
 809d9a3:	e8 60 05 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809d9a8:	b8 00 00 00 00       	mov    $0x0,%eax
 809d9ad:	84 c0                	test   %al,%al
 809d9af:	74 0b                	je     809d9bc <_ZN12CNCryptoXTeaD1Ev+0x52>
 809d9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9b4:	89 04 24             	mov    %eax,(%esp)
 809d9b7:	e8 34 6b 68 00       	call   87244f0 <_ZdlPv>
 809d9bc:	c9                   	leave
 809d9bd:	c3                   	ret

```

```c
// CNCryptoXTea::~CNCryptoXTea @ 0x809d96a

/* WARNING: Removing unreachable block (ram,0x0809d9b1) */
/* CNCryptoXTea::~CNCryptoXTea() */

void __thiscall CNCryptoXTea::~CNCryptoXTea(CNCryptoXTea *this)

{
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoXTea_0809d9be

```asm
// === 0809d9be CNCryptoXTea::~CNCryptoXTea  [0x0809d9be-0x809d9db] ===
 809d9be:	55                   	push   %ebp
 809d9bf:	89 e5                	mov    %esp,%ebp
 809d9c1:	83 ec 18             	sub    $0x18,%esp
 809d9c4:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9c7:	89 04 24             	mov    %eax,(%esp)
 809d9ca:	e8 9b ff ff ff       	call   809d96a <_ZN12CNCryptoXTeaD1Ev>
 809d9cf:	8b 45 08             	mov    0x8(%ebp),%eax
 809d9d2:	89 04 24             	mov    %eax,(%esp)
 809d9d5:	e8 16 6b 68 00       	call   87244f0 <_ZdlPv>
 809d9da:	c9                   	leave
 809d9db:	c3                   	ret

```

```c
// CNCryptoXTea::~CNCryptoXTea @ 0x809d9be

/* CNCryptoXTea::~CNCryptoXTea() */

void __thiscall CNCryptoXTea::~CNCryptoXTea(CNCryptoXTea *this)

{
  ~CNCryptoXTea(this);
  operator_delete(this);
  return;
}

```

