# nexon__cash__Transaction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Transaction

```asm
// === 081b02ec nexon::cash::Transaction::Transaction  [0x081b02ec-0x81b0335] ===
 81b02ec:	55                   	push   %ebp
 81b02ed:	89 e5                	mov    %esp,%ebp
 81b02ef:	83 ec 18             	sub    $0x18,%esp
 81b02f2:	8b 45 08             	mov    0x8(%ebp),%eax
 81b02f5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 81b02fb:	8b 45 08             	mov    0x8(%ebp),%eax
 81b02fe:	8b 55 10             	mov    0x10(%ebp),%edx
 81b0301:	89 50 04             	mov    %edx,0x4(%eax)
 81b0304:	8b 45 08             	mov    0x8(%ebp),%eax
 81b0307:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81b030e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b0311:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b0314:	89 50 0c             	mov    %edx,0xc(%eax)
 81b0317:	e8 b0 01 00 00       	call   81b04cc <_ZN5nexon4cash18TransactionManager20getNextTransactionIDEv>
 81b031c:	8b 55 08             	mov    0x8(%ebp),%edx
 81b031f:	89 02                	mov    %eax,(%edx)
 81b0321:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81b0328:	e8 23 d4 ec ff       	call   807d750 <time@plt>
 81b032d:	8b 55 08             	mov    0x8(%ebp),%edx
 81b0330:	89 42 08             	mov    %eax,0x8(%edx)
 81b0333:	c9                   	leave
 81b0334:	c3                   	ret
 81b0335:	90                   	nop

```

```c
// nexon::cash::Transaction::Transaction @ 0x81b02ec

/* nexon::cash::Transaction::Transaction(nexon::cash::UserBalance*, int) */

void __thiscall
nexon::cash::Transaction::Transaction(Transaction *this,UserBalance *param_1,int param_2)

{
  undefined4 uVar1;
  time_t tVar2;
  
  *(undefined4 *)this = 0;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = 0;
  *(UserBalance **)(this + 0xc) = param_1;
  uVar1 = TransactionManager::getNextTransactionID();
  *(undefined4 *)this = uVar1;
  tVar2 = time((time_t *)0x0);
  *(time_t *)(this + 8) = tVar2;
  return;
}

```

---

## cancel

```asm
// === 081b03b4 nexon::cash::Transaction::cancel  [0x081b03b4-0x81b03e7] ===
 81b03b4:	55                   	push   %ebp
 81b03b5:	89 e5                	mov    %esp,%ebp
 81b03b7:	83 ec 18             	sub    $0x18,%esp
 81b03ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81b03bd:	8b 50 04             	mov    0x4(%eax),%edx
 81b03c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b03c3:	8b 40 0c             	mov    0xc(%eax),%eax
 81b03c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b03ca:	89 04 24             	mov    %eax,(%esp)
 81b03cd:	e8 5c 01 00 00       	call   81b052e <_ZN5nexon4cash11UserBalance7balanceEi>
 81b03d2:	e8 51 fd ff ff       	call   81b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>
 81b03d7:	8b 55 08             	mov    0x8(%ebp),%edx
 81b03da:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b03de:	89 04 24             	mov    %eax,(%esp)
 81b03e1:	e8 36 fe ff ff       	call   81b021c <_ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE>
 81b03e6:	c9                   	leave
 81b03e7:	c3                   	ret

```

```c
// nexon::cash::Transaction::cancel @ 0x81b03b4

/* nexon::cash::Transaction::cancel() */

void __thiscall nexon::cash::Transaction::cancel(Transaction *this)

{
  TransactionManager *this_00;
  
  UserBalance::balance(*(UserBalance **)(this + 0xc),*(int *)(this + 4));
  this_00 = (TransactionManager *)TransactionManager::instance();
  TransactionManager::removeTransaction(this_00,this);
  return;
}

```

---

## confirm

```asm
// === 081b0398 nexon::cash::Transaction::confirm  [0x081b0398-0x81b03b3] ===
 81b0398:	55                   	push   %ebp
 81b0399:	89 e5                	mov    %esp,%ebp
 81b039b:	83 ec 18             	sub    $0x18,%esp
 81b039e:	e8 85 fd ff ff       	call   81b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>
 81b03a3:	8b 55 08             	mov    0x8(%ebp),%edx
 81b03a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b03aa:	89 04 24             	mov    %eax,(%esp)
 81b03ad:	e8 6a fe ff ff       	call   81b021c <_ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE>
 81b03b2:	c9                   	leave
 81b03b3:	c3                   	ret

```

```c
// nexon::cash::Transaction::confirm @ 0x81b0398

/* nexon::cash::Transaction::confirm() */

void __thiscall nexon::cash::Transaction::confirm(Transaction *this)

{
  TransactionManager *this_00;
  
  this_00 = (TransactionManager *)TransactionManager::instance();
  TransactionManager::removeTransaction(this_00,this);
  return;
}

```

---

## execute

```asm
// === 081b0336 nexon::cash::Transaction::execute  [0x081b0336-0x81b0397] ===
 81b0336:	55                   	push   %ebp
 81b0337:	89 e5                	mov    %esp,%ebp
 81b0339:	83 ec 18             	sub    $0x18,%esp
 81b033c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b033f:	8b 40 0c             	mov    0xc(%eax),%eax
 81b0342:	89 04 24             	mov    %eax,(%esp)
 81b0345:	e8 d8 01 00 00       	call   81b0522 <_ZNK5nexon4cash11UserBalance7balanceEv>
 81b034a:	8b 55 08             	mov    0x8(%ebp),%edx
 81b034d:	8b 52 04             	mov    0x4(%edx),%edx
 81b0350:	39 d0                	cmp    %edx,%eax
 81b0352:	0f 9c c0             	setl   %al
 81b0355:	84 c0                	test   %al,%al
 81b0357:	74 07                	je     81b0360 <_ZN5nexon4cash11Transaction7executeEv+0x2a>
 81b0359:	b8 03 00 00 00       	mov    $0x3,%eax
 81b035e:	eb 35                	jmp    81b0395 <_ZN5nexon4cash11Transaction7executeEv+0x5f>
 81b0360:	8b 45 08             	mov    0x8(%ebp),%eax
 81b0363:	8b 40 04             	mov    0x4(%eax),%eax
 81b0366:	89 c2                	mov    %eax,%edx
 81b0368:	f7 da                	neg    %edx
 81b036a:	8b 45 08             	mov    0x8(%ebp),%eax
 81b036d:	8b 40 0c             	mov    0xc(%eax),%eax
 81b0370:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b0374:	89 04 24             	mov    %eax,(%esp)
 81b0377:	e8 b2 01 00 00       	call   81b052e <_ZN5nexon4cash11UserBalance7balanceEi>
 81b037c:	e8 a7 fd ff ff       	call   81b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>
 81b0381:	8b 55 08             	mov    0x8(%ebp),%edx
 81b0384:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b0388:	89 04 24             	mov    %eax,(%esp)
 81b038b:	e8 2c fe ff ff       	call   81b01bc <_ZN5nexon4cash18TransactionManager14addTransactionEPNS0_11TransactionE>
 81b0390:	b8 00 00 00 00       	mov    $0x0,%eax
 81b0395:	c9                   	leave
 81b0396:	c3                   	ret
 81b0397:	90                   	nop

```

```c
// nexon::cash::Transaction::execute @ 0x81b0336

/* nexon::cash::Transaction::execute() */

undefined4 __thiscall nexon::cash::Transaction::execute(Transaction *this)

{
  int iVar1;
  undefined4 uVar2;
  TransactionManager *this_00;
  
  iVar1 = UserBalance::balance(*(UserBalance **)(this + 0xc));
  if (iVar1 < *(int *)(this + 4)) {
    uVar2 = 3;
  }
  else {
    UserBalance::balance(*(UserBalance **)(this + 0xc),-*(int *)(this + 4));
    this_00 = (TransactionManager *)TransactionManager::instance();
    TransactionManager::addTransaction(this_00,this);
    uVar2 = 0;
  }
  return uVar2;
}

```

