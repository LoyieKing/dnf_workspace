# CNCryptoKhazad

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoKhazad

```asm
// === 0809aa54 CNCryptoKhazad::CNCryptoKhazad  [0x0809aa54-0x809aaf1] ===
 809aa54:	55                   	push   %ebp
 809aa55:	89 e5                	mov    %esp,%ebp
 809aa57:	56                   	push   %esi
 809aa58:	53                   	push   %ebx
 809aa59:	83 ec 30             	sub    $0x30,%esp
 809aa5c:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa5f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 809aa66:	00 
 809aa67:	89 04 24             	mov    %eax,(%esp)
 809aa6a:	e8 81 34 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809aa6f:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa72:	c7 00 08 38 b1 08    	movl   $0x8b13808,(%eax)
 809aa78:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa7b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809aa82:	c7 04 24 90 00 00 00 	movl   $0x90,(%esp)
 809aa89:	e8 c2 99 68 00       	call   8724450 <_Znwj>
 809aa8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809aa91:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809aa95:	74 53                	je     809aaea <_ZN14CNCryptoKhazadC1Ev+0x96>
 809aa97:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa9a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809aa9d:	89 50 08             	mov    %edx,0x8(%eax)
 809aaa0:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 809aaa7:	00 
 809aaa8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809aaab:	89 04 24             	mov    %eax,(%esp)
 809aaae:	e8 ff 3b 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809aab3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809aaba:	00 
 809aabb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809aabe:	89 44 24 04          	mov    %eax,0x4(%esp)
 809aac2:	8b 45 08             	mov    0x8(%ebp),%eax
 809aac5:	89 04 24             	mov    %eax,(%esp)
 809aac8:	e8 db 00 00 00       	call   809aba8 <_ZN14CNCryptoKhazad10InitializeEPKhi>
 809aacd:	eb 1b                	jmp    809aaea <_ZN14CNCryptoKhazadC1Ev+0x96>
 809aacf:	89 d3                	mov    %edx,%ebx
 809aad1:	89 c6                	mov    %eax,%esi
 809aad3:	8b 45 08             	mov    0x8(%ebp),%eax
 809aad6:	89 04 24             	mov    %eax,(%esp)
 809aad9:	e8 2a 34 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809aade:	89 f0                	mov    %esi,%eax
 809aae0:	89 da                	mov    %ebx,%edx
 809aae2:	89 04 24             	mov    %eax,(%esp)
 809aae5:	e8 66 8c a4 00       	call   8ae3750 <_Unwind_Resume>
 809aaea:	83 c4 30             	add    $0x30,%esp
 809aaed:	5b                   	pop    %ebx
 809aaee:	5e                   	pop    %esi
 809aaef:	5d                   	pop    %ebp
 809aaf0:	c3                   	ret
 809aaf1:	90                   	nop

```

```c
// CNCryptoKhazad::CNCryptoKhazad @ 0x809aa54

/* CNCryptoKhazad::CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,9);
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809aa89 to 0809aacc has its CatchHandler @ 0809aacf */
  local_10 = operator_new(0x90);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoKhazad_0809ab64

```asm
// === 0809ab64 CNCryptoKhazad::CNCryptoKhazad  [0x0809ab64-0x809ab87] ===
 809ab64:	55                   	push   %ebp
 809ab65:	89 e5                	mov    %esp,%ebp
 809ab67:	83 ec 18             	sub    $0x18,%esp
 809ab6a:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab6d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 809ab74:	00 
 809ab75:	89 04 24             	mov    %eax,(%esp)
 809ab78:	e8 73 33 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809ab7d:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab80:	c7 00 08 38 b1 08    	movl   $0x8b13808,(%eax)
 809ab86:	c9                   	leave
 809ab87:	c3                   	ret

```

```c
// CNCryptoKhazad::CNCryptoKhazad @ 0x809ab64

/* CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad const&) */

void __thiscall CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad *this,CNCryptoKhazad *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,9);
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  return;
}

```

---

## Decrypt

```asm
// === 0809ad28 CNCryptoKhazad::Decrypt  [0x0809ad28-0x809adff] ===
 809ad28:	55                   	push   %ebp
 809ad29:	89 e5                	mov    %esp,%ebp
 809ad2b:	83 ec 38             	sub    $0x38,%esp
 809ad2e:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad31:	8b 40 08             	mov    0x8(%eax),%eax
 809ad34:	85 c0                	test   %eax,%eax
 809ad36:	75 0a                	jne    809ad42 <_ZN14CNCryptoKhazad7DecryptEPhi+0x1a>
 809ad38:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809ad3d:	e9 bb 00 00 00       	jmp    809adfd <_ZN14CNCryptoKhazad7DecryptEPhi+0xd5>
 809ad42:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad45:	8b 00                	mov    (%eax),%eax
 809ad47:	83 c0 24             	add    $0x24,%eax
 809ad4a:	8b 10                	mov    (%eax),%edx
 809ad4c:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad4f:	89 04 24             	mov    %eax,(%esp)
 809ad52:	ff d2                	call   *%edx
 809ad54:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809ad57:	8b 55 10             	mov    0x10(%ebp),%edx
 809ad5a:	89 d0                	mov    %edx,%eax
 809ad5c:	c1 fa 1f             	sar    $0x1f,%edx
 809ad5f:	f7 7d e0             	idivl  -0x20(%ebp)
 809ad62:	89 d0                	mov    %edx,%eax
 809ad64:	85 c0                	test   %eax,%eax
 809ad66:	0f 95 c0             	setne  %al
 809ad69:	84 c0                	test   %al,%al
 809ad6b:	74 0a                	je     809ad77 <_ZN14CNCryptoKhazad7DecryptEPhi+0x4f>
 809ad6d:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809ad72:	e9 86 00 00 00       	jmp    809adfd <_ZN14CNCryptoKhazad7DecryptEPhi+0xd5>
 809ad77:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809ad7b:	7f 07                	jg     809ad84 <_ZN14CNCryptoKhazad7DecryptEPhi+0x5c>
 809ad7d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ad82:	eb 79                	jmp    809adfd <_ZN14CNCryptoKhazad7DecryptEPhi+0xd5>
 809ad84:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad87:	8b 40 08             	mov    0x8(%eax),%eax
 809ad8a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809ad8d:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad90:	8b 00                	mov    (%eax),%eax
 809ad92:	83 c0 24             	add    $0x24,%eax
 809ad95:	8b 10                	mov    (%eax),%edx
 809ad97:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad9a:	89 04 24             	mov    %eax,(%esp)
 809ad9d:	ff d2                	call   *%edx
 809ad9f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809ada2:	8b 45 10             	mov    0x10(%ebp),%eax
 809ada5:	89 c2                	mov    %eax,%edx
 809ada7:	c1 fa 1f             	sar    $0x1f,%edx
 809adaa:	f7 7d e4             	idivl  -0x1c(%ebp)
 809adad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809adb0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809adb7:	eb 32                	jmp    809adeb <_ZN14CNCryptoKhazad7DecryptEPhi+0xc3>
 809adb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809adbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 809adc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 809adc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 809adc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 809adca:	89 04 24             	mov    %eax,(%esp)
 809adcd:	e8 af 7c 01 00       	call   80b2a81 <_Z18khazad_ecb_decryptPKhPhP13symmetric_key>
 809add2:	8b 45 08             	mov    0x8(%ebp),%eax
 809add5:	8b 00                	mov    (%eax),%eax
 809add7:	83 c0 24             	add    $0x24,%eax
 809adda:	8b 10                	mov    (%eax),%edx
 809addc:	8b 45 08             	mov    0x8(%ebp),%eax
 809addf:	89 04 24             	mov    %eax,(%esp)
 809ade2:	ff d2                	call   *%edx
 809ade4:	01 45 0c             	add    %eax,0xc(%ebp)
 809ade7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809adeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809adee:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809adf1:	0f 9c c0             	setl   %al
 809adf4:	84 c0                	test   %al,%al
 809adf6:	75 c1                	jne    809adb9 <_ZN14CNCryptoKhazad7DecryptEPhi+0x91>
 809adf8:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809adfd:	c9                   	leave
 809adfe:	c3                   	ret
 809adff:	90                   	nop

```

```c
// CNCryptoKhazad::Decrypt @ 0x809ad28

/* CNCryptoKhazad::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKhazad::Decrypt(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
          khazad_ecb_decrypt(param_1,param_1,psVar1);
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

## Decrypt_0809aef2

```asm
// === 0809aef2 CNCryptoKhazad::Decrypt  [0x0809aef2-0x809afe3] ===
 809aef2:	55                   	push   %ebp
 809aef3:	89 e5                	mov    %esp,%ebp
 809aef5:	83 ec 38             	sub    $0x38,%esp
 809aef8:	8b 45 08             	mov    0x8(%ebp),%eax
 809aefb:	8b 40 08             	mov    0x8(%eax),%eax
 809aefe:	85 c0                	test   %eax,%eax
 809af00:	75 0a                	jne    809af0c <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0x1a>
 809af02:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809af07:	e9 d5 00 00 00       	jmp    809afe1 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0xef>
 809af0c:	8b 45 08             	mov    0x8(%ebp),%eax
 809af0f:	8b 00                	mov    (%eax),%eax
 809af11:	83 c0 24             	add    $0x24,%eax
 809af14:	8b 10                	mov    (%eax),%edx
 809af16:	8b 45 08             	mov    0x8(%ebp),%eax
 809af19:	89 04 24             	mov    %eax,(%esp)
 809af1c:	ff d2                	call   *%edx
 809af1e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809af21:	8b 55 10             	mov    0x10(%ebp),%edx
 809af24:	89 d0                	mov    %edx,%eax
 809af26:	c1 fa 1f             	sar    $0x1f,%edx
 809af29:	f7 7d e0             	idivl  -0x20(%ebp)
 809af2c:	89 d0                	mov    %edx,%eax
 809af2e:	85 c0                	test   %eax,%eax
 809af30:	0f 95 c0             	setne  %al
 809af33:	84 c0                	test   %al,%al
 809af35:	74 0a                	je     809af41 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0x4f>
 809af37:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809af3c:	e9 a0 00 00 00       	jmp    809afe1 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0xef>
 809af41:	8b 45 10             	mov    0x10(%ebp),%eax
 809af44:	3b 45 18             	cmp    0x18(%ebp),%eax
 809af47:	7e 0a                	jle    809af53 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0x61>
 809af49:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809af4e:	e9 8e 00 00 00       	jmp    809afe1 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0xef>
 809af53:	8b 45 08             	mov    0x8(%ebp),%eax
 809af56:	8b 40 08             	mov    0x8(%eax),%eax
 809af59:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809af5c:	8b 45 08             	mov    0x8(%ebp),%eax
 809af5f:	8b 00                	mov    (%eax),%eax
 809af61:	83 c0 24             	add    $0x24,%eax
 809af64:	8b 10                	mov    (%eax),%edx
 809af66:	8b 45 08             	mov    0x8(%ebp),%eax
 809af69:	89 04 24             	mov    %eax,(%esp)
 809af6c:	ff d2                	call   *%edx
 809af6e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809af71:	8b 45 10             	mov    0x10(%ebp),%eax
 809af74:	89 c2                	mov    %eax,%edx
 809af76:	c1 fa 1f             	sar    $0x1f,%edx
 809af79:	f7 7d e4             	idivl  -0x1c(%ebp)
 809af7c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809af7f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809af86:	eb 47                	jmp    809afcf <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0xdd>
 809af88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809af8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 809af8f:	8b 45 14             	mov    0x14(%ebp),%eax
 809af92:	89 44 24 04          	mov    %eax,0x4(%esp)
 809af96:	8b 45 0c             	mov    0xc(%ebp),%eax
 809af99:	89 04 24             	mov    %eax,(%esp)
 809af9c:	e8 e0 7a 01 00       	call   80b2a81 <_Z18khazad_ecb_decryptPKhPhP13symmetric_key>
 809afa1:	8b 45 08             	mov    0x8(%ebp),%eax
 809afa4:	8b 00                	mov    (%eax),%eax
 809afa6:	83 c0 24             	add    $0x24,%eax
 809afa9:	8b 10                	mov    (%eax),%edx
 809afab:	8b 45 08             	mov    0x8(%ebp),%eax
 809afae:	89 04 24             	mov    %eax,(%esp)
 809afb1:	ff d2                	call   *%edx
 809afb3:	01 45 0c             	add    %eax,0xc(%ebp)
 809afb6:	8b 45 08             	mov    0x8(%ebp),%eax
 809afb9:	8b 00                	mov    (%eax),%eax
 809afbb:	83 c0 24             	add    $0x24,%eax
 809afbe:	8b 10                	mov    (%eax),%edx
 809afc0:	8b 45 08             	mov    0x8(%ebp),%eax
 809afc3:	89 04 24             	mov    %eax,(%esp)
 809afc6:	ff d2                	call   *%edx
 809afc8:	01 45 14             	add    %eax,0x14(%ebp)
 809afcb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809afcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809afd2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809afd5:	0f 9c c0             	setl   %al
 809afd8:	84 c0                	test   %al,%al
 809afda:	75 ac                	jne    809af88 <_ZN14CNCryptoKhazad7DecryptEPKhiPhi+0x96>
 809afdc:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809afe1:	c9                   	leave
 809afe2:	c3                   	ret
 809afe3:	90                   	nop

```

```c
// CNCryptoKhazad::Decrypt @ 0x809aef2

/* CNCryptoKhazad::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKhazad::Decrypt(CNCryptoKhazad *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          khazad_ecb_decrypt(param_1,param_3,psVar1);
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
// === 0809ac50 CNCryptoKhazad::Encrypt  [0x0809ac50-0x809ad27] ===
 809ac50:	55                   	push   %ebp
 809ac51:	89 e5                	mov    %esp,%ebp
 809ac53:	83 ec 38             	sub    $0x38,%esp
 809ac56:	8b 45 08             	mov    0x8(%ebp),%eax
 809ac59:	8b 40 08             	mov    0x8(%eax),%eax
 809ac5c:	85 c0                	test   %eax,%eax
 809ac5e:	75 0a                	jne    809ac6a <_ZN14CNCryptoKhazad7EncryptEPhi+0x1a>
 809ac60:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809ac65:	e9 bb 00 00 00       	jmp    809ad25 <_ZN14CNCryptoKhazad7EncryptEPhi+0xd5>
 809ac6a:	8b 45 08             	mov    0x8(%ebp),%eax
 809ac6d:	8b 00                	mov    (%eax),%eax
 809ac6f:	83 c0 24             	add    $0x24,%eax
 809ac72:	8b 10                	mov    (%eax),%edx
 809ac74:	8b 45 08             	mov    0x8(%ebp),%eax
 809ac77:	89 04 24             	mov    %eax,(%esp)
 809ac7a:	ff d2                	call   *%edx
 809ac7c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809ac7f:	8b 55 10             	mov    0x10(%ebp),%edx
 809ac82:	89 d0                	mov    %edx,%eax
 809ac84:	c1 fa 1f             	sar    $0x1f,%edx
 809ac87:	f7 7d e0             	idivl  -0x20(%ebp)
 809ac8a:	89 d0                	mov    %edx,%eax
 809ac8c:	85 c0                	test   %eax,%eax
 809ac8e:	0f 95 c0             	setne  %al
 809ac91:	84 c0                	test   %al,%al
 809ac93:	74 0a                	je     809ac9f <_ZN14CNCryptoKhazad7EncryptEPhi+0x4f>
 809ac95:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809ac9a:	e9 86 00 00 00       	jmp    809ad25 <_ZN14CNCryptoKhazad7EncryptEPhi+0xd5>
 809ac9f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809aca3:	7f 07                	jg     809acac <_ZN14CNCryptoKhazad7EncryptEPhi+0x5c>
 809aca5:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809acaa:	eb 79                	jmp    809ad25 <_ZN14CNCryptoKhazad7EncryptEPhi+0xd5>
 809acac:	8b 45 08             	mov    0x8(%ebp),%eax
 809acaf:	8b 40 08             	mov    0x8(%eax),%eax
 809acb2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809acb5:	8b 45 08             	mov    0x8(%ebp),%eax
 809acb8:	8b 00                	mov    (%eax),%eax
 809acba:	83 c0 24             	add    $0x24,%eax
 809acbd:	8b 10                	mov    (%eax),%edx
 809acbf:	8b 45 08             	mov    0x8(%ebp),%eax
 809acc2:	89 04 24             	mov    %eax,(%esp)
 809acc5:	ff d2                	call   *%edx
 809acc7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809acca:	8b 45 10             	mov    0x10(%ebp),%eax
 809accd:	89 c2                	mov    %eax,%edx
 809accf:	c1 fa 1f             	sar    $0x1f,%edx
 809acd2:	f7 7d e4             	idivl  -0x1c(%ebp)
 809acd5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809acd8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809acdf:	eb 32                	jmp    809ad13 <_ZN14CNCryptoKhazad7EncryptEPhi+0xc3>
 809ace1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809ace4:	89 44 24 08          	mov    %eax,0x8(%esp)
 809ace8:	8b 45 0c             	mov    0xc(%ebp),%eax
 809aceb:	89 44 24 04          	mov    %eax,0x4(%esp)
 809acef:	8b 45 0c             	mov    0xc(%ebp),%eax
 809acf2:	89 04 24             	mov    %eax,(%esp)
 809acf5:	e8 61 7d 01 00       	call   80b2a5b <_Z18khazad_ecb_encryptPKhPhP13symmetric_key>
 809acfa:	8b 45 08             	mov    0x8(%ebp),%eax
 809acfd:	8b 00                	mov    (%eax),%eax
 809acff:	83 c0 24             	add    $0x24,%eax
 809ad02:	8b 10                	mov    (%eax),%edx
 809ad04:	8b 45 08             	mov    0x8(%ebp),%eax
 809ad07:	89 04 24             	mov    %eax,(%esp)
 809ad0a:	ff d2                	call   *%edx
 809ad0c:	01 45 0c             	add    %eax,0xc(%ebp)
 809ad0f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809ad13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809ad16:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809ad19:	0f 9c c0             	setl   %al
 809ad1c:	84 c0                	test   %al,%al
 809ad1e:	75 c1                	jne    809ace1 <_ZN14CNCryptoKhazad7EncryptEPhi+0x91>
 809ad20:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ad25:	c9                   	leave
 809ad26:	c3                   	ret
 809ad27:	90                   	nop

```

```c
// CNCryptoKhazad::Encrypt @ 0x809ac50

/* CNCryptoKhazad::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKhazad::Encrypt(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
          khazad_ecb_encrypt(param_1,param_1,psVar1);
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

## Encrypt_0809ae00

```asm
// === 0809ae00 CNCryptoKhazad::Encrypt  [0x0809ae00-0x809aef1] ===
 809ae00:	55                   	push   %ebp
 809ae01:	89 e5                	mov    %esp,%ebp
 809ae03:	83 ec 38             	sub    $0x38,%esp
 809ae06:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae09:	8b 40 08             	mov    0x8(%eax),%eax
 809ae0c:	85 c0                	test   %eax,%eax
 809ae0e:	75 0a                	jne    809ae1a <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0x1a>
 809ae10:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809ae15:	e9 d5 00 00 00       	jmp    809aeef <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0xef>
 809ae1a:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae1d:	8b 00                	mov    (%eax),%eax
 809ae1f:	83 c0 24             	add    $0x24,%eax
 809ae22:	8b 10                	mov    (%eax),%edx
 809ae24:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae27:	89 04 24             	mov    %eax,(%esp)
 809ae2a:	ff d2                	call   *%edx
 809ae2c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809ae2f:	8b 55 10             	mov    0x10(%ebp),%edx
 809ae32:	89 d0                	mov    %edx,%eax
 809ae34:	c1 fa 1f             	sar    $0x1f,%edx
 809ae37:	f7 7d e0             	idivl  -0x20(%ebp)
 809ae3a:	89 d0                	mov    %edx,%eax
 809ae3c:	85 c0                	test   %eax,%eax
 809ae3e:	0f 95 c0             	setne  %al
 809ae41:	84 c0                	test   %al,%al
 809ae43:	74 0a                	je     809ae4f <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0x4f>
 809ae45:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809ae4a:	e9 a0 00 00 00       	jmp    809aeef <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0xef>
 809ae4f:	8b 45 10             	mov    0x10(%ebp),%eax
 809ae52:	3b 45 18             	cmp    0x18(%ebp),%eax
 809ae55:	7e 0a                	jle    809ae61 <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0x61>
 809ae57:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ae5c:	e9 8e 00 00 00       	jmp    809aeef <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0xef>
 809ae61:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae64:	8b 40 08             	mov    0x8(%eax),%eax
 809ae67:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809ae6a:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae6d:	8b 00                	mov    (%eax),%eax
 809ae6f:	83 c0 24             	add    $0x24,%eax
 809ae72:	8b 10                	mov    (%eax),%edx
 809ae74:	8b 45 08             	mov    0x8(%ebp),%eax
 809ae77:	89 04 24             	mov    %eax,(%esp)
 809ae7a:	ff d2                	call   *%edx
 809ae7c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809ae7f:	8b 45 10             	mov    0x10(%ebp),%eax
 809ae82:	89 c2                	mov    %eax,%edx
 809ae84:	c1 fa 1f             	sar    $0x1f,%edx
 809ae87:	f7 7d e4             	idivl  -0x1c(%ebp)
 809ae8a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809ae8d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809ae94:	eb 47                	jmp    809aedd <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0xdd>
 809ae96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809ae99:	89 44 24 08          	mov    %eax,0x8(%esp)
 809ae9d:	8b 45 14             	mov    0x14(%ebp),%eax
 809aea0:	89 44 24 04          	mov    %eax,0x4(%esp)
 809aea4:	8b 45 0c             	mov    0xc(%ebp),%eax
 809aea7:	89 04 24             	mov    %eax,(%esp)
 809aeaa:	e8 ac 7b 01 00       	call   80b2a5b <_Z18khazad_ecb_encryptPKhPhP13symmetric_key>
 809aeaf:	8b 45 08             	mov    0x8(%ebp),%eax
 809aeb2:	8b 00                	mov    (%eax),%eax
 809aeb4:	83 c0 24             	add    $0x24,%eax
 809aeb7:	8b 10                	mov    (%eax),%edx
 809aeb9:	8b 45 08             	mov    0x8(%ebp),%eax
 809aebc:	89 04 24             	mov    %eax,(%esp)
 809aebf:	ff d2                	call   *%edx
 809aec1:	01 45 0c             	add    %eax,0xc(%ebp)
 809aec4:	8b 45 08             	mov    0x8(%ebp),%eax
 809aec7:	8b 00                	mov    (%eax),%eax
 809aec9:	83 c0 24             	add    $0x24,%eax
 809aecc:	8b 10                	mov    (%eax),%edx
 809aece:	8b 45 08             	mov    0x8(%ebp),%eax
 809aed1:	89 04 24             	mov    %eax,(%esp)
 809aed4:	ff d2                	call   *%edx
 809aed6:	01 45 14             	add    %eax,0x14(%ebp)
 809aed9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809aedd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809aee0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809aee3:	0f 9c c0             	setl   %al
 809aee6:	84 c0                	test   %al,%al
 809aee8:	75 ac                	jne    809ae96 <_ZN14CNCryptoKhazad7EncryptEPKhiPhi+0x96>
 809aeea:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809aeef:	c9                   	leave
 809aef0:	c3                   	ret
 809aef1:	90                   	nop

```

```c
// CNCryptoKhazad::Encrypt @ 0x809ae00

/* CNCryptoKhazad::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKhazad::Encrypt(CNCryptoKhazad *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          khazad_ecb_encrypt(param_1,param_3,psVar1);
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
// === 0809afe4 CNCryptoKhazad::GetBlockSize  [0x0809afe4-0x809afed] ===
 809afe4:	55                   	push   %ebp
 809afe5:	89 e5                	mov    %esp,%ebp
 809afe7:	b8 08 00 00 00       	mov    $0x8,%eax
 809afec:	5d                   	pop    %ebp
 809afed:	c3                   	ret

```

```c
// CNCryptoKhazad::GetBlockSize @ 0x809afe4

/* CNCryptoKhazad::GetBlockSize() const */

undefined4 CNCryptoKhazad::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809afee CNCryptoKhazad::GetKeySize  [0x0809afee-0x809aff7] ===
 809afee:	55                   	push   %ebp
 809afef:	89 e5                	mov    %esp,%ebp
 809aff1:	b8 10 00 00 00       	mov    $0x10,%eax
 809aff6:	5d                   	pop    %ebp
 809aff7:	c3                   	ret

```

```c
// CNCryptoKhazad::GetKeySize @ 0x809afee

/* CNCryptoKhazad::GetKeySize() const */

undefined4 CNCryptoKhazad::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809aba8 CNCryptoKhazad::Initialize  [0x0809aba8-0x809ac4f] ===
 809aba8:	55                   	push   %ebp
 809aba9:	89 e5                	mov    %esp,%ebp
 809abab:	83 ec 28             	sub    $0x28,%esp
 809abae:	8b 45 08             	mov    0x8(%ebp),%eax
 809abb1:	8b 40 08             	mov    0x8(%eax),%eax
 809abb4:	85 c0                	test   %eax,%eax
 809abb6:	75 0a                	jne    809abc2 <_ZN14CNCryptoKhazad10InitializeEPKhi+0x1a>
 809abb8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809abbd:	e9 8b 00 00 00       	jmp    809ac4d <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa5>
 809abc2:	8b 45 08             	mov    0x8(%ebp),%eax
 809abc5:	8b 00                	mov    (%eax),%eax
 809abc7:	83 c0 20             	add    $0x20,%eax
 809abca:	8b 10                	mov    (%eax),%edx
 809abcc:	8b 45 08             	mov    0x8(%ebp),%eax
 809abcf:	89 04 24             	mov    %eax,(%esp)
 809abd2:	ff d2                	call   *%edx
 809abd4:	3b 45 10             	cmp    0x10(%ebp),%eax
 809abd7:	0f 9f c0             	setg   %al
 809abda:	84 c0                	test   %al,%al
 809abdc:	74 07                	je     809abe5 <_ZN14CNCryptoKhazad10InitializeEPKhi+0x3d>
 809abde:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809abe3:	eb 68                	jmp    809ac4d <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa5>
 809abe5:	8b 45 08             	mov    0x8(%ebp),%eax
 809abe8:	8b 40 08             	mov    0x8(%eax),%eax
 809abeb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809abee:	8b 45 08             	mov    0x8(%ebp),%eax
 809abf1:	8b 00                	mov    (%eax),%eax
 809abf3:	83 c0 20             	add    $0x20,%eax
 809abf6:	8b 10                	mov    (%eax),%edx
 809abf8:	8b 45 08             	mov    0x8(%ebp),%eax
 809abfb:	89 04 24             	mov    %eax,(%esp)
 809abfe:	ff d2                	call   *%edx
 809ac00:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809ac03:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809ac07:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 809ac0e:	00 
 809ac0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 809ac13:	8b 45 0c             	mov    0xc(%ebp),%eax
 809ac16:	89 04 24             	mov    %eax,(%esp)
 809ac19:	e8 1a 70 01 00       	call   80b1c38 <_Z12khazad_setupPKhiiP13symmetric_key>
 809ac1e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809ac21:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809ac25:	75 07                	jne    809ac2e <_ZN14CNCryptoKhazad10InitializeEPKhi+0x86>
 809ac27:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ac2c:	eb 1f                	jmp    809ac4d <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa5>
 809ac2e:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809ac32:	75 07                	jne    809ac3b <_ZN14CNCryptoKhazad10InitializeEPKhi+0x93>
 809ac34:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809ac39:	eb 12                	jmp    809ac4d <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa5>
 809ac3b:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809ac3f:	75 07                	jne    809ac48 <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa0>
 809ac41:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809ac46:	eb 05                	jmp    809ac4d <_ZN14CNCryptoKhazad10InitializeEPKhi+0xa5>
 809ac48:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809ac4d:	c9                   	leave
 809ac4e:	c3                   	ret
 809ac4f:	90                   	nop

```

```c
// CNCryptoKhazad::Initialize @ 0x809aba8

/* CNCryptoKhazad::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoKhazad::Initialize(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
      iVar3 = khazad_setup(param_1,iVar3,8,psVar1);
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
// === 0809ab90 CNCryptoKhazad::SetMode  [0x0809ab90-0x809aba7] ===
 809ab90:	55                   	push   %ebp
 809ab91:	89 e5                	mov    %esp,%ebp
 809ab93:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809ab97:	75 07                	jne    809aba0 <_ZN14CNCryptoKhazad7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809ab99:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ab9e:	eb 05                	jmp    809aba5 <_ZN14CNCryptoKhazad7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809aba0:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809aba5:	5d                   	pop    %ebp
 809aba6:	c3                   	ret
 809aba7:	90                   	nop

```

```c
// CNCryptoKhazad::SetMode @ 0x809ab90

/* CNCryptoKhazad::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoKhazad::SetMode(undefined4 this,int param_2)

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
// === 0809ab88 CNCryptoKhazad::operator=  [0x0809ab88-0x809ab8f] ===
 809ab88:	55                   	push   %ebp
 809ab89:	89 e5                	mov    %esp,%ebp
 809ab8b:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab8e:	5d                   	pop    %ebp
 809ab8f:	c3                   	ret

```

```c
// CNCryptoKhazad::operator= @ 0x809ab88

/* CNCryptoKhazad::TEMPNAMEPLACEHOLDERVALUE(CNCryptoKhazad const&) */

CNCryptoKhazad * __thiscall CNCryptoKhazad::operator=(CNCryptoKhazad *this,CNCryptoKhazad *param_1)

{
  return this;
}

```

---

## ~CNCryptoKhazad

```asm
// === 0809aaf2 CNCryptoKhazad::~CNCryptoKhazad  [0x0809aaf2-0x809ab45] ===
 809aaf2:	55                   	push   %ebp
 809aaf3:	89 e5                	mov    %esp,%ebp
 809aaf5:	83 ec 28             	sub    $0x28,%esp
 809aaf8:	8b 45 08             	mov    0x8(%ebp),%eax
 809aafb:	c7 00 08 38 b1 08    	movl   $0x8b13808,(%eax)
 809ab01:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab04:	8b 40 08             	mov    0x8(%eax),%eax
 809ab07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809ab0a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809ab0e:	74 15                	je     809ab25 <_ZN14CNCryptoKhazadD1Ev+0x33>
 809ab10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809ab13:	89 04 24             	mov    %eax,(%esp)
 809ab16:	e8 d5 99 68 00       	call   87244f0 <_ZdlPv>
 809ab1b:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab1e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809ab25:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab28:	89 04 24             	mov    %eax,(%esp)
 809ab2b:	e8 d8 33 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809ab30:	b8 00 00 00 00       	mov    $0x0,%eax
 809ab35:	84 c0                	test   %al,%al
 809ab37:	74 0b                	je     809ab44 <_ZN14CNCryptoKhazadD1Ev+0x52>
 809ab39:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab3c:	89 04 24             	mov    %eax,(%esp)
 809ab3f:	e8 ac 99 68 00       	call   87244f0 <_ZdlPv>
 809ab44:	c9                   	leave
 809ab45:	c3                   	ret

```

```c
// CNCryptoKhazad::~CNCryptoKhazad @ 0x809aaf2

/* WARNING: Removing unreachable block (ram,0x0809ab39) */
/* CNCryptoKhazad::~CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::~CNCryptoKhazad(CNCryptoKhazad *this)

{
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoKhazad_0809ab46

```asm
// === 0809ab46 CNCryptoKhazad::~CNCryptoKhazad  [0x0809ab46-0x809ab63] ===
 809ab46:	55                   	push   %ebp
 809ab47:	89 e5                	mov    %esp,%ebp
 809ab49:	83 ec 18             	sub    $0x18,%esp
 809ab4c:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab4f:	89 04 24             	mov    %eax,(%esp)
 809ab52:	e8 9b ff ff ff       	call   809aaf2 <_ZN14CNCryptoKhazadD1Ev>
 809ab57:	8b 45 08             	mov    0x8(%ebp),%eax
 809ab5a:	89 04 24             	mov    %eax,(%esp)
 809ab5d:	e8 8e 99 68 00       	call   87244f0 <_ZdlPv>
 809ab62:	c9                   	leave
 809ab63:	c3                   	ret

```

```c
// CNCryptoKhazad::~CNCryptoKhazad @ 0x809ab46

/* CNCryptoKhazad::~CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::~CNCryptoKhazad(CNCryptoKhazad *this)

{
  ~CNCryptoKhazad(this);
  operator_delete(this);
  return;
}

```

