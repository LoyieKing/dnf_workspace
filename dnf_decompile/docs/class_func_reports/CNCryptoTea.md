# CNCryptoTea

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoTea

```asm
// === 0809ce50 CNCryptoTea::CNCryptoTea  [0x0809ce50-0x809cf75] ===
 809ce50:	55                   	push   %ebp
 809ce51:	89 e5                	mov    %esp,%ebp
 809ce53:	57                   	push   %edi
 809ce54:	56                   	push   %esi
 809ce55:	53                   	push   %ebx
 809ce56:	81 ec ac 00 00 00    	sub    $0xac,%esp
 809ce5c:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce5f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 809ce66:	00 
 809ce67:	89 04 24             	mov    %eax,(%esp)
 809ce6a:	e8 81 10 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809ce6f:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce72:	c7 00 a8 3a b1 08    	movl   $0x8b13aa8,(%eax)
 809ce78:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce7b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809ce82:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 809ce89:	e8 c2 75 68 00       	call   8724450 <_Znwj>
 809ce8e:	89 c3                	mov    %eax,%ebx
 809ce90:	89 d8                	mov    %ebx,%eax
 809ce92:	89 04 24             	mov    %eax,(%esp)
 809ce95:	e8 5a 64 02 00       	call   80c32f4 <_ZN4CTEAC1Ev>
 809ce9a:	eb 15                	jmp    809ceb1 <_ZN11CNCryptoTeaC1Ev+0x61>
 809ce9c:	89 d6                	mov    %edx,%esi
 809ce9e:	89 c7                	mov    %eax,%edi
 809cea0:	89 1c 24             	mov    %ebx,(%esp)
 809cea3:	e8 48 76 68 00       	call   87244f0 <_ZdlPv>
 809cea8:	89 f8                	mov    %edi,%eax
 809ceaa:	89 f2                	mov    %esi,%edx
 809ceac:	e9 9e 00 00 00       	jmp    809cf4f <_ZN11CNCryptoTeaC1Ev+0xff>
 809ceb1:	89 da                	mov    %ebx,%edx
 809ceb3:	8b 45 08             	mov    0x8(%ebp),%eax
 809ceb6:	89 50 08             	mov    %edx,0x8(%eax)
 809ceb9:	8b 45 08             	mov    0x8(%ebp),%eax
 809cebc:	8b 40 08             	mov    0x8(%eax),%eax
 809cebf:	85 c0                	test   %eax,%eax
 809cec1:	0f 84 a3 00 00 00    	je     809cf6a <_ZN11CNCryptoTeaC1Ev+0x11a>
 809cec7:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 809cece:	00 
 809cecf:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 809ced5:	89 04 24             	mov    %eax,(%esp)
 809ced8:	e8 96 15 00 00       	call   809e473 <_Z20GenerateRandomStringPci>
 809cedd:	8b 45 08             	mov    0x8(%ebp),%eax
 809cee0:	8b 40 08             	mov    0x8(%eax),%eax
 809cee3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 809ceea:	00 
 809ceeb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 809cef2:	00 
 809cef3:	c7 44 24 0c 68 33 b2 	movl   $0x8b23368,0xc(%esp)
 809cefa:	08 
 809cefb:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 809cf02:	00 
 809cf03:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 809cf09:	89 54 24 04          	mov    %edx,0x4(%esp)
 809cf0d:	89 04 24             	mov    %eax,(%esp)
 809cf10:	e8 87 64 02 00       	call   80c339c <_ZN4CTEA10InitializeEPKciS1_ii>
 809cf15:	3d ff ff ff 6f       	cmp    $0x6fffffff,%eax
 809cf1a:	0f 95 c0             	setne  %al
 809cf1d:	84 c0                	test   %al,%al
 809cf1f:	74 49                	je     809cf6a <_ZN11CNCryptoTeaC1Ev+0x11a>
 809cf21:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf24:	8b 40 08             	mov    0x8(%eax),%eax
 809cf27:	85 c0                	test   %eax,%eax
 809cf29:	74 18                	je     809cf43 <_ZN11CNCryptoTeaC1Ev+0xf3>
 809cf2b:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf2e:	8b 40 08             	mov    0x8(%eax),%eax
 809cf31:	8b 00                	mov    (%eax),%eax
 809cf33:	83 c0 04             	add    $0x4,%eax
 809cf36:	8b 10                	mov    (%eax),%edx
 809cf38:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf3b:	8b 40 08             	mov    0x8(%eax),%eax
 809cf3e:	89 04 24             	mov    %eax,(%esp)
 809cf41:	ff d2                	call   *%edx
 809cf43:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf46:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809cf4d:	eb 1b                	jmp    809cf6a <_ZN11CNCryptoTeaC1Ev+0x11a>
 809cf4f:	89 d3                	mov    %edx,%ebx
 809cf51:	89 c6                	mov    %eax,%esi
 809cf53:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf56:	89 04 24             	mov    %eax,(%esp)
 809cf59:	e8 aa 0f 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809cf5e:	89 f0                	mov    %esi,%eax
 809cf60:	89 da                	mov    %ebx,%edx
 809cf62:	89 04 24             	mov    %eax,(%esp)
 809cf65:	e8 e6 67 a4 00       	call   8ae3750 <_Unwind_Resume>
 809cf6a:	81 c4 ac 00 00 00    	add    $0xac,%esp
 809cf70:	5b                   	pop    %ebx
 809cf71:	5e                   	pop    %esi
 809cf72:	5f                   	pop    %edi
 809cf73:	5d                   	pop    %ebp
 809cf74:	c3                   	ret
 809cf75:	90                   	nop

```

```c
// CNCryptoTea::CNCryptoTea @ 0x809ce50

/* CNCryptoTea::CNCryptoTea() */

void __thiscall CNCryptoTea::CNCryptoTea(CNCryptoTea *this)

{
  CTEA *this_00;
  int iVar1;
  char local_9c [140];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,5);
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809ce89 to 0809ce8d has its CatchHandler @ 0809cf4f */
  this_00 = operator_new(0x48);
                    /* try { // try from 0809ce95 to 0809ce99 has its CatchHandler @ 0809ce9c */
  CTEA::CTEA(this_00);
  *(CTEA **)(this + 8) = this_00;
  if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809ced8 to 0809cf42 has its CatchHandler @ 0809cf4f */
    GenerateRandomString(local_9c,0x80);
    iVar1 = CTEA::Initialize(*(CTEA **)(this + 8),local_9c,0x80,"",0,0);
    if (iVar1 != 0x6fffffff) {
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
  }
  return;
}

```

---

## CNCryptoTea_0809d01e

```asm
// === 0809d01e CNCryptoTea::CNCryptoTea  [0x0809d01e-0x809d041] ===
 809d01e:	55                   	push   %ebp
 809d01f:	89 e5                	mov    %esp,%ebp
 809d021:	83 ec 18             	sub    $0x18,%esp
 809d024:	8b 45 08             	mov    0x8(%ebp),%eax
 809d027:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 809d02e:	00 
 809d02f:	89 04 24             	mov    %eax,(%esp)
 809d032:	e8 b9 0e 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809d037:	8b 45 08             	mov    0x8(%ebp),%eax
 809d03a:	c7 00 a8 3a b1 08    	movl   $0x8b13aa8,(%eax)
 809d040:	c9                   	leave
 809d041:	c3                   	ret

```

```c
// CNCryptoTea::CNCryptoTea @ 0x809d01e

/* CNCryptoTea::CNCryptoTea(CNCryptoTea const&) */

void __thiscall CNCryptoTea::CNCryptoTea(CNCryptoTea *this,CNCryptoTea *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,5);
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  return;
}

```

---

## Decrypt

```asm
// === 0809d19c CNCryptoTea::Decrypt  [0x0809d19c-0x809d227] ===
 809d19c:	55                   	push   %ebp
 809d19d:	89 e5                	mov    %esp,%ebp
 809d19f:	56                   	push   %esi
 809d1a0:	53                   	push   %ebx
 809d1a1:	83 ec 20             	sub    $0x20,%esp
 809d1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 809d1a7:	8b 40 08             	mov    0x8(%eax),%eax
 809d1aa:	85 c0                	test   %eax,%eax
 809d1ac:	75 07                	jne    809d1b5 <_ZN11CNCryptoTea7DecryptEPhi+0x19>
 809d1ae:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d1b3:	eb 6c                	jmp    809d221 <_ZN11CNCryptoTea7DecryptEPhi+0x85>
 809d1b5:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809d1b9:	7f 07                	jg     809d1c2 <_ZN11CNCryptoTea7DecryptEPhi+0x26>
 809d1bb:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809d1c0:	eb 5f                	jmp    809d221 <_ZN11CNCryptoTea7DecryptEPhi+0x85>
 809d1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 809d1c5:	8b 00                	mov    (%eax),%eax
 809d1c7:	83 c0 24             	add    $0x24,%eax
 809d1ca:	8b 10                	mov    (%eax),%edx
 809d1cc:	8b 45 08             	mov    0x8(%ebp),%eax
 809d1cf:	89 04 24             	mov    %eax,(%esp)
 809d1d2:	ff d2                	call   *%edx
 809d1d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d1d7:	8b 55 10             	mov    0x10(%ebp),%edx
 809d1da:	89 d0                	mov    %edx,%eax
 809d1dc:	c1 fa 1f             	sar    $0x1f,%edx
 809d1df:	f7 7d f4             	idivl  -0xc(%ebp)
 809d1e2:	89 d0                	mov    %edx,%eax
 809d1e4:	85 c0                	test   %eax,%eax
 809d1e6:	0f 95 c0             	setne  %al
 809d1e9:	84 c0                	test   %al,%al
 809d1eb:	74 07                	je     809d1f4 <_ZN11CNCryptoTea7DecryptEPhi+0x58>
 809d1ed:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d1f2:	eb 2d                	jmp    809d221 <_ZN11CNCryptoTea7DecryptEPhi+0x85>
 809d1f4:	8b 45 08             	mov    0x8(%ebp),%eax
 809d1f7:	8b 40 08             	mov    0x8(%eax),%eax
 809d1fa:	8b 00                	mov    (%eax),%eax
 809d1fc:	83 c0 10             	add    $0x10,%eax
 809d1ff:	8b 30                	mov    (%eax),%esi
 809d201:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809d204:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 809d207:	8b 55 0c             	mov    0xc(%ebp),%edx
 809d20a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d20d:	8b 40 08             	mov    0x8(%eax),%eax
 809d210:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809d214:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809d218:	89 54 24 04          	mov    %edx,0x4(%esp)
 809d21c:	89 04 24             	mov    %eax,(%esp)
 809d21f:	ff d6                	call   *%esi
 809d221:	83 c4 20             	add    $0x20,%esp
 809d224:	5b                   	pop    %ebx
 809d225:	5e                   	pop    %esi
 809d226:	5d                   	pop    %ebp
 809d227:	c3                   	ret

```

```c
// CNCryptoTea::Decrypt @ 0x809d19c

/* CNCryptoTea::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTea::Decrypt(CNCryptoTea *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Decrypt_0809d2b6

```asm
// === 0809d2b6 CNCryptoTea::Decrypt  [0x0809d2b6-0x809d311] ===
 809d2b6:	55                   	push   %ebp
 809d2b7:	89 e5                	mov    %esp,%ebp
 809d2b9:	56                   	push   %esi
 809d2ba:	53                   	push   %ebx
 809d2bb:	83 ec 10             	sub    $0x10,%esp
 809d2be:	8b 45 08             	mov    0x8(%ebp),%eax
 809d2c1:	8b 40 08             	mov    0x8(%eax),%eax
 809d2c4:	85 c0                	test   %eax,%eax
 809d2c6:	75 07                	jne    809d2cf <_ZN11CNCryptoTea7DecryptEPKhiPhi+0x19>
 809d2c8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d2cd:	eb 3c                	jmp    809d30b <_ZN11CNCryptoTea7DecryptEPKhiPhi+0x55>
 809d2cf:	8b 45 10             	mov    0x10(%ebp),%eax
 809d2d2:	3b 45 18             	cmp    0x18(%ebp),%eax
 809d2d5:	7e 07                	jle    809d2de <_ZN11CNCryptoTea7DecryptEPKhiPhi+0x28>
 809d2d7:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809d2dc:	eb 2d                	jmp    809d30b <_ZN11CNCryptoTea7DecryptEPKhiPhi+0x55>
 809d2de:	8b 45 08             	mov    0x8(%ebp),%eax
 809d2e1:	8b 40 08             	mov    0x8(%eax),%eax
 809d2e4:	8b 00                	mov    (%eax),%eax
 809d2e6:	83 c0 10             	add    $0x10,%eax
 809d2e9:	8b 30                	mov    (%eax),%esi
 809d2eb:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809d2ee:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809d2f1:	8b 55 0c             	mov    0xc(%ebp),%edx
 809d2f4:	8b 45 08             	mov    0x8(%ebp),%eax
 809d2f7:	8b 40 08             	mov    0x8(%eax),%eax
 809d2fa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809d2fe:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809d302:	89 54 24 04          	mov    %edx,0x4(%esp)
 809d306:	89 04 24             	mov    %eax,(%esp)
 809d309:	ff d6                	call   *%esi
 809d30b:	83 c4 10             	add    $0x10,%esp
 809d30e:	5b                   	pop    %ebx
 809d30f:	5e                   	pop    %esi
 809d310:	5d                   	pop    %ebp
 809d311:	c3                   	ret

```

```c
// CNCryptoTea::Decrypt @ 0x809d2b6

/* CNCryptoTea::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTea::Decrypt(CNCryptoTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                      (*(undefined4 *)(this + 8),param_1,param_3,param_2);
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 0809d110 CNCryptoTea::Encrypt  [0x0809d110-0x809d19b] ===
 809d110:	55                   	push   %ebp
 809d111:	89 e5                	mov    %esp,%ebp
 809d113:	56                   	push   %esi
 809d114:	53                   	push   %ebx
 809d115:	83 ec 20             	sub    $0x20,%esp
 809d118:	8b 45 08             	mov    0x8(%ebp),%eax
 809d11b:	8b 40 08             	mov    0x8(%eax),%eax
 809d11e:	85 c0                	test   %eax,%eax
 809d120:	75 07                	jne    809d129 <_ZN11CNCryptoTea7EncryptEPhi+0x19>
 809d122:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d127:	eb 6c                	jmp    809d195 <_ZN11CNCryptoTea7EncryptEPhi+0x85>
 809d129:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809d12d:	7f 07                	jg     809d136 <_ZN11CNCryptoTea7EncryptEPhi+0x26>
 809d12f:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809d134:	eb 5f                	jmp    809d195 <_ZN11CNCryptoTea7EncryptEPhi+0x85>
 809d136:	8b 45 08             	mov    0x8(%ebp),%eax
 809d139:	8b 00                	mov    (%eax),%eax
 809d13b:	83 c0 24             	add    $0x24,%eax
 809d13e:	8b 10                	mov    (%eax),%edx
 809d140:	8b 45 08             	mov    0x8(%ebp),%eax
 809d143:	89 04 24             	mov    %eax,(%esp)
 809d146:	ff d2                	call   *%edx
 809d148:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d14b:	8b 55 10             	mov    0x10(%ebp),%edx
 809d14e:	89 d0                	mov    %edx,%eax
 809d150:	c1 fa 1f             	sar    $0x1f,%edx
 809d153:	f7 7d f4             	idivl  -0xc(%ebp)
 809d156:	89 d0                	mov    %edx,%eax
 809d158:	85 c0                	test   %eax,%eax
 809d15a:	0f 95 c0             	setne  %al
 809d15d:	84 c0                	test   %al,%al
 809d15f:	74 07                	je     809d168 <_ZN11CNCryptoTea7EncryptEPhi+0x58>
 809d161:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d166:	eb 2d                	jmp    809d195 <_ZN11CNCryptoTea7EncryptEPhi+0x85>
 809d168:	8b 45 08             	mov    0x8(%ebp),%eax
 809d16b:	8b 40 08             	mov    0x8(%eax),%eax
 809d16e:	8b 00                	mov    (%eax),%eax
 809d170:	83 c0 0c             	add    $0xc,%eax
 809d173:	8b 30                	mov    (%eax),%esi
 809d175:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809d178:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 809d17b:	8b 55 0c             	mov    0xc(%ebp),%edx
 809d17e:	8b 45 08             	mov    0x8(%ebp),%eax
 809d181:	8b 40 08             	mov    0x8(%eax),%eax
 809d184:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809d188:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809d18c:	89 54 24 04          	mov    %edx,0x4(%esp)
 809d190:	89 04 24             	mov    %eax,(%esp)
 809d193:	ff d6                	call   *%esi
 809d195:	83 c4 20             	add    $0x20,%esp
 809d198:	5b                   	pop    %ebx
 809d199:	5e                   	pop    %esi
 809d19a:	5d                   	pop    %ebp
 809d19b:	c3                   	ret

```

```c
// CNCryptoTea::Encrypt @ 0x809d110

/* CNCryptoTea::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTea::Encrypt(CNCryptoTea *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Encrypt_0809d228

```asm
// === 0809d228 CNCryptoTea::Encrypt  [0x0809d228-0x809d2b5] ===
 809d228:	55                   	push   %ebp
 809d229:	89 e5                	mov    %esp,%ebp
 809d22b:	56                   	push   %esi
 809d22c:	53                   	push   %ebx
 809d22d:	83 ec 20             	sub    $0x20,%esp
 809d230:	8b 45 08             	mov    0x8(%ebp),%eax
 809d233:	8b 40 08             	mov    0x8(%eax),%eax
 809d236:	85 c0                	test   %eax,%eax
 809d238:	75 07                	jne    809d241 <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x19>
 809d23a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d23f:	eb 6e                	jmp    809d2af <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x87>
 809d241:	8b 45 10             	mov    0x10(%ebp),%eax
 809d244:	3b 45 18             	cmp    0x18(%ebp),%eax
 809d247:	7e 07                	jle    809d250 <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x28>
 809d249:	b8 0b 00 00 70       	mov    $0x7000000b,%eax
 809d24e:	eb 5f                	jmp    809d2af <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x87>
 809d250:	8b 45 08             	mov    0x8(%ebp),%eax
 809d253:	8b 00                	mov    (%eax),%eax
 809d255:	83 c0 24             	add    $0x24,%eax
 809d258:	8b 10                	mov    (%eax),%edx
 809d25a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d25d:	89 04 24             	mov    %eax,(%esp)
 809d260:	ff d2                	call   *%edx
 809d262:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809d265:	8b 55 10             	mov    0x10(%ebp),%edx
 809d268:	89 d0                	mov    %edx,%eax
 809d26a:	c1 fa 1f             	sar    $0x1f,%edx
 809d26d:	f7 7d f4             	idivl  -0xc(%ebp)
 809d270:	89 d0                	mov    %edx,%eax
 809d272:	85 c0                	test   %eax,%eax
 809d274:	0f 95 c0             	setne  %al
 809d277:	84 c0                	test   %al,%al
 809d279:	74 07                	je     809d282 <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x5a>
 809d27b:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809d280:	eb 2d                	jmp    809d2af <_ZN11CNCryptoTea7EncryptEPKhiPhi+0x87>
 809d282:	8b 45 08             	mov    0x8(%ebp),%eax
 809d285:	8b 40 08             	mov    0x8(%eax),%eax
 809d288:	8b 00                	mov    (%eax),%eax
 809d28a:	83 c0 0c             	add    $0xc,%eax
 809d28d:	8b 30                	mov    (%eax),%esi
 809d28f:	8b 5d 10             	mov    0x10(%ebp),%ebx
 809d292:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809d295:	8b 55 0c             	mov    0xc(%ebp),%edx
 809d298:	8b 45 08             	mov    0x8(%ebp),%eax
 809d29b:	8b 40 08             	mov    0x8(%eax),%eax
 809d29e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 809d2a2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809d2a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 809d2aa:	89 04 24             	mov    %eax,(%esp)
 809d2ad:	ff d6                	call   *%esi
 809d2af:	83 c4 20             	add    $0x20,%esp
 809d2b2:	5b                   	pop    %ebx
 809d2b3:	5e                   	pop    %esi
 809d2b4:	5d                   	pop    %ebp
 809d2b5:	c3                   	ret

```

```c
// CNCryptoTea::Encrypt @ 0x809d228

/* CNCryptoTea::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTea::Encrypt(CNCryptoTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_3,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## GetBlockSize

```asm
// === 0809d31c CNCryptoTea::GetBlockSize  [0x0809d31c-0x809d327] ===
 809d31c:	55                   	push   %ebp
 809d31d:	89 e5                	mov    %esp,%ebp
 809d31f:	b8 10 00 00 00       	mov    $0x10,%eax
 809d324:	5d                   	pop    %ebp
 809d325:	c3                   	ret
 809d326:	90                   	nop
 809d327:	90                   	nop

```

```c
// CNCryptoTea::GetBlockSize @ 0x809d31c

/* CNCryptoTea::GetBlockSize() const */

undefined4 CNCryptoTea::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 0809d312 CNCryptoTea::GetKeySize  [0x0809d312-0x809d31b] ===
 809d312:	55                   	push   %ebp
 809d313:	89 e5                	mov    %esp,%ebp
 809d315:	b8 10 00 00 00       	mov    $0x10,%eax
 809d31a:	5d                   	pop    %ebp
 809d31b:	c3                   	ret

```

```c
// CNCryptoTea::GetKeySize @ 0x809d312

/* CNCryptoTea::GetKeySize() const */

undefined4 CNCryptoTea::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809d0c2 CNCryptoTea::Initialize  [0x0809d0c2-0x809d10f] ===
 809d0c2:	55                   	push   %ebp
 809d0c3:	89 e5                	mov    %esp,%ebp
 809d0c5:	83 ec 28             	sub    $0x28,%esp
 809d0c8:	8b 45 08             	mov    0x8(%ebp),%eax
 809d0cb:	8b 40 08             	mov    0x8(%eax),%eax
 809d0ce:	85 c0                	test   %eax,%eax
 809d0d0:	75 07                	jne    809d0d9 <_ZN11CNCryptoTea10InitializeEPKhi+0x17>
 809d0d2:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d0d7:	eb 34                	jmp    809d10d <_ZN11CNCryptoTea10InitializeEPKhi+0x4b>
 809d0d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 809d0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 809d0df:	8b 40 08             	mov    0x8(%eax),%eax
 809d0e2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 809d0e9:	00 
 809d0ea:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 809d0f1:	00 
 809d0f2:	c7 44 24 0c 68 33 b2 	movl   $0x8b23368,0xc(%esp)
 809d0f9:	08 
 809d0fa:	8b 4d 10             	mov    0x10(%ebp),%ecx
 809d0fd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809d101:	89 54 24 04          	mov    %edx,0x4(%esp)
 809d105:	89 04 24             	mov    %eax,(%esp)
 809d108:	e8 8f 62 02 00       	call   80c339c <_ZN4CTEA10InitializeEPKciS1_ii>
 809d10d:	c9                   	leave
 809d10e:	c3                   	ret
 809d10f:	90                   	nop

```

```c
// CNCryptoTea::Initialize @ 0x809d0c2

/* CNCryptoTea::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoTea::Initialize(CNCryptoTea *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    uVar1 = CTEA::Initialize(*(CTEA **)(this + 8),(char *)param_1,param_2,"",0,0);
  }
  return uVar1;
}

```

---

## SetMode

```asm
// === 0809d04a CNCryptoTea::SetMode  [0x0809d04a-0x809d0c1] ===
 809d04a:	55                   	push   %ebp
 809d04b:	89 e5                	mov    %esp,%ebp
 809d04d:	83 ec 18             	sub    $0x18,%esp
 809d050:	8b 45 08             	mov    0x8(%ebp),%eax
 809d053:	8b 40 08             	mov    0x8(%eax),%eax
 809d056:	85 c0                	test   %eax,%eax
 809d058:	75 07                	jne    809d061 <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x17>
 809d05a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809d05f:	eb 5e                	jmp    809d0bf <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809d061:	8b 45 0c             	mov    0xc(%ebp),%eax
 809d064:	83 f8 01             	cmp    $0x1,%eax
 809d067:	74 21                	je     809d08a <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x40>
 809d069:	83 f8 03             	cmp    $0x3,%eax
 809d06c:	74 34                	je     809d0a2 <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x58>
 809d06e:	85 c0                	test   %eax,%eax
 809d070:	75 48                	jne    809d0ba <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x70>
 809d072:	8b 45 08             	mov    0x8(%ebp),%eax
 809d075:	8b 40 08             	mov    0x8(%eax),%eax
 809d078:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809d07f:	00 
 809d080:	89 04 24             	mov    %eax,(%esp)
 809d083:	e8 e6 72 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809d088:	eb 35                	jmp    809d0bf <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809d08a:	8b 45 08             	mov    0x8(%ebp),%eax
 809d08d:	8b 40 08             	mov    0x8(%eax),%eax
 809d090:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 809d097:	00 
 809d098:	89 04 24             	mov    %eax,(%esp)
 809d09b:	e8 ce 72 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809d0a0:	eb 1d                	jmp    809d0bf <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809d0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 809d0a5:	8b 40 08             	mov    0x8(%eax),%eax
 809d0a8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 809d0af:	00 
 809d0b0:	89 04 24             	mov    %eax,(%esp)
 809d0b3:	e8 b6 72 01 00       	call   80b436e <_ZN7IMethod7SetModeEi>
 809d0b8:	eb 05                	jmp    809d0bf <_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE+0x75>
 809d0ba:	b8 03 00 00 70       	mov    $0x70000003,%eax
 809d0bf:	c9                   	leave
 809d0c0:	c3                   	ret
 809d0c1:	90                   	nop

```

```c
// CNCryptoTea::SetMode @ 0x809d04a

/* CNCryptoTea::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoTea::SetMode(CNCryptoTea *this,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 == 1) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),1);
  }
  else if (param_2 == 3) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),2);
  }
  else if (param_2 == 0) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),0);
  }
  else {
    uVar1 = 0x70000003;
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 0809d042 CNCryptoTea::operator=  [0x0809d042-0x809d049] ===
 809d042:	55                   	push   %ebp
 809d043:	89 e5                	mov    %esp,%ebp
 809d045:	8b 45 08             	mov    0x8(%ebp),%eax
 809d048:	5d                   	pop    %ebp
 809d049:	c3                   	ret

```

```c
// CNCryptoTea::operator= @ 0x809d042

/* CNCryptoTea::TEMPNAMEPLACEHOLDERVALUE(CNCryptoTea const&) */

CNCryptoTea * __thiscall CNCryptoTea::operator=(CNCryptoTea *this,CNCryptoTea *param_1)

{
  return this;
}

```

---

## ~CNCryptoTea

```asm
// === 0809cf76 CNCryptoTea::~CNCryptoTea  [0x0809cf76-0x809cfff] ===
 809cf76:	55                   	push   %ebp
 809cf77:	89 e5                	mov    %esp,%ebp
 809cf79:	56                   	push   %esi
 809cf7a:	53                   	push   %ebx
 809cf7b:	83 ec 10             	sub    $0x10,%esp
 809cf7e:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf81:	c7 00 a8 3a b1 08    	movl   $0x8b13aa8,(%eax)
 809cf87:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf8a:	8b 40 08             	mov    0x8(%eax),%eax
 809cf8d:	85 c0                	test   %eax,%eax
 809cf8f:	74 49                	je     809cfda <_ZN11CNCryptoTeaD1Ev+0x64>
 809cf91:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf94:	8b 40 08             	mov    0x8(%eax),%eax
 809cf97:	85 c0                	test   %eax,%eax
 809cf99:	74 18                	je     809cfb3 <_ZN11CNCryptoTeaD1Ev+0x3d>
 809cf9b:	8b 45 08             	mov    0x8(%ebp),%eax
 809cf9e:	8b 40 08             	mov    0x8(%eax),%eax
 809cfa1:	8b 00                	mov    (%eax),%eax
 809cfa3:	83 c0 04             	add    $0x4,%eax
 809cfa6:	8b 10                	mov    (%eax),%edx
 809cfa8:	8b 45 08             	mov    0x8(%ebp),%eax
 809cfab:	8b 40 08             	mov    0x8(%eax),%eax
 809cfae:	89 04 24             	mov    %eax,(%esp)
 809cfb1:	ff d2                	call   *%edx
 809cfb3:	8b 45 08             	mov    0x8(%ebp),%eax
 809cfb6:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809cfbd:	eb 1b                	jmp    809cfda <_ZN11CNCryptoTeaD1Ev+0x64>
 809cfbf:	89 d3                	mov    %edx,%ebx
 809cfc1:	89 c6                	mov    %eax,%esi
 809cfc3:	8b 45 08             	mov    0x8(%ebp),%eax
 809cfc6:	89 04 24             	mov    %eax,(%esp)
 809cfc9:	e8 3a 0f 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809cfce:	89 f0                	mov    %esi,%eax
 809cfd0:	89 da                	mov    %ebx,%edx
 809cfd2:	89 04 24             	mov    %eax,(%esp)
 809cfd5:	e8 76 67 a4 00       	call   8ae3750 <_Unwind_Resume>
 809cfda:	8b 45 08             	mov    0x8(%ebp),%eax
 809cfdd:	89 04 24             	mov    %eax,(%esp)
 809cfe0:	e8 23 0f 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809cfe5:	b8 00 00 00 00       	mov    $0x0,%eax
 809cfea:	84 c0                	test   %al,%al
 809cfec:	74 0b                	je     809cff9 <_ZN11CNCryptoTeaD1Ev+0x83>
 809cfee:	8b 45 08             	mov    0x8(%ebp),%eax
 809cff1:	89 04 24             	mov    %eax,(%esp)
 809cff4:	e8 f7 74 68 00       	call   87244f0 <_ZdlPv>
 809cff9:	83 c4 10             	add    $0x10,%esp
 809cffc:	5b                   	pop    %ebx
 809cffd:	5e                   	pop    %esi
 809cffe:	5d                   	pop    %ebp
 809cfff:	c3                   	ret

```

```c
// CNCryptoTea::~CNCryptoTea @ 0x809cf76

/* WARNING: Removing unreachable block (ram,0x0809cfee) */
/* CNCryptoTea::~CNCryptoTea() */

void __thiscall CNCryptoTea::~CNCryptoTea(CNCryptoTea *this)

{
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809cfb1 to 0809cfb2 has its CatchHandler @ 0809cfbf */
      (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
    }
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoTea_0809d000

```asm
// === 0809d000 CNCryptoTea::~CNCryptoTea  [0x0809d000-0x809d01d] ===
 809d000:	55                   	push   %ebp
 809d001:	89 e5                	mov    %esp,%ebp
 809d003:	83 ec 18             	sub    $0x18,%esp
 809d006:	8b 45 08             	mov    0x8(%ebp),%eax
 809d009:	89 04 24             	mov    %eax,(%esp)
 809d00c:	e8 65 ff ff ff       	call   809cf76 <_ZN11CNCryptoTeaD1Ev>
 809d011:	8b 45 08             	mov    0x8(%ebp),%eax
 809d014:	89 04 24             	mov    %eax,(%esp)
 809d017:	e8 d4 74 68 00       	call   87244f0 <_ZdlPv>
 809d01c:	c9                   	leave
 809d01d:	c3                   	ret

```

```c
// CNCryptoTea::~CNCryptoTea @ 0x809d000

/* CNCryptoTea::~CNCryptoTea() */

void __thiscall CNCryptoTea::~CNCryptoTea(CNCryptoTea *this)

{
  ~CNCryptoTea(this);
  operator_delete(this);
  return;
}

```

