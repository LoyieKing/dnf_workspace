# Timer_CreateDnfDbLoad

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863ba46 Timer_CreateDnfDbLoad::dispatch_sig  [0x0863ba46-0x863baae] ===
 863ba46:	55                   	push   %ebp
 863ba47:	89 e5                	mov    %esp,%ebp
 863ba49:	83 ec 28             	sub    $0x28,%esp
 863ba4c:	a1 30 f7 41 09       	mov    0x941f730,%eax
 863ba51:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 863ba58:	00 
 863ba59:	89 04 24             	mov    %eax,(%esp)
 863ba5c:	e8 37 9f ad ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 863ba61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863ba64:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863ba68:	74 25                	je     863ba8f <_ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij+0x49>
 863ba6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863ba6d:	8b 00                	mov    (%eax),%eax
 863ba6f:	83 c0 34             	add    $0x34,%eax
 863ba72:	8b 10                	mov    (%eax),%edx
 863ba74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863ba77:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863ba7e:	00 
 863ba7f:	89 04 24             	mov    %eax,(%esp)
 863ba82:	ff d2                	call   *%edx
 863ba84:	84 c0                	test   %al,%al
 863ba86:	74 07                	je     863ba8f <_ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij+0x49>
 863ba88:	b8 01 00 00 00       	mov    $0x1,%eax
 863ba8d:	eb 05                	jmp    863ba94 <_ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij+0x4e>
 863ba8f:	b8 00 00 00 00       	mov    $0x0,%eax
 863ba94:	84 c0                	test   %al,%al
 863ba96:	74 0b                	je     863baa3 <_ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij+0x5d>
 863ba98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863ba9b:	89 04 24             	mov    %eax,(%esp)
 863ba9e:	e8 a9 82 b2 ff       	call   8163d4c <_ZN15CEventCreateDnf15RegistNextTimerEv>
 863baa3:	e8 ec ff b1 ff       	call   815ba94 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv>
 863baa8:	b8 01 00 00 00       	mov    $0x1,%eax
 863baad:	c9                   	leave
 863baae:	c3                   	ret

```

```c
// Timer_CreateDnfDbLoad::dispatch_sig @ 0x863ba46

/* Timer_CreateDnfDbLoad::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_CreateDnfDbLoad::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  CEventCreateDnf *this;
  
  this = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (this != (CEventCreateDnf *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0863ba94;
    }
  }
  bVar1 = false;
LAB_0863ba94:
  if (bVar1) {
    CEventCreateDnf::RegistNextTimer(this);
  }
  DBSelectCreateDnfEventInfo::makeRequest();
  return 1;
}

```

