# CBitManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CBitManager

```asm
// === 0831c09c CBitManager::CBitManager  [0x0831c09c-0x831c0c7] ===
 831c09c:	55                   	push   %ebp
 831c09d:	89 e5                	mov    %esp,%ebp
 831c09f:	8b 45 08             	mov    0x8(%ebp),%eax
 831c0a2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 831c0a8:	8b 45 08             	mov    0x8(%ebp),%eax
 831c0ab:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 831c0b2:	8b 45 08             	mov    0x8(%ebp),%eax
 831c0b5:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 831c0bc:	8b 45 08             	mov    0x8(%ebp),%eax
 831c0bf:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 831c0c6:	5d                   	pop    %ebp
 831c0c7:	c3                   	ret

```

```c
// CBitManager::CBitManager @ 0x831c09c

/* CBitManager::CBitManager() */

void __thiscall CBitManager::CBitManager(CBitManager *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## GetBit

```asm
// === 0831c2fc CBitManager::GetBit  [0x0831c2fc-0x831c36e] ===
 831c2fc:	55                   	push   %ebp
 831c2fd:	89 e5                	mov    %esp,%ebp
 831c2ff:	83 ec 10             	sub    $0x10,%esp
 831c302:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 831c309:	c6 45 fe 00          	movb   $0x0,-0x2(%ebp)
 831c30d:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
 831c311:	c6 45 f0 01          	movb   $0x1,-0x10(%ebp)
 831c315:	c6 45 f1 02          	movb   $0x2,-0xf(%ebp)
 831c319:	c6 45 f2 04          	movb   $0x4,-0xe(%ebp)
 831c31d:	c6 45 f3 08          	movb   $0x8,-0xd(%ebp)
 831c321:	c6 45 f4 10          	movb   $0x10,-0xc(%ebp)
 831c325:	c6 45 f5 20          	movb   $0x20,-0xb(%ebp)
 831c329:	c6 45 f6 40          	movb   $0x40,-0xa(%ebp)
 831c32d:	c6 45 f7 80          	movb   $0x80,-0x9(%ebp)
 831c331:	8b 45 10             	mov    0x10(%ebp),%eax
 831c334:	89 45 f8             	mov    %eax,-0x8(%ebp)
 831c337:	eb 0f                	jmp    831c348 <_ZN11CBitManager6GetBitEiii+0x4c>
 831c339:	8b 45 f8             	mov    -0x8(%ebp),%eax
 831c33c:	0f b6 44 05 f0       	movzbl -0x10(%ebp,%eax,1),%eax
 831c341:	08 45 fe             	or     %al,-0x2(%ebp)
 831c344:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 831c348:	8b 45 f8             	mov    -0x8(%ebp),%eax
 831c34b:	3b 45 14             	cmp    0x14(%ebp),%eax
 831c34e:	0f 9e c0             	setle  %al
 831c351:	84 c0                	test   %al,%al
 831c353:	75 e4                	jne    831c339 <_ZN11CBitManager6GetBitEiii+0x3d>
 831c355:	8b 45 08             	mov    0x8(%ebp),%eax
 831c358:	8b 10                	mov    (%eax),%edx
 831c35a:	8b 45 0c             	mov    0xc(%ebp),%eax
 831c35d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 831c360:	0f b6 00             	movzbl (%eax),%eax
 831c363:	22 45 fe             	and    -0x2(%ebp),%al
 831c366:	88 45 ff             	mov    %al,-0x1(%ebp)
 831c369:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 831c36d:	c9                   	leave
 831c36e:	c3                   	ret

```

```c
// CBitManager::GetBit @ 0x831c2fc

/* CBitManager::GetBit(int, int, int) */

byte __thiscall CBitManager::GetBit(CBitManager *this,int param_1,int param_2,int param_3)

{
  byte local_14 [8];
  int local_c;
  byte local_6;
  undefined1 local_5;
  
  local_6 = 0;
  local_5 = 0;
  local_14[0] = 1;
  local_14[1] = 2;
  local_14[2] = 4;
  local_14[3] = 8;
  local_14[4] = 0x10;
  local_14[5] = 0x20;
  local_14[6] = 0x40;
  local_14[7] = 0x80;
  for (local_c = param_2; local_c <= param_3; local_c = local_c + 1) {
    local_6 = local_6 | local_14[local_c];
  }
  return *(byte *)(*(int *)this + param_1) & local_6;
}

```

---

## GetBitFromLSB

```asm
// === 0831c160 CBitManager::GetBitFromLSB  [0x0831c160-0x831c1d5] ===
 831c160:	55                   	push   %ebp
 831c161:	89 e5                	mov    %esp,%ebp
 831c163:	83 ec 28             	sub    $0x28,%esp
 831c166:	c6 45 e8 01          	movb   $0x1,-0x18(%ebp)
 831c16a:	c6 45 e9 03          	movb   $0x3,-0x17(%ebp)
 831c16e:	c6 45 ea 07          	movb   $0x7,-0x16(%ebp)
 831c172:	c6 45 eb 0f          	movb   $0xf,-0x15(%ebp)
 831c176:	c6 45 ec 1f          	movb   $0x1f,-0x14(%ebp)
 831c17a:	c6 45 ed 3f          	movb   $0x3f,-0x13(%ebp)
 831c17e:	c6 45 ee 7f          	movb   $0x7f,-0x12(%ebp)
 831c182:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 831c186:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 831c18d:	8b 45 0c             	mov    0xc(%ebp),%eax
 831c190:	83 e8 01             	sub    $0x1,%eax
 831c193:	0f b6 44 05 e8       	movzbl -0x18(%ebp,%eax,1),%eax
 831c198:	88 45 f7             	mov    %al,-0x9(%ebp)
 831c19b:	8b 45 08             	mov    0x8(%ebp),%eax
 831c19e:	8b 10                	mov    (%eax),%edx
 831c1a0:	8b 45 08             	mov    0x8(%ebp),%eax
 831c1a3:	8b 40 08             	mov    0x8(%eax),%eax
 831c1a6:	83 e8 01             	sub    $0x1,%eax
 831c1a9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 831c1ac:	0f b6 00             	movzbl (%eax),%eax
 831c1af:	22 45 f7             	and    -0x9(%ebp),%al
 831c1b2:	88 45 ef             	mov    %al,-0x11(%ebp)
 831c1b5:	8b 45 08             	mov    0x8(%ebp),%eax
 831c1b8:	8b 00                	mov    (%eax),%eax
 831c1ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 831c1be:	8b 45 0c             	mov    0xc(%ebp),%eax
 831c1c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c1c5:	8b 45 08             	mov    0x8(%ebp),%eax
 831c1c8:	89 04 24             	mov    %eax,(%esp)
 831c1cb:	e8 06 00 00 00       	call   831c1d6 <_ZN11CBitManager10ShiftRightEiPh>
 831c1d0:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 831c1d4:	c9                   	leave
 831c1d5:	c3                   	ret

```

```c
// CBitManager::GetBitFromLSB @ 0x831c160

/* CBitManager::GetBitFromLSB(int) */

byte __thiscall CBitManager::GetBitFromLSB(CBitManager *this,int param_1)

{
  byte abStack_1d [9];
  undefined4 local_14;
  byte local_d;
  
  abStack_1d[1] = 1;
  abStack_1d[2] = 3;
  abStack_1d[3] = 7;
  abStack_1d[4] = 0xf;
  abStack_1d[5] = 0x1f;
  abStack_1d[6] = 0x3f;
  abStack_1d[7] = 0x7f;
  local_14 = 0;
  local_d = abStack_1d[param_1];
  abStack_1d[8] = *(byte *)(*(int *)this + *(int *)(this + 8) + -1) & local_d;
  ShiftRight(this,param_1,*(uchar **)this);
  return abStack_1d[8];
}

```

---

## ReadData

```asm
// === 0831c116 CBitManager::ReadData  [0x0831c116-0x831c15f] ===
 831c116:	55                   	push   %ebp
 831c117:	89 e5                	mov    %esp,%ebp
 831c119:	83 ec 18             	sub    $0x18,%esp
 831c11c:	8b 45 08             	mov    0x8(%ebp),%eax
 831c11f:	8b 55 0c             	mov    0xc(%ebp),%edx
 831c122:	89 10                	mov    %edx,(%eax)
 831c124:	8b 45 08             	mov    0x8(%ebp),%eax
 831c127:	8b 55 10             	mov    0x10(%ebp),%edx
 831c12a:	89 50 08             	mov    %edx,0x8(%eax)
 831c12d:	8b 45 10             	mov    0x10(%ebp),%eax
 831c130:	89 04 24             	mov    %eax,(%esp)
 831c133:	e8 48 1e d6 ff       	call   807df80 <malloc@plt>
 831c138:	89 c2                	mov    %eax,%edx
 831c13a:	8b 45 08             	mov    0x8(%ebp),%eax
 831c13d:	89 50 04             	mov    %edx,0x4(%eax)
 831c140:	8b 55 10             	mov    0x10(%ebp),%edx
 831c143:	8b 45 08             	mov    0x8(%ebp),%eax
 831c146:	8b 40 04             	mov    0x4(%eax),%eax
 831c149:	89 54 24 08          	mov    %edx,0x8(%esp)
 831c14d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831c154:	00 
 831c155:	89 04 24             	mov    %eax,(%esp)
 831c158:	e8 63 1b d6 ff       	call   807dcc0 <memset@plt>
 831c15d:	c9                   	leave
 831c15e:	c3                   	ret
 831c15f:	90                   	nop

```

```c
// CBitManager::ReadData @ 0x831c116

/* CBitManager::ReadData(unsigned char*, int) */

void __thiscall CBitManager::ReadData(CBitManager *this,uchar *param_1,int param_2)

{
  void *pvVar1;
  
  *(uchar **)this = param_1;
  *(int *)(this + 8) = param_2;
  pvVar1 = malloc(param_2);
  *(void **)(this + 4) = pvVar1;
  memset(*(void **)(this + 4),0,param_2);
  return;
}

```

---

## SetAll

```asm
// === 0831c0ce CBitManager::SetAll  [0x0831c0ce-0x831c115] ===
 831c0ce:	55                   	push   %ebp
 831c0cf:	89 e5                	mov    %esp,%ebp
 831c0d1:	83 ec 10             	sub    $0x10,%esp
 831c0d4:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 831c0db:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 831c0e2:	eb 1e                	jmp    831c102 <_ZN11CBitManager6SetAllEiPh+0x34>
 831c0e4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 831c0e8:	75 0b                	jne    831c0f5 <_ZN11CBitManager6SetAllEiPh+0x27>
 831c0ea:	8b 45 fc             	mov    -0x4(%ebp),%eax
 831c0ed:	03 45 10             	add    0x10(%ebp),%eax
 831c0f0:	c6 00 00             	movb   $0x0,(%eax)
 831c0f3:	eb 09                	jmp    831c0fe <_ZN11CBitManager6SetAllEiPh+0x30>
 831c0f5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 831c0f8:	03 45 10             	add    0x10(%ebp),%eax
 831c0fb:	c6 00 ff             	movb   $0xff,(%eax)
 831c0fe:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 831c102:	8b 45 08             	mov    0x8(%ebp),%eax
 831c105:	8b 40 08             	mov    0x8(%eax),%eax
 831c108:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 831c10b:	0f 9f c0             	setg   %al
 831c10e:	84 c0                	test   %al,%al
 831c110:	75 d2                	jne    831c0e4 <_ZN11CBitManager6SetAllEiPh+0x16>
 831c112:	90                   	nop
 831c113:	c9                   	leave
 831c114:	c3                   	ret
 831c115:	90                   	nop

```

```c
// CBitManager::SetAll @ 0x831c0ce

/* CBitManager::SetAll(int, unsigned char*) */

void __thiscall CBitManager::SetAll(CBitManager *this,int param_1,uchar *param_2)

{
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)(this + 8); local_8 = local_8 + 1) {
    if (param_1 == 0) {
      param_2[local_8] = '\0';
    }
    else {
      param_2[local_8] = 0xff;
    }
  }
  return;
}

```

---

## ShiftLeft

```asm
// === 0831c266 CBitManager::ShiftLeft  [0x0831c266-0x831c2fb] ===
 831c266:	55                   	push   %ebp
 831c267:	89 e5                	mov    %esp,%ebp
 831c269:	57                   	push   %edi
 831c26a:	56                   	push   %esi
 831c26b:	53                   	push   %ebx
 831c26c:	83 ec 10             	sub    $0x10,%esp
 831c26f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 831c276:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 831c27d:	eb 65                	jmp    831c2e4 <_ZN11CBitManager9ShiftLeftEiPh+0x7e>
 831c27f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c282:	03 45 10             	add    0x10(%ebp),%eax
 831c285:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c288:	03 55 10             	add    0x10(%ebp),%edx
 831c28b:	0f b6 12             	movzbl (%edx),%edx
 831c28e:	0f b6 da             	movzbl %dl,%ebx
 831c291:	8b 55 0c             	mov    0xc(%ebp),%edx
 831c294:	89 de                	mov    %ebx,%esi
 831c296:	89 d1                	mov    %edx,%ecx
 831c298:	d3 e6                	shl    %cl,%esi
 831c29a:	89 f2                	mov    %esi,%edx
 831c29c:	88 10                	mov    %dl,(%eax)
 831c29e:	8b 45 08             	mov    0x8(%ebp),%eax
 831c2a1:	8b 40 08             	mov    0x8(%eax),%eax
 831c2a4:	83 e8 01             	sub    $0x1,%eax
 831c2a7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 831c2aa:	74 34                	je     831c2e0 <_ZN11CBitManager9ShiftLeftEiPh+0x7a>
 831c2ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c2af:	03 45 10             	add    0x10(%ebp),%eax
 831c2b2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c2b5:	03 55 10             	add    0x10(%ebp),%edx
 831c2b8:	0f b6 12             	movzbl (%edx),%edx
 831c2bb:	89 d3                	mov    %edx,%ebx
 831c2bd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c2c0:	83 c2 01             	add    $0x1,%edx
 831c2c3:	03 55 10             	add    0x10(%ebp),%edx
 831c2c6:	0f b6 12             	movzbl (%edx),%edx
 831c2c9:	0f b6 f2             	movzbl %dl,%esi
 831c2cc:	ba 08 00 00 00       	mov    $0x8,%edx
 831c2d1:	2b 55 0c             	sub    0xc(%ebp),%edx
 831c2d4:	89 f7                	mov    %esi,%edi
 831c2d6:	89 d1                	mov    %edx,%ecx
 831c2d8:	d3 ff                	sar    %cl,%edi
 831c2da:	89 fa                	mov    %edi,%edx
 831c2dc:	09 da                	or     %ebx,%edx
 831c2de:	88 10                	mov    %dl,(%eax)
 831c2e0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 831c2e4:	8b 45 08             	mov    0x8(%ebp),%eax
 831c2e7:	8b 40 08             	mov    0x8(%eax),%eax
 831c2ea:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 831c2ed:	0f 9f c0             	setg   %al
 831c2f0:	84 c0                	test   %al,%al
 831c2f2:	75 8b                	jne    831c27f <_ZN11CBitManager9ShiftLeftEiPh+0x19>
 831c2f4:	83 c4 10             	add    $0x10,%esp
 831c2f7:	5b                   	pop    %ebx
 831c2f8:	5e                   	pop    %esi
 831c2f9:	5f                   	pop    %edi
 831c2fa:	5d                   	pop    %ebp
 831c2fb:	c3                   	ret

```

```c
// CBitManager::ShiftLeft @ 0x831c266

/* CBitManager::ShiftLeft(int, unsigned char*) */

void __thiscall CBitManager::ShiftLeft(CBitManager *this,int param_1,uchar *param_2)

{
  int local_14;
  
  for (local_14 = 0; local_14 < *(int *)(this + 8); local_14 = local_14 + 1) {
    param_2[local_14] = param_2[local_14] << ((byte)param_1 & 0x1f);
    if (*(int *)(this + 8) + -1 != local_14) {
      param_2[local_14] =
           (byte)((int)(uint)param_2[local_14 + 1] >> (8 - (byte)param_1 & 0x1f)) |
           param_2[local_14];
    }
  }
  return;
}

```

---

## ShiftRight

```asm
// === 0831c1d6 CBitManager::ShiftRight  [0x0831c1d6-0x831c265] ===
 831c1d6:	55                   	push   %ebp
 831c1d7:	89 e5                	mov    %esp,%ebp
 831c1d9:	57                   	push   %edi
 831c1da:	56                   	push   %esi
 831c1db:	53                   	push   %ebx
 831c1dc:	83 ec 10             	sub    $0x10,%esp
 831c1df:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 831c1e6:	8b 45 08             	mov    0x8(%ebp),%eax
 831c1e9:	8b 40 08             	mov    0x8(%eax),%eax
 831c1ec:	83 e8 01             	sub    $0x1,%eax
 831c1ef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831c1f2:	eb 5d                	jmp    831c251 <_ZN11CBitManager10ShiftRightEiPh+0x7b>
 831c1f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c1f7:	03 45 10             	add    0x10(%ebp),%eax
 831c1fa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c1fd:	03 55 10             	add    0x10(%ebp),%edx
 831c200:	0f b6 12             	movzbl (%edx),%edx
 831c203:	0f b6 da             	movzbl %dl,%ebx
 831c206:	8b 55 0c             	mov    0xc(%ebp),%edx
 831c209:	89 de                	mov    %ebx,%esi
 831c20b:	89 d1                	mov    %edx,%ecx
 831c20d:	d3 fe                	sar    %cl,%esi
 831c20f:	89 f2                	mov    %esi,%edx
 831c211:	88 10                	mov    %dl,(%eax)
 831c213:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 831c217:	74 34                	je     831c24d <_ZN11CBitManager10ShiftRightEiPh+0x77>
 831c219:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c21c:	03 45 10             	add    0x10(%ebp),%eax
 831c21f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c222:	03 55 10             	add    0x10(%ebp),%edx
 831c225:	0f b6 12             	movzbl (%edx),%edx
 831c228:	89 d3                	mov    %edx,%ebx
 831c22a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c22d:	83 ea 01             	sub    $0x1,%edx
 831c230:	03 55 10             	add    0x10(%ebp),%edx
 831c233:	0f b6 12             	movzbl (%edx),%edx
 831c236:	0f b6 f2             	movzbl %dl,%esi
 831c239:	ba 08 00 00 00       	mov    $0x8,%edx
 831c23e:	2b 55 0c             	sub    0xc(%ebp),%edx
 831c241:	89 f7                	mov    %esi,%edi
 831c243:	89 d1                	mov    %edx,%ecx
 831c245:	d3 e7                	shl    %cl,%edi
 831c247:	89 fa                	mov    %edi,%edx
 831c249:	09 da                	or     %ebx,%edx
 831c24b:	88 10                	mov    %dl,(%eax)
 831c24d:	83 6d f0 01          	subl   $0x1,-0x10(%ebp)
 831c251:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c254:	f7 d0                	not    %eax
 831c256:	c1 e8 1f             	shr    $0x1f,%eax
 831c259:	84 c0                	test   %al,%al
 831c25b:	75 97                	jne    831c1f4 <_ZN11CBitManager10ShiftRightEiPh+0x1e>
 831c25d:	83 c4 10             	add    $0x10,%esp
 831c260:	5b                   	pop    %ebx
 831c261:	5e                   	pop    %esi
 831c262:	5f                   	pop    %edi
 831c263:	5d                   	pop    %ebp
 831c264:	c3                   	ret
 831c265:	90                   	nop

```

```c
// CBitManager::ShiftRight @ 0x831c1d6

/* CBitManager::ShiftRight(int, unsigned char*) */

void __thiscall CBitManager::ShiftRight(CBitManager *this,int param_1,uchar *param_2)

{
  int iVar1;
  int local_14;
  
  local_14 = *(int *)(this + 8);
  while (iVar1 = local_14, local_14 = iVar1 + -1, -1 < local_14) {
    param_2[local_14] = (uchar)((int)(uint)param_2[local_14] >> ((byte)param_1 & 0x1f));
    if (local_14 != 0) {
      param_2[local_14] = param_2[iVar1 + -2] << (8 - (byte)param_1 & 0x1f) | param_2[local_14];
    }
  }
  return;
}

```

---

## ~CBitManager

```asm
// === 0831c0c8 CBitManager::~CBitManager  [0x0831c0c8-0x831c0cd] ===
 831c0c8:	55                   	push   %ebp
 831c0c9:	89 e5                	mov    %esp,%ebp
 831c0cb:	5d                   	pop    %ebp
 831c0cc:	c3                   	ret
 831c0cd:	90                   	nop

```

```c
// CBitManager::~CBitManager @ 0x831c0c8

/* CBitManager::~CBitManager() */

void __thiscall CBitManager::~CBitManager(CBitManager *this)

{
  return;
}

```

