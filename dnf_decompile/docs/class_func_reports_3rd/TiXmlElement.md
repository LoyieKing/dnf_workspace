# TiXmlElement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 34

---

## Accept

```asm
// === 087dff10 TiXmlElement::Accept  [0x087dff10-0x87dff8f] ===
 87dff10:	55                   	push   %ebp
 87dff11:	89 e5                	mov    %esp,%ebp
 87dff13:	57                   	push   %edi
 87dff14:	56                   	push   %esi
 87dff15:	53                   	push   %ebx
 87dff16:	83 ec 1c             	sub    $0x1c,%esp
 87dff19:	8b 75 0c             	mov    0xc(%ebp),%esi
 87dff1c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87dff1f:	8b 06                	mov    (%esi),%eax
 87dff21:	8d 4f 2c             	lea    0x2c(%edi),%ecx
 87dff24:	8b 50 10             	mov    0x10(%eax),%edx
 87dff27:	8b 47 4c             	mov    0x4c(%edi),%eax
 87dff2a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87dff2e:	89 34 24             	mov    %esi,(%esp)
 87dff31:	39 c8                	cmp    %ecx,%eax
 87dff33:	b9 00 00 00 00       	mov    $0x0,%ecx
 87dff38:	0f 44 c1             	cmove  %ecx,%eax
 87dff3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87dff3f:	ff d2                	call   *%edx
 87dff41:	84 c0                	test   %al,%al
 87dff43:	74 2a                	je     87dff6f <_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor+0x5f>
 87dff45:	8b 5f 18             	mov    0x18(%edi),%ebx
 87dff48:	85 db                	test   %ebx,%ebx
 87dff4a:	75 13                	jne    87dff5f <_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor+0x4f>
 87dff4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87dff50:	eb 1d                	jmp    87dff6f <_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor+0x5f>
 87dff52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dff58:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87dff5b:	85 db                	test   %ebx,%ebx
 87dff5d:	74 10                	je     87dff6f <_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor+0x5f>
 87dff5f:	8b 03                	mov    (%ebx),%eax
 87dff61:	89 74 24 04          	mov    %esi,0x4(%esp)
 87dff65:	89 1c 24             	mov    %ebx,(%esp)
 87dff68:	ff 50 44             	call   *0x44(%eax)
 87dff6b:	84 c0                	test   %al,%al
 87dff6d:	75 e9                	jne    87dff58 <_ZNK12TiXmlElement6AcceptEP12TiXmlVisitor+0x48>
 87dff6f:	8b 06                	mov    (%esi),%eax
 87dff71:	89 7d 0c             	mov    %edi,0xc(%ebp)
 87dff74:	89 75 08             	mov    %esi,0x8(%ebp)
 87dff77:	8b 40 14             	mov    0x14(%eax),%eax
 87dff7a:	83 c4 1c             	add    $0x1c,%esp
 87dff7d:	5b                   	pop    %ebx
 87dff7e:	5e                   	pop    %esi
 87dff7f:	5f                   	pop    %edi
 87dff80:	5d                   	pop    %ebp
 87dff81:	ff e0                	jmp    *%eax
 87dff83:	90                   	nop
 87dff84:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dff8a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Accept @ 0x87dff10

/* TiXmlElement::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlElement::Accept(TiXmlElement *this,TiXmlVisitor *param_1)

{
  int *piVar1;
  char cVar2;
  TiXmlElement *pTVar3;
  
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar3 == this + 0x2c) {
    pTVar3 = (TiXmlElement *)0x0;
  }
  cVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1,this,pTVar3);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(this + 0x18);
    while ((piVar1 != (int *)0x0 &&
           (cVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1), cVar2 != '\0'))) {
      piVar1 = (int *)piVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x087dff81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x14))();
  return;
}

```

---

## Attribute

```asm
// === 087e11e0 TiXmlElement::Attribute  [0x087e11e0-0x87e123f] ===
 87e11e0:	55                   	push   %ebp
 87e11e1:	89 e5                	mov    %esp,%ebp
 87e11e3:	57                   	push   %edi
 87e11e4:	56                   	push   %esi
 87e11e5:	53                   	push   %ebx
 87e11e6:	83 ec 1c             	sub    $0x1c,%esp
 87e11e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e11ec:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e11ef:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e11f2:	83 c6 2c             	add    $0x2c,%esi
 87e11f5:	39 f3                	cmp    %esi,%ebx
 87e11f7:	75 0e                	jne    87e1207 <_ZNK12TiXmlElement9AttributeEPKc+0x27>
 87e11f9:	eb 2d                	jmp    87e1228 <_ZNK12TiXmlElement9AttributeEPKc+0x48>
 87e11fb:	90                   	nop
 87e11fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1200:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e1203:	39 f3                	cmp    %esi,%ebx
 87e1205:	74 21                	je     87e1228 <_ZNK12TiXmlElement9AttributeEPKc+0x48>
 87e1207:	8b 43 14             	mov    0x14(%ebx),%eax
 87e120a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e120e:	89 04 24             	mov    %eax,(%esp)
 87e1211:	e8 ca d2 89 ff       	call   807e4e0 <strcmp@plt>
 87e1216:	85 c0                	test   %eax,%eax
 87e1218:	75 e6                	jne    87e1200 <_ZNK12TiXmlElement9AttributeEPKc+0x20>
 87e121a:	8b 43 18             	mov    0x18(%ebx),%eax
 87e121d:	83 c4 1c             	add    $0x1c,%esp
 87e1220:	5b                   	pop    %ebx
 87e1221:	5e                   	pop    %esi
 87e1222:	5f                   	pop    %edi
 87e1223:	5d                   	pop    %ebp
 87e1224:	c3                   	ret
 87e1225:	8d 76 00             	lea    0x0(%esi),%esi
 87e1228:	83 c4 1c             	add    $0x1c,%esp
 87e122b:	31 c0                	xor    %eax,%eax
 87e122d:	5b                   	pop    %ebx
 87e122e:	5e                   	pop    %esi
 87e122f:	5f                   	pop    %edi
 87e1230:	5d                   	pop    %ebp
 87e1231:	c3                   	ret
 87e1232:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1239:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::Attribute @ 0x87e11e0

/* TiXmlElement::Attribute(char const*) const */

undefined4 __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1)

{
  TiXmlElement *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return 0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  return *(undefined4 *)(pTVar1 + 0x18);
}

```

---

## Attribute_087e1240

```asm
// === 087e1240 TiXmlElement::Attribute  [0x087e1240-0x87e12bf] ===
 87e1240:	55                   	push   %ebp
 87e1241:	89 e5                	mov    %esp,%ebp
 87e1243:	57                   	push   %edi
 87e1244:	56                   	push   %esi
 87e1245:	53                   	push   %ebx
 87e1246:	83 ec 1c             	sub    $0x1c,%esp
 87e1249:	8b 75 08             	mov    0x8(%ebp),%esi
 87e124c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e124f:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e1252:	83 c6 2c             	add    $0x2c,%esi
 87e1255:	39 f3                	cmp    %esi,%ebx
 87e1257:	75 0e                	jne    87e1267 <_ZNK12TiXmlElement9AttributeEPKcPd+0x27>
 87e1259:	eb 4d                	jmp    87e12a8 <_ZNK12TiXmlElement9AttributeEPKcPd+0x68>
 87e125b:	90                   	nop
 87e125c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1260:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e1263:	39 f3                	cmp    %esi,%ebx
 87e1265:	74 41                	je     87e12a8 <_ZNK12TiXmlElement9AttributeEPKcPd+0x68>
 87e1267:	8b 43 14             	mov    0x14(%ebx),%eax
 87e126a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e126e:	89 04 24             	mov    %eax,(%esp)
 87e1271:	e8 6a d2 89 ff       	call   807e4e0 <strcmp@plt>
 87e1276:	85 c0                	test   %eax,%eax
 87e1278:	75 e6                	jne    87e1260 <_ZNK12TiXmlElement9AttributeEPKcPd+0x20>
 87e127a:	8b 45 10             	mov    0x10(%ebp),%eax
 87e127d:	8b 5b 18             	mov    0x18(%ebx),%ebx
 87e1280:	85 c0                	test   %eax,%eax
 87e1282:	74 17                	je     87e129b <_ZNK12TiXmlElement9AttributeEPKcPd+0x5b>
 87e1284:	8b 45 10             	mov    0x10(%ebp),%eax
 87e1287:	c7 44 24 04 99 0e de 	movl   $0x8de0e99,0x4(%esp)
 87e128e:	08 
 87e128f:	89 1c 24             	mov    %ebx,(%esp)
 87e1292:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1296:	e8 45 c7 89 ff       	call   807d9e0 <sscanf@plt>
 87e129b:	83 c4 1c             	add    $0x1c,%esp
 87e129e:	89 d8                	mov    %ebx,%eax
 87e12a0:	5b                   	pop    %ebx
 87e12a1:	5e                   	pop    %esi
 87e12a2:	5f                   	pop    %edi
 87e12a3:	5d                   	pop    %ebp
 87e12a4:	c3                   	ret
 87e12a5:	8d 76 00             	lea    0x0(%esi),%esi
 87e12a8:	31 db                	xor    %ebx,%ebx
 87e12aa:	83 c4 1c             	add    $0x1c,%esp
 87e12ad:	89 d8                	mov    %ebx,%eax
 87e12af:	5b                   	pop    %ebx
 87e12b0:	5e                   	pop    %esi
 87e12b1:	5f                   	pop    %edi
 87e12b2:	5d                   	pop    %ebp
 87e12b3:	c3                   	ret
 87e12b4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e12ba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Attribute @ 0x87e1240

/* TiXmlElement::Attribute(char const*, double*) const */

char * __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  char *__s;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return (char *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  __s = *(char **)(pTVar1 + 0x18);
  if (param_2 != (double *)0x0) {
    sscanf(__s,"%lf",param_2);
  }
  return __s;
}

```

---

## Attribute_087e13d0

```asm
// === 087e13d0 TiXmlElement::Attribute  [0x087e13d0-0x87e144f] ===
 87e13d0:	55                   	push   %ebp
 87e13d1:	89 e5                	mov    %esp,%ebp
 87e13d3:	57                   	push   %edi
 87e13d4:	56                   	push   %esi
 87e13d5:	53                   	push   %ebx
 87e13d6:	83 ec 1c             	sub    $0x1c,%esp
 87e13d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e13dc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e13df:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e13e2:	83 c6 2c             	add    $0x2c,%esi
 87e13e5:	39 f3                	cmp    %esi,%ebx
 87e13e7:	75 0e                	jne    87e13f7 <_ZNK12TiXmlElement9AttributeEPKcPi+0x27>
 87e13e9:	eb 4d                	jmp    87e1438 <_ZNK12TiXmlElement9AttributeEPKcPi+0x68>
 87e13eb:	90                   	nop
 87e13ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e13f0:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e13f3:	39 f3                	cmp    %esi,%ebx
 87e13f5:	74 41                	je     87e1438 <_ZNK12TiXmlElement9AttributeEPKcPi+0x68>
 87e13f7:	8b 43 14             	mov    0x14(%ebx),%eax
 87e13fa:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e13fe:	89 04 24             	mov    %eax,(%esp)
 87e1401:	e8 da d0 89 ff       	call   807e4e0 <strcmp@plt>
 87e1406:	85 c0                	test   %eax,%eax
 87e1408:	75 e6                	jne    87e13f0 <_ZNK12TiXmlElement9AttributeEPKcPi+0x20>
 87e140a:	8b 55 10             	mov    0x10(%ebp),%edx
 87e140d:	8b 5b 18             	mov    0x18(%ebx),%ebx
 87e1410:	85 d2                	test   %edx,%edx
 87e1412:	74 17                	je     87e142b <_ZNK12TiXmlElement9AttributeEPKcPi+0x5b>
 87e1414:	8b 45 10             	mov    0x10(%ebp),%eax
 87e1417:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e141e:	08 
 87e141f:	89 1c 24             	mov    %ebx,(%esp)
 87e1422:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1426:	e8 b5 c5 89 ff       	call   807d9e0 <sscanf@plt>
 87e142b:	83 c4 1c             	add    $0x1c,%esp
 87e142e:	89 d8                	mov    %ebx,%eax
 87e1430:	5b                   	pop    %ebx
 87e1431:	5e                   	pop    %esi
 87e1432:	5f                   	pop    %edi
 87e1433:	5d                   	pop    %ebp
 87e1434:	c3                   	ret
 87e1435:	8d 76 00             	lea    0x0(%esi),%esi
 87e1438:	31 db                	xor    %ebx,%ebx
 87e143a:	83 c4 1c             	add    $0x1c,%esp
 87e143d:	89 d8                	mov    %ebx,%eax
 87e143f:	5b                   	pop    %ebx
 87e1440:	5e                   	pop    %esi
 87e1441:	5f                   	pop    %edi
 87e1442:	5d                   	pop    %ebp
 87e1443:	c3                   	ret
 87e1444:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e144a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Attribute @ 0x87e13d0

/* TiXmlElement::Attribute(char const*, int*) const */

char * __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1,int *param_2)

{
  TiXmlElement *pTVar1;
  char *__s;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return (char *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  __s = *(char **)(pTVar1 + 0x18);
  if (param_2 != (int *)0x0) {
    sscanf(__s,"%d",param_2);
  }
  return __s;
}

```

---

## Attribute_087e1ad0

```asm
// === 087e1ad0 TiXmlElement::Attribute  [0x087e1ad0-0x87e1b5f] ===
 87e1ad0:	55                   	push   %ebp
 87e1ad1:	89 e5                	mov    %esp,%ebp
 87e1ad3:	57                   	push   %edi
 87e1ad4:	56                   	push   %esi
 87e1ad5:	53                   	push   %ebx
 87e1ad6:	83 ec 3c             	sub    $0x3c,%esp
 87e1ad9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e1adc:	8b 53 4c             	mov    0x4c(%ebx),%edx
 87e1adf:	83 c3 2c             	add    $0x2c,%ebx
 87e1ae2:	39 da                	cmp    %ebx,%edx
 87e1ae4:	74 62                	je     87e1b48 <_ZNK12TiXmlElement9AttributeERKSsPi+0x78>
 87e1ae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e1ae9:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e1aec:	8b 00                	mov    (%eax),%eax
 87e1aee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e1af1:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e1af4:	eb 0a                	jmp    87e1b00 <_ZNK12TiXmlElement9AttributeERKSsPi+0x30>
 87e1af6:	66 90                	xchg   %ax,%ax
 87e1af8:	8b 52 20             	mov    0x20(%edx),%edx
 87e1afb:	39 55 d4             	cmp    %edx,-0x2c(%ebp)
 87e1afe:	74 48                	je     87e1b48 <_ZNK12TiXmlElement9AttributeERKSsPi+0x78>
 87e1b00:	8b 72 14             	mov    0x14(%edx),%esi
 87e1b03:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e1b06:	75 f0                	jne    87e1af8 <_ZNK12TiXmlElement9AttributeERKSsPi+0x28>
 87e1b08:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e1b0b:	39 c0                	cmp    %eax,%eax
 87e1b0d:	89 c1                	mov    %eax,%ecx
 87e1b0f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e1b11:	75 e5                	jne    87e1af8 <_ZNK12TiXmlElement9AttributeERKSsPi+0x28>
 87e1b13:	8b 75 10             	mov    0x10(%ebp),%esi
 87e1b16:	8d 5a 18             	lea    0x18(%edx),%ebx
 87e1b19:	85 f6                	test   %esi,%esi
 87e1b1b:	74 1a                	je     87e1b37 <_ZNK12TiXmlElement9AttributeERKSsPi+0x67>
 87e1b1d:	8b 45 10             	mov    0x10(%ebp),%eax
 87e1b20:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e1b27:	08 
 87e1b28:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1b2c:	8b 42 18             	mov    0x18(%edx),%eax
 87e1b2f:	89 04 24             	mov    %eax,(%esp)
 87e1b32:	e8 a9 be 89 ff       	call   807d9e0 <sscanf@plt>
 87e1b37:	83 c4 3c             	add    $0x3c,%esp
 87e1b3a:	89 d8                	mov    %ebx,%eax
 87e1b3c:	5b                   	pop    %ebx
 87e1b3d:	5e                   	pop    %esi
 87e1b3e:	5f                   	pop    %edi
 87e1b3f:	5d                   	pop    %ebp
 87e1b40:	c3                   	ret
 87e1b41:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1b48:	31 db                	xor    %ebx,%ebx
 87e1b4a:	83 c4 3c             	add    $0x3c,%esp
 87e1b4d:	89 d8                	mov    %ebx,%eax
 87e1b4f:	5b                   	pop    %ebx
 87e1b50:	5e                   	pop    %esi
 87e1b51:	5f                   	pop    %edi
 87e1b52:	5d                   	pop    %ebp
 87e1b53:	c3                   	ret
 87e1b54:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e1b5a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Attribute @ 0x87e1ad0

/* TiXmlElement::Attribute(std::string const&, int*) const */

TiXmlElement * __thiscall TiXmlElement::Attribute(TiXmlElement *this,string *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  TiXmlElement *pTVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar3 != this + 0x2c) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar3 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar2 = iVar1;
        pcVar4 = *(char **)(pTVar3 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          if (param_2 != (int *)0x0) {
            sscanf(*(char **)(pTVar3 + 0x18),"%d",param_2);
          }
          return pTVar3 + 0x18;
        }
      }
      pTVar3 = *(TiXmlElement **)(pTVar3 + 0x20);
    } while (this + 0x2c != pTVar3);
  }
  return (TiXmlElement *)0x0;
}

```

---

## Attribute_087e1b60

```asm
// === 087e1b60 TiXmlElement::Attribute  [0x087e1b60-0x87e1bbf] ===
 87e1b60:	55                   	push   %ebp
 87e1b61:	89 e5                	mov    %esp,%ebp
 87e1b63:	57                   	push   %edi
 87e1b64:	56                   	push   %esi
 87e1b65:	53                   	push   %ebx
 87e1b66:	83 ec 08             	sub    $0x8,%esp
 87e1b69:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e1b6c:	8b 43 4c             	mov    0x4c(%ebx),%eax
 87e1b6f:	83 c3 2c             	add    $0x2c,%ebx
 87e1b72:	39 d8                	cmp    %ebx,%eax
 87e1b74:	74 3a                	je     87e1bb0 <_ZNK12TiXmlElement9AttributeERKSs+0x50>
 87e1b76:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e1b79:	89 5d ec             	mov    %ebx,-0x14(%ebp)
 87e1b7c:	8b 12                	mov    (%edx),%edx
 87e1b7e:	89 55 f0             	mov    %edx,-0x10(%ebp)
 87e1b81:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e1b84:	eb 0a                	jmp    87e1b90 <_ZNK12TiXmlElement9AttributeERKSs+0x30>
 87e1b86:	66 90                	xchg   %ax,%ax
 87e1b88:	8b 40 20             	mov    0x20(%eax),%eax
 87e1b8b:	39 45 ec             	cmp    %eax,-0x14(%ebp)
 87e1b8e:	74 20                	je     87e1bb0 <_ZNK12TiXmlElement9AttributeERKSs+0x50>
 87e1b90:	8b 70 14             	mov    0x14(%eax),%esi
 87e1b93:	39 56 f4             	cmp    %edx,-0xc(%esi)
 87e1b96:	75 f0                	jne    87e1b88 <_ZNK12TiXmlElement9AttributeERKSs+0x28>
 87e1b98:	8b 7d f0             	mov    -0x10(%ebp),%edi
 87e1b9b:	39 d2                	cmp    %edx,%edx
 87e1b9d:	89 d1                	mov    %edx,%ecx
 87e1b9f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e1ba1:	75 e5                	jne    87e1b88 <_ZNK12TiXmlElement9AttributeERKSs+0x28>
 87e1ba3:	83 c4 08             	add    $0x8,%esp
 87e1ba6:	83 c0 18             	add    $0x18,%eax
 87e1ba9:	5b                   	pop    %ebx
 87e1baa:	5e                   	pop    %esi
 87e1bab:	5f                   	pop    %edi
 87e1bac:	5d                   	pop    %ebp
 87e1bad:	c3                   	ret
 87e1bae:	66 90                	xchg   %ax,%ax
 87e1bb0:	83 c4 08             	add    $0x8,%esp
 87e1bb3:	31 c0                	xor    %eax,%eax
 87e1bb5:	5b                   	pop    %ebx
 87e1bb6:	5e                   	pop    %esi
 87e1bb7:	5f                   	pop    %edi
 87e1bb8:	5d                   	pop    %ebp
 87e1bb9:	c3                   	ret
 87e1bba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlElement::Attribute @ 0x87e1b60

/* TiXmlElement::Attribute(std::string const&) const */

TiXmlElement * __thiscall TiXmlElement::Attribute(TiXmlElement *this,string *param_1)

{
  int iVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar2 != this + 0x2c) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar2 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar3 = iVar1;
        pcVar4 = *(char **)(pTVar2 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          return pTVar2 + 0x18;
        }
      }
      pTVar2 = *(TiXmlElement **)(pTVar2 + 0x20);
    } while (this + 0x2c != pTVar2);
  }
  return (TiXmlElement *)0x0;
}

```

---

## Attribute_087e1c40

```asm
// === 087e1c40 TiXmlElement::Attribute  [0x087e1c40-0x87e1ccf] ===
 87e1c40:	55                   	push   %ebp
 87e1c41:	89 e5                	mov    %esp,%ebp
 87e1c43:	57                   	push   %edi
 87e1c44:	56                   	push   %esi
 87e1c45:	53                   	push   %ebx
 87e1c46:	83 ec 3c             	sub    $0x3c,%esp
 87e1c49:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e1c4c:	8b 53 4c             	mov    0x4c(%ebx),%edx
 87e1c4f:	83 c3 2c             	add    $0x2c,%ebx
 87e1c52:	39 da                	cmp    %ebx,%edx
 87e1c54:	74 62                	je     87e1cb8 <_ZNK12TiXmlElement9AttributeERKSsPd+0x78>
 87e1c56:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e1c59:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e1c5c:	8b 00                	mov    (%eax),%eax
 87e1c5e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e1c61:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e1c64:	eb 0a                	jmp    87e1c70 <_ZNK12TiXmlElement9AttributeERKSsPd+0x30>
 87e1c66:	66 90                	xchg   %ax,%ax
 87e1c68:	8b 52 20             	mov    0x20(%edx),%edx
 87e1c6b:	39 55 d4             	cmp    %edx,-0x2c(%ebp)
 87e1c6e:	74 48                	je     87e1cb8 <_ZNK12TiXmlElement9AttributeERKSsPd+0x78>
 87e1c70:	8b 72 14             	mov    0x14(%edx),%esi
 87e1c73:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e1c76:	75 f0                	jne    87e1c68 <_ZNK12TiXmlElement9AttributeERKSsPd+0x28>
 87e1c78:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e1c7b:	39 c0                	cmp    %eax,%eax
 87e1c7d:	89 c1                	mov    %eax,%ecx
 87e1c7f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e1c81:	75 e5                	jne    87e1c68 <_ZNK12TiXmlElement9AttributeERKSsPd+0x28>
 87e1c83:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e1c86:	8d 5a 18             	lea    0x18(%edx),%ebx
 87e1c89:	85 ff                	test   %edi,%edi
 87e1c8b:	74 1a                	je     87e1ca7 <_ZNK12TiXmlElement9AttributeERKSsPd+0x67>
 87e1c8d:	8b 45 10             	mov    0x10(%ebp),%eax
 87e1c90:	c7 44 24 04 99 0e de 	movl   $0x8de0e99,0x4(%esp)
 87e1c97:	08 
 87e1c98:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1c9c:	8b 42 18             	mov    0x18(%edx),%eax
 87e1c9f:	89 04 24             	mov    %eax,(%esp)
 87e1ca2:	e8 39 bd 89 ff       	call   807d9e0 <sscanf@plt>
 87e1ca7:	83 c4 3c             	add    $0x3c,%esp
 87e1caa:	89 d8                	mov    %ebx,%eax
 87e1cac:	5b                   	pop    %ebx
 87e1cad:	5e                   	pop    %esi
 87e1cae:	5f                   	pop    %edi
 87e1caf:	5d                   	pop    %ebp
 87e1cb0:	c3                   	ret
 87e1cb1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1cb8:	31 db                	xor    %ebx,%ebx
 87e1cba:	83 c4 3c             	add    $0x3c,%esp
 87e1cbd:	89 d8                	mov    %ebx,%eax
 87e1cbf:	5b                   	pop    %ebx
 87e1cc0:	5e                   	pop    %esi
 87e1cc1:	5f                   	pop    %edi
 87e1cc2:	5d                   	pop    %ebp
 87e1cc3:	c3                   	ret
 87e1cc4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e1cca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Attribute @ 0x87e1c40

/* TiXmlElement::Attribute(std::string const&, double*) const */

TiXmlElement * __thiscall
TiXmlElement::Attribute(TiXmlElement *this,string *param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  TiXmlElement *pTVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar3 != this + 0x2c) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar3 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar2 = iVar1;
        pcVar4 = *(char **)(pTVar3 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          if (param_2 != (double *)0x0) {
            sscanf(*(char **)(pTVar3 + 0x18),"%lf",param_2);
          }
          return pTVar3 + 0x18;
        }
      }
      pTVar3 = *(TiXmlElement **)(pTVar3 + 0x20);
    } while (this + 0x2c != pTVar3);
  }
  return (TiXmlElement *)0x0;
}

```

---

## ClearThis

```asm
// === 087e1640 TiXmlElement::ClearThis  [0x087e1640-0x87e16bf] ===
 87e1640:	55                   	push   %ebp
 87e1641:	89 e5                	mov    %esp,%ebp
 87e1643:	56                   	push   %esi
 87e1644:	53                   	push   %ebx
 87e1645:	83 ec 10             	sub    $0x10,%esp
 87e1648:	8b 75 08             	mov    0x8(%ebp),%esi
 87e164b:	8b 46 18             	mov    0x18(%esi),%eax
 87e164e:	85 c0                	test   %eax,%eax
 87e1650:	75 08                	jne    87e165a <_ZN12TiXmlElement9ClearThisEv+0x1a>
 87e1652:	eb 15                	jmp    87e1669 <_ZN12TiXmlElement9ClearThisEv+0x29>
 87e1654:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1658:	89 d8                	mov    %ebx,%eax
 87e165a:	8b 58 28             	mov    0x28(%eax),%ebx
 87e165d:	8b 10                	mov    (%eax),%edx
 87e165f:	89 04 24             	mov    %eax,(%esp)
 87e1662:	ff 52 04             	call   *0x4(%edx)
 87e1665:	85 db                	test   %ebx,%ebx
 87e1667:	75 ef                	jne    87e1658 <_ZN12TiXmlElement9ClearThisEv+0x18>
 87e1669:	8b 46 4c             	mov    0x4c(%esi),%eax
 87e166c:	8d 5e 2c             	lea    0x2c(%esi),%ebx
 87e166f:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87e1676:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87e167d:	39 d8                	cmp    %ebx,%eax
 87e167f:	74 30                	je     87e16b1 <_ZN12TiXmlElement9ClearThisEv+0x71>
 87e1681:	85 c0                	test   %eax,%eax
 87e1683:	74 2c                	je     87e16b1 <_ZN12TiXmlElement9ClearThisEv+0x71>
 87e1685:	8b 50 1c             	mov    0x1c(%eax),%edx
 87e1688:	8b 48 20             	mov    0x20(%eax),%ecx
 87e168b:	89 4a 20             	mov    %ecx,0x20(%edx)
 87e168e:	8b 48 20             	mov    0x20(%eax),%ecx
 87e1691:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e1698:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87e169b:	8b 10                	mov    (%eax),%edx
 87e169d:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e16a4:	89 04 24             	mov    %eax,(%esp)
 87e16a7:	ff 52 04             	call   *0x4(%edx)
 87e16aa:	8b 46 4c             	mov    0x4c(%esi),%eax
 87e16ad:	39 d8                	cmp    %ebx,%eax
 87e16af:	75 d0                	jne    87e1681 <_ZN12TiXmlElement9ClearThisEv+0x41>
 87e16b1:	83 c4 10             	add    $0x10,%esp
 87e16b4:	5b                   	pop    %ebx
 87e16b5:	5e                   	pop    %esi
 87e16b6:	5d                   	pop    %ebp
 87e16b7:	c3                   	ret
 87e16b8:	90                   	nop
 87e16b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlElement::ClearThis @ 0x87e1640

/* TiXmlElement::ClearThis() */

void __thiscall TiXmlElement::ClearThis(TiXmlElement *this)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != this + 0x2c && (pTVar2 != (TiXmlElement *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(int *)(iVar3 + 0x20) = *(int *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(int *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(int *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlElement **)(this + 0x4c);
  }
  return;
}

```

---

## Clone

```asm
// === 087e3de0 TiXmlElement::Clone  [0x087e3de0-0x87e3e4f] ===
 87e3de0:	55                   	push   %ebp
 87e3de1:	89 e5                	mov    %esp,%ebp
 87e3de3:	83 ec 28             	sub    $0x28,%esp
 87e3de6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e3de9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e3dec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e3def:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e3df2:	8b 7e 20             	mov    0x20(%esi),%edi
 87e3df5:	c7 04 24 50 00 00 00 	movl   $0x50,(%esp)
 87e3dfc:	e8 4f 06 f4 ff       	call   8724450 <_Znwj>
 87e3e01:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e3e05:	89 c3                	mov    %eax,%ebx
 87e3e07:	89 04 24             	mov    %eax,(%esp)
 87e3e0a:	e8 31 f8 ff ff       	call   87e3640 <_ZN12TiXmlElementC1EPKc>
 87e3e0f:	31 c0                	xor    %eax,%eax
 87e3e11:	85 db                	test   %ebx,%ebx
 87e3e13:	74 0e                	je     87e3e23 <_ZNK12TiXmlElement5CloneEv+0x43>
 87e3e15:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e3e19:	89 34 24             	mov    %esi,(%esp)
 87e3e1c:	e8 ff fd ff ff       	call   87e3c20 <_ZNK12TiXmlElement6CopyToEPS_>
 87e3e21:	89 d8                	mov    %ebx,%eax
 87e3e23:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e3e26:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e3e29:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e3e2c:	89 ec                	mov    %ebp,%esp
 87e3e2e:	5d                   	pop    %ebp
 87e3e2f:	c3                   	ret
 87e3e30:	89 c6                	mov    %eax,%esi
 87e3e32:	89 1c 24             	mov    %ebx,(%esp)
 87e3e35:	e8 b6 06 f4 ff       	call   87244f0 <_ZdlPv>
 87e3e3a:	89 34 24             	mov    %esi,(%esp)
 87e3e3d:	e8 0e f9 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e3e42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e3e49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::Clone @ 0x87e3de0

/* TiXmlElement::Clone() const */

TiXmlElement * __thiscall TiXmlElement::Clone(TiXmlElement *this)

{
  char *pcVar1;
  TiXmlElement *this_00;
  TiXmlElement *pTVar2;
  
  pcVar1 = *(char **)(this + 0x20);
  this_00 = operator_new(0x50);
                    /* try { // try from 087e3e0a to 087e3e0e has its CatchHandler @ 087e3e30 */
  TiXmlElement(this_00,pcVar1);
  pTVar2 = (TiXmlElement *)0x0;
  if (this_00 != (TiXmlElement *)0x0) {
    CopyTo(this,this_00);
    pTVar2 = this_00;
  }
  return pTVar2;
}

```

---

## CopyTo

```asm
// === 087e3c20 TiXmlElement::CopyTo  [0x087e3c20-0x87e3ddf] ===
 87e3c20:	55                   	push   %ebp
 87e3c21:	89 e5                	mov    %esp,%ebp
 87e3c23:	57                   	push   %edi
 87e3c24:	56                   	push   %esi
 87e3c25:	53                   	push   %ebx
 87e3c26:	83 ec 2c             	sub    $0x2c,%esp
 87e3c29:	8b 45 08             	mov    0x8(%ebp),%eax
 87e3c2c:	8b 58 20             	mov    0x20(%eax),%ebx
 87e3c2f:	89 1c 24             	mov    %ebx,(%esp)
 87e3c32:	e8 79 a7 89 ff       	call   807e3b0 <strlen@plt>
 87e3c37:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e3c3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3c3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3c42:	83 c0 20             	add    $0x20,%eax
 87e3c45:	89 04 24             	mov    %eax,(%esp)
 87e3c48:	e8 53 49 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e3c4d:	8b 55 08             	mov    0x8(%ebp),%edx
 87e3c50:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e3c53:	8b 42 0c             	mov    0xc(%edx),%eax
 87e3c56:	89 41 0c             	mov    %eax,0xc(%ecx)
 87e3c59:	8b 42 04             	mov    0x4(%edx),%eax
 87e3c5c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e3c5f:	8b 52 08             	mov    0x8(%edx),%edx
 87e3c62:	89 41 04             	mov    %eax,0x4(%ecx)
 87e3c65:	8b 45 08             	mov    0x8(%ebp),%eax
 87e3c68:	89 51 08             	mov    %edx,0x8(%ecx)
 87e3c6b:	8b 40 4c             	mov    0x4c(%eax),%eax
 87e3c6e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3c71:	8b 45 08             	mov    0x8(%ebp),%eax
 87e3c74:	83 c0 2c             	add    $0x2c,%eax
 87e3c77:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 87e3c7a:	0f 84 1e 01 00 00    	je     87e3d9e <_ZNK12TiXmlElement6CopyToEPS_+0x17e>
 87e3c80:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 87e3c83:	85 db                	test   %ebx,%ebx
 87e3c85:	0f 84 13 01 00 00    	je     87e3d9e <_ZNK12TiXmlElement6CopyToEPS_+0x17e>
 87e3c8b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e3c8e:	89 cf                	mov    %ecx,%edi
 87e3c90:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e3c93:	83 c7 2c             	add    $0x2c,%edi
 87e3c96:	8b 52 18             	mov    0x18(%edx),%edx
 87e3c99:	8b 71 14             	mov    0x14(%ecx),%esi
 87e3c9c:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87e3c9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3ca2:	8b 58 4c             	mov    0x4c(%eax),%ebx
 87e3ca5:	39 fb                	cmp    %edi,%ebx
 87e3ca7:	75 0e                	jne    87e3cb7 <_ZNK12TiXmlElement6CopyToEPS_+0x97>
 87e3ca9:	eb 6d                	jmp    87e3d18 <_ZNK12TiXmlElement6CopyToEPS_+0xf8>
 87e3cab:	90                   	nop
 87e3cac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e3cb0:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e3cb3:	39 fb                	cmp    %edi,%ebx
 87e3cb5:	74 61                	je     87e3d18 <_ZNK12TiXmlElement6CopyToEPS_+0xf8>
 87e3cb7:	8b 43 14             	mov    0x14(%ebx),%eax
 87e3cba:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e3cbe:	89 04 24             	mov    %eax,(%esp)
 87e3cc1:	e8 1a a8 89 ff       	call   807e4e0 <strcmp@plt>
 87e3cc6:	85 c0                	test   %eax,%eax
 87e3cc8:	75 e6                	jne    87e3cb0 <_ZNK12TiXmlElement6CopyToEPS_+0x90>
 87e3cca:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e3ccd:	83 c3 18             	add    $0x18,%ebx
 87e3cd0:	89 14 24             	mov    %edx,(%esp)
 87e3cd3:	e8 d8 a6 89 ff       	call   807e3b0 <strlen@plt>
 87e3cd8:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e3cdb:	89 1c 24             	mov    %ebx,(%esp)
 87e3cde:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87e3ce2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3ce6:	e8 b5 48 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e3ceb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e3cee:	8b 40 20             	mov    0x20(%eax),%eax
 87e3cf1:	8b 50 18             	mov    0x18(%eax),%edx
 87e3cf4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3cf7:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e3cfa:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87e3cfd:	85 c9                	test   %ecx,%ecx
 87e3cff:	0f 84 8b 00 00 00    	je     87e3d90 <_ZNK12TiXmlElement6CopyToEPS_+0x170>
 87e3d05:	8b 70 14             	mov    0x14(%eax),%esi
 87e3d08:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3d0b:	8b 58 4c             	mov    0x4c(%eax),%ebx
 87e3d0e:	39 fb                	cmp    %edi,%ebx
 87e3d10:	75 a5                	jne    87e3cb7 <_ZNK12TiXmlElement6CopyToEPS_+0x97>
 87e3d12:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e3d18:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e3d1f:	e8 2c 07 f4 ff       	call   8724450 <_Znwj>
 87e3d24:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e3d2b:	89 c3                	mov    %eax,%ebx
 87e3d2d:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e3d34:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e3d3b:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e3d41:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e3d48:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e3d4f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e3d56:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e3d5d:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e3d64:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3d68:	89 3c 24             	mov    %edi,(%esp)
 87e3d6b:	e8 d0 fc ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e3d70:	89 34 24             	mov    %esi,(%esp)
 87e3d73:	e8 38 a6 89 ff       	call   807e3b0 <strlen@plt>
 87e3d78:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e3d7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3d80:	8d 43 14             	lea    0x14(%ebx),%eax
 87e3d83:	89 04 24             	mov    %eax,(%esp)
 87e3d86:	e8 15 48 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e3d8b:	e9 3a ff ff ff       	jmp    87e3cca <_ZNK12TiXmlElement6CopyToEPS_+0xaa>
 87e3d90:	8b 70 14             	mov    0x14(%eax),%esi
 87e3d93:	8b 56 f4             	mov    -0xc(%esi),%edx
 87e3d96:	85 d2                	test   %edx,%edx
 87e3d98:	0f 85 01 ff ff ff    	jne    87e3c9f <_ZNK12TiXmlElement6CopyToEPS_+0x7f>
 87e3d9e:	8b 55 08             	mov    0x8(%ebp),%edx
 87e3da1:	8b 5a 18             	mov    0x18(%edx),%ebx
 87e3da4:	85 db                	test   %ebx,%ebx
 87e3da6:	74 23                	je     87e3dcb <_ZNK12TiXmlElement6CopyToEPS_+0x1ab>
 87e3da8:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e3dab:	90                   	nop
 87e3dac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e3db0:	8b 03                	mov    (%ebx),%eax
 87e3db2:	89 1c 24             	mov    %ebx,(%esp)
 87e3db5:	ff 50 40             	call   *0x40(%eax)
 87e3db8:	89 34 24             	mov    %esi,(%esp)
 87e3dbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3dbf:	e8 8c e3 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e3dc4:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e3dc7:	85 db                	test   %ebx,%ebx
 87e3dc9:	75 e5                	jne    87e3db0 <_ZNK12TiXmlElement6CopyToEPS_+0x190>
 87e3dcb:	83 c4 2c             	add    $0x2c,%esp
 87e3dce:	5b                   	pop    %ebx
 87e3dcf:	5e                   	pop    %esi
 87e3dd0:	5f                   	pop    %edi
 87e3dd1:	5d                   	pop    %ebp
 87e3dd2:	c3                   	ret
 87e3dd3:	90                   	nop
 87e3dd4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e3dda:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::CopyTo @ 0x87e3c20

/* TiXmlElement::CopyTo(TiXmlElement*) const */

void __thiscall TiXmlElement::CopyTo(TiXmlElement *this,TiXmlElement *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  TiXmlAttribute *pTVar5;
  TiXmlNode *pTVar6;
  char *pcVar7;
  TiXmlAttributeSet *this_00;
  char *local_24;
  TiXmlElement *local_20;
  
  pcVar7 = *(char **)(this + 0x20);
  sVar3 = strlen(pcVar7);
  std::string::assign((string *)(param_1 + 0x20),pcVar7,sVar3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  local_20 = *(TiXmlElement **)(this + 0x4c);
  if ((local_20 != this + 0x2c) && (local_20 != (TiXmlElement *)0x0)) {
    this_00 = (TiXmlAttributeSet *)(param_1 + 0x2c);
    local_24 = *(char **)(local_20 + 0x18);
    pcVar7 = *(char **)(local_20 + 0x14);
    do {
      pTVar5 = *(TiXmlAttribute **)(param_1 + 0x4c);
      if (pTVar5 != (TiXmlAttribute *)this_00) goto LAB_087e3cb7;
LAB_087e3d18:
      pTVar5 = operator_new(0x24);
      *(undefined4 *)(pTVar5 + 8) = 0xffffffff;
      *(undefined4 *)(pTVar5 + 4) = 0xffffffff;
      *(undefined4 *)(pTVar5 + 0xc) = 0;
      *(undefined ***)pTVar5 = &PTR__TiXmlAttribute_08de2028;
      *(undefined1 **)(pTVar5 + 0x14) = &DAT_0948ccfc;
      *(undefined1 **)(pTVar5 + 0x18) = &DAT_0948ccfc;
      *(undefined4 *)(pTVar5 + 0x10) = 0;
      *(undefined4 *)(pTVar5 + 0x20) = 0;
      *(undefined4 *)(pTVar5 + 0x1c) = 0;
      TiXmlAttributeSet::Add(this_00,pTVar5);
      sVar3 = strlen(pcVar7);
      std::string::assign((string *)(pTVar5 + 0x14),pcVar7,sVar3);
      while( true ) {
        sVar3 = strlen(local_24);
        std::string::assign((string *)(pTVar5 + 0x18),local_24,sVar3);
        local_20 = *(TiXmlElement **)(local_20 + 0x20);
        local_24 = *(char **)(local_20 + 0x18);
        if (*(int *)(local_24 + -0xc) == 0) break;
        pcVar7 = *(char **)(local_20 + 0x14);
        pTVar5 = *(TiXmlAttribute **)(param_1 + 0x4c);
        while( true ) {
          if (pTVar5 == (TiXmlAttribute *)this_00) goto LAB_087e3d18;
LAB_087e3cb7:
          iVar4 = strcmp(*(char **)(pTVar5 + 0x14),pcVar7);
          if (iVar4 == 0) break;
          pTVar5 = *(TiXmlAttribute **)(pTVar5 + 0x20);
        }
      }
      pcVar7 = *(char **)(local_20 + 0x14);
    } while (*(int *)(pcVar7 + -0xc) != 0);
  }
  for (piVar2 = *(int **)(this + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[10]) {
    pTVar6 = (TiXmlNode *)(**(code **)(*piVar2 + 0x40))(piVar2);
    TiXmlNode::LinkEndChild((TiXmlNode *)param_1,pTVar6);
  }
  return;
}

```

---

## GetText

```asm
// === 087dff90 TiXmlElement::GetText  [0x087dff90-0x87dffbf] ===
 87dff90:	55                   	push   %ebp
 87dff91:	89 e5                	mov    %esp,%ebp
 87dff93:	83 ec 18             	sub    $0x18,%esp
 87dff96:	8b 45 08             	mov    0x8(%ebp),%eax
 87dff99:	8b 40 18             	mov    0x18(%eax),%eax
 87dff9c:	85 c0                	test   %eax,%eax
 87dff9e:	75 08                	jne    87dffa8 <_ZNK12TiXmlElement7GetTextEv+0x18>
 87dffa0:	31 c0                	xor    %eax,%eax
 87dffa2:	c9                   	leave
 87dffa3:	c3                   	ret
 87dffa4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87dffa8:	8b 10                	mov    (%eax),%edx
 87dffaa:	89 04 24             	mov    %eax,(%esp)
 87dffad:	ff 52 20             	call   *0x20(%edx)
 87dffb0:	85 c0                	test   %eax,%eax
 87dffb2:	74 ec                	je     87dffa0 <_ZNK12TiXmlElement7GetTextEv+0x10>
 87dffb4:	8b 40 20             	mov    0x20(%eax),%eax
 87dffb7:	c9                   	leave
 87dffb8:	c3                   	ret
 87dffb9:	90                   	nop
 87dffba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlElement::GetText @ 0x87dff90

/* TiXmlElement::GetText() const */

undefined4 __thiscall TiXmlElement::GetText(TiXmlElement *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
    if (iVar2 != 0) {
      return *(undefined4 *)(iVar2 + 0x20);
    }
  }
  return 0;
}

```

---

## Parse

```asm
// === 087e7d50 TiXmlElement::Parse  [0x087e7d50-0x87e842f] ===
 87e7d50:	55                   	push   %ebp
 87e7d51:	89 e5                	mov    %esp,%ebp
 87e7d53:	57                   	push   %edi
 87e7d54:	56                   	push   %esi
 87e7d55:	53                   	push   %ebx
 87e7d56:	83 ec 4c             	sub    $0x4c,%esp
 87e7d59:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e7d5c:	85 f6                	test   %esi,%esi
 87e7d5e:	75 30                	jne    87e7d90 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x40>
 87e7d60:	8b 55 08             	mov    0x8(%ebp),%edx
 87e7d63:	89 14 24             	mov    %edx,(%esp)
 87e7d66:	e8 65 81 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e7d6b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e7d6e:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87e7d71:	85 c9                	test   %ecx,%ecx
 87e7d73:	0f 85 92 04 00 00    	jne    87e820b <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4bb>
 87e7d79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e7d80:	31 f6                	xor    %esi,%esi
 87e7d82:	83 c4 4c             	add    $0x4c,%esp
 87e7d85:	89 f0                	mov    %esi,%eax
 87e7d87:	5b                   	pop    %ebx
 87e7d88:	5e                   	pop    %esi
 87e7d89:	5f                   	pop    %edi
 87e7d8a:	5d                   	pop    %ebp
 87e7d8b:	c3                   	ret
 87e7d8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7d90:	0f b6 1e             	movzbl (%esi),%ebx
 87e7d93:	84 db                	test   %bl,%bl
 87e7d95:	74 c9                	je     87e7d60 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x10>
 87e7d97:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e7d9b:	74 35                	je     87e7dd2 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x82>
 87e7d9d:	0f b6 c3             	movzbl %bl,%eax
 87e7da0:	89 04 24             	mov    %eax,(%esp)
 87e7da3:	e8 d8 64 89 ff       	call   807e280 <isspace@plt>
 87e7da8:	80 fb 0a             	cmp    $0xa,%bl
 87e7dab:	74 0b                	je     87e7db8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x68>
 87e7dad:	85 c0                	test   %eax,%eax
 87e7daf:	75 07                	jne    87e7db8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x68>
 87e7db1:	80 fb 0d             	cmp    $0xd,%bl
 87e7db4:	75 3e                	jne    87e7df4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa4>
 87e7db6:	66 90                	xchg   %ax,%ax
 87e7db8:	83 c6 01             	add    $0x1,%esi
 87e7dbb:	0f b6 1e             	movzbl (%esi),%ebx
 87e7dbe:	84 db                	test   %bl,%bl
 87e7dc0:	74 32                	je     87e7df4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa4>
 87e7dc2:	eb d9                	jmp    87e7d9d <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4d>
 87e7dc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7dc8:	83 c6 01             	add    $0x1,%esi
 87e7dcb:	0f b6 1e             	movzbl (%esi),%ebx
 87e7dce:	84 db                	test   %bl,%bl
 87e7dd0:	74 22                	je     87e7df4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa4>
 87e7dd2:	80 3e ef             	cmpb   $0xef,(%esi)
 87e7dd5:	0f 84 dd 02 00 00    	je     87e80b8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x368>
 87e7ddb:	0f b6 c3             	movzbl %bl,%eax
 87e7dde:	89 04 24             	mov    %eax,(%esp)
 87e7de1:	e8 9a 64 89 ff       	call   807e280 <isspace@plt>
 87e7de6:	85 c0                	test   %eax,%eax
 87e7de8:	75 de                	jne    87e7dc8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87e7dea:	80 fb 0a             	cmp    $0xa,%bl
 87e7ded:	74 d9                	je     87e7dc8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87e7def:	80 fb 0d             	cmp    $0xd,%bl
 87e7df2:	74 d4                	je     87e7dc8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87e7df4:	8b 45 08             	mov    0x8(%ebp),%eax
 87e7df7:	89 04 24             	mov    %eax,(%esp)
 87e7dfa:	e8 d1 80 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e7dff:	85 f6                	test   %esi,%esi
 87e7e01:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e7e04:	0f 84 64 ff ff ff    	je     87e7d6e <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e7e0a:	0f b6 06             	movzbl (%esi),%eax
 87e7e0d:	84 c0                	test   %al,%al
 87e7e0f:	0f 84 59 ff ff ff    	je     87e7d6e <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e7e15:	8b 55 10             	mov    0x10(%ebp),%edx
 87e7e18:	85 d2                	test   %edx,%edx
 87e7e1a:	74 2a                	je     87e7e46 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf6>
 87e7e1c:	8b 45 14             	mov    0x14(%ebp),%eax
 87e7e1f:	8b 55 10             	mov    0x10(%ebp),%edx
 87e7e22:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e7e26:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e7e2a:	89 14 24             	mov    %edx,(%esp)
 87e7e2d:	e8 ee e1 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e7e32:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e7e35:	8b 01                	mov    (%ecx),%eax
 87e7e37:	8b 51 04             	mov    0x4(%ecx),%edx
 87e7e3a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e7e3d:	89 41 04             	mov    %eax,0x4(%ecx)
 87e7e40:	89 51 08             	mov    %edx,0x8(%ecx)
 87e7e43:	0f b6 06             	movzbl (%esi),%eax
 87e7e46:	3c 3c                	cmp    $0x3c,%al
 87e7e48:	0f 85 d2 01 00 00    	jne    87e8020 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2d0>
 87e7e4e:	89 f3                	mov    %esi,%ebx
 87e7e50:	83 c3 01             	add    $0x1,%ebx
 87e7e53:	0f 85 87 02 00 00    	jne    87e80e0 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x390>
 87e7e59:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e7e5c:	8b 45 14             	mov    0x14(%ebp),%eax
 87e7e5f:	89 1c 24             	mov    %ebx,(%esp)
 87e7e62:	83 c7 20             	add    $0x20,%edi
 87e7e65:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e7e69:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e7e6d:	e8 be ed ff ff       	call   87e6c30 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding>
 87e7e72:	85 c0                	test   %eax,%eax
 87e7e74:	89 c6                	mov    %eax,%esi
 87e7e76:	0f 84 e4 02 00 00    	je     87e8160 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x410>
 87e7e7c:	80 38 00             	cmpb   $0x0,(%eax)
 87e7e7f:	0f 84 db 02 00 00    	je     87e8160 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x410>
 87e7e85:	8d 45 e7             	lea    -0x19(%ebp),%eax
 87e7e88:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87e7e8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e7e8f:	c7 44 24 04 50 0f de 	movl   $0x8de0f50,0x4(%esp)
 87e7e96:	08 
 87e7e97:	89 14 24             	mov    %edx,(%esp)
 87e7e9a:	e8 91 f7 f1 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 87e7e9f:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 87e7ea2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e7ea6:	89 0c 24             	mov    %ecx,(%esp)
 87e7ea9:	e8 92 02 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e7eae:	8b 45 08             	mov    0x8(%ebp),%eax
 87e7eb1:	83 c0 2c             	add    $0x2c,%eax
 87e7eb4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e7eb7:	90                   	nop
 87e7eb8:	0f b6 1e             	movzbl (%esi),%ebx
 87e7ebb:	84 db                	test   %bl,%bl
 87e7ebd:	75 49                	jne    87e7f08 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b8>
 87e7ebf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e7ec2:	83 e8 0c             	sub    $0xc,%eax
 87e7ec5:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e7eca:	0f 84 b2 fe ff ff    	je     87e7d82 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32>
 87e7ed0:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e7ed5:	85 d2                	test   %edx,%edx
 87e7ed7:	0f 84 42 05 00 00    	je     87e841f <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6cf>
 87e7edd:	83 ca ff             	or     $0xffffffff,%edx
 87e7ee0:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e7ee5:	85 d2                	test   %edx,%edx
 87e7ee7:	0f 8f 95 fe ff ff    	jg     87e7d82 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32>
 87e7eed:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87e7ef0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e7ef4:	89 04 24             	mov    %eax,(%esp)
 87e7ef7:	e8 24 ea f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e7efc:	e9 81 fe ff ff       	jmp    87e7d82 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32>
 87e7f01:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e7f08:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e7f0c:	89 f7                	mov    %esi,%edi
 87e7f0e:	0f 84 44 01 00 00    	je     87e8058 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x308>
 87e7f14:	0f b6 c3             	movzbl %bl,%eax
 87e7f17:	89 04 24             	mov    %eax,(%esp)
 87e7f1a:	e8 61 63 89 ff       	call   807e280 <isspace@plt>
 87e7f1f:	80 fb 0a             	cmp    $0xa,%bl
 87e7f22:	0f 84 e0 00 00 00    	je     87e8008 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2b8>
 87e7f28:	85 c0                	test   %eax,%eax
 87e7f2a:	0f 85 d8 00 00 00    	jne    87e8008 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2b8>
 87e7f30:	80 fb 0d             	cmp    $0xd,%bl
 87e7f33:	0f 84 cf 00 00 00    	je     87e8008 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2b8>
 87e7f39:	85 ff                	test   %edi,%edi
 87e7f3b:	0f 84 57 02 00 00    	je     87e8198 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x448>
 87e7f41:	84 db                	test   %bl,%bl
 87e7f43:	0f 84 4f 02 00 00    	je     87e8198 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x448>
 87e7f49:	80 fb 2f             	cmp    $0x2f,%bl
 87e7f4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7f50:	0f 84 d2 02 00 00    	je     87e8228 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4d8>
 87e7f56:	80 fb 3e             	cmp    $0x3e,%bl
 87e7f59:	0f 84 09 03 00 00    	je     87e8268 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x518>
 87e7f5f:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e7f66:	e8 e5 c4 f3 ff       	call   8724450 <_Znwj>
 87e7f6b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e7f6e:	89 c3                	mov    %eax,%ebx
 87e7f70:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e7f77:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87e7f7a:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e7f81:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e7f88:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e7f8e:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e7f95:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e7f9c:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e7fa3:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e7faa:	89 50 10             	mov    %edx,0x10(%eax)
 87e7fad:	8b 45 10             	mov    0x10(%ebp),%eax
 87e7fb0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e7fb4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e7fb8:	89 1c 24             	mov    %ebx,(%esp)
 87e7fbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e7fbf:	ff 15 34 20 de 08    	call   *0x8de2034
 87e7fc5:	85 c0                	test   %eax,%eax
 87e7fc7:	89 c6                	mov    %eax,%esi
 87e7fc9:	0f 84 01 02 00 00    	je     87e81d0 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x480>
 87e7fcf:	80 38 00             	cmpb   $0x0,(%eax)
 87e7fd2:	0f 84 f8 01 00 00    	je     87e81d0 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x480>
 87e7fd8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e7fdb:	8d 43 14             	lea    0x14(%ebx),%eax
 87e7fde:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e7fe2:	89 14 24             	mov    %edx,(%esp)
 87e7fe5:	e8 86 83 ff ff       	call   87e0370 <_ZNK17TiXmlAttributeSet4FindERKSs>
 87e7fea:	85 c0                	test   %eax,%eax
 87e7fec:	0f 85 de 02 00 00    	jne    87e82d0 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x580>
 87e7ff2:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e7ff5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e7ff9:	89 0c 24             	mov    %ecx,(%esp)
 87e7ffc:	e8 3f ba ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e8001:	e9 b2 fe ff ff       	jmp    87e7eb8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x168>
 87e8006:	66 90                	xchg   %ax,%ax
 87e8008:	83 c7 01             	add    $0x1,%edi
 87e800b:	0f b6 1f             	movzbl (%edi),%ebx
 87e800e:	84 db                	test   %bl,%bl
 87e8010:	0f 84 23 ff ff ff    	je     87e7f39 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e8016:	e9 f9 fe ff ff       	jmp    87e7f14 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c4>
 87e801b:	90                   	nop
 87e801c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8020:	8b 7d d0             	mov    -0x30(%ebp),%edi
 87e8023:	85 ff                	test   %edi,%edi
 87e8025:	0f 84 55 fd ff ff    	je     87e7d80 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x30>
 87e802b:	8b 45 14             	mov    0x14(%ebp),%eax
 87e802e:	8b 55 10             	mov    0x10(%ebp),%edx
 87e8031:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e8035:	89 44 24 10          	mov    %eax,0x10(%esp)
 87e8039:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e803d:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87e8040:	31 f6                	xor    %esi,%esi
 87e8042:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87e8049:	00 
 87e804a:	89 0c 24             	mov    %ecx,(%esp)
 87e804d:	e8 de ec ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8052:	e9 2b fd ff ff       	jmp    87e7d82 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32>
 87e8057:	90                   	nop
 87e8058:	89 f7                	mov    %esi,%edi
 87e805a:	80 3f ef             	cmpb   $0xef,(%edi)
 87e805d:	74 34                	je     87e8093 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x343>
 87e805f:	90                   	nop
 87e8060:	0f b6 c3             	movzbl %bl,%eax
 87e8063:	89 04 24             	mov    %eax,(%esp)
 87e8066:	e8 15 62 89 ff       	call   807e280 <isspace@plt>
 87e806b:	85 c0                	test   %eax,%eax
 87e806d:	75 11                	jne    87e8080 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x330>
 87e806f:	80 fb 0a             	cmp    $0xa,%bl
 87e8072:	74 0c                	je     87e8080 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x330>
 87e8074:	80 fb 0d             	cmp    $0xd,%bl
 87e8077:	0f 85 bc fe ff ff    	jne    87e7f39 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e807d:	8d 76 00             	lea    0x0(%esi),%esi
 87e8080:	83 c7 01             	add    $0x1,%edi
 87e8083:	0f b6 1f             	movzbl (%edi),%ebx
 87e8086:	84 db                	test   %bl,%bl
 87e8088:	0f 84 ab fe ff ff    	je     87e7f39 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e808e:	80 3f ef             	cmpb   $0xef,(%edi)
 87e8091:	75 cd                	jne    87e8060 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e8093:	0f b6 47 01          	movzbl 0x1(%edi),%eax
 87e8097:	3c bb                	cmp    $0xbb,%al
 87e8099:	0f 84 b1 00 00 00    	je     87e8150 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x400>
 87e809f:	3c bf                	cmp    $0xbf,%al
 87e80a1:	75 bd                	jne    87e8060 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e80a3:	0f b6 47 02          	movzbl 0x2(%edi),%eax
 87e80a7:	3c be                	cmp    $0xbe,%al
 87e80a9:	74 04                	je     87e80af <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x35f>
 87e80ab:	3c bf                	cmp    $0xbf,%al
 87e80ad:	75 b1                	jne    87e8060 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e80af:	83 c7 03             	add    $0x3,%edi
 87e80b2:	eb cf                	jmp    87e8083 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x333>
 87e80b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e80b8:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e80bc:	3c bb                	cmp    $0xbb,%al
 87e80be:	74 68                	je     87e8128 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3d8>
 87e80c0:	3c bf                	cmp    $0xbf,%al
 87e80c2:	0f 85 13 fd ff ff    	jne    87e7ddb <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x8b>
 87e80c8:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e80cc:	3c be                	cmp    $0xbe,%al
 87e80ce:	74 08                	je     87e80d8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x388>
 87e80d0:	3c bf                	cmp    $0xbf,%al
 87e80d2:	0f 85 03 fd ff ff    	jne    87e7ddb <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x8b>
 87e80d8:	83 c6 03             	add    $0x3,%esi
 87e80db:	e9 eb fc ff ff       	jmp    87e7dcb <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x7b>
 87e80e0:	0f b6 56 01          	movzbl 0x1(%esi),%edx
 87e80e4:	84 d2                	test   %dl,%dl
 87e80e6:	74 38                	je     87e8120 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3d0>
 87e80e8:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e80ec:	0f 84 16 02 00 00    	je     87e8308 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5b8>
 87e80f2:	89 de                	mov    %ebx,%esi
 87e80f4:	89 d3                	mov    %edx,%ebx
 87e80f6:	0f b6 c3             	movzbl %bl,%eax
 87e80f9:	89 04 24             	mov    %eax,(%esp)
 87e80fc:	e8 7f 61 89 ff       	call   807e280 <isspace@plt>
 87e8101:	80 fb 0a             	cmp    $0xa,%bl
 87e8104:	74 32                	je     87e8138 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e8>
 87e8106:	85 c0                	test   %eax,%eax
 87e8108:	75 2e                	jne    87e8138 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e8>
 87e810a:	80 fb 0d             	cmp    $0xd,%bl
 87e810d:	8d 76 00             	lea    0x0(%esi),%esi
 87e8110:	74 26                	je     87e8138 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e8>
 87e8112:	89 f3                	mov    %esi,%ebx
 87e8114:	e9 40 fd ff ff       	jmp    87e7e59 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x109>
 87e8119:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8120:	31 db                	xor    %ebx,%ebx
 87e8122:	e9 32 fd ff ff       	jmp    87e7e59 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x109>
 87e8127:	90                   	nop
 87e8128:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e812c:	0f 85 a9 fc ff ff    	jne    87e7ddb <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x8b>
 87e8132:	eb a4                	jmp    87e80d8 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x388>
 87e8134:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8138:	83 c6 01             	add    $0x1,%esi
 87e813b:	0f b6 1e             	movzbl (%esi),%ebx
 87e813e:	84 db                	test   %bl,%bl
 87e8140:	75 b4                	jne    87e80f6 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3a6>
 87e8142:	89 f3                	mov    %esi,%ebx
 87e8144:	e9 10 fd ff ff       	jmp    87e7e59 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x109>
 87e8149:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8150:	80 7f 02 bf          	cmpb   $0xbf,0x2(%edi)
 87e8154:	0f 85 06 ff ff ff    	jne    87e8060 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e815a:	e9 50 ff ff ff       	jmp    87e80af <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x35f>
 87e815f:	90                   	nop
 87e8160:	8b 75 d0             	mov    -0x30(%ebp),%esi
 87e8163:	85 f6                	test   %esi,%esi
 87e8165:	0f 84 15 fc ff ff    	je     87e7d80 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x30>
 87e816b:	8b 55 14             	mov    0x14(%ebp),%edx
 87e816e:	31 f6                	xor    %esi,%esi
 87e8170:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e8173:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e8176:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 87e817a:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e817e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e8182:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 87e8189:	00 
 87e818a:	89 04 24             	mov    %eax,(%esp)
 87e818d:	e8 9e eb ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8192:	e9 eb fb ff ff       	jmp    87e7d82 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32>
 87e8197:	90                   	nop
 87e8198:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 87e819b:	85 db                	test   %ebx,%ebx
 87e819d:	74 25                	je     87e81c4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x474>
 87e819f:	8b 55 14             	mov    0x14(%ebp),%edx
 87e81a2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e81a5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e81a8:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e81ac:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e81b0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e81b4:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 87e81bb:	00 
 87e81bc:	89 04 24             	mov    %eax,(%esp)
 87e81bf:	e8 6c eb ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e81c4:	31 f6                	xor    %esi,%esi
 87e81c6:	e9 f4 fc ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e81cb:	90                   	nop
 87e81cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e81d0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e81d3:	85 c0                	test   %eax,%eax
 87e81d5:	74 25                	je     87e81fc <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4ac>
 87e81d7:	8b 55 14             	mov    0x14(%ebp),%edx
 87e81da:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e81dd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e81e0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e81e4:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e81e8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e81ec:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87e81f3:	00 
 87e81f4:	89 04 24             	mov    %eax,(%esp)
 87e81f7:	e8 34 eb ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e81fc:	8b 03                	mov    (%ebx),%eax
 87e81fe:	89 1c 24             	mov    %ebx,(%esp)
 87e8201:	ff 50 04             	call   *0x4(%eax)
 87e8204:	31 f6                	xor    %esi,%esi
 87e8206:	e9 b4 fc ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e820b:	8b 55 14             	mov    0x14(%ebp),%edx
 87e820e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e8215:	00 
 87e8216:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e821d:	00 
 87e821e:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e8222:	e9 16 fe ff ff       	jmp    87e803d <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2ed>
 87e8227:	90                   	nop
 87e8228:	80 7f 01 3e          	cmpb   $0x3e,0x1(%edi)
 87e822c:	8d 47 01             	lea    0x1(%edi),%eax
 87e822f:	0f 84 3d 01 00 00    	je     87e8372 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x622>
 87e8235:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87e8238:	85 c9                	test   %ecx,%ecx
 87e823a:	74 88                	je     87e81c4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x474>
 87e823c:	8b 55 14             	mov    0x14(%ebp),%edx
 87e823f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e8242:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8246:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e8249:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 87e8250:	00 
 87e8251:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e8255:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e8259:	89 04 24             	mov    %eax,(%esp)
 87e825c:	e8 cf ea ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8261:	31 f6                	xor    %esi,%esi
 87e8263:	e9 57 fc ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e8268:	8b 55 14             	mov    0x14(%ebp),%edx
 87e826b:	83 c7 01             	add    $0x1,%edi
 87e826e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e8271:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8274:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e8278:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e827c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87e8280:	89 04 24             	mov    %eax,(%esp)
 87e8283:	e8 78 f2 ff ff       	call   87e7500 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8288:	85 c0                	test   %eax,%eax
 87e828a:	89 c3                	mov    %eax,%ebx
 87e828c:	74 09                	je     87e8297 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x547>
 87e828e:	80 38 00             	cmpb   $0x0,(%eax)
 87e8291:	0f 85 e3 00 00 00    	jne    87e837a <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x62a>
 87e8297:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e829a:	85 d2                	test   %edx,%edx
 87e829c:	0f 84 22 ff ff ff    	je     87e81c4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x474>
 87e82a2:	8b 55 14             	mov    0x14(%ebp),%edx
 87e82a5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e82a8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e82ab:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 87e82af:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e82b3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e82b7:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 87e82be:	00 
 87e82bf:	89 04 24             	mov    %eax,(%esp)
 87e82c2:	e8 69 ea ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e82c7:	31 f6                	xor    %esi,%esi
 87e82c9:	e9 f1 fb ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e82ce:	66 90                	xchg   %ax,%ax
 87e82d0:	8b 75 d0             	mov    -0x30(%ebp),%esi
 87e82d3:	85 f6                	test   %esi,%esi
 87e82d5:	0f 84 21 ff ff ff    	je     87e81fc <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4ac>
 87e82db:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87e82de:	8b 45 10             	mov    0x10(%ebp),%eax
 87e82e1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e82e4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e82e8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 87e82ec:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e82f0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87e82f7:	00 
 87e82f8:	89 14 24             	mov    %edx,(%esp)
 87e82fb:	e8 30 ea ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8300:	e9 f7 fe ff ff       	jmp    87e81fc <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4ac>
 87e8305:	8d 76 00             	lea    0x0(%esi),%esi
 87e8308:	89 de                	mov    %ebx,%esi
 87e830a:	89 d3                	mov    %edx,%ebx
 87e830c:	eb 10                	jmp    87e831e <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5ce>
 87e830e:	66 90                	xchg   %ax,%ax
 87e8310:	83 c6 01             	add    $0x1,%esi
 87e8313:	0f b6 1e             	movzbl (%esi),%ebx
 87e8316:	84 db                	test   %bl,%bl
 87e8318:	0f 84 f4 fd ff ff    	je     87e8112 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3c2>
 87e831e:	80 3e ef             	cmpb   $0xef,(%esi)
 87e8321:	74 25                	je     87e8348 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5f8>
 87e8323:	0f b6 c3             	movzbl %bl,%eax
 87e8326:	89 04 24             	mov    %eax,(%esp)
 87e8329:	e8 52 5f 89 ff       	call   807e280 <isspace@plt>
 87e832e:	85 c0                	test   %eax,%eax
 87e8330:	75 de                	jne    87e8310 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5c0>
 87e8332:	80 fb 0a             	cmp    $0xa,%bl
 87e8335:	74 d9                	je     87e8310 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5c0>
 87e8337:	80 fb 0d             	cmp    $0xd,%bl
 87e833a:	74 d4                	je     87e8310 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5c0>
 87e833c:	89 f3                	mov    %esi,%ebx
 87e833e:	66 90                	xchg   %ax,%ax
 87e8340:	e9 14 fb ff ff       	jmp    87e7e59 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x109>
 87e8345:	8d 76 00             	lea    0x0(%esi),%esi
 87e8348:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e834c:	3c bb                	cmp    $0xbb,%al
 87e834e:	74 18                	je     87e8368 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x618>
 87e8350:	3c bf                	cmp    $0xbf,%al
 87e8352:	75 cf                	jne    87e8323 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d3>
 87e8354:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e8358:	3c be                	cmp    $0xbe,%al
 87e835a:	74 04                	je     87e8360 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x610>
 87e835c:	3c bf                	cmp    $0xbf,%al
 87e835e:	75 c3                	jne    87e8323 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d3>
 87e8360:	83 c6 03             	add    $0x3,%esi
 87e8363:	eb ae                	jmp    87e8313 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5c3>
 87e8365:	8d 76 00             	lea    0x0(%esi),%esi
 87e8368:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e836c:	75 b5                	jne    87e8323 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d3>
 87e836e:	66 90                	xchg   %ax,%ax
 87e8370:	eb ee                	jmp    87e8360 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x610>
 87e8372:	8d 77 02             	lea    0x2(%edi),%esi
 87e8375:	e9 45 fb ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e837a:	8b 55 14             	mov    0x14(%ebp),%edx
 87e837d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e8380:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e8387:	00 
 87e8388:	89 1c 24             	mov    %ebx,(%esp)
 87e838b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e838f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8393:	e8 58 df ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e8398:	84 c0                	test   %al,%al
 87e839a:	0f 84 f7 fe ff ff    	je     87e8297 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x547>
 87e83a0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e83a3:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87e83a6:	03 58 f4             	add    -0xc(%eax),%ebx
 87e83a9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87e83ad:	89 1c 24             	mov    %ebx,(%esp)
 87e83b0:	e8 cb e0 ff ff       	call   87e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>
 87e83b5:	85 c0                	test   %eax,%eax
 87e83b7:	74 13                	je     87e83cc <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x67c>
 87e83b9:	0f b6 10             	movzbl (%eax),%edx
 87e83bc:	84 d2                	test   %dl,%dl
 87e83be:	74 0c                	je     87e83cc <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x67c>
 87e83c0:	80 fa 3e             	cmp    $0x3e,%dl
 87e83c3:	8d 70 01             	lea    0x1(%eax),%esi
 87e83c6:	0f 84 f3 fa ff ff    	je     87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e83cc:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 87e83d0:	0f 84 ee fd ff ff    	je     87e81c4 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x474>
 87e83d6:	8b 55 14             	mov    0x14(%ebp),%edx
 87e83d9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e83dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e83e0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e83e3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 87e83ea:	00 
 87e83eb:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e83ef:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e83f3:	89 04 24             	mov    %eax,(%esp)
 87e83f6:	e8 35 e9 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e83fb:	31 f6                	xor    %esi,%esi
 87e83fd:	e9 bd fa ff ff       	jmp    87e7ebf <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16f>
 87e8402:	89 04 24             	mov    %eax,(%esp)
 87e8405:	e8 46 b3 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e840a:	89 c3                	mov    %eax,%ebx
 87e840c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e840f:	89 04 24             	mov    %eax,(%esp)
 87e8412:	e8 c9 f7 f1 ff       	call   8707be0 <_ZNSsD1Ev>
 87e8417:	89 1c 24             	mov    %ebx,(%esp)
 87e841a:	e8 31 b3 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e841f:	8b 50 08             	mov    0x8(%eax),%edx
 87e8422:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e8425:	89 48 08             	mov    %ecx,0x8(%eax)
 87e8428:	e9 b8 fa ff ff       	jmp    87e7ee5 <_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x195>
 87e842d:	90                   	nop
 87e842e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlElement::Parse @ 0x87e7d50

/* WARNING: Removing unreachable block (ram,0x087e841f) */
/* TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlElement::Parse(TiXmlElement *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  TiXmlAttribute *pTVar7;
  char *pcVar8;
  byte bVar9;
  byte *pbVar10;
  TiXmlDocument *local_34;
  int local_24;
  allocator local_1d [13];
  
  if ((param_1 == (byte *)0x0) || (bVar9 = *param_1, bVar9 == 0)) {
    local_34 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  }
  else {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e80d8;
            goto LAB_087e7ddb;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7ddb;
LAB_087e80d8:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7ddb:
          iVar5 = isspace((uint)bVar9);
          if (((iVar5 == 0) && (bVar9 != 10)) && (bVar9 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar9 = *param_1;
      } while (bVar9 != 0);
    }
    else {
      do {
        iVar5 = isspace((uint)bVar9);
        if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar9 = *param_1;
      } while (bVar9 != 0);
    }
    local_34 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
    if ((param_1 != (byte *)0x0) && (bVar9 = *param_1, bVar9 != 0)) {
      if (param_2 != (TiXmlParsingData *)0x0) {
        TiXmlParsingData::Stamp(param_2,param_1,param_4);
        uVar3 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
        *(undefined4 *)(this + 8) = uVar3;
        bVar9 = *param_1;
      }
      if (bVar9 == 0x3c) {
        pbVar10 = param_1 + 1;
        if (pbVar10 != (byte *)0x0) {
          bVar9 = param_1[1];
          if (bVar9 == 0) {
            pbVar10 = (byte *)0x0;
          }
          else if (param_4 == 1) {
            do {
              if (*pbVar10 == 0xef) {
                if (pbVar10[1] == 0xbb) {
                  if (pbVar10[2] == 0xbf) goto LAB_087e8360;
                  goto LAB_087e8323;
                }
                if ((pbVar10[1] != 0xbf) || ((pbVar10[2] != 0xbe && (pbVar10[2] != 0xbf))))
                goto LAB_087e8323;
LAB_087e8360:
                pbVar10 = pbVar10 + 3;
              }
              else {
LAB_087e8323:
                iVar5 = isspace((uint)bVar9);
                if (((iVar5 == 0) && (bVar9 != 10)) && (bVar9 != 0xd)) break;
                pbVar10 = pbVar10 + 1;
              }
              bVar9 = *pbVar10;
            } while (bVar9 != 0);
          }
          else {
            do {
              iVar5 = isspace((uint)bVar9);
              if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
              pbVar10 = pbVar10 + 1;
              bVar9 = *pbVar10;
            } while (bVar9 != 0);
          }
        }
        pbVar6 = (byte *)TiXmlBase::ReadName(pbVar10,(string *)(this + 0x20),param_4);
        if ((pbVar6 == (byte *)0x0) || (*pbVar6 == 0)) {
          if (local_34 == (TiXmlDocument *)0x0) {
            return (byte *)0x0;
          }
          TiXmlDocument::SetError(local_34,4,pbVar10,param_2,param_4);
          return (byte *)0x0;
        }
                    /* try { // try from 087e7e9a to 087e7e9e has its CatchHandler @ 087e8402 */
        std::string::string((string *)&local_24,"</",local_1d);
                    /* try { // try from 087e7ea9 to 087e8000 has its CatchHandler @ 087e840a */
        std::string::append((string *)&local_24,(string *)(this + 0x20));
LAB_087e7eb8:
        bVar9 = *pbVar6;
        if (bVar9 == 0) {
LAB_087e7ebf:
          if ((allocator *)(local_24 + -0xc) ==
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            return pbVar6;
          }
          LOCK();
          piVar1 = (int *)(local_24 + -4);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 < 1) {
            std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
            return pbVar6;
          }
          return pbVar6;
        }
        pbVar10 = pbVar6;
        if (param_4 == 1) {
          if (*pbVar6 == 0xef) goto LAB_087e8093;
LAB_087e8060:
          iVar5 = isspace((uint)bVar9);
          if (((iVar5 != 0) || (bVar9 == 10)) || (bVar9 == 0xd)) {
            pbVar10 = pbVar10 + 1;
            while( true ) {
              bVar9 = *pbVar10;
              if (bVar9 == 0) goto LAB_087e7f39;
              if (*pbVar10 != 0xef) break;
LAB_087e8093:
              if (pbVar10[1] == 0xbb) {
                bVar2 = pbVar10[2];
joined_r0x087e8154:
                if (bVar2 != 0xbf) break;
              }
              else {
                if (pbVar10[1] != 0xbf) break;
                bVar2 = pbVar10[2];
                if (bVar2 != 0xbe) goto joined_r0x087e8154;
              }
              pbVar10 = pbVar10 + 3;
            }
            goto LAB_087e8060;
          }
        }
        else {
          do {
            iVar5 = isspace((uint)bVar9);
            if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
            pbVar10 = pbVar10 + 1;
            bVar9 = *pbVar10;
          } while (bVar9 != 0);
        }
LAB_087e7f39:
        if ((pbVar10 == (byte *)0x0) || (bVar9 == 0)) {
          if (local_34 != (TiXmlDocument *)0x0) {
                    /* try { // try from 087e81bf to 087e83fa has its CatchHandler @ 087e840a */
            TiXmlDocument::SetError(local_34,6,pbVar6,param_2,param_4);
          }
        }
        else {
          if (bVar9 == 0x2f) {
            if (pbVar10[1] == 0x3e) {
              pbVar6 = pbVar10 + 2;
            }
            else {
              if (local_34 == (TiXmlDocument *)0x0) goto LAB_087e81c4;
              TiXmlDocument::SetError(local_34,7,pbVar10 + 1,param_2,param_4);
              pbVar6 = (byte *)0x0;
            }
            goto LAB_087e7ebf;
          }
          if (bVar9 != 0x3e) {
            pTVar7 = operator_new(0x24);
            *(undefined4 *)(pTVar7 + 8) = 0xffffffff;
            *(undefined4 *)(pTVar7 + 4) = 0xffffffff;
            *(undefined4 *)(pTVar7 + 0xc) = 0;
            *(undefined ***)pTVar7 = &PTR__TiXmlAttribute_08de2028;
            *(undefined1 **)(pTVar7 + 0x14) = &DAT_0948ccfc;
            *(undefined1 **)(pTVar7 + 0x18) = &DAT_0948ccfc;
            *(undefined4 *)(pTVar7 + 0x20) = 0;
            *(undefined4 *)(pTVar7 + 0x1c) = 0;
            *(TiXmlDocument **)(pTVar7 + 0x10) = local_34;
            pbVar6 = (byte *)(*(code *)PTR_Parse_08de2034)(pTVar7,pbVar10,param_2,param_4);
            if ((pbVar6 == (byte *)0x0) || (*pbVar6 == 0)) {
              if (local_34 != (TiXmlDocument *)0x0) {
                TiXmlDocument::SetError(local_34,3,pbVar10,param_2,param_4);
              }
LAB_087e81fc:
              (**(code **)(*(int *)pTVar7 + 4))(pTVar7);
              pbVar6 = (byte *)0x0;
              goto LAB_087e7ebf;
            }
            iVar5 = TiXmlAttributeSet::Find
                              ((TiXmlAttributeSet *)(this + 0x2c),(string *)(pTVar7 + 0x14));
            if (iVar5 != 0) {
              if (local_34 != (TiXmlDocument *)0x0) {
                TiXmlDocument::SetError(local_34,3,pbVar10,param_2,param_4);
              }
              goto LAB_087e81fc;
            }
            TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar7);
            goto LAB_087e7eb8;
          }
          pcVar8 = (char *)ReadValue(this,pbVar10 + 1,param_2,param_4);
          if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) &&
             (cVar4 = TiXmlBase::StringEqual(pcVar8,local_24,0,param_4), cVar4 != '\0')) {
            pcVar8 = (char *)TiXmlBase::SkipWhiteSpace(pcVar8 + *(int *)(local_24 + -0xc),param_4);
            if (((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) ||
               (pbVar6 = (byte *)(pcVar8 + 1), *pcVar8 != '>')) {
              if (local_34 == (TiXmlDocument *)0x0) goto LAB_087e81c4;
              TiXmlDocument::SetError(local_34,8,pcVar8,param_2,param_4);
              pbVar6 = (byte *)0x0;
            }
            goto LAB_087e7ebf;
          }
          if (local_34 != (TiXmlDocument *)0x0) {
            TiXmlDocument::SetError(local_34,8,pcVar8,param_2,param_4);
            pbVar6 = (byte *)0x0;
            goto LAB_087e7ebf;
          }
        }
LAB_087e81c4:
        pbVar6 = (byte *)0x0;
        goto LAB_087e7ebf;
      }
      if (local_34 == (TiXmlDocument *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_087e803d;
    }
  }
  if (local_34 == (TiXmlDocument *)0x0) {
    return (byte *)0x0;
  }
  param_2 = (TiXmlParsingData *)0x0;
  param_1 = (byte *)0x0;
LAB_087e803d:
  TiXmlDocument::SetError(local_34,3,param_1,param_2,param_4);
  return (byte *)0x0;
}

```

---

## Print

```asm
// === 087e0690 TiXmlElement::Print  [0x087e0690-0x87e08af] ===
 87e0690:	55                   	push   %ebp
 87e0691:	89 e5                	mov    %esp,%ebp
 87e0693:	57                   	push   %edi
 87e0694:	56                   	push   %esi
 87e0695:	53                   	push   %ebx
 87e0696:	83 ec 2c             	sub    $0x2c,%esp
 87e0699:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e069c:	8b 45 08             	mov    0x8(%ebp),%eax
 87e069f:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e06a2:	85 db                	test   %ebx,%ebx
 87e06a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e06a7:	0f 84 d3 01 00 00    	je     87e0880 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x1f0>
 87e06ad:	31 f6                	xor    %esi,%esi
 87e06af:	85 ff                	test   %edi,%edi
 87e06b1:	7e 2c                	jle    87e06df <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x4f>
 87e06b3:	90                   	nop
 87e06b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e06b8:	83 c6 01             	add    $0x1,%esi
 87e06bb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 87e06bf:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e06c6:	00 
 87e06c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e06ce:	00 
 87e06cf:	c7 04 24 71 0e de 08 	movl   $0x8de0e71,(%esp)
 87e06d6:	e8 45 dc 89 ff       	call   807e320 <fwrite@plt>
 87e06db:	39 f7                	cmp    %esi,%edi
 87e06dd:	7f d9                	jg     87e06b8 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x28>
 87e06df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e06e2:	8b 42 20             	mov    0x20(%edx),%eax
 87e06e5:	c7 44 24 04 8b 0e de 	movl   $0x8de0e8b,0x4(%esp)
 87e06ec:	08 
 87e06ed:	89 1c 24             	mov    %ebx,(%esp)
 87e06f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e06f4:	e8 97 d3 89 ff       	call   807da90 <fprintf@plt>
 87e06f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e06fc:	8b 70 4c             	mov    0x4c(%eax),%esi
 87e06ff:	83 c0 2c             	add    $0x2c,%eax
 87e0702:	39 c6                	cmp    %eax,%esi
 87e0704:	74 41                	je     87e0747 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0xb7>
 87e0706:	85 f6                	test   %esi,%esi
 87e0708:	74 3d                	je     87e0747 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0xb7>
 87e070a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0710:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e0714:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 87e071b:	e8 a0 dd 89 ff       	call   807e4c0 <fputc@plt>
 87e0720:	8b 06                	mov    (%esi),%eax
 87e0722:	89 34 24             	mov    %esi,(%esp)
 87e0725:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e0729:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e072d:	ff 50 08             	call   *0x8(%eax)
 87e0730:	8b 76 20             	mov    0x20(%esi),%esi
 87e0733:	8b 46 18             	mov    0x18(%esi),%eax
 87e0736:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e0739:	85 d2                	test   %edx,%edx
 87e073b:	75 d3                	jne    87e0710 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x80>
 87e073d:	8b 46 14             	mov    0x14(%esi),%eax
 87e0740:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e0743:	85 c0                	test   %eax,%eax
 87e0745:	75 c9                	jne    87e0710 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x80>
 87e0747:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e074a:	8b 42 18             	mov    0x18(%edx),%eax
 87e074d:	85 c0                	test   %eax,%eax
 87e074f:	0f 84 03 01 00 00    	je     87e0858 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x1c8>
 87e0755:	3b 42 1c             	cmp    0x1c(%edx),%eax
 87e0758:	0f 84 bf 00 00 00    	je     87e081d <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x18d>
 87e075e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e0762:	c7 04 24 3e 00 00 00 	movl   $0x3e,(%esp)
 87e0769:	e8 52 dd 89 ff       	call   807e4c0 <fputc@plt>
 87e076e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e0771:	8b 70 18             	mov    0x18(%eax),%esi
 87e0774:	85 f6                	test   %esi,%esi
 87e0776:	74 2e                	je     87e07a6 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x116>
 87e0778:	8d 57 01             	lea    0x1(%edi),%edx
 87e077b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87e077e:	66 90                	xchg   %ax,%ax
 87e0780:	8b 06                	mov    (%esi),%eax
 87e0782:	89 34 24             	mov    %esi,(%esp)
 87e0785:	ff 50 38             	call   *0x38(%eax)
 87e0788:	85 c0                	test   %eax,%eax
 87e078a:	74 7c                	je     87e0808 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x178>
 87e078c:	8b 06                	mov    (%esi),%eax
 87e078e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e0791:	89 34 24             	mov    %esi,(%esp)
 87e0794:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e0798:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e079c:	ff 50 08             	call   *0x8(%eax)
 87e079f:	8b 76 28             	mov    0x28(%esi),%esi
 87e07a2:	85 f6                	test   %esi,%esi
 87e07a4:	75 da                	jne    87e0780 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0xf0>
 87e07a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e07aa:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 87e07b1:	e8 0a dd 89 ff       	call   807e4c0 <fputc@plt>
 87e07b6:	85 ff                	test   %edi,%edi
 87e07b8:	7e 2d                	jle    87e07e7 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x157>
 87e07ba:	31 f6                	xor    %esi,%esi
 87e07bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e07c0:	83 c6 01             	add    $0x1,%esi
 87e07c3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 87e07c7:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e07ce:	00 
 87e07cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e07d6:	00 
 87e07d7:	c7 04 24 71 0e de 08 	movl   $0x8de0e71,(%esp)
 87e07de:	e8 3d db 89 ff       	call   807e320 <fwrite@plt>
 87e07e3:	39 f7                	cmp    %esi,%edi
 87e07e5:	7f d9                	jg     87e07c0 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x130>
 87e07e7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e07ea:	8b 42 20             	mov    0x20(%edx),%eax
 87e07ed:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e07f0:	c7 45 0c 93 0e de 08 	movl   $0x8de0e93,0xc(%ebp)
 87e07f7:	89 45 10             	mov    %eax,0x10(%ebp)
 87e07fa:	83 c4 2c             	add    $0x2c,%esp
 87e07fd:	5b                   	pop    %ebx
 87e07fe:	5e                   	pop    %esi
 87e07ff:	5f                   	pop    %edi
 87e0800:	5d                   	pop    %ebp
 87e0801:	e9 8a d2 89 ff       	jmp    807da90 <fprintf@plt>
 87e0806:	66 90                	xchg   %ax,%ax
 87e0808:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e080c:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 87e0813:	e8 a8 dc 89 ff       	call   807e4c0 <fputc@plt>
 87e0818:	e9 6f ff ff ff       	jmp    87e078c <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0xfc>
 87e081d:	8b 10                	mov    (%eax),%edx
 87e081f:	89 04 24             	mov    %eax,(%esp)
 87e0822:	ff 52 38             	call   *0x38(%edx)
 87e0825:	85 c0                	test   %eax,%eax
 87e0827:	0f 84 31 ff ff ff    	je     87e075e <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0xce>
 87e082d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e0831:	83 c7 01             	add    $0x1,%edi
 87e0834:	c7 04 24 3e 00 00 00 	movl   $0x3e,(%esp)
 87e083b:	e8 80 dc 89 ff       	call   807e4c0 <fputc@plt>
 87e0840:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e0843:	8b 42 18             	mov    0x18(%edx),%eax
 87e0846:	8b 10                	mov    (%eax),%edx
 87e0848:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e084c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e0850:	89 04 24             	mov    %eax,(%esp)
 87e0853:	ff 52 08             	call   *0x8(%edx)
 87e0856:	eb 8f                	jmp    87e07e7 <_ZNK12TiXmlElement5PrintEP8_IO_FILEi+0x157>
 87e0858:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 87e085c:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 87e0863:	00 
 87e0864:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e086b:	00 
 87e086c:	c7 04 24 8f 0e de 08 	movl   $0x8de0e8f,(%esp)
 87e0873:	e8 a8 da 89 ff       	call   807e320 <fwrite@plt>
 87e0878:	83 c4 2c             	add    $0x2c,%esp
 87e087b:	5b                   	pop    %ebx
 87e087c:	5e                   	pop    %esi
 87e087d:	5f                   	pop    %edi
 87e087e:	5d                   	pop    %ebp
 87e087f:	c3                   	ret
 87e0880:	c7 44 24 0c e0 15 de 	movl   $0x8de15e0,0xc(%esp)
 87e0887:	08 
 87e0888:	c7 44 24 08 23 03 00 	movl   $0x323,0x8(%esp)
 87e088f:	00 
 87e0890:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e0897:	08 
 87e0898:	c7 04 24 7b 0e de 08 	movl   $0x8de0e7b,(%esp)
 87e089f:	e8 ac d3 89 ff       	call   807dc50 <__assert_fail@plt>
 87e08a4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e08aa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::Print @ 0x87e0690

/* TiXmlElement::Print(_IO_FILE*, int) const */

void __thiscall TiXmlElement::Print(TiXmlElement *this,_IO_FILE *param_1,int param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  TiXmlElement *pTVar3;
  int *piVar4;
  
  if (param_1 == (_IO_FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cfile","tinyxml.cpp",0x323,"virtual void TiXmlElement::Print(FILE*, int) const");
  }
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      fwrite(&DAT_08de0e71,1,4,param_1);
    } while (iVar2 < param_2);
  }
  fprintf(param_1,"<%s",*(undefined4 *)(this + 0x20));
  pTVar3 = *(TiXmlElement **)(this + 0x4c);
  pTVar1 = pTVar3;
  if (pTVar3 != this + 0x2c) {
    while (pTVar1 != (TiXmlElement *)0x0) {
      do {
        fputc(0x20,param_1);
        (**(code **)(*(int *)pTVar3 + 8))(pTVar3,param_1,param_2);
        pTVar3 = *(TiXmlElement **)(pTVar3 + 0x20);
      } while (*(int *)(*(int *)(pTVar3 + 0x18) + -0xc) != 0);
      pTVar1 = *(TiXmlElement **)(*(int *)(pTVar3 + 0x14) + -0xc);
    }
  }
  piVar4 = *(int **)(this + 0x18);
  if (piVar4 != (int *)0x0) {
    if ((piVar4 == *(int **)(this + 0x1c)) &&
       (iVar2 = (**(code **)(*piVar4 + 0x38))(piVar4), iVar2 != 0)) {
      fputc(0x3e,param_1);
      (**(code **)(**(int **)(this + 0x18) + 8))(*(int **)(this + 0x18),param_1,param_2 + 1);
    }
    else {
      fputc(0x3e,param_1);
      piVar4 = *(int **)(this + 0x18);
      if (piVar4 != (int *)0x0) {
        do {
          iVar2 = (**(code **)(*piVar4 + 0x38))(piVar4);
          if (iVar2 == 0) {
            fputc(10,param_1);
          }
          (**(code **)(*piVar4 + 8))(piVar4,param_1,param_2 + 1);
          piVar4 = (int *)piVar4[10];
        } while (piVar4 != (int *)0x0);
      }
      fputc(10,param_1);
      if (0 < param_2) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          fwrite(&DAT_08de0e71,1,4,param_1);
        } while (iVar2 < param_2);
      }
    }
    fprintf(param_1,"</%s>");
    return;
  }
  fwrite(&DAT_08de0e8f,1,3,param_1);
  return;
}

```

---

## QueryBoolAttribute

```asm
// === 087e1450 TiXmlElement::QueryBoolAttribute  [0x087e1450-0x87e15bf] ===
 87e1450:	55                   	push   %ebp
 87e1451:	89 e5                	mov    %esp,%ebp
 87e1453:	57                   	push   %edi
 87e1454:	56                   	push   %esi
 87e1455:	53                   	push   %ebx
 87e1456:	83 ec 1c             	sub    $0x1c,%esp
 87e1459:	8b 75 08             	mov    0x8(%ebp),%esi
 87e145c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e145f:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e1462:	83 c6 2c             	add    $0x2c,%esi
 87e1465:	39 de                	cmp    %ebx,%esi
 87e1467:	75 0e                	jne    87e1477 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x27>
 87e1469:	eb 5d                	jmp    87e14c8 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x78>
 87e146b:	90                   	nop
 87e146c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1470:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e1473:	39 de                	cmp    %ebx,%esi
 87e1475:	74 51                	je     87e14c8 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x78>
 87e1477:	8b 43 14             	mov    0x14(%ebx),%eax
 87e147a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e147e:	89 04 24             	mov    %eax,(%esp)
 87e1481:	e8 5a d0 89 ff       	call   807e4e0 <strcmp@plt>
 87e1486:	85 c0                	test   %eax,%eax
 87e1488:	75 e6                	jne    87e1470 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x20>
 87e148a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e1491:	00 
 87e1492:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e1499:	00 
 87e149a:	c7 44 24 04 8c 11 d0 	movl   $0x8d0118c,0x4(%esp)
 87e14a1:	08 
 87e14a2:	8b 43 18             	mov    0x18(%ebx),%eax
 87e14a5:	89 04 24             	mov    %eax,(%esp)
 87e14a8:	e8 43 4e 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e14ad:	84 c0                	test   %al,%al
 87e14af:	74 27                	je     87e14d8 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x88>
 87e14b1:	8b 45 10             	mov    0x10(%ebp),%eax
 87e14b4:	c6 00 01             	movb   $0x1,(%eax)
 87e14b7:	83 c4 1c             	add    $0x1c,%esp
 87e14ba:	31 c0                	xor    %eax,%eax
 87e14bc:	5b                   	pop    %ebx
 87e14bd:	5e                   	pop    %esi
 87e14be:	5f                   	pop    %edi
 87e14bf:	5d                   	pop    %ebp
 87e14c0:	c3                   	ret
 87e14c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e14c8:	b8 01 00 00 00       	mov    $0x1,%eax
 87e14cd:	83 c4 1c             	add    $0x1c,%esp
 87e14d0:	5b                   	pop    %ebx
 87e14d1:	5e                   	pop    %esi
 87e14d2:	5f                   	pop    %edi
 87e14d3:	5d                   	pop    %ebp
 87e14d4:	c3                   	ret
 87e14d5:	8d 76 00             	lea    0x0(%esi),%esi
 87e14d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e14df:	00 
 87e14e0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e14e7:	00 
 87e14e8:	c7 44 24 04 d6 0e de 	movl   $0x8de0ed6,0x4(%esp)
 87e14ef:	08 
 87e14f0:	8b 43 18             	mov    0x18(%ebx),%eax
 87e14f3:	89 04 24             	mov    %eax,(%esp)
 87e14f6:	e8 f5 4d 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e14fb:	84 c0                	test   %al,%al
 87e14fd:	75 b2                	jne    87e14b1 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x61>
 87e14ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e1506:	00 
 87e1507:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e150e:	00 
 87e150f:	c7 44 24 04 45 18 de 	movl   $0x8de1845,0x4(%esp)
 87e1516:	08 
 87e1517:	8b 43 18             	mov    0x18(%ebx),%eax
 87e151a:	89 04 24             	mov    %eax,(%esp)
 87e151d:	e8 ce 4d 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e1522:	84 c0                	test   %al,%al
 87e1524:	75 8b                	jne    87e14b1 <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x61>
 87e1526:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e152d:	00 
 87e152e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e1535:	00 
 87e1536:	c7 44 24 04 91 11 d0 	movl   $0x8d01191,0x4(%esp)
 87e153d:	08 
 87e153e:	8b 43 18             	mov    0x18(%ebx),%eax
 87e1541:	89 04 24             	mov    %eax,(%esp)
 87e1544:	e8 a7 4d 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e1549:	84 c0                	test   %al,%al
 87e154b:	74 0d                	je     87e155a <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x10a>
 87e154d:	8b 45 10             	mov    0x10(%ebp),%eax
 87e1550:	c6 00 00             	movb   $0x0,(%eax)
 87e1553:	31 c0                	xor    %eax,%eax
 87e1555:	e9 73 ff ff ff       	jmp    87e14cd <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x7d>
 87e155a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e1561:	00 
 87e1562:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e1569:	00 
 87e156a:	c7 44 24 04 da 0e de 	movl   $0x8de0eda,0x4(%esp)
 87e1571:	08 
 87e1572:	8b 43 18             	mov    0x18(%ebx),%eax
 87e1575:	89 04 24             	mov    %eax,(%esp)
 87e1578:	e8 73 4d 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e157d:	84 c0                	test   %al,%al
 87e157f:	75 cc                	jne    87e154d <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0xfd>
 87e1581:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e1588:	00 
 87e1589:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e1590:	00 
 87e1591:	c7 44 24 04 6d 45 d0 	movl   $0x8d0456d,0x4(%esp)
 87e1598:	08 
 87e1599:	8b 43 18             	mov    0x18(%ebx),%eax
 87e159c:	89 04 24             	mov    %eax,(%esp)
 87e159f:	e8 4c 4d 00 00       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e15a4:	89 c2                	mov    %eax,%edx
 87e15a6:	b8 02 00 00 00       	mov    $0x2,%eax
 87e15ab:	84 d2                	test   %dl,%dl
 87e15ad:	0f 84 1a ff ff ff    	je     87e14cd <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0x7d>
 87e15b3:	eb 98                	jmp    87e154d <_ZNK12TiXmlElement18QueryBoolAttributeEPKcPb+0xfd>
 87e15b5:	90                   	nop
 87e15b6:	8d 76 00             	lea    0x0(%esi),%esi
 87e15b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::QueryBoolAttribute @ 0x87e1450

/* TiXmlElement::QueryBoolAttribute(char const*, bool*) const */

undefined4 __thiscall
TiXmlElement::QueryBoolAttribute(TiXmlElement *this,char *param_1,bool *param_2)

{
  TiXmlElement *pTVar1;
  char cVar2;
  int iVar3;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return 1;
    }
    iVar3 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar3 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08d0118c,1,0);
  if (((cVar2 == '\0') &&
      (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08de0ed6,1,0),
      cVar2 == '\0')) &&
     (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),"1",1,0), cVar2 == '\0')) {
    cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),"false",1,0);
    if (((cVar2 == '\0') &&
        (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08de0eda,1,0),
        cVar2 == '\0')) &&
       (cVar2 = TiXmlBase::StringEqual(*(undefined4 *)(pTVar1 + 0x18),&DAT_08d0456d,1,0),
       cVar2 == '\0')) {
      return 2;
    }
    *param_2 = false;
    return 0;
  }
  *param_2 = true;
  return 0;
}

```

---

## QueryDoubleAttribute

```asm
// === 087e15c0 TiXmlElement::QueryDoubleAttribute  [0x087e15c0-0x87e163f] ===
 87e15c0:	55                   	push   %ebp
 87e15c1:	89 e5                	mov    %esp,%ebp
 87e15c3:	57                   	push   %edi
 87e15c4:	56                   	push   %esi
 87e15c5:	53                   	push   %ebx
 87e15c6:	83 ec 1c             	sub    $0x1c,%esp
 87e15c9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e15cc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e15cf:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e15d2:	83 c6 2c             	add    $0x2c,%esi
 87e15d5:	39 de                	cmp    %ebx,%esi
 87e15d7:	75 0e                	jne    87e15e7 <_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd+0x27>
 87e15d9:	eb 4d                	jmp    87e1628 <_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd+0x68>
 87e15db:	90                   	nop
 87e15dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e15e0:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e15e3:	39 de                	cmp    %ebx,%esi
 87e15e5:	74 41                	je     87e1628 <_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd+0x68>
 87e15e7:	8b 43 14             	mov    0x14(%ebx),%eax
 87e15ea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e15ee:	89 04 24             	mov    %eax,(%esp)
 87e15f1:	e8 ea ce 89 ff       	call   807e4e0 <strcmp@plt>
 87e15f6:	85 c0                	test   %eax,%eax
 87e15f8:	75 e6                	jne    87e15e0 <_ZNK12TiXmlElement20QueryDoubleAttributeEPKcPd+0x20>
 87e15fa:	8b 45 10             	mov    0x10(%ebp),%eax
 87e15fd:	c7 44 24 04 99 0e de 	movl   $0x8de0e99,0x4(%esp)
 87e1604:	08 
 87e1605:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1609:	8b 43 18             	mov    0x18(%ebx),%eax
 87e160c:	89 04 24             	mov    %eax,(%esp)
 87e160f:	e8 cc c3 89 ff       	call   807d9e0 <sscanf@plt>
 87e1614:	83 f8 01             	cmp    $0x1,%eax
 87e1617:	0f 95 c0             	setne  %al
 87e161a:	83 c4 1c             	add    $0x1c,%esp
 87e161d:	0f b6 c0             	movzbl %al,%eax
 87e1620:	01 c0                	add    %eax,%eax
 87e1622:	5b                   	pop    %ebx
 87e1623:	5e                   	pop    %esi
 87e1624:	5f                   	pop    %edi
 87e1625:	5d                   	pop    %ebp
 87e1626:	c3                   	ret
 87e1627:	90                   	nop
 87e1628:	83 c4 1c             	add    $0x1c,%esp
 87e162b:	b8 01 00 00 00       	mov    $0x1,%eax
 87e1630:	5b                   	pop    %ebx
 87e1631:	5e                   	pop    %esi
 87e1632:	5f                   	pop    %edi
 87e1633:	5d                   	pop    %ebp
 87e1634:	c3                   	ret
 87e1635:	90                   	nop
 87e1636:	8d 76 00             	lea    0x0(%esi),%esi
 87e1639:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::QueryDoubleAttribute @ 0x87e15c0

/* TiXmlElement::QueryDoubleAttribute(char const*, double*) const */

char __thiscall TiXmlElement::QueryDoubleAttribute(TiXmlElement *this,char *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return '\x01';
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%lf",param_2);
  return (iVar2 != 1) * '\x02';
}

```

---

## QueryDoubleAttribute_087e1bc0

```asm
// === 087e1bc0 TiXmlElement::QueryDoubleAttribute  [0x087e1bc0-0x87e1c3f] ===
 87e1bc0:	55                   	push   %ebp
 87e1bc1:	89 e5                	mov    %esp,%ebp
 87e1bc3:	57                   	push   %edi
 87e1bc4:	56                   	push   %esi
 87e1bc5:	53                   	push   %ebx
 87e1bc6:	83 ec 3c             	sub    $0x3c,%esp
 87e1bc9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e1bcc:	8b 43 4c             	mov    0x4c(%ebx),%eax
 87e1bcf:	83 c3 2c             	add    $0x2c,%ebx
 87e1bd2:	39 d8                	cmp    %ebx,%eax
 87e1bd4:	74 5a                	je     87e1c30 <_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd+0x70>
 87e1bd6:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e1bd9:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e1bdc:	8b 12                	mov    (%edx),%edx
 87e1bde:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e1be1:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e1be4:	eb 0a                	jmp    87e1bf0 <_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd+0x30>
 87e1be6:	66 90                	xchg   %ax,%ax
 87e1be8:	8b 40 20             	mov    0x20(%eax),%eax
 87e1beb:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 87e1bee:	74 40                	je     87e1c30 <_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd+0x70>
 87e1bf0:	8b 70 14             	mov    0x14(%eax),%esi
 87e1bf3:	39 56 f4             	cmp    %edx,-0xc(%esi)
 87e1bf6:	75 f0                	jne    87e1be8 <_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd+0x28>
 87e1bf8:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e1bfb:	39 d2                	cmp    %edx,%edx
 87e1bfd:	89 d1                	mov    %edx,%ecx
 87e1bff:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e1c01:	75 e5                	jne    87e1be8 <_ZNK12TiXmlElement20QueryDoubleAttributeERKSsPd+0x28>
 87e1c03:	8b 55 10             	mov    0x10(%ebp),%edx
 87e1c06:	c7 44 24 04 99 0e de 	movl   $0x8de0e99,0x4(%esp)
 87e1c0d:	08 
 87e1c0e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e1c12:	8b 40 18             	mov    0x18(%eax),%eax
 87e1c15:	89 04 24             	mov    %eax,(%esp)
 87e1c18:	e8 c3 bd 89 ff       	call   807d9e0 <sscanf@plt>
 87e1c1d:	83 f8 01             	cmp    $0x1,%eax
 87e1c20:	0f 95 c0             	setne  %al
 87e1c23:	83 c4 3c             	add    $0x3c,%esp
 87e1c26:	0f b6 c0             	movzbl %al,%eax
 87e1c29:	01 c0                	add    %eax,%eax
 87e1c2b:	5b                   	pop    %ebx
 87e1c2c:	5e                   	pop    %esi
 87e1c2d:	5f                   	pop    %edi
 87e1c2e:	5d                   	pop    %ebp
 87e1c2f:	c3                   	ret
 87e1c30:	83 c4 3c             	add    $0x3c,%esp
 87e1c33:	b8 01 00 00 00       	mov    $0x1,%eax
 87e1c38:	5b                   	pop    %ebx
 87e1c39:	5e                   	pop    %esi
 87e1c3a:	5f                   	pop    %edi
 87e1c3b:	5d                   	pop    %ebp
 87e1c3c:	c3                   	ret
 87e1c3d:	90                   	nop
 87e1c3e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlElement::QueryDoubleAttribute @ 0x87e1bc0

/* TiXmlElement::QueryDoubleAttribute(std::string const&, double*) const */

char __thiscall
TiXmlElement::QueryDoubleAttribute(TiXmlElement *this,string *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar1 != this + 0x2c) {
    iVar2 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar1 + 0x14) + -0xc) == iVar2) {
        bVar6 = true;
        iVar3 = iVar2;
        pcVar4 = *(char **)(pTVar1 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%lf",param_2);
          return (iVar2 != 1) * '\x02';
        }
      }
      pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
    } while (this + 0x2c != pTVar1);
  }
  return '\x01';
}

```

---

## QueryIntAttribute

```asm
// === 087e1350 TiXmlElement::QueryIntAttribute  [0x087e1350-0x87e13cf] ===
 87e1350:	55                   	push   %ebp
 87e1351:	89 e5                	mov    %esp,%ebp
 87e1353:	57                   	push   %edi
 87e1354:	56                   	push   %esi
 87e1355:	53                   	push   %ebx
 87e1356:	83 ec 1c             	sub    $0x1c,%esp
 87e1359:	8b 75 08             	mov    0x8(%ebp),%esi
 87e135c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e135f:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e1362:	83 c6 2c             	add    $0x2c,%esi
 87e1365:	39 de                	cmp    %ebx,%esi
 87e1367:	75 0e                	jne    87e1377 <_ZNK12TiXmlElement17QueryIntAttributeEPKcPi+0x27>
 87e1369:	eb 4d                	jmp    87e13b8 <_ZNK12TiXmlElement17QueryIntAttributeEPKcPi+0x68>
 87e136b:	90                   	nop
 87e136c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1370:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e1373:	39 de                	cmp    %ebx,%esi
 87e1375:	74 41                	je     87e13b8 <_ZNK12TiXmlElement17QueryIntAttributeEPKcPi+0x68>
 87e1377:	8b 43 14             	mov    0x14(%ebx),%eax
 87e137a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e137e:	89 04 24             	mov    %eax,(%esp)
 87e1381:	e8 5a d1 89 ff       	call   807e4e0 <strcmp@plt>
 87e1386:	85 c0                	test   %eax,%eax
 87e1388:	75 e6                	jne    87e1370 <_ZNK12TiXmlElement17QueryIntAttributeEPKcPi+0x20>
 87e138a:	8b 45 10             	mov    0x10(%ebp),%eax
 87e138d:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e1394:	08 
 87e1395:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1399:	8b 43 18             	mov    0x18(%ebx),%eax
 87e139c:	89 04 24             	mov    %eax,(%esp)
 87e139f:	e8 3c c6 89 ff       	call   807d9e0 <sscanf@plt>
 87e13a4:	83 f8 01             	cmp    $0x1,%eax
 87e13a7:	0f 95 c0             	setne  %al
 87e13aa:	83 c4 1c             	add    $0x1c,%esp
 87e13ad:	0f b6 c0             	movzbl %al,%eax
 87e13b0:	01 c0                	add    %eax,%eax
 87e13b2:	5b                   	pop    %ebx
 87e13b3:	5e                   	pop    %esi
 87e13b4:	5f                   	pop    %edi
 87e13b5:	5d                   	pop    %ebp
 87e13b6:	c3                   	ret
 87e13b7:	90                   	nop
 87e13b8:	83 c4 1c             	add    $0x1c,%esp
 87e13bb:	b8 01 00 00 00       	mov    $0x1,%eax
 87e13c0:	5b                   	pop    %ebx
 87e13c1:	5e                   	pop    %esi
 87e13c2:	5f                   	pop    %edi
 87e13c3:	5d                   	pop    %ebp
 87e13c4:	c3                   	ret
 87e13c5:	90                   	nop
 87e13c6:	8d 76 00             	lea    0x0(%esi),%esi
 87e13c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::QueryIntAttribute @ 0x87e1350

/* TiXmlElement::QueryIntAttribute(char const*, int*) const */

char __thiscall TiXmlElement::QueryIntAttribute(TiXmlElement *this,char *param_1,int *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return '\x01';
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",param_2);
  return (iVar2 != 1) * '\x02';
}

```

---

## QueryIntAttribute_087e1a50

```asm
// === 087e1a50 TiXmlElement::QueryIntAttribute  [0x087e1a50-0x87e1acf] ===
 87e1a50:	55                   	push   %ebp
 87e1a51:	89 e5                	mov    %esp,%ebp
 87e1a53:	57                   	push   %edi
 87e1a54:	56                   	push   %esi
 87e1a55:	53                   	push   %ebx
 87e1a56:	83 ec 3c             	sub    $0x3c,%esp
 87e1a59:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e1a5c:	8b 43 4c             	mov    0x4c(%ebx),%eax
 87e1a5f:	83 c3 2c             	add    $0x2c,%ebx
 87e1a62:	39 d8                	cmp    %ebx,%eax
 87e1a64:	74 5a                	je     87e1ac0 <_ZNK12TiXmlElement17QueryIntAttributeERKSsPi+0x70>
 87e1a66:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e1a69:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e1a6c:	8b 12                	mov    (%edx),%edx
 87e1a6e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e1a71:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e1a74:	eb 0a                	jmp    87e1a80 <_ZNK12TiXmlElement17QueryIntAttributeERKSsPi+0x30>
 87e1a76:	66 90                	xchg   %ax,%ax
 87e1a78:	8b 40 20             	mov    0x20(%eax),%eax
 87e1a7b:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 87e1a7e:	74 40                	je     87e1ac0 <_ZNK12TiXmlElement17QueryIntAttributeERKSsPi+0x70>
 87e1a80:	8b 70 14             	mov    0x14(%eax),%esi
 87e1a83:	39 56 f4             	cmp    %edx,-0xc(%esi)
 87e1a86:	75 f0                	jne    87e1a78 <_ZNK12TiXmlElement17QueryIntAttributeERKSsPi+0x28>
 87e1a88:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e1a8b:	39 d2                	cmp    %edx,%edx
 87e1a8d:	89 d1                	mov    %edx,%ecx
 87e1a8f:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e1a91:	75 e5                	jne    87e1a78 <_ZNK12TiXmlElement17QueryIntAttributeERKSsPi+0x28>
 87e1a93:	8b 55 10             	mov    0x10(%ebp),%edx
 87e1a96:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e1a9d:	08 
 87e1a9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e1aa2:	8b 40 18             	mov    0x18(%eax),%eax
 87e1aa5:	89 04 24             	mov    %eax,(%esp)
 87e1aa8:	e8 33 bf 89 ff       	call   807d9e0 <sscanf@plt>
 87e1aad:	83 f8 01             	cmp    $0x1,%eax
 87e1ab0:	0f 95 c0             	setne  %al
 87e1ab3:	83 c4 3c             	add    $0x3c,%esp
 87e1ab6:	0f b6 c0             	movzbl %al,%eax
 87e1ab9:	01 c0                	add    %eax,%eax
 87e1abb:	5b                   	pop    %ebx
 87e1abc:	5e                   	pop    %esi
 87e1abd:	5f                   	pop    %edi
 87e1abe:	5d                   	pop    %ebp
 87e1abf:	c3                   	ret
 87e1ac0:	83 c4 3c             	add    $0x3c,%esp
 87e1ac3:	b8 01 00 00 00       	mov    $0x1,%eax
 87e1ac8:	5b                   	pop    %ebx
 87e1ac9:	5e                   	pop    %esi
 87e1aca:	5f                   	pop    %edi
 87e1acb:	5d                   	pop    %ebp
 87e1acc:	c3                   	ret
 87e1acd:	90                   	nop
 87e1ace:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlElement::QueryIntAttribute @ 0x87e1a50

/* TiXmlElement::QueryIntAttribute(std::string const&, int*) const */

char __thiscall TiXmlElement::QueryIntAttribute(TiXmlElement *this,string *param_1,int *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  if (pTVar1 != this + 0x2c) {
    iVar2 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar1 + 0x14) + -0xc) == iVar2) {
        bVar6 = true;
        iVar3 = iVar2;
        pcVar4 = *(char **)(pTVar1 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",param_2);
          return (iVar2 != 1) * '\x02';
        }
      }
      pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
    } while (this + 0x2c != pTVar1);
  }
  return '\x01';
}

```

---

## QueryUnsignedAttribute

```asm
// === 087e12c0 TiXmlElement::QueryUnsignedAttribute  [0x087e12c0-0x87e134f] ===
 87e12c0:	55                   	push   %ebp
 87e12c1:	89 e5                	mov    %esp,%ebp
 87e12c3:	57                   	push   %edi
 87e12c4:	56                   	push   %esi
 87e12c5:	53                   	push   %ebx
 87e12c6:	83 ec 2c             	sub    $0x2c,%esp
 87e12c9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e12cc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e12cf:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e12d2:	83 c6 2c             	add    $0x2c,%esi
 87e12d5:	39 de                	cmp    %ebx,%esi
 87e12d7:	75 0e                	jne    87e12e7 <_ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj+0x27>
 87e12d9:	eb 5d                	jmp    87e1338 <_ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj+0x78>
 87e12db:	90                   	nop
 87e12dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e12e0:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e12e3:	39 de                	cmp    %ebx,%esi
 87e12e5:	74 51                	je     87e1338 <_ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj+0x78>
 87e12e7:	8b 43 14             	mov    0x14(%ebx),%eax
 87e12ea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e12ee:	89 04 24             	mov    %eax,(%esp)
 87e12f1:	e8 ea d1 89 ff       	call   807e4e0 <strcmp@plt>
 87e12f6:	85 c0                	test   %eax,%eax
 87e12f8:	75 e6                	jne    87e12e0 <_ZNK12TiXmlElement22QueryUnsignedAttributeEPKcPj+0x20>
 87e12fa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87e12fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1301:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e1308:	08 
 87e1309:	8b 43 18             	mov    0x18(%ebx),%eax
 87e130c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 87e1313:	89 04 24             	mov    %eax,(%esp)
 87e1316:	e8 c5 c6 89 ff       	call   807d9e0 <sscanf@plt>
 87e131b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e131e:	8b 55 10             	mov    0x10(%ebp),%edx
 87e1321:	89 0a                	mov    %ecx,(%edx)
 87e1323:	83 f8 01             	cmp    $0x1,%eax
 87e1326:	0f 95 c0             	setne  %al
 87e1329:	83 c4 2c             	add    $0x2c,%esp
 87e132c:	0f b6 c0             	movzbl %al,%eax
 87e132f:	01 c0                	add    %eax,%eax
 87e1331:	5b                   	pop    %ebx
 87e1332:	5e                   	pop    %esi
 87e1333:	5f                   	pop    %edi
 87e1334:	5d                   	pop    %ebp
 87e1335:	c3                   	ret
 87e1336:	66 90                	xchg   %ax,%ax
 87e1338:	83 c4 2c             	add    $0x2c,%esp
 87e133b:	b8 01 00 00 00       	mov    $0x1,%eax
 87e1340:	5b                   	pop    %ebx
 87e1341:	5e                   	pop    %esi
 87e1342:	5f                   	pop    %edi
 87e1343:	5d                   	pop    %ebp
 87e1344:	c3                   	ret
 87e1345:	90                   	nop
 87e1346:	8d 76 00             	lea    0x0(%esi),%esi
 87e1349:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::QueryUnsignedAttribute @ 0x87e12c0

/* TiXmlElement::QueryUnsignedAttribute(char const*, unsigned int*) const */

char __thiscall TiXmlElement::QueryUnsignedAttribute(TiXmlElement *this,char *param_1,uint *param_2)

{
  TiXmlElement *pTVar1;
  int iVar2;
  uint local_20 [4];
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (this + 0x2c == pTVar1) {
      return '\x01';
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  local_20[0] = 0;
  iVar2 = sscanf(*(char **)(pTVar1 + 0x18),"%d",local_20);
  *param_2 = local_20[0];
  return (iVar2 != 1) * '\x02';
}

```

---

## ReadValue

```asm
// === 087e7500 TiXmlElement::ReadValue  [0x087e7500-0x87e78af] ===
 87e7500:	55                   	push   %ebp
 87e7501:	89 e5                	mov    %esp,%ebp
 87e7503:	57                   	push   %edi
 87e7504:	56                   	push   %esi
 87e7505:	53                   	push   %ebx
 87e7506:	83 ec 3c             	sub    $0x3c,%esp
 87e7509:	8b 45 08             	mov    0x8(%ebp),%eax
 87e750c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e750f:	89 04 24             	mov    %eax,(%esp)
 87e7512:	e8 b9 89 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e7517:	85 ff                	test   %edi,%edi
 87e7519:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87e751c:	75 38                	jne    87e7556 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x56>
 87e751e:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 87e7522:	0f 84 52 03 00 00    	je     87e787a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x37a>
 87e7528:	8b 45 14             	mov    0x14(%ebp),%eax
 87e752b:	31 f6                	xor    %esi,%esi
 87e752d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87e7530:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e7537:	00 
 87e7538:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e753f:	00 
 87e7540:	89 44 24 10          	mov    %eax,0x10(%esp)
 87e7544:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 87e754b:	00 
 87e754c:	89 14 24             	mov    %edx,(%esp)
 87e754f:	e8 dc f7 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e7554:	eb 6e                	jmp    87e75c4 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xc4>
 87e7556:	0f b6 1f             	movzbl (%edi),%ebx
 87e7559:	84 db                	test   %bl,%bl
 87e755b:	74 c1                	je     87e751e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e755d:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e7561:	89 fe                	mov    %edi,%esi
 87e7563:	74 2f                	je     87e7594 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x94>
 87e7565:	0f b6 c3             	movzbl %bl,%eax
 87e7568:	89 04 24             	mov    %eax,(%esp)
 87e756b:	e8 10 6d 89 ff       	call   807e280 <isspace@plt>
 87e7570:	80 fb 0a             	cmp    $0xa,%bl
 87e7573:	74 09                	je     87e757e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x7e>
 87e7575:	85 c0                	test   %eax,%eax
 87e7577:	75 05                	jne    87e757e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x7e>
 87e7579:	80 fb 0d             	cmp    $0xd,%bl
 87e757c:	75 38                	jne    87e75b6 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xb6>
 87e757e:	83 c6 01             	add    $0x1,%esi
 87e7581:	0f b6 1e             	movzbl (%esi),%ebx
 87e7584:	84 db                	test   %bl,%bl
 87e7586:	74 2e                	je     87e75b6 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xb6>
 87e7588:	eb db                	jmp    87e7565 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x65>
 87e758a:	83 c6 01             	add    $0x1,%esi
 87e758d:	0f b6 1e             	movzbl (%esi),%ebx
 87e7590:	84 db                	test   %bl,%bl
 87e7592:	74 22                	je     87e75b6 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xb6>
 87e7594:	80 3e ef             	cmpb   $0xef,(%esi)
 87e7597:	0f 84 a7 02 00 00    	je     87e7844 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x344>
 87e759d:	0f b6 c3             	movzbl %bl,%eax
 87e75a0:	89 04 24             	mov    %eax,(%esp)
 87e75a3:	e8 d8 6c 89 ff       	call   807e280 <isspace@plt>
 87e75a8:	85 c0                	test   %eax,%eax
 87e75aa:	75 de                	jne    87e758a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x8a>
 87e75ac:	80 fb 0a             	cmp    $0xa,%bl
 87e75af:	74 d9                	je     87e758a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x8a>
 87e75b1:	80 fb 0d             	cmp    $0xd,%bl
 87e75b4:	74 d4                	je     87e758a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x8a>
 87e75b6:	85 f6                	test   %esi,%esi
 87e75b8:	0f 84 60 ff ff ff    	je     87e751e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e75be:	66 90                	xchg   %ax,%ax
 87e75c0:	84 db                	test   %bl,%bl
 87e75c2:	75 0c                	jne    87e75d0 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xd0>
 87e75c4:	83 c4 3c             	add    $0x3c,%esp
 87e75c7:	89 f0                	mov    %esi,%eax
 87e75c9:	5b                   	pop    %ebx
 87e75ca:	5e                   	pop    %esi
 87e75cb:	5f                   	pop    %edi
 87e75cc:	5d                   	pop    %ebp
 87e75cd:	c3                   	ret
 87e75ce:	66 90                	xchg   %ax,%ax
 87e75d0:	80 fb 3c             	cmp    $0x3c,%bl
 87e75d3:	0f 84 a7 01 00 00    	je     87e7780 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x280>
 87e75d9:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 87e75e0:	e8 6b ce f3 ff       	call   8724450 <_Znwj>
 87e75e5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 87e75ec:	00 
 87e75ed:	89 c3                	mov    %eax,%ebx
 87e75ef:	89 04 24             	mov    %eax,(%esp)
 87e75f2:	e8 99 87 ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e75f7:	c7 03 68 11 de 08    	movl   $0x8de1168,(%ebx)
 87e75fd:	8d 43 20             	lea    0x20(%ebx),%eax
 87e7600:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7607:	00 
 87e7608:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e760f:	08 
 87e7610:	89 04 24             	mov    %eax,(%esp)
 87e7613:	e8 88 0f f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e7618:	85 db                	test   %ebx,%ebx
 87e761a:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e761e:	0f 84 56 02 00 00    	je     87e787a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x37a>
 87e7624:	80 3d 78 37 3f 09 00 	cmpb   $0x0,0x93f3778
 87e762b:	0f 84 27 01 00 00    	je     87e7758 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x258>
 87e7631:	8b 55 14             	mov    0x14(%ebp),%edx
 87e7634:	8b 03                	mov    (%ebx),%eax
 87e7636:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e763a:	89 1c 24             	mov    %ebx,(%esp)
 87e763d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e7641:	8b 55 10             	mov    0x10(%ebp),%edx
 87e7644:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e7648:	ff 50 0c             	call   *0xc(%eax)
 87e764b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87e764e:	8b 73 20             	mov    0x20(%ebx),%esi
 87e7651:	8b 46 f4             	mov    -0xc(%esi),%eax
 87e7654:	85 c0                	test   %eax,%eax
 87e7656:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e7659:	0f 84 ea 00 00 00    	je     87e7749 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x249>
 87e765f:	31 ff                	xor    %edi,%edi
 87e7661:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 87e7664:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7668:	0f b6 1c 3e          	movzbl (%esi,%edi,1),%ebx
 87e766c:	0f b6 c3             	movzbl %bl,%eax
 87e766f:	89 04 24             	mov    %eax,(%esp)
 87e7672:	e8 09 6c 89 ff       	call   807e280 <isspace@plt>
 87e7677:	80 fb 0a             	cmp    $0xa,%bl
 87e767a:	0f 84 b8 00 00 00    	je     87e7738 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e7680:	85 c0                	test   %eax,%eax
 87e7682:	0f 85 b0 00 00 00    	jne    87e7738 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e7688:	80 fb 0d             	cmp    $0xd,%bl
 87e768b:	0f 84 a7 00 00 00    	je     87e7738 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e7691:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 87e7694:	8b 55 08             	mov    0x8(%ebp),%edx
 87e7697:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e769b:	89 14 24             	mov    %edx,(%esp)
 87e769e:	e8 ad aa ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e76a3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e76a6:	85 d2                	test   %edx,%edx
 87e76a8:	0f 84 70 fe ff ff    	je     87e751e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e76ae:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e76b1:	0f b6 1a             	movzbl (%edx),%ebx
 87e76b4:	84 db                	test   %bl,%bl
 87e76b6:	0f 84 62 fe ff ff    	je     87e751e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e76bc:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e76c0:	89 d6                	mov    %edx,%esi
 87e76c2:	74 46                	je     87e770a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x20a>
 87e76c4:	0f b6 c3             	movzbl %bl,%eax
 87e76c7:	89 04 24             	mov    %eax,(%esp)
 87e76ca:	e8 b1 6b 89 ff       	call   807e280 <isspace@plt>
 87e76cf:	80 fb 0a             	cmp    $0xa,%bl
 87e76d2:	0f 84 20 01 00 00    	je     87e77f8 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x2f8>
 87e76d8:	85 c0                	test   %eax,%eax
 87e76da:	0f 85 18 01 00 00    	jne    87e77f8 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x2f8>
 87e76e0:	80 fb 0d             	cmp    $0xd,%bl
 87e76e3:	0f 84 0f 01 00 00    	je     87e77f8 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x2f8>
 87e76e9:	85 f6                	test   %esi,%esi
 87e76eb:	0f 84 2d fe ff ff    	je     87e751e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e>
 87e76f1:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87e76f4:	e9 c7 fe ff ff       	jmp    87e75c0 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xc0>
 87e76f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e7700:	83 c6 01             	add    $0x1,%esi
 87e7703:	0f b6 1e             	movzbl (%esi),%ebx
 87e7706:	84 db                	test   %bl,%bl
 87e7708:	74 df                	je     87e76e9 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e770a:	80 3e ef             	cmpb   $0xef,(%esi)
 87e770d:	0f 84 fd 00 00 00    	je     87e7810 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e7713:	0f b6 c3             	movzbl %bl,%eax
 87e7716:	89 04 24             	mov    %eax,(%esp)
 87e7719:	e8 62 6b 89 ff       	call   807e280 <isspace@plt>
 87e771e:	85 c0                	test   %eax,%eax
 87e7720:	75 de                	jne    87e7700 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x200>
 87e7722:	80 fb 0a             	cmp    $0xa,%bl
 87e7725:	74 d9                	je     87e7700 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x200>
 87e7727:	80 fb 0d             	cmp    $0xd,%bl
 87e772a:	75 bd                	jne    87e76e9 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e772c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7730:	eb ce                	jmp    87e7700 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x200>
 87e7732:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e7738:	83 c7 01             	add    $0x1,%edi
 87e773b:	3b 7d e0             	cmp    -0x20(%ebp),%edi
 87e773e:	66 90                	xchg   %ax,%ax
 87e7740:	0f 82 22 ff ff ff    	jb     87e7668 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x168>
 87e7746:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 87e7749:	8b 03                	mov    (%ebx),%eax
 87e774b:	89 1c 24             	mov    %ebx,(%esp)
 87e774e:	ff 50 04             	call   *0x4(%eax)
 87e7751:	e9 4d ff ff ff       	jmp    87e76a3 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a3>
 87e7756:	66 90                	xchg   %ax,%ax
 87e7758:	8b 55 14             	mov    0x14(%ebp),%edx
 87e775b:	8b 03                	mov    (%ebx),%eax
 87e775d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e7761:	89 1c 24             	mov    %ebx,(%esp)
 87e7764:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e7768:	8b 55 10             	mov    0x10(%ebp),%edx
 87e776b:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e776f:	ff 50 0c             	call   *0xc(%eax)
 87e7772:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87e7775:	e9 d4 fe ff ff       	jmp    87e764e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x14e>
 87e777a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e7780:	8b 45 14             	mov    0x14(%ebp),%eax
 87e7783:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e778a:	00 
 87e778b:	c7 44 24 04 50 0f de 	movl   $0x8de0f50,0x4(%esp)
 87e7792:	08 
 87e7793:	89 34 24             	mov    %esi,(%esp)
 87e7796:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e779a:	e8 51 eb ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e779f:	84 c0                	test   %al,%al
 87e77a1:	0f 85 1d fe ff ff    	jne    87e75c4 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xc4>
 87e77a7:	8b 55 14             	mov    0x14(%ebp),%edx
 87e77aa:	8b 45 08             	mov    0x8(%ebp),%eax
 87e77ad:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e77b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e77b5:	89 04 24             	mov    %eax,(%esp)
 87e77b8:	e8 73 fa ff ff       	call   87e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>
 87e77bd:	85 c0                	test   %eax,%eax
 87e77bf:	89 c3                	mov    %eax,%ebx
 87e77c1:	0f 84 b3 00 00 00    	je     87e787a <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x37a>
 87e77c7:	8b 55 14             	mov    0x14(%ebp),%edx
 87e77ca:	8b 00                	mov    (%eax),%eax
 87e77cc:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e77d0:	89 1c 24             	mov    %ebx,(%esp)
 87e77d3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e77d7:	8b 55 10             	mov    0x10(%ebp),%edx
 87e77da:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e77de:	ff 50 0c             	call   *0xc(%eax)
 87e77e1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e77e5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87e77e8:	8b 45 08             	mov    0x8(%ebp),%eax
 87e77eb:	89 04 24             	mov    %eax,(%esp)
 87e77ee:	e8 5d a9 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e77f3:	e9 ab fe ff ff       	jmp    87e76a3 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a3>
 87e77f8:	83 c6 01             	add    $0x1,%esi
 87e77fb:	0f b6 1e             	movzbl (%esi),%ebx
 87e77fe:	84 db                	test   %bl,%bl
 87e7800:	0f 84 e3 fe ff ff    	je     87e76e9 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e9>
 87e7806:	e9 b9 fe ff ff       	jmp    87e76c4 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c4>
 87e780b:	90                   	nop
 87e780c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7810:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e7814:	3c bb                	cmp    $0xbb,%al
 87e7816:	74 20                	je     87e7838 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x338>
 87e7818:	3c bf                	cmp    $0xbf,%al
 87e781a:	0f 85 f3 fe ff ff    	jne    87e7713 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x213>
 87e7820:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e7824:	3c be                	cmp    $0xbe,%al
 87e7826:	74 08                	je     87e7830 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x330>
 87e7828:	3c bf                	cmp    $0xbf,%al
 87e782a:	0f 85 e3 fe ff ff    	jne    87e7713 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x213>
 87e7830:	83 c6 03             	add    $0x3,%esi
 87e7833:	e9 cb fe ff ff       	jmp    87e7703 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x203>
 87e7838:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e783c:	0f 85 d1 fe ff ff    	jne    87e7713 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x213>
 87e7842:	eb ec                	jmp    87e7830 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x330>
 87e7844:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e7848:	3c bb                	cmp    $0xbb,%al
 87e784a:	74 22                	je     87e786e <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x36e>
 87e784c:	3c bf                	cmp    $0xbf,%al
 87e784e:	66 90                	xchg   %ax,%ax
 87e7850:	0f 85 47 fd ff ff    	jne    87e759d <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x9d>
 87e7856:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e785a:	3c be                	cmp    $0xbe,%al
 87e785c:	74 08                	je     87e7866 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x366>
 87e785e:	3c bf                	cmp    $0xbf,%al
 87e7860:	0f 85 37 fd ff ff    	jne    87e759d <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x9d>
 87e7866:	83 c6 03             	add    $0x3,%esi
 87e7869:	e9 1f fd ff ff       	jmp    87e758d <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x8d>
 87e786e:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e7872:	0f 85 25 fd ff ff    	jne    87e759d <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x9d>
 87e7878:	eb ec                	jmp    87e7866 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x366>
 87e787a:	31 f6                	xor    %esi,%esi
 87e787c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7880:	e9 3f fd ff ff       	jmp    87e75c4 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0xc4>
 87e7885:	89 c6                	mov    %eax,%esi
 87e7887:	89 1c 24             	mov    %ebx,(%esp)
 87e788a:	e8 61 cc f3 ff       	call   87244f0 <_ZdlPv>
 87e788f:	89 34 24             	mov    %esi,(%esp)
 87e7892:	e8 b9 be 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e7897:	89 c6                	mov    %eax,%esi
 87e7899:	89 1c 24             	mov    %ebx,(%esp)
 87e789c:	e8 cf b2 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e78a1:	eb e4                	jmp    87e7887 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding+0x387>
 87e78a3:	90                   	nop
 87e78a4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e78aa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlElement::ReadValue @ 0x87e7500

/* TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlElement::ReadValue(TiXmlElement *this,byte *param_1,undefined4 param_2,int param_4)

{
  uint uVar1;
  char cVar2;
  TiXmlDocument *pTVar3;
  int iVar4;
  TiXmlNode *pTVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte *local_28;
  
  pTVar3 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if ((param_1 != (byte *)0x0) && (bVar7 = *param_1, bVar7 != 0)) {
    local_28 = param_1;
    if (param_4 == 1) {
      do {
        if (*local_28 == 0xef) {
          if (local_28[1] == 0xbb) {
            if (local_28[2] == 0xbf) goto LAB_087e7866;
            goto LAB_087e759d;
          }
          if ((local_28[1] != 0xbf) || ((local_28[2] != 0xbe && (local_28[2] != 0xbf))))
          goto LAB_087e759d;
LAB_087e7866:
          local_28 = local_28 + 3;
        }
        else {
LAB_087e759d:
          iVar4 = isspace((uint)bVar7);
          if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
          local_28 = local_28 + 1;
        }
        bVar7 = *local_28;
      } while (bVar7 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar7);
        if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
        local_28 = local_28 + 1;
        bVar7 = *local_28;
      } while (bVar7 != 0);
    }
joined_r0x087e75b8:
    if (local_28 != (byte *)0x0) {
      if (bVar7 == 0) {
        return local_28;
      }
      if (bVar7 == 0x3c) {
        cVar2 = TiXmlBase::StringEqual(local_28,&DAT_08de0f50,0,param_4);
        if (cVar2 != '\0') {
          return local_28;
        }
        pTVar5 = (TiXmlNode *)TiXmlNode::Identify((TiXmlNode *)this,local_28,param_4);
        if (pTVar5 == (TiXmlNode *)0x0) {
          return (byte *)0x0;
        }
        local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,local_28,param_2,param_4);
        TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
      }
      else {
        pTVar5 = operator_new(0x30);
                    /* try { // try from 087e75f2 to 087e75f6 has its CatchHandler @ 087e7885 */
        TiXmlNode::TiXmlNode(pTVar5,4);
        *(undefined ***)pTVar5 = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e7613 to 087e7617 has its CatchHandler @ 087e7897 */
        std::string::assign((string *)(pTVar5 + 0x20),"",0);
        pTVar5[0x2c] = (TiXmlNode)0x0;
        if (pTVar5 == (TiXmlNode *)0x0) {
          return (byte *)0x0;
        }
        if (TiXmlBase::condenseWhiteSpace == '\0') {
          local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,param_1,param_2,param_4);
        }
        else {
          local_28 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,local_28,param_2,param_4);
        }
        iVar4 = *(int *)(pTVar5 + 0x20);
        uVar1 = *(uint *)(iVar4 + -0xc);
        if (uVar1 != 0) {
          uVar8 = 0;
          do {
            bVar7 = *(byte *)(iVar4 + uVar8);
            iVar6 = isspace((uint)bVar7);
            if (((bVar7 != 10) && (iVar6 == 0)) && (bVar7 != 0xd)) {
              TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
              goto LAB_087e76a3;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        (**(code **)(*(int *)pTVar5 + 4))(pTVar5);
      }
LAB_087e76a3:
      if ((local_28 == (byte *)0x0) || (bVar7 = *local_28, bVar7 == 0)) goto LAB_087e751e;
      param_1 = local_28;
      if (param_4 == 1) {
        do {
          if (*local_28 == 0xef) {
            if (local_28[1] == 0xbb) {
              if (local_28[2] == 0xbf) goto LAB_087e7830;
              goto LAB_087e7713;
            }
            if ((local_28[1] != 0xbf) || ((local_28[2] != 0xbe && (local_28[2] != 0xbf))))
            goto LAB_087e7713;
LAB_087e7830:
            local_28 = local_28 + 3;
          }
          else {
LAB_087e7713:
            iVar4 = isspace((uint)bVar7);
            if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
            local_28 = local_28 + 1;
          }
          bVar7 = *local_28;
        } while (bVar7 != 0);
      }
      else {
        do {
          iVar4 = isspace((uint)bVar7);
          if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
          local_28 = local_28 + 1;
          bVar7 = *local_28;
        } while (bVar7 != 0);
      }
      goto joined_r0x087e75b8;
    }
  }
LAB_087e751e:
  if (pTVar3 != (TiXmlDocument *)0x0) {
    TiXmlDocument::SetError(pTVar3,5,0,0,param_4);
  }
  return (byte *)0x0;
}

```

---

## RemoveAttribute

```asm
// === 087e3900 TiXmlElement::RemoveAttribute  [0x087e3900-0x87e3a3f] ===
 87e3900:	55                   	push   %ebp
 87e3901:	89 e5                	mov    %esp,%ebp
 87e3903:	57                   	push   %edi
 87e3904:	56                   	push   %esi
 87e3905:	53                   	push   %ebx
 87e3906:	83 ec 4c             	sub    $0x4c,%esp
 87e3909:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e390c:	8d 45 e7             	lea    -0x19(%ebp),%eax
 87e390f:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3913:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3916:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e391a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e391d:	89 04 24             	mov    %eax,(%esp)
 87e3920:	e8 0b 3d f2 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 87e3925:	8b 43 4c             	mov    0x4c(%ebx),%eax
 87e3928:	83 c3 2c             	add    $0x2c,%ebx
 87e392b:	39 d8                	cmp    %ebx,%eax
 87e392d:	74 7b                	je     87e39aa <_ZN12TiXmlElement15RemoveAttributeEPKc+0xaa>
 87e392f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e3932:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87e3935:	89 5d c4             	mov    %ebx,-0x3c(%ebp)
 87e3938:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e393b:	83 ea 0c             	sub    $0xc,%edx
 87e393e:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87e3941:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e3944:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e3947:	89 c2                	mov    %eax,%edx
 87e3949:	89 c8                	mov    %ecx,%eax
 87e394b:	eb 0b                	jmp    87e3958 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x58>
 87e394d:	8d 76 00             	lea    0x0(%esi),%esi
 87e3950:	8b 52 20             	mov    0x20(%edx),%edx
 87e3953:	3b 55 c4             	cmp    -0x3c(%ebp),%edx
 87e3956:	74 5b                	je     87e39b3 <_ZN12TiXmlElement15RemoveAttributeEPKc+0xb3>
 87e3958:	8b 72 14             	mov    0x14(%edx),%esi
 87e395b:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e395e:	75 f0                	jne    87e3950 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x50>
 87e3960:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e3963:	39 c0                	cmp    %eax,%eax
 87e3965:	89 c1                	mov    %eax,%ecx
 87e3967:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e3969:	75 e5                	jne    87e3950 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x50>
 87e396b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87e396e:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 87e3971:	39 d0                	cmp    %edx,%eax
 87e3973:	74 10                	je     87e3985 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x85>
 87e3975:	8d 76 00             	lea    0x0(%esi),%esi
 87e3978:	8b 40 20             	mov    0x20(%eax),%eax
 87e397b:	39 d8                	cmp    %ebx,%eax
 87e397d:	74 45                	je     87e39c4 <_ZN12TiXmlElement15RemoveAttributeEPKc+0xc4>
 87e397f:	39 c2                	cmp    %eax,%edx
 87e3981:	75 f5                	jne    87e3978 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x78>
 87e3983:	89 d0                	mov    %edx,%eax
 87e3985:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87e3988:	8b 5a 20             	mov    0x20(%edx),%ebx
 87e398b:	89 59 20             	mov    %ebx,0x20(%ecx)
 87e398e:	8b 5a 20             	mov    0x20(%edx),%ebx
 87e3991:	c7 42 20 00 00 00 00 	movl   $0x0,0x20(%edx)
 87e3998:	89 4b 1c             	mov    %ecx,0x1c(%ebx)
 87e399b:	c7 42 1c 00 00 00 00 	movl   $0x0,0x1c(%edx)
 87e39a2:	8b 10                	mov    (%eax),%edx
 87e39a4:	89 04 24             	mov    %eax,(%esp)
 87e39a7:	ff 52 04             	call   *0x4(%edx)
 87e39aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e39ad:	83 e8 0c             	sub    $0xc,%eax
 87e39b0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e39b3:	81 7d d0 f0 cc 48 09 	cmpl   $0x948ccf0,-0x30(%ebp)
 87e39ba:	75 34                	jne    87e39f0 <_ZN12TiXmlElement15RemoveAttributeEPKc+0xf0>
 87e39bc:	83 c4 4c             	add    $0x4c,%esp
 87e39bf:	5b                   	pop    %ebx
 87e39c0:	5e                   	pop    %esi
 87e39c1:	5f                   	pop    %edi
 87e39c2:	5d                   	pop    %ebp
 87e39c3:	c3                   	ret
 87e39c4:	c7 44 24 0c 20 14 de 	movl   $0x8de1420,0xc(%esp)
 87e39cb:	08 
 87e39cc:	c7 44 24 08 08 06 00 	movl   $0x608,0x8(%esp)
 87e39d3:	00 
 87e39d4:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e39db:	08 
 87e39dc:	c7 04 24 6d 45 d0 08 	movl   $0x8d0456d,(%esp)
 87e39e3:	e8 68 a2 89 ff       	call   807dc50 <__assert_fail@plt>
 87e39e8:	89 04 24             	mov    %eax,(%esp)
 87e39eb:	e8 60 fd 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e39f0:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 87e39f5:	85 c0                	test   %eax,%eax
 87e39f7:	74 38                	je     87e3a31 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x131>
 87e39f9:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e39fc:	83 c8 ff             	or     $0xffffffff,%eax
 87e39ff:	f0 0f c1 42 08       	lock xadd %eax,0x8(%edx)
 87e3a04:	85 c0                	test   %eax,%eax
 87e3a06:	7f b4                	jg     87e39bc <_ZN12TiXmlElement15RemoveAttributeEPKc+0xbc>
 87e3a08:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 87e3a0b:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 87e3a0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3a12:	89 1c 24             	mov    %ebx,(%esp)
 87e3a15:	e8 06 2f f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e3a1a:	eb a0                	jmp    87e39bc <_ZN12TiXmlElement15RemoveAttributeEPKc+0xbc>
 87e3a1c:	89 c3                	mov    %eax,%ebx
 87e3a1e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e3a21:	89 04 24             	mov    %eax,(%esp)
 87e3a24:	e8 b7 41 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e3a29:	89 1c 24             	mov    %ebx,(%esp)
 87e3a2c:	e8 1f fd 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e3a31:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87e3a34:	8b 41 08             	mov    0x8(%ecx),%eax
 87e3a37:	8d 50 ff             	lea    -0x1(%eax),%edx
 87e3a3a:	89 51 08             	mov    %edx,0x8(%ecx)
 87e3a3d:	eb c5                	jmp    87e3a04 <_ZN12TiXmlElement15RemoveAttributeEPKc+0x104>
 87e3a3f:	90                   	nop

```

```c
// TiXmlElement::RemoveAttribute @ 0x87e3900

/* WARNING: Removing unreachable block (ram,0x087e3a31) */
/* TiXmlElement::RemoveAttribute(char const*) */

void __thiscall TiXmlElement::RemoveAttribute(TiXmlElement *this,char *param_1)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  TiXmlElement *pTVar4;
  int iVar5;
  TiXmlElement *pTVar6;
  TiXmlElement *pTVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  allocator *local_34;
  char *local_24;
  allocator local_1d [13];
  
  bVar11 = 0;
                    /* try { // try from 087e3920 to 087e3924 has its CatchHandler @ 087e39e8 */
  std::string::string((string *)&local_24,param_1,local_1d);
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  pTVar7 = this + 0x2c;
  if (pTVar2 != pTVar7) {
    pTVar6 = pTVar2;
    do {
      if (*(int *)(*(char **)(pTVar6 + 0x14) + -0xc) == *(int *)(local_24 + -0xc)) {
        bVar10 = true;
        iVar5 = *(int *)(local_24 + -0xc);
        pcVar8 = *(char **)(pTVar6 + 0x14);
        pcVar9 = local_24;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
          pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
        } while (bVar10);
        pTVar4 = pTVar2;
        if (bVar10) goto joined_r0x087e3973;
      }
      pTVar6 = *(TiXmlElement **)(pTVar6 + 0x20);
    } while (pTVar6 != pTVar7);
  }
LAB_087e39b3:
  local_34 = (allocator *)(local_24 + -0xc);
  if (local_34 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 < 1) {
      std::string::_Rep::_M_destroy(local_34);
    }
  }
  return;
joined_r0x087e3973:
  while (pTVar2 != pTVar6) {
    pTVar2 = *(TiXmlElement **)(pTVar2 + 0x20);
    pTVar4 = pTVar6;
    if (pTVar2 == pTVar7) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","tinyxml.cpp",0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
    }
  }
  iVar5 = *(int *)(pTVar6 + 0x1c);
  *(int *)(iVar5 + 0x20) = *(int *)(pTVar6 + 0x20);
  iVar3 = *(int *)(pTVar6 + 0x20);
  *(int *)(pTVar6 + 0x20) = 0;
  *(int *)(iVar3 + 0x1c) = iVar5;
  *(int *)(pTVar6 + 0x1c) = 0;
                    /* try { // try from 087e39a7 to 087e39a9 has its CatchHandler @ 087e3a1c */
  (**(code **)(*(int *)pTVar4 + 4))(pTVar4);
  goto LAB_087e39b3;
}

```

---

## SetAttribute

```asm
// === 087e3fb0 TiXmlElement::SetAttribute  [0x087e3fb0-0x87e40df] ===
 87e3fb0:	55                   	push   %ebp
 87e3fb1:	89 e5                	mov    %esp,%ebp
 87e3fb3:	57                   	push   %edi
 87e3fb4:	56                   	push   %esi
 87e3fb5:	53                   	push   %ebx
 87e3fb6:	83 ec 5c             	sub    $0x5c,%esp
 87e3fb9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e3fbc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e3fbf:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e3fc2:	83 c6 2c             	add    $0x2c,%esi
 87e3fc5:	39 f3                	cmp    %esi,%ebx
 87e3fc7:	75 12                	jne    87e3fdb <_ZN12TiXmlElement12SetAttributeEPKci+0x2b>
 87e3fc9:	e9 92 00 00 00       	jmp    87e4060 <_ZN12TiXmlElement12SetAttributeEPKci+0xb0>
 87e3fce:	66 90                	xchg   %ax,%ax
 87e3fd0:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e3fd3:	39 f3                	cmp    %esi,%ebx
 87e3fd5:	0f 84 85 00 00 00    	je     87e4060 <_ZN12TiXmlElement12SetAttributeEPKci+0xb0>
 87e3fdb:	8b 43 14             	mov    0x14(%ebx),%eax
 87e3fde:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e3fe2:	89 04 24             	mov    %eax,(%esp)
 87e3fe5:	e8 f6 a4 89 ff       	call   807e4e0 <strcmp@plt>
 87e3fea:	85 c0                	test   %eax,%eax
 87e3fec:	75 e2                	jne    87e3fd0 <_ZN12TiXmlElement12SetAttributeEPKci+0x20>
 87e3fee:	8b 45 10             	mov    0x10(%ebp),%eax
 87e3ff1:	8d 75 a8             	lea    -0x58(%ebp),%esi
 87e3ff4:	c7 44 24 08 78 6e d0 	movl   $0x8d06e78,0x8(%esp)
 87e3ffb:	08 
 87e3ffc:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 87e4003:	00 
 87e4004:	89 34 24             	mov    %esi,(%esp)
 87e4007:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e400b:	e8 d0 9b 89 ff       	call   807dbe0 <snprintf@plt>
 87e4010:	89 f2                	mov    %esi,%edx
 87e4012:	8b 0a                	mov    (%edx),%ecx
 87e4014:	83 c2 04             	add    $0x4,%edx
 87e4017:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e401d:	f7 d1                	not    %ecx
 87e401f:	21 c8                	and    %ecx,%eax
 87e4021:	25 80 80 80 80       	and    $0x80808080,%eax
 87e4026:	74 ea                	je     87e4012 <_ZN12TiXmlElement12SetAttributeEPKci+0x62>
 87e4028:	89 c1                	mov    %eax,%ecx
 87e402a:	c1 e9 10             	shr    $0x10,%ecx
 87e402d:	a9 80 80 00 00       	test   $0x8080,%eax
 87e4032:	0f 44 c1             	cmove  %ecx,%eax
 87e4035:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e4038:	0f 44 d1             	cmove  %ecx,%edx
 87e403b:	00 c0                	add    %al,%al
 87e403d:	83 da 03             	sbb    $0x3,%edx
 87e4040:	83 c3 18             	add    $0x18,%ebx
 87e4043:	29 f2                	sub    %esi,%edx
 87e4045:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4049:	89 1c 24             	mov    %ebx,(%esp)
 87e404c:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e4050:	e8 4b 45 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e4055:	83 c4 5c             	add    $0x5c,%esp
 87e4058:	5b                   	pop    %ebx
 87e4059:	5e                   	pop    %esi
 87e405a:	5f                   	pop    %edi
 87e405b:	5d                   	pop    %ebp
 87e405c:	c3                   	ret
 87e405d:	8d 76 00             	lea    0x0(%esi),%esi
 87e4060:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e4067:	e8 e4 03 f4 ff       	call   8724450 <_Znwj>
 87e406c:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e4073:	89 c3                	mov    %eax,%ebx
 87e4075:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e407c:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e4083:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e4089:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e4090:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e4097:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e409e:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e40a5:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e40ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e40b0:	89 34 24             	mov    %esi,(%esp)
 87e40b3:	e8 88 f9 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e40b8:	89 3c 24             	mov    %edi,(%esp)
 87e40bb:	e8 f0 a2 89 ff       	call   807e3b0 <strlen@plt>
 87e40c0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e40c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e40c8:	8d 43 14             	lea    0x14(%ebx),%eax
 87e40cb:	89 04 24             	mov    %eax,(%esp)
 87e40ce:	e8 cd 44 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e40d3:	e9 16 ff ff ff       	jmp    87e3fee <_ZN12TiXmlElement12SetAttributeEPKci+0x3e>
 87e40d8:	90                   	nop
 87e40d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlElement::SetAttribute @ 0x87e3fb0

/* TiXmlElement::SetAttribute(char const*, int) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  size_t sVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_5c [19];
  
  for (pTVar4 = *(TiXmlAttribute **)(this + 0x4c); pTVar4 != (TiXmlAttribute *)(this + 0x2c);
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar4 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e3fee;
  }
  pTVar4 = operator_new(0x24);
  *(undefined4 *)(pTVar4 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0xc) = 0;
  *(undefined ***)pTVar4 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar4 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar4 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x20) = 0;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar4);
  sVar5 = strlen(param_1);
  std::string::assign((string *)(pTVar4 + 0x14),param_1,sVar5);
LAB_087e3fee:
  snprintf((char *)local_5c,0x40,"%d",param_2);
  puVar7 = local_5c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar7 = (uint *)((int)puVar6 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_5c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_5c)));
  return;
}

```

---

## SetAttribute_087e40e0

```asm
// === 087e40e0 TiXmlElement::SetAttribute  [0x087e40e0-0x87e41bf] ===
 87e40e0:	55                   	push   %ebp
 87e40e1:	89 e5                	mov    %esp,%ebp
 87e40e3:	57                   	push   %edi
 87e40e4:	56                   	push   %esi
 87e40e5:	53                   	push   %ebx
 87e40e6:	83 ec 3c             	sub    $0x3c,%esp
 87e40e9:	8b 55 08             	mov    0x8(%ebp),%edx
 87e40ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e40ef:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e40f2:	8b 5a 4c             	mov    0x4c(%edx),%ebx
 87e40f5:	83 c2 2c             	add    $0x2c,%edx
 87e40f8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e40fb:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 87e40fe:	39 d3                	cmp    %edx,%ebx
 87e4100:	74 49                	je     87e414b <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x6b>
 87e4102:	8b 00                	mov    (%eax),%eax
 87e4104:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e4107:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e410a:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e410d:	eb 09                	jmp    87e4118 <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x38>
 87e410f:	90                   	nop
 87e4110:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e4113:	39 5d d4             	cmp    %ebx,-0x2c(%ebp)
 87e4116:	74 30                	je     87e4148 <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x68>
 87e4118:	8b 73 14             	mov    0x14(%ebx),%esi
 87e411b:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e411e:	75 f0                	jne    87e4110 <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x30>
 87e4120:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 87e4123:	39 c0                	cmp    %eax,%eax
 87e4125:	89 c1                	mov    %eax,%ecx
 87e4127:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e4129:	75 e5                	jne    87e4110 <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x30>
 87e412b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e412e:	83 c3 18             	add    $0x18,%ebx
 87e4131:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e4134:	89 55 0c             	mov    %edx,0xc(%ebp)
 87e4137:	83 c4 3c             	add    $0x3c,%esp
 87e413a:	5b                   	pop    %ebx
 87e413b:	5e                   	pop    %esi
 87e413c:	5f                   	pop    %edi
 87e413d:	5d                   	pop    %ebp
 87e413e:	e9 ed 3a f2 ff       	jmp    8707c30 <_ZNSs6assignERKSs>
 87e4143:	90                   	nop
 87e4144:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e4148:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e414b:	89 55 d8             	mov    %edx,-0x28(%ebp)
 87e414e:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e4155:	e8 f6 02 f4 ff       	call   8724450 <_Znwj>
 87e415a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87e415d:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e4164:	89 c3                	mov    %eax,%ebx
 87e4166:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e416d:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e4174:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e417a:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e4181:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e4188:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e418f:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e4196:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e419d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e41a1:	89 14 24             	mov    %edx,(%esp)
 87e41a4:	e8 97 f8 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e41a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e41ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e41b0:	8d 43 14             	lea    0x14(%ebx),%eax
 87e41b3:	89 04 24             	mov    %eax,(%esp)
 87e41b6:	e8 75 3a f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e41bb:	e9 6b ff ff ff       	jmp    87e412b <_ZN12TiXmlElement12SetAttributeERKSsS1_+0x4b>

```

```c
// TiXmlElement::SetAttribute @ 0x87e40e0

/* TiXmlElement::SetAttribute(std::string const&, std::string const&) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,string *param_1,string *param_2)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  int iVar3;
  TiXmlAttributeSet *this_00;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pTVar2 = *(TiXmlAttribute **)(this + 0x4c);
  this_00 = (TiXmlAttributeSet *)(this + 0x2c);
  if (pTVar2 != (TiXmlAttribute *)this_00) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar2 + 0x14) + -0xc) == iVar1) {
        bVar6 = true;
        iVar3 = iVar1;
        pcVar4 = *(char **)(pTVar2 + 0x14);
        pcVar5 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) goto LAB_087e412b;
      }
      pTVar2 = *(TiXmlAttribute **)(pTVar2 + 0x20);
    } while (this_00 != (TiXmlAttributeSet *)pTVar2);
  }
  pTVar2 = operator_new(0x24);
  *(undefined4 *)(pTVar2 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 0xc) = 0;
  *(undefined ***)pTVar2 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar2 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar2 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar2 + 0x10) = 0;
  *(undefined4 *)(pTVar2 + 0x20) = 0;
  *(undefined4 *)(pTVar2 + 0x1c) = 0;
  TiXmlAttributeSet::Add(this_00,pTVar2);
  std::string::assign((string *)(pTVar2 + 0x14),param_1);
LAB_087e412b:
  std::string::assign((string *)(pTVar2 + 0x18),param_2);
  return;
}

```

---

## SetAttribute_087e4320

```asm
// === 087e4320 TiXmlElement::SetAttribute  [0x087e4320-0x87e445f] ===
 87e4320:	55                   	push   %ebp
 87e4321:	89 e5                	mov    %esp,%ebp
 87e4323:	57                   	push   %edi
 87e4324:	56                   	push   %esi
 87e4325:	53                   	push   %ebx
 87e4326:	83 ec 7c             	sub    $0x7c,%esp
 87e4329:	8b 55 08             	mov    0x8(%ebp),%edx
 87e432c:	8b 5a 4c             	mov    0x4c(%edx),%ebx
 87e432f:	83 c2 2c             	add    $0x2c,%edx
 87e4332:	39 d3                	cmp    %edx,%ebx
 87e4334:	0f 84 a9 00 00 00    	je     87e43e3 <_ZN12TiXmlElement12SetAttributeERKSsi+0xc3>
 87e433a:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e433d:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87e4340:	8b 00                	mov    (%eax),%eax
 87e4342:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87e4345:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e4348:	eb 12                	jmp    87e435c <_ZN12TiXmlElement12SetAttributeERKSsi+0x3c>
 87e434a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e4350:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e4353:	39 5d 94             	cmp    %ebx,-0x6c(%ebp)
 87e4356:	0f 84 84 00 00 00    	je     87e43e0 <_ZN12TiXmlElement12SetAttributeERKSsi+0xc0>
 87e435c:	8b 73 14             	mov    0x14(%ebx),%esi
 87e435f:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e4362:	75 ec                	jne    87e4350 <_ZN12TiXmlElement12SetAttributeERKSsi+0x30>
 87e4364:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 87e4367:	39 c0                	cmp    %eax,%eax
 87e4369:	89 c1                	mov    %eax,%ecx
 87e436b:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e436d:	75 e1                	jne    87e4350 <_ZN12TiXmlElement12SetAttributeERKSsi+0x30>
 87e436f:	8b 45 10             	mov    0x10(%ebp),%eax
 87e4372:	8d 75 a8             	lea    -0x58(%ebp),%esi
 87e4375:	c7 44 24 08 78 6e d0 	movl   $0x8d06e78,0x8(%esp)
 87e437c:	08 
 87e437d:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 87e4384:	00 
 87e4385:	89 34 24             	mov    %esi,(%esp)
 87e4388:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e438c:	e8 4f 98 89 ff       	call   807dbe0 <snprintf@plt>
 87e4391:	89 f2                	mov    %esi,%edx
 87e4393:	8b 0a                	mov    (%edx),%ecx
 87e4395:	83 c2 04             	add    $0x4,%edx
 87e4398:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e439e:	f7 d1                	not    %ecx
 87e43a0:	21 c8                	and    %ecx,%eax
 87e43a2:	25 80 80 80 80       	and    $0x80808080,%eax
 87e43a7:	74 ea                	je     87e4393 <_ZN12TiXmlElement12SetAttributeERKSsi+0x73>
 87e43a9:	89 c1                	mov    %eax,%ecx
 87e43ab:	c1 e9 10             	shr    $0x10,%ecx
 87e43ae:	a9 80 80 00 00       	test   $0x8080,%eax
 87e43b3:	0f 44 c1             	cmove  %ecx,%eax
 87e43b6:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e43b9:	0f 44 d1             	cmove  %ecx,%edx
 87e43bc:	00 c0                	add    %al,%al
 87e43be:	83 da 03             	sbb    $0x3,%edx
 87e43c1:	83 c3 18             	add    $0x18,%ebx
 87e43c4:	29 f2                	sub    %esi,%edx
 87e43c6:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e43ca:	89 1c 24             	mov    %ebx,(%esp)
 87e43cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e43d1:	e8 ca 41 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e43d6:	83 c4 7c             	add    $0x7c,%esp
 87e43d9:	5b                   	pop    %ebx
 87e43da:	5e                   	pop    %esi
 87e43db:	5f                   	pop    %edi
 87e43dc:	5d                   	pop    %ebp
 87e43dd:	c3                   	ret
 87e43de:	66 90                	xchg   %ax,%ax
 87e43e0:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87e43e3:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87e43e6:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e43ed:	e8 5e 00 f4 ff       	call   8724450 <_Znwj>
 87e43f2:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87e43f5:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e43fc:	89 c3                	mov    %eax,%ebx
 87e43fe:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e4405:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e440c:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e4412:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e4419:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e4420:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e4427:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e442e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e4435:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4439:	89 14 24             	mov    %edx,(%esp)
 87e443c:	e8 ff f5 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e4441:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4444:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4448:	8d 43 14             	lea    0x14(%ebx),%eax
 87e444b:	89 04 24             	mov    %eax,(%esp)
 87e444e:	e8 dd 37 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e4453:	e9 17 ff ff ff       	jmp    87e436f <_ZN12TiXmlElement12SetAttributeERKSsi+0x4f>
 87e4458:	90                   	nop
 87e4459:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlElement::SetAttribute @ 0x87e4320

/* TiXmlElement::SetAttribute(std::string const&, int) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,string *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  int iVar5;
  TiXmlAttributeSet *this_00;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint local_5c [19];
  
  pTVar4 = *(TiXmlAttribute **)(this + 0x4c);
  this_00 = (TiXmlAttributeSet *)(this + 0x2c);
  if (pTVar4 != (TiXmlAttribute *)this_00) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar4 + 0x14) + -0xc) == iVar1) {
        bVar10 = true;
        iVar5 = iVar1;
        pcVar8 = *(char **)(pTVar4 + 0x14);
        pcVar9 = *(char **)param_1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (bVar10) goto LAB_087e436f;
      }
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20);
    } while (this_00 != (TiXmlAttributeSet *)pTVar4);
  }
  pTVar4 = operator_new(0x24);
  *(undefined4 *)(pTVar4 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0xc) = 0;
  *(undefined ***)pTVar4 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar4 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar4 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x20) = 0;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  TiXmlAttributeSet::Add(this_00,pTVar4);
  std::string::assign((string *)(pTVar4 + 0x14),param_1);
LAB_087e436f:
  snprintf((char *)local_5c,0x40,"%d",param_2);
  puVar7 = local_5c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar7 = (uint *)((int)puVar6 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_5c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_5c)));
  return;
}

```

---

## SetAttribute_087e5510

```asm
// === 087e5510 TiXmlElement::SetAttribute  [0x087e5510-0x87e55ef] ===
 87e5510:	55                   	push   %ebp
 87e5511:	89 e5                	mov    %esp,%ebp
 87e5513:	57                   	push   %edi
 87e5514:	56                   	push   %esi
 87e5515:	53                   	push   %ebx
 87e5516:	83 ec 2c             	sub    $0x2c,%esp
 87e5519:	8b 75 08             	mov    0x8(%ebp),%esi
 87e551c:	8b 45 10             	mov    0x10(%ebp),%eax
 87e551f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e5522:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e5525:	83 c6 2c             	add    $0x2c,%esi
 87e5528:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e552b:	39 f3                	cmp    %esi,%ebx
 87e552d:	75 10                	jne    87e553f <_ZN12TiXmlElement12SetAttributeEPKcS1_+0x2f>
 87e552f:	eb 47                	jmp    87e5578 <_ZN12TiXmlElement12SetAttributeEPKcS1_+0x68>
 87e5531:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e5538:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e553b:	39 f3                	cmp    %esi,%ebx
 87e553d:	74 39                	je     87e5578 <_ZN12TiXmlElement12SetAttributeEPKcS1_+0x68>
 87e553f:	8b 43 14             	mov    0x14(%ebx),%eax
 87e5542:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e5546:	89 04 24             	mov    %eax,(%esp)
 87e5549:	e8 92 8f 89 ff       	call   807e4e0 <strcmp@plt>
 87e554e:	85 c0                	test   %eax,%eax
 87e5550:	75 e6                	jne    87e5538 <_ZN12TiXmlElement12SetAttributeEPKcS1_+0x28>
 87e5552:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e5555:	83 c3 18             	add    $0x18,%ebx
 87e5558:	89 04 24             	mov    %eax,(%esp)
 87e555b:	e8 50 8e 89 ff       	call   807e3b0 <strlen@plt>
 87e5560:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e5563:	89 45 10             	mov    %eax,0x10(%ebp)
 87e5566:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e5569:	89 45 0c             	mov    %eax,0xc(%ebp)
 87e556c:	83 c4 2c             	add    $0x2c,%esp
 87e556f:	5b                   	pop    %ebx
 87e5570:	5e                   	pop    %esi
 87e5571:	5f                   	pop    %edi
 87e5572:	5d                   	pop    %ebp
 87e5573:	e9 28 30 f2 ff       	jmp    87085a0 <_ZNSs6assignEPKcj>
 87e5578:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e557f:	e8 cc ee f3 ff       	call   8724450 <_Znwj>
 87e5584:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e558b:	89 c3                	mov    %eax,%ebx
 87e558d:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e5594:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e559b:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e55a1:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e55a8:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e55af:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e55b6:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e55bd:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e55c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e55c8:	89 34 24             	mov    %esi,(%esp)
 87e55cb:	e8 70 e4 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e55d0:	89 3c 24             	mov    %edi,(%esp)
 87e55d3:	e8 d8 8d 89 ff       	call   807e3b0 <strlen@plt>
 87e55d8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e55dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e55e0:	8d 43 14             	lea    0x14(%ebx),%eax
 87e55e3:	89 04 24             	mov    %eax,(%esp)
 87e55e6:	e8 b5 2f f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e55eb:	e9 62 ff ff ff       	jmp    87e5552 <_ZN12TiXmlElement12SetAttributeEPKcS1_+0x42>

```

```c
// TiXmlElement::SetAttribute @ 0x87e5510

/* TiXmlElement::SetAttribute(char const*, char const*) */

void __thiscall TiXmlElement::SetAttribute(TiXmlElement *this,char *param_1,char *param_2)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  size_t sVar3;
  
  for (pTVar2 = *(TiXmlAttribute **)(this + 0x4c); pTVar2 != (TiXmlAttribute *)(this + 0x2c);
      pTVar2 = *(TiXmlAttribute **)(pTVar2 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar2 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e5552;
  }
  pTVar2 = operator_new(0x24);
  *(undefined4 *)(pTVar2 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 0xc) = 0;
  *(undefined ***)pTVar2 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar2 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar2 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar2 + 0x10) = 0;
  *(undefined4 *)(pTVar2 + 0x20) = 0;
  *(undefined4 *)(pTVar2 + 0x1c) = 0;
  TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar2);
  sVar3 = strlen(param_1);
  std::string::assign((string *)(pTVar2 + 0x14),param_1,sVar3);
LAB_087e5552:
  sVar3 = strlen(param_2);
  std::string::assign((string *)(pTVar2 + 0x18),param_2,sVar3);
  return;
}

```

---

## SetDoubleAttribute

```asm
// === 087e41c0 TiXmlElement::SetDoubleAttribute  [0x087e41c0-0x87e431f] ===
 87e41c0:	55                   	push   %ebp
 87e41c1:	89 e5                	mov    %esp,%ebp
 87e41c3:	57                   	push   %edi
 87e41c4:	56                   	push   %esi
 87e41c5:	53                   	push   %ebx
 87e41c6:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 87e41cc:	8b 55 08             	mov    0x8(%ebp),%edx
 87e41cf:	dd 45 10             	fldl   0x10(%ebp)
 87e41d2:	8b 5a 4c             	mov    0x4c(%edx),%ebx
 87e41d5:	83 c2 2c             	add    $0x2c,%edx
 87e41d8:	39 d3                	cmp    %edx,%ebx
 87e41da:	0f 84 b6 00 00 00    	je     87e4296 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0xd6>
 87e41e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e41e3:	89 95 c4 fe ff ff    	mov    %edx,-0x13c(%ebp)
 87e41e9:	8b 00                	mov    (%eax),%eax
 87e41eb:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 87e41f1:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e41f4:	eb 11                	jmp    87e4207 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0x47>
 87e41f6:	66 90                	xchg   %ax,%ax
 87e41f8:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e41fb:	39 9d c4 fe ff ff    	cmp    %ebx,-0x13c(%ebp)
 87e4201:	0f 84 89 00 00 00    	je     87e4290 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0xd0>
 87e4207:	8b 73 14             	mov    0x14(%ebx),%esi
 87e420a:	39 46 f4             	cmp    %eax,-0xc(%esi)
 87e420d:	75 e9                	jne    87e41f8 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0x38>
 87e420f:	8b bd e4 fe ff ff    	mov    -0x11c(%ebp),%edi
 87e4215:	39 c0                	cmp    %eax,%eax
 87e4217:	89 c1                	mov    %eax,%ecx
 87e4219:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e421b:	75 db                	jne    87e41f8 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0x38>
 87e421d:	8d b5 e8 fe ff ff    	lea    -0x118(%ebp),%esi
 87e4223:	dd 5c 24 0c          	fstpl  0xc(%esp)
 87e4227:	c7 44 24 08 3d 0f de 	movl   $0x8de0f3d,0x8(%esp)
 87e422e:	08 
 87e422f:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 87e4236:	00 
 87e4237:	89 34 24             	mov    %esi,(%esp)
 87e423a:	e8 a1 99 89 ff       	call   807dbe0 <snprintf@plt>
 87e423f:	89 f2                	mov    %esi,%edx
 87e4241:	8b 0a                	mov    (%edx),%ecx
 87e4243:	83 c2 04             	add    $0x4,%edx
 87e4246:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e424c:	f7 d1                	not    %ecx
 87e424e:	21 c8                	and    %ecx,%eax
 87e4250:	25 80 80 80 80       	and    $0x80808080,%eax
 87e4255:	74 ea                	je     87e4241 <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0x81>
 87e4257:	89 c1                	mov    %eax,%ecx
 87e4259:	c1 e9 10             	shr    $0x10,%ecx
 87e425c:	a9 80 80 00 00       	test   $0x8080,%eax
 87e4261:	0f 44 c1             	cmove  %ecx,%eax
 87e4264:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e4267:	0f 44 d1             	cmove  %ecx,%edx
 87e426a:	00 c0                	add    %al,%al
 87e426c:	83 da 03             	sbb    $0x3,%edx
 87e426f:	83 c3 18             	add    $0x18,%ebx
 87e4272:	29 f2                	sub    %esi,%edx
 87e4274:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4278:	89 1c 24             	mov    %ebx,(%esp)
 87e427b:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e427f:	e8 1c 43 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e4284:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 87e428a:	5b                   	pop    %ebx
 87e428b:	5e                   	pop    %esi
 87e428c:	5f                   	pop    %edi
 87e428d:	5d                   	pop    %ebp
 87e428e:	c3                   	ret
 87e428f:	90                   	nop
 87e4290:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 87e4296:	dd 9d d8 fe ff ff    	fstpl  -0x128(%ebp)
 87e429c:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 87e42a2:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e42a9:	e8 a2 01 f4 ff       	call   8724450 <_Znwj>
 87e42ae:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 87e42b4:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e42bb:	89 c3                	mov    %eax,%ebx
 87e42bd:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e42c4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e42cb:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e42d1:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e42d8:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e42df:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e42e6:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e42ed:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e42f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e42f8:	89 14 24             	mov    %edx,(%esp)
 87e42fb:	e8 40 f7 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e4300:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4303:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4307:	8d 43 14             	lea    0x14(%ebx),%eax
 87e430a:	89 04 24             	mov    %eax,(%esp)
 87e430d:	e8 1e 39 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e4312:	dd 85 d8 fe ff ff    	fldl   -0x128(%ebp)
 87e4318:	e9 00 ff ff ff       	jmp    87e421d <_ZN12TiXmlElement18SetDoubleAttributeERKSsd+0x5d>
 87e431d:	90                   	nop
 87e431e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlElement::SetDoubleAttribute @ 0x87e41c0

/* TiXmlElement::SetDoubleAttribute(std::string const&, double) */

void __thiscall TiXmlElement::SetDoubleAttribute(TiXmlElement *this,string *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  int iVar5;
  TiXmlAttributeSet *this_00;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint local_11c [67];
  
  pTVar4 = *(TiXmlAttribute **)(this + 0x4c);
  this_00 = (TiXmlAttributeSet *)(this + 0x2c);
  if (pTVar4 != (TiXmlAttribute *)this_00) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (*(int *)(*(char **)(pTVar4 + 0x14) + -0xc) == iVar1) {
        bVar10 = true;
        iVar5 = iVar1;
        pcVar8 = *(char **)(pTVar4 + 0x14);
        pcVar9 = *(char **)param_1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (bVar10) goto LAB_087e421d;
      }
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20);
    } while (this_00 != (TiXmlAttributeSet *)pTVar4);
  }
  pTVar4 = operator_new(0x24);
  *(undefined4 *)(pTVar4 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0xc) = 0;
  *(undefined ***)pTVar4 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar4 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar4 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x20) = 0;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  TiXmlAttributeSet::Add(this_00,pTVar4);
  std::string::assign((string *)(pTVar4 + 0x14),param_1);
LAB_087e421d:
  snprintf((char *)local_11c,0x100,"%g",param_2);
  puVar7 = local_11c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar7 = (uint *)((int)puVar6 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_11c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_11c)));
  return;
}

```

---

## SetDoubleAttribute_087e55f0

```asm
// === 087e55f0 TiXmlElement::SetDoubleAttribute  [0x087e55f0-0x87e572f] ===
 87e55f0:	55                   	push   %ebp
 87e55f1:	89 e5                	mov    %esp,%ebp
 87e55f3:	57                   	push   %edi
 87e55f4:	56                   	push   %esi
 87e55f5:	53                   	push   %ebx
 87e55f6:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 87e55fc:	8b 75 08             	mov    0x8(%ebp),%esi
 87e55ff:	dd 45 10             	fldl   0x10(%ebp)
 87e5602:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e5605:	dd 9d e0 fe ff ff    	fstpl  -0x120(%ebp)
 87e560b:	8b 5e 4c             	mov    0x4c(%esi),%ebx
 87e560e:	83 c6 2c             	add    $0x2c,%esi
 87e5611:	39 f3                	cmp    %esi,%ebx
 87e5613:	75 16                	jne    87e562b <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0x3b>
 87e5615:	e9 9e 00 00 00       	jmp    87e56b8 <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0xc8>
 87e561a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e5620:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e5623:	39 f3                	cmp    %esi,%ebx
 87e5625:	0f 84 8d 00 00 00    	je     87e56b8 <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0xc8>
 87e562b:	8b 43 14             	mov    0x14(%ebx),%eax
 87e562e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e5632:	89 04 24             	mov    %eax,(%esp)
 87e5635:	e8 a6 8e 89 ff       	call   807e4e0 <strcmp@plt>
 87e563a:	85 c0                	test   %eax,%eax
 87e563c:	75 e2                	jne    87e5620 <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0x30>
 87e563e:	dd 85 e0 fe ff ff    	fldl   -0x120(%ebp)
 87e5644:	8d b5 e8 fe ff ff    	lea    -0x118(%ebp),%esi
 87e564a:	dd 5c 24 0c          	fstpl  0xc(%esp)
 87e564e:	c7 44 24 08 3d 0f de 	movl   $0x8de0f3d,0x8(%esp)
 87e5655:	08 
 87e5656:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 87e565d:	00 
 87e565e:	89 34 24             	mov    %esi,(%esp)
 87e5661:	e8 7a 85 89 ff       	call   807dbe0 <snprintf@plt>
 87e5666:	89 f2                	mov    %esi,%edx
 87e5668:	8b 0a                	mov    (%edx),%ecx
 87e566a:	83 c2 04             	add    $0x4,%edx
 87e566d:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e5673:	f7 d1                	not    %ecx
 87e5675:	21 c8                	and    %ecx,%eax
 87e5677:	25 80 80 80 80       	and    $0x80808080,%eax
 87e567c:	74 ea                	je     87e5668 <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0x78>
 87e567e:	89 c1                	mov    %eax,%ecx
 87e5680:	c1 e9 10             	shr    $0x10,%ecx
 87e5683:	a9 80 80 00 00       	test   $0x8080,%eax
 87e5688:	0f 44 c1             	cmove  %ecx,%eax
 87e568b:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e568e:	0f 44 d1             	cmove  %ecx,%edx
 87e5691:	00 c0                	add    %al,%al
 87e5693:	83 da 03             	sbb    $0x3,%edx
 87e5696:	83 c3 18             	add    $0x18,%ebx
 87e5699:	29 f2                	sub    %esi,%edx
 87e569b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e569f:	89 1c 24             	mov    %ebx,(%esp)
 87e56a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e56a6:	e8 f5 2e f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e56ab:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 87e56b1:	5b                   	pop    %ebx
 87e56b2:	5e                   	pop    %esi
 87e56b3:	5f                   	pop    %edi
 87e56b4:	5d                   	pop    %ebp
 87e56b5:	c3                   	ret
 87e56b6:	66 90                	xchg   %ax,%ax
 87e56b8:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 87e56bf:	e8 8c ed f3 ff       	call   8724450 <_Znwj>
 87e56c4:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e56cb:	89 c3                	mov    %eax,%ebx
 87e56cd:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e56d4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e56db:	c7 00 28 20 de 08    	movl   $0x8de2028,(%eax)
 87e56e1:	c7 40 14 fc cc 48 09 	movl   $0x948ccfc,0x14(%eax)
 87e56e8:	c7 40 18 fc cc 48 09 	movl   $0x948ccfc,0x18(%eax)
 87e56ef:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e56f6:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e56fd:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e5704:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e5708:	89 34 24             	mov    %esi,(%esp)
 87e570b:	e8 30 e3 ff ff       	call   87e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>
 87e5710:	89 3c 24             	mov    %edi,(%esp)
 87e5713:	e8 98 8c 89 ff       	call   807e3b0 <strlen@plt>
 87e5718:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e571c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e5720:	8d 43 14             	lea    0x14(%ebx),%eax
 87e5723:	89 04 24             	mov    %eax,(%esp)
 87e5726:	e8 75 2e f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e572b:	e9 0e ff ff ff       	jmp    87e563e <_ZN12TiXmlElement18SetDoubleAttributeEPKcd+0x4e>

```

```c
// TiXmlElement::SetDoubleAttribute @ 0x87e55f0

/* TiXmlElement::SetDoubleAttribute(char const*, double) */

void __thiscall TiXmlElement::SetDoubleAttribute(TiXmlElement *this,char *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  TiXmlAttribute *pTVar4;
  size_t sVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_11c [67];
  
  for (pTVar4 = *(TiXmlAttribute **)(this + 0x4c); pTVar4 != (TiXmlAttribute *)(this + 0x2c);
      pTVar4 = *(TiXmlAttribute **)(pTVar4 + 0x20)) {
    iVar1 = strcmp(*(char **)(pTVar4 + 0x14),param_1);
    if (iVar1 == 0) goto LAB_087e563e;
  }
  pTVar4 = operator_new(0x24);
  *(undefined4 *)(pTVar4 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar4 + 0xc) = 0;
  *(undefined ***)pTVar4 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar4 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar4 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar4 + 0x10) = 0;
  *(undefined4 *)(pTVar4 + 0x20) = 0;
  *(undefined4 *)(pTVar4 + 0x1c) = 0;
  TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar4);
  sVar5 = strlen(param_1);
  std::string::assign((string *)(pTVar4 + 0x14),param_1,sVar5);
LAB_087e563e:
  snprintf((char *)local_11c,0x100,"%g",param_2);
  puVar7 = local_11c;
  do {
    puVar6 = puVar7;
    uVar2 = *puVar6 + 0xfefefeff & ~*puVar6;
    uVar3 = uVar2 & 0x80808080;
    puVar7 = puVar6 + 1;
  } while (uVar3 == 0);
  if ((uVar2 & 0x8080) == 0) {
    puVar7 = (uint *)((int)puVar6 + 6);
    uVar3 = uVar3 >> 0x10;
  }
  std::string::assign((string *)(pTVar4 + 0x18),(char *)local_11c,
                      (uint)((int)puVar7 +
                            ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_11c)));
  return;
}

```

---

## StreamIn

```asm
// === 087e9460 TiXmlElement::StreamIn  [0x087e9460-0x87e995f] ===
 87e9460:	55                   	push   %ebp
 87e9461:	89 e5                	mov    %esp,%ebp
 87e9463:	57                   	push   %edi
 87e9464:	56                   	push   %esi
 87e9465:	53                   	push   %ebx
 87e9466:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 87e946c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e946f:	90                   	nop
 87e9470:	8b 03                	mov    (%ebx),%eax
 87e9472:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9475:	8b 44 03 14          	mov    0x14(%ebx,%eax,1),%eax
 87e9479:	85 c0                	test   %eax,%eax
 87e947b:	75 60                	jne    87e94dd <_ZN12TiXmlElement8StreamInEPSiPSs+0x7d>
 87e947d:	89 1c 24             	mov    %ebx,(%esp)
 87e9480:	e8 6b c8 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e9485:	85 c0                	test   %eax,%eax
 87e9487:	0f 8e 23 01 00 00    	jle    87e95b0 <_ZN12TiXmlElement8StreamInEPSiPSs+0x150>
 87e948d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e9490:	8b 11                	mov    (%ecx),%edx
 87e9492:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e9495:	8d 7a f4             	lea    -0xc(%edx),%edi
 87e9498:	8d 71 01             	lea    0x1(%ecx),%esi
 87e949b:	3b 77 04             	cmp    0x4(%edi),%esi
 87e949e:	77 07                	ja     87e94a7 <_ZN12TiXmlElement8StreamInEPSiPSs+0x47>
 87e94a0:	8b 7f 08             	mov    0x8(%edi),%edi
 87e94a3:	85 ff                	test   %edi,%edi
 87e94a5:	7e 1a                	jle    87e94c1 <_ZN12TiXmlElement8StreamInEPSiPSs+0x61>
 87e94a7:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e94aa:	89 45 90             	mov    %eax,-0x70(%ebp)
 87e94ad:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e94b1:	89 3c 24             	mov    %edi,(%esp)
 87e94b4:	e8 57 e8 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e94b9:	8b 17                	mov    (%edi),%edx
 87e94bb:	8b 45 90             	mov    -0x70(%ebp),%eax
 87e94be:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e94c1:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e94c4:	8b 55 10             	mov    0x10(%ebp),%edx
 87e94c7:	8b 0a                	mov    (%edx),%ecx
 87e94c9:	8d 51 f4             	lea    -0xc(%ecx),%edx
 87e94cc:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e94d2:	0f 85 80 03 00 00    	jne    87e9858 <_ZN12TiXmlElement8StreamInEPSiPSs+0x3f8>
 87e94d8:	83 f8 3e             	cmp    $0x3e,%eax
 87e94db:	75 93                	jne    87e9470 <_ZN12TiXmlElement8StreamInEPSiPSs+0x10>
 87e94dd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e94e0:	8b 11                	mov    (%ecx),%edx
 87e94e2:	8b 42 f4             	mov    -0xc(%edx),%eax
 87e94e5:	8d 4a f4             	lea    -0xc(%edx),%ecx
 87e94e8:	83 f8 02             	cmp    $0x2,%eax
 87e94eb:	77 0b                	ja     87e94f8 <_ZN12TiXmlElement8StreamInEPSiPSs+0x98>
 87e94ed:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 87e94f3:	5b                   	pop    %ebx
 87e94f4:	5e                   	pop    %esi
 87e94f5:	5f                   	pop    %edi
 87e94f6:	5d                   	pop    %ebp
 87e94f7:	c3                   	ret
 87e94f8:	89 c6                	mov    %eax,%esi
 87e94fa:	83 c6 ff             	add    $0xffffffff,%esi
 87e94fd:	0f 83 22 04 00 00    	jae    87e9925 <_ZN12TiXmlElement8StreamInEPSiPSs+0x4c5>
 87e9503:	8b 79 08             	mov    0x8(%ecx),%edi
 87e9506:	85 ff                	test   %edi,%edi
 87e9508:	78 13                	js     87e951d <_ZN12TiXmlElement8StreamInEPSiPSs+0xbd>
 87e950a:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e950d:	89 3c 24             	mov    %edi,(%esp)
 87e9510:	e8 eb f8 f1 ff       	call   8708e00 <_ZNSs12_M_leak_hardEv>
 87e9515:	8b 17                	mov    (%edi),%edx
 87e9517:	8b 42 f4             	mov    -0xc(%edx),%eax
 87e951a:	8d 4a f4             	lea    -0xc(%edx),%ecx
 87e951d:	80 3c 32 3e          	cmpb   $0x3e,(%edx,%esi,1)
 87e9521:	0f 84 e7 00 00 00    	je     87e960e <_ZN12TiXmlElement8StreamInEPSiPSs+0x1ae>
 87e9527:	83 c0 ff             	add    $0xffffffff,%eax
 87e952a:	0f 83 f5 03 00 00    	jae    87e9925 <_ZN12TiXmlElement8StreamInEPSiPSs+0x4c5>
 87e9530:	8b 49 08             	mov    0x8(%ecx),%ecx
 87e9533:	85 c9                	test   %ecx,%ecx
 87e9535:	78 13                	js     87e954a <_ZN12TiXmlElement8StreamInEPSiPSs+0xea>
 87e9537:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e953a:	89 45 90             	mov    %eax,-0x70(%ebp)
 87e953d:	89 3c 24             	mov    %edi,(%esp)
 87e9540:	e8 bb f8 f1 ff       	call   8708e00 <_ZNSs12_M_leak_hardEv>
 87e9545:	8b 17                	mov    (%edi),%edx
 87e9547:	8b 45 90             	mov    -0x70(%ebp),%eax
 87e954a:	80 3c 02 3e          	cmpb   $0x3e,(%edx,%eax,1)
 87e954e:	75 9d                	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9550:	8b 45 10             	mov    0x10(%ebp),%eax
 87e9553:	89 1c 24             	mov    %ebx,(%esp)
 87e9556:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e955a:	e8 e1 db ff ff       	call   87e7140 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs>
 87e955f:	8b 03                	mov    (%ebx),%eax
 87e9561:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9564:	8b 44 03 14          	mov    0x14(%ebx,%eax,1),%eax
 87e9568:	85 c0                	test   %eax,%eax
 87e956a:	75 81                	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e956c:	89 1c 24             	mov    %ebx,(%esp)
 87e956f:	e8 9c c9 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e9574:	83 f8 3c             	cmp    $0x3c,%eax
 87e9577:	0f 84 bc 00 00 00    	je     87e9639 <_ZN12TiXmlElement8StreamInEPSiPSs+0x1d9>
 87e957d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 87e9580:	e8 4b d6 ff ff       	call   87e6bd0 <_ZN9TiXmlTextC2EPKc.clone.0>
 87e9585:	8b 55 10             	mov    0x10(%ebp),%edx
 87e9588:	8d 4d b8             	lea    -0x48(%ebp),%ecx
 87e958b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e958f:	89 0c 24             	mov    %ecx,(%esp)
 87e9592:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e9596:	e8 a5 f5 ff ff       	call   87e8b40 <_ZN9TiXmlText8StreamInEPSiPSs>
 87e959b:	8d 7d b8             	lea    -0x48(%ebp),%edi
 87e959e:	c7 45 b8 68 11 de 08 	movl   $0x8de1168,-0x48(%ebp)
 87e95a5:	89 3c 24             	mov    %edi,(%esp)
 87e95a8:	e8 c3 95 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e95ad:	eb a1                	jmp    87e9550 <_ZN12TiXmlElement8StreamInEPSiPSs+0xf0>
 87e95af:	90                   	nop
 87e95b0:	8b 45 08             	mov    0x8(%ebp),%eax
 87e95b3:	89 04 24             	mov    %eax,(%esp)
 87e95b6:	e8 15 69 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e95bb:	85 c0                	test   %eax,%eax
 87e95bd:	89 c3                	mov    %eax,%ebx
 87e95bf:	0f 84 28 ff ff ff    	je     87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e95c5:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e95c9:	0f 85 1e ff ff ff    	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e95cf:	8b 35 f4 37 3f 09    	mov    0x93f37f4,%esi
 87e95d5:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e95d9:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e95e0:	89 34 24             	mov    %esi,(%esp)
 87e95e3:	e8 c8 4d 89 ff       	call   807e3b0 <strlen@plt>
 87e95e8:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e95ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e95f0:	8d 43 34             	lea    0x34(%ebx),%eax
 87e95f3:	89 04 24             	mov    %eax,(%esp)
 87e95f6:	e8 a5 ef f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e95fb:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e9602:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e9609:	e9 df fe ff ff       	jmp    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e960e:	83 e8 02             	sub    $0x2,%eax
 87e9611:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e9615:	8b 45 10             	mov    0x10(%ebp),%eax
 87e9618:	89 04 24             	mov    %eax,(%esp)
 87e961b:	e8 50 f8 f1 ff       	call   8708e70 <_ZNSs2atEj>
 87e9620:	80 38 2f             	cmpb   $0x2f,(%eax)
 87e9623:	0f 84 c4 fe ff ff    	je     87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9629:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e962c:	8b 11                	mov    (%ecx),%edx
 87e962e:	8d 4a f4             	lea    -0xc(%edx),%ecx
 87e9631:	8b 42 f4             	mov    -0xc(%edx),%eax
 87e9634:	e9 ee fe ff ff       	jmp    87e9527 <_ZN12TiXmlElement8StreamInEPSiPSs+0xc7>
 87e9639:	8b 03                	mov    (%ebx),%eax
 87e963b:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e963e:	8b 7c 03 14          	mov    0x14(%ebx,%eax,1),%edi
 87e9642:	85 ff                	test   %edi,%edi
 87e9644:	0f 85 a3 fe ff ff    	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e964a:	89 1c 24             	mov    %ebx,(%esp)
 87e964d:	e8 be c8 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e9652:	83 f8 3c             	cmp    $0x3c,%eax
 87e9655:	0f 85 8a 02 00 00    	jne    87e98e5 <_ZN12TiXmlElement8StreamInEPSiPSs+0x485>
 87e965b:	8b 55 10             	mov    0x10(%ebp),%edx
 87e965e:	c6 45 b6 00          	movb   $0x0,-0x4a(%ebp)
 87e9662:	c6 45 98 00          	movb   $0x0,-0x68(%ebp)
 87e9666:	8b 02                	mov    (%edx),%eax
 87e9668:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e966b:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87e966e:	66 90                	xchg   %ax,%ax
 87e9670:	8b 03                	mov    (%ebx),%eax
 87e9672:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9675:	8b 74 03 14          	mov    0x14(%ebx,%eax,1),%esi
 87e9679:	85 f6                	test   %esi,%esi
 87e967b:	0f 85 6c fe ff ff    	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9681:	89 1c 24             	mov    %ebx,(%esp)
 87e9684:	e8 87 c8 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e9689:	85 c0                	test   %eax,%eax
 87e968b:	89 c2                	mov    %eax,%edx
 87e968d:	0f 8e 75 01 00 00    	jle    87e9808 <_ZN12TiXmlElement8StreamInEPSiPSs+0x3a8>
 87e9693:	83 f8 3e             	cmp    $0x3e,%eax
 87e9696:	0f 84 ac 01 00 00    	je     87e9848 <_ZN12TiXmlElement8StreamInEPSiPSs+0x3e8>
 87e969c:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e969f:	88 45 b7             	mov    %al,-0x49(%ebp)
 87e96a2:	8b 07                	mov    (%edi),%eax
 87e96a4:	8b 48 f4             	mov    -0xc(%eax),%ecx
 87e96a7:	8d 78 f4             	lea    -0xc(%eax),%edi
 87e96aa:	89 ce                	mov    %ecx,%esi
 87e96ac:	83 c6 01             	add    $0x1,%esi
 87e96af:	3b 77 04             	cmp    0x4(%edi),%esi
 87e96b2:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 87e96b5:	77 07                	ja     87e96be <_ZN12TiXmlElement8StreamInEPSiPSs+0x25e>
 87e96b7:	8b 4f 08             	mov    0x8(%edi),%ecx
 87e96ba:	85 c9                	test   %ecx,%ecx
 87e96bc:	7e 1d                	jle    87e96db <_ZN12TiXmlElement8StreamInEPSiPSs+0x27b>
 87e96be:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e96c1:	89 55 90             	mov    %edx,-0x70(%ebp)
 87e96c4:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e96c8:	89 3c 24             	mov    %edi,(%esp)
 87e96cb:	e8 40 e6 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e96d0:	8b 07                	mov    (%edi),%eax
 87e96d2:	8b 55 90             	mov    -0x70(%ebp),%edx
 87e96d5:	8b 48 f4             	mov    -0xc(%eax),%ecx
 87e96d8:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 87e96db:	0f b6 4d b7          	movzbl -0x49(%ebp),%ecx
 87e96df:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 87e96e2:	88 0c 38             	mov    %cl,(%eax,%edi,1)
 87e96e5:	8b 45 10             	mov    0x10(%ebp),%eax
 87e96e8:	8b 08                	mov    (%eax),%ecx
 87e96ea:	8d 41 f4             	lea    -0xc(%ecx),%eax
 87e96ed:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e96f2:	0f 85 74 01 00 00    	jne    87e986c <_ZN12TiXmlElement8StreamInEPSiPSs+0x40c>
 87e96f8:	89 55 90             	mov    %edx,-0x70(%ebp)
 87e96fb:	89 1c 24             	mov    %ebx,(%esp)
 87e96fe:	e8 ed c5 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e9703:	8b 55 90             	mov    -0x70(%ebp),%edx
 87e9706:	83 fa 5b             	cmp    $0x5b,%edx
 87e9709:	74 3d                	je     87e9748 <_ZN12TiXmlElement8StreamInEPSiPSs+0x2e8>
 87e970b:	80 7d b6 00          	cmpb   $0x0,-0x4a(%ebp)
 87e970f:	0f 85 5b ff ff ff    	jne    87e9670 <_ZN12TiXmlElement8StreamInEPSiPSs+0x210>
 87e9715:	83 fa 3c             	cmp    $0x3c,%edx
 87e9718:	0f 84 52 ff ff ff    	je     87e9670 <_ZN12TiXmlElement8StreamInEPSiPSs+0x210>
 87e971e:	81 fa ff 00 00 00    	cmp    $0xff,%edx
 87e9724:	0f 8e 96 00 00 00    	jle    87e97c0 <_ZN12TiXmlElement8StreamInEPSiPSs+0x360>
 87e972a:	8b 03                	mov    (%ebx),%eax
 87e972c:	c6 45 b6 01          	movb   $0x1,-0x4a(%ebp)
 87e9730:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9733:	8b 74 03 14          	mov    0x14(%ebx,%eax,1),%esi
 87e9737:	85 f6                	test   %esi,%esi
 87e9739:	0f 84 42 ff ff ff    	je     87e9681 <_ZN12TiXmlElement8StreamInEPSiPSs+0x221>
 87e973f:	e9 a9 fd ff ff       	jmp    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9744:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9748:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e974b:	8b 09                	mov    (%ecx),%ecx
 87e974d:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 87e9750:	89 cf                	mov    %ecx,%edi
 87e9752:	8b 49 f4             	mov    -0xc(%ecx),%ecx
 87e9755:	83 f9 08             	cmp    $0x8,%ecx
 87e9758:	76 b1                	jbe    87e970b <_ZN12TiXmlElement8StreamInEPSiPSs+0x2ab>
 87e975a:	8d 74 0f f7          	lea    -0x9(%edi,%ecx,1),%esi
 87e975e:	bf db cf d0 08       	mov    $0x8d0cfdb,%edi
 87e9763:	b9 0a 00 00 00       	mov    $0xa,%ecx
 87e9768:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 87e976a:	75 9f                	jne    87e970b <_ZN12TiXmlElement8StreamInEPSiPSs+0x2ab>
 87e976c:	80 7d 98 00          	cmpb   $0x0,-0x68(%ebp)
 87e9770:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87e9773:	0f 85 48 01 00 00    	jne    87e98c1 <_ZN12TiXmlElement8StreamInEPSiPSs+0x461>
 87e9779:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e977c:	03 45 94             	add    -0x6c(%ebp),%eax
 87e977f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9786:	00 
 87e9787:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e978b:	89 0c 24             	mov    %ecx,(%esp)
 87e978e:	e8 9d da ff ff       	call   87e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>
 87e9793:	85 c0                	test   %eax,%eax
 87e9795:	89 c6                	mov    %eax,%esi
 87e9797:	0f 84 50 fd ff ff    	je     87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e979d:	8b 00                	mov    (%eax),%eax
 87e979f:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e97a2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e97a6:	89 34 24             	mov    %esi,(%esp)
 87e97a9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e97ad:	ff 50 48             	call   *0x48(%eax)
 87e97b0:	8b 06                	mov    (%esi),%eax
 87e97b2:	89 34 24             	mov    %esi,(%esp)
 87e97b5:	ff 50 04             	call   *0x4(%eax)
 87e97b8:	e9 93 fd ff ff       	jmp    87e9550 <_ZN12TiXmlElement8StreamInEPSiPSs+0xf0>
 87e97bd:	8d 76 00             	lea    0x0(%esi),%esi
 87e97c0:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 87e97c4:	89 55 90             	mov    %edx,-0x70(%ebp)
 87e97c7:	89 04 24             	mov    %eax,(%esp)
 87e97ca:	e8 b1 4a 89 ff       	call   807e280 <isspace@plt>
 87e97cf:	8b 55 90             	mov    -0x70(%ebp),%edx
 87e97d2:	85 c0                	test   %eax,%eax
 87e97d4:	0f 85 96 fe ff ff    	jne    87e9670 <_ZN12TiXmlElement8StreamInEPSiPSs+0x210>
 87e97da:	80 7d b7 0a          	cmpb   $0xa,-0x49(%ebp)
 87e97de:	0f 84 8c fe ff ff    	je     87e9670 <_ZN12TiXmlElement8StreamInEPSiPSs+0x210>
 87e97e4:	80 7d b7 0d          	cmpb   $0xd,-0x49(%ebp)
 87e97e8:	0f 84 82 fe ff ff    	je     87e9670 <_ZN12TiXmlElement8StreamInEPSiPSs+0x210>
 87e97ee:	83 fa 2f             	cmp    $0x2f,%edx
 87e97f1:	0f b6 55 98          	movzbl -0x68(%ebp),%edx
 87e97f5:	b8 01 00 00 00       	mov    $0x1,%eax
 87e97fa:	0f 44 d0             	cmove  %eax,%edx
 87e97fd:	88 55 98             	mov    %dl,-0x68(%ebp)
 87e9800:	e9 25 ff ff ff       	jmp    87e972a <_ZN12TiXmlElement8StreamInEPSiPSs+0x2ca>
 87e9805:	8d 76 00             	lea    0x0(%esi),%esi
 87e9808:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e980b:	89 0c 24             	mov    %ecx,(%esp)
 87e980e:	e8 bd 66 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e9813:	85 c0                	test   %eax,%eax
 87e9815:	0f 84 d2 fc ff ff    	je     87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e981b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e9822:	00 
 87e9823:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e982a:	00 
 87e982b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9832:	00 
 87e9833:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 87e983a:	00 
 87e983b:	89 04 24             	mov    %eax,(%esp)
 87e983e:	e8 ed d4 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e9843:	e9 a5 fc ff ff       	jmp    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9848:	80 7d 98 00          	cmpb   $0x0,-0x68(%ebp)
 87e984c:	75 32                	jne    87e9880 <_ZN12TiXmlElement8StreamInEPSiPSs+0x420>
 87e984e:	8b 55 10             	mov    0x10(%ebp),%edx
 87e9851:	8b 02                	mov    (%edx),%eax
 87e9853:	e9 21 ff ff ff       	jmp    87e9779 <_ZN12TiXmlElement8StreamInEPSiPSs+0x319>
 87e9858:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 87e985f:	89 71 f4             	mov    %esi,-0xc(%ecx)
 87e9862:	c6 44 32 0c 00       	movb   $0x0,0xc(%edx,%esi,1)
 87e9867:	e9 6c fc ff ff       	jmp    87e94d8 <_ZN12TiXmlElement8StreamInEPSiPSs+0x78>
 87e986c:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e9873:	89 71 f4             	mov    %esi,-0xc(%ecx)
 87e9876:	c6 44 30 0c 00       	movb   $0x0,0xc(%eax,%esi,1)
 87e987b:	e9 78 fe ff ff       	jmp    87e96f8 <_ZN12TiXmlElement8StreamInEPSiPSs+0x298>
 87e9880:	8b 03                	mov    (%ebx),%eax
 87e9882:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9885:	83 7c 03 14 00       	cmpl   $0x0,0x14(%ebx,%eax,1)
 87e988a:	0f 85 5d fc ff ff    	jne    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e9890:	89 1c 24             	mov    %ebx,(%esp)
 87e9893:	e8 58 c4 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e9898:	85 c0                	test   %eax,%eax
 87e989a:	0f 8e 68 ff ff ff    	jle    87e9808 <_ZN12TiXmlElement8StreamInEPSiPSs+0x3a8>
 87e98a0:	83 f8 3e             	cmp    $0x3e,%eax
 87e98a3:	0f 85 88 00 00 00    	jne    87e9931 <_ZN12TiXmlElement8StreamInEPSiPSs+0x4d1>
 87e98a9:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e98ac:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 87e98b3:	00 
 87e98b4:	89 3c 24             	mov    %edi,(%esp)
 87e98b7:	e8 04 e5 f1 ff       	call   8707dc0 <_ZNSs9push_backEc>
 87e98bc:	e9 2c fc ff ff       	jmp    87e94ed <_ZN12TiXmlElement8StreamInEPSiPSs+0x8d>
 87e98c1:	c7 44 24 0c 40 1d de 	movl   $0x8de1d40,0xc(%esp)
 87e98c8:	08 
 87e98c9:	c7 44 24 08 e0 03 00 	movl   $0x3e0,0x8(%esp)
 87e98d0:	00 
 87e98d1:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e98d8:	08 
 87e98d9:	c7 04 24 92 18 de 08 	movl   $0x8de1892,(%esp)
 87e98e0:	e8 6b 43 89 ff       	call   807dc50 <__assert_fail@plt>
 87e98e5:	c7 44 24 0c 40 1d de 	movl   $0x8de1d40,0xc(%esp)
 87e98ec:	08 
 87e98ed:	c7 44 24 08 c0 03 00 	movl   $0x3c0,0x8(%esp)
 87e98f4:	00 
 87e98f5:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e98fc:	08 
 87e98fd:	c7 04 24 80 18 de 08 	movl   $0x8de1880,(%esp)
 87e9904:	e8 47 43 89 ff       	call   807dc50 <__assert_fail@plt>
 87e9909:	89 c3                	mov    %eax,%ebx
 87e990b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 87e990e:	c7 45 b8 68 11 de 08 	movl   $0x8de1168,-0x48(%ebp)
 87e9915:	89 04 24             	mov    %eax,(%esp)
 87e9918:	e8 53 92 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e991d:	89 1c 24             	mov    %ebx,(%esp)
 87e9920:	e8 2b 9e 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e9925:	c7 04 24 2c 04 d0 08 	movl   $0x8d0042c,(%esp)
 87e992c:	e8 3f 02 ef ff       	call   86d9b70 <_ZSt20__throw_out_of_rangePKc>
 87e9931:	c7 44 24 0c 40 1d de 	movl   $0x8de1d40,0xc(%esp)
 87e9938:	08 
 87e9939:	c7 44 24 08 fb 03 00 	movl   $0x3fb,0x8(%esp)
 87e9940:	00 
 87e9941:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e9948:	08 
 87e9949:	c7 04 24 9e 18 de 08 	movl   $0x8de189e,(%esp)
 87e9950:	e8 fb 42 89 ff       	call   807dc50 <__assert_fail@plt>
 87e9955:	90                   	nop
 87e9956:	8d 76 00             	lea    0x0(%esi),%esi
 87e9959:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::StreamIn @ 0x87e9460

/* TiXmlElement::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlElement::StreamIn(TiXmlElement *this,istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 __s;
  char cVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  TiXmlDocument *pTVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  byte bVar16;
  istream *this_00;
  string *psVar17;
  int local_80;
  undefined **local_4c [15];
  
  bVar16 = 0;
  do {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) break;
    iVar5 = std::istream::get(param_1);
    if (iVar5 < 1) {
      iVar5 = TiXmlNode::GetDocument((TiXmlNode *)this);
      __s = TiXmlBase::errorString._52_4_;
      if (iVar5 == 0) {
        return;
      }
      if (*(char *)(iVar5 + 0x2c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar5 + 0x2c) = 1;
      *(undefined4 *)(iVar5 + 0x30) = 0xd;
      sVar6 = strlen((char *)__s);
      std::string::assign((string *)(iVar5 + 0x34),(char *)__s,sVar6);
      *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x3c) = 0xffffffff;
      return;
    }
    iVar12 = *(int *)param_2;
    iVar11 = *(int *)(iVar12 + -0xc);
    uVar8 = iVar11 + 1;
    if ((*(uint *)(iVar12 + -8) < uVar8) || (0 < *(int *)(iVar12 + -4))) {
      std::string::reserve(param_2,uVar8);
      iVar12 = *(int *)param_2;
      iVar11 = *(int *)(iVar12 + -0xc);
    }
    *(char *)(iVar12 + iVar11) = (char)iVar5;
    puVar1 = *(undefined1 **)param_2;
    if (puVar1 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar1 + -4) = 0;
      *(uint *)(puVar1 + -0xc) = uVar8;
      puVar1[uVar8] = 0;
    }
  } while (iVar5 != 0x3e);
  iVar5 = *(int *)param_2;
  uVar8 = *(uint *)(iVar5 + -0xc);
  if (uVar8 < 3) {
    return;
  }
  iVar12 = uVar8 - 1;
  if (uVar8 != 0) {
    if (-1 < *(int *)(iVar5 + -4)) {
      std::string::_M_leak_hard(param_2);
      iVar5 = *(int *)param_2;
      uVar8 = *(uint *)(iVar5 + -0xc);
    }
    if (*(char *)(iVar5 + iVar12) == '>') {
      pcVar7 = (char *)std::string::at(param_2,uVar8 - 2);
      if (*pcVar7 == '/') {
        return;
      }
      iVar5 = *(int *)param_2;
      uVar8 = *(uint *)(iVar5 + -0xc);
    }
    if (uVar8 != 0) {
      if (-1 < *(int *)(iVar5 + -4)) {
        std::string::_M_leak_hard(param_2);
        iVar5 = *(int *)param_2;
      }
      if (*(char *)(iVar5 + (uVar8 - 1)) != '>') {
        return;
      }
LAB_087e9550:
      while( true ) {
        psVar17 = param_2;
        TiXmlBase::StreamWhiteSpace(param_1,param_2);
        if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
          return;
        }
        this_00 = param_1;
        iVar5 = std::istream::peek(param_1);
        if (iVar5 == 0x3c) break;
        TiXmlText::TiXmlText((TiXmlText *)this_00,(char *)psVar17);
                    /* try { // try from 087e9596 to 087e959a has its CatchHandler @ 087e9909 */
        TiXmlText::StreamIn((TiXmlText *)local_4c,param_1,param_2);
        local_4c[0] = &PTR__TiXmlText_08de1168;
        TiXmlNode::~TiXmlNode((TiXmlNode *)local_4c);
      }
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      iVar5 = std::istream::peek(param_1);
      if (iVar5 != 0x3c) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("in->peek() == \'<\'","tinyxmlparser.cpp",0x3c0,
                      "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
      }
      bVar2 = false;
      bVar3 = false;
      iVar5 = *(int *)(*(int *)param_2 + -0xc);
LAB_087e9670:
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      do {
        uVar8 = std::istream::peek(param_1);
        if ((int)uVar8 < 1) {
LAB_087e9808:
          pTVar10 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
          if (pTVar10 == (TiXmlDocument *)0x0) {
            return;
          }
          TiXmlDocument::SetError(pTVar10,0xd,0,0,0);
          return;
        }
        if (uVar8 == 0x3e) {
          if (bVar3) {
            if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
              return;
            }
            iVar5 = std::istream::get(param_1);
            if (0 < iVar5) {
              if (iVar5 == 0x3e) {
                std::string::push_back(param_2,'>');
                return;
              }
                    /* WARNING: Subroutine does not return */
              __assert_fail("c == \'>\'","tinyxmlparser.cpp",0x3fb,
                            "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
            }
            goto LAB_087e9808;
          }
          iVar12 = *(int *)param_2;
LAB_087e9779:
          piVar9 = (int *)TiXmlNode::Identify((TiXmlNode *)this,iVar12 + iVar5,0);
          if (piVar9 == (int *)0x0) {
            return;
          }
          (**(code **)(*piVar9 + 0x48))(piVar9,param_1,param_2);
          (**(code **)(*piVar9 + 4))(piVar9);
          goto LAB_087e9550;
        }
        cVar4 = (char)uVar8;
        iVar12 = *(int *)param_2;
        local_80 = *(int *)(iVar12 + -0xc);
        uVar13 = local_80 + 1;
        if ((*(uint *)(iVar12 + -8) < uVar13) || (0 < *(int *)(iVar12 + -4))) {
          std::string::reserve(param_2,uVar13);
          iVar12 = *(int *)param_2;
          local_80 = *(int *)(iVar12 + -0xc);
        }
        *(char *)(iVar12 + local_80) = cVar4;
        puVar1 = *(undefined1 **)param_2;
        if (puVar1 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar1 + -4) = 0;
          *(uint *)(puVar1 + -0xc) = uVar13;
          puVar1[uVar13] = 0;
        }
        std::istream::get(param_1);
        if (uVar8 == 0x5b) {
          iVar12 = *(int *)param_2;
          uVar13 = *(uint *)(iVar12 + -0xc);
          bVar15 = uVar13 == 8;
          if (8 < uVar13) {
            iVar11 = 10;
            pcVar7 = (char *)(iVar12 + -9 + uVar13);
            pcVar14 = "<![CDATA[";
            do {
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              bVar15 = *pcVar7 == *pcVar14;
              pcVar7 = pcVar7 + (uint)bVar16 * -2 + 1;
              pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
            } while (bVar15);
            if (bVar15) {
              if (bVar3) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("!closingTag","tinyxmlparser.cpp",0x3e0,
                              "virtual void TiXmlElement::StreamIn(std::istream*, std::string*)");
              }
              goto LAB_087e9779;
            }
          }
        }
        if ((bVar2) || (uVar8 == 0x3c)) goto LAB_087e9670;
        if ((int)uVar8 < 0x100) {
          iVar12 = isspace(uVar8 & 0xff);
          if (((iVar12 != 0) || (cVar4 == '\n')) || (cVar4 == '\r')) goto LAB_087e9670;
          if (uVar8 == 0x2f) {
            bVar3 = true;
          }
        }
        bVar2 = true;
        if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_out_of_range("basic_string::at");
}

```

---

## TiXmlElement

```asm
// === 087e3570 TiXmlElement::TiXmlElement  [0x087e3570-0x87e363f] ===
 87e3570:	55                   	push   %ebp
 87e3571:	89 e5                	mov    %esp,%ebp
 87e3573:	56                   	push   %esi
 87e3574:	53                   	push   %ebx
 87e3575:	83 ec 20             	sub    $0x20,%esp
 87e3578:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e357b:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e357e:	8d 73 2c             	lea    0x2c(%ebx),%esi
 87e3581:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e3588:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e358f:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e3596:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e359d:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e35a4:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 87e35ab:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e35b2:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e35b9:	c7 03 28 12 de 08    	movl   $0x8de1228,(%ebx)
 87e35bf:	c7 43 34 ff ff ff ff 	movl   $0xffffffff,0x34(%ebx)
 87e35c6:	c7 43 30 ff ff ff ff 	movl   $0xffffffff,0x30(%ebx)
 87e35cd:	c7 43 38 00 00 00 00 	movl   $0x0,0x38(%ebx)
 87e35d4:	c7 43 2c 28 20 de 08 	movl   $0x8de2028,0x2c(%ebx)
 87e35db:	c7 43 40 fc cc 48 09 	movl   $0x948ccfc,0x40(%ebx)
 87e35e2:	c7 43 44 fc cc 48 09 	movl   $0x948ccfc,0x44(%ebx)
 87e35e9:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e35f0:	89 73 4c             	mov    %esi,0x4c(%ebx)
 87e35f3:	89 73 48             	mov    %esi,0x48(%ebx)
 87e35f6:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e35fd:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e3604:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3608:	8d 43 20             	lea    0x20(%ebx),%eax
 87e360b:	89 04 24             	mov    %eax,(%esp)
 87e360e:	e8 1d 46 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e3613:	83 c4 20             	add    $0x20,%esp
 87e3616:	5b                   	pop    %ebx
 87e3617:	5e                   	pop    %esi
 87e3618:	5d                   	pop    %ebp
 87e3619:	c3                   	ret
 87e361a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e361d:	89 34 24             	mov    %esi,(%esp)
 87e3620:	e8 ab e6 ff ff       	call   87e1cd0 <_ZN17TiXmlAttributeSetD1Ev>
 87e3625:	89 1c 24             	mov    %ebx,(%esp)
 87e3628:	e8 43 f5 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e362d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e3630:	89 04 24             	mov    %eax,(%esp)
 87e3633:	e8 18 01 30 00       	call   8ae3750 <_Unwind_Resume>
 87e3638:	90                   	nop
 87e3639:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlElement::TiXmlElement @ 0x87e3570

/* TiXmlElement::TiXmlElement(std::string const&) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,string *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 087e360e to 087e3612 has its CatchHandler @ 087e361a */
  std::string::assign((string *)(this + 0x20),param_1);
  return;
}

```

---

## TiXmlElement_087e3640

```asm
// === 087e3640 TiXmlElement::TiXmlElement  [0x087e3640-0x87e371f] ===
 87e3640:	55                   	push   %ebp
 87e3641:	89 e5                	mov    %esp,%ebp
 87e3643:	83 ec 28             	sub    $0x28,%esp
 87e3646:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e3649:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e364c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e364f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e3652:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e3655:	8d 73 2c             	lea    0x2c(%ebx),%esi
 87e3658:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e365f:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e3666:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e366d:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e3674:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e367b:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 87e3682:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e3689:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e3690:	c7 03 28 12 de 08    	movl   $0x8de1228,(%ebx)
 87e3696:	c7 43 34 ff ff ff ff 	movl   $0xffffffff,0x34(%ebx)
 87e369d:	c7 43 30 ff ff ff ff 	movl   $0xffffffff,0x30(%ebx)
 87e36a4:	c7 43 38 00 00 00 00 	movl   $0x0,0x38(%ebx)
 87e36ab:	c7 43 2c 28 20 de 08 	movl   $0x8de2028,0x2c(%ebx)
 87e36b2:	c7 43 40 fc cc 48 09 	movl   $0x948ccfc,0x40(%ebx)
 87e36b9:	c7 43 44 fc cc 48 09 	movl   $0x948ccfc,0x44(%ebx)
 87e36c0:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e36c7:	89 73 4c             	mov    %esi,0x4c(%ebx)
 87e36ca:	89 73 48             	mov    %esi,0x48(%ebx)
 87e36cd:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e36d4:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e36db:	89 3c 24             	mov    %edi,(%esp)
 87e36de:	e8 cd ac 89 ff       	call   807e3b0 <strlen@plt>
 87e36e3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e36e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e36eb:	8d 43 20             	lea    0x20(%ebx),%eax
 87e36ee:	89 04 24             	mov    %eax,(%esp)
 87e36f1:	e8 aa 4e f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e36f6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e36f9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e36fc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e36ff:	89 ec                	mov    %ebp,%esp
 87e3701:	5d                   	pop    %ebp
 87e3702:	c3                   	ret
 87e3703:	89 c7                	mov    %eax,%edi
 87e3705:	89 34 24             	mov    %esi,(%esp)
 87e3708:	e8 c3 e5 ff ff       	call   87e1cd0 <_ZN17TiXmlAttributeSetD1Ev>
 87e370d:	89 1c 24             	mov    %ebx,(%esp)
 87e3710:	e8 5b f4 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3715:	89 3c 24             	mov    %edi,(%esp)
 87e3718:	e8 33 00 30 00       	call   8ae3750 <_Unwind_Resume>
 87e371d:	90                   	nop
 87e371e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlElement::TiXmlElement @ 0x87e3640

/* TiXmlElement::TiXmlElement(char const*) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,char *param_1)

{
  size_t sVar1;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  sVar1 = strlen(param_1);
                    /* try { // try from 087e36f1 to 087e36f5 has its CatchHandler @ 087e3703 */
  std::string::assign((string *)(this + 0x20),param_1,sVar1);
  return;
}

```

---

## TiXmlElement_087e3ee0

```asm
// === 087e3ee0 TiXmlElement::TiXmlElement  [0x087e3ee0-0x87e3faf] ===
 87e3ee0:	55                   	push   %ebp
 87e3ee1:	89 e5                	mov    %esp,%ebp
 87e3ee3:	56                   	push   %esi
 87e3ee4:	53                   	push   %ebx
 87e3ee5:	83 ec 20             	sub    $0x20,%esp
 87e3ee8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e3eeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3eee:	8d 73 2c             	lea    0x2c(%ebx),%esi
 87e3ef1:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e3ef8:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e3eff:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e3f06:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e3f0d:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e3f14:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 87e3f1b:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e3f22:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e3f29:	c7 03 28 12 de 08    	movl   $0x8de1228,(%ebx)
 87e3f2f:	c7 43 34 ff ff ff ff 	movl   $0xffffffff,0x34(%ebx)
 87e3f36:	c7 43 30 ff ff ff ff 	movl   $0xffffffff,0x30(%ebx)
 87e3f3d:	c7 43 38 00 00 00 00 	movl   $0x0,0x38(%ebx)
 87e3f44:	c7 43 2c 28 20 de 08 	movl   $0x8de2028,0x2c(%ebx)
 87e3f4b:	c7 43 40 fc cc 48 09 	movl   $0x948ccfc,0x40(%ebx)
 87e3f52:	c7 43 44 fc cc 48 09 	movl   $0x948ccfc,0x44(%ebx)
 87e3f59:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e3f60:	89 73 4c             	mov    %esi,0x4c(%ebx)
 87e3f63:	89 73 48             	mov    %esi,0x48(%ebx)
 87e3f66:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e3f6d:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e3f74:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e3f78:	89 04 24             	mov    %eax,(%esp)
 87e3f7b:	e8 a0 fc ff ff       	call   87e3c20 <_ZNK12TiXmlElement6CopyToEPS_>
 87e3f80:	83 c4 20             	add    $0x20,%esp
 87e3f83:	5b                   	pop    %ebx
 87e3f84:	5e                   	pop    %esi
 87e3f85:	5d                   	pop    %ebp
 87e3f86:	c3                   	ret
 87e3f87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e3f8a:	89 34 24             	mov    %esi,(%esp)
 87e3f8d:	e8 3e dd ff ff       	call   87e1cd0 <_ZN17TiXmlAttributeSetD1Ev>
 87e3f92:	89 1c 24             	mov    %ebx,(%esp)
 87e3f95:	e8 d6 eb ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3f9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e3f9d:	89 04 24             	mov    %eax,(%esp)
 87e3fa0:	e8 ab f7 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e3fa5:	90                   	nop
 87e3fa6:	8d 76 00             	lea    0x0(%esi),%esi
 87e3fa9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlElement::TiXmlElement @ 0x87e3ee0

/* TiXmlElement::TiXmlElement(TiXmlElement const&) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,TiXmlElement *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 087e3f7b to 087e3f7f has its CatchHandler @ 087e3f87 */
  CopyTo(param_1,this);
  return;
}

```

---

## operator=

```asm
// === 087e3e50 TiXmlElement::operator=  [0x087e3e50-0x87e3edf] ===
 87e3e50:	55                   	push   %ebp
 87e3e51:	89 e5                	mov    %esp,%ebp
 87e3e53:	56                   	push   %esi
 87e3e54:	53                   	push   %ebx
 87e3e55:	83 ec 10             	sub    $0x10,%esp
 87e3e58:	8b 75 08             	mov    0x8(%ebp),%esi
 87e3e5b:	8b 56 18             	mov    0x18(%esi),%edx
 87e3e5e:	85 d2                	test   %edx,%edx
 87e3e60:	75 08                	jne    87e3e6a <_ZN12TiXmlElementaSERKS_+0x1a>
 87e3e62:	eb 15                	jmp    87e3e79 <_ZN12TiXmlElementaSERKS_+0x29>
 87e3e64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e3e68:	89 da                	mov    %ebx,%edx
 87e3e6a:	8b 5a 28             	mov    0x28(%edx),%ebx
 87e3e6d:	8b 0a                	mov    (%edx),%ecx
 87e3e6f:	89 14 24             	mov    %edx,(%esp)
 87e3e72:	ff 51 04             	call   *0x4(%ecx)
 87e3e75:	85 db                	test   %ebx,%ebx
 87e3e77:	75 ef                	jne    87e3e68 <_ZN12TiXmlElementaSERKS_+0x18>
 87e3e79:	8b 56 4c             	mov    0x4c(%esi),%edx
 87e3e7c:	8d 5e 2c             	lea    0x2c(%esi),%ebx
 87e3e7f:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87e3e86:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87e3e8d:	39 da                	cmp    %ebx,%edx
 87e3e8f:	74 30                	je     87e3ec1 <_ZN12TiXmlElementaSERKS_+0x71>
 87e3e91:	85 d2                	test   %edx,%edx
 87e3e93:	74 2c                	je     87e3ec1 <_ZN12TiXmlElementaSERKS_+0x71>
 87e3e95:	8b 42 1c             	mov    0x1c(%edx),%eax
 87e3e98:	8b 4a 20             	mov    0x20(%edx),%ecx
 87e3e9b:	89 48 20             	mov    %ecx,0x20(%eax)
 87e3e9e:	8b 4a 20             	mov    0x20(%edx),%ecx
 87e3ea1:	c7 42 20 00 00 00 00 	movl   $0x0,0x20(%edx)
 87e3ea8:	89 41 1c             	mov    %eax,0x1c(%ecx)
 87e3eab:	8b 02                	mov    (%edx),%eax
 87e3ead:	c7 42 1c 00 00 00 00 	movl   $0x0,0x1c(%edx)
 87e3eb4:	89 14 24             	mov    %edx,(%esp)
 87e3eb7:	ff 50 04             	call   *0x4(%eax)
 87e3eba:	8b 56 4c             	mov    0x4c(%esi),%edx
 87e3ebd:	39 da                	cmp    %ebx,%edx
 87e3ebf:	75 d0                	jne    87e3e91 <_ZN12TiXmlElementaSERKS_+0x41>
 87e3ec1:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e3ec4:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e3ec8:	89 04 24             	mov    %eax,(%esp)
 87e3ecb:	e8 50 fd ff ff       	call   87e3c20 <_ZNK12TiXmlElement6CopyToEPS_>
 87e3ed0:	83 c4 10             	add    $0x10,%esp
 87e3ed3:	89 f0                	mov    %esi,%eax
 87e3ed5:	5b                   	pop    %ebx
 87e3ed6:	5e                   	pop    %esi
 87e3ed7:	5d                   	pop    %ebp
 87e3ed8:	c3                   	ret
 87e3ed9:	90                   	nop
 87e3eda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlElement::operator= @ 0x87e3e50

/* TiXmlElement::TEMPNAMEPLACEHOLDERVALUE(TiXmlElement const&) */

TiXmlElement * __thiscall TiXmlElement::operator=(TiXmlElement *this,TiXmlElement *param_1)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != this + 0x2c && (pTVar2 != (TiXmlElement *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(int *)(iVar3 + 0x20) = *(int *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(int *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(int *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlElement **)(this + 0x4c);
  }
  CopyTo(param_1,this);
  return this;
}

```

---

## ~TiXmlElement

```asm
// === 087e3490 TiXmlElement::~TiXmlElement  [0x087e3490-0x87e354f] ===
 87e3490:	55                   	push   %ebp
 87e3491:	89 e5                	mov    %esp,%ebp
 87e3493:	57                   	push   %edi
 87e3494:	56                   	push   %esi
 87e3495:	53                   	push   %ebx
 87e3496:	83 ec 2c             	sub    $0x2c,%esp
 87e3499:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e349c:	8b 47 18             	mov    0x18(%edi),%eax
 87e349f:	c7 07 28 12 de 08    	movl   $0x8de1228,(%edi)
 87e34a5:	85 c0                	test   %eax,%eax
 87e34a7:	74 23                	je     87e34cc <_ZN12TiXmlElementD1Ev+0x3c>
 87e34a9:	8d 57 2c             	lea    0x2c(%edi),%edx
 87e34ac:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e34af:	89 d6                	mov    %edx,%esi
 87e34b1:	eb 0a                	jmp    87e34bd <_ZN12TiXmlElementD1Ev+0x2d>
 87e34b3:	90                   	nop
 87e34b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e34b8:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 87e34bb:	89 d8                	mov    %ebx,%eax
 87e34bd:	8b 10                	mov    (%eax),%edx
 87e34bf:	8b 58 28             	mov    0x28(%eax),%ebx
 87e34c2:	89 04 24             	mov    %eax,(%esp)
 87e34c5:	ff 52 04             	call   *0x4(%edx)
 87e34c8:	85 db                	test   %ebx,%ebx
 87e34ca:	75 ec                	jne    87e34b8 <_ZN12TiXmlElementD1Ev+0x28>
 87e34cc:	8b 47 4c             	mov    0x4c(%edi),%eax
 87e34cf:	8d 77 2c             	lea    0x2c(%edi),%esi
 87e34d2:	c7 47 18 00 00 00 00 	movl   $0x0,0x18(%edi)
 87e34d9:	c7 47 1c 00 00 00 00 	movl   $0x0,0x1c(%edi)
 87e34e0:	39 f0                	cmp    %esi,%eax
 87e34e2:	74 30                	je     87e3514 <_ZN12TiXmlElementD1Ev+0x84>
 87e34e4:	85 c0                	test   %eax,%eax
 87e34e6:	74 2c                	je     87e3514 <_ZN12TiXmlElementD1Ev+0x84>
 87e34e8:	8b 50 1c             	mov    0x1c(%eax),%edx
 87e34eb:	8b 48 20             	mov    0x20(%eax),%ecx
 87e34ee:	89 4a 20             	mov    %ecx,0x20(%edx)
 87e34f1:	8b 48 20             	mov    0x20(%eax),%ecx
 87e34f4:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87e34fb:	89 51 1c             	mov    %edx,0x1c(%ecx)
 87e34fe:	8b 10                	mov    (%eax),%edx
 87e3500:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e3507:	89 04 24             	mov    %eax,(%esp)
 87e350a:	ff 52 04             	call   *0x4(%edx)
 87e350d:	8b 47 4c             	mov    0x4c(%edi),%eax
 87e3510:	39 f0                	cmp    %esi,%eax
 87e3512:	75 d0                	jne    87e34e4 <_ZN12TiXmlElementD1Ev+0x54>
 87e3514:	89 34 24             	mov    %esi,(%esp)
 87e3517:	e8 b4 e7 ff ff       	call   87e1cd0 <_ZN17TiXmlAttributeSetD1Ev>
 87e351c:	89 7d 08             	mov    %edi,0x8(%ebp)
 87e351f:	83 c4 2c             	add    $0x2c,%esp
 87e3522:	5b                   	pop    %ebx
 87e3523:	5e                   	pop    %esi
 87e3524:	5f                   	pop    %edi
 87e3525:	5d                   	pop    %ebp
 87e3526:	e9 45 f6 ff ff       	jmp    87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e352b:	89 c3                	mov    %eax,%ebx
 87e352d:	89 34 24             	mov    %esi,(%esp)
 87e3530:	e8 9b e7 ff ff       	call   87e1cd0 <_ZN17TiXmlAttributeSetD1Ev>
 87e3535:	89 3c 24             	mov    %edi,(%esp)
 87e3538:	e8 33 f6 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e353d:	89 1c 24             	mov    %ebx,(%esp)
 87e3540:	e8 0b 02 30 00       	call   8ae3750 <_Unwind_Resume>
 87e3545:	89 c3                	mov    %eax,%ebx
 87e3547:	eb ec                	jmp    87e3535 <_ZN12TiXmlElementD1Ev+0xa5>
 87e3549:	90                   	nop
 87e354a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlElement::~TiXmlElement @ 0x87e3490

/* TiXmlElement::~TiXmlElement() */

void __thiscall TiXmlElement::~TiXmlElement(TiXmlElement *this)

{
  int *piVar1;
  TiXmlAttributeSet *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
                    /* try { // try from 087e34c5 to 087e350c has its CatchHandler @ 087e352b */
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlAttributeSet **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != (TiXmlAttributeSet *)(this + 0x2c) && (pTVar2 != (TiXmlAttributeSet *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(undefined4 *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(undefined4 *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlAttributeSet **)(this + 0x4c);
  }
                    /* try { // try from 087e3517 to 087e351b has its CatchHandler @ 087e3545 */
  TiXmlAttributeSet::~TiXmlAttributeSet((TiXmlAttributeSet *)(this + 0x2c));
  TiXmlNode::~TiXmlNode((TiXmlNode *)this);
  return;
}

```

---

## ~TiXmlElement_087e3550

```asm
// === 087e3550 TiXmlElement::~TiXmlElement  [0x087e3550-0x87e356f] ===
 87e3550:	55                   	push   %ebp
 87e3551:	89 e5                	mov    %esp,%ebp
 87e3553:	53                   	push   %ebx
 87e3554:	83 ec 14             	sub    $0x14,%esp
 87e3557:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e355a:	89 1c 24             	mov    %ebx,(%esp)
 87e355d:	e8 2e ff ff ff       	call   87e3490 <_ZN12TiXmlElementD1Ev>
 87e3562:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e3565:	83 c4 14             	add    $0x14,%esp
 87e3568:	5b                   	pop    %ebx
 87e3569:	5d                   	pop    %ebp
 87e356a:	e9 81 0f f4 ff       	jmp    87244f0 <_ZdlPv>
 87e356f:	90                   	nop

```

```c
// TiXmlElement::~TiXmlElement @ 0x87e3550

/* TiXmlElement::~TiXmlElement() */

void __thiscall TiXmlElement::~TiXmlElement(TiXmlElement *this)

{
  ~TiXmlElement(this);
  operator_delete(this);
  return;
}

```

