# CAradRyosikaEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## ApplyDatePeriod

```asm
// === 081a0fda CAradRyosikaEvent::ApplyDatePeriod  [0x081a0fda-0x81a0fe3] ===
 81a0fda:	55                   	push   %ebp
 81a0fdb:	89 e5                	mov    %esp,%ebp
 81a0fdd:	b8 01 00 00 00       	mov    $0x1,%eax
 81a0fe2:	5d                   	pop    %ebp
 81a0fe3:	c3                   	ret

```

```c
// CAradRyosikaEvent::ApplyDatePeriod @ 0x81a0fda

/* CAradRyosikaEvent::ApplyDatePeriod(CUser*) */

undefined4 CAradRyosikaEvent::ApplyDatePeriod(CUser *param_1)

{
  return 1;
}

```

---

## CAradRyosikaEvent

```asm
// === 081a0ea0 CAradRyosikaEvent::CAradRyosikaEvent  [0x081a0ea0-0x81a0ecf] ===
 81a0ea0:	55                   	push   %ebp
 81a0ea1:	89 e5                	mov    %esp,%ebp
 81a0ea3:	83 ec 18             	sub    $0x18,%esp
 81a0ea6:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ea9:	89 04 24             	mov    %eax,(%esp)
 81a0eac:	e8 7b 9f f6 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81a0eb1:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0eb4:	c7 00 68 b9 ba 08    	movl   $0x8bab968,(%eax)
 81a0eba:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ebd:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
 81a0ec4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ec7:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 81a0ece:	c9                   	leave
 81a0ecf:	c3                   	ret

```

```c
// CAradRyosikaEvent::CAradRyosikaEvent @ 0x81a0ea0

/* CAradRyosikaEvent::CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CAradRyosikaEvent_08bab968;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return;
}

```

---

## DoEvent

```asm
// === 081a107c CAradRyosikaEvent::DoEvent  [0x081a107c-0x81a10f8] ===
 81a107c:	55                   	push   %ebp
 81a107d:	89 e5                	mov    %esp,%ebp
 81a107f:	83 ec 28             	sub    $0x28,%esp
 81a1082:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81a1086:	74 6e                	je     81a10f6 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x7a>
 81a1088:	8b 45 08             	mov    0x8(%ebp),%eax
 81a108b:	8b 00                	mov    (%eax),%eax
 81a108d:	83 c0 34             	add    $0x34,%eax
 81a1090:	8b 10                	mov    (%eax),%edx
 81a1092:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1095:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a109c:	00 
 81a109d:	89 04 24             	mov    %eax,(%esp)
 81a10a0:	ff d2                	call   *%edx
 81a10a2:	84 c0                	test   %al,%al
 81a10a4:	74 1d                	je     81a10c3 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x47>
 81a10a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a10a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a10ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81a10b0:	89 04 24             	mov    %eax,(%esp)
 81a10b3:	e8 22 ff ff ff       	call   81a0fda <_ZN17CAradRyosikaEvent15ApplyDatePeriodEP5CUser>
 81a10b8:	84 c0                	test   %al,%al
 81a10ba:	74 07                	je     81a10c3 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x47>
 81a10bc:	b8 01 00 00 00       	mov    $0x1,%eax
 81a10c1:	eb 05                	jmp    81a10c8 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x4c>
 81a10c3:	b8 00 00 00 00       	mov    $0x0,%eax
 81a10c8:	84 c0                	test   %al,%al
 81a10ca:	74 2b                	je     81a10f7 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x7b>
 81a10cc:	8b 45 18             	mov    0x18(%ebp),%eax
 81a10cf:	89 44 24 10          	mov    %eax,0x10(%esp)
 81a10d3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81a10da:	00 
 81a10db:	8b 45 10             	mov    0x10(%ebp),%eax
 81a10de:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a10e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a10e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a10e9:	8b 45 08             	mov    0x8(%ebp),%eax
 81a10ec:	89 04 24             	mov    %eax,(%esp)
 81a10ef:	e8 f0 fe ff ff       	call   81a0fe4 <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii>
 81a10f4:	eb 01                	jmp    81a10f7 <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii+0x7b>
 81a10f6:	90                   	nop
 81a10f7:	c9                   	leave
 81a10f8:	c3                   	ret

```

```c
// CAradRyosikaEvent::DoEvent @ 0x81a107c

/* CAradRyosikaEvent::DoEvent(CUser*, int, int, int) */

void __thiscall
CAradRyosikaEvent::DoEvent
          (CAradRyosikaEvent *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  
  if (param_1 != (CUser *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if ((cVar2 == '\0') || (cVar2 = ApplyDatePeriod((CUser *)this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      SendMail(this,param_1,param_2,1,param_4);
    }
    return;
  }
  return;
}

```

---

## EndEvent

```asm
// === 081a0fbe CAradRyosikaEvent::EndEvent  [0x081a0fbe-0x81a0fd9] ===
 81a0fbe:	55                   	push   %ebp
 81a0fbf:	89 e5                	mov    %esp,%ebp
 81a0fc1:	83 ec 18             	sub    $0x18,%esp
 81a0fc4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0fc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a0fce:	00 
 81a0fcf:	89 04 24             	mov    %eax,(%esp)
 81a0fd2:	e8 0b 75 f2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81a0fd7:	c9                   	leave
 81a0fd8:	c3                   	ret
 81a0fd9:	90                   	nop

```

```c
// CAradRyosikaEvent::EndEvent @ 0x81a0fbe

/* CAradRyosikaEvent::EndEvent() */

void __thiscall CAradRyosikaEvent::EndEvent(CAradRyosikaEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## SendMail

```asm
// === 081a0fe4 CAradRyosikaEvent::SendMail  [0x081a0fe4-0x81a107b] ===
 81a0fe4:	55                   	push   %ebp
 81a0fe5:	89 e5                	mov    %esp,%ebp
 81a0fe7:	53                   	push   %ebx
 81a0fe8:	83 ec 24             	sub    $0x24,%esp
 81a0feb:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0fee:	8b 40 10             	mov    0x10(%eax),%eax
 81a0ff1:	85 c0                	test   %eax,%eax
 81a0ff3:	79 35                	jns    81a102a <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii+0x46>
 81a0ff5:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ff8:	8b 58 0c             	mov    0xc(%eax),%ebx
 81a0ffb:	e8 55 01 00 00       	call   81a1155 <_ZN14GlobalInstanceI17Arad_GiftItem_SetE4instEv>
 81a1000:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81a1004:	8b 55 18             	mov    0x18(%ebp),%edx
 81a1007:	89 54 24 10          	mov    %edx,0x10(%esp)
 81a100b:	8b 55 14             	mov    0x14(%ebp),%edx
 81a100e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a1012:	8b 55 10             	mov    0x10(%ebp),%edx
 81a1015:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a1019:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a101c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a1020:	89 04 24             	mov    %eax,(%esp)
 81a1023:	e8 76 22 00 00       	call   81a329e <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii>
 81a1028:	eb 4b                	jmp    81a1075 <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii+0x91>
 81a102a:	83 7d 18 07          	cmpl   $0x7,0x18(%ebp)
 81a102e:	75 07                	jne    81a1037 <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii+0x53>
 81a1030:	c7 45 14 05 00 00 00 	movl   $0x5,0x14(%ebp)
 81a1037:	8b 45 08             	mov    0x8(%ebp),%eax
 81a103a:	8b 40 10             	mov    0x10(%eax),%eax
 81a103d:	3b 45 18             	cmp    0x18(%ebp),%eax
 81a1040:	75 33                	jne    81a1075 <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii+0x91>
 81a1042:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1045:	8b 58 0c             	mov    0xc(%eax),%ebx
 81a1048:	e8 08 01 00 00       	call   81a1155 <_ZN14GlobalInstanceI17Arad_GiftItem_SetE4instEv>
 81a104d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81a1051:	8b 55 18             	mov    0x18(%ebp),%edx
 81a1054:	89 54 24 10          	mov    %edx,0x10(%esp)
 81a1058:	8b 55 14             	mov    0x14(%ebp),%edx
 81a105b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a105f:	8b 55 10             	mov    0x10(%ebp),%edx
 81a1062:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a1066:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a1069:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a106d:	89 04 24             	mov    %eax,(%esp)
 81a1070:	e8 29 22 00 00       	call   81a329e <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii>
 81a1075:	83 c4 24             	add    $0x24,%esp
 81a1078:	5b                   	pop    %ebx
 81a1079:	5d                   	pop    %ebp
 81a107a:	c3                   	ret
 81a107b:	90                   	nop

```

```c
// CAradRyosikaEvent::SendMail @ 0x81a0fe4

/* CAradRyosikaEvent::SendMail(CUser*, int, int, int) */

void __thiscall
CAradRyosikaEvent::SendMail
          (CAradRyosikaEvent *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  Arad_GiftItem_Set *pAVar2;
  
  if (*(int *)(this + 0x10) < 0) {
    iVar1 = *(int *)(this + 0xc);
    pAVar2 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
    Arad_GiftItem_Set::send_mail(pAVar2,param_1,param_2,param_3,param_4,iVar1);
  }
  else {
    if (param_4 == 7) {
      param_3 = 5;
    }
    if (*(int *)(this + 0x10) == param_4) {
      iVar1 = *(int *)(this + 0xc);
      pAVar2 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
      Arad_GiftItem_Set::send_mail(pAVar2,param_1,param_2,param_3,param_4,iVar1);
    }
  }
  return;
}

```

---

## StartEvent

```asm
// === 081a0f1e CAradRyosikaEvent::StartEvent  [0x081a0f1e-0x81a0f89] ===
 81a0f1e:	55                   	push   %ebp
 81a0f1f:	89 e5                	mov    %esp,%ebp
 81a0f21:	56                   	push   %esi
 81a0f22:	53                   	push   %ebx
 81a0f23:	83 ec 20             	sub    $0x20,%esp
 81a0f26:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f29:	8b 70 10             	mov    0x10(%eax),%esi
 81a0f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f2f:	8b 58 0c             	mov    0xc(%eax),%ebx
 81a0f32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a0f39:	00 
 81a0f3a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81a0f41:	00 
 81a0f42:	c7 44 24 04 50 b9 ba 	movl   $0x8bab950,0x4(%esp)
 81a0f49:	08 
 81a0f4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a0f4d:	89 04 24             	mov    %eax,(%esp)
 81a0f50:	e8 c3 e7 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81a0f55:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81a0f59:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81a0f5d:	c7 44 24 04 a0 ad ba 	movl   $0x8baada0,0x4(%esp)
 81a0f64:	08 
 81a0f65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a0f68:	89 04 24             	mov    %eax,(%esp)
 81a0f6b:	e8 18 e8 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a0f70:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f73:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a0f7a:	00 
 81a0f7b:	89 04 24             	mov    %eax,(%esp)
 81a0f7e:	e8 5f 75 f2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81a0f83:	83 c4 20             	add    $0x20,%esp
 81a0f86:	5b                   	pop    %ebx
 81a0f87:	5e                   	pop    %esi
 81a0f88:	5d                   	pop    %ebp
 81a0f89:	c3                   	ret

```

```c
// CAradRyosikaEvent::StartEvent @ 0x81a0f1e

/* CAradRyosikaEvent::StartEvent() */

void __thiscall CAradRyosikaEvent::StartEvent(CAradRyosikaEvent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"Arad Ryosika Event Start! [step:%d][job:%d]",uVar2,uVar1);
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_081a0f8a

```asm
// === 081a0f8a CAradRyosikaEvent::StartEvent  [0x081a0f8a-0x81a0fbd] ===
 81a0f8a:	55                   	push   %ebp
 81a0f8b:	89 e5                	mov    %esp,%ebp
 81a0f8d:	83 ec 18             	sub    $0x18,%esp
 81a0f90:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 81a0f94:	0f b7 d0             	movzwl %ax,%edx
 81a0f97:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f9a:	89 50 0c             	mov    %edx,0xc(%eax)
 81a0f9d:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 81a0fa1:	0f b7 d0             	movzwl %ax,%edx
 81a0fa4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0fa7:	89 50 10             	mov    %edx,0x10(%eax)
 81a0faa:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0fad:	8b 00                	mov    (%eax),%eax
 81a0faf:	83 c0 08             	add    $0x8,%eax
 81a0fb2:	8b 10                	mov    (%eax),%edx
 81a0fb4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0fb7:	89 04 24             	mov    %eax,(%esp)
 81a0fba:	ff d2                	call   *%edx
 81a0fbc:	c9                   	leave
 81a0fbd:	c3                   	ret

```

```c
// CAradRyosikaEvent::StartEvent @ 0x81a0f8a

/* CAradRyosikaEvent::StartEvent(Word_Param) */

void __thiscall CAradRyosikaEvent::StartEvent(CAradRyosikaEvent *this,uint param_2)

{
  *(uint *)(this + 0xc) = param_2 & 0xffff;
  *(uint *)(this + 0x10) = param_2 >> 0x10;
  (**(code **)(*(int *)this + 8))(this);
  return;
}

```

---

## ~CAradRyosikaEvent

```asm
// === 081a0ed0 CAradRyosikaEvent::~CAradRyosikaEvent  [0x081a0ed0-0x81a0eff] ===
 81a0ed0:	55                   	push   %ebp
 81a0ed1:	89 e5                	mov    %esp,%ebp
 81a0ed3:	83 ec 18             	sub    $0x18,%esp
 81a0ed6:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ed9:	c7 00 68 b9 ba 08    	movl   $0x8bab968,(%eax)
 81a0edf:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ee2:	89 04 24             	mov    %eax,(%esp)
 81a0ee5:	e8 68 9f f6 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81a0eea:	b8 00 00 00 00       	mov    $0x0,%eax
 81a0eef:	84 c0                	test   %al,%al
 81a0ef1:	74 0b                	je     81a0efe <_ZN17CAradRyosikaEventD1Ev+0x2e>
 81a0ef3:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0ef6:	89 04 24             	mov    %eax,(%esp)
 81a0ef9:	e8 f2 35 58 00       	call   87244f0 <_ZdlPv>
 81a0efe:	c9                   	leave
 81a0eff:	c3                   	ret

```

```c
// CAradRyosikaEvent::~CAradRyosikaEvent @ 0x81a0ed0

/* WARNING: Removing unreachable block (ram,0x081a0ef3) */
/* CAradRyosikaEvent::~CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::~CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  *(undefined ***)this = &PTR__CAradRyosikaEvent_08bab968;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CAradRyosikaEvent_081a0f00

```asm
// === 081a0f00 CAradRyosikaEvent::~CAradRyosikaEvent  [0x081a0f00-0x81a0f1d] ===
 81a0f00:	55                   	push   %ebp
 81a0f01:	89 e5                	mov    %esp,%ebp
 81a0f03:	83 ec 18             	sub    $0x18,%esp
 81a0f06:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f09:	89 04 24             	mov    %eax,(%esp)
 81a0f0c:	e8 bf ff ff ff       	call   81a0ed0 <_ZN17CAradRyosikaEventD1Ev>
 81a0f11:	8b 45 08             	mov    0x8(%ebp),%eax
 81a0f14:	89 04 24             	mov    %eax,(%esp)
 81a0f17:	e8 d4 35 58 00       	call   87244f0 <_ZdlPv>
 81a0f1c:	c9                   	leave
 81a0f1d:	c3                   	ret

```

```c
// CAradRyosikaEvent::~CAradRyosikaEvent @ 0x81a0f00

/* CAradRyosikaEvent::~CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::~CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  ~CAradRyosikaEvent(this);
  operator_delete(this);
  return;
}

```

