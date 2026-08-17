# WongWork__CEventMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetCoinCharacCreate

```asm
// === 0848f002 WongWork::CEventMgr::GetCoinCharacCreate  [0x0848f002-0x848f06d] ===
 848f002:	55                   	push   %ebp
 848f003:	89 e5                	mov    %esp,%ebp
 848f005:	83 ec 28             	sub    $0x28,%esp
 848f008:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 848f00f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 848f014:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 848f01b:	00 
 848f01c:	89 04 24             	mov    %eax,(%esp)
 848f01f:	e8 74 69 c8 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 848f024:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848f027:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848f02b:	74 25                	je     848f052 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv+0x50>
 848f02d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848f030:	8b 00                	mov    (%eax),%eax
 848f032:	83 c0 34             	add    $0x34,%eax
 848f035:	8b 10                	mov    (%eax),%edx
 848f037:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848f03a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848f041:	00 
 848f042:	89 04 24             	mov    %eax,(%esp)
 848f045:	ff d2                	call   *%edx
 848f047:	84 c0                	test   %al,%al
 848f049:	74 07                	je     848f052 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv+0x50>
 848f04b:	b8 01 00 00 00       	mov    $0x1,%eax
 848f050:	eb 05                	jmp    848f057 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv+0x55>
 848f052:	b8 00 00 00 00       	mov    $0x0,%eax
 848f057:	84 c0                	test   %al,%al
 848f059:	74 0e                	je     848f069 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv+0x67>
 848f05b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848f05e:	89 04 24             	mov    %eax,(%esp)
 848f061:	e8 9a 01 00 00       	call   848f200 <_ZN22CCoinEventOnCharCreate23GetCoinNoOnCreateCharacEv>
 848f066:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848f069:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848f06c:	c9                   	leave
 848f06d:	c3                   	ret

```

```c
// WongWork::CEventMgr::GetCoinCharacCreate @ 0x848f002

/* WongWork::CEventMgr::GetCoinCharacCreate() */

undefined4 WongWork::CEventMgr::GetCoinCharacCreate(void)

{
  bool bVar1;
  char cVar2;
  CCoinEventOnCharCreate *this;
  undefined4 local_14;
  
  local_14 = 5;
  this = (CCoinEventOnCharCreate *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,5);
  if (this != (CCoinEventOnCharCreate *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0848f057;
    }
  }
  bVar1 = false;
LAB_0848f057:
  if (bVar1) {
    local_14 = CCoinEventOnCharCreate::GetCoinNoOnCreateCharac(this);
  }
  return local_14;
}

```

---

## GetCoinPerDay

```asm
// === 0848eff8 WongWork::CEventMgr::GetCoinPerDay  [0x0848eff8-0x848f001] ===
 848eff8:	55                   	push   %ebp
 848eff9:	89 e5                	mov    %esp,%ebp
 848effb:	b8 01 00 00 00       	mov    $0x1,%eax
 848f000:	5d                   	pop    %ebp
 848f001:	c3                   	ret

```

```c
// WongWork::CEventMgr::GetCoinPerDay @ 0x848eff8

/* WongWork::CEventMgr::GetCoinPerDay() */

undefined4 WongWork::CEventMgr::GetCoinPerDay(void)

{
  return 1;
}

```

---

## GetMoneyCharacCreate

```asm
// === 0848f06e WongWork::CEventMgr::GetMoneyCharacCreate  [0x0848f06e-0x848f077] ===
 848f06e:	55                   	push   %ebp
 848f06f:	89 e5                	mov    %esp,%ebp
 848f071:	b8 00 00 00 00       	mov    $0x0,%eax
 848f076:	5d                   	pop    %ebp
 848f077:	c3                   	ret

```

```c
// WongWork::CEventMgr::GetMoneyCharacCreate @ 0x848f06e

/* WongWork::CEventMgr::GetMoneyCharacCreate() */

undefined4 WongWork::CEventMgr::GetMoneyCharacCreate(void)

{
  return 0;
}

```

---

## GetPremiumServiceBonus

```asm
// === 0848f078 WongWork::CEventMgr::GetPremiumServiceBonus  [0x0848f078-0x848f0db] ===
 848f078:	55                   	push   %ebp
 848f079:	89 e5                	mov    %esp,%ebp
 848f07b:	83 ec 38             	sub    $0x38,%esp
 848f07e:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 848f085:	00 
 848f086:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 848f08d:	00 
 848f08e:	c7 44 24 18 0b 00 00 	movl   $0xb,0x18(%esp)
 848f095:	00 
 848f096:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 848f09d:	00 
 848f09e:	c7 44 24 10 d6 07 00 	movl   $0x7d6,0x10(%esp)
 848f0a5:	00 
 848f0a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848f0ad:	00 
 848f0ae:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 848f0b5:	00 
 848f0b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848f0bd:	00 
 848f0be:	c7 04 24 d6 07 00 00 	movl   $0x7d6,(%esp)
 848f0c5:	e8 42 fe ff ff       	call   848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>
 848f0ca:	84 c0                	test   %al,%al
 848f0cc:	74 07                	je     848f0d5 <_ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv+0x5d>
 848f0ce:	b8 07 00 00 00       	mov    $0x7,%eax
 848f0d3:	eb 05                	jmp    848f0da <_ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv+0x62>
 848f0d5:	b8 00 00 00 00       	mov    $0x0,%eax
 848f0da:	c9                   	leave
 848f0db:	c3                   	ret

```

```c
// WongWork::CEventMgr::GetPremiumServiceBonus @ 0x848f078

/* WongWork::CEventMgr::GetPremiumServiceBonus() */

undefined4 WongWork::CEventMgr::GetPremiumServiceBonus(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = _IsEventing(0x7d6,1,2,0,0x7d6,1,0xb,0,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}

```

---

## IsChildrensDayEventing

```asm
// === 0848f140 WongWork::CEventMgr::IsChildrensDayEventing  [0x0848f140-0x848f1a3] ===
 848f140:	55                   	push   %ebp
 848f141:	89 e5                	mov    %esp,%ebp
 848f143:	83 ec 38             	sub    $0x38,%esp
 848f146:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 848f14d:	00 
 848f14e:	c7 44 24 1c 06 00 00 	movl   $0x6,0x1c(%esp)
 848f155:	00 
 848f156:	c7 44 24 18 08 00 00 	movl   $0x8,0x18(%esp)
 848f15d:	00 
 848f15e:	c7 44 24 14 05 00 00 	movl   $0x5,0x14(%esp)
 848f165:	00 
 848f166:	c7 44 24 10 d6 07 00 	movl   $0x7d6,0x10(%esp)
 848f16d:	00 
 848f16e:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 848f175:	00 
 848f176:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 848f17d:	00 
 848f17e:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 848f185:	00 
 848f186:	c7 04 24 d6 07 00 00 	movl   $0x7d6,(%esp)
 848f18d:	e8 7a fd ff ff       	call   848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>
 848f192:	84 c0                	test   %al,%al
 848f194:	74 07                	je     848f19d <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv+0x5d>
 848f196:	b8 01 00 00 00       	mov    $0x1,%eax
 848f19b:	eb 05                	jmp    848f1a2 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv+0x62>
 848f19d:	b8 00 00 00 00       	mov    $0x0,%eax
 848f1a2:	c9                   	leave
 848f1a3:	c3                   	ret

```

```c
// WongWork::CEventMgr::IsChildrensDayEventing @ 0x848f140

/* WongWork::CEventMgr::IsChildrensDayEventing() */

bool WongWork::CEventMgr::IsChildrensDayEventing(void)

{
  char cVar1;
  
  cVar1 = _IsEventing(0x7d6,5,5,6,0x7d6,5,8,6,0);
  return cVar1 != '\0';
}

```

---

## IsPCRoomEventing

```asm
// === 0848f0dc WongWork::CEventMgr::IsPCRoomEventing  [0x0848f0dc-0x848f13f] ===
 848f0dc:	55                   	push   %ebp
 848f0dd:	89 e5                	mov    %esp,%ebp
 848f0df:	83 ec 38             	sub    $0x38,%esp
 848f0e2:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 848f0e9:	00 
 848f0ea:	c7 44 24 1c 06 00 00 	movl   $0x6,0x1c(%esp)
 848f0f1:	00 
 848f0f2:	c7 44 24 18 07 00 00 	movl   $0x7,0x18(%esp)
 848f0f9:	00 
 848f0fa:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 848f101:	00 
 848f102:	c7 44 24 10 d6 07 00 	movl   $0x7d6,0x10(%esp)
 848f109:	00 
 848f10a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848f111:	00 
 848f112:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 848f119:	00 
 848f11a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 848f121:	00 
 848f122:	c7 04 24 d6 07 00 00 	movl   $0x7d6,(%esp)
 848f129:	e8 de fd ff ff       	call   848ef0c <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE>
 848f12e:	84 c0                	test   %al,%al
 848f130:	74 07                	je     848f139 <_ZN8WongWork9CEventMgr16IsPCRoomEventingEv+0x5d>
 848f132:	b8 01 00 00 00       	mov    $0x1,%eax
 848f137:	eb 05                	jmp    848f13e <_ZN8WongWork9CEventMgr16IsPCRoomEventingEv+0x62>
 848f139:	b8 00 00 00 00       	mov    $0x0,%eax
 848f13e:	c9                   	leave
 848f13f:	c3                   	ret

```

```c
// WongWork::CEventMgr::IsPCRoomEventing @ 0x848f0dc

/* WongWork::CEventMgr::IsPCRoomEventing() */

bool WongWork::CEventMgr::IsPCRoomEventing(void)

{
  char cVar1;
  
  cVar1 = _IsEventing(0x7d6,1,0x18,0,0x7d6,2,7,6,0);
  return cVar1 != '\0';
}

```

---

## _IsEventing

```asm
// === 0848ef0c WongWork::CEventMgr::_IsEventing  [0x0848ef0c-0x848eff7] ===
 848ef0c:	55                   	push   %ebp
 848ef0d:	89 e5                	mov    %esp,%ebp
 848ef0f:	81 ec a8 00 00 00    	sub    $0xa8,%esp
 848ef15:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 848ef1c:	00 
 848ef1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848ef24:	00 
 848ef25:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 848ef28:	89 04 24             	mov    %eax,(%esp)
 848ef2b:	e8 90 ed be ff       	call   807dcc0 <memset@plt>
 848ef30:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 848ef37:	00 
 848ef38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848ef3f:	00 
 848ef40:	8d 45 98             	lea    -0x68(%ebp),%eax
 848ef43:	89 04 24             	mov    %eax,(%esp)
 848ef46:	e8 75 ed be ff       	call   807dcc0 <memset@plt>
 848ef4b:	8b 45 08             	mov    0x8(%ebp),%eax
 848ef4e:	2d 6c 07 00 00       	sub    $0x76c,%eax
 848ef53:	89 45 ac             	mov    %eax,-0x54(%ebp)
 848ef56:	8b 45 0c             	mov    0xc(%ebp),%eax
 848ef59:	83 e8 01             	sub    $0x1,%eax
 848ef5c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 848ef5f:	8b 45 10             	mov    0x10(%ebp),%eax
 848ef62:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 848ef65:	8b 45 14             	mov    0x14(%ebp),%eax
 848ef68:	89 45 a0             	mov    %eax,-0x60(%ebp)
 848ef6b:	8b 45 18             	mov    0x18(%ebp),%eax
 848ef6e:	2d 6c 07 00 00       	sub    $0x76c,%eax
 848ef73:	89 45 d8             	mov    %eax,-0x28(%ebp)
 848ef76:	8b 45 1c             	mov    0x1c(%ebp),%eax
 848ef79:	83 e8 01             	sub    $0x1,%eax
 848ef7c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 848ef7f:	8b 45 20             	mov    0x20(%ebp),%eax
 848ef82:	89 45 d0             	mov    %eax,-0x30(%ebp)
 848ef85:	8b 45 24             	mov    0x24(%ebp),%eax
 848ef88:	89 45 cc             	mov    %eax,-0x34(%ebp)
 848ef8b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 848ef8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 848ef92:	8d 45 98             	lea    -0x68(%ebp),%eax
 848ef95:	89 04 24             	mov    %eax,(%esp)
 848ef98:	e8 e9 2d 22 00       	call   86b1d86 <_Z7in_timeP2tmS0_>
 848ef9d:	84 c0                	test   %al,%al
 848ef9f:	74 50                	je     848eff1 <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xe5>
 848efa1:	83 7d 28 01          	cmpl   $0x1,0x28(%ebp)
 848efa5:	75 43                	jne    848efea <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xde>
 848efa7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 848efae:	e8 eb cc c3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 848efb3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 848efb6:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 848efbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 848efc0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 848efc3:	89 04 24             	mov    %eax,(%esp)
 848efc6:	e8 95 f3 be ff       	call   807e360 <localtime_r@plt>
 848efcb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848efce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848efd1:	8b 40 18             	mov    0x18(%eax),%eax
 848efd4:	85 c0                	test   %eax,%eax
 848efd6:	74 0b                	je     848efe3 <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xd7>
 848efd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848efdb:	8b 40 18             	mov    0x18(%eax),%eax
 848efde:	83 f8 06             	cmp    $0x6,%eax
 848efe1:	75 0e                	jne    848eff1 <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xe5>
 848efe3:	b8 01 00 00 00       	mov    $0x1,%eax
 848efe8:	eb 0c                	jmp    848eff6 <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xea>
 848efea:	b8 01 00 00 00       	mov    $0x1,%eax
 848efef:	eb 05                	jmp    848eff6 <_ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE+0xea>
 848eff1:	b8 00 00 00 00       	mov    $0x0,%eax
 848eff6:	c9                   	leave
 848eff7:	c3                   	ret

```

```c
// WongWork::CEventMgr::_IsEventing @ 0x848ef0c

/* WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int,
   WongWork::CEventMgr::EVENT_TYPE) */

undefined4
WongWork::CEventMgr::_IsEventing
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
          int param_8,int param_9)

{
  char cVar1;
  tm *ptVar2;
  tm local_98;
  tm local_6c;
  tm local_40;
  time_t local_14 [4];
  
  memset(&local_40,0,0x2c);
  memset(&local_6c,0,0x2c);
  local_6c.tm_year = param_1 + -0x76c;
  local_6c.tm_mon = param_2 + -1;
  local_6c.tm_mday = param_3;
  local_6c.tm_hour = param_4;
  local_40.tm_year = param_5 + -0x76c;
  local_40.tm_mon = param_6 + -1;
  local_40.tm_mday = param_7;
  local_40.tm_hour = param_8;
  cVar1 = in_time(&local_6c,&local_40);
  if (cVar1 != '\0') {
    if (param_9 != 1) {
      return 1;
    }
    local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    ptVar2 = localtime_r(local_14,&local_98);
    if ((ptVar2->tm_wday == 0) || (ptVar2->tm_wday == 6)) {
      return 1;
    }
  }
  return 0;
}

```

