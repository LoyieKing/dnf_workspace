# nexon__cash__TransactionManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## addTransaction

```asm
// === 081b01bc nexon::cash::TransactionManager::addTransaction  [0x081b01bc-0x81b021b] ===
 81b01bc:	55                   	push   %ebp
 81b01bd:	89 e5                	mov    %esp,%ebp
 81b01bf:	83 ec 38             	sub    $0x38,%esp
 81b01c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b01c5:	89 04 24             	mov    %eax,(%esp)
 81b01c8:	e8 3f 03 00 00       	call   81b050c <_ZNK5nexon4cash11Transaction2idEv>
 81b01cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b01d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b01d3:	8d 55 0c             	lea    0xc(%ebp),%edx
 81b01d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b01da:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81b01dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b01e1:	89 04 24             	mov    %eax,(%esp)
 81b01e4:	e8 6c 04 00 00       	call   81b0655 <_ZSt9make_pairIjRPN5nexon4cash11TransactionEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81b01e9:	83 ec 04             	sub    $0x4,%esp
 81b01ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b01ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b01f3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b01f6:	89 04 24             	mov    %eax,(%esp)
 81b01f9:	e8 9e 04 00 00       	call   81b069c <_ZNSt4pairIKjPN5nexon4cash11TransactionEEC1IjS4_EEOS_IT_T0_E>
 81b01fe:	8b 55 08             	mov    0x8(%ebp),%edx
 81b0201:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81b0204:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 81b0207:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b020b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b020f:	89 04 24             	mov    %eax,(%esp)
 81b0212:	e8 b5 04 00 00       	call   81b06cc <_ZNSt3mapIjPN5nexon4cash11TransactionESt4lessIjESaISt4pairIKjS3_EEE6insertERKS8_>
 81b0217:	83 ec 04             	sub    $0x4,%esp
 81b021a:	c9                   	leave
 81b021b:	c3                   	ret

```

```c
// nexon::cash::TransactionManager::addTransaction @ 0x81b01bc

/* nexon::cash::TransactionManager::addTransaction(nexon::cash::Transaction*) */

void __thiscall
nexon::cash::TransactionManager::addTransaction(TransactionManager *this,Transaction *param_1)

{
  pair local_28 [8];
  pair<unsigned_int_const,nexon::cash::Transaction*> local_20 [8];
  uint local_18 [2];
  Transaction *local_10 [3];
  
  local_10[0] = (Transaction *)Transaction::id(param_1);
  std::make_pair<unsigned_int,nexon::cash::Transaction*&>(local_18,local_10);
  std::pair<unsigned_int_const,nexon::cash::Transaction*>::
  pair<unsigned_int,nexon::cash::Transaction*>(local_20,(pair *)local_18);
  std::
  map<unsigned_int,nexon::cash::Transaction*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,nexon::cash::Transaction*>>>
  ::insert(local_28);
  return;
}

```

---

## cancel

```asm
// === 081b0244 nexon::cash::TransactionManager::cancel  [0x081b0244-0x81b0297] ===
 81b0244:	55                   	push   %ebp
 81b0245:	89 e5                	mov    %esp,%ebp
 81b0247:	83 ec 28             	sub    $0x28,%esp
 81b024a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b024d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b0251:	8b 45 08             	mov    0x8(%ebp),%eax
 81b0254:	89 04 24             	mov    %eax,(%esp)
 81b0257:	e8 e8 01 00 00       	call   81b0444 <_ZN5nexon4cash18TransactionManager14getTransactionEj>
 81b025c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b025f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b0263:	74 30                	je     81b0295 <_ZN5nexon4cash18TransactionManager6cancelEj+0x51>
 81b0265:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b0268:	89 04 24             	mov    %eax,(%esp)
 81b026b:	e8 44 01 00 00       	call   81b03b4 <_ZN5nexon4cash11Transaction6cancelEv>
 81b0270:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b0273:	89 04 24             	mov    %eax,(%esp)
 81b0276:	e8 9b 02 00 00       	call   81b0516 <_ZNK5nexon4cash11Transaction7getUserEv>
 81b027b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b027e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b0282:	89 04 24             	mov    %eax,(%esp)
 81b0285:	e8 a6 12 00 00       	call   81b1530 <_ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE>
 81b028a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b028d:	89 04 24             	mov    %eax,(%esp)
 81b0290:	e8 5b 42 57 00       	call   87244f0 <_ZdlPv>
 81b0295:	c9                   	leave
 81b0296:	c3                   	ret
 81b0297:	90                   	nop

```

```c
// nexon::cash::TransactionManager::cancel @ 0x81b0244

/* nexon::cash::TransactionManager::cancel(unsigned int) */

void nexon::cash::TransactionManager::cancel(uint param_1)

{
  Transaction *this;
  Transaction *pTVar1;
  
  this = (Transaction *)getTransaction(param_1);
  if (this != (Transaction *)0x0) {
    Transaction::cancel(this);
    pTVar1 = (Transaction *)Transaction::getUser(this);
    UserBalance::removeTransaction(pTVar1);
    operator_delete(this);
  }
  return;
}

```

---

## confirm

```asm
// === 081b0298 nexon::cash::TransactionManager::confirm  [0x081b0298-0x81b02eb] ===
 81b0298:	55                   	push   %ebp
 81b0299:	89 e5                	mov    %esp,%ebp
 81b029b:	83 ec 28             	sub    $0x28,%esp
 81b029e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b02a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b02a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b02a8:	89 04 24             	mov    %eax,(%esp)
 81b02ab:	e8 94 01 00 00       	call   81b0444 <_ZN5nexon4cash18TransactionManager14getTransactionEj>
 81b02b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b02b3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81b02b7:	74 30                	je     81b02e9 <_ZN5nexon4cash18TransactionManager7confirmEj+0x51>
 81b02b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b02bc:	89 04 24             	mov    %eax,(%esp)
 81b02bf:	e8 d4 00 00 00       	call   81b0398 <_ZN5nexon4cash11Transaction7confirmEv>
 81b02c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b02c7:	89 04 24             	mov    %eax,(%esp)
 81b02ca:	e8 47 02 00 00       	call   81b0516 <_ZNK5nexon4cash11Transaction7getUserEv>
 81b02cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b02d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b02d6:	89 04 24             	mov    %eax,(%esp)
 81b02d9:	e8 52 12 00 00       	call   81b1530 <_ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE>
 81b02de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81b02e1:	89 04 24             	mov    %eax,(%esp)
 81b02e4:	e8 07 42 57 00       	call   87244f0 <_ZdlPv>
 81b02e9:	c9                   	leave
 81b02ea:	c3                   	ret
 81b02eb:	90                   	nop

```

```c
// nexon::cash::TransactionManager::confirm @ 0x81b0298

/* nexon::cash::TransactionManager::confirm(unsigned int) */

void nexon::cash::TransactionManager::confirm(uint param_1)

{
  Transaction *this;
  Transaction *pTVar1;
  
  this = (Transaction *)getTransaction(param_1);
  if (this != (Transaction *)0x0) {
    Transaction::confirm(this);
    pTVar1 = (Transaction *)Transaction::getUser(this);
    UserBalance::removeTransaction(pTVar1);
    operator_delete(this);
  }
  return;
}

```

---

## instance

```asm
// === 081b0128 nexon::cash::TransactionManager::instance  [0x081b0128-0x81b01bb] ===
 81b0128:	55                   	push   %ebp
 81b0129:	89 e5                	mov    %esp,%ebp
 81b012b:	57                   	push   %edi
 81b012c:	56                   	push   %esi
 81b012d:	53                   	push   %ebx
 81b012e:	83 ec 1c             	sub    $0x1c,%esp
 81b0131:	b8 b8 7d 40 09       	mov    $0x9407db8,%eax
 81b0136:	0f b6 00             	movzbl (%eax),%eax
 81b0139:	84 c0                	test   %al,%al
 81b013b:	75 71                	jne    81b01ae <_ZN5nexon4cash18TransactionManager8instanceEv+0x86>
 81b013d:	c7 04 24 b8 7d 40 09 	movl   $0x9407db8,(%esp)
 81b0144:	e8 e7 51 57 00       	call   8725330 <__cxa_guard_acquire>
 81b0149:	85 c0                	test   %eax,%eax
 81b014b:	0f 95 c0             	setne  %al
 81b014e:	84 c0                	test   %al,%al
 81b0150:	74 5c                	je     81b01ae <_ZN5nexon4cash18TransactionManager8instanceEv+0x86>
 81b0152:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b0157:	c7 04 24 c0 7d 40 09 	movl   $0x9407dc0,(%esp)
 81b015e:	e8 95 03 00 00       	call   81b04f8 <_ZN5nexon4cash18TransactionManagerC1Ev>
 81b0163:	c7 04 24 b8 7d 40 09 	movl   $0x9407db8,(%esp)
 81b016a:	e8 e1 50 57 00       	call   8725250 <__cxa_guard_release>
 81b016f:	b8 44 05 1b 08       	mov    $0x81b0544,%eax
 81b0174:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81b017b:	08 
 81b017c:	c7 44 24 04 c0 7d 40 	movl   $0x9407dc0,0x4(%esp)
 81b0183:	09 
 81b0184:	89 04 24             	mov    %eax,(%esp)
 81b0187:	e8 44 dc ec ff       	call   807ddd0 <__cxa_atexit@plt>
 81b018c:	eb 20                	jmp    81b01ae <_ZN5nexon4cash18TransactionManager8instanceEv+0x86>
 81b018e:	89 d6                	mov    %edx,%esi
 81b0190:	89 c7                	mov    %eax,%edi
 81b0192:	84 db                	test   %bl,%bl
 81b0194:	75 0c                	jne    81b01a2 <_ZN5nexon4cash18TransactionManager8instanceEv+0x7a>
 81b0196:	c7 04 24 b8 7d 40 09 	movl   $0x9407db8,(%esp)
 81b019d:	e8 1e 51 57 00       	call   87252c0 <__cxa_guard_abort>
 81b01a2:	89 f8                	mov    %edi,%eax
 81b01a4:	89 f2                	mov    %esi,%edx
 81b01a6:	89 04 24             	mov    %eax,(%esp)
 81b01a9:	e8 a2 35 93 00       	call   8ae3750 <_Unwind_Resume>
 81b01ae:	b8 c0 7d 40 09       	mov    $0x9407dc0,%eax
 81b01b3:	83 c4 1c             	add    $0x1c,%esp
 81b01b6:	5b                   	pop    %ebx
 81b01b7:	5e                   	pop    %esi
 81b01b8:	5f                   	pop    %edi
 81b01b9:	5d                   	pop    %ebp
 81b01ba:	c3                   	ret
 81b01bb:	90                   	nop

```

```c
// nexon::cash::TransactionManager::instance @ 0x81b0128

/* nexon::cash::TransactionManager::instance() */

undefined1 * nexon::cash::TransactionManager::instance(void)

{
  int iVar1;
  
  if (instance()::i == '\0') {
    iVar1 = __cxa_guard_acquire(&instance()::i);
    if (iVar1 != 0) {
                    /* try { // try from 081b015e to 081b0162 has its CatchHandler @ 081b018e */
      TransactionManager((TransactionManager *)instance()::i);
      __cxa_guard_release(&instance()::i);
      __cxa_atexit(~TransactionManager,instance()::i,&__dso_handle);
    }
  }
  return instance()::i;
}

```

---

## removeTransaction

```asm
// === 081b021c nexon::cash::TransactionManager::removeTransaction  [0x081b021c-0x81b0243] ===
 81b021c:	55                   	push   %ebp
 81b021d:	89 e5                	mov    %esp,%ebp
 81b021f:	83 ec 28             	sub    $0x28,%esp
 81b0222:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b0225:	89 04 24             	mov    %eax,(%esp)
 81b0228:	e8 df 02 00 00       	call   81b050c <_ZNK5nexon4cash11Transaction2idEv>
 81b022d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81b0230:	8b 45 08             	mov    0x8(%ebp),%eax
 81b0233:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81b0236:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b023a:	89 04 24             	mov    %eax,(%esp)
 81b023d:	e8 b6 04 00 00       	call   81b06f8 <_ZNSt3mapIjPN5nexon4cash11TransactionESt4lessIjESaISt4pairIKjS3_EEE5eraseERS7_>
 81b0242:	c9                   	leave
 81b0243:	c3                   	ret

```

```c
// nexon::cash::TransactionManager::removeTransaction @ 0x81b021c

/* nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*) */

void __thiscall
nexon::cash::TransactionManager::removeTransaction(TransactionManager *this,Transaction *param_1)

{
  Transaction::id(param_1);
  std::
  map<unsigned_int,nexon::cash::Transaction*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,nexon::cash::Transaction*>>>
  ::erase((uint *)this);
  return;
}

```

