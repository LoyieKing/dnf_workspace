# CNChecksumSha512

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CNChecksumSha512

```asm
// === 08098e80 CNChecksumSha512::CNChecksumSha512  [0x08098e80-0x8098ee3] ===
 8098e80:	55                   	push   %ebp
 8098e81:	89 e5                	mov    %esp,%ebp
 8098e83:	56                   	push   %esi
 8098e84:	53                   	push   %ebx
 8098e85:	83 ec 10             	sub    $0x10,%esp
 8098e88:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e8b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8098e92:	00 
 8098e93:	89 04 24             	mov    %eax,(%esp)
 8098e96:	e8 d5 4f 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 8098e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e9e:	c7 00 28 36 b1 08    	movl   $0x8b13628,(%eax)
 8098ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ea7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8098eae:	c7 04 24 d0 00 00 00 	movl   $0xd0,(%esp)
 8098eb5:	e8 96 b5 68 00       	call   8724450 <_Znwj>
 8098eba:	89 c2                	mov    %eax,%edx
 8098ebc:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ebf:	89 50 08             	mov    %edx,0x8(%eax)
 8098ec2:	83 c4 10             	add    $0x10,%esp
 8098ec5:	5b                   	pop    %ebx
 8098ec6:	5e                   	pop    %esi
 8098ec7:	5d                   	pop    %ebp
 8098ec8:	c3                   	ret
 8098ec9:	89 d3                	mov    %edx,%ebx
 8098ecb:	89 c6                	mov    %eax,%esi
 8098ecd:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ed0:	89 04 24             	mov    %eax,(%esp)
 8098ed3:	e8 b0 4f 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098ed8:	89 f0                	mov    %esi,%eax
 8098eda:	89 da                	mov    %ebx,%edx
 8098edc:	89 04 24             	mov    %eax,(%esp)
 8098edf:	e8 6c a8 a4 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CNChecksumSha512::CNChecksumSha512 @ 0x8098e80

/* CNChecksumSha512::CNChecksumSha512() */

void __thiscall CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,3);
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098eb5 to 08098eb9 has its CatchHandler @ 08098ec9 */
  pvVar1 = operator_new(0xd0);
  *(void **)(this + 8) = pvVar1;
  return;
}

```

---

## CNChecksumSha512_08098f54

```asm
// === 08098f54 CNChecksumSha512::CNChecksumSha512  [0x08098f54-0x8098f77] ===
 8098f54:	55                   	push   %ebp
 8098f55:	89 e5                	mov    %esp,%ebp
 8098f57:	83 ec 18             	sub    $0x18,%esp
 8098f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8098f64:	00 
 8098f65:	89 04 24             	mov    %eax,(%esp)
 8098f68:	e8 03 4f 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 8098f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f70:	c7 00 28 36 b1 08    	movl   $0x8b13628,(%eax)
 8098f76:	c9                   	leave
 8098f77:	c3                   	ret

```

```c
// CNChecksumSha512::CNChecksumSha512 @ 0x8098f54

/* CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 const&) */

void __thiscall CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 *this,CNChecksumSha512 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  return;
}

```

---

## ChecksumFinish

```asm
// === 08099204 CNChecksumSha512::ChecksumFinish  [0x08099204-0x8099259] ===
 8099204:	55                   	push   %ebp
 8099205:	89 e5                	mov    %esp,%ebp
 8099207:	83 ec 18             	sub    $0x18,%esp
 809920a:	8b 45 08             	mov    0x8(%ebp),%eax
 809920d:	8b 40 08             	mov    0x8(%eax),%eax
 8099210:	85 c0                	test   %eax,%eax
 8099212:	75 07                	jne    809921b <_ZN16CNChecksumSha51214ChecksumFinishEPhi+0x17>
 8099214:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8099219:	eb 3d                	jmp    8099258 <_ZN16CNChecksumSha51214ChecksumFinishEPhi+0x54>
 809921b:	8b 45 08             	mov    0x8(%ebp),%eax
 809921e:	8b 00                	mov    (%eax),%eax
 8099220:	83 c0 20             	add    $0x20,%eax
 8099223:	8b 10                	mov    (%eax),%edx
 8099225:	8b 45 08             	mov    0x8(%ebp),%eax
 8099228:	89 04 24             	mov    %eax,(%esp)
 809922b:	ff d2                	call   *%edx
 809922d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8099230:	0f 9f c0             	setg   %al
 8099233:	84 c0                	test   %al,%al
 8099235:	74 07                	je     809923e <_ZN16CNChecksumSha51214ChecksumFinishEPhi+0x3a>
 8099237:	b8 01 00 00 70       	mov    $0x70000001,%eax
 809923c:	eb 1a                	jmp    8099258 <_ZN16CNChecksumSha51214ChecksumFinishEPhi+0x54>
 809923e:	8b 45 08             	mov    0x8(%ebp),%eax
 8099241:	8b 40 08             	mov    0x8(%eax),%eax
 8099244:	8b 55 0c             	mov    0xc(%ebp),%edx
 8099247:	89 54 24 04          	mov    %edx,0x4(%esp)
 809924b:	89 04 24             	mov    %eax,(%esp)
 809924e:	e8 2b 98 02 00       	call   80c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>
 8099253:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099258:	c9                   	leave
 8099259:	c3                   	ret

```

```c
// CNChecksumSha512::ChecksumFinish @ 0x8099204

/* CNChecksumSha512::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::ChecksumFinish(CNChecksumSha512 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ChecksumStart

```asm
// === 0809919e CNChecksumSha512::ChecksumStart  [0x0809919e-0x80991c9] ===
 809919e:	55                   	push   %ebp
 809919f:	89 e5                	mov    %esp,%ebp
 80991a1:	83 ec 18             	sub    $0x18,%esp
 80991a4:	8b 45 08             	mov    0x8(%ebp),%eax
 80991a7:	8b 40 08             	mov    0x8(%eax),%eax
 80991aa:	85 c0                	test   %eax,%eax
 80991ac:	75 07                	jne    80991b5 <_ZN16CNChecksumSha51213ChecksumStartEv+0x17>
 80991ae:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80991b3:	eb 13                	jmp    80991c8 <_ZN16CNChecksumSha51213ChecksumStartEv+0x2a>
 80991b5:	8b 45 08             	mov    0x8(%ebp),%eax
 80991b8:	8b 40 08             	mov    0x8(%eax),%eax
 80991bb:	89 04 24             	mov    %eax,(%esp)
 80991be:	e8 2e 96 02 00       	call   80c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>
 80991c3:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80991c8:	c9                   	leave
 80991c9:	c3                   	ret

```

```c
// CNChecksumSha512::ChecksumStart @ 0x809919e

/* CNChecksumSha512::ChecksumStart() */

undefined4 __thiscall CNChecksumSha512::ChecksumStart(CNChecksumSha512 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## ChecksumUpdate

```asm
// === 080991ca CNChecksumSha512::ChecksumUpdate  [0x080991ca-0x8099203] ===
 80991ca:	55                   	push   %ebp
 80991cb:	89 e5                	mov    %esp,%ebp
 80991cd:	83 ec 18             	sub    $0x18,%esp
 80991d0:	8b 45 08             	mov    0x8(%ebp),%eax
 80991d3:	8b 40 08             	mov    0x8(%eax),%eax
 80991d6:	85 c0                	test   %eax,%eax
 80991d8:	75 07                	jne    80991e1 <_ZN16CNChecksumSha51214ChecksumUpdateEPKhi+0x17>
 80991da:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80991df:	eb 21                	jmp    8099202 <_ZN16CNChecksumSha51214ChecksumUpdateEPKhi+0x38>
 80991e1:	8b 55 10             	mov    0x10(%ebp),%edx
 80991e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80991e7:	8b 40 08             	mov    0x8(%eax),%eax
 80991ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 80991ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 80991f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80991f5:	89 04 24             	mov    %eax,(%esp)
 80991f8:	e8 bc 96 02 00       	call   80c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>
 80991fd:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099202:	c9                   	leave
 8099203:	c3                   	ret

```

```c
// CNChecksumSha512::ChecksumUpdate @ 0x80991ca

/* CNChecksumSha512::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha512::ChecksumUpdate(CNChecksumSha512 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## GetChecksumSize

```asm
// === 0809925a CNChecksumSha512::GetChecksumSize  [0x0809925a-0x8099263] ===
 809925a:	55                   	push   %ebp
 809925b:	89 e5                	mov    %esp,%ebp
 809925d:	b8 40 00 00 00       	mov    $0x40,%eax
 8099262:	5d                   	pop    %ebp
 8099263:	c3                   	ret

```

```c
// CNChecksumSha512::GetChecksumSize @ 0x809925a

/* CNChecksumSha512::GetChecksumSize() const */

undefined4 CNChecksumSha512::GetChecksumSize(void)

{
  return 0x40;
}

```

---

## Initialize

```asm
// === 08098f80 CNChecksumSha512::Initialize  [0x08098f80-0x8098f89] ===
 8098f80:	55                   	push   %ebp
 8098f81:	89 e5                	mov    %esp,%ebp
 8098f83:	b8 04 00 00 70       	mov    $0x70000004,%eax
 8098f88:	5d                   	pop    %ebp
 8098f89:	c3                   	ret

```

```c
// CNChecksumSha512::Initialize @ 0x8098f80

/* CNChecksumSha512::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha512::Initialize(uchar *param_1,int param_2)

{
  return 0x70000004;
}

```

---

## MakeChecksumFromFile

```asm
// === 08099018 CNChecksumSha512::MakeChecksumFromFile  [0x08099018-0x809919d] ===
 8099018:	55                   	push   %ebp
 8099019:	89 e5                	mov    %esp,%ebp
 809901b:	81 ec 28 04 00 00    	sub    $0x428,%esp
 8099021:	8b 45 08             	mov    0x8(%ebp),%eax
 8099024:	8b 40 08             	mov    0x8(%eax),%eax
 8099027:	85 c0                	test   %eax,%eax
 8099029:	75 0a                	jne    8099035 <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x1d>
 809902b:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8099030:	e9 66 01 00 00       	jmp    809919b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x183>
 8099035:	8b 45 08             	mov    0x8(%ebp),%eax
 8099038:	8b 00                	mov    (%eax),%eax
 809903a:	83 c0 20             	add    $0x20,%eax
 809903d:	8b 10                	mov    (%eax),%edx
 809903f:	8b 45 08             	mov    0x8(%ebp),%eax
 8099042:	89 04 24             	mov    %eax,(%esp)
 8099045:	ff d2                	call   *%edx
 8099047:	3b 45 14             	cmp    0x14(%ebp),%eax
 809904a:	0f 9f c0             	setg   %al
 809904d:	84 c0                	test   %al,%al
 809904f:	74 0a                	je     809905b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x43>
 8099051:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8099056:	e9 40 01 00 00       	jmp    809919b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x183>
 809905b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809905f:	75 0a                	jne    809906b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x53>
 8099061:	b8 03 00 00 70       	mov    $0x70000003,%eax
 8099066:	e9 30 01 00 00       	jmp    809919b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x183>
 809906b:	8b 45 08             	mov    0x8(%ebp),%eax
 809906e:	8b 40 08             	mov    0x8(%eax),%eax
 8099071:	89 04 24             	mov    %eax,(%esp)
 8099074:	e8 78 97 02 00       	call   80c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>
 8099079:	c7 44 24 04 0b 36 b1 	movl   $0x8b1360b,0x4(%esp)
 8099080:	08 
 8099081:	8b 45 0c             	mov    0xc(%ebp),%eax
 8099084:	89 04 24             	mov    %eax,(%esp)
 8099087:	e8 e4 56 fe ff       	call   807e770 <fopen@plt>
 809908c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 809908f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8099093:	75 0a                	jne    809909f <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x87>
 8099095:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809909a:	e9 fc 00 00 00       	jmp    809919b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x183>
 809909f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80990a6:	00 
 80990a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80990ae:	00 
 80990af:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80990b2:	89 04 24             	mov    %eax,(%esp)
 80990b5:	e8 f6 4f fe ff       	call   807e0b0 <fseek@plt>
 80990ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80990bd:	89 04 24             	mov    %eax,(%esp)
 80990c0:	e8 0b 49 fe ff       	call   807d9d0 <ftell@plt>
 80990c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80990c8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 80990cc:	79 15                	jns    80990e3 <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0xcb>
 80990ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80990d1:	89 04 24             	mov    %eax,(%esp)
 80990d4:	e8 c7 4d fe ff       	call   807dea0 <fclose@plt>
 80990d9:	b8 03 00 00 70       	mov    $0x70000003,%eax
 80990de:	e9 b8 00 00 00       	jmp    809919b <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x183>
 80990e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80990ea:	00 
 80990eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80990f2:	00 
 80990f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80990f6:	89 04 24             	mov    %eax,(%esp)
 80990f9:	e8 b2 4f fe ff       	call   807e0b0 <fseek@plt>
 80990fe:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8099105:	eb 62                	jmp    8099169 <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x151>
 8099107:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809910a:	2b 45 f0             	sub    -0x10(%ebp),%eax
 809910d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8099110:	81 7d f4 00 04 00 00 	cmpl   $0x400,-0xc(%ebp)
 8099117:	76 07                	jbe    8099120 <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0x108>
 8099119:	c7 45 f4 00 04 00 00 	movl   $0x400,-0xc(%ebp)
 8099120:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8099123:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8099127:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 809912e:	00 
 809912f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8099132:	89 44 24 04          	mov    %eax,0x4(%esp)
 8099136:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 809913c:	89 04 24             	mov    %eax,(%esp)
 809913f:	e8 0c 4c fe ff       	call   807dd50 <fread@plt>
 8099144:	8b 45 08             	mov    0x8(%ebp),%eax
 8099147:	8b 40 08             	mov    0x8(%eax),%eax
 809914a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809914d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8099151:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 8099157:	89 54 24 04          	mov    %edx,0x4(%esp)
 809915b:	89 04 24             	mov    %eax,(%esp)
 809915e:	e8 56 97 02 00       	call   80c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>
 8099163:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8099166:	01 45 f0             	add    %eax,-0x10(%ebp)
 8099169:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809916c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809916f:	0f 97 c0             	seta   %al
 8099172:	84 c0                	test   %al,%al
 8099174:	75 91                	jne    8099107 <_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi+0xef>
 8099176:	8b 45 08             	mov    0x8(%ebp),%eax
 8099179:	8b 40 08             	mov    0x8(%eax),%eax
 809917c:	8b 55 10             	mov    0x10(%ebp),%edx
 809917f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099183:	89 04 24             	mov    %eax,(%esp)
 8099186:	e8 f3 98 02 00       	call   80c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>
 809918b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809918e:	89 04 24             	mov    %eax,(%esp)
 8099191:	e8 0a 4d fe ff       	call   807dea0 <fclose@plt>
 8099196:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809919b:	c9                   	leave
 809919c:	c3                   	ret
 809919d:	90                   	nop

```

```c
// CNChecksumSha512::MakeChecksumFromFile @ 0x8099018

/* CNChecksumSha512::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::MakeChecksumFromFile
          (CNChecksumSha512 *this,char *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_41c [1024];
  FILE *local_1c;
  uint local_18;
  uint local_14;
  size_t local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_3 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_1 == (char *)0x0) {
      uVar1 = 0x70000003;
    }
    else {
      SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
      local_1c = fopen(param_1,"rb");
      if (local_1c == (FILE *)0x0) {
        uVar1 = 0x70000002;
      }
      else {
        fseek(local_1c,0,2);
        local_18 = ftell(local_1c);
        if ((int)local_18 < 0) {
          fclose(local_1c);
          uVar1 = 0x70000003;
        }
        else {
          fseek(local_1c,0,0);
          for (local_14 = 0; local_14 < local_18; local_14 = local_14 + local_10) {
            local_10 = local_18 - local_14;
            if (0x400 < local_10) {
              local_10 = 0x400;
            }
            fread(local_41c,local_10,1,local_1c);
            SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}

```

---

## MakeChecksumFromMemory

```asm
// === 08098f8a CNChecksumSha512::MakeChecksumFromMemory  [0x08098f8a-0x8099017] ===
 8098f8a:	55                   	push   %ebp
 8098f8b:	89 e5                	mov    %esp,%ebp
 8098f8d:	83 ec 18             	sub    $0x18,%esp
 8098f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f93:	8b 40 08             	mov    0x8(%eax),%eax
 8098f96:	85 c0                	test   %eax,%eax
 8098f98:	75 07                	jne    8098fa1 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x17>
 8098f9a:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098f9f:	eb 74                	jmp    8099015 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8098fa4:	8b 00                	mov    (%eax),%eax
 8098fa6:	83 c0 20             	add    $0x20,%eax
 8098fa9:	8b 10                	mov    (%eax),%edx
 8098fab:	8b 45 08             	mov    0x8(%ebp),%eax
 8098fae:	89 04 24             	mov    %eax,(%esp)
 8098fb1:	ff d2                	call   *%edx
 8098fb3:	3b 45 18             	cmp    0x18(%ebp),%eax
 8098fb6:	0f 9f c0             	setg   %al
 8098fb9:	84 c0                	test   %al,%al
 8098fbb:	74 07                	je     8098fc4 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x3a>
 8098fbd:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098fc2:	eb 51                	jmp    8099015 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098fc4:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8098fc8:	7f 07                	jg     8098fd1 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x47>
 8098fca:	b8 05 00 00 70       	mov    $0x70000005,%eax
 8098fcf:	eb 44                	jmp    8099015 <_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098fd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8098fd4:	8b 40 08             	mov    0x8(%eax),%eax
 8098fd7:	89 04 24             	mov    %eax,(%esp)
 8098fda:	e8 12 98 02 00       	call   80c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>
 8098fdf:	8b 55 10             	mov    0x10(%ebp),%edx
 8098fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 8098fe5:	8b 40 08             	mov    0x8(%eax),%eax
 8098fe8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098fec:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098fef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098ff3:	89 04 24             	mov    %eax,(%esp)
 8098ff6:	e8 be 98 02 00       	call   80c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>
 8098ffb:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ffe:	8b 40 08             	mov    0x8(%eax),%eax
 8099001:	8b 55 14             	mov    0x14(%ebp),%edx
 8099004:	89 54 24 04          	mov    %edx,0x4(%esp)
 8099008:	89 04 24             	mov    %eax,(%esp)
 809900b:	e8 6e 9a 02 00       	call   80c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>
 8099010:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8099015:	c9                   	leave
 8099016:	c3                   	ret
 8099017:	90                   	nop

```

```c
// CNChecksumSha512::MakeChecksumFromMemory @ 0x8098f8a

/* CNChecksumSha512::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::MakeChecksumFromMemory
          (CNChecksumSha512 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_2 < 1) {
      uVar1 = 0x70000005;
    }
    else {
      SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
      SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),param_1,param_2);
      SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 08098f78 CNChecksumSha512::operator=  [0x08098f78-0x8098f7f] ===
 8098f78:	55                   	push   %ebp
 8098f79:	89 e5                	mov    %esp,%ebp
 8098f7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f7e:	5d                   	pop    %ebp
 8098f7f:	c3                   	ret

```

```c
// CNChecksumSha512::operator= @ 0x8098f78

/* CNChecksumSha512::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha512 const&) */

CNChecksumSha512 * __thiscall
CNChecksumSha512::operator=(CNChecksumSha512 *this,CNChecksumSha512 *param_1)

{
  return this;
}

```

---

## ~CNChecksumSha512

```asm
// === 08098ee4 CNChecksumSha512::~CNChecksumSha512  [0x08098ee4-0x8098f35] ===
 8098ee4:	55                   	push   %ebp
 8098ee5:	89 e5                	mov    %esp,%ebp
 8098ee7:	83 ec 18             	sub    $0x18,%esp
 8098eea:	8b 45 08             	mov    0x8(%ebp),%eax
 8098eed:	c7 00 28 36 b1 08    	movl   $0x8b13628,(%eax)
 8098ef3:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ef6:	8b 40 08             	mov    0x8(%eax),%eax
 8098ef9:	85 c0                	test   %eax,%eax
 8098efb:	74 18                	je     8098f15 <_ZN16CNChecksumSha512D1Ev+0x31>
 8098efd:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f00:	8b 40 08             	mov    0x8(%eax),%eax
 8098f03:	89 04 24             	mov    %eax,(%esp)
 8098f06:	e8 e5 b5 68 00       	call   87244f0 <_ZdlPv>
 8098f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f0e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8098f15:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f18:	89 04 24             	mov    %eax,(%esp)
 8098f1b:	e8 68 4f 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098f20:	b8 00 00 00 00       	mov    $0x0,%eax
 8098f25:	84 c0                	test   %al,%al
 8098f27:	74 0b                	je     8098f34 <_ZN16CNChecksumSha512D1Ev+0x50>
 8098f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f2c:	89 04 24             	mov    %eax,(%esp)
 8098f2f:	e8 bc b5 68 00       	call   87244f0 <_ZdlPv>
 8098f34:	c9                   	leave
 8098f35:	c3                   	ret

```

```c
// CNChecksumSha512::~CNChecksumSha512 @ 0x8098ee4

/* WARNING: Removing unreachable block (ram,0x08098f29) */
/* CNChecksumSha512::~CNChecksumSha512() */

void __thiscall CNChecksumSha512::~CNChecksumSha512(CNChecksumSha512 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}

```

---

## ~CNChecksumSha512_08098f36

```asm
// === 08098f36 CNChecksumSha512::~CNChecksumSha512  [0x08098f36-0x8098f53] ===
 8098f36:	55                   	push   %ebp
 8098f37:	89 e5                	mov    %esp,%ebp
 8098f39:	83 ec 18             	sub    $0x18,%esp
 8098f3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f3f:	89 04 24             	mov    %eax,(%esp)
 8098f42:	e8 9d ff ff ff       	call   8098ee4 <_ZN16CNChecksumSha512D1Ev>
 8098f47:	8b 45 08             	mov    0x8(%ebp),%eax
 8098f4a:	89 04 24             	mov    %eax,(%esp)
 8098f4d:	e8 9e b5 68 00       	call   87244f0 <_ZdlPv>
 8098f52:	c9                   	leave
 8098f53:	c3                   	ret

```

```c
// CNChecksumSha512::~CNChecksumSha512 @ 0x8098f36

/* CNChecksumSha512::~CNChecksumSha512() */

void __thiscall CNChecksumSha512::~CNChecksumSha512(CNChecksumSha512 *this)

{
  ~CNChecksumSha512(this);
  operator_delete(this);
  return;
}

```

