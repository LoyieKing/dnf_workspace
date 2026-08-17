# MySQL

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 25

---

## MySQL

```asm
// === 083f3ac8 MySQL::MySQL  [0x083f3ac8-0x83f3ae9] ===
 83f3ac8:	55                   	push   %ebp
 83f3ac9:	89 e5                	mov    %esp,%ebp
 83f3acb:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ace:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 83f3ad5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ad8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 83f3ade:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ae1:	c6 80 8a 20 04 00 00 	movb   $0x0,0x4208a(%eax)
 83f3ae8:	5d                   	pop    %ebp
 83f3ae9:	c3                   	ret

```

```c
// MySQL::MySQL @ 0x83f3ac8

/* MySQL::MySQL() */

void __thiscall MySQL::MySQL(MySQL *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  this[0x4208a] = (MySQL)0x0;
  return;
}

```

---

## blob_to_str

```asm
// === 083f452a MySQL::blob_to_str  [0x083f452a-0x83f460b] ===
 83f452a:	55                   	push   %ebp
 83f452b:	89 e5                	mov    %esp,%ebp
 83f452d:	83 ec 38             	sub    $0x38,%esp
 83f4530:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83f4534:	78 15                	js     83f454b <_ZN5MySQL11blob_to_strEiPvi+0x21>
 83f4536:	83 7d 0c 09          	cmpl   $0x9,0xc(%ebp)
 83f453a:	7f 0f                	jg     83f454b <_ZN5MySQL11blob_to_strEiPvi+0x21>
 83f453c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83f4540:	74 09                	je     83f454b <_ZN5MySQL11blob_to_strEiPvi+0x21>
 83f4542:	81 7d 14 ff 5f 00 00 	cmpl   $0x5fff,0x14(%ebp)
 83f4549:	7e 46                	jle    83f4591 <_ZN5MySQL11blob_to_strEiPvi+0x67>
 83f454b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f4552:	00 
 83f4553:	c7 44 24 08 67 02 00 	movl   $0x267,0x8(%esp)
 83f455a:	00 
 83f455b:	c7 44 24 04 20 59 c3 	movl   $0x8c35920,0x4(%esp)
 83f4562:	08 
 83f4563:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4566:	89 04 24             	mov    %eax,(%esp)
 83f4569:	e8 aa b1 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f456e:	c7 44 24 0c 67 02 00 	movl   $0x267,0xc(%esp)
 83f4575:	00 
 83f4576:	c7 44 24 08 20 59 c3 	movl   $0x8c35920,0x8(%esp)
 83f457d:	08 
 83f457e:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f4585:	08 
 83f4586:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f4589:	89 04 24             	mov    %eax,(%esp)
 83f458c:	e8 f7 b1 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f4591:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4594:	8b 55 08             	mov    0x8(%ebp),%edx
 83f4597:	69 c0 01 60 00 00    	imul   $0x6001,%eax,%eax
 83f459d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83f45a0:	05 10 60 00 00       	add    $0x6010,%eax
 83f45a5:	c6 40 0d 00          	movb   $0x0,0xd(%eax)
 83f45a9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 83f45ad:	7e 47                	jle    83f45f6 <_ZN5MySQL11blob_to_strEiPvi+0xcc>
 83f45af:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f45b2:	69 c0 01 60 00 00    	imul   $0x6001,%eax,%eax
 83f45b8:	05 10 60 00 00       	add    $0x6010,%eax
 83f45bd:	03 45 08             	add    0x8(%ebp),%eax
 83f45c0:	83 c0 0d             	add    $0xd,%eax
 83f45c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f45c6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 83f45c9:	8b 55 10             	mov    0x10(%ebp),%edx
 83f45cc:	8b 45 08             	mov    0x8(%ebp),%eax
 83f45cf:	8b 40 04             	mov    0x4(%eax),%eax
 83f45d2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 83f45d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f45da:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83f45dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f45e1:	89 04 24             	mov    %eax,(%esp)
 83f45e4:	e8 07 91 34 00       	call   873d6f0 <mysql_real_escape_string>
 83f45e9:	01 45 f4             	add    %eax,-0xc(%ebp)
 83f45ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f45ef:	c6 00 00             	movb   $0x0,(%eax)
 83f45f2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83f45f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f45f9:	69 c0 01 60 00 00    	imul   $0x6001,%eax,%eax
 83f45ff:	05 10 60 00 00       	add    $0x6010,%eax
 83f4604:	03 45 08             	add    0x8(%ebp),%eax
 83f4607:	83 c0 0d             	add    $0xd,%eax
 83f460a:	c9                   	leave
 83f460b:	c3                   	ret

```

```c
// MySQL::blob_to_str @ 0x83f452a

/* MySQL::blob_to_str(int, void*, int) */

MySQL * __thiscall MySQL::blob_to_str(MySQL *this,int param_1,void *param_2,int param_3)

{
  int iVar1;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  if ((((param_1 < 0) || (9 < param_1)) || (param_2 == (void *)0x0)) || (0x5fff < param_3)) {
    cMyTrace::cMyTrace(local_20,"char* MySQL::blob_to_str(int, void*, int)",0x267,5);
    cMyTrace::operator()(local_20,"[%s][%d]","char* MySQL::blob_to_str(int, void*, int)",0x267);
  }
  this[param_1 * 0x6001 + 0x601d] = (MySQL)0x0;
  if (0 < param_3) {
    local_10 = this + param_1 * 0x6001 + 0x601d;
    iVar1 = mysql_real_escape_string(*(undefined4 *)(this + 4),local_10,param_2,param_3);
    local_10[iVar1] = (MySQL)0x0;
  }
  return this + param_1 * 0x6001 + 0x601d;
}

```

---

## close

```asm
// === 083f3e74 MySQL::close  [0x083f3e74-0x83f3e9d] ===
 83f3e74:	55                   	push   %ebp
 83f3e75:	89 e5                	mov    %esp,%ebp
 83f3e77:	83 ec 18             	sub    $0x18,%esp
 83f3e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e7d:	8b 40 04             	mov    0x4(%eax),%eax
 83f3e80:	85 c0                	test   %eax,%eax
 83f3e82:	74 18                	je     83f3e9c <_ZN5MySQL5closeEv+0x28>
 83f3e84:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e87:	8b 40 04             	mov    0x4(%eax),%eax
 83f3e8a:	89 04 24             	mov    %eax,(%esp)
 83f3e8d:	e8 7e 46 34 00       	call   8738510 <mysql_close>
 83f3e92:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e95:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 83f3e9c:	c9                   	leave
 83f3e9d:	c3                   	ret

```

```c
// MySQL::close @ 0x83f3e74

/* MySQL::close() */

void __thiscall MySQL::close(MySQL *this)

{
  if (*(int *)(this + 4) != 0) {
    mysql_close(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

```

---

## escape_string

```asm
// === 083f48aa MySQL::escape_string  [0x083f48aa-0x83f48dd] ===
 83f48aa:	55                   	push   %ebp
 83f48ab:	89 e5                	mov    %esp,%ebp
 83f48ad:	83 ec 18             	sub    $0x18,%esp
 83f48b0:	8b 45 10             	mov    0x10(%ebp),%eax
 83f48b3:	89 04 24             	mov    %eax,(%esp)
 83f48b6:	e8 f5 9a c8 ff       	call   807e3b0 <strlen@plt>
 83f48bb:	8b 55 08             	mov    0x8(%ebp),%edx
 83f48be:	8b 52 04             	mov    0x4(%edx),%edx
 83f48c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f48c5:	8b 45 10             	mov    0x10(%ebp),%eax
 83f48c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f48cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f48cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f48d3:	89 14 24             	mov    %edx,(%esp)
 83f48d6:	e8 15 8e 34 00       	call   873d6f0 <mysql_real_escape_string>
 83f48db:	c9                   	leave
 83f48dc:	c3                   	ret
 83f48dd:	90                   	nop

```

```c
// MySQL::escape_string @ 0x83f48aa

/* MySQL::escape_string(char*, char const*) */

void __thiscall MySQL::escape_string(MySQL *this,char *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  mysql_real_escape_string(*(undefined4 *)(this + 4),param_1,param_2,sVar1);
  return;
}

```

---

## exec

```asm
// === 083f4326 MySQL::exec  [0x083f4326-0x83f44bb] ===
 83f4326:	55                   	push   %ebp
 83f4327:	89 e5                	mov    %esp,%ebp
 83f4329:	83 ec 48             	sub    $0x48,%esp
 83f432c:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f432f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 83f4332:	e8 79 87 1f 00       	call   85ecab0 <_ZN16CDnFTimerFactory14CreateDnFTimerEv>
 83f4337:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83f433a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f433d:	8b 00                	mov    (%eax),%eax
 83f433f:	8b 10                	mov    (%eax),%edx
 83f4341:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f4344:	89 04 24             	mov    %eax,(%esp)
 83f4347:	ff d2                	call   *%edx
 83f4349:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83f4350:	eb 64                	jmp    83f43b6 <_ZN5MySQL4execEb+0x90>
 83f4352:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4355:	89 04 24             	mov    %eax,(%esp)
 83f4358:	e8 eb 0f 00 00       	call   83f5348 <_ZN5MySQL10exec_queryEv>
 83f435d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83f4360:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 83f4364:	75 46                	jne    83f43ac <_ZN5MySQL4execEb+0x86>
 83f4366:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4369:	0f b6 80 8a 20 04 00 	movzbl 0x4208a(%eax),%eax
 83f4370:	84 c0                	test   %al,%al
 83f4372:	74 23                	je     83f4397 <_ZN5MySQL4execEb+0x71>
 83f4374:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f4377:	8b 00                	mov    (%eax),%eax
 83f4379:	83 c0 04             	add    $0x4,%eax
 83f437c:	8b 10                	mov    (%eax),%edx
 83f437e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f4381:	89 04 24             	mov    %eax,(%esp)
 83f4384:	ff d2                	call   *%edx
 83f4386:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4389:	8b 00                	mov    (%eax),%eax
 83f438b:	dd 5c 24 04          	fstpl  0x4(%esp)
 83f438f:	89 04 24             	mov    %eax,(%esp)
 83f4392:	e8 71 8d 1f 00       	call   85ed108 <_ZN13CQueryCounter15SetResponseTimeEd>
 83f4397:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f439a:	89 04 24             	mov    %eax,(%esp)
 83f439d:	e8 36 87 1f 00       	call   85ecad8 <_ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer>
 83f43a2:	b8 00 00 00 00       	mov    $0x0,%eax
 83f43a7:	e9 0d 01 00 00       	jmp    83f44b9 <_ZN5MySQL4execEb+0x193>
 83f43ac:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 83f43b0:	74 11                	je     83f43c3 <_ZN5MySQL4execEb+0x9d>
 83f43b2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83f43b6:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 83f43ba:	0f 9e c0             	setle  %al
 83f43bd:	84 c0                	test   %al,%al
 83f43bf:	75 91                	jne    83f4352 <_ZN5MySQL4execEb+0x2c>
 83f43c1:	eb 01                	jmp    83f43c4 <_ZN5MySQL4execEb+0x9e>
 83f43c3:	90                   	nop
 83f43c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83f43c7:	0f b6 80 8a 20 04 00 	movzbl 0x4208a(%eax),%eax
 83f43ce:	84 c0                	test   %al,%al
 83f43d0:	74 2e                	je     83f4400 <_ZN5MySQL4execEb+0xda>
 83f43d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f43d5:	8b 00                	mov    (%eax),%eax
 83f43d7:	83 c0 04             	add    $0x4,%eax
 83f43da:	8b 10                	mov    (%eax),%edx
 83f43dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f43df:	89 04 24             	mov    %eax,(%esp)
 83f43e2:	ff d2                	call   *%edx
 83f43e4:	8b 45 08             	mov    0x8(%ebp),%eax
 83f43e7:	8b 00                	mov    (%eax),%eax
 83f43e9:	dd 5c 24 04          	fstpl  0x4(%esp)
 83f43ed:	89 04 24             	mov    %eax,(%esp)
 83f43f0:	e8 13 8d 1f 00       	call   85ed108 <_ZN13CQueryCounter15SetResponseTimeEd>
 83f43f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83f43f8:	89 04 24             	mov    %eax,(%esp)
 83f43fb:	e8 d8 86 1f 00       	call   85ecad8 <_ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer>
 83f4400:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 83f4404:	75 65                	jne    83f446b <_ZN5MySQL4execEb+0x145>
 83f4406:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4409:	8b 40 04             	mov    0x4(%eax),%eax
 83f440c:	89 04 24             	mov    %eax,(%esp)
 83f440f:	e8 5c 06 34 00       	call   8734a70 <mysql_store_result>
 83f4414:	8b 55 08             	mov    0x8(%ebp),%edx
 83f4417:	89 42 08             	mov    %eax,0x8(%edx)
 83f441a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f441d:	8b 40 08             	mov    0x8(%eax),%eax
 83f4420:	85 c0                	test   %eax,%eax
 83f4422:	74 2c                	je     83f4450 <_ZN5MySQL4execEb+0x12a>
 83f4424:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4427:	8b 40 08             	mov    0x8(%eax),%eax
 83f442a:	89 04 24             	mov    %eax,(%esp)
 83f442d:	e8 de 00 34 00       	call   8734510 <mysql_num_rows>
 83f4432:	89 c2                	mov    %eax,%edx
 83f4434:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4437:	89 50 14             	mov    %edx,0x14(%eax)
 83f443a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f443d:	8b 40 08             	mov    0x8(%eax),%eax
 83f4440:	89 04 24             	mov    %eax,(%esp)
 83f4443:	e8 d8 00 34 00       	call   8734520 <mysql_num_fields>
 83f4448:	8b 55 08             	mov    0x8(%ebp),%edx
 83f444b:	89 42 18             	mov    %eax,0x18(%edx)
 83f444e:	eb 14                	jmp    83f4464 <_ZN5MySQL4execEb+0x13e>
 83f4450:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4453:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 83f445a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f445d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 83f4464:	b8 01 00 00 00       	mov    $0x1,%eax
 83f4469:	eb 4e                	jmp    83f44b9 <_ZN5MySQL4execEb+0x193>
 83f446b:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 83f446f:	74 43                	je     83f44b4 <_ZN5MySQL4execEb+0x18e>
 83f4471:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4474:	8b 80 2c 20 04 00    	mov    0x4202c(%eax),%eax
 83f447a:	8b 55 08             	mov    0x8(%ebp),%edx
 83f447d:	83 c2 1c             	add    $0x1c,%edx
 83f4480:	89 44 24 18          	mov    %eax,0x18(%esp)
 83f4484:	89 54 24 14          	mov    %edx,0x14(%esp)
 83f4488:	c7 44 24 10 94 4c c3 	movl   $0x8c34c94,0x10(%esp)
 83f448f:	08 
 83f4490:	c7 44 24 0c 44 02 00 	movl   $0x244,0xc(%esp)
 83f4497:	00 
 83f4498:	c7 44 24 08 4a 59 c3 	movl   $0x8c3594a,0x8(%esp)
 83f449f:	08 
 83f44a0:	c7 44 24 04 bd 4b c3 	movl   $0x8c34bbd,0x4(%esp)
 83f44a7:	08 
 83f44a8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83f44af:	e8 56 f7 6d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83f44b4:	b8 00 00 00 00       	mov    $0x0,%eax
 83f44b9:	c9                   	leave
 83f44ba:	c3                   	ret
 83f44bb:	90                   	nop

```

```c
// MySQL::exec @ 0x83f4326

/* MySQL::exec(bool) */

undefined4 __thiscall MySQL::exec(MySQL *this,bool param_1)

{
  CDnFTimer *pCVar1;
  undefined4 uVar2;
  longdouble lVar3;
  int local_18;
  int local_10;
  
  pCVar1 = (CDnFTimer *)CDnFTimerFactory::CreateDnFTimer();
  (*(code *)**(undefined4 **)pCVar1)(pCVar1);
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    local_18 = exec_query(this);
    if (local_18 == 1) {
      if (this[0x4208a] != (MySQL)0x0) {
        lVar3 = (longdouble)(**(code **)(*(int *)pCVar1 + 4))(pCVar1);
        CQueryCounter::SetResponseTime((double)CONCAT44(SUB84((double)lVar3,0),*(undefined4 *)this))
        ;
      }
      CDnFTimerFactory::DestroyDnFTimer(pCVar1);
      return 0;
    }
    if (local_18 == 0) break;
  }
  if (this[0x4208a] != (MySQL)0x0) {
    lVar3 = (longdouble)(**(code **)(*(int *)pCVar1 + 4))(pCVar1);
    CQueryCounter::SetResponseTime((double)CONCAT44(SUB84((double)lVar3,0),*(undefined4 *)this));
    CDnFTimerFactory::DestroyDnFTimer(pCVar1);
  }
  if (local_18 == 0) {
    uVar2 = mysql_store_result(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 8) = uVar2;
    if (*(int *)(this + 8) == 0) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    else {
      uVar2 = mysql_num_rows(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x14) = uVar2;
      uVar2 = mysql_num_fields(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x18) = uVar2;
    }
    uVar2 = 1;
  }
  else {
    if (param_1) {
      LogManager::logFormat
                (1,"DBMgr.cpp","bool MySQL::exec(bool)",0x244,
                 "Database query error. The last query(\'%s\') has been lost.(%d)",this + 0x1c,
                 *(undefined4 *)(this + 0x4202c));
    }
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## fetch

```asm
// === 083f44bc MySQL::fetch  [0x083f44bc-0x83f4513] ===
 83f44bc:	55                   	push   %ebp
 83f44bd:	89 e5                	mov    %esp,%ebp
 83f44bf:	83 ec 18             	sub    $0x18,%esp
 83f44c2:	8b 45 08             	mov    0x8(%ebp),%eax
 83f44c5:	8b 40 08             	mov    0x8(%eax),%eax
 83f44c8:	85 c0                	test   %eax,%eax
 83f44ca:	75 07                	jne    83f44d3 <_ZN5MySQL5fetchEv+0x17>
 83f44cc:	b8 00 00 00 00       	mov    $0x0,%eax
 83f44d1:	eb 3e                	jmp    83f4511 <_ZN5MySQL5fetchEv+0x55>
 83f44d3:	8b 45 08             	mov    0x8(%ebp),%eax
 83f44d6:	8b 40 08             	mov    0x8(%eax),%eax
 83f44d9:	89 04 24             	mov    %eax,(%esp)
 83f44dc:	e8 af 1f 34 00       	call   8736490 <mysql_fetch_row>
 83f44e1:	8b 55 08             	mov    0x8(%ebp),%edx
 83f44e4:	89 42 0c             	mov    %eax,0xc(%edx)
 83f44e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83f44ea:	8b 40 0c             	mov    0xc(%eax),%eax
 83f44ed:	85 c0                	test   %eax,%eax
 83f44ef:	74 1b                	je     83f450c <_ZN5MySQL5fetchEv+0x50>
 83f44f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83f44f4:	8b 40 08             	mov    0x8(%eax),%eax
 83f44f7:	89 04 24             	mov    %eax,(%esp)
 83f44fa:	e8 d1 ff 33 00       	call   87344d0 <mysql_fetch_lengths>
 83f44ff:	8b 55 08             	mov    0x8(%ebp),%edx
 83f4502:	89 42 10             	mov    %eax,0x10(%edx)
 83f4505:	b8 01 00 00 00       	mov    $0x1,%eax
 83f450a:	eb 05                	jmp    83f4511 <_ZN5MySQL5fetchEv+0x55>
 83f450c:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4511:	c9                   	leave
 83f4512:	c3                   	ret
 83f4513:	90                   	nop

```

```c
// MySQL::fetch @ 0x83f44bc

/* MySQL::fetch() */

undefined4 __thiscall MySQL::fetch(MySQL *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = mysql_fetch_row(*(undefined4 *)(this + 8));
    *(undefined4 *)(this + 0xc) = uVar1;
    if (*(int *)(this + 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = mysql_fetch_lengths(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## getAffectedRowCount

```asm
// === 083f4310 MySQL::getAffectedRowCount  [0x083f4310-0x83f4325] ===
 83f4310:	55                   	push   %ebp
 83f4311:	89 e5                	mov    %esp,%ebp
 83f4313:	83 ec 18             	sub    $0x18,%esp
 83f4316:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4319:	8b 40 04             	mov    0x4(%eax),%eax
 83f431c:	89 04 24             	mov    %eax,(%esp)
 83f431f:	e8 ec 4d 34 00       	call   8739110 <mysql_affected_rows>
 83f4324:	c9                   	leave
 83f4325:	c3                   	ret

```

```c
// MySQL::getAffectedRowCount @ 0x83f4310

/* MySQL::getAffectedRowCount() */

void __thiscall MySQL::getAffectedRowCount(MySQL *this)

{
  mysql_affected_rows(*(undefined4 *)(this + 4));
  return;
}

```

---

## getClientVersion

```asm
// === 083f4622 MySQL::getClientVersion  [0x083f4622-0x83f462f] ===
 83f4622:	55                   	push   %ebp
 83f4623:	89 e5                	mov    %esp,%ebp
 83f4625:	83 ec 08             	sub    $0x8,%esp
 83f4628:	e8 53 4a 34 00       	call   8739080 <mysql_get_client_info>
 83f462d:	c9                   	leave
 83f462e:	c3                   	ret
 83f462f:	90                   	nop

```

```c
// MySQL::getClientVersion @ 0x83f4622

/* MySQL::getClientVersion() */

void MySQL::getClientVersion(void)

{
  mysql_get_client_info();
  return;
}

```

---

## getServerVersion

```asm
// === 083f460c MySQL::getServerVersion  [0x083f460c-0x83f4621] ===
 83f460c:	55                   	push   %ebp
 83f460d:	89 e5                	mov    %esp,%ebp
 83f460f:	83 ec 18             	sub    $0x18,%esp
 83f4612:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4615:	8b 40 04             	mov    0x4(%eax),%eax
 83f4618:	89 04 24             	mov    %eax,(%esp)
 83f461b:	e8 30 4a 34 00       	call   8739050 <mysql_get_server_info>
 83f4620:	c9                   	leave
 83f4621:	c3                   	ret

```

```c
// MySQL::getServerVersion @ 0x83f460c

/* MySQL::getServerVersion() */

void __thiscall MySQL::getServerVersion(MySQL *this)

{
  mysql_get_server_info(*(undefined4 *)(this + 4));
  return;
}

```

---

## init

```asm
// === 083f3ce4 MySQL::init  [0x083f3ce4-0x83f3e73] ===
 83f3ce4:	55                   	push   %ebp
 83f3ce5:	89 e5                	mov    %esp,%ebp
 83f3ce7:	83 ec 28             	sub    $0x28,%esp
 83f3cea:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ced:	89 04 24             	mov    %eax,(%esp)
 83f3cf0:	e8 21 ff ff ff       	call   83f3c16 <_ZN5MySQL14init_db_handleEv>
 83f3cf5:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f3cf8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f3cfc:	83 f0 01             	xor    $0x1,%eax
 83f3cff:	84 c0                	test   %al,%al
 83f3d01:	74 0a                	je     83f3d0d <_ZN5MySQL4initEv+0x29>
 83f3d03:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3d08:	e9 64 01 00 00       	jmp    83f3e71 <_ZN5MySQL4initEv+0x18d>
 83f3d0d:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3d10:	89 04 24             	mov    %eax,(%esp)
 83f3d13:	e8 e6 fd ff ff       	call   83f3afe <_ZN5MySQL19set_compress_optionEv>
 83f3d18:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f3d1b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f3d1f:	83 f0 01             	xor    $0x1,%eax
 83f3d22:	84 c0                	test   %al,%al
 83f3d24:	74 0a                	je     83f3d30 <_ZN5MySQL4initEv+0x4c>
 83f3d26:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3d2b:	e9 41 01 00 00       	jmp    83f3e71 <_ZN5MySQL4initEv+0x18d>
 83f3d30:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3d33:	89 04 24             	mov    %eax,(%esp)
 83f3d36:	e8 45 fe ff ff       	call   83f3b80 <_ZN5MySQL27set_read_default_grp_optionEv>
 83f3d3b:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f3d3e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f3d42:	83 f0 01             	xor    $0x1,%eax
 83f3d45:	84 c0                	test   %al,%al
 83f3d47:	74 0a                	je     83f3d53 <_ZN5MySQL4initEv+0x6f>
 83f3d49:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3d4e:	e9 1e 01 00 00       	jmp    83f3e71 <_ZN5MySQL4initEv+0x18d>
 83f3d53:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3d56:	89 04 24             	mov    %eax,(%esp)
 83f3d59:	e8 a4 fe ff ff       	call   83f3c02 <_ZN5MySQL23set_charset_name_optionEv>
 83f3d5e:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f3d61:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f3d65:	83 f0 01             	xor    $0x1,%eax
 83f3d68:	84 c0                	test   %al,%al
 83f3d6a:	74 0a                	je     83f3d76 <_ZN5MySQL4initEv+0x92>
 83f3d6c:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3d71:	e9 fb 00 00 00       	jmp    83f3e71 <_ZN5MySQL4initEv+0x18d>
 83f3d76:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3d79:	89 04 24             	mov    %eax,(%esp)
 83f3d7c:	e8 8b fe ff ff       	call   83f3c0c <_ZN5MySQL20set_reconnect_optionEv>
 83f3d81:	88 45 f7             	mov    %al,-0x9(%ebp)
 83f3d84:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83f3d88:	83 f0 01             	xor    $0x1,%eax
 83f3d8b:	84 c0                	test   %al,%al
 83f3d8d:	74 0a                	je     83f3d99 <_ZN5MySQL4initEv+0xb5>
 83f3d8f:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3d94:	e9 d8 00 00 00       	jmp    83f3e71 <_ZN5MySQL4initEv+0x18d>
 83f3d99:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3d9c:	83 c0 1c             	add    $0x1c,%eax
 83f3d9f:	c7 44 24 08 01 60 00 	movl   $0x6001,0x8(%esp)
 83f3da6:	00 
 83f3da7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f3dae:	00 
 83f3daf:	89 04 24             	mov    %eax,(%esp)
 83f3db2:	e8 09 9f c8 ff       	call   807dcc0 <memset@plt>
 83f3db7:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3dba:	c7 80 28 20 04 00 00 	movl   $0x0,0x42028(%eax)
 83f3dc1:	00 00 00 
 83f3dc4:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3dc7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 83f3dce:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3dd1:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 83f3dd8:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ddb:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 83f3de2:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3de5:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 83f3dec:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3def:	05 30 20 04 00       	add    $0x42030,%eax
 83f3df4:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 83f3dfb:	00 
 83f3dfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f3e03:	00 
 83f3e04:	89 04 24             	mov    %eax,(%esp)
 83f3e07:	e8 b4 9e c8 ff       	call   807dcc0 <memset@plt>
 83f3e0c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e0f:	05 44 20 04 00       	add    $0x42044,%eax
 83f3e14:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 83f3e1b:	00 
 83f3e1c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f3e23:	00 
 83f3e24:	89 04 24             	mov    %eax,(%esp)
 83f3e27:	e8 94 9e c8 ff       	call   807dcc0 <memset@plt>
 83f3e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e2f:	05 6c 20 04 00       	add    $0x4206c,%eax
 83f3e34:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 83f3e3b:	00 
 83f3e3c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f3e43:	00 
 83f3e44:	89 04 24             	mov    %eax,(%esp)
 83f3e47:	e8 74 9e c8 ff       	call   807dcc0 <memset@plt>
 83f3e4c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3e4f:	05 58 20 04 00       	add    $0x42058,%eax
 83f3e54:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 83f3e5b:	00 
 83f3e5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f3e63:	00 
 83f3e64:	89 04 24             	mov    %eax,(%esp)
 83f3e67:	e8 54 9e c8 ff       	call   807dcc0 <memset@plt>
 83f3e6c:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3e71:	c9                   	leave
 83f3e72:	c3                   	ret
 83f3e73:	90                   	nop

```

```c
// MySQL::init @ 0x83f3ce4

/* MySQL::init() */

undefined4 __thiscall MySQL::init(MySQL *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = init_db_handle(this);
  if (cVar1 == '\x01') {
    cVar1 = set_compress_option(this);
    if (cVar1 == '\x01') {
      cVar1 = set_read_default_grp_option(this);
      if (cVar1 == '\x01') {
        cVar1 = set_charset_name_option();
        if (cVar1 == '\x01') {
          cVar1 = set_reconnect_option();
          if (cVar1 == '\x01') {
            memset(this + 0x1c,0,0x6001);
            *(undefined4 *)(this + 0x42028) = 0;
            *(undefined4 *)(this + 8) = 0;
            *(undefined4 *)(this + 0x10) = 0;
            *(undefined4 *)(this + 0x14) = 0;
            *(undefined4 *)(this + 0x18) = 0;
            memset(this + 0x42030,0,0x10);
            memset(this + 0x42044,0,0x14);
            memset(this + 0x4206c,0,0x1e);
            memset(this + 0x42058,0,0x14);
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## init_db_handle

```asm
// === 083f3c16 MySQL::init_db_handle  [0x083f3c16-0x83f3ce3] ===
 83f3c16:	55                   	push   %ebp
 83f3c17:	89 e5                	mov    %esp,%ebp
 83f3c19:	83 ec 38             	sub    $0x38,%esp
 83f3c1c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3c1f:	8b 40 04             	mov    0x4(%eax),%eax
 83f3c22:	85 c0                	test   %eax,%eax
 83f3c24:	74 4d                	je     83f3c73 <_ZN5MySQL14init_db_handleEv+0x5d>
 83f3c26:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f3c2d:	00 
 83f3c2e:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 83f3c35:	00 
 83f3c36:	c7 44 24 04 2d 5a c3 	movl   $0x8c35a2d,0x4(%esp)
 83f3c3d:	08 
 83f3c3e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f3c41:	89 04 24             	mov    %eax,(%esp)
 83f3c44:	e8 cf ba 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f3c49:	c7 44 24 0c 81 00 00 	movl   $0x81,0xc(%esp)
 83f3c50:	00 
 83f3c51:	c7 44 24 08 2d 5a c3 	movl   $0x8c35a2d,0x8(%esp)
 83f3c58:	08 
 83f3c59:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f3c60:	08 
 83f3c61:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f3c64:	89 04 24             	mov    %eax,(%esp)
 83f3c67:	e8 1c bb 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f3c6c:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3c71:	eb 6e                	jmp    83f3ce1 <_ZN5MySQL14init_db_handleEv+0xcb>
 83f3c73:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 83f3c7a:	e8 01 19 34 00       	call   8735580 <mysql_init>
 83f3c7f:	8b 55 08             	mov    0x8(%ebp),%edx
 83f3c82:	89 42 04             	mov    %eax,0x4(%edx)
 83f3c85:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3c88:	8b 40 04             	mov    0x4(%eax),%eax
 83f3c8b:	85 c0                	test   %eax,%eax
 83f3c8d:	75 4d                	jne    83f3cdc <_ZN5MySQL14init_db_handleEv+0xc6>
 83f3c8f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f3c96:	00 
 83f3c97:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 83f3c9e:	00 
 83f3c9f:	c7 44 24 04 2d 5a c3 	movl   $0x8c35a2d,0x4(%esp)
 83f3ca6:	08 
 83f3ca7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3caa:	89 04 24             	mov    %eax,(%esp)
 83f3cad:	e8 66 ba 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f3cb2:	c7 44 24 0c 8c 00 00 	movl   $0x8c,0xc(%esp)
 83f3cb9:	00 
 83f3cba:	c7 44 24 08 2d 5a c3 	movl   $0x8c35a2d,0x8(%esp)
 83f3cc1:	08 
 83f3cc2:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f3cc9:	08 
 83f3cca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3ccd:	89 04 24             	mov    %eax,(%esp)
 83f3cd0:	e8 b3 ba 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f3cd5:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3cda:	eb 05                	jmp    83f3ce1 <_ZN5MySQL14init_db_handleEv+0xcb>
 83f3cdc:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3ce1:	c9                   	leave
 83f3ce2:	c3                   	ret
 83f3ce3:	90                   	nop

```

```c
// MySQL::init_db_handle @ 0x83f3c16

/* MySQL::init_db_handle() */

undefined4 __thiscall MySQL::init_db_handle(MySQL *this)

{
  undefined4 uVar1;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 4) == 0) {
    uVar1 = mysql_init(0);
    *(undefined4 *)(this + 4) = uVar1;
    if (*(int *)(this + 4) == 0) {
      cMyTrace::cMyTrace(local_1c,"bool MySQL::init_db_handle()",0x8c,5);
      cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::init_db_handle()",0x8c);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    cMyTrace::cMyTrace(local_2c,"bool MySQL::init_db_handle()",0x81,5);
    cMyTrace::operator()(local_2c,"[%s][%d]","bool MySQL::init_db_handle()",0x81);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## insert

```asm
// === 083f46ae MySQL::insert  [0x083f46ae-0x83f4717] ===
 83f46ae:	55                   	push   %ebp
 83f46af:	89 e5                	mov    %esp,%ebp
 83f46b1:	83 ec 28             	sub    $0x28,%esp
 83f46b4:	8d 45 10             	lea    0x10(%ebp),%eax
 83f46b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f46ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f46bd:	8b 55 08             	mov    0x8(%ebp),%edx
 83f46c0:	83 c2 1c             	add    $0x1c,%edx
 83f46c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f46c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f46ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f46ce:	89 14 24             	mov    %edx,(%esp)
 83f46d1:	e8 fa 90 c8 ff       	call   807d7d0 <vsprintf@plt>
 83f46d6:	8b 45 08             	mov    0x8(%ebp),%eax
 83f46d9:	89 04 24             	mov    %eax,(%esp)
 83f46dc:	e8 a1 00 00 00       	call   83f4782 <_ZN5MySQL9set_queryEv>
 83f46e1:	83 f0 01             	xor    $0x1,%eax
 83f46e4:	84 c0                	test   %al,%al
 83f46e6:	74 07                	je     83f46ef <_ZN5MySQL6insertEPKcz+0x41>
 83f46e8:	b8 03 00 00 00       	mov    $0x3,%eax
 83f46ed:	eb 26                	jmp    83f4715 <_ZN5MySQL6insertEPKcz+0x67>
 83f46ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f46f6:	00 
 83f46f7:	8b 45 08             	mov    0x8(%ebp),%eax
 83f46fa:	89 04 24             	mov    %eax,(%esp)
 83f46fd:	e8 24 fc ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f4702:	83 f0 01             	xor    $0x1,%eax
 83f4705:	84 c0                	test   %al,%al
 83f4707:	74 07                	je     83f4710 <_ZN5MySQL6insertEPKcz+0x62>
 83f4709:	b8 05 00 00 00       	mov    $0x5,%eax
 83f470e:	eb 05                	jmp    83f4715 <_ZN5MySQL6insertEPKcz+0x67>
 83f4710:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4715:	c9                   	leave
 83f4716:	c3                   	ret
 83f4717:	90                   	nop

```

```c
// MySQL::insert @ 0x83f46ae

/* MySQL::insert(char const*, ...) */

undefined4 __thiscall MySQL::insert(MySQL *this,char *param_1,...)

{
  char cVar1;
  undefined4 uVar2;
  
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  cVar1 = set_query(this);
  if (cVar1 == '\x01') {
    cVar1 = exec(this,true);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

```

---

## open

```asm
// === 083f3e9e MySQL::open  [0x083f3e9e-0x83f4023] ===
 83f3e9e:	55                   	push   %ebp
 83f3e9f:	89 e5                	mov    %esp,%ebp
 83f3ea1:	53                   	push   %ebx
 83f3ea2:	83 ec 44             	sub    $0x44,%esp
 83f3ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ea8:	8d 90 6c 20 04 00    	lea    0x4206c(%eax),%edx
 83f3eae:	8b 45 10             	mov    0x10(%ebp),%eax
 83f3eb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f3eb5:	89 14 24             	mov    %edx,(%esp)
 83f3eb8:	e8 33 a0 c8 ff       	call   807def0 <strcpy@plt>
 83f3ebd:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ec0:	8d 90 30 20 04 00    	lea    0x42030(%eax),%edx
 83f3ec6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f3ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f3ecd:	89 14 24             	mov    %edx,(%esp)
 83f3ed0:	e8 1b a0 c8 ff       	call   807def0 <strcpy@plt>
 83f3ed5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ed8:	8d 90 44 20 04 00    	lea    0x42044(%eax),%edx
 83f3ede:	8b 45 14             	mov    0x14(%ebp),%eax
 83f3ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f3ee5:	89 14 24             	mov    %edx,(%esp)
 83f3ee8:	e8 03 a0 c8 ff       	call   807def0 <strcpy@plt>
 83f3eed:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3ef0:	8d 90 58 20 04 00    	lea    0x42058(%eax),%edx
 83f3ef6:	8b 45 18             	mov    0x18(%ebp),%eax
 83f3ef9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f3efd:	89 14 24             	mov    %edx,(%esp)
 83f3f00:	e8 eb 9f c8 ff       	call   807def0 <strcpy@plt>
 83f3f05:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3f08:	8b 40 04             	mov    0x4(%eax),%eax
 83f3f0b:	c7 44 24 1c 00 04 00 	movl   $0x400,0x1c(%esp)
 83f3f12:	00 
 83f3f13:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 83f3f1a:	00 
 83f3f1b:	c7 44 24 14 ea 0c 00 	movl   $0xcea,0x14(%esp)
 83f3f22:	00 
 83f3f23:	8b 55 10             	mov    0x10(%ebp),%edx
 83f3f26:	89 54 24 10          	mov    %edx,0x10(%esp)
 83f3f2a:	8b 55 18             	mov    0x18(%ebp),%edx
 83f3f2d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83f3f31:	8b 55 14             	mov    0x14(%ebp),%edx
 83f3f34:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f3f38:	8b 55 0c             	mov    0xc(%ebp),%edx
 83f3f3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f3f3f:	89 04 24             	mov    %eax,(%esp)
 83f3f42:	e8 c9 2f 34 00       	call   8736f10 <mysql_real_connect>
 83f3f47:	85 c0                	test   %eax,%eax
 83f3f49:	0f 94 c0             	sete   %al
 83f3f4c:	84 c0                	test   %al,%al
 83f3f4e:	0f 84 c4 00 00 00    	je     83f4018 <_ZN5MySQL4openEPcS0_S0_S0_+0x17a>
 83f3f54:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3f57:	8b 40 04             	mov    0x4(%eax),%eax
 83f3f5a:	89 04 24             	mov    %eax,(%esp)
 83f3f5d:	e8 ce 05 34 00       	call   8734530 <mysql_errno>
 83f3f62:	89 c3                	mov    %eax,%ebx
 83f3f64:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 83f3f6b:	00 
 83f3f6c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 83f3f73:	00 
 83f3f74:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 83f3f7b:	00 
 83f3f7c:	c7 44 24 08 0a 01 00 	movl   $0x10a,0x8(%esp)
 83f3f83:	00 
 83f3f84:	c7 44 24 04 00 5a c3 	movl   $0x8c35a00,0x4(%esp)
 83f3f8b:	08 
 83f3f8c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f3f8f:	89 04 24             	mov    %eax,(%esp)
 83f3f92:	e8 af b7 15 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 83f3f97:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 83f3f9b:	8b 45 14             	mov    0x14(%ebp),%eax
 83f3f9e:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f3fa2:	8b 45 10             	mov    0x10(%ebp),%eax
 83f3fa5:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f3fa9:	c7 44 24 0c ea 0c 00 	movl   $0xcea,0xc(%esp)
 83f3fb0:	00 
 83f3fb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f3fb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f3fb8:	c7 44 24 04 30 4b c3 	movl   $0x8c34b30,0x4(%esp)
 83f3fbf:	08 
 83f3fc0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f3fc3:	89 04 24             	mov    %eax,(%esp)
 83f3fc6:	e8 bd b7 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f3fcb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f3fd2:	00 
 83f3fd3:	c7 44 24 08 0e 01 00 	movl   $0x10e,0x8(%esp)
 83f3fda:	00 
 83f3fdb:	c7 44 24 04 00 5a c3 	movl   $0x8c35a00,0x4(%esp)
 83f3fe2:	08 
 83f3fe3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3fe6:	89 04 24             	mov    %eax,(%esp)
 83f3fe9:	e8 2a b7 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f3fee:	c7 44 24 0c 0e 01 00 	movl   $0x10e,0xc(%esp)
 83f3ff5:	00 
 83f3ff6:	c7 44 24 08 00 5a c3 	movl   $0x8c35a00,0x8(%esp)
 83f3ffd:	08 
 83f3ffe:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f4005:	08 
 83f4006:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4009:	89 04 24             	mov    %eax,(%esp)
 83f400c:	e8 77 b7 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f4011:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4016:	eb 05                	jmp    83f401d <_ZN5MySQL4openEPcS0_S0_S0_+0x17f>
 83f4018:	b8 01 00 00 00       	mov    $0x1,%eax
 83f401d:	83 c4 44             	add    $0x44,%esp
 83f4020:	5b                   	pop    %ebx
 83f4021:	5d                   	pop    %ebp
 83f4022:	c3                   	ret
 83f4023:	90                   	nop

```

```c
// MySQL::open @ 0x83f3e9e

/* MySQL::open(char*, char*, char*, char*) */

bool __thiscall MySQL::open(MySQL *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  strcpy((char *)(this + 0x4206c),param_2);
  strcpy((char *)(this + 0x42030),param_1);
  strcpy((char *)(this + 0x42044),param_3);
  strcpy((char *)(this + 0x42058),param_4);
  iVar1 = mysql_real_connect(*(undefined4 *)(this + 4),param_1,param_3,param_4,param_2,0xcea,0,0x400
                            );
  if (iVar1 == 0) {
    uVar2 = mysql_errno(*(undefined4 *)(this + 4));
    cMyTrace::cMyTrace(local_2c,"bool MySQL::open(char*, char*, char*, char*)",0x10a,9,true,true);
    cMyTrace::operator()
              (local_2c,"\n\t- mysql_real_connect(ip:%s, port:%d, name:%s, id:%s error=\'%d\') fail"
               ,param_1,0xcea,param_2,param_3,uVar2);
    cMyTrace::cMyTrace(local_1c,"bool MySQL::open(char*, char*, char*, char*)",0x10e,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::open(char*, char*, char*, char*)",0x10e);
  }
  return iVar1 != 0;
}

```

---

## open_083f4024

```asm
// === 083f4024 MySQL::open  [0x083f4024-0x83f41bf] ===
 83f4024:	55                   	push   %ebp
 83f4025:	89 e5                	mov    %esp,%ebp
 83f4027:	53                   	push   %ebx
 83f4028:	83 ec 44             	sub    $0x44,%esp
 83f402b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83f402f:	75 07                	jne    83f4038 <_ZN5MySQL4openEPcjS0_S0_S0_+0x14>
 83f4031:	c7 45 10 ea 0c 00 00 	movl   $0xcea,0x10(%ebp)
 83f4038:	8b 45 08             	mov    0x8(%ebp),%eax
 83f403b:	8d 90 6c 20 04 00    	lea    0x4206c(%eax),%edx
 83f4041:	8b 45 14             	mov    0x14(%ebp),%eax
 83f4044:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4048:	89 14 24             	mov    %edx,(%esp)
 83f404b:	e8 a0 9e c8 ff       	call   807def0 <strcpy@plt>
 83f4050:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4053:	8d 90 30 20 04 00    	lea    0x42030(%eax),%edx
 83f4059:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f405c:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4060:	89 14 24             	mov    %edx,(%esp)
 83f4063:	e8 88 9e c8 ff       	call   807def0 <strcpy@plt>
 83f4068:	8b 45 08             	mov    0x8(%ebp),%eax
 83f406b:	8b 55 10             	mov    0x10(%ebp),%edx
 83f406e:	89 90 40 20 04 00    	mov    %edx,0x42040(%eax)
 83f4074:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4077:	8d 90 44 20 04 00    	lea    0x42044(%eax),%edx
 83f407d:	8b 45 18             	mov    0x18(%ebp),%eax
 83f4080:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4084:	89 14 24             	mov    %edx,(%esp)
 83f4087:	e8 64 9e c8 ff       	call   807def0 <strcpy@plt>
 83f408c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f408f:	8d 90 58 20 04 00    	lea    0x42058(%eax),%edx
 83f4095:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83f4098:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f409c:	89 14 24             	mov    %edx,(%esp)
 83f409f:	e8 4c 9e c8 ff       	call   807def0 <strcpy@plt>
 83f40a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83f40a7:	8b 40 04             	mov    0x4(%eax),%eax
 83f40aa:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 83f40b1:	00 
 83f40b2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 83f40b9:	00 
 83f40ba:	8b 55 10             	mov    0x10(%ebp),%edx
 83f40bd:	89 54 24 14          	mov    %edx,0x14(%esp)
 83f40c1:	8b 55 14             	mov    0x14(%ebp),%edx
 83f40c4:	89 54 24 10          	mov    %edx,0x10(%esp)
 83f40c8:	8b 55 1c             	mov    0x1c(%ebp),%edx
 83f40cb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83f40cf:	8b 55 18             	mov    0x18(%ebp),%edx
 83f40d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 83f40d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 83f40d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f40dd:	89 04 24             	mov    %eax,(%esp)
 83f40e0:	e8 2b 2e 34 00       	call   8736f10 <mysql_real_connect>
 83f40e5:	85 c0                	test   %eax,%eax
 83f40e7:	0f 94 c0             	sete   %al
 83f40ea:	84 c0                	test   %al,%al
 83f40ec:	0f 84 c3 00 00 00    	je     83f41b5 <_ZN5MySQL4openEPcjS0_S0_S0_+0x191>
 83f40f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83f40f5:	8b 40 04             	mov    0x4(%eax),%eax
 83f40f8:	89 04 24             	mov    %eax,(%esp)
 83f40fb:	e8 30 04 34 00       	call   8734530 <mysql_errno>
 83f4100:	89 c3                	mov    %eax,%ebx
 83f4102:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 83f4109:	00 
 83f410a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 83f4111:	00 
 83f4112:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 83f4119:	00 
 83f411a:	c7 44 24 08 38 01 00 	movl   $0x138,0x8(%esp)
 83f4121:	00 
 83f4122:	c7 44 24 04 c0 59 c3 	movl   $0x8c359c0,0x4(%esp)
 83f4129:	08 
 83f412a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f412d:	89 04 24             	mov    %eax,(%esp)
 83f4130:	e8 11 b6 15 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 83f4135:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 83f4139:	8b 45 18             	mov    0x18(%ebp),%eax
 83f413c:	89 44 24 14          	mov    %eax,0x14(%esp)
 83f4140:	8b 45 14             	mov    0x14(%ebp),%eax
 83f4143:	89 44 24 10          	mov    %eax,0x10(%esp)
 83f4147:	8b 45 10             	mov    0x10(%ebp),%eax
 83f414a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83f414e:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4151:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4155:	c7 44 24 04 30 4b c3 	movl   $0x8c34b30,0x4(%esp)
 83f415c:	08 
 83f415d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83f4160:	89 04 24             	mov    %eax,(%esp)
 83f4163:	e8 20 b6 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f4168:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f416f:	00 
 83f4170:	c7 44 24 08 3c 01 00 	movl   $0x13c,0x8(%esp)
 83f4177:	00 
 83f4178:	c7 44 24 04 c0 59 c3 	movl   $0x8c359c0,0x4(%esp)
 83f417f:	08 
 83f4180:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f4183:	89 04 24             	mov    %eax,(%esp)
 83f4186:	e8 8d b5 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f418b:	c7 44 24 0c 3c 01 00 	movl   $0x13c,0xc(%esp)
 83f4192:	00 
 83f4193:	c7 44 24 08 c0 59 c3 	movl   $0x8c359c0,0x8(%esp)
 83f419a:	08 
 83f419b:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f41a2:	08 
 83f41a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f41a6:	89 04 24             	mov    %eax,(%esp)
 83f41a9:	e8 da b5 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f41ae:	b8 00 00 00 00       	mov    $0x0,%eax
 83f41b3:	eb 05                	jmp    83f41ba <_ZN5MySQL4openEPcjS0_S0_S0_+0x196>
 83f41b5:	b8 01 00 00 00       	mov    $0x1,%eax
 83f41ba:	83 c4 44             	add    $0x44,%esp
 83f41bd:	5b                   	pop    %ebx
 83f41be:	5d                   	pop    %ebp
 83f41bf:	c3                   	ret

```

```c
// MySQL::open @ 0x83f4024

/* MySQL::open(char*, unsigned int, char*, char*, char*) */

bool __thiscall
MySQL::open(MySQL *this,char *param_1,uint param_2,char *param_3,char *param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  if (param_2 == 0) {
    param_2 = 0xcea;
  }
  strcpy((char *)(this + 0x4206c),param_3);
  strcpy((char *)(this + 0x42030),param_1);
  *(uint *)(this + 0x42040) = param_2;
  strcpy((char *)(this + 0x42044),param_4);
  strcpy((char *)(this + 0x42058),param_5);
  iVar1 = mysql_real_connect(*(undefined4 *)(this + 4),param_1,param_4,param_5,param_3,param_2,0,0);
  if (iVar1 == 0) {
    uVar2 = mysql_errno(*(undefined4 *)(this + 4));
    cMyTrace::cMyTrace(local_2c,"bool MySQL::open(char*, unsigned int, char*, char*, char*)",0x138,9
                       ,true,true);
    cMyTrace::operator()
              (local_2c,"\n\t- mysql_real_connect(ip:%s, port:%d, name:%s, id:%s error=\'%d\') fail"
               ,param_1,param_2,param_3,param_4,uVar2);
    cMyTrace::cMyTrace(local_1c,"bool MySQL::open(char*, unsigned int, char*, char*, char*)",0x13c,5
                      );
    cMyTrace::operator()
              (local_1c,"[%s][%d]","bool MySQL::open(char*, unsigned int, char*, char*, char*)",
               0x13c);
  }
  return iVar1 != 0;
}

```

---

## ping

```asm
// === 083f4514 MySQL::ping  [0x083f4514-0x83f4529] ===
 83f4514:	55                   	push   %ebp
 83f4515:	89 e5                	mov    %esp,%ebp
 83f4517:	83 ec 18             	sub    $0x18,%esp
 83f451a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f451d:	8b 40 04             	mov    0x4(%eax),%eax
 83f4520:	89 04 24             	mov    %eax,(%esp)
 83f4523:	e8 c8 4a 34 00       	call   8738ff0 <mysql_ping>
 83f4528:	c9                   	leave
 83f4529:	c3                   	ret

```

```c
// MySQL::ping @ 0x83f4514

/* MySQL::ping() */

void __thiscall MySQL::ping(MySQL *this)

{
  mysql_ping(*(undefined4 *)(this + 4));
  return;
}

```

---

## select

```asm
// === 083f4630 MySQL::select  [0x083f4630-0x83f4677] ===
 83f4630:	55                   	push   %ebp
 83f4631:	89 e5                	mov    %esp,%ebp
 83f4633:	83 ec 18             	sub    $0x18,%esp
 83f4636:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4639:	89 04 24             	mov    %eax,(%esp)
 83f463c:	e8 41 01 00 00       	call   83f4782 <_ZN5MySQL9set_queryEv>
 83f4641:	83 f0 01             	xor    $0x1,%eax
 83f4644:	84 c0                	test   %al,%al
 83f4646:	74 07                	je     83f464f <_ZN5MySQL6selectEv+0x1f>
 83f4648:	b8 03 00 00 00       	mov    $0x3,%eax
 83f464d:	eb 26                	jmp    83f4675 <_ZN5MySQL6selectEv+0x45>
 83f464f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f4656:	00 
 83f4657:	8b 45 08             	mov    0x8(%ebp),%eax
 83f465a:	89 04 24             	mov    %eax,(%esp)
 83f465d:	e8 c4 fc ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f4662:	83 f0 01             	xor    $0x1,%eax
 83f4665:	84 c0                	test   %al,%al
 83f4667:	74 07                	je     83f4670 <_ZN5MySQL6selectEv+0x40>
 83f4669:	b8 01 00 00 00       	mov    $0x1,%eax
 83f466e:	eb 05                	jmp    83f4675 <_ZN5MySQL6selectEv+0x45>
 83f4670:	b8 00 00 00 00       	mov    $0x0,%eax
 83f4675:	c9                   	leave
 83f4676:	c3                   	ret
 83f4677:	90                   	nop

```

```c
// MySQL::select @ 0x83f4630

/* MySQL::select() */

undefined4 __thiscall MySQL::select(MySQL *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = set_query(this);
  if (cVar1 == '\x01') {
    cVar1 = exec(this,true);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

```

---

## select_083f4678

```asm
// === 083f4678 MySQL::select  [0x083f4678-0x83f46ad] ===
 83f4678:	55                   	push   %ebp
 83f4679:	89 e5                	mov    %esp,%ebp
 83f467b:	83 ec 28             	sub    $0x28,%esp
 83f467e:	8d 45 10             	lea    0x10(%ebp),%eax
 83f4681:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f4684:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f4687:	8b 55 08             	mov    0x8(%ebp),%edx
 83f468a:	83 c2 1c             	add    $0x1c,%edx
 83f468d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4691:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4694:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4698:	89 14 24             	mov    %edx,(%esp)
 83f469b:	e8 30 91 c8 ff       	call   807d7d0 <vsprintf@plt>
 83f46a0:	8b 45 08             	mov    0x8(%ebp),%eax
 83f46a3:	89 04 24             	mov    %eax,(%esp)
 83f46a6:	e8 85 ff ff ff       	call   83f4630 <_ZN5MySQL6selectEv>
 83f46ab:	c9                   	leave
 83f46ac:	c3                   	ret
 83f46ad:	90                   	nop

```

```c
// MySQL::select @ 0x83f4678

/* MySQL::select(char const*, ...) */

void __thiscall MySQL::select(MySQL *this,char *param_1,...)

{
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  select(this);
  return;
}

```

---

## set_charset_name_option

```asm
// === 083f3c02 MySQL::set_charset_name_option  [0x083f3c02-0x83f3c0b] ===
 83f3c02:	55                   	push   %ebp
 83f3c03:	89 e5                	mov    %esp,%ebp
 83f3c05:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3c0a:	5d                   	pop    %ebp
 83f3c0b:	c3                   	ret

```

```c
// MySQL::set_charset_name_option @ 0x83f3c02

/* MySQL::set_charset_name_option() */

undefined4 MySQL::set_charset_name_option(void)

{
  return 1;
}

```

---

## set_compress_option

```asm
// === 083f3afe MySQL::set_compress_option  [0x083f3afe-0x83f3b7f] ===
 83f3afe:	55                   	push   %ebp
 83f3aff:	89 e5                	mov    %esp,%ebp
 83f3b01:	83 ec 28             	sub    $0x28,%esp
 83f3b04:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3b07:	8b 40 04             	mov    0x4(%eax),%eax
 83f3b0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83f3b11:	00 
 83f3b12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f3b19:	00 
 83f3b1a:	89 04 24             	mov    %eax,(%esp)
 83f3b1d:	e8 4e 13 34 00       	call   8734e70 <mysql_options>
 83f3b22:	85 c0                	test   %eax,%eax
 83f3b24:	0f 95 c0             	setne  %al
 83f3b27:	84 c0                	test   %al,%al
 83f3b29:	74 4d                	je     83f3b78 <_ZN5MySQL19set_compress_optionEv+0x7a>
 83f3b2b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f3b32:	00 
 83f3b33:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 83f3b3a:	00 
 83f3b3b:	c7 44 24 04 a0 5a c3 	movl   $0x8c35aa0,0x4(%esp)
 83f3b42:	08 
 83f3b43:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3b46:	89 04 24             	mov    %eax,(%esp)
 83f3b49:	e8 ca bb 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f3b4e:	c7 44 24 0c 40 00 00 	movl   $0x40,0xc(%esp)
 83f3b55:	00 
 83f3b56:	c7 44 24 08 a0 5a c3 	movl   $0x8c35aa0,0x8(%esp)
 83f3b5d:	08 
 83f3b5e:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f3b65:	08 
 83f3b66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3b69:	89 04 24             	mov    %eax,(%esp)
 83f3b6c:	e8 17 bc 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f3b71:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3b76:	eb 05                	jmp    83f3b7d <_ZN5MySQL19set_compress_optionEv+0x7f>
 83f3b78:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3b7d:	c9                   	leave
 83f3b7e:	c3                   	ret
 83f3b7f:	90                   	nop

```

```c
// MySQL::set_compress_option @ 0x83f3afe

/* MySQL::set_compress_option() */

bool __thiscall MySQL::set_compress_option(MySQL *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = mysql_options(*(undefined4 *)(this + 4),1,0);
  if (iVar1 != 0) {
    cMyTrace::cMyTrace(local_1c,"bool MySQL::set_compress_option()",0x40,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::set_compress_option()",0x40);
  }
  return iVar1 == 0;
}

```

---

## set_query

```asm
// === 083f41c0 MySQL::set_query  [0x083f41c0-0x83f430f] ===
 83f41c0:	55                   	push   %ebp
 83f41c1:	89 e5                	mov    %esp,%ebp
 83f41c3:	56                   	push   %esi
 83f41c4:	53                   	push   %ebx
 83f41c5:	83 ec 30             	sub    $0x30,%esp
 83f41c8:	8b 45 08             	mov    0x8(%ebp),%eax
 83f41cb:	0f b6 80 8a 20 04 00 	movzbl 0x4208a(%eax),%eax
 83f41d2:	84 c0                	test   %al,%al
 83f41d4:	0f 84 95 00 00 00    	je     83f426f <_ZN5MySQL9set_queryEPKcz+0xaf>
 83f41da:	8b 45 08             	mov    0x8(%ebp),%eax
 83f41dd:	8b 00                	mov    (%eax),%eax
 83f41df:	85 c0                	test   %eax,%eax
 83f41e1:	75 0a                	jne    83f41ed <_ZN5MySQL9set_queryEPKcz+0x2d>
 83f41e3:	b8 00 00 00 00       	mov    $0x0,%eax
 83f41e8:	e9 1c 01 00 00       	jmp    83f4309 <_ZN5MySQL9set_queryEPKcz+0x149>
 83f41ed:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 83f41f0:	89 04 24             	mov    %eax,(%esp)
 83f41f3:	e8 d8 be 2e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 83f41f8:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 83f41fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f41ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4202:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4206:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83f4209:	89 04 24             	mov    %eax,(%esp)
 83f420c:	e8 1f 34 31 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 83f4211:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4214:	8b 00                	mov    (%eax),%eax
 83f4216:	8d 55 dc             	lea    -0x24(%ebp),%edx
 83f4219:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f421d:	89 04 24             	mov    %eax,(%esp)
 83f4220:	e8 39 8a 1f 00       	call   85ecc5e <_ZN13CQueryCounter18IncreaseQueryCountERKSs>
 83f4225:	eb 15                	jmp    83f423c <_ZN5MySQL9set_queryEPKcz+0x7c>
 83f4227:	89 d3                	mov    %edx,%ebx
 83f4229:	89 c6                	mov    %eax,%esi
 83f422b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83f422e:	89 04 24             	mov    %eax,(%esp)
 83f4231:	e8 aa 39 31 00       	call   8707be0 <_ZNSsD1Ev>
 83f4236:	89 f0                	mov    %esi,%eax
 83f4238:	89 da                	mov    %ebx,%edx
 83f423a:	eb 0d                	jmp    83f4249 <_ZN5MySQL9set_queryEPKcz+0x89>
 83f423c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83f423f:	89 04 24             	mov    %eax,(%esp)
 83f4242:	e8 99 39 31 00       	call   8707be0 <_ZNSsD1Ev>
 83f4247:	eb 1b                	jmp    83f4264 <_ZN5MySQL9set_queryEPKcz+0xa4>
 83f4249:	89 d3                	mov    %edx,%ebx
 83f424b:	89 c6                	mov    %eax,%esi
 83f424d:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 83f4250:	89 04 24             	mov    %eax,(%esp)
 83f4253:	e8 98 be 2e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 83f4258:	89 f0                	mov    %esi,%eax
 83f425a:	89 da                	mov    %ebx,%edx
 83f425c:	89 04 24             	mov    %eax,(%esp)
 83f425f:	e8 ec f4 6e 00       	call   8ae3750 <_Unwind_Resume>
 83f4264:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 83f4267:	89 04 24             	mov    %eax,(%esp)
 83f426a:	e8 81 be 2e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 83f426f:	8d 45 10             	lea    0x10(%ebp),%eax
 83f4272:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83f4275:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83f4278:	8b 55 08             	mov    0x8(%ebp),%edx
 83f427b:	83 c2 1c             	add    $0x1c,%edx
 83f427e:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4282:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4285:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4289:	89 14 24             	mov    %edx,(%esp)
 83f428c:	e8 3f 95 c8 ff       	call   807d7d0 <vsprintf@plt>
 83f4291:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4294:	83 c0 1c             	add    $0x1c,%eax
 83f4297:	89 04 24             	mov    %eax,(%esp)
 83f429a:	e8 11 a1 c8 ff       	call   807e3b0 <strlen@plt>
 83f429f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f42a2:	81 7d f4 ff 5f 00 00 	cmpl   $0x5fff,-0xc(%ebp)
 83f42a9:	7e 4d                	jle    83f42f8 <_ZN5MySQL9set_queryEPKcz+0x138>
 83f42ab:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f42b2:	00 
 83f42b3:	c7 44 24 08 69 01 00 	movl   $0x169,0x8(%esp)
 83f42ba:	00 
 83f42bb:	c7 44 24 04 80 59 c3 	movl   $0x8c35980,0x4(%esp)
 83f42c2:	08 
 83f42c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f42c6:	89 04 24             	mov    %eax,(%esp)
 83f42c9:	e8 4a b4 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f42ce:	c7 44 24 0c 69 01 00 	movl   $0x169,0xc(%esp)
 83f42d5:	00 
 83f42d6:	c7 44 24 08 80 59 c3 	movl   $0x8c35980,0x8(%esp)
 83f42dd:	08 
 83f42de:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f42e5:	08 
 83f42e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83f42e9:	89 04 24             	mov    %eax,(%esp)
 83f42ec:	e8 97 b4 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f42f1:	b8 00 00 00 00       	mov    $0x0,%eax
 83f42f6:	eb 11                	jmp    83f4309 <_ZN5MySQL9set_queryEPKcz+0x149>
 83f42f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83f42fb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83f42fe:	89 90 28 20 04 00    	mov    %edx,0x42028(%eax)
 83f4304:	b8 01 00 00 00       	mov    $0x1,%eax
 83f4309:	83 c4 30             	add    $0x30,%esp
 83f430c:	5b                   	pop    %ebx
 83f430d:	5e                   	pop    %esi
 83f430e:	5d                   	pop    %ebp
 83f430f:	c3                   	ret

```

```c
// MySQL::set_query @ 0x83f41c0

/* MySQL::set_query(char const*, ...) */

bool __thiscall MySQL::set_query(MySQL *this,char *param_1,...)

{
  bool bVar1;
  string local_28;
  allocator<char> local_21;
  cMyTrace local_20 [16];
  size_t local_10;
  
  if (this[0x4208a] != (MySQL)0x0) {
    if (*(int *)this == 0) {
      return false;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 083f420c to 083f4210 has its CatchHandler @ 083f4249 */
    std::string::string((string *)&local_28,param_1,(allocator *)&local_21);
                    /* try { // try from 083f4220 to 083f4224 has its CatchHandler @ 083f4227 */
    CQueryCounter::IncreaseQueryCount(*(CQueryCounter **)this,&local_28);
                    /* try { // try from 083f4242 to 083f4246 has its CatchHandler @ 083f4249 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
  }
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  local_10 = strlen((char *)(this + 0x1c));
  bVar1 = (int)local_10 < 0x6000;
  if (bVar1) {
    *(size_t *)(this + 0x42028) = local_10;
  }
  else {
    cMyTrace::cMyTrace(local_20,"bool MySQL::set_query(const char*, ...)",0x169,5);
    cMyTrace::operator()(local_20,"[%s][%d]","bool MySQL::set_query(const char*, ...)",0x169);
  }
  return bVar1;
}

```

---

## set_query_083f4782

```asm
// === 083f4782 MySQL::set_query  [0x083f4782-0x83f48a9] ===
 83f4782:	55                   	push   %ebp
 83f4783:	89 e5                	mov    %esp,%ebp
 83f4785:	56                   	push   %esi
 83f4786:	53                   	push   %ebx
 83f4787:	83 ec 30             	sub    $0x30,%esp
 83f478a:	8b 45 08             	mov    0x8(%ebp),%eax
 83f478d:	0f b6 80 8a 20 04 00 	movzbl 0x4208a(%eax),%eax
 83f4794:	84 c0                	test   %al,%al
 83f4796:	0f 84 98 00 00 00    	je     83f4834 <_ZN5MySQL9set_queryEv+0xb2>
 83f479c:	8b 45 08             	mov    0x8(%ebp),%eax
 83f479f:	8b 00                	mov    (%eax),%eax
 83f47a1:	85 c0                	test   %eax,%eax
 83f47a3:	75 0a                	jne    83f47af <_ZN5MySQL9set_queryEv+0x2d>
 83f47a5:	b8 00 00 00 00       	mov    $0x0,%eax
 83f47aa:	e9 f3 00 00 00       	jmp    83f48a2 <_ZN5MySQL9set_queryEv+0x120>
 83f47af:	8d 45 f3             	lea    -0xd(%ebp),%eax
 83f47b2:	89 04 24             	mov    %eax,(%esp)
 83f47b5:	e8 16 b9 2e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 83f47ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83f47bd:	8d 50 1c             	lea    0x1c(%eax),%edx
 83f47c0:	8d 45 f3             	lea    -0xd(%ebp),%eax
 83f47c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f47c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f47cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f47ce:	89 04 24             	mov    %eax,(%esp)
 83f47d1:	e8 5a 2e 31 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 83f47d6:	8b 45 08             	mov    0x8(%ebp),%eax
 83f47d9:	8b 00                	mov    (%eax),%eax
 83f47db:	8d 55 ec             	lea    -0x14(%ebp),%edx
 83f47de:	89 54 24 04          	mov    %edx,0x4(%esp)
 83f47e2:	89 04 24             	mov    %eax,(%esp)
 83f47e5:	e8 74 84 1f 00       	call   85ecc5e <_ZN13CQueryCounter18IncreaseQueryCountERKSs>
 83f47ea:	eb 15                	jmp    83f4801 <_ZN5MySQL9set_queryEv+0x7f>
 83f47ec:	89 d3                	mov    %edx,%ebx
 83f47ee:	89 c6                	mov    %eax,%esi
 83f47f0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f47f3:	89 04 24             	mov    %eax,(%esp)
 83f47f6:	e8 e5 33 31 00       	call   8707be0 <_ZNSsD1Ev>
 83f47fb:	89 f0                	mov    %esi,%eax
 83f47fd:	89 da                	mov    %ebx,%edx
 83f47ff:	eb 0d                	jmp    83f480e <_ZN5MySQL9set_queryEv+0x8c>
 83f4801:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83f4804:	89 04 24             	mov    %eax,(%esp)
 83f4807:	e8 d4 33 31 00       	call   8707be0 <_ZNSsD1Ev>
 83f480c:	eb 1b                	jmp    83f4829 <_ZN5MySQL9set_queryEv+0xa7>
 83f480e:	89 d3                	mov    %edx,%ebx
 83f4810:	89 c6                	mov    %eax,%esi
 83f4812:	8d 45 f3             	lea    -0xd(%ebp),%eax
 83f4815:	89 04 24             	mov    %eax,(%esp)
 83f4818:	e8 d3 b8 2e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 83f481d:	89 f0                	mov    %esi,%eax
 83f481f:	89 da                	mov    %ebx,%edx
 83f4821:	89 04 24             	mov    %eax,(%esp)
 83f4824:	e8 27 ef 6e 00       	call   8ae3750 <_Unwind_Resume>
 83f4829:	8d 45 f3             	lea    -0xd(%ebp),%eax
 83f482c:	89 04 24             	mov    %eax,(%esp)
 83f482f:	e8 bc b8 2e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 83f4834:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4837:	83 c0 1c             	add    $0x1c,%eax
 83f483a:	89 04 24             	mov    %eax,(%esp)
 83f483d:	e8 6e 9b c8 ff       	call   807e3b0 <strlen@plt>
 83f4842:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f4845:	81 7d f4 ff 5f 00 00 	cmpl   $0x5fff,-0xc(%ebp)
 83f484c:	7e 43                	jle    83f4891 <_ZN5MySQL9set_queryEv+0x10f>
 83f484e:	c7 44 24 18 d1 02 00 	movl   $0x2d1,0x18(%esp)
 83f4855:	00 
 83f4856:	c7 44 24 14 ff 58 c3 	movl   $0x8c358ff,0x14(%esp)
 83f485d:	08 
 83f485e:	c7 44 24 10 20 4b c3 	movl   $0x8c34b20,0x10(%esp)
 83f4865:	08 
 83f4866:	c7 44 24 0c d1 02 00 	movl   $0x2d1,0xc(%esp)
 83f486d:	00 
 83f486e:	c7 44 24 08 ff 58 c3 	movl   $0x8c358ff,0x8(%esp)
 83f4875:	08 
 83f4876:	c7 44 24 04 bd 4b c3 	movl   $0x8c34bbd,0x4(%esp)
 83f487d:	08 
 83f487e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83f4885:	e8 80 f3 6d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83f488a:	b8 00 00 00 00       	mov    $0x0,%eax
 83f488f:	eb 11                	jmp    83f48a2 <_ZN5MySQL9set_queryEv+0x120>
 83f4891:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4894:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83f4897:	89 90 28 20 04 00    	mov    %edx,0x42028(%eax)
 83f489d:	b8 01 00 00 00       	mov    $0x1,%eax
 83f48a2:	83 c4 30             	add    $0x30,%esp
 83f48a5:	5b                   	pop    %ebx
 83f48a6:	5e                   	pop    %esi
 83f48a7:	5d                   	pop    %ebp
 83f48a8:	c3                   	ret
 83f48a9:	90                   	nop

```

```c
// MySQL::set_query @ 0x83f4782

/* MySQL::set_query() */

bool __thiscall MySQL::set_query(MySQL *this)

{
  bool bVar1;
  string local_18;
  allocator<char> local_11;
  size_t local_10;
  
  if (this[0x4208a] != (MySQL)0x0) {
    if (*(int *)this == 0) {
      return false;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 083f47d1 to 083f47d5 has its CatchHandler @ 083f480e */
    std::string::string((string *)&local_18,(char *)(this + 0x1c),(allocator *)&local_11);
                    /* try { // try from 083f47e5 to 083f47e9 has its CatchHandler @ 083f47ec */
    CQueryCounter::IncreaseQueryCount(*(CQueryCounter **)this,&local_18);
                    /* try { // try from 083f4807 to 083f480b has its CatchHandler @ 083f480e */
    std::string::~string((string *)&local_18);
    std::allocator<char>::~allocator(&local_11);
  }
  local_10 = strlen((char *)(this + 0x1c));
  bVar1 = (int)local_10 < 0x6000;
  if (bVar1) {
    *(size_t *)(this + 0x42028) = local_10;
  }
  else {
    LogManager::logFormat
              (1,"DBMgr.cpp","bool MySQL::set_query()",0x2d1,"[%s][%d]","bool MySQL::set_query()",
               0x2d1);
  }
  return bVar1;
}

```

---

## set_read_default_grp_option

```asm
// === 083f3b80 MySQL::set_read_default_grp_option  [0x083f3b80-0x83f3c01] ===
 83f3b80:	55                   	push   %ebp
 83f3b81:	89 e5                	mov    %esp,%ebp
 83f3b83:	83 ec 28             	sub    $0x28,%esp
 83f3b86:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3b89:	8b 40 04             	mov    0x4(%eax),%eax
 83f3b8c:	c7 44 24 08 29 4b c3 	movl   $0x8c34b29,0x8(%esp)
 83f3b93:	08 
 83f3b94:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 83f3b9b:	00 
 83f3b9c:	89 04 24             	mov    %eax,(%esp)
 83f3b9f:	e8 cc 12 34 00       	call   8734e70 <mysql_options>
 83f3ba4:	85 c0                	test   %eax,%eax
 83f3ba6:	0f 95 c0             	setne  %al
 83f3ba9:	84 c0                	test   %al,%al
 83f3bab:	74 4d                	je     83f3bfa <_ZN5MySQL27set_read_default_grp_optionEv+0x7a>
 83f3bad:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83f3bb4:	00 
 83f3bb5:	c7 44 24 08 4f 00 00 	movl   $0x4f,0x8(%esp)
 83f3bbc:	00 
 83f3bbd:	c7 44 24 04 60 5a c3 	movl   $0x8c35a60,0x4(%esp)
 83f3bc4:	08 
 83f3bc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3bc8:	89 04 24             	mov    %eax,(%esp)
 83f3bcb:	e8 48 bb 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83f3bd0:	c7 44 24 0c 4f 00 00 	movl   $0x4f,0xc(%esp)
 83f3bd7:	00 
 83f3bd8:	c7 44 24 08 60 5a c3 	movl   $0x8c35a60,0x8(%esp)
 83f3bdf:	08 
 83f3be0:	c7 44 24 04 20 4b c3 	movl   $0x8c34b20,0x4(%esp)
 83f3be7:	08 
 83f3be8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83f3beb:	89 04 24             	mov    %eax,(%esp)
 83f3bee:	e8 95 bb 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83f3bf3:	b8 00 00 00 00       	mov    $0x0,%eax
 83f3bf8:	eb 05                	jmp    83f3bff <_ZN5MySQL27set_read_default_grp_optionEv+0x7f>
 83f3bfa:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3bff:	c9                   	leave
 83f3c00:	c3                   	ret
 83f3c01:	90                   	nop

```

```c
// MySQL::set_read_default_grp_option @ 0x83f3b80

/* MySQL::set_read_default_grp_option() */

bool __thiscall MySQL::set_read_default_grp_option(MySQL *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = mysql_options(*(undefined4 *)(this + 4),5,"UseSQL");
  if (iVar1 != 0) {
    cMyTrace::cMyTrace(local_1c,"bool MySQL::set_read_default_grp_option()",0x4f,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::set_read_default_grp_option()",0x4f);
  }
  return iVar1 == 0;
}

```

---

## set_reconnect_option

```asm
// === 083f3c0c MySQL::set_reconnect_option  [0x083f3c0c-0x83f3c15] ===
 83f3c0c:	55                   	push   %ebp
 83f3c0d:	89 e5                	mov    %esp,%ebp
 83f3c0f:	b8 01 00 00 00       	mov    $0x1,%eax
 83f3c14:	5d                   	pop    %ebp
 83f3c15:	c3                   	ret

```

```c
// MySQL::set_reconnect_option @ 0x83f3c0c

/* MySQL::set_reconnect_option() */

undefined4 MySQL::set_reconnect_option(void)

{
  return 1;
}

```

---

## update

```asm
// === 083f4718 MySQL::update  [0x083f4718-0x83f4781] ===
 83f4718:	55                   	push   %ebp
 83f4719:	89 e5                	mov    %esp,%ebp
 83f471b:	83 ec 28             	sub    $0x28,%esp
 83f471e:	8d 45 10             	lea    0x10(%ebp),%eax
 83f4721:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f4724:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f4727:	8b 55 08             	mov    0x8(%ebp),%edx
 83f472a:	83 c2 1c             	add    $0x1c,%edx
 83f472d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f4731:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f4734:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f4738:	89 14 24             	mov    %edx,(%esp)
 83f473b:	e8 90 90 c8 ff       	call   807d7d0 <vsprintf@plt>
 83f4740:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4743:	89 04 24             	mov    %eax,(%esp)
 83f4746:	e8 37 00 00 00       	call   83f4782 <_ZN5MySQL9set_queryEv>
 83f474b:	83 f0 01             	xor    $0x1,%eax
 83f474e:	84 c0                	test   %al,%al
 83f4750:	74 07                	je     83f4759 <_ZN5MySQL6updateEPKcz+0x41>
 83f4752:	b8 03 00 00 00       	mov    $0x3,%eax
 83f4757:	eb 26                	jmp    83f477f <_ZN5MySQL6updateEPKcz+0x67>
 83f4759:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f4760:	00 
 83f4761:	8b 45 08             	mov    0x8(%ebp),%eax
 83f4764:	89 04 24             	mov    %eax,(%esp)
 83f4767:	e8 ba fb ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83f476c:	83 f0 01             	xor    $0x1,%eax
 83f476f:	84 c0                	test   %al,%al
 83f4771:	74 07                	je     83f477a <_ZN5MySQL6updateEPKcz+0x62>
 83f4773:	b8 05 00 00 00       	mov    $0x5,%eax
 83f4778:	eb 05                	jmp    83f477f <_ZN5MySQL6updateEPKcz+0x67>
 83f477a:	b8 00 00 00 00       	mov    $0x0,%eax
 83f477f:	c9                   	leave
 83f4780:	c3                   	ret
 83f4781:	90                   	nop

```

```c
// MySQL::update @ 0x83f4718

/* MySQL::update(char const*, ...) */

undefined4 __thiscall MySQL::update(MySQL *this,char *param_1,...)

{
  char cVar1;
  undefined4 uVar2;
  
  vsprintf((char *)(this + 0x1c),param_1,&stack0x0000000c);
  cVar1 = set_query(this);
  if (cVar1 == '\x01') {
    cVar1 = exec(this,true);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

```

---

## ~MySQL

```asm
// === 083f3aea MySQL::~MySQL  [0x083f3aea-0x83f3afd] ===
 83f3aea:	55                   	push   %ebp
 83f3aeb:	89 e5                	mov    %esp,%ebp
 83f3aed:	83 ec 18             	sub    $0x18,%esp
 83f3af0:	8b 45 08             	mov    0x8(%ebp),%eax
 83f3af3:	89 04 24             	mov    %eax,(%esp)
 83f3af6:	e8 79 03 00 00       	call   83f3e74 <_ZN5MySQL5closeEv>
 83f3afb:	c9                   	leave
 83f3afc:	c3                   	ret
 83f3afd:	90                   	nop

```

```c
// MySQL::~MySQL @ 0x83f3aea

/* MySQL::~MySQL() */

void __thiscall MySQL::~MySQL(MySQL *this)

{
  close(this);
  return;
}

```

