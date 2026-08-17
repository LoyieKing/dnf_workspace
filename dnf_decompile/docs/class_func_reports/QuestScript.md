# QuestScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## destroy

```asm
// === 08a6130a QuestScript::destroy  [0x08a6130a-0x8a6143e] ===
 8a6130a:	55                   	push   %ebp
 8a6130b:	89 e5                	mov    %esp,%ebp
 8a6130d:	53                   	push   %ebx
 8a6130e:	83 ec 24             	sub    $0x24,%esp
 8a61311:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a61318:	e9 0d 01 00 00       	jmp    8a6142a <_ZN11QuestScript7destroyEv+0x120>
 8a6131d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61320:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61323:	83 c2 04             	add    $0x4,%edx
 8a61326:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a6132a:	85 c0                	test   %eax,%eax
 8a6132c:	74 21                	je     8a6134f <_ZN11QuestScript7destroyEv+0x45>
 8a6132e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61331:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61334:	83 c2 04             	add    $0x4,%edx
 8a61337:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 8a6133b:	85 db                	test   %ebx,%ebx
 8a6133d:	74 10                	je     8a6134f <_ZN11QuestScript7destroyEv+0x45>
 8a6133f:	89 1c 24             	mov    %ebx,(%esp)
 8a61342:	e8 99 68 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a61347:	89 1c 24             	mov    %ebx,(%esp)
 8a6134a:	e8 a1 31 cc ff       	call   87244f0 <_ZdlPv>
 8a6134f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61352:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61355:	83 c2 04             	add    $0x4,%edx
 8a61358:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8a6135f:	00 
 8a61360:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61363:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61366:	83 c2 10             	add    $0x10,%edx
 8a61369:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8a6136d:	85 c0                	test   %eax,%eax
 8a6136f:	74 21                	je     8a61392 <_ZN11QuestScript7destroyEv+0x88>
 8a61371:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61374:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61377:	83 c2 10             	add    $0x10,%edx
 8a6137a:	8b 5c 90 04          	mov    0x4(%eax,%edx,4),%ebx
 8a6137e:	85 db                	test   %ebx,%ebx
 8a61380:	74 10                	je     8a61392 <_ZN11QuestScript7destroyEv+0x88>
 8a61382:	89 1c 24             	mov    %ebx,(%esp)
 8a61385:	e8 56 68 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a6138a:	89 1c 24             	mov    %ebx,(%esp)
 8a6138d:	e8 5e 31 cc ff       	call   87244f0 <_ZdlPv>
 8a61392:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61395:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61398:	83 c2 10             	add    $0x10,%edx
 8a6139b:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 8a613a2:	00 
 8a613a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a613a6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a613a9:	83 c2 1c             	add    $0x1c,%edx
 8a613ac:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8a613af:	85 c0                	test   %eax,%eax
 8a613b1:	74 20                	je     8a613d3 <_ZN11QuestScript7destroyEv+0xc9>
 8a613b3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a613b6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a613b9:	83 c2 1c             	add    $0x1c,%edx
 8a613bc:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 8a613bf:	85 db                	test   %ebx,%ebx
 8a613c1:	74 10                	je     8a613d3 <_ZN11QuestScript7destroyEv+0xc9>
 8a613c3:	89 1c 24             	mov    %ebx,(%esp)
 8a613c6:	e8 15 68 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a613cb:	89 1c 24             	mov    %ebx,(%esp)
 8a613ce:	e8 1d 31 cc ff       	call   87244f0 <_ZdlPv>
 8a613d3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a613d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a613d9:	83 c2 1c             	add    $0x1c,%edx
 8a613dc:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 8a613e3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a613e6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a613e9:	83 c2 24             	add    $0x24,%edx
 8a613ec:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8a613f0:	85 c0                	test   %eax,%eax
 8a613f2:	74 21                	je     8a61415 <_ZN11QuestScript7destroyEv+0x10b>
 8a613f4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a613f7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a613fa:	83 c2 24             	add    $0x24,%edx
 8a613fd:	8b 5c 90 0c          	mov    0xc(%eax,%edx,4),%ebx
 8a61401:	85 db                	test   %ebx,%ebx
 8a61403:	74 10                	je     8a61415 <_ZN11QuestScript7destroyEv+0x10b>
 8a61405:	89 1c 24             	mov    %ebx,(%esp)
 8a61408:	e8 d3 67 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a6140d:	89 1c 24             	mov    %ebx,(%esp)
 8a61410:	e8 db 30 cc ff       	call   87244f0 <_ZdlPv>
 8a61415:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a61418:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6141b:	83 c2 24             	add    $0x24,%edx
 8a6141e:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8a61425:	00 
 8a61426:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a6142a:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8a6142e:	0f 9e c0             	setle  %al
 8a61431:	84 c0                	test   %al,%al
 8a61433:	0f 85 e4 fe ff ff    	jne    8a6131d <_ZN11QuestScript7destroyEv+0x13>
 8a61439:	83 c4 24             	add    $0x24,%esp
 8a6143c:	5b                   	pop    %ebx
 8a6143d:	5d                   	pop    %ebp
 8a6143e:	c3                   	ret

```

```c
// QuestScript::destroy @ 0x8a6130a

/* QuestScript::destroy() */

void __thiscall QuestScript::destroy(QuestScript *this)

{
  string *psVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 4) * 4 + 8) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 4) * 4 + 8), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 4) * 4 + 8) = 0;
    if ((*(int *)(this + (local_10 + 0x10) * 4 + 4) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x10) * 4 + 4), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x10) * 4 + 4) = 0;
    if ((*(int *)(this + (local_10 + 0x1c) * 4) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x1c) * 4), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x1c) * 4) = 0;
    if ((*(int *)(this + (local_10 + 0x24) * 4 + 0xc) != 0) &&
       (psVar1 = *(string **)(this + (local_10 + 0x24) * 4 + 0xc), psVar1 != (string *)0x0)) {
      std::string::~string(psVar1);
      operator_delete(psVar1);
    }
    *(undefined4 *)(this + (local_10 + 0x24) * 4 + 0xc) = 0;
  }
  return;
}

```

---

## getConditionMessage

```asm
// === 08a61284 QuestScript::getConditionMessage  [0x08a61284-0x8a612c5] ===
 8a61284:	55                   	push   %ebp
 8a61285:	89 e5                	mov    %esp,%ebp
 8a61287:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6128a:	8b 40 14             	mov    0x14(%eax),%eax
 8a6128d:	85 c0                	test   %eax,%eax
 8a6128f:	74 2d                	je     8a612be <_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB+0x3a>
 8a61291:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61294:	85 c0                	test   %eax,%eax
 8a61296:	78 26                	js     8a612be <_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB+0x3a>
 8a61298:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6129b:	83 f8 0a             	cmp    $0xa,%eax
 8a6129e:	7f 1e                	jg     8a612be <_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB+0x3a>
 8a612a0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a612a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612a6:	83 c2 1c             	add    $0x1c,%edx
 8a612a9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8a612ac:	85 c0                	test   %eax,%eax
 8a612ae:	74 0e                	je     8a612be <_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB+0x3a>
 8a612b0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a612b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612b6:	83 c2 1c             	add    $0x1c,%edx
 8a612b9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8a612bc:	eb 06                	jmp    8a612c4 <_ZN11QuestScript19getConditionMessageE17ENUM_CHARACTERJOB+0x40>
 8a612be:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612c1:	83 c0 0c             	add    $0xc,%eax
 8a612c4:	5d                   	pop    %ebp
 8a612c5:	c3                   	ret

```

```c
// QuestScript::getConditionMessage @ 0x8a61284

/* QuestScript::getConditionMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getConditionMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x1c) * 4) == 0)) {
    this = this + 0xc;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x1c) * 4);
  }
  return this;
}

```

---

## getName

```asm
// === 08a611fc QuestScript::getName  [0x08a611fc-0x8a6123f] ===
 8a611fc:	55                   	push   %ebp
 8a611fd:	89 e5                	mov    %esp,%ebp
 8a611ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61202:	8b 40 14             	mov    0x14(%eax),%eax
 8a61205:	85 c0                	test   %eax,%eax
 8a61207:	74 2f                	je     8a61238 <_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB+0x3c>
 8a61209:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6120c:	85 c0                	test   %eax,%eax
 8a6120e:	78 28                	js     8a61238 <_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB+0x3c>
 8a61210:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61213:	83 f8 0a             	cmp    $0xa,%eax
 8a61216:	7f 20                	jg     8a61238 <_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB+0x3c>
 8a61218:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a6121b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6121e:	83 c2 04             	add    $0x4,%edx
 8a61221:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a61225:	85 c0                	test   %eax,%eax
 8a61227:	74 0f                	je     8a61238 <_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB+0x3c>
 8a61229:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a6122c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6122f:	83 c2 04             	add    $0x4,%edx
 8a61232:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a61236:	eb 06                	jmp    8a6123e <_ZN11QuestScript7getNameE17ENUM_CHARACTERJOB+0x42>
 8a61238:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6123b:	83 c0 04             	add    $0x4,%eax
 8a6123e:	5d                   	pop    %ebp
 8a6123f:	c3                   	ret

```

```c
// QuestScript::getName @ 0x8a611fc

/* QuestScript::getName(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getName(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 4) * 4 + 8) == 0)) {
    this = this + 4;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 4) * 4 + 8);
  }
  return this;
}

```

---

## getRequestMessage

```asm
// === 08a61240 QuestScript::getRequestMessage  [0x08a61240-0x8a61283] ===
 8a61240:	55                   	push   %ebp
 8a61241:	89 e5                	mov    %esp,%ebp
 8a61243:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61246:	8b 40 14             	mov    0x14(%eax),%eax
 8a61249:	85 c0                	test   %eax,%eax
 8a6124b:	74 2f                	je     8a6127c <_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB+0x3c>
 8a6124d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61250:	85 c0                	test   %eax,%eax
 8a61252:	78 28                	js     8a6127c <_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB+0x3c>
 8a61254:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a61257:	83 f8 0a             	cmp    $0xa,%eax
 8a6125a:	7f 20                	jg     8a6127c <_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB+0x3c>
 8a6125c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a6125f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61262:	83 c2 10             	add    $0x10,%edx
 8a61265:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8a61269:	85 c0                	test   %eax,%eax
 8a6126b:	74 0f                	je     8a6127c <_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB+0x3c>
 8a6126d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a61270:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61273:	83 c2 10             	add    $0x10,%edx
 8a61276:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8a6127a:	eb 06                	jmp    8a61282 <_ZN11QuestScript17getRequestMessageE17ENUM_CHARACTERJOB+0x42>
 8a6127c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6127f:	83 c0 08             	add    $0x8,%eax
 8a61282:	5d                   	pop    %ebp
 8a61283:	c3                   	ret

```

```c
// QuestScript::getRequestMessage @ 0x8a61240

/* QuestScript::getRequestMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getRequestMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x10) * 4 + 4) == 0)) {
    this = this + 8;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x10) * 4 + 4);
  }
  return this;
}

```

---

## getSolveMessage

```asm
// === 08a612c6 QuestScript::getSolveMessage  [0x08a612c6-0x8a61309] ===
 8a612c6:	55                   	push   %ebp
 8a612c7:	89 e5                	mov    %esp,%ebp
 8a612c9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612cc:	8b 40 14             	mov    0x14(%eax),%eax
 8a612cf:	85 c0                	test   %eax,%eax
 8a612d1:	74 2f                	je     8a61302 <_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB+0x3c>
 8a612d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a612d6:	85 c0                	test   %eax,%eax
 8a612d8:	78 28                	js     8a61302 <_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB+0x3c>
 8a612da:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a612dd:	83 f8 0a             	cmp    $0xa,%eax
 8a612e0:	7f 20                	jg     8a61302 <_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB+0x3c>
 8a612e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a612e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612e8:	83 c2 24             	add    $0x24,%edx
 8a612eb:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8a612ef:	85 c0                	test   %eax,%eax
 8a612f1:	74 0f                	je     8a61302 <_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB+0x3c>
 8a612f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a612f6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a612f9:	83 c2 24             	add    $0x24,%edx
 8a612fc:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8a61300:	eb 06                	jmp    8a61308 <_ZN11QuestScript15getSolveMessageE17ENUM_CHARACTERJOB+0x42>
 8a61302:	8b 45 08             	mov    0x8(%ebp),%eax
 8a61305:	83 c0 10             	add    $0x10,%eax
 8a61308:	5d                   	pop    %ebp
 8a61309:	c3                   	ret

```

```c
// QuestScript::getSolveMessage @ 0x8a612c6

/* QuestScript::getSolveMessage(ENUM_CHARACTERJOB) */

QuestScript * __thiscall QuestScript::getSolveMessage(QuestScript *this,int param_2)

{
  if ((((*(int *)(this + 0x14) == 0) || (param_2 < 0)) || (10 < param_2)) ||
     (*(int *)(this + (param_2 + 0x24) * 4 + 0xc) == 0)) {
    this = this + 0x10;
  }
  else {
    this = *(QuestScript **)(this + (param_2 + 0x24) * 4 + 0xc);
  }
  return this;
}

```

