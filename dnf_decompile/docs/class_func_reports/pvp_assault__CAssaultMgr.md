# pvp_assault__CAssaultMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 30

---

## AvailableAssault

```asm
// === 082f0022 pvp_assault::CAssaultMgr::AvailableAssault  [0x082f0022-0x82f023b] ===
 82f0022:	55                   	push   %ebp
 82f0023:	89 e5                	mov    %esp,%ebp
 82f0025:	83 ec 28             	sub    $0x28,%esp
 82f0028:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82f002f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82f0036:	c7 45 f4 0f 00 00 00 	movl   $0xf,-0xc(%ebp)
 82f003d:	a1 50 be 40 09       	mov    0x940be50,%eax
 82f0042:	89 04 24             	mov    %eax,(%esp)
 82f0045:	e8 c6 f8 18 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82f004a:	84 c0                	test   %al,%al
 82f004c:	74 16                	je     82f0064 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x42>
 82f004e:	8b 45 08             	mov    0x8(%ebp),%eax
 82f0051:	89 04 24             	mov    %eax,(%esp)
 82f0054:	e8 0b 55 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82f0059:	3c 07                	cmp    $0x7,%al
 82f005b:	75 07                	jne    82f0064 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x42>
 82f005d:	b8 01 00 00 00       	mov    $0x1,%eax
 82f0062:	eb 05                	jmp    82f0069 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x47>
 82f0064:	b8 00 00 00 00       	mov    $0x0,%eax
 82f0069:	84 c0                	test   %al,%al
 82f006b:	74 07                	je     82f0074 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x52>
 82f006d:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
 82f0074:	8b 45 08             	mov    0x8(%ebp),%eax
 82f0077:	89 04 24             	mov    %eax,(%esp)
 82f007a:	e8 95 a2 de ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82f007f:	84 c0                	test   %al,%al
 82f0081:	74 0e                	je     82f0091 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x6f>
 82f0083:	8b 45 08             	mov    0x8(%ebp),%eax
 82f0086:	89 04 24             	mov    %eax,(%esp)
 82f0089:	e8 be 50 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82f008e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82f0091:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f0094:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f0098:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f009b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f009f:	8b 45 08             	mov    0x8(%ebp),%eax
 82f00a2:	89 04 24             	mov    %eax,(%esp)
 82f00a5:	e8 94 fb 35 00       	call   864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>
 82f00aa:	83 f0 01             	xor    $0x1,%eax
 82f00ad:	84 c0                	test   %al,%al
 82f00af:	74 2c                	je     82f00dd <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0xbb>
 82f00b1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f00b8:	e8 43 57 43 00       	call   8725800 <__cxa_allocate_exception>
 82f00bd:	89 c2                	mov    %eax,%edx
 82f00bf:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 82f00c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f00cc:	00 
 82f00cd:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f00d4:	08 
 82f00d5:	89 04 24             	mov    %eax,(%esp)
 82f00d8:	e8 73 4b 43 00       	call   8724c50 <__cxa_throw>
 82f00dd:	8b 45 08             	mov    0x8(%ebp),%eax
 82f00e0:	89 04 24             	mov    %eax,(%esp)
 82f00e3:	e8 d0 a1 de ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82f00e8:	83 f8 1d             	cmp    $0x1d,%eax
 82f00eb:	0f 9e c0             	setle  %al
 82f00ee:	84 c0                	test   %al,%al
 82f00f0:	74 71                	je     82f0163 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x141>
 82f00f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82f00f5:	89 04 24             	mov    %eax,(%esp)
 82f00f8:	e8 7f a2 de ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82f00fd:	0f b7 c0             	movzwl %ax,%eax
 82f0100:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82f0103:	8b 45 08             	mov    0x8(%ebp),%eax
 82f0106:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82f0109:	75 2c                	jne    82f0137 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x115>
 82f010b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f0112:	e8 e9 56 43 00       	call   8725800 <__cxa_allocate_exception>
 82f0117:	89 c2                	mov    %eax,%edx
 82f0119:	c7 02 0d 00 00 00    	movl   $0xd,(%edx)
 82f011f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f0126:	00 
 82f0127:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f012e:	08 
 82f012f:	89 04 24             	mov    %eax,(%esp)
 82f0132:	e8 19 4b 43 00       	call   8724c50 <__cxa_throw>
 82f0137:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f013e:	e8 bd 56 43 00       	call   8725800 <__cxa_allocate_exception>
 82f0143:	89 c2                	mov    %eax,%edx
 82f0145:	c7 02 0e 00 00 00    	movl   $0xe,(%edx)
 82f014b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f0152:	00 
 82f0153:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f015a:	08 
 82f015b:	89 04 24             	mov    %eax,(%esp)
 82f015e:	e8 ed 4a 43 00       	call   8724c50 <__cxa_throw>
 82f0163:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82f0167:	0f 84 cd 00 00 00    	je     82f023a <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x218>
 82f016d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f0170:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f0174:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82f0177:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f017b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82f017e:	89 04 24             	mov    %eax,(%esp)
 82f0181:	e8 8a a0 2a 00       	call   859a210 <_ZN6CParty20is_limit_minimum_ageEiRi>
 82f0186:	83 f0 01             	xor    $0x1,%eax
 82f0189:	84 c0                	test   %al,%al
 82f018b:	74 2c                	je     82f01b9 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x197>
 82f018d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f0194:	e8 67 56 43 00       	call   8725800 <__cxa_allocate_exception>
 82f0199:	89 c2                	mov    %eax,%edx
 82f019b:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 82f01a1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f01a8:	00 
 82f01a9:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f01b0:	08 
 82f01b1:	89 04 24             	mov    %eax,(%esp)
 82f01b4:	e8 97 4a 43 00       	call   8724c50 <__cxa_throw>
 82f01b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f01bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f01c0:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 82f01c7:	00 
 82f01c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82f01cb:	89 04 24             	mov    %eax,(%esp)
 82f01ce:	e8 b3 a0 2a 00       	call   859a286 <_ZN6CParty22is_limit_minimum_levelEiRi>
 82f01d3:	83 f0 01             	xor    $0x1,%eax
 82f01d6:	84 c0                	test   %al,%al
 82f01d8:	74 60                	je     82f023a <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x218>
 82f01da:	8b 45 08             	mov    0x8(%ebp),%eax
 82f01dd:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82f01e0:	75 2c                	jne    82f020e <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_+0x1ec>
 82f01e2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f01e9:	e8 12 56 43 00       	call   8725800 <__cxa_allocate_exception>
 82f01ee:	89 c2                	mov    %eax,%edx
 82f01f0:	c7 02 fe 00 00 00    	movl   $0xfe,(%edx)
 82f01f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f01fd:	00 
 82f01fe:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f0205:	08 
 82f0206:	89 04 24             	mov    %eax,(%esp)
 82f0209:	e8 42 4a 43 00       	call   8724c50 <__cxa_throw>
 82f020e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82f0215:	e8 e6 55 43 00       	call   8725800 <__cxa_allocate_exception>
 82f021a:	89 c2                	mov    %eax,%edx
 82f021c:	c7 02 ff 00 00 00    	movl   $0xff,(%edx)
 82f0222:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82f0229:	00 
 82f022a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82f0231:	08 
 82f0232:	89 04 24             	mov    %eax,(%esp)
 82f0235:	e8 16 4a 43 00       	call   8724c50 <__cxa_throw>
 82f023a:	c9                   	leave
 82f023b:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::AvailableAssault @ 0x82f0022

/* pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*) */

void pvp_assault::CAssaultMgr::AvailableAssault(CUser *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_18;
  CParty *local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = (CParty *)0x0;
  local_10 = 0xf;
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082f0069;
    }
  }
  bVar1 = false;
LAB_082f0069:
  if (bVar1) {
    local_10 = 0xc;
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_14 = (CParty *)CUser::GetParty(param_1);
  }
  cVar2 = CUser::CheckLimitMiniumAge(param_1,local_10,(int *)&local_18);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if (iVar4 < 0x1e) {
    local_18 = CUser::get_unique_id(param_1);
    local_18 = local_18 & 0xffff;
    if (param_1 == param_2) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  if (local_14 != (CParty *)0x0) {
    cVar2 = CParty::is_limit_minimum_age(local_14,local_10,(int *)&local_18);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CParty::is_limit_minimum_level(local_14,0x1e,(int *)&local_18);
    if (cVar2 != '\x01') {
      if (param_1 == param_2) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0xfe;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xff;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  return;
}

```

---

## ForcedMoveAtPowerWarPlace

```asm
// === 082ed672 pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace  [0x082ed672-0x82ed6a5] ===
 82ed672:	55                   	push   %ebp
 82ed673:	89 e5                	mov    %esp,%ebp
 82ed675:	83 ec 28             	sub    $0x28,%esp
 82ed678:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed67b:	89 04 24             	mov    %eax,(%esp)
 82ed67e:	e8 23 00 00 00       	call   82ed6a6 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser>
 82ed683:	eb 1f                	jmp    82ed6a4 <_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser+0x32>
 82ed685:	83 fa 01             	cmp    $0x1,%edx
 82ed688:	74 08                	je     82ed692 <_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser+0x20>
 82ed68a:	89 04 24             	mov    %eax,(%esp)
 82ed68d:	e8 be 60 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ed692:	89 04 24             	mov    %eax,(%esp)
 82ed695:	e8 46 86 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ed69a:	8b 00                	mov    (%eax),%eax
 82ed69c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ed69f:	e8 8c 85 43 00       	call   8725c30 <__cxa_end_catch>
 82ed6a4:	c9                   	leave
 82ed6a5:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace @ 0x82ed672

/* pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*) */

void __thiscall
pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CAssaultMgr *this,CUser *param_1)

{
                    /* try { // try from 082ed67e to 082ed682 has its CatchHandler @ 082ed685 */
  CAssaultPlace::ForcedMoveAtPowerWarPlace(param_1);
  return;
}

```

---

## FreeAssaultPlace

```asm
// === 082edb6a pvp_assault::CAssaultMgr::FreeAssaultPlace  [0x082edb6a-0x82edc04] ===
 82edb6a:	55                   	push   %ebp
 82edb6b:	89 e5                	mov    %esp,%ebp
 82edb6d:	83 ec 28             	sub    $0x28,%esp
 82edb70:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82edb74:	74 68                	je     82edbde <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE+0x74>
 82edb76:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edb79:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82edb7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82edb7f:	8d 48 08             	lea    0x8(%eax),%ecx
 82edb82:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82edb85:	8d 55 f0             	lea    -0x10(%ebp),%edx
 82edb88:	89 54 24 08          	mov    %edx,0x8(%esp)
 82edb8c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82edb90:	89 04 24             	mov    %eax,(%esp)
 82edb93:	e8 06 41 00 00       	call   82f1c9e <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 82edb98:	83 ec 04             	sub    $0x4,%esp
 82edb9b:	8b 45 08             	mov    0x8(%ebp),%eax
 82edb9e:	8d 50 08             	lea    0x8(%eax),%edx
 82edba1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82edba4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82edba8:	89 04 24             	mov    %eax,(%esp)
 82edbab:	e8 88 40 00 00       	call   82f1c38 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 82edbb0:	83 ec 04             	sub    $0x4,%esp
 82edbb3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82edbb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82edbba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82edbbd:	89 04 24             	mov    %eax,(%esp)
 82edbc0:	e8 99 40 00 00       	call   82f1c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEneERKS6_>
 82edbc5:	84 c0                	test   %al,%al
 82edbc7:	74 15                	je     82edbde <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE+0x74>
 82edbc9:	8b 45 08             	mov    0x8(%ebp),%eax
 82edbcc:	8d 50 08             	lea    0x8(%eax),%edx
 82edbcf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82edbd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82edbd6:	89 14 24             	mov    %edx,(%esp)
 82edbd9:	e8 00 41 00 00       	call   82f1cde <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE5eraseESt17_Rb_tree_iteratorIS7_E>
 82edbde:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82edbe2:	74 1f                	je     82edc03 <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE+0x99>
 82edbe4:	8b 45 10             	mov    0x10(%ebp),%eax
 82edbe7:	89 04 24             	mov    %eax,(%esp)
 82edbea:	e8 c9 8e ff ff       	call   82e6ab8 <_ZN11pvp_assault13CAssaultPlace5ResetEv>
 82edbef:	e8 b5 33 00 00       	call   82f0fa9 <_ZN11pvp_assault30GetInstanceAssaultPlaceFactoryEv>
 82edbf4:	8b 55 10             	mov    0x10(%ebp),%edx
 82edbf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82edbfb:	89 04 24             	mov    %eax,(%esp)
 82edbfe:	e8 65 33 00 00       	call   82f0f68 <_ZN11pvp_assault20CAssaultPlaceFactory16FreeAssaultPlaceEPNS_13CAssaultPlaceE>
 82edc03:	c9                   	leave
 82edc04:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::FreeAssaultPlace @ 0x82edb6a

/* pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*) */

void __thiscall
pvp_assault::CAssaultMgr::FreeAssaultPlace(CAssaultMgr *this,int param_1,CAssaultPlace *param_2)

{
  char cVar1;
  CAssaultPlaceFactory *this_00;
  int *piVar2;
  uint local_18;
  int local_14;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_10 [12];
  
  if (param_1 != 0) {
    local_14 = param_1;
    piVar2 = &local_14;
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::find(&local_18);
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)&local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      std::
      map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
      ::erase((map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
               *)(this + 8),local_18,piVar2);
    }
  }
  if (param_2 != (CAssaultPlace *)0x0) {
    CAssaultPlace::Reset(param_2);
    this_00 = (CAssaultPlaceFactory *)GetInstanceAssaultPlaceFactory();
    CAssaultPlaceFactory::FreeAssaultPlace(this_00,param_2);
  }
  return;
}

```

---

## FrocedCloseAssaults

```asm
// === 082ed5f4 pvp_assault::CAssaultMgr::FrocedCloseAssaults  [0x082ed5f4-0x82ed671] ===
 82ed5f4:	55                   	push   %ebp
 82ed5f5:	89 e5                	mov    %esp,%ebp
 82ed5f7:	83 ec 28             	sub    $0x28,%esp
 82ed5fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed5fd:	8d 50 08             	lea    0x8(%eax),%edx
 82ed600:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ed603:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed607:	89 04 24             	mov    %eax,(%esp)
 82ed60a:	e8 03 46 00 00       	call   82f1c12 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE5beginEv>
 82ed60f:	83 ec 04             	sub    $0x4,%esp
 82ed612:	eb 2d                	jmp    82ed641 <_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv+0x4d>
 82ed614:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ed617:	89 04 24             	mov    %eax,(%esp)
 82ed61a:	e8 71 46 00 00       	call   82f1c90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEptEv>
 82ed61f:	8b 40 04             	mov    0x4(%eax),%eax
 82ed622:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ed625:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82ed629:	74 0b                	je     82ed636 <_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv+0x42>
 82ed62b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ed62e:	89 04 24             	mov    %eax,(%esp)
 82ed631:	e8 6c c3 ff ff       	call   82e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>
 82ed636:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ed639:	89 04 24             	mov    %eax,(%esp)
 82ed63c:	e8 31 46 00 00       	call   82f1c72 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEppEv>
 82ed641:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed644:	8d 50 08             	lea    0x8(%eax),%edx
 82ed647:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82ed64a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed64e:	89 04 24             	mov    %eax,(%esp)
 82ed651:	e8 e2 45 00 00       	call   82f1c38 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 82ed656:	83 ec 04             	sub    $0x4,%esp
 82ed659:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82ed65c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed660:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ed663:	89 04 24             	mov    %eax,(%esp)
 82ed666:	e8 f3 45 00 00       	call   82f1c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEneERKS6_>
 82ed66b:	84 c0                	test   %al,%al
 82ed66d:	75 a5                	jne    82ed614 <_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv+0x20>
 82ed66f:	c9                   	leave
 82ed670:	c3                   	ret
 82ed671:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::FrocedCloseAssaults @ 0x82ed5f4

/* pvp_assault::CAssaultMgr::FrocedCloseAssaults() */

void pvp_assault::CAssaultMgr::FrocedCloseAssaults(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [4];
  CAssaultPlace *local_10;
  
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_18);
    local_10 = *(CAssaultPlace **)(iVar2 + 4);
    if (local_10 != (CAssaultPlace *)0x0) {
      CAssaultPlace::EndAssault(local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> *)
               local_18);
  }
  return;
}

```

---

## GetRequestAssaultNeedMoney

```asm
// === 082edc86 pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney  [0x082edc86-0x82edfb9] ===
 82edc86:	55                   	push   %ebp
 82edc87:	89 e5                	mov    %esp,%ebp
 82edc89:	53                   	push   %ebx
 82edc8a:	83 ec 64             	sub    $0x64,%esp
 82edc8d:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82edc92:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 82edc99:	00 
 82edc9a:	89 04 24             	mov    %eax,(%esp)
 82edc9d:	e8 f6 7c e2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 82edca2:	8b 10                	mov    (%eax),%edx
 82edca4:	83 c2 34             	add    $0x34,%edx
 82edca7:	8b 12                	mov    (%edx),%edx
 82edca9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82edcb0:	00 
 82edcb1:	89 04 24             	mov    %eax,(%esp)
 82edcb4:	ff d2                	call   *%edx
 82edcb6:	84 c0                	test   %al,%al
 82edcb8:	74 0a                	je     82edcc4 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x3e>
 82edcba:	b8 00 00 00 00       	mov    $0x0,%eax
 82edcbf:	e9 ef 02 00 00       	jmp    82edfb3 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x32d>
 82edcc4:	a1 50 be 40 09       	mov    0x940be50,%eax
 82edcc9:	89 04 24             	mov    %eax,(%esp)
 82edccc:	e8 3f 1c 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82edcd1:	84 c0                	test   %al,%al
 82edcd3:	74 16                	je     82edceb <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x65>
 82edcd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edcd8:	89 04 24             	mov    %eax,(%esp)
 82edcdb:	e8 84 78 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82edce0:	3c 07                	cmp    $0x7,%al
 82edce2:	75 07                	jne    82edceb <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x65>
 82edce4:	b8 01 00 00 00       	mov    $0x1,%eax
 82edce9:	eb 05                	jmp    82edcf0 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x6a>
 82edceb:	b8 00 00 00 00       	mov    $0x0,%eax
 82edcf0:	84 c0                	test   %al,%al
 82edcf2:	74 0a                	je     82edcfe <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x78>
 82edcf4:	b8 00 00 00 00       	mov    $0x0,%eax
 82edcf9:	e9 b5 02 00 00       	jmp    82edfb3 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x32d>
 82edcfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edd01:	89 04 24             	mov    %eax,(%esp)
 82edd04:	e8 af c5 de ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82edd09:	89 c3                	mov    %eax,%ebx
 82edd0b:	e8 8b e4 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edd10:	83 c0 68             	add    $0x68,%eax
 82edd13:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82edd17:	89 04 24             	mov    %eax,(%esp)
 82edd1a:	e8 9d 26 00 00       	call   82f03bc <_ZN21ServerParameterScript15getAssaultPriceEi>
 82edd1f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82edd22:	8b 45 10             	mov    0x10(%ebp),%eax
 82edd25:	89 04 24             	mov    %eax,(%esp)
 82edd28:	e8 ab 2d 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82edd2d:	85 c0                	test   %eax,%eax
 82edd2f:	0f 94 c0             	sete   %al
 82edd32:	84 c0                	test   %al,%al
 82edd34:	0f 84 36 02 00 00    	je     82edf70 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x2ea>
 82edd3a:	8b 45 10             	mov    0x10(%ebp),%eax
 82edd3d:	89 04 24             	mov    %eax,(%esp)
 82edd40:	e8 f1 31 00 00       	call   82f0f36 <_ZN5CUser17GetAutoClientRateEv>
 82edd45:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82edd48:	db 45 c0             	fildl  -0x40(%ebp)
 82edd4b:	d9 05 8c d1 c1 08    	flds   0x8c1d18c
 82edd51:	de f9                	fdivrp %st,%st(1)
 82edd53:	d9 e8                	fld1
 82edd55:	de c1                	faddp  %st,%st(1)
 82edd57:	d9 5d d8             	fstps  -0x28(%ebp)
 82edd5a:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 82edd61:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82edd68:	e8 31 df dd ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82edd6d:	89 c3                	mov    %eax,%ebx
 82edd6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edd72:	89 04 24             	mov    %eax,(%esp)
 82edd75:	e8 34 1a f4 ff       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 82edd7a:	89 da                	mov    %ebx,%edx
 82edd7c:	29 c2                	sub    %eax,%edx
 82edd7e:	89 d0                	mov    %edx,%eax
 82edd80:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82edd83:	db 45 c0             	fildl  -0x40(%ebp)
 82edd86:	d9 5d e0             	fstps  -0x20(%ebp)
 82edd89:	d9 45 e0             	flds   -0x20(%ebp)
 82edd8c:	d9 ee                	fldz
 82edd8e:	da e9                	fucompp
 82edd90:	df e0                	fnstsw %ax
 82edd92:	f6 c4 05             	test   $0x5,%ah
 82edd95:	0f 94 c0             	sete   %al
 82edd98:	84 c0                	test   %al,%al
 82edd9a:	74 0c                	je     82edda8 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x122>
 82edd9c:	d9 45 e0             	flds   -0x20(%ebp)
 82edd9f:	d9 e8                	fld1
 82edda1:	de c1                	faddp  %st,%st(1)
 82edda3:	d9 5d e0             	fstps  -0x20(%ebp)
 82edda6:	eb 44                	jmp    82eddec <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x166>
 82edda8:	d9 45 e0             	flds   -0x20(%ebp)
 82eddab:	d9 7d c6             	fnstcw -0x3a(%ebp)
 82eddae:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 82eddb2:	b4 0c                	mov    $0xc,%ah
 82eddb4:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 82eddb8:	d9 6d c4             	fldcw  -0x3c(%ebp)
 82eddbb:	db 5d c0             	fistpl -0x40(%ebp)
 82eddbe:	d9 6d c6             	fldcw  -0x3a(%ebp)
 82eddc1:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 82eddc4:	e8 d2 e3 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eddc9:	8b 80 04 06 00 00    	mov    0x604(%eax),%eax
 82eddcf:	39 c3                	cmp    %eax,%ebx
 82eddd1:	0f 9f c0             	setg   %al
 82eddd4:	84 c0                	test   %al,%al
 82eddd6:	74 14                	je     82eddec <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x166>
 82eddd8:	e8 be e3 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edddd:	8b 80 04 06 00 00    	mov    0x604(%eax),%eax
 82edde3:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82edde6:	db 45 c0             	fildl  -0x40(%ebp)
 82edde9:	d9 5d e0             	fstps  -0x20(%ebp)
 82eddec:	e8 aa e3 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eddf1:	8b 80 04 06 00 00    	mov    0x604(%eax),%eax
 82eddf7:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82eddfa:	db 45 c0             	fildl  -0x40(%ebp)
 82eddfd:	d8 4d d8             	fmuls  -0x28(%ebp)
 82ede00:	d9 5d e4             	fstps  -0x1c(%ebp)
 82ede03:	d9 45 e4             	flds   -0x1c(%ebp)
 82ede06:	d9 ee                	fldz
 82ede08:	da e9                	fucompp
 82ede0a:	df e0                	fnstsw %ax
 82ede0c:	f6 c4 05             	test   $0x5,%ah
 82ede0f:	0f 94 c0             	sete   %al
 82ede12:	84 c0                	test   %al,%al
 82ede14:	74 0a                	je     82ede20 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x19a>
 82ede16:	d9 45 e4             	flds   -0x1c(%ebp)
 82ede19:	d9 e8                	fld1
 82ede1b:	de c1                	faddp  %st,%st(1)
 82ede1d:	d9 5d e4             	fstps  -0x1c(%ebp)
 82ede20:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 82ede25:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82ede28:	d9 45 e0             	flds   -0x20(%ebp)
 82ede2b:	d8 65 e4             	fsubs  -0x1c(%ebp)
 82ede2e:	d9 ee                	fldz
 82ede30:	da e9                	fucompp
 82ede32:	df e0                	fnstsw %ax
 82ede34:	f6 c4 05             	test   $0x5,%ah
 82ede37:	0f 94 c0             	sete   %al
 82ede3a:	84 c0                	test   %al,%al
 82ede3c:	74 25                	je     82ede63 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x1dd>
 82ede3e:	db 45 dc             	fildl  -0x24(%ebp)
 82ede41:	d9 5d b0             	fstps  -0x50(%ebp)
 82ede44:	e8 52 e3 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ede49:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 82ede4f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82ede52:	db 45 c0             	fildl  -0x40(%ebp)
 82ede55:	d9 45 e0             	flds   -0x20(%ebp)
 82ede58:	d8 75 e4             	fdivs  -0x1c(%ebp)
 82ede5b:	de e9                	fsubrp %st,%st(1)
 82ede5d:	d8 4d b0             	fmuls  -0x50(%ebp)
 82ede60:	d9 5d e8             	fstps  -0x18(%ebp)
 82ede63:	d9 45 e8             	flds   -0x18(%ebp)
 82ede66:	d9 e8                	fld1
 82ede68:	da e9                	fucompp
 82ede6a:	df e0                	fnstsw %ax
 82ede6c:	f6 c4 45             	test   $0x45,%ah
 82ede6f:	0f 94 c0             	sete   %al
 82ede72:	84 c0                	test   %al,%al
 82ede74:	74 0a                	je     82ede80 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x1fa>
 82ede76:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 82ede7b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82ede7e:	eb 36                	jmp    82edeb6 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x230>
 82ede80:	e8 16 e3 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ede85:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 82ede8b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82ede8e:	db 45 c0             	fildl  -0x40(%ebp)
 82ede91:	d9 45 e8             	flds   -0x18(%ebp)
 82ede94:	da e9                	fucompp
 82ede96:	df e0                	fnstsw %ax
 82ede98:	f6 c4 45             	test   $0x45,%ah
 82ede9b:	0f 94 c0             	sete   %al
 82ede9e:	84 c0                	test   %al,%al
 82edea0:	74 14                	je     82edeb6 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x230>
 82edea2:	e8 f4 e2 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edea7:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 82edead:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82edeb0:	db 45 c0             	fildl  -0x40(%ebp)
 82edeb3:	d9 5d e8             	fstps  -0x18(%ebp)
 82edeb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edeb9:	89 04 24             	mov    %eax,(%esp)
 82edebc:	e8 f7 c3 de ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82edec1:	89 c3                	mov    %eax,%ebx
 82edec3:	8b 45 10             	mov    0x10(%ebp),%eax
 82edec6:	89 04 24             	mov    %eax,(%esp)
 82edec9:	e8 ea c3 de ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82edece:	89 da                	mov    %ebx,%edx
 82eded0:	29 c2                	sub    %eax,%edx
 82eded2:	89 d0                	mov    %edx,%eax
 82eded4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82eded7:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 82ededc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ededf:	83 7d ec 08          	cmpl   $0x8,-0x14(%ebp)
 82edee3:	7e 24                	jle    82edf09 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x283>
 82edee5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82edee8:	83 e8 08             	sub    $0x8,%eax
 82edeeb:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82edeee:	db 45 c0             	fildl  -0x40(%ebp)
 82edef1:	d9 5d b4             	fstps  -0x4c(%ebp)
 82edef4:	e8 a2 e2 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edef9:	d9 80 08 06 00 00    	flds   0x608(%eax)
 82edeff:	d8 4d b4             	fmuls  -0x4c(%ebp)
 82edf02:	d9 e8                	fld1
 82edf04:	de c1                	faddp  %st,%st(1)
 82edf06:	d9 5d f0             	fstps  -0x10(%ebp)
 82edf09:	db 45 d4             	fildl  -0x2c(%ebp)
 82edf0c:	d8 4d e8             	fmuls  -0x18(%ebp)
 82edf0f:	d8 4d f0             	fmuls  -0x10(%ebp)
 82edf12:	d8 4d d8             	fmuls  -0x28(%ebp)
 82edf15:	d9 7d c6             	fnstcw -0x3a(%ebp)
 82edf18:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 82edf1c:	b4 0c                	mov    $0xc,%ah
 82edf1e:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 82edf22:	d9 6d c4             	fldcw  -0x3c(%ebp)
 82edf25:	db 5d f4             	fistpl -0xc(%ebp)
 82edf28:	d9 6d c6             	fldcw  -0x3a(%ebp)
 82edf2b:	db 45 f4             	fildl  -0xc(%ebp)
 82edf2e:	d9 5d b8             	fstps  -0x48(%ebp)
 82edf31:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edf34:	89 04 24             	mov    %eax,(%esp)
 82edf37:	e8 9c 2b 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82edf3c:	89 c3                	mov    %eax,%ebx
 82edf3e:	e8 58 e2 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edf43:	83 c0 68             	add    $0x68,%eax
 82edf46:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82edf4a:	89 04 24             	mov    %eax,(%esp)
 82edf4d:	e8 16 e7 79 00       	call   8a8c668 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi>
 82edf52:	d8 4d b8             	fmuls  -0x48(%ebp)
 82edf55:	d9 7d c6             	fnstcw -0x3a(%ebp)
 82edf58:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 82edf5c:	b4 0c                	mov    $0xc,%ah
 82edf5e:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 82edf62:	d9 6d c4             	fldcw  -0x3c(%ebp)
 82edf65:	db 5d f4             	fistpl -0xc(%ebp)
 82edf68:	d9 6d c6             	fldcw  -0x3a(%ebp)
 82edf6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82edf6e:	eb 43                	jmp    82edfb3 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_+0x32d>
 82edf70:	db 45 d4             	fildl  -0x2c(%ebp)
 82edf73:	d9 5d bc             	fstps  -0x44(%ebp)
 82edf76:	8b 45 10             	mov    0x10(%ebp),%eax
 82edf79:	89 04 24             	mov    %eax,(%esp)
 82edf7c:	e8 57 2b 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82edf81:	89 c3                	mov    %eax,%ebx
 82edf83:	e8 13 e2 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82edf88:	83 c0 68             	add    $0x68,%eax
 82edf8b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82edf8f:	89 04 24             	mov    %eax,(%esp)
 82edf92:	e8 79 24 00 00       	call   82f0410 <_ZN21ServerParameterScript19getChaosPointWeightEi>
 82edf97:	d8 4d bc             	fmuls  -0x44(%ebp)
 82edf9a:	d9 7d c6             	fnstcw -0x3a(%ebp)
 82edf9d:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 82edfa1:	b4 0c                	mov    $0xc,%ah
 82edfa3:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 82edfa7:	d9 6d c4             	fldcw  -0x3c(%ebp)
 82edfaa:	db 5d c0             	fistpl -0x40(%ebp)
 82edfad:	d9 6d c6             	fldcw  -0x3a(%ebp)
 82edfb0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82edfb3:	83 c4 64             	add    $0x64,%esp
 82edfb6:	5b                   	pop    %ebx
 82edfb7:	5d                   	pop    %ebp
 82edfb8:	c3                   	ret
 82edfb9:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney @ 0x82edc86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney(CUser*, CUser*) */

int __thiscall
pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney
          (CAssaultMgr *this,CUser *param_1,CUser *param_2)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longdouble lVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar3 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
  if (cVar3 == '\0') {
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar3 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = 0;
    }
    else {
      iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar6 = G_CDataManager();
      iVar5 = ServerParameterScript::getAssaultPrice((ServerParameterScript *)(iVar6 + 0x68),iVar5);
      iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
      if (iVar6 == 0) {
        iVar6 = CUser::GetAutoClientRate(param_2);
        fVar2 = (float)iVar6 / _DAT_08c1d18c + 1.0;
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar7 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
        local_24 = (float)(iVar6 - iVar7);
        if (0.0 < local_24) {
          iVar6 = G_CDataManager();
          if (*(int *)(iVar6 + 0x604) < (int)ROUND(local_24)) {
            iVar6 = G_CDataManager();
            local_24 = (float)*(int *)(iVar6 + 0x604);
          }
        }
        else {
          local_24 = local_24 + 1.0;
        }
        iVar6 = G_CDataManager();
        local_20 = (float)*(int *)(iVar6 + 0x604) * fVar2;
        if (local_20 <= 0.0) {
          local_20 = local_20 + 1.0;
        }
        local_1c = 1.0;
        if (local_24 - local_20 <= 0.0) {
          iVar6 = G_CDataManager();
          local_1c = ((float)*(int *)(iVar6 + 0x600) - local_24 / local_20) * 1.0;
        }
        if (1.0 <= local_1c) {
          iVar6 = G_CDataManager();
          if ((float)*(int *)(iVar6 + 0x600) < local_1c) {
            iVar6 = G_CDataManager();
            local_1c = (float)*(int *)(iVar6 + 0x600);
          }
        }
        else {
          local_1c = 1.0;
        }
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        local_14 = 1.0;
        if (8 < iVar6 - iVar7) {
          iVar8 = G_CDataManager();
          local_14 = *(float *)(iVar8 + 0x608) * (float)((iVar6 - iVar7) + -8) + 1.0;
        }
        iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_1);
        iVar7 = G_CDataManager();
        lVar9 = (longdouble)
                ServerParameterScript::getAssaultPriceChaospointWeight
                          ((ServerParameterScript *)(iVar7 + 0x68),iVar6);
        iVar5 = (int)ROUND(lVar9 * (longdouble)
                                   (int)ROUND((float)iVar5 * local_1c * local_14 * fVar2));
      }
      else {
        iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
        iVar7 = G_CDataManager();
        lVar9 = (longdouble)
                ServerParameterScript::getChaosPointWeight
                          ((ServerParameterScript *)(iVar7 + 0x68),iVar6);
        iVar5 = (int)ROUND(lVar9 * (longdouble)iVar5);
      }
    }
    return iVar5;
  }
  return 0;
}

```

---

## NotifyGhostTime

```asm
// === 082eff42 pvp_assault::CAssaultMgr::NotifyGhostTime  [0x082eff42-0x82f0021] ===
 82eff42:	55                   	push   %ebp
 82eff43:	89 e5                	mov    %esp,%ebp
 82eff45:	56                   	push   %esi
 82eff46:	53                   	push   %ebx
 82eff47:	83 ec 20             	sub    $0x20,%esp
 82eff4a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 82eff4e:	0f 84 c5 00 00 00    	je     82f0019 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii+0xd7>
 82eff54:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eff57:	89 04 24             	mov    %eax,(%esp)
 82eff5a:	e8 ed dd 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eff5f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eff62:	89 04 24             	mov    %eax,(%esp)
 82eff65:	e8 7c b9 dd ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 82eff6a:	c7 44 24 08 85 01 00 	movl   $0x185,0x8(%esp)
 82eff71:	00 
 82eff72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82eff79:	00 
 82eff7a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eff7d:	89 04 24             	mov    %eax,(%esp)
 82eff80:	e8 77 b9 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82eff85:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eff88:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eff8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eff8f:	89 04 24             	mov    %eax,(%esp)
 82eff92:	e8 a5 b9 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82eff97:	8b 45 10             	mov    0x10(%ebp),%eax
 82eff9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eff9e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82effa1:	89 04 24             	mov    %eax,(%esp)
 82effa4:	e8 93 b9 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82effa9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82effb0:	00 
 82effb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82effb4:	89 04 24             	mov    %eax,(%esp)
 82effb7:	e8 9c b9 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82effbc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82effbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82effc3:	8b 45 08             	mov    0x8(%ebp),%eax
 82effc6:	89 04 24             	mov    %eax,(%esp)
 82effc9:	e8 ec 85 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82effce:	8b 45 08             	mov    0x8(%ebp),%eax
 82effd1:	89 04 24             	mov    %eax,(%esp)
 82effd4:	e8 75 bc dd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82effd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82effdd:	8b 45 10             	mov    0x10(%ebp),%eax
 82effe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82effe4:	8b 45 08             	mov    0x8(%ebp),%eax
 82effe7:	89 04 24             	mov    %eax,(%esp)
 82effea:	e8 53 b2 34 00       	call   863b242 <_ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij>
 82effef:	eb 1b                	jmp    82f000c <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii+0xca>
 82efff1:	89 d3                	mov    %edx,%ebx
 82efff3:	89 c6                	mov    %eax,%esi
 82efff5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82efff8:	89 04 24             	mov    %eax,(%esp)
 82efffb:	e8 80 de 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f0000:	89 f0                	mov    %esi,%eax
 82f0002:	89 da                	mov    %ebx,%edx
 82f0004:	89 04 24             	mov    %eax,(%esp)
 82f0007:	e8 44 37 7f 00       	call   8ae3750 <_Unwind_Resume>
 82f000c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82f000f:	89 04 24             	mov    %eax,(%esp)
 82f0012:	e8 69 de 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82f0017:	eb 01                	jmp    82f001a <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii+0xd8>
 82f0019:	90                   	nop
 82f001a:	83 c4 20             	add    $0x20,%esp
 82f001d:	5b                   	pop    %ebx
 82f001e:	5e                   	pop    %esi
 82f001f:	5d                   	pop    %ebp
 82f0020:	c3                   	ret
 82f0021:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::NotifyGhostTime @ 0x82eff42

/* pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int) */

void pvp_assault::CAssaultMgr::NotifyGhostTime(CUser *param_1,int param_2,int param_3)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082eff65 to 082effee has its CatchHandler @ 082efff1 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x185);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    Timer_AssaultGhostTimer::RegisterNextTimer(param_1,param_3,uVar1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## OnAbuseUser

```asm
// === 082efc54 pvp_assault::CAssaultMgr::OnAbuseUser  [0x082efc54-0x82efcb1] ===
 82efc54:	55                   	push   %ebp
 82efc55:	89 e5                	mov    %esp,%ebp
 82efc57:	83 ec 28             	sub    $0x28,%esp
 82efc5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efc5d:	89 04 24             	mov    %eax,(%esp)
 82efc60:	e8 6d fa f3 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82efc65:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efc69:	8b 45 08             	mov    0x8(%ebp),%eax
 82efc6c:	89 04 24             	mov    %eax,(%esp)
 82efc6f:	e8 8a dd ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82efc74:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efc77:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efc7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efc7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efc81:	89 04 24             	mov    %eax,(%esp)
 82efc84:	e8 59 b9 ff ff       	call   82eb5e2 <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser>
 82efc89:	eb 1f                	jmp    82efcaa <_ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser+0x56>
 82efc8b:	83 fa 01             	cmp    $0x1,%edx
 82efc8e:	74 08                	je     82efc98 <_ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser+0x44>
 82efc90:	89 04 24             	mov    %eax,(%esp)
 82efc93:	e8 b8 3a 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efc98:	89 04 24             	mov    %eax,(%esp)
 82efc9b:	e8 40 60 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efca0:	8b 00                	mov    (%eax),%eax
 82efca2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efca5:	e8 86 5f 43 00       	call   8725c30 <__cxa_end_catch>
 82efcaa:	b8 01 00 00 00       	mov    $0x1,%eax
 82efcaf:	c9                   	leave
 82efcb0:	c3                   	ret
 82efcb1:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnAbuseUser @ 0x82efc54

/* pvp_assault::CAssaultMgr::OnAbuseUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnAbuseUser(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efc6f to 082efc88 has its CatchHandler @ 082efc8b */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::AbuseUser(this_00,param_1);
  return 1;
}

```

---

## OnChangeHp

```asm
// === 082ef570 pvp_assault::CAssaultMgr::OnChangeHp  [0x082ef570-0x82ef60f] ===
 82ef570:	55                   	push   %ebp
 82ef571:	89 e5                	mov    %esp,%ebp
 82ef573:	56                   	push   %esi
 82ef574:	53                   	push   %ebx
 82ef575:	83 ec 20             	sub    $0x20,%esp
 82ef578:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef57b:	89 04 24             	mov    %eax,(%esp)
 82ef57e:	e8 4f 01 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ef583:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef587:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef58a:	89 04 24             	mov    %eax,(%esp)
 82ef58d:	e8 6c e4 ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82ef592:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef595:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef598:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef59c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef59f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef5a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef5a6:	89 04 24             	mov    %eax,(%esp)
 82ef5a9:	e8 a4 e1 ff ff       	call   82ed752 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri>
 82ef5ae:	eb 53                	jmp    82ef603 <_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri+0x93>
 82ef5b0:	83 fa 01             	cmp    $0x1,%edx
 82ef5b3:	74 08                	je     82ef5bd <_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri+0x4d>
 82ef5b5:	89 04 24             	mov    %eax,(%esp)
 82ef5b8:	e8 93 41 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef5bd:	89 04 24             	mov    %eax,(%esp)
 82ef5c0:	e8 1b 67 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef5c5:	8b 00                	mov    (%eax),%eax
 82ef5c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef5ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef5cd:	0f b6 c0             	movzbl %al,%eax
 82ef5d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef5d4:	c7 44 24 04 98 00 00 	movl   $0x98,0x4(%esp)
 82ef5db:	00 
 82ef5dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef5df:	89 04 24             	mov    %eax,(%esp)
 82ef5e2:	e8 5b c9 38 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82ef5e7:	eb 15                	jmp    82ef5fe <_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri+0x8e>
 82ef5e9:	89 d3                	mov    %edx,%ebx
 82ef5eb:	89 c6                	mov    %eax,%esi
 82ef5ed:	e8 3e 66 43 00       	call   8725c30 <__cxa_end_catch>
 82ef5f2:	89 f0                	mov    %esi,%eax
 82ef5f4:	89 da                	mov    %ebx,%edx
 82ef5f6:	89 04 24             	mov    %eax,(%esp)
 82ef5f9:	e8 52 41 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef5fe:	e8 2d 66 43 00       	call   8725c30 <__cxa_end_catch>
 82ef603:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef608:	83 c4 20             	add    $0x20,%esp
 82ef60b:	5b                   	pop    %ebx
 82ef60c:	5e                   	pop    %esi
 82ef60d:	5d                   	pop    %ebp
 82ef60e:	c3                   	ret
 82ef60f:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnChangeHp @ 0x82ef570

/* pvp_assault::CAssaultMgr::OnChangeHp(CUser*, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnChangeHp(CAssaultMgr *this,CUser *param_1,int param_2)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef58d to 082ef5ad has its CatchHandler @ 082ef5b0 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::ChangeHp(this_00,param_1,param_2);
  return 1;
}

```

---

## OnCompleteLoad

```asm
// === 082ef1e2 pvp_assault::CAssaultMgr::OnCompleteLoad  [0x082ef1e2-0x82ef279] ===
 82ef1e2:	55                   	push   %ebp
 82ef1e3:	89 e5                	mov    %esp,%ebp
 82ef1e5:	56                   	push   %esi
 82ef1e6:	53                   	push   %ebx
 82ef1e7:	83 ec 20             	sub    $0x20,%esp
 82ef1ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef1ed:	89 04 24             	mov    %eax,(%esp)
 82ef1f0:	e8 dd 04 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ef1f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef1f9:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef1fc:	89 04 24             	mov    %eax,(%esp)
 82ef1ff:	e8 fa e7 ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82ef204:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef207:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef20a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef20e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef211:	89 04 24             	mov    %eax,(%esp)
 82ef214:	e8 5b c5 ff ff       	call   82eb774 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser>
 82ef219:	eb 53                	jmp    82ef26e <_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser+0x8c>
 82ef21b:	83 fa 01             	cmp    $0x1,%edx
 82ef21e:	74 08                	je     82ef228 <_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser+0x46>
 82ef220:	89 04 24             	mov    %eax,(%esp)
 82ef223:	e8 28 45 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef228:	89 04 24             	mov    %eax,(%esp)
 82ef22b:	e8 b0 6a 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef230:	8b 00                	mov    (%eax),%eax
 82ef232:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef235:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef238:	0f b6 c0             	movzbl %al,%eax
 82ef23b:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef23f:	c7 44 24 04 94 00 00 	movl   $0x94,0x4(%esp)
 82ef246:	00 
 82ef247:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef24a:	89 04 24             	mov    %eax,(%esp)
 82ef24d:	e8 f0 cc 38 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82ef252:	eb 15                	jmp    82ef269 <_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser+0x87>
 82ef254:	89 d3                	mov    %edx,%ebx
 82ef256:	89 c6                	mov    %eax,%esi
 82ef258:	e8 d3 69 43 00       	call   8725c30 <__cxa_end_catch>
 82ef25d:	89 f0                	mov    %esi,%eax
 82ef25f:	89 da                	mov    %ebx,%edx
 82ef261:	89 04 24             	mov    %eax,(%esp)
 82ef264:	e8 e7 44 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef269:	e8 c2 69 43 00       	call   8725c30 <__cxa_end_catch>
 82ef26e:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef273:	83 c4 20             	add    $0x20,%esp
 82ef276:	5b                   	pop    %ebx
 82ef277:	5e                   	pop    %esi
 82ef278:	5d                   	pop    %ebp
 82ef279:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::OnCompleteLoad @ 0x82ef1e2

/* pvp_assault::CAssaultMgr::OnCompleteLoad(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnCompleteLoad(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef1ff to 082ef218 has its CatchHandler @ 082ef21b */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::CompleteLoad(this_00,param_1);
  return 1;
}

```

---

## OnConnectP2P

```asm
// === 082ef27a pvp_assault::CAssaultMgr::OnConnectP2P  [0x082ef27a-0x82ef31f] ===
 82ef27a:	55                   	push   %ebp
 82ef27b:	89 e5                	mov    %esp,%ebp
 82ef27d:	56                   	push   %esi
 82ef27e:	53                   	push   %ebx
 82ef27f:	83 ec 20             	sub    $0x20,%esp
 82ef282:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef285:	89 04 24             	mov    %eax,(%esp)
 82ef288:	e8 45 04 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ef28d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef291:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef294:	89 04 24             	mov    %eax,(%esp)
 82ef297:	e8 62 e7 ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82ef29c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef29f:	8b 45 14             	mov    0x14(%ebp),%eax
 82ef2a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ef2a6:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef2a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef2ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef2b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef2b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef2b7:	89 04 24             	mov    %eax,(%esp)
 82ef2ba:	e8 97 c6 ff ff       	call   82eb956 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci>
 82ef2bf:	eb 53                	jmp    82ef314 <_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci+0x9a>
 82ef2c1:	83 fa 01             	cmp    $0x1,%edx
 82ef2c4:	74 08                	je     82ef2ce <_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci+0x54>
 82ef2c6:	89 04 24             	mov    %eax,(%esp)
 82ef2c9:	e8 82 44 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef2ce:	89 04 24             	mov    %eax,(%esp)
 82ef2d1:	e8 0a 6a 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef2d6:	8b 00                	mov    (%eax),%eax
 82ef2d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef2db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef2de:	0f b6 c0             	movzbl %al,%eax
 82ef2e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef2e5:	c7 44 24 04 95 00 00 	movl   $0x95,0x4(%esp)
 82ef2ec:	00 
 82ef2ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef2f0:	89 04 24             	mov    %eax,(%esp)
 82ef2f3:	e8 4a cc 38 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82ef2f8:	eb 15                	jmp    82ef30f <_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci+0x95>
 82ef2fa:	89 d3                	mov    %edx,%ebx
 82ef2fc:	89 c6                	mov    %eax,%esi
 82ef2fe:	e8 2d 69 43 00       	call   8725c30 <__cxa_end_catch>
 82ef303:	89 f0                	mov    %esi,%eax
 82ef305:	89 da                	mov    %ebx,%edx
 82ef307:	89 04 24             	mov    %eax,(%esp)
 82ef30a:	e8 41 44 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef30f:	e8 1c 69 43 00       	call   8725c30 <__cxa_end_catch>
 82ef314:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef319:	83 c4 20             	add    $0x20,%esp
 82ef31c:	5b                   	pop    %ebx
 82ef31d:	5e                   	pop    %esi
 82ef31e:	5d                   	pop    %ebp
 82ef31f:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::OnConnectP2P @ 0x82ef27a

/* pvp_assault::CAssaultMgr::OnConnectP2P(CUser*, char*, int) */

undefined4 pvp_assault::CAssaultMgr::OnConnectP2P(CUser *param_1,char *param_2,int param_3)

{
  CUser *pCVar1;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_2);
                    /* try { // try from 082ef297 to 082ef2be has its CatchHandler @ 082ef2c1 */
  pCVar1 = (CUser *)_GetAssaultPlace((uint)param_1);
  CAssaultPlace::ConnectP2P(pCVar1,param_2,param_3);
  return 1;
}

```

---

## OnConnectP2PAfterAssault

```asm
// === 082ef320 pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault  [0x082ef320-0x82ef3bd] ===
 82ef320:	55                   	push   %ebp
 82ef321:	89 e5                	mov    %esp,%ebp
 82ef323:	56                   	push   %esi
 82ef324:	53                   	push   %ebx
 82ef325:	83 ec 20             	sub    $0x20,%esp
 82ef328:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef32b:	89 04 24             	mov    %eax,(%esp)
 82ef32e:	e8 19 5e 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ef333:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef336:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ef33a:	74 75                	je     82ef3b1 <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci+0x91>
 82ef33c:	8b 45 14             	mov    0x14(%ebp),%eax
 82ef33f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ef343:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef346:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef34a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef34d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef351:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef354:	89 04 24             	mov    %eax,(%esp)
 82ef357:	e8 30 b1 2a 00       	call   859a48c <_ZN6CParty10ConnectP2PEP5CUserPci>
 82ef35c:	eb 53                	jmp    82ef3b1 <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci+0x91>
 82ef35e:	83 fa 01             	cmp    $0x1,%edx
 82ef361:	74 08                	je     82ef36b <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci+0x4b>
 82ef363:	89 04 24             	mov    %eax,(%esp)
 82ef366:	e8 e5 43 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef36b:	89 04 24             	mov    %eax,(%esp)
 82ef36e:	e8 6d 69 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef373:	8b 00                	mov    (%eax),%eax
 82ef375:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef378:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef37b:	0f b6 c0             	movzbl %al,%eax
 82ef37e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef382:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 82ef389:	00 
 82ef38a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef38d:	89 04 24             	mov    %eax,(%esp)
 82ef390:	e8 ad cb 38 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82ef395:	eb 15                	jmp    82ef3ac <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci+0x8c>
 82ef397:	89 d3                	mov    %edx,%ebx
 82ef399:	89 c6                	mov    %eax,%esi
 82ef39b:	e8 90 68 43 00       	call   8725c30 <__cxa_end_catch>
 82ef3a0:	89 f0                	mov    %esi,%eax
 82ef3a2:	89 da                	mov    %ebx,%edx
 82ef3a4:	89 04 24             	mov    %eax,(%esp)
 82ef3a7:	e8 a4 43 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef3ac:	e8 7f 68 43 00       	call   8725c30 <__cxa_end_catch>
 82ef3b1:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef3b6:	83 c4 20             	add    $0x20,%esp
 82ef3b9:	5b                   	pop    %ebx
 82ef3ba:	5e                   	pop    %esi
 82ef3bb:	5d                   	pop    %ebp
 82ef3bc:	c3                   	ret
 82ef3bd:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault @ 0x82ef320

/* pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser*, char*, int) */

undefined4
pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser *param_1,char *param_2,int param_3)

{
  CUser *pCVar1;
  
                    /* try { // try from 082ef32e to 082ef35b has its CatchHandler @ 082ef35e */
  pCVar1 = (CUser *)CUser::GetParty((CUser *)param_2);
  if (pCVar1 != (CUser *)0x0) {
    CParty::ConnectP2P(pCVar1,param_2,param_3);
  }
  return 1;
}

```

---

## OnDieUser

```asm
// === 082ef3be pvp_assault::CAssaultMgr::OnDieUser  [0x082ef3be-0x82ef463] ===
 82ef3be:	55                   	push   %ebp
 82ef3bf:	89 e5                	mov    %esp,%ebp
 82ef3c1:	56                   	push   %esi
 82ef3c2:	53                   	push   %ebx
 82ef3c3:	83 ec 20             	sub    $0x20,%esp
 82ef3c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef3c9:	89 04 24             	mov    %eax,(%esp)
 82ef3cc:	e8 01 03 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ef3d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef3d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef3d8:	89 04 24             	mov    %eax,(%esp)
 82ef3db:	e8 1e e6 ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82ef3e0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef3e3:	8b 45 14             	mov    0x14(%ebp),%eax
 82ef3e6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ef3ea:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef3ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef3f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef3f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef3f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef3fb:	89 04 24             	mov    %eax,(%esp)
 82ef3fe:	e8 fb df ff ff       	call   82ed3fe <_ZN11pvp_assault13CAssaultPlace7DieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER>
 82ef403:	eb 53                	jmp    82ef458 <_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER+0x9a>
 82ef405:	83 fa 01             	cmp    $0x1,%edx
 82ef408:	74 08                	je     82ef412 <_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER+0x54>
 82ef40a:	89 04 24             	mov    %eax,(%esp)
 82ef40d:	e8 3e 43 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef412:	89 04 24             	mov    %eax,(%esp)
 82ef415:	e8 c6 68 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef41a:	8b 00                	mov    (%eax),%eax
 82ef41c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef41f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef422:	0f b6 c0             	movzbl %al,%eax
 82ef425:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef429:	c7 44 24 04 96 00 00 	movl   $0x96,0x4(%esp)
 82ef430:	00 
 82ef431:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef434:	89 04 24             	mov    %eax,(%esp)
 82ef437:	e8 06 cb 38 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82ef43c:	eb 15                	jmp    82ef453 <_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER+0x95>
 82ef43e:	89 d3                	mov    %edx,%ebx
 82ef440:	89 c6                	mov    %eax,%esi
 82ef442:	e8 e9 67 43 00       	call   8725c30 <__cxa_end_catch>
 82ef447:	89 f0                	mov    %esi,%eax
 82ef449:	89 da                	mov    %ebx,%edx
 82ef44b:	89 04 24             	mov    %eax,(%esp)
 82ef44e:	e8 fd 42 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef453:	e8 d8 67 43 00       	call   8725c30 <__cxa_end_catch>
 82ef458:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef45d:	83 c4 20             	add    $0x20,%esp
 82ef460:	5b                   	pop    %ebx
 82ef461:	5e                   	pop    %esi
 82ef462:	5d                   	pop    %ebp
 82ef463:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::OnDieUser @ 0x82ef3be

/* pvp_assault::CAssaultMgr::OnDieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnDieUser
          (CAssaultMgr *this,CUser *param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef3db to 082ef402 has its CatchHandler @ 082ef405 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::DieUser(this_00,param_1,param_2,param_3);
  return 1;
}

```

---

## OnEvadeAssaultPlace

```asm
// === 082efbf6 pvp_assault::CAssaultMgr::OnEvadeAssaultPlace  [0x082efbf6-0x82efc53] ===
 82efbf6:	55                   	push   %ebp
 82efbf7:	89 e5                	mov    %esp,%ebp
 82efbf9:	83 ec 28             	sub    $0x28,%esp
 82efbfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efbff:	89 04 24             	mov    %eax,(%esp)
 82efc02:	e8 cb fa f3 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82efc07:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efc0b:	8b 45 08             	mov    0x8(%ebp),%eax
 82efc0e:	89 04 24             	mov    %eax,(%esp)
 82efc11:	e8 e8 dd ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82efc16:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efc19:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efc1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efc20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efc23:	89 04 24             	mov    %eax,(%esp)
 82efc26:	e8 71 b8 ff ff       	call   82eb49c <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser>
 82efc2b:	eb 1f                	jmp    82efc4c <_ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser+0x56>
 82efc2d:	83 fa 01             	cmp    $0x1,%edx
 82efc30:	74 08                	je     82efc3a <_ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser+0x44>
 82efc32:	89 04 24             	mov    %eax,(%esp)
 82efc35:	e8 16 3b 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efc3a:	89 04 24             	mov    %eax,(%esp)
 82efc3d:	e8 9e 60 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efc42:	8b 00                	mov    (%eax),%eax
 82efc44:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efc47:	e8 e4 5f 43 00       	call   8725c30 <__cxa_end_catch>
 82efc4c:	b8 01 00 00 00       	mov    $0x1,%eax
 82efc51:	c9                   	leave
 82efc52:	c3                   	ret
 82efc53:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnEvadeAssaultPlace @ 0x82efbf6

/* pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CUser*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efc11 to 082efc2a has its CatchHandler @ 082efc2d */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::EvadeAssaultPlace(this_00,param_1);
  return 1;
}

```

---

## OnLeaveAssaultPlace

```asm
// === 082ef176 pvp_assault::CAssaultMgr::OnLeaveAssaultPlace  [0x082ef176-0x82ef1e1] ===
 82ef176:	55                   	push   %ebp
 82ef177:	89 e5                	mov    %esp,%ebp
 82ef179:	83 ec 38             	sub    $0x38,%esp
 82ef17c:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef17f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82ef182:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef185:	89 04 24             	mov    %eax,(%esp)
 82ef188:	e8 45 05 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ef18d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef191:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef194:	89 04 24             	mov    %eax,(%esp)
 82ef197:	e8 62 e8 ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82ef19c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef19f:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 82ef1a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef1a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef1aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef1ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef1b1:	89 04 24             	mov    %eax,(%esp)
 82ef1b4:	e8 97 c2 ff ff       	call   82eb450 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEP5CUserb>
 82ef1b9:	eb 1f                	jmp    82ef1da <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb+0x64>
 82ef1bb:	83 fa 01             	cmp    $0x1,%edx
 82ef1be:	74 08                	je     82ef1c8 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb+0x52>
 82ef1c0:	89 04 24             	mov    %eax,(%esp)
 82ef1c3:	e8 88 45 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef1c8:	89 04 24             	mov    %eax,(%esp)
 82ef1cb:	e8 10 6b 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef1d0:	8b 00                	mov    (%eax),%eax
 82ef1d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef1d5:	e8 56 6a 43 00       	call   8725c30 <__cxa_end_catch>
 82ef1da:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef1df:	c9                   	leave
 82ef1e0:	c3                   	ret
 82ef1e1:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnLeaveAssaultPlace @ 0x82ef176

/* pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CAssaultMgr *this,CUser *param_1,bool param_2)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef197 to 082ef1b8 has its CatchHandler @ 082ef1bb */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::LeaveAssaultPlace(this_00,param_1,param_2);
  return 1;
}

```

---

## OnMoveArea

```asm
// === 082ef610 pvp_assault::CAssaultMgr::OnMoveArea  [0x082ef610-0x82ef817] ===
 82ef610:	55                   	push   %ebp
 82ef611:	89 e5                	mov    %esp,%ebp
 82ef613:	56                   	push   %esi
 82ef614:	53                   	push   %ebx
 82ef615:	83 ec 40             	sub    $0x40,%esp
 82ef618:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef61b:	89 04 24             	mov    %eax,(%esp)
 82ef61e:	e8 29 e7 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ef623:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 82ef62a:	00 
 82ef62b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ef632:	00 
 82ef633:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef636:	89 04 24             	mov    %eax,(%esp)
 82ef639:	e8 be c2 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ef63e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82ef645:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82ef64c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef64f:	89 04 24             	mov    %eax,(%esp)
 82ef652:	e8 f5 14 e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82ef657:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82ef65a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ef65d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef661:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef664:	89 04 24             	mov    %eax,(%esp)
 82ef667:	e8 38 a8 de ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82ef66c:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef66f:	8d 50 08             	lea    0x8(%eax),%edx
 82ef672:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ef675:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ef679:	89 04 24             	mov    %eax,(%esp)
 82ef67c:	e8 91 25 00 00       	call   82f1c12 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE5beginEv>
 82ef681:	83 ec 04             	sub    $0x4,%esp
 82ef684:	e9 c6 00 00 00       	jmp    82ef74f <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x13f>
 82ef689:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ef68c:	89 04 24             	mov    %eax,(%esp)
 82ef68f:	e8 fc 25 00 00       	call   82f1c90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEptEv>
 82ef694:	8b 40 04             	mov    0x4(%eax),%eax
 82ef697:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef69a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ef69e:	0f 84 a0 00 00 00    	je     82ef744 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x134>
 82ef6a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ef6ab:	00 
 82ef6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef6af:	89 04 24             	mov    %eax,(%esp)
 82ef6b2:	e8 07 1d 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82ef6b7:	89 c3                	mov    %eax,%ebx
 82ef6b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef6bc:	89 04 24             	mov    %eax,(%esp)
 82ef6bf:	e8 a0 5e 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ef6c4:	0f be c0             	movsbl %al,%eax
 82ef6c7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ef6cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef6cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef6d2:	89 04 24             	mov    %eax,(%esp)
 82ef6d5:	e8 d4 0f 00 00       	call   82f06ae <_ZN11pvp_assault13CAssaultPlace6IsAreaEii>
 82ef6da:	84 c0                	test   %al,%al
 82ef6dc:	74 66                	je     82ef744 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x134>
 82ef6de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef6e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef6e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef6e8:	89 04 24             	mov    %eax,(%esp)
 82ef6eb:	e8 76 8c ff ff       	call   82e8366 <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser>
 82ef6f0:	83 f0 01             	xor    $0x1,%eax
 82ef6f3:	84 c0                	test   %al,%al
 82ef6f5:	74 26                	je     82ef71d <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x10d>
 82ef6f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef6fa:	89 04 24             	mov    %eax,(%esp)
 82ef6fd:	e8 e8 0f 00 00       	call   82f06ea <_ZN11pvp_assault13CAssaultPlace13CheckPlayableEv>
 82ef702:	84 c0                	test   %al,%al
 82ef704:	74 17                	je     82ef71d <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x10d>
 82ef706:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef709:	89 04 24             	mov    %eax,(%esp)
 82ef70c:	e8 ed 0f 00 00       	call   82f06fe <_ZN11pvp_assault13CAssaultPlace8GetStateEv>
 82ef711:	83 f8 04             	cmp    $0x4,%eax
 82ef714:	75 07                	jne    82ef71d <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x10d>
 82ef716:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef71b:	eb 05                	jmp    82ef722 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x112>
 82ef71d:	b8 00 00 00 00       	mov    $0x0,%eax
 82ef722:	84 c0                	test   %al,%al
 82ef724:	74 1e                	je     82ef744 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x134>
 82ef726:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82ef72d:	00 
 82ef72e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef731:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef735:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef738:	89 04 24             	mov    %eax,(%esp)
 82ef73b:	e8 80 92 ff ff       	call   82e89c0 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb>
 82ef740:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 82ef744:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ef747:	89 04 24             	mov    %eax,(%esp)
 82ef74a:	e8 23 25 00 00       	call   82f1c72 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEppEv>
 82ef74f:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef752:	8d 50 08             	lea    0x8(%eax),%edx
 82ef755:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ef758:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ef75c:	89 04 24             	mov    %eax,(%esp)
 82ef75f:	e8 d4 24 00 00       	call   82f1c38 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 82ef764:	83 ec 04             	sub    $0x4,%esp
 82ef767:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ef76a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef76e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ef771:	89 04 24             	mov    %eax,(%esp)
 82ef774:	e8 e5 24 00 00       	call   82f1c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEneERKS6_>
 82ef779:	84 c0                	test   %al,%al
 82ef77b:	0f 85 08 ff ff ff    	jne    82ef689 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x79>
 82ef781:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82ef785:	74 55                	je     82ef7dc <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x1cc>
 82ef787:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ef78a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef78e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ef791:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef795:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef798:	89 04 24             	mov    %eax,(%esp)
 82ef79b:	e8 68 71 e2 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82ef7a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef7a7:	00 
 82ef7a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef7ab:	89 04 24             	mov    %eax,(%esp)
 82ef7ae:	e8 a5 c1 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ef7b3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef7b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef7ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef7bd:	89 04 24             	mov    %eax,(%esp)
 82ef7c0:	e8 f5 8d 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ef7c5:	eb 15                	jmp    82ef7dc <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x1cc>
 82ef7c7:	89 d3                	mov    %edx,%ebx
 82ef7c9:	89 c6                	mov    %eax,%esi
 82ef7cb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef7ce:	89 04 24             	mov    %eax,(%esp)
 82ef7d1:	e8 aa e6 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef7d6:	89 f0                	mov    %esi,%eax
 82ef7d8:	89 da                	mov    %ebx,%edx
 82ef7da:	eb 0d                	jmp    82ef7e9 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x1d9>
 82ef7dc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ef7df:	89 04 24             	mov    %eax,(%esp)
 82ef7e2:	e8 99 e6 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef7e7:	eb 1f                	jmp    82ef808 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x1f8>
 82ef7e9:	83 fa 01             	cmp    $0x1,%edx
 82ef7ec:	74 08                	je     82ef7f6 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser+0x1e6>
 82ef7ee:	89 04 24             	mov    %eax,(%esp)
 82ef7f1:	e8 5a 3f 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef7f6:	89 04 24             	mov    %eax,(%esp)
 82ef7f9:	e8 e2 64 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef7fe:	8b 00                	mov    (%eax),%eax
 82ef800:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef803:	e8 28 64 43 00       	call   8725c30 <__cxa_end_catch>
 82ef808:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef80d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82ef810:	83 c4 00             	add    $0x0,%esp
 82ef813:	5b                   	pop    %ebx
 82ef814:	5e                   	pop    %esi
 82ef815:	5d                   	pop    %ebp
 82ef816:	c3                   	ret
 82ef817:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnMoveArea @ 0x82ef610

/* pvp_assault::CAssaultMgr::OnMoveArea(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnMoveArea(CAssaultMgr *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_1c [4];
  int local_18;
  CAssaultPlace *local_14;
  
                    /* try { // try from 082ef61e to 082ef622 has its CatchHandler @ 082ef7e9 */
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082ef639 to 082ef7c4 has its CatchHandler @ 082ef7c7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x86);
  local_2c = 0;
  local_18 = 0;
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_18);
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::begin(local_30);
  do {
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_30,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      if (local_18 != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_2c,local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
      }
                    /* try { // try from 082ef7e2 to 082ef7e6 has its CatchHandler @ 082ef7e9 */
      PacketGuard::~PacketGuard(local_28);
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_30);
    local_14 = *(CAssaultPlace **)(iVar3 + 4);
    if (local_14 != (CAssaultPlace *)0x0) {
      iVar3 = CUser::get_area(param_1,false);
      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      cVar2 = CAssaultPlace::IsArea(local_14,(int)cVar2,iVar3);
      if (cVar2 != '\0') {
        cVar2 = CAssaultPlace::ExistUser(local_14,param_1);
        if (cVar2 == '\x01') {
LAB_082ef71d:
          bVar1 = false;
        }
        else {
          cVar2 = CAssaultPlace::CheckPlayable(local_14);
          if (cVar2 == '\0') goto LAB_082ef71d;
          iVar3 = CAssaultPlace::GetState(local_14);
          if (iVar3 != 4) goto LAB_082ef71d;
          bVar1 = true;
        }
        if (bVar1) {
          CAssaultPlace::MakeViewAssaultIconOnePlayer(local_14,local_28,true);
          local_18 = local_18 + 1;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> *)
               local_30);
  } while( true );
}

```

---

## OnRequestAssault

```asm
// === 082edfba pvp_assault::CAssaultMgr::OnRequestAssault  [0x082edfba-0x82ef175] ===
 82edfba:	55                   	push   %ebp
 82edfbb:	89 e5                	mov    %esp,%ebp
 82edfbd:	57                   	push   %edi
 82edfbe:	56                   	push   %esi
 82edfbf:	53                   	push   %ebx
 82edfc0:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 82edfc6:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 82edfcd:	00 00 00 
 82edfd0:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 82edfd7:	00 00 00 
 82edfda:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 82edfe1:	00 00 00 
 82edfe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82edfe7:	89 04 24             	mov    %eax,(%esp)
 82edfea:	e8 d1 09 3a 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 82edfef:	84 c0                	test   %al,%al
 82edff1:	74 2c                	je     82ee01f <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x65>
 82edff3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82edffa:	e8 01 78 43 00       	call   8725800 <__cxa_allocate_exception>
 82edfff:	89 c2                	mov    %eax,%edx
 82ee001:	c7 02 ea 00 00 00    	movl   $0xea,(%edx)
 82ee007:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee00e:	00 
 82ee00f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee016:	08 
 82ee017:	89 04 24             	mov    %eax,(%esp)
 82ee01a:	e8 31 6c 43 00       	call   8724c50 <__cxa_throw>
 82ee01f:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee022:	89 04 24             	mov    %eax,(%esp)
 82ee025:	e8 96 09 3a 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 82ee02a:	84 c0                	test   %al,%al
 82ee02c:	74 2c                	je     82ee05a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa0>
 82ee02e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee035:	e8 c6 77 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee03a:	89 c2                	mov    %eax,%edx
 82ee03c:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 82ee042:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee049:	00 
 82ee04a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee051:	08 
 82ee052:	89 04 24             	mov    %eax,(%esp)
 82ee055:	e8 f6 6b 43 00       	call   8724c50 <__cxa_throw>
 82ee05a:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee05f:	89 04 24             	mov    %eax,(%esp)
 82ee062:	e8 a9 18 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee067:	83 f0 01             	xor    $0x1,%eax
 82ee06a:	84 c0                	test   %al,%al
 82ee06c:	74 7a                	je     82ee0e8 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x12e>
 82ee06e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee071:	89 04 24             	mov    %eax,(%esp)
 82ee074:	e8 e7 0e 3a 00       	call   868ef60 <_ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv>
 82ee079:	89 c3                	mov    %eax,%ebx
 82ee07b:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee07e:	89 04 24             	mov    %eax,(%esp)
 82ee081:	e8 f6 c2 de ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82ee086:	66 39 c3             	cmp    %ax,%bx
 82ee089:	0f 95 c0             	setne  %al
 82ee08c:	84 c0                	test   %al,%al
 82ee08e:	74 58                	je     82ee0e8 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x12e>
 82ee090:	c7 44 24 10 68 c0 c1 	movl   $0x8c1c068,0x10(%esp)
 82ee097:	08 
 82ee098:	c7 44 24 0c 91 12 00 	movl   $0x1291,0xc(%esp)
 82ee09f:	00 
 82ee0a0:	c7 44 24 08 40 ce c1 	movl   $0x8c1ce40,0x8(%esp)
 82ee0a7:	08 
 82ee0a8:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ee0af:	08 
 82ee0b0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ee0b7:	e8 4e 5b 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ee0bc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee0c3:	e8 38 77 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee0c8:	89 c2                	mov    %eax,%edx
 82ee0ca:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee0d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee0d7:	00 
 82ee0d8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee0df:	08 
 82ee0e0:	89 04 24             	mov    %eax,(%esp)
 82ee0e3:	e8 68 6b 43 00       	call   8724c50 <__cxa_throw>
 82ee0e8:	c6 85 63 ff ff ff 00 	movb   $0x0,-0x9d(%ebp)
 82ee0ef:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 82ee0f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ee0f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee0fc:	89 04 24             	mov    %eax,(%esp)
 82ee0ff:	e8 78 32 2e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 82ee104:	84 c0                	test   %al,%al
 82ee106:	0f 84 ef 00 00 00    	je     82ee1fb <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x241>
 82ee10c:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee111:	89 04 24             	mov    %eax,(%esp)
 82ee114:	e8 f7 17 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee119:	84 c0                	test   %al,%al
 82ee11b:	74 7b                	je     82ee198 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1de>
 82ee11d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee120:	89 04 24             	mov    %eax,(%esp)
 82ee123:	e8 3c 74 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee128:	3c 07                	cmp    $0x7,%al
 82ee12a:	0f 95 c0             	setne  %al
 82ee12d:	84 c0                	test   %al,%al
 82ee12f:	0f 84 c6 00 00 00    	je     82ee1fb <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x241>
 82ee135:	0f b6 85 63 ff ff ff 	movzbl -0x9d(%ebp),%eax
 82ee13c:	84 c0                	test   %al,%al
 82ee13e:	74 2c                	je     82ee16c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1b2>
 82ee140:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee147:	e8 b4 76 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee14c:	89 c2                	mov    %eax,%edx
 82ee14e:	c7 02 fd 00 00 00    	movl   $0xfd,(%edx)
 82ee154:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee15b:	00 
 82ee15c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee163:	08 
 82ee164:	89 04 24             	mov    %eax,(%esp)
 82ee167:	e8 e4 6a 43 00       	call   8724c50 <__cxa_throw>
 82ee16c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee173:	e8 88 76 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee178:	89 c2                	mov    %eax,%edx
 82ee17a:	c7 02 fb 00 00 00    	movl   $0xfb,(%edx)
 82ee180:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee187:	00 
 82ee188:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee18f:	08 
 82ee190:	89 04 24             	mov    %eax,(%esp)
 82ee193:	e8 b8 6a 43 00       	call   8724c50 <__cxa_throw>
 82ee198:	0f b6 85 63 ff ff ff 	movzbl -0x9d(%ebp),%eax
 82ee19f:	84 c0                	test   %al,%al
 82ee1a1:	74 2c                	je     82ee1cf <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x215>
 82ee1a3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee1aa:	e8 51 76 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee1af:	89 c2                	mov    %eax,%edx
 82ee1b1:	c7 02 fd 00 00 00    	movl   $0xfd,(%edx)
 82ee1b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee1be:	00 
 82ee1bf:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee1c6:	08 
 82ee1c7:	89 04 24             	mov    %eax,(%esp)
 82ee1ca:	e8 81 6a 43 00       	call   8724c50 <__cxa_throw>
 82ee1cf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee1d6:	e8 25 76 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee1db:	89 c2                	mov    %eax,%edx
 82ee1dd:	c7 02 fb 00 00 00    	movl   $0xfb,(%edx)
 82ee1e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee1ea:	00 
 82ee1eb:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee1f2:	08 
 82ee1f3:	89 04 24             	mov    %eax,(%esp)
 82ee1f6:	e8 55 6a 43 00       	call   8724c50 <__cxa_throw>
 82ee1fb:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 82ee200:	89 04 24             	mov    %eax,(%esp)
 82ee203:	e8 3c 2d 00 00       	call   82f0f44 <_ZN16village_attacked18CVillageMonsterMgr7OnEventEv>
 82ee208:	84 c0                	test   %al,%al
 82ee20a:	74 2c                	je     82ee238 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x27e>
 82ee20c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee213:	e8 e8 75 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee218:	89 c2                	mov    %eax,%edx
 82ee21a:	c7 02 d9 00 00 00    	movl   $0xd9,(%edx)
 82ee220:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee227:	00 
 82ee228:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee22f:	08 
 82ee230:	89 04 24             	mov    %eax,(%esp)
 82ee233:	e8 18 6a 43 00       	call   8724c50 <__cxa_throw>
 82ee238:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee23d:	89 04 24             	mov    %eax,(%esp)
 82ee240:	e8 cb 16 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee245:	84 c0                	test   %al,%al
 82ee247:	74 1c                	je     82ee265 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x2ab>
 82ee249:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee24c:	89 04 24             	mov    %eax,(%esp)
 82ee24f:	e8 10 73 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee254:	3c 07                	cmp    $0x7,%al
 82ee256:	75 0d                	jne    82ee265 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x2ab>
 82ee258:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82ee25c:	75 07                	jne    82ee265 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x2ab>
 82ee25e:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee263:	eb 05                	jmp    82ee26a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x2b0>
 82ee265:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee26a:	84 c0                	test   %al,%al
 82ee26c:	74 15                	je     82ee283 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x2c9>
 82ee26e:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee273:	89 04 24             	mov    %eax,(%esp)
 82ee276:	e8 8b 26 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82ee27b:	89 04 24             	mov    %eax,(%esp)
 82ee27e:	e8 a7 25 00 00       	call   82f082a <_ZN12CPowerWarLog22IncAssaultAttemptCountEv>
 82ee283:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82ee288:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 82ee28f:	00 
 82ee290:	89 04 24             	mov    %eax,(%esp)
 82ee293:	e8 00 77 e2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 82ee298:	8b 10                	mov    (%eax),%edx
 82ee29a:	83 c2 34             	add    $0x34,%edx
 82ee29d:	8b 12                	mov    (%edx),%edx
 82ee29f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ee2a6:	00 
 82ee2a7:	89 04 24             	mov    %eax,(%esp)
 82ee2aa:	ff d2                	call   *%edx
 82ee2ac:	84 c0                	test   %al,%al
 82ee2ae:	74 2c                	je     82ee2dc <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x322>
 82ee2b0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee2b7:	e8 44 75 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee2bc:	89 c2                	mov    %eax,%edx
 82ee2be:	c7 02 b2 00 00 00    	movl   $0xb2,(%edx)
 82ee2c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee2cb:	00 
 82ee2cc:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee2d3:	08 
 82ee2d4:	89 04 24             	mov    %eax,(%esp)
 82ee2d7:	e8 74 69 43 00       	call   8724c50 <__cxa_throw>
 82ee2dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee2df:	89 04 24             	mov    %eax,(%esp)
 82ee2e2:	e8 7d 72 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee2e7:	3c 08                	cmp    $0x8,%al
 82ee2e9:	0f 94 c0             	sete   %al
 82ee2ec:	84 c0                	test   %al,%al
 82ee2ee:	74 2c                	je     82ee31c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x362>
 82ee2f0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee2f7:	e8 04 75 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee2fc:	89 c2                	mov    %eax,%edx
 82ee2fe:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee304:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee30b:	00 
 82ee30c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee313:	08 
 82ee314:	89 04 24             	mov    %eax,(%esp)
 82ee317:	e8 34 69 43 00       	call   8724c50 <__cxa_throw>
 82ee31c:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee321:	89 04 24             	mov    %eax,(%esp)
 82ee324:	e8 e7 15 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee329:	84 c0                	test   %al,%al
 82ee32b:	0f 84 c3 01 00 00    	je     82ee4f4 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x53a>
 82ee331:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee334:	89 04 24             	mov    %eax,(%esp)
 82ee337:	e8 28 72 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee33c:	3c 07                	cmp    $0x7,%al
 82ee33e:	0f 94 c0             	sete   %al
 82ee341:	84 c0                	test   %al,%al
 82ee343:	0f 84 7f 01 00 00    	je     82ee4c8 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x50e>
 82ee349:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ee350:	00 
 82ee351:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee354:	89 04 24             	mov    %eax,(%esp)
 82ee357:	e8 62 30 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82ee35c:	89 c3                	mov    %eax,%ebx
 82ee35e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee361:	89 04 24             	mov    %eax,(%esp)
 82ee364:	e8 fb 71 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee369:	0f be f8             	movsbl %al,%edi
 82ee36c:	e8 36 c0 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ee371:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ee375:	89 7c 24 04          	mov    %edi,0x4(%esp)
 82ee379:	89 04 24             	mov    %eax,(%esp)
 82ee37c:	e8 5d 76 3d 00       	call   86c59de <_ZN9GameWorld18IsPowerWarSafeZoneEii>
 82ee381:	84 c0                	test   %al,%al
 82ee383:	74 2c                	je     82ee3b1 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x3f7>
 82ee385:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee38c:	e8 6f 74 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee391:	89 c2                	mov    %eax,%edx
 82ee393:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee399:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee3a0:	00 
 82ee3a1:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee3a8:	08 
 82ee3a9:	89 04 24             	mov    %eax,(%esp)
 82ee3ac:	e8 9f 68 43 00       	call   8724c50 <__cxa_throw>
 82ee3b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee3b4:	89 04 24             	mov    %eax,(%esp)
 82ee3b7:	e8 0a 19 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ee3bc:	89 c3                	mov    %eax,%ebx
 82ee3be:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee3c1:	89 04 24             	mov    %eax,(%esp)
 82ee3c4:	e8 fd 18 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ee3c9:	38 c3                	cmp    %al,%bl
 82ee3cb:	74 1e                	je     82ee3eb <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x431>
 82ee3cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee3d0:	89 04 24             	mov    %eax,(%esp)
 82ee3d3:	e8 c8 25 00 00       	call   82f09a0 <_ZNK15CUserCharacInfo14isJoinPowerWarEv>
 82ee3d8:	84 c0                	test   %al,%al
 82ee3da:	74 0f                	je     82ee3eb <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x431>
 82ee3dc:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee3df:	89 04 24             	mov    %eax,(%esp)
 82ee3e2:	e8 b9 25 00 00       	call   82f09a0 <_ZNK15CUserCharacInfo14isJoinPowerWarEv>
 82ee3e7:	84 c0                	test   %al,%al
 82ee3e9:	75 07                	jne    82ee3f2 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x438>
 82ee3eb:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee3f0:	eb 05                	jmp    82ee3f7 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x43d>
 82ee3f2:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee3f7:	84 c0                	test   %al,%al
 82ee3f9:	74 2c                	je     82ee427 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x46d>
 82ee3fb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee402:	e8 f9 73 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee407:	89 c2                	mov    %eax,%edx
 82ee409:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee40f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee416:	00 
 82ee417:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee41e:	08 
 82ee41f:	89 04 24             	mov    %eax,(%esp)
 82ee422:	e8 29 68 43 00       	call   8724c50 <__cxa_throw>
 82ee427:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee42a:	89 04 24             	mov    %eax,(%esp)
 82ee42d:	e8 1a 6d 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ee432:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82ee435:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 82ee439:	74 19                	je     82ee454 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x49a>
 82ee43b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82ee43e:	89 04 24             	mov    %eax,(%esp)
 82ee441:	e8 d2 be 2a 00       	call   859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>
 82ee446:	83 f0 01             	xor    $0x1,%eax
 82ee449:	84 c0                	test   %al,%al
 82ee44b:	74 07                	je     82ee454 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x49a>
 82ee44d:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee452:	eb 05                	jmp    82ee459 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x49f>
 82ee454:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee459:	84 c0                	test   %al,%al
 82ee45b:	74 2c                	je     82ee489 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x4cf>
 82ee45d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee464:	e8 97 73 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee469:	89 c2                	mov    %eax,%edx
 82ee46b:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee471:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee478:	00 
 82ee479:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee480:	08 
 82ee481:	89 04 24             	mov    %eax,(%esp)
 82ee484:	e8 c7 67 43 00       	call   8724c50 <__cxa_throw>
 82ee489:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee48c:	89 04 24             	mov    %eax,(%esp)
 82ee48f:	e8 60 12 f4 ff       	call   822f6f4 <_ZN15CUserCharacInfo22GetCurCharacSuperStateEv>
 82ee494:	84 c0                	test   %al,%al
 82ee496:	0f 84 98 00 00 00    	je     82ee534 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x57a>
 82ee49c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee4a3:	e8 58 73 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee4a8:	89 c2                	mov    %eax,%edx
 82ee4aa:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee4b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee4b7:	00 
 82ee4b8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee4bf:	08 
 82ee4c0:	89 04 24             	mov    %eax,(%esp)
 82ee4c3:	e8 88 67 43 00       	call   8724c50 <__cxa_throw>
 82ee4c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee4cf:	e8 2c 73 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee4d4:	89 c2                	mov    %eax,%edx
 82ee4d6:	c7 02 fc 00 00 00    	movl   $0xfc,(%edx)
 82ee4dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee4e3:	00 
 82ee4e4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee4eb:	08 
 82ee4ec:	89 04 24             	mov    %eax,(%esp)
 82ee4ef:	e8 5c 67 43 00       	call   8724c50 <__cxa_throw>
 82ee4f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee4f7:	89 04 24             	mov    %eax,(%esp)
 82ee4fa:	e8 65 70 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee4ff:	3c 07                	cmp    $0x7,%al
 82ee501:	0f 94 c0             	sete   %al
 82ee504:	84 c0                	test   %al,%al
 82ee506:	74 2c                	je     82ee534 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x57a>
 82ee508:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee50f:	e8 ec 72 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee514:	89 c2                	mov    %eax,%edx
 82ee516:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee51c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee523:	00 
 82ee524:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee52b:	08 
 82ee52c:	89 04 24             	mov    %eax,(%esp)
 82ee52f:	e8 1c 67 43 00       	call   8724c50 <__cxa_throw>
 82ee534:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ee53b:	00 
 82ee53c:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee53f:	89 04 24             	mov    %eax,(%esp)
 82ee542:	e8 35 2e 2e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 82ee547:	84 c0                	test   %al,%al
 82ee549:	74 1b                	je     82ee566 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x5ac>
 82ee54b:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee550:	89 04 24             	mov    %eax,(%esp)
 82ee553:	e8 b8 13 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee558:	83 f0 01             	xor    $0x1,%eax
 82ee55b:	84 c0                	test   %al,%al
 82ee55d:	74 07                	je     82ee566 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x5ac>
 82ee55f:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee564:	eb 05                	jmp    82ee56b <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x5b1>
 82ee566:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee56b:	84 c0                	test   %al,%al
 82ee56d:	74 2c                	je     82ee59b <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x5e1>
 82ee56f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee576:	e8 85 72 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee57b:	89 c2                	mov    %eax,%edx
 82ee57d:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 82ee583:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee58a:	00 
 82ee58b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee592:	08 
 82ee593:	89 04 24             	mov    %eax,(%esp)
 82ee596:	e8 b5 66 43 00       	call   8724c50 <__cxa_throw>
 82ee59b:	e8 e1 db dd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82ee5a0:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 82ee5a6:	83 f8 03             	cmp    $0x3,%eax
 82ee5a9:	0f 94 c0             	sete   %al
 82ee5ac:	84 c0                	test   %al,%al
 82ee5ae:	74 60                	je     82ee610 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x656>
 82ee5b0:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee5b3:	89 04 24             	mov    %eax,(%esp)
 82ee5b6:	e8 93 d6 dd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82ee5bb:	3d 0d aa 1e 00       	cmp    $0x1eaa0d,%eax
 82ee5c0:	74 12                	je     82ee5d4 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x61a>
 82ee5c2:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee5c5:	89 04 24             	mov    %eax,(%esp)
 82ee5c8:	e8 81 d6 dd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82ee5cd:	3d a8 55 2c 00       	cmp    $0x2c55a8,%eax
 82ee5d2:	75 07                	jne    82ee5db <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x621>
 82ee5d4:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee5d9:	eb 05                	jmp    82ee5e0 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x626>
 82ee5db:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee5e0:	84 c0                	test   %al,%al
 82ee5e2:	74 2c                	je     82ee610 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x656>
 82ee5e4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee5eb:	e8 10 72 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee5f0:	89 c2                	mov    %eax,%edx
 82ee5f2:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee5f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee5ff:	00 
 82ee600:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee607:	08 
 82ee608:	89 04 24             	mov    %eax,(%esp)
 82ee60b:	e8 40 66 43 00       	call   8724c50 <__cxa_throw>
 82ee610:	8b 45 08             	mov    0x8(%ebp),%eax
 82ee613:	0f b6 00             	movzbl (%eax),%eax
 82ee616:	83 f0 01             	xor    $0x1,%eax
 82ee619:	84 c0                	test   %al,%al
 82ee61b:	74 5b                	je     82ee678 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x6be>
 82ee61d:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee620:	89 04 24             	mov    %eax,(%esp)
 82ee623:	e8 38 23 00 00       	call   82f0960 <_ZNK15CUserCharacInfo23getCurrCharacBlackCountEv>
 82ee628:	83 f8 63             	cmp    $0x63,%eax
 82ee62b:	77 16                	ja     82ee643 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x689>
 82ee62d:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee630:	89 04 24             	mov    %eax,(%esp)
 82ee633:	e8 a0 24 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82ee638:	85 c0                	test   %eax,%eax
 82ee63a:	75 07                	jne    82ee643 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x689>
 82ee63c:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee641:	eb 05                	jmp    82ee648 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x68e>
 82ee643:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee648:	84 c0                	test   %al,%al
 82ee64a:	74 2c                	je     82ee678 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x6be>
 82ee64c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee653:	e8 a8 71 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee658:	89 c2                	mov    %eax,%edx
 82ee65a:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 82ee660:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee667:	00 
 82ee668:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee66f:	08 
 82ee670:	89 04 24             	mov    %eax,(%esp)
 82ee673:	e8 d8 65 43 00       	call   8724c50 <__cxa_throw>
 82ee678:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee67b:	89 04 24             	mov    %eax,(%esp)
 82ee67e:	e8 4f 10 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ee683:	85 c0                	test   %eax,%eax
 82ee685:	0f 95 c0             	setne  %al
 82ee688:	84 c0                	test   %al,%al
 82ee68a:	74 2c                	je     82ee6b8 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x6fe>
 82ee68c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee693:	e8 68 71 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee698:	89 c2                	mov    %eax,%edx
 82ee69a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee6a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee6a7:	00 
 82ee6a8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee6af:	08 
 82ee6b0:	89 04 24             	mov    %eax,(%esp)
 82ee6b3:	e8 98 65 43 00       	call   8724c50 <__cxa_throw>
 82ee6b8:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee6bb:	89 04 24             	mov    %eax,(%esp)
 82ee6be:	e8 0f 10 f4 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82ee6c3:	85 c0                	test   %eax,%eax
 82ee6c5:	0f 95 c0             	setne  %al
 82ee6c8:	84 c0                	test   %al,%al
 82ee6ca:	74 2c                	je     82ee6f8 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x73e>
 82ee6cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee6d3:	e8 28 71 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee6d8:	89 c2                	mov    %eax,%edx
 82ee6da:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82ee6e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee6e7:	00 
 82ee6e8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee6ef:	08 
 82ee6f0:	89 04 24             	mov    %eax,(%esp)
 82ee6f3:	e8 58 65 43 00       	call   8724c50 <__cxa_throw>
 82ee6f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee6fb:	89 04 24             	mov    %eax,(%esp)
 82ee6fe:	e8 2f 1d e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82ee703:	85 c0                	test   %eax,%eax
 82ee705:	0f 94 c0             	sete   %al
 82ee708:	84 c0                	test   %al,%al
 82ee70a:	74 2c                	je     82ee738 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x77e>
 82ee70c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee713:	e8 e8 70 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee718:	89 c2                	mov    %eax,%edx
 82ee71a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee720:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee727:	00 
 82ee728:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee72f:	08 
 82ee730:	89 04 24             	mov    %eax,(%esp)
 82ee733:	e8 18 65 43 00       	call   8724c50 <__cxa_throw>
 82ee738:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee73b:	89 04 24             	mov    %eax,(%esp)
 82ee73e:	e8 3b bb de ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82ee743:	85 c0                	test   %eax,%eax
 82ee745:	0f 94 c0             	sete   %al
 82ee748:	84 c0                	test   %al,%al
 82ee74a:	74 2c                	je     82ee778 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x7be>
 82ee74c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee753:	e8 a8 70 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee758:	89 c2                	mov    %eax,%edx
 82ee75a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee760:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee767:	00 
 82ee768:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee76f:	08 
 82ee770:	89 04 24             	mov    %eax,(%esp)
 82ee773:	e8 d8 64 43 00       	call   8724c50 <__cxa_throw>
 82ee778:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee77b:	89 04 24             	mov    %eax,(%esp)
 82ee77e:	e8 cb d4 dd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82ee783:	89 c3                	mov    %eax,%ebx
 82ee785:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee788:	89 04 24             	mov    %eax,(%esp)
 82ee78b:	e8 be d4 dd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82ee790:	39 c3                	cmp    %eax,%ebx
 82ee792:	0f 94 c0             	sete   %al
 82ee795:	84 c0                	test   %al,%al
 82ee797:	74 2c                	je     82ee7c5 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x80b>
 82ee799:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee7a0:	e8 5b 70 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee7a5:	89 c2                	mov    %eax,%edx
 82ee7a7:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee7ad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee7b4:	00 
 82ee7b5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee7bc:	08 
 82ee7bd:	89 04 24             	mov    %eax,(%esp)
 82ee7c0:	e8 8b 64 43 00       	call   8724c50 <__cxa_throw>
 82ee7c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee7c8:	89 04 24             	mov    %eax,(%esp)
 82ee7cb:	e8 5c 61 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82ee7d0:	0f b7 d8             	movzwl %ax,%ebx
 82ee7d3:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee7d6:	89 04 24             	mov    %eax,(%esp)
 82ee7d9:	e8 4e 61 e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82ee7de:	0f b7 c0             	movzwl %ax,%eax
 82ee7e1:	89 da                	mov    %ebx,%edx
 82ee7e3:	29 c2                	sub    %eax,%edx
 82ee7e5:	89 d0                	mov    %edx,%eax
 82ee7e7:	89 c2                	mov    %eax,%edx
 82ee7e9:	c1 fa 1f             	sar    $0x1f,%edx
 82ee7ec:	31 d0                	xor    %edx,%eax
 82ee7ee:	29 d0                	sub    %edx,%eax
 82ee7f0:	83 f8 64             	cmp    $0x64,%eax
 82ee7f3:	7f 30                	jg     82ee825 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x86b>
 82ee7f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee7f8:	89 04 24             	mov    %eax,(%esp)
 82ee7fb:	e8 3c 61 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82ee800:	0f b7 d8             	movzwl %ax,%ebx
 82ee803:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee806:	89 04 24             	mov    %eax,(%esp)
 82ee809:	e8 2e 61 e4 ff       	call   813493c <_ZN5CUser8get_posYEv>
 82ee80e:	0f b7 c0             	movzwl %ax,%eax
 82ee811:	89 da                	mov    %ebx,%edx
 82ee813:	29 c2                	sub    %eax,%edx
 82ee815:	89 d0                	mov    %edx,%eax
 82ee817:	89 c2                	mov    %eax,%edx
 82ee819:	c1 fa 1f             	sar    $0x1f,%edx
 82ee81c:	31 d0                	xor    %edx,%eax
 82ee81e:	29 d0                	sub    %edx,%eax
 82ee820:	83 f8 64             	cmp    $0x64,%eax
 82ee823:	7e 07                	jle    82ee82c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x872>
 82ee825:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee82a:	eb 05                	jmp    82ee831 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x877>
 82ee82c:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee831:	84 c0                	test   %al,%al
 82ee833:	74 2c                	je     82ee861 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x8a7>
 82ee835:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee83c:	e8 bf 6f 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee841:	89 c2                	mov    %eax,%edx
 82ee843:	c7 02 63 00 00 00    	movl   $0x63,(%edx)
 82ee849:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee850:	00 
 82ee851:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee858:	08 
 82ee859:	89 04 24             	mov    %eax,(%esp)
 82ee85c:	e8 ef 63 43 00       	call   8724c50 <__cxa_throw>
 82ee861:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee864:	89 04 24             	mov    %eax,(%esp)
 82ee867:	e8 f8 6c 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee86c:	89 c3                	mov    %eax,%ebx
 82ee86e:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee871:	89 04 24             	mov    %eax,(%esp)
 82ee874:	e8 eb 6c 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ee879:	38 c3                	cmp    %al,%bl
 82ee87b:	75 2c                	jne    82ee8a9 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x8ef>
 82ee87d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ee884:	00 
 82ee885:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee888:	89 04 24             	mov    %eax,(%esp)
 82ee88b:	e8 2e 2b 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82ee890:	89 c3                	mov    %eax,%ebx
 82ee892:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ee899:	00 
 82ee89a:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee89d:	89 04 24             	mov    %eax,(%esp)
 82ee8a0:	e8 19 2b 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82ee8a5:	39 c3                	cmp    %eax,%ebx
 82ee8a7:	74 07                	je     82ee8b0 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x8f6>
 82ee8a9:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee8ae:	eb 05                	jmp    82ee8b5 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x8fb>
 82ee8b0:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee8b5:	84 c0                	test   %al,%al
 82ee8b7:	74 2c                	je     82ee8e5 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x92b>
 82ee8b9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee8c0:	e8 3b 6f 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee8c5:	89 c2                	mov    %eax,%edx
 82ee8c7:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee8cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee8d4:	00 
 82ee8d5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee8dc:	08 
 82ee8dd:	89 04 24             	mov    %eax,(%esp)
 82ee8e0:	e8 6b 63 43 00       	call   8724c50 <__cxa_throw>
 82ee8e5:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ee8ea:	89 04 24             	mov    %eax,(%esp)
 82ee8ed:	e8 1e 10 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ee8f2:	83 f0 01             	xor    $0x1,%eax
 82ee8f5:	84 c0                	test   %al,%al
 82ee8f7:	74 5a                	je     82ee953 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x999>
 82ee8f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ee8fc:	89 04 24             	mov    %eax,(%esp)
 82ee8ff:	e8 01 f3 ff ff       	call   82edc05 <_Z10IsStayGateP5CUser>
 82ee904:	84 c0                	test   %al,%al
 82ee906:	75 0f                	jne    82ee917 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x95d>
 82ee908:	8b 45 10             	mov    0x10(%ebp),%eax
 82ee90b:	89 04 24             	mov    %eax,(%esp)
 82ee90e:	e8 f2 f2 ff ff       	call   82edc05 <_Z10IsStayGateP5CUser>
 82ee913:	84 c0                	test   %al,%al
 82ee915:	74 07                	je     82ee91e <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x964>
 82ee917:	b8 01 00 00 00       	mov    $0x1,%eax
 82ee91c:	eb 05                	jmp    82ee923 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x969>
 82ee91e:	b8 00 00 00 00       	mov    $0x0,%eax
 82ee923:	84 c0                	test   %al,%al
 82ee925:	74 2c                	je     82ee953 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x999>
 82ee927:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee92e:	e8 cd 6e 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee933:	89 c2                	mov    %eax,%edx
 82ee935:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ee93b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee942:	00 
 82ee943:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee94a:	08 
 82ee94b:	89 04 24             	mov    %eax,(%esp)
 82ee94e:	e8 fd 62 43 00       	call   8724c50 <__cxa_throw>
 82ee953:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 82ee95a:	e8 89 62 2d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 82ee95f:	8b 55 0c             	mov    0xc(%ebp),%edx
 82ee962:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ee966:	89 04 24             	mov    %eax,(%esp)
 82ee969:	e8 ea b9 2d 00       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 82ee96e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82ee971:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82ee975:	0f 95 c0             	setne  %al
 82ee978:	84 c0                	test   %al,%al
 82ee97a:	74 3e                	je     82ee9ba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa00>
 82ee97c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82ee97f:	89 04 24             	mov    %eax,(%esp)
 82ee982:	e8 5d 5c f4 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 82ee987:	83 f0 01             	xor    $0x1,%eax
 82ee98a:	84 c0                	test   %al,%al
 82ee98c:	74 2c                	je     82ee9ba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa00>
 82ee98e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee995:	e8 66 6e 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee99a:	89 c2                	mov    %eax,%edx
 82ee99c:	c7 02 3c 00 00 00    	movl   $0x3c,(%edx)
 82ee9a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ee9a9:	00 
 82ee9aa:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ee9b1:	08 
 82ee9b2:	89 04 24             	mov    %eax,(%esp)
 82ee9b5:	e8 96 62 43 00       	call   8724c50 <__cxa_throw>
 82ee9ba:	e8 29 62 2d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 82ee9bf:	8b 55 10             	mov    0x10(%ebp),%edx
 82ee9c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ee9c6:	89 04 24             	mov    %eax,(%esp)
 82ee9c9:	e8 8a b9 2d 00       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 82ee9ce:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82ee9d1:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82ee9d5:	0f 95 c0             	setne  %al
 82ee9d8:	84 c0                	test   %al,%al
 82ee9da:	74 3e                	je     82eea1a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa60>
 82ee9dc:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82ee9df:	89 04 24             	mov    %eax,(%esp)
 82ee9e2:	e8 fd 5b f4 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 82ee9e7:	83 f0 01             	xor    $0x1,%eax
 82ee9ea:	84 c0                	test   %al,%al
 82ee9ec:	74 2c                	je     82eea1a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa60>
 82ee9ee:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ee9f5:	e8 06 6e 43 00       	call   8725800 <__cxa_allocate_exception>
 82ee9fa:	89 c2                	mov    %eax,%edx
 82ee9fc:	c7 02 3c 00 00 00    	movl   $0x3c,(%edx)
 82eea02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eea09:	00 
 82eea0a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eea11:	08 
 82eea12:	89 04 24             	mov    %eax,(%esp)
 82eea15:	e8 36 62 43 00       	call   8724c50 <__cxa_throw>
 82eea1a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 82eea21:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eea24:	89 04 24             	mov    %eax,(%esp)
 82eea27:	e8 e8 b8 de ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82eea2c:	84 c0                	test   %al,%al
 82eea2e:	74 0e                	je     82eea3e <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xa84>
 82eea30:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eea33:	89 04 24             	mov    %eax,(%esp)
 82eea36:	e8 11 67 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82eea3b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82eea3e:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 82eea42:	74 42                	je     82eea86 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xacc>
 82eea44:	8b 45 10             	mov    0x10(%ebp),%eax
 82eea47:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eea4b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82eea4e:	89 04 24             	mov    %eax,(%esp)
 82eea51:	e8 4e 1d 00 00       	call   82f07a4 <_ZN6CParty11IsExistUserEP5CUser>
 82eea56:	84 c0                	test   %al,%al
 82eea58:	74 2c                	je     82eea86 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xacc>
 82eea5a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eea61:	e8 9a 6d 43 00       	call   8725800 <__cxa_allocate_exception>
 82eea66:	89 c2                	mov    %eax,%edx
 82eea68:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eea6e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eea75:	00 
 82eea76:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eea7d:	08 
 82eea7e:	89 04 24             	mov    %eax,(%esp)
 82eea81:	e8 ca 61 43 00       	call   8724c50 <__cxa_throw>
 82eea86:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eea8b:	89 04 24             	mov    %eax,(%esp)
 82eea8e:	e8 7d 0e 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eea93:	84 c0                	test   %al,%al
 82eea95:	74 16                	je     82eeaad <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xaf3>
 82eea97:	8b 45 10             	mov    0x10(%ebp),%eax
 82eea9a:	89 04 24             	mov    %eax,(%esp)
 82eea9d:	e8 c2 6a 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eeaa2:	3c 07                	cmp    $0x7,%al
 82eeaa4:	75 07                	jne    82eeaad <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xaf3>
 82eeaa6:	b8 01 00 00 00       	mov    $0x1,%eax
 82eeaab:	eb 05                	jmp    82eeab2 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xaf8>
 82eeaad:	b8 00 00 00 00       	mov    $0x0,%eax
 82eeab2:	84 c0                	test   %al,%al
 82eeab4:	74 4f                	je     82eeb05 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xb4b>
 82eeab6:	8b 45 10             	mov    0x10(%ebp),%eax
 82eeab9:	89 04 24             	mov    %eax,(%esp)
 82eeabc:	e8 8b 66 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82eeac1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82eeac4:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82eeac8:	74 3b                	je     82eeb05 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xb4b>
 82eeaca:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82eeacd:	89 04 24             	mov    %eax,(%esp)
 82eead0:	e8 d1 a4 2c 00       	call   85b8fa6 <_ZN6CParty19IsThereGhostInPartyEv>
 82eead5:	84 c0                	test   %al,%al
 82eead7:	74 2c                	je     82eeb05 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xb4b>
 82eead9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eeae0:	e8 1b 6d 43 00       	call   8725800 <__cxa_allocate_exception>
 82eeae5:	89 c2                	mov    %eax,%edx
 82eeae7:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eeaed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eeaf4:	00 
 82eeaf5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eeafc:	08 
 82eeafd:	89 04 24             	mov    %eax,(%esp)
 82eeb00:	e8 4b 61 43 00       	call   8724c50 <__cxa_throw>
 82eeb05:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb08:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eeb0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb0f:	89 04 24             	mov    %eax,(%esp)
 82eeb12:	e8 0b 15 00 00       	call   82f0022 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_>
 82eeb17:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eeb1e:	8b 45 10             	mov    0x10(%ebp),%eax
 82eeb21:	89 04 24             	mov    %eax,(%esp)
 82eeb24:	e8 f9 14 00 00       	call   82f0022 <_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_>
 82eeb29:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb2c:	89 04 24             	mov    %eax,(%esp)
 82eeb2f:	e8 ec 03 3a 00       	call   868ef20 <_ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv>
 82eeb34:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 82eeb3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb3d:	89 04 24             	mov    %eax,(%esp)
 82eeb40:	e8 39 b7 de ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82eeb45:	89 04 24             	mov    %eax,(%esp)
 82eeb48:	e8 89 5c e4 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 82eeb4d:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 82eeb53:	39 d0                	cmp    %edx,%eax
 82eeb55:	0f 9c c0             	setl   %al
 82eeb58:	84 c0                	test   %al,%al
 82eeb5a:	74 51                	je     82eebad <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xbf3>
 82eeb5c:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
 82eeb62:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeb65:	89 04 24             	mov    %eax,(%esp)
 82eeb68:	e8 11 b7 de ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82eeb6d:	89 04 24             	mov    %eax,(%esp)
 82eeb70:	e8 61 5c e4 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 82eeb75:	89 da                	mov    %ebx,%edx
 82eeb77:	29 c2                	sub    %eax,%edx
 82eeb79:	89 d0                	mov    %edx,%eax
 82eeb7b:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 82eeb81:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eeb88:	e8 73 6c 43 00       	call   8725800 <__cxa_allocate_exception>
 82eeb8d:	89 c2                	mov    %eax,%edx
 82eeb8f:	c7 02 0a 00 00 00    	movl   $0xa,(%edx)
 82eeb95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eeb9c:	00 
 82eeb9d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eeba4:	08 
 82eeba5:	89 04 24             	mov    %eax,(%esp)
 82eeba8:	e8 a3 60 43 00       	call   8724c50 <__cxa_throw>
 82eebad:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82eebb1:	0f 85 ac 05 00 00    	jne    82ef163 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x11a9>
 82eebb7:	e8 ed 23 00 00       	call   82f0fa9 <_ZN11pvp_assault30GetInstanceAssaultPlaceFactoryEv>
 82eebbc:	89 04 24             	mov    %eax,(%esp)
 82eebbf:	e8 90 23 00 00       	call   82f0f54 <_ZN11pvp_assault20CAssaultPlaceFactory19AcquireAssaultPlaceEv>
 82eebc4:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 82eebca:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eebd0:	85 c0                	test   %eax,%eax
 82eebd2:	75 2c                	jne    82eec00 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xc46>
 82eebd4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eebdb:	e8 20 6c 43 00       	call   8725800 <__cxa_allocate_exception>
 82eebe0:	89 c2                	mov    %eax,%edx
 82eebe2:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 82eebe8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eebef:	00 
 82eebf0:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eebf7:	08 
 82eebf8:	89 04 24             	mov    %eax,(%esp)
 82eebfb:	e8 50 60 43 00       	call   8724c50 <__cxa_throw>
 82eec00:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eec06:	89 04 24             	mov    %eax,(%esp)
 82eec09:	e8 aa 7e ff ff       	call   82e6ab8 <_ZN11pvp_assault13CAssaultPlace5ResetEv>
 82eec0e:	8b 45 08             	mov    0x8(%ebp),%eax
 82eec11:	89 04 24             	mov    %eax,(%esp)
 82eec14:	e8 5d ed ff ff       	call   82ed976 <_ZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEv>
 82eec19:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 82eec1f:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 82eec25:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eec2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eec2f:	89 04 24             	mov    %eax,(%esp)
 82eec32:	e8 57 1a 00 00       	call   82f068e <_ZN11pvp_assault13CAssaultPlace17SetAssaultPlaceIdEj>
 82eec37:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eec3d:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 82eec43:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82eec47:	8b 55 10             	mov    0x10(%ebp),%edx
 82eec4a:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eec4e:	8b 55 0c             	mov    0xc(%ebp),%edx
 82eec51:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eec55:	89 04 24             	mov    %eax,(%esp)
 82eec58:	e8 ad 90 ff ff       	call   82e7d0a <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri>
 82eec5d:	8d 45 80             	lea    -0x80(%ebp),%eax
 82eec60:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 82eec66:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eec6a:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 82eec70:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eec74:	89 04 24             	mov    %eax,(%esp)
 82eec77:	e8 7c 30 00 00       	call   82f1cf8 <_ZSt9make_pairIRjRPN11pvp_assault13CAssaultPlaceEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 82eec7c:	83 ec 04             	sub    $0x4,%esp
 82eec7f:	8d 45 80             	lea    -0x80(%ebp),%eax
 82eec82:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eec86:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82eec8c:	89 04 24             	mov    %eax,(%esp)
 82eec8f:	e8 a2 30 00 00       	call   82f1d36 <_ZNSt4pairIKjPN11pvp_assault13CAssaultPlaceEEC1IjS3_EEOS_IT_T0_E>
 82eec94:	8b 45 08             	mov    0x8(%ebp),%eax
 82eec97:	8d 48 08             	lea    0x8(%eax),%ecx
 82eec9a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 82eeca0:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 82eeca6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eecaa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82eecae:	89 04 24             	mov    %eax,(%esp)
 82eecb1:	e8 b0 30 00 00       	call   82f1d66 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
 82eecb6:	83 ec 04             	sub    $0x4,%esp
 82eecb9:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eecbf:	89 04 24             	mov    %eax,(%esp)
 82eecc2:	e8 d9 19 00 00       	call   82f06a0 <_ZN11pvp_assault13CAssaultPlace14GetAuthenValueEv>
 82eecc7:	89 c3                	mov    %eax,%ebx
 82eecc9:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eeccf:	89 04 24             	mov    %eax,(%esp)
 82eecd2:	e8 a9 19 00 00       	call   82f0680 <_ZN11pvp_assault13CAssaultPlace17GetAssaultPlaceIdEv>
 82eecd7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82eecdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eecdf:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 82eece6:	e8 6f 88 34 00       	call   863755a <_ZN31TimerCompleteLoadAssaultTimeout15registNextTimerElii>
 82eeceb:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eecf0:	89 04 24             	mov    %eax,(%esp)
 82eecf3:	e8 18 0c 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eecf8:	84 c0                	test   %al,%al
 82eecfa:	74 16                	je     82eed12 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xd58>
 82eecfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eecff:	89 04 24             	mov    %eax,(%esp)
 82eed02:	e8 5d 68 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eed07:	3c 07                	cmp    $0x7,%al
 82eed09:	75 07                	jne    82eed12 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xd58>
 82eed0b:	b8 01 00 00 00       	mov    $0x1,%eax
 82eed10:	eb 05                	jmp    82eed17 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xd5d>
 82eed12:	b8 00 00 00 00       	mov    $0x0,%eax
 82eed17:	84 c0                	test   %al,%al
 82eed19:	74 0a                	je     82eed25 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xd6b>
 82eed1b:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 82eed22:	00 00 00 
 82eed25:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82eed2b:	85 c0                	test   %eax,%eax
 82eed2d:	0f 8e 2a 01 00 00    	jle    82eee5d <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xea3>
 82eed33:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eed36:	89 04 24             	mov    %eax,(%esp)
 82eed39:	e8 40 b5 de ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82eed3e:	8d 55 8b             	lea    -0x75(%ebp),%edx
 82eed41:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 82eed48:	00 
 82eed49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eed50:	00 
 82eed51:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eed55:	89 14 24             	mov    %edx,(%esp)
 82eed58:	e8 bb cb 20 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82eed5d:	83 ec 04             	sub    $0x4,%esp
 82eed60:	8b 45 8d             	mov    -0x73(%ebp),%eax
 82eed63:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82eed66:	e8 30 d4 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eed6b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 82eed6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eed72:	89 04 24             	mov    %eax,(%esp)
 82eed75:	e8 b8 0c 07 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82eed7a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82eed7d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82eed81:	0f 84 83 00 00 00    	je     82eee0a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xe50>
 82eed87:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82eed8d:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 82eed93:	db 85 44 ff ff ff    	fildl  -0xbc(%ebp)
 82eed99:	d9 9d 38 ff ff ff    	fstps  -0xc8(%ebp)
 82eed9f:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82eeda5:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 82eedab:	db 85 44 ff ff ff    	fildl  -0xbc(%ebp)
 82eedb1:	d9 9d 3c ff ff ff    	fstps  -0xc4(%ebp)
 82eedb7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82eedba:	89 04 24             	mov    %eax,(%esp)
 82eedbd:	e8 be dc f3 ff       	call   822ca80 <_ZNK10CEquipItem22getUpgradeCostDiscountEv>
 82eedc2:	d8 8d 3c ff ff ff    	fmuls  -0xc4(%ebp)
 82eedc8:	d9 05 8c d1 c1 08    	flds   0x8c1d18c
 82eedce:	de f9                	fdivrp %st,%st(1)
 82eedd0:	d8 85 38 ff ff ff    	fadds  -0xc8(%ebp)
 82eedd6:	d9 bd 42 ff ff ff    	fnstcw -0xbe(%ebp)
 82eeddc:	0f b7 85 42 ff ff ff 	movzwl -0xbe(%ebp),%eax
 82eede3:	b4 0c                	mov    $0xc,%ah
 82eede5:	66 89 85 40 ff ff ff 	mov    %ax,-0xc0(%ebp)
 82eedec:	d9 ad 40 ff ff ff    	fldcw  -0xc0(%ebp)
 82eedf2:	db 9d 44 ff ff ff    	fistpl -0xbc(%ebp)
 82eedf8:	d9 ad 42 ff ff ff    	fldcw  -0xbe(%ebp)
 82eedfe:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 82eee04:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 82eee0a:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
 82eee10:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eee13:	89 04 24             	mov    %eax,(%esp)
 82eee16:	e8 73 b4 de ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82eee1b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82eee22:	00 
 82eee23:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 82eee2a:	00 
 82eee2b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82eee2f:	89 04 24             	mov    %eax,(%esp)
 82eee32:	e8 15 07 21 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 82eee37:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eee3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82eee41:	00 
 82eee42:	89 04 24             	mov    %eax,(%esp)
 82eee45:	e8 f8 00 3a 00       	call   868ef42 <_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi>
 82eee4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eee4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82eee54:	00 
 82eee55:	89 04 24             	mov    %eax,(%esp)
 82eee58:	e8 27 01 3a 00       	call   868ef84 <_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt>
 82eee5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eee60:	89 04 24             	mov    %eax,(%esp)
 82eee63:	e8 8c 1e 00 00       	call   82f0cf4 <_ZN15CUserCharacInfo24IncCurCharacAssaultCountEv>
 82eee68:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eee6d:	89 04 24             	mov    %eax,(%esp)
 82eee70:	e8 9b 0a 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eee75:	84 c0                	test   %al,%al
 82eee77:	74 16                	je     82eee8f <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xed5>
 82eee79:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eee7c:	89 04 24             	mov    %eax,(%esp)
 82eee7f:	e8 e0 66 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eee84:	3c 07                	cmp    $0x7,%al
 82eee86:	75 07                	jne    82eee8f <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xed5>
 82eee88:	b8 01 00 00 00       	mov    $0x1,%eax
 82eee8d:	eb 05                	jmp    82eee94 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xeda>
 82eee8f:	b8 00 00 00 00       	mov    $0x0,%eax
 82eee94:	84 c0                	test   %al,%al
 82eee96:	74 42                	je     82eeeda <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xf20>
 82eee98:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82eee9e:	89 04 24             	mov    %eax,(%esp)
 82eeea1:	e8 36 18 00 00       	call   82f06dc <_ZN11pvp_assault13CAssaultPlace17GetAssaulterCountEv>
 82eeea6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82eeea9:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eeeae:	89 04 24             	mov    %eax,(%esp)
 82eeeb1:	e8 50 1a 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82eeeb6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82eeeb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eeebd:	89 04 24             	mov    %eax,(%esp)
 82eeec0:	e8 17 1a 00 00       	call   82f08dc <_ZN12CPowerWarLog23IncTotalJoinAssaultUserEi>
 82eeec5:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eeeca:	89 04 24             	mov    %eax,(%esp)
 82eeecd:	e8 34 1a 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82eeed2:	89 04 24             	mov    %eax,(%esp)
 82eeed5:	e8 62 19 00 00       	call   82f083c <_ZN12CPowerWarLog29IncAssaultAttemptSuccessCountEv>
 82eeeda:	8b 45 10             	mov    0x10(%ebp),%eax
 82eeedd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eeee1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeee4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eeee8:	8b 45 08             	mov    0x8(%ebp),%eax
 82eeeeb:	89 04 24             	mov    %eax,(%esp)
 82eeeee:	e8 bf 0d 00 00       	call   82efcb2 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_>
 82eeef3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eeef9:	89 04 24             	mov    %eax,(%esp)
 82eeefc:	e8 4b ee 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eef01:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 82eef08:	00 
 82eef09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82eef10:	00 
 82eef11:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef17:	89 04 24             	mov    %eax,(%esp)
 82eef1a:	e8 dd c9 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82eef1f:	8b 45 10             	mov    0x10(%ebp),%eax
 82eef22:	89 04 24             	mov    %eax,(%esp)
 82eef25:	e8 52 b4 de ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82eef2a:	0f b7 c0             	movzwl %ax,%eax
 82eef2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eef31:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef37:	89 04 24             	mov    %eax,(%esp)
 82eef3a:	e8 65 af de ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82eef3f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82eef46:	00 
 82eef47:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef4d:	89 04 24             	mov    %eax,(%esp)
 82eef50:	e8 cb c9 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82eef55:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82eef5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eef5f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef65:	89 04 24             	mov    %eax,(%esp)
 82eef68:	e8 cf c9 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82eef6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82eef74:	00 
 82eef75:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef7b:	89 04 24             	mov    %eax,(%esp)
 82eef7e:	e8 d5 c9 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82eef83:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eef89:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eef8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eef90:	89 04 24             	mov    %eax,(%esp)
 82eef93:	e8 22 96 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82eef98:	eb 18                	jmp    82eefb2 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0xff8>
 82eef9a:	89 d3                	mov    %edx,%ebx
 82eef9c:	89 c7                	mov    %eax,%edi
 82eef9e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eefa4:	89 04 24             	mov    %eax,(%esp)
 82eefa7:	e8 d4 ee 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eefac:	89 f8                	mov    %edi,%eax
 82eefae:	89 da                	mov    %ebx,%edx
 82eefb0:	eb 13                	jmp    82eefc5 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x100b>
 82eefb2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 82eefb8:	89 04 24             	mov    %eax,(%esp)
 82eefbb:	e8 c0 ee 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eefc0:	e9 9e 01 00 00       	jmp    82ef163 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x11a9>
 82eefc5:	83 fa 01             	cmp    $0x1,%edx
 82eefc8:	74 08                	je     82eefd2 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1018>
 82eefca:	89 04 24             	mov    %eax,(%esp)
 82eefcd:	e8 7e 47 7f 00       	call   8ae3750 <_Unwind_Resume>
 82eefd2:	89 04 24             	mov    %eax,(%esp)
 82eefd5:	e8 06 6d 43 00       	call   8725ce0 <__cxa_begin_catch>
 82eefda:	8b 00                	mov    (%eax),%eax
 82eefdc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82eefdf:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eefe4:	89 04 24             	mov    %eax,(%esp)
 82eefe7:	e8 24 09 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eefec:	84 c0                	test   %al,%al
 82eefee:	74 1c                	je     82ef00c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1052>
 82eeff0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eeff3:	89 04 24             	mov    %eax,(%esp)
 82eeff6:	e8 69 65 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eeffb:	3c 07                	cmp    $0x7,%al
 82eeffd:	75 0d                	jne    82ef00c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1052>
 82eefff:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82ef003:	75 07                	jne    82ef00c <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1052>
 82ef005:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef00a:	eb 05                	jmp    82ef011 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1057>
 82ef00c:	b8 00 00 00 00       	mov    $0x0,%eax
 82ef011:	84 c0                	test   %al,%al
 82ef013:	74 15                	je     82ef02a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1070>
 82ef015:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ef01a:	89 04 24             	mov    %eax,(%esp)
 82ef01d:	e8 e4 18 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82ef022:	89 04 24             	mov    %eax,(%esp)
 82ef025:	e8 26 18 00 00       	call   82f0850 <_ZN12CPowerWarLog29IncAssaultAttemptFailureCountEv>
 82ef02a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82ef02e:	74 17                	je     82ef047 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x108d>
 82ef030:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82ef033:	8b 45 14             	mov    0x14(%ebp),%eax
 82ef036:	89 10                	mov    %edx,(%eax)
 82ef038:	be 00 00 00 00       	mov    $0x0,%esi
 82ef03d:	bb 00 00 00 00       	mov    $0x0,%ebx
 82ef042:	e9 13 01 00 00       	jmp    82ef15a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x11a0>
 82ef047:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 82ef04d:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 82ef053:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ef057:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef05b:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef05e:	89 04 24             	mov    %eax,(%esp)
 82ef061:	e8 04 eb ff ff       	call   82edb6a <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE>
 82ef066:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef06c:	89 04 24             	mov    %eax,(%esp)
 82ef06f:	e8 d8 ec 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ef074:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 82ef07b:	00 
 82ef07c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef083:	00 
 82ef084:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef08a:	89 04 24             	mov    %eax,(%esp)
 82ef08d:	e8 6a c8 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ef092:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ef099:	00 
 82ef09a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef0a0:	89 04 24             	mov    %eax,(%esp)
 82ef0a3:	e8 78 c8 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef0a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ef0ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef0af:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef0b5:	89 04 24             	mov    %eax,(%esp)
 82ef0b8:	e8 63 c8 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef0bd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82ef0c4:	00 
 82ef0c5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef0cb:	89 04 24             	mov    %eax,(%esp)
 82ef0ce:	e8 4d c8 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef0d3:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82ef0d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef0dd:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef0e3:	89 04 24             	mov    %eax,(%esp)
 82ef0e6:	e8 51 c8 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ef0eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef0f2:	00 
 82ef0f3:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef0f9:	89 04 24             	mov    %eax,(%esp)
 82ef0fc:	e8 57 c8 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ef101:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef107:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef10b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef10e:	89 04 24             	mov    %eax,(%esp)
 82ef111:	e8 a4 94 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ef116:	eb 18                	jmp    82ef130 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x1176>
 82ef118:	89 d3                	mov    %edx,%ebx
 82ef11a:	89 c6                	mov    %eax,%esi
 82ef11c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef122:	89 04 24             	mov    %eax,(%esp)
 82ef125:	e8 56 ed 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef12a:	89 f0                	mov    %esi,%eax
 82ef12c:	89 da                	mov    %ebx,%edx
 82ef12e:	eb 15                	jmp    82ef145 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x118b>
 82ef130:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82ef136:	89 04 24             	mov    %eax,(%esp)
 82ef139:	e8 42 ed 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef13e:	bb 01 00 00 00       	mov    $0x1,%ebx
 82ef143:	eb 15                	jmp    82ef15a <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x11a0>
 82ef145:	89 d3                	mov    %edx,%ebx
 82ef147:	89 c6                	mov    %eax,%esi
 82ef149:	e8 e2 6a 43 00       	call   8725c30 <__cxa_end_catch>
 82ef14e:	89 f0                	mov    %esi,%eax
 82ef150:	89 da                	mov    %ebx,%edx
 82ef152:	89 04 24             	mov    %eax,(%esp)
 82ef155:	e8 f6 45 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef15a:	e8 d1 6a 43 00       	call   8725c30 <__cxa_end_catch>
 82ef15f:	85 db                	test   %ebx,%ebx
 82ef161:	74 05                	je     82ef168 <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi+0x11ae>
 82ef163:	be 01 00 00 00       	mov    $0x1,%esi
 82ef168:	89 f0                	mov    %esi,%eax
 82ef16a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82ef16d:	83 c4 00             	add    $0x0,%esp
 82ef170:	5b                   	pop    %ebx
 82ef171:	5e                   	pop    %esi
 82ef172:	5f                   	pop    %edi
 82ef173:	5d                   	pop    %ebp
 82ef174:	c3                   	ret
 82ef175:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnRequestAssault @ 0x82edfba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnRequestAssault
          (CAssaultMgr *this,CUser *param_1,CUser *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined4 *puVar6;
  CPowerWarLog *pCVar7;
  int *piVar8;
  int iVar9;
  GameWorld *this_00;
  uint uVar10;
  int iVar11;
  uint uVar12;
  CPrivateStoreMgr *pCVar13;
  CInventory *pCVar14;
  CAssaultPlaceFactory *this_01;
  CDataManager *this_02;
  longdouble lVar15;
  PacketGuard local_b0 [15];
  bool local_a1;
  int local_a0;
  CAssaultPlace *local_9c;
  CAssaultPlace *local_98;
  pair local_94 [8];
  pair<unsigned_int_const,pvp_assault::CAssaultPlace*> local_8c [8];
  uint local_84 [2];
  undefined1 local_79 [2];
  int local_77;
  CPrivateStore *local_3c;
  CParty *local_38;
  CParty *local_34;
  CParty *local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  
  local_98 = (CAssaultPlace *)0x0;
  local_9c = (CAssaultPlace *)0x0;
  local_a0 = 0;
                    /* try { // try from 082edfea to 082eef00 has its CatchHandler @ 082eefc5 */
  cVar2 = CUser::isCompetitionMercenary(param_1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xea;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::isCompetitionMercenary(param_2);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\x01') {
    sVar4 = CUserCharacInfo::GetCurCharacAssaultedUserId((CUserCharacInfo *)param_1);
    sVar5 = CUser::get_unique_id(param_2);
    if (sVar4 != sVar5) {
      LogManager::logFormat
                (1,"Assault.cpp",
                 "bool pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)",0x1291,
                 "CAssaultMgr::OnRequestAssault ERROR - pAssaultedUser Unique ID is invalid");
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_a1 = false;
  cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_1,&local_a1);
  if (cVar2 != '\0') {
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if (cVar2 == '\0') {
      if (local_a1 == false) {
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 0xfb;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
      }
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      if (local_a1 == false) {
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 0xfb;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
      }
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xd9;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (((cVar2 == '\0') ||
      (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) ||
     (param_3 != (int *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
    CPowerWarLog::IncAssaultAttemptCount(pCVar7);
  }
  piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x2a);
  cVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0xb2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (cVar2 == '\b') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0xfc;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    iVar9 = CUser::get_area(param_1,false);
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPowerWarSafeZone(this_00,(int)cVar2,iVar9);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUser::getPowerSide(param_1);
    cVar3 = CUser::getPowerSide(param_2);
    if (((cVar2 == cVar3) ||
        (cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)param_1), cVar2 == '\0')) ||
       (cVar2 = CUserCharacInfo::isJoinPowerWar((CUserCharacInfo *)param_2), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    local_34 = (CParty *)CUser::GetParty(param_1);
    if ((local_34 == (CParty *)0x0) ||
       (cVar2 = CParty::CanDoPartyActionAssalutState(local_34), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CUserCharacInfo::GetCurCharacSuperState((CUserCharacInfo *)param_2);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_2,(bool *)0x0);
  if ((cVar2 == '\0') || (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = G_CEnvironment();
  if (*(int *)(iVar9 + 0x378) == 3) {
    iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if ((iVar9 == 0x1eaa0d) ||
       (iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar9 == 0x2c55a8)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  if (*this != (CAssaultMgr)0x1) {
    uVar10 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)param_2);
    if ((uVar10 < 100) &&
       (iVar9 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2), iVar9 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 8;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  iVar9 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
  if (iVar9 != 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_2);
  if (iVar9 != 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  iVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar9 == iVar11) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = CUser::get_posX(param_1);
  uVar12 = CUser::get_posX(param_2);
  uVar10 = (uVar10 & 0xffff) - (uVar12 & 0xffff);
  uVar12 = (int)uVar10 >> 0x1f;
  if ((int)((uVar10 ^ uVar12) - uVar12) < 0x65) {
    uVar10 = CUser::get_posY(param_1);
    uVar12 = CUser::get_posY(param_2);
    uVar10 = (uVar10 & 0xffff) - (uVar12 & 0xffff);
    uVar12 = (int)uVar10 >> 0x1f;
    if (100 < (int)((uVar10 ^ uVar12) - uVar12)) goto LAB_082ee825;
    bVar1 = false;
  }
  else {
LAB_082ee825:
    bVar1 = true;
  }
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 99;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  if (cVar2 == cVar3) {
    iVar9 = CUser::get_area(param_1,false);
    iVar11 = CUser::get_area(param_2,false);
    if (iVar9 == iVar11) {
      bVar1 = false;
      goto LAB_082ee8b5;
    }
  }
  bVar1 = true;
LAB_082ee8b5:
  if (bVar1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\x01') {
    cVar2 = IsStayGate(param_1);
    if ((cVar2 == '\0') && (cVar2 = IsStayGate(param_2), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_3c = (CPrivateStore *)0x0;
  pCVar13 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  local_3c = (CPrivateStore *)private_store::CPrivateStoreMgr::FindStoreSeller(pCVar13,param_1);
  if ((local_3c != (CPrivateStore *)0x0) &&
     (cVar2 = private_store::CPrivateStore::isDollCreated(local_3c), cVar2 != '\x01')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  pCVar13 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  local_3c = (CPrivateStore *)private_store::CPrivateStoreMgr::FindStoreSeller(pCVar13,param_2);
  if ((local_3c != (CPrivateStore *)0x0) &&
     (cVar2 = private_store::CPrivateStore::isDollCreated(local_3c), cVar2 != '\x01')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  local_38 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_38 = (CParty *)CUser::GetParty(param_1);
  }
  if ((local_38 != (CParty *)0x0) && (cVar2 = CParty::IsExistUser(local_38,param_2), cVar2 != '\0'))
  {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if ((cVar2 == '\0') ||
     (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2), cVar2 != '\a')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar1) && (local_30 = (CParty *)CUser::GetParty(param_2), local_30 != (CParty *)0x0)) &&
     (cVar2 = CParty::IsThereGhostInParty(local_30), cVar2 != '\0')) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  AvailableAssault(param_1,param_1);
  AvailableAssault(param_2,param_1);
  local_a0 = CUserCharacInfo::GetCurCharacAssaultMoney((CUserCharacInfo *)param_1);
  pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar11 = CInventory::get_money(pCVar14);
  iVar9 = local_a0;
  if (iVar11 < local_a0) {
    pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_a0 = CInventory::get_money(pCVar14);
    local_a0 = iVar9 - local_a0;
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  if (param_3 == (int *)0x0) {
    this_01 = (CAssaultPlaceFactory *)GetInstanceAssaultPlaceFactory();
    local_98 = (CAssaultPlace *)CAssaultPlaceFactory::AcquireAssaultPlace(this_01);
    if (local_98 != (CAssaultPlace *)0x0) {
      CAssaultPlace::Reset(local_98);
      local_9c = (CAssaultPlace *)_GetNextAssaultPlaceId(this);
      CAssaultPlace::SetAssaultPlaceId(local_98,(uint)local_9c);
      CAssaultPlace::MakeTeam((CUser *)local_98,param_1,(int *)param_2);
      std::make_pair<unsigned_int&,pvp_assault::CAssaultPlace*&>(local_84,&local_9c);
      std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>::
      pair<unsigned_int,pvp_assault::CAssaultPlace*>(local_8c,(pair *)local_84);
      std::
      map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
      ::insert(local_94);
      iVar9 = CAssaultPlace::GetAuthenValue(local_98);
      iVar11 = CAssaultPlace::GetAssaultPlaceId(local_98);
      TimerCompleteLoadAssaultTimeout::registNextTimer(0x3c,iVar11,iVar9);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') ||
         (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_a0 = 0;
      }
      if (0 < local_a0) {
        iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_79,iVar9);
        local_2c = local_77;
        this_02 = (CDataManager *)G_CDataManager();
        local_28 = (CEquipItem *)CDataManager::find_item(this_02,local_2c);
        iVar9 = local_a0;
        if (local_28 != (CEquipItem *)0x0) {
          lVar15 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_28);
          local_a0 = (int)ROUND((lVar15 * (longdouble)iVar9) / (longdouble)_DAT_08c1d18c +
                                (longdouble)iVar9);
        }
        iVar9 = local_a0;
        pCVar14 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::use_money(pCVar14,iVar9,0x15,1);
        CUserCharacInfo::SetCurCharacAssaultMoney((CUserCharacInfo *)param_1,0);
        CUserCharacInfo::SetCurCharacAssaultedUserId((CUserCharacInfo *)param_1,0);
      }
      CUserCharacInfo::IncCurCharacAssaultCount((CUserCharacInfo *)param_1);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') ||
         (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_24 = CAssaultPlace::GetAssaulterCount(local_98);
        pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncTotalJoinAssaultUser(pCVar7,local_24);
        pCVar7 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncAssaultAttemptSuccessCount(pCVar7);
      }
      _SendVictoryInfo(this,param_1,param_2);
      PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 082eef1a to 082eef97 has its CatchHandler @ 082eef9a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,0,8);
      uVar10 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,uVar10 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_a0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
                    /* try { // try from 082eefbb to 082eefbf has its CatchHandler @ 082eefc5 */
      PacketGuard::~PacketGuard(local_b0);
      return 1;
    }
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  return 1;
}

```

---

## OnRevivalUser

```asm
// === 082ef464 pvp_assault::CAssaultMgr::OnRevivalUser  [0x082ef464-0x82ef56f] ===
 82ef464:	55                   	push   %ebp
 82ef465:	89 e5                	mov    %esp,%ebp
 82ef467:	56                   	push   %esi
 82ef468:	53                   	push   %ebx
 82ef469:	83 ec 30             	sub    $0x30,%esp
 82ef46c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82ef473:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82ef476:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef47a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef47d:	89 04 24             	mov    %eax,(%esp)
 82ef480:	e8 b9 df ff ff       	call   82ed43e <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi>
 82ef485:	e9 da 00 00 00       	jmp    82ef564 <_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser+0x100>
 82ef48a:	83 fa 01             	cmp    $0x1,%edx
 82ef48d:	74 08                	je     82ef497 <_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser+0x33>
 82ef48f:	89 04 24             	mov    %eax,(%esp)
 82ef492:	e8 b9 42 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef497:	89 04 24             	mov    %eax,(%esp)
 82ef49a:	e8 41 68 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef49f:	8b 00                	mov    (%eax),%eax
 82ef4a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef4a4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef4a7:	89 04 24             	mov    %eax,(%esp)
 82ef4aa:	e8 9d e8 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ef4af:	c7 44 24 08 97 00 00 	movl   $0x97,0x8(%esp)
 82ef4b6:	00 
 82ef4b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef4be:	00 
 82ef4bf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef4c2:	89 04 24             	mov    %eax,(%esp)
 82ef4c5:	e8 32 c4 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ef4ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ef4d1:	00 
 82ef4d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef4d5:	89 04 24             	mov    %eax,(%esp)
 82ef4d8:	e8 43 c4 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef4dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ef4e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef4e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef4e7:	89 04 24             	mov    %eax,(%esp)
 82ef4ea:	e8 31 c4 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef4ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef4f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef4f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef4f9:	89 04 24             	mov    %eax,(%esp)
 82ef4fc:	e8 3b c4 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ef501:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef508:	00 
 82ef509:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef50c:	89 04 24             	mov    %eax,(%esp)
 82ef50f:	e8 44 c4 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ef514:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef517:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef51b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef51e:	89 04 24             	mov    %eax,(%esp)
 82ef521:	e8 94 90 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ef526:	eb 15                	jmp    82ef53d <_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser+0xd9>
 82ef528:	89 d3                	mov    %edx,%ebx
 82ef52a:	89 c6                	mov    %eax,%esi
 82ef52c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef52f:	89 04 24             	mov    %eax,(%esp)
 82ef532:	e8 49 e9 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef537:	89 f0                	mov    %esi,%eax
 82ef539:	89 da                	mov    %ebx,%edx
 82ef53b:	eb 0d                	jmp    82ef54a <_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser+0xe6>
 82ef53d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef540:	89 04 24             	mov    %eax,(%esp)
 82ef543:	e8 38 e9 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef548:	eb 15                	jmp    82ef55f <_ZN11pvp_assault11CAssaultMgr13OnRevivalUserEP5CUser+0xfb>
 82ef54a:	89 d3                	mov    %edx,%ebx
 82ef54c:	89 c6                	mov    %eax,%esi
 82ef54e:	e8 dd 66 43 00       	call   8725c30 <__cxa_end_catch>
 82ef553:	89 f0                	mov    %esi,%eax
 82ef555:	89 da                	mov    %ebx,%edx
 82ef557:	89 04 24             	mov    %eax,(%esp)
 82ef55a:	e8 f1 41 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef55f:	e8 cc 66 43 00       	call   8725c30 <__cxa_end_catch>
 82ef564:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef569:	83 c4 30             	add    $0x30,%esp
 82ef56c:	5b                   	pop    %ebx
 82ef56d:	5e                   	pop    %esi
 82ef56e:	5d                   	pop    %ebp
 82ef56f:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::OnRevivalUser @ 0x82ef464

/* pvp_assault::CAssaultMgr::OnRevivalUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnRevivalUser(CAssaultMgr *this,CUser *param_1)

{
  int local_14 [2];
  
  local_14[0] = 0;
                    /* try { // try from 082ef480 to 082ef484 has its CatchHandler @ 082ef48a */
  CAssaultPlace::RevivalUser(param_1,local_14);
  return 1;
}

```

---

## OnTimeoutCloseAssault

```asm
// === 082efafe pvp_assault::CAssaultMgr::OnTimeoutCloseAssault  [0x082efafe-0x82efb53] ===
 82efafe:	55                   	push   %ebp
 82efaff:	89 e5                	mov    %esp,%ebp
 82efb01:	83 ec 28             	sub    $0x28,%esp
 82efb04:	8b 45 10             	mov    0x10(%ebp),%eax
 82efb07:	89 44 24 08          	mov    %eax,0x8(%esp)
 82efb0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efb0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efb12:	8b 45 08             	mov    0x8(%ebp),%eax
 82efb15:	89 04 24             	mov    %eax,(%esp)
 82efb18:	e8 77 df ff ff       	call   82eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>
 82efb1d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efb20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efb23:	89 04 24             	mov    %eax,(%esp)
 82efb26:	e8 5d a6 ff ff       	call   82ea188 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv>
 82efb2b:	eb 1f                	jmp    82efb4c <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji+0x4e>
 82efb2d:	83 fa 01             	cmp    $0x1,%edx
 82efb30:	74 08                	je     82efb3a <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji+0x3c>
 82efb32:	89 04 24             	mov    %eax,(%esp)
 82efb35:	e8 16 3c 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efb3a:	89 04 24             	mov    %eax,(%esp)
 82efb3d:	e8 9e 61 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efb42:	8b 00                	mov    (%eax),%eax
 82efb44:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efb47:	e8 e4 60 43 00       	call   8725c30 <__cxa_end_catch>
 82efb4c:	b8 01 00 00 00       	mov    $0x1,%eax
 82efb51:	c9                   	leave
 82efb52:	c3                   	ret
 82efb53:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutCloseAssault @ 0x82efafe

/* pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efb18 to 082efb2a has its CatchHandler @ 082efb2d */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutCloseAssault(this_00);
  return 1;
}

```

---

## OnTimeoutCompleteLoad

```asm
// === 082ef818 pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad  [0x082ef818-0x82ef86d] ===
 82ef818:	55                   	push   %ebp
 82ef819:	89 e5                	mov    %esp,%ebp
 82ef81b:	83 ec 28             	sub    $0x28,%esp
 82ef81e:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef821:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef825:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ef828:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef82c:	8b 45 08             	mov    0x8(%ebp),%eax
 82ef82f:	89 04 24             	mov    %eax,(%esp)
 82ef832:	e8 5d e2 ff ff       	call   82eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>
 82ef837:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef83a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef83d:	89 04 24             	mov    %eax,(%esp)
 82ef840:	e8 d5 aa ff ff       	call   82ea31a <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv>
 82ef845:	eb 1f                	jmp    82ef866 <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji+0x4e>
 82ef847:	83 fa 01             	cmp    $0x1,%edx
 82ef84a:	74 08                	je     82ef854 <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji+0x3c>
 82ef84c:	89 04 24             	mov    %eax,(%esp)
 82ef84f:	e8 fc 3e 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef854:	89 04 24             	mov    %eax,(%esp)
 82ef857:	e8 84 64 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef85c:	8b 00                	mov    (%eax),%eax
 82ef85e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef861:	e8 ca 63 43 00       	call   8725c30 <__cxa_end_catch>
 82ef866:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef86b:	c9                   	leave
 82ef86c:	c3                   	ret
 82ef86d:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad @ 0x82ef818

/* pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082ef832 to 082ef844 has its CatchHandler @ 082ef847 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutCompleteLoad(this_00);
  return 1;
}

```

---

## OnTimeoutCompleteLoadAfterAssault

```asm
// === 082ef86e pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault  [0x082ef86e-0x82ef9d7] ===
 82ef86e:	55                   	push   %ebp
 82ef86f:	89 e5                	mov    %esp,%ebp
 82ef871:	56                   	push   %esi
 82ef872:	53                   	push   %ebx
 82ef873:	83 ec 30             	sub    $0x30,%esp
 82ef876:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 82ef879:	e8 10 c9 dd ff       	call   80cc18e <_Z14G_CGameManagerv>
 82ef87e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82ef882:	89 04 24             	mov    %eax,(%esp)
 82ef885:	e8 a8 56 fa ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 82ef88a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef88d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ef891:	75 2c                	jne    82ef8bf <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x51>
 82ef893:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ef89a:	e8 61 5f 43 00       	call   8725800 <__cxa_allocate_exception>
 82ef89f:	89 c2                	mov    %eax,%edx
 82ef8a1:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 82ef8a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ef8ae:	00 
 82ef8af:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ef8b6:	08 
 82ef8b7:	89 04 24             	mov    %eax,(%esp)
 82ef8ba:	e8 91 53 43 00       	call   8724c50 <__cxa_throw>
 82ef8bf:	8b 45 10             	mov    0x10(%ebp),%eax
 82ef8c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ef8c6:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 82ef8cd:	00 
 82ef8ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef8d1:	89 04 24             	mov    %eax,(%esp)
 82ef8d4:	e8 cb b5 2a 00       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 82ef8d9:	83 f0 01             	xor    $0x1,%eax
 82ef8dc:	84 c0                	test   %al,%al
 82ef8de:	74 2c                	je     82ef90c <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x9e>
 82ef8e0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ef8e7:	e8 14 5f 43 00       	call   8725800 <__cxa_allocate_exception>
 82ef8ec:	89 c2                	mov    %eax,%edx
 82ef8ee:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 82ef8f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ef8fb:	00 
 82ef8fc:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ef903:	08 
 82ef904:	89 04 24             	mov    %eax,(%esp)
 82ef907:	e8 44 53 43 00       	call   8724c50 <__cxa_throw>
 82ef90c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef90f:	89 04 24             	mov    %eax,(%esp)
 82ef912:	e8 37 aa 2a 00       	call   859a34e <_ZN6CParty27TimeoutCompleteAfterAssaultEv>
 82ef917:	84 c0                	test   %al,%al
 82ef919:	0f 84 ac 00 00 00    	je     82ef9cb <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x15d>
 82ef91f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef922:	89 04 24             	mov    %eax,(%esp)
 82ef925:	e8 22 e4 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ef92a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef92d:	89 04 24             	mov    %eax,(%esp)
 82ef930:	e8 b1 bf dd ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 82ef935:	c7 44 24 08 f8 00 00 	movl   $0xf8,0x8(%esp)
 82ef93c:	00 
 82ef93d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef944:	00 
 82ef945:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef948:	89 04 24             	mov    %eax,(%esp)
 82ef94b:	e8 ac bf dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ef950:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef957:	00 
 82ef958:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef95b:	89 04 24             	mov    %eax,(%esp)
 82ef95e:	e8 bd bf dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ef963:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ef96a:	00 
 82ef96b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef96e:	89 04 24             	mov    %eax,(%esp)
 82ef971:	e8 e2 bf dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ef976:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef979:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ef97d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef980:	89 04 24             	mov    %eax,(%esp)
 82ef983:	e8 c6 d7 2a 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 82ef988:	eb 15                	jmp    82ef99f <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x131>
 82ef98a:	89 d3                	mov    %edx,%ebx
 82ef98c:	89 c6                	mov    %eax,%esi
 82ef98e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef991:	89 04 24             	mov    %eax,(%esp)
 82ef994:	e8 e7 e4 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef999:	89 f0                	mov    %esi,%eax
 82ef99b:	89 da                	mov    %ebx,%edx
 82ef99d:	eb 0d                	jmp    82ef9ac <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x13e>
 82ef99f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ef9a2:	89 04 24             	mov    %eax,(%esp)
 82ef9a5:	e8 d6 e4 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ef9aa:	eb 1f                	jmp    82ef9cb <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x15d>
 82ef9ac:	83 fa 01             	cmp    $0x1,%edx
 82ef9af:	74 08                	je     82ef9b9 <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji+0x14b>
 82ef9b1:	89 04 24             	mov    %eax,(%esp)
 82ef9b4:	e8 97 3d 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ef9b9:	89 04 24             	mov    %eax,(%esp)
 82ef9bc:	e8 1f 63 43 00       	call   8725ce0 <__cxa_begin_catch>
 82ef9c1:	8b 00                	mov    (%eax),%eax
 82ef9c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ef9c6:	e8 65 62 43 00       	call   8725c30 <__cxa_end_catch>
 82ef9cb:	b8 01 00 00 00       	mov    $0x1,%eax
 82ef9d0:	83 c4 30             	add    $0x30,%esp
 82ef9d3:	5b                   	pop    %ebx
 82ef9d4:	5e                   	pop    %esi
 82ef9d5:	5d                   	pop    %ebp
 82ef9d6:	c3                   	ret
 82ef9d7:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault @ 0x82ef86e

/* pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault
          (CAssaultMgr *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PacketGuard local_20 [12];
  CParty *local_14;
  
                    /* try { // try from 082ef879 to 082ef929 has its CatchHandler @ 082ef9ac */
  iVar2 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_14 == (CParty *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4,param_1);
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar1 = CParty::check_timer_key(local_14,0x2a,param_2);
  if (cVar1 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar1 = CParty::TimeoutCompleteAfterAssault(local_14);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082ef930 to 082ef987 has its CatchHandler @ 082ef98a */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xf8);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CParty::send_to_party(local_14,local_20);
                    /* try { // try from 082ef9a5 to 082ef9a9 has its CatchHandler @ 082ef9ac */
    PacketGuard::~PacketGuard(local_20);
  }
  return 1;
}

```

---

## OnTimeoutConnectP2P

```asm
// === 082efa52 pvp_assault::CAssaultMgr::OnTimeoutConnectP2P  [0x082efa52-0x82efaa7] ===
 82efa52:	55                   	push   %ebp
 82efa53:	89 e5                	mov    %esp,%ebp
 82efa55:	83 ec 28             	sub    $0x28,%esp
 82efa58:	8b 45 10             	mov    0x10(%ebp),%eax
 82efa5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 82efa5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efa62:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efa66:	8b 45 08             	mov    0x8(%ebp),%eax
 82efa69:	89 04 24             	mov    %eax,(%esp)
 82efa6c:	e8 23 e0 ff ff       	call   82eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>
 82efa71:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efa74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efa77:	89 04 24             	mov    %eax,(%esp)
 82efa7a:	e8 97 ac ff ff       	call   82ea716 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv>
 82efa7f:	eb 1f                	jmp    82efaa0 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji+0x4e>
 82efa81:	83 fa 01             	cmp    $0x1,%edx
 82efa84:	74 08                	je     82efa8e <_ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji+0x3c>
 82efa86:	89 04 24             	mov    %eax,(%esp)
 82efa89:	e8 c2 3c 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efa8e:	89 04 24             	mov    %eax,(%esp)
 82efa91:	e8 4a 62 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efa96:	8b 00                	mov    (%eax),%eax
 82efa98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efa9b:	e8 90 61 43 00       	call   8725c30 <__cxa_end_catch>
 82efaa0:	b8 01 00 00 00       	mov    $0x1,%eax
 82efaa5:	c9                   	leave
 82efaa6:	c3                   	ret
 82efaa7:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutConnectP2P @ 0x82efa52

/* pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efa6c to 082efa7e has its CatchHandler @ 082efa81 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutConnectP2P(this_00);
  return 1;
}

```

---

## OnTimeoutConnectP2PAfterAssault

```asm
// === 082ef9d8 pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault  [0x082ef9d8-0x82efa51] ===
 82ef9d8:	55                   	push   %ebp
 82ef9d9:	89 e5                	mov    %esp,%ebp
 82ef9db:	53                   	push   %ebx
 82ef9dc:	83 ec 24             	sub    $0x24,%esp
 82ef9df:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 82ef9e2:	e8 a7 c7 dd ff       	call   80cc18e <_Z14G_CGameManagerv>
 82ef9e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82ef9eb:	89 04 24             	mov    %eax,(%esp)
 82ef9ee:	e8 3f 55 fa ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 82ef9f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ef9f6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ef9fa:	74 16                	je     82efa12 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x3a>
 82ef9fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ef9ff:	89 04 24             	mov    %eax,(%esp)
 82efa02:	e8 47 a9 2a 00       	call   859a34e <_ZN6CParty27TimeoutCompleteAfterAssaultEv>
 82efa07:	84 c0                	test   %al,%al
 82efa09:	74 07                	je     82efa12 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x3a>
 82efa0b:	b8 01 00 00 00       	mov    $0x1,%eax
 82efa10:	eb 05                	jmp    82efa17 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x3f>
 82efa12:	b8 00 00 00 00       	mov    $0x0,%eax
 82efa17:	84 c0                	test   %al,%al
 82efa19:	74 2c                	je     82efa47 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x6f>
 82efa1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efa1e:	89 04 24             	mov    %eax,(%esp)
 82efa21:	e8 0a ae 2a 00       	call   859a830 <_ZN6CParty15ClearBadP2PUserEv>
 82efa26:	eb 1f                	jmp    82efa47 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x6f>
 82efa28:	83 fa 01             	cmp    $0x1,%edx
 82efa2b:	74 08                	je     82efa35 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji+0x5d>
 82efa2d:	89 04 24             	mov    %eax,(%esp)
 82efa30:	e8 1b 3d 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efa35:	89 04 24             	mov    %eax,(%esp)
 82efa38:	e8 a3 62 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efa3d:	8b 00                	mov    (%eax),%eax
 82efa3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efa42:	e8 e9 61 43 00       	call   8725c30 <__cxa_end_catch>
 82efa47:	b8 01 00 00 00       	mov    $0x1,%eax
 82efa4c:	83 c4 24             	add    $0x24,%esp
 82efa4f:	5b                   	pop    %ebx
 82efa50:	5d                   	pop    %ebp
 82efa51:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault @ 0x82ef9d8

/* pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(unsigned int, int) */

undefined4 pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this;
  
                    /* try { // try from 082ef9e2 to 082efa25 has its CatchHandler @ 082efa28 */
  iVar3 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar3);
  if (this != (CParty *)0x0) {
    cVar2 = CParty::TimeoutCompleteAfterAssault(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_082efa17;
    }
  }
  bVar1 = false;
LAB_082efa17:
  if (bVar1) {
    CParty::ClearBadP2PUser(this);
  }
  return 1;
}

```

---

## OnTimeoutEndAssault

```asm
// === 082efaa8 pvp_assault::CAssaultMgr::OnTimeoutEndAssault  [0x082efaa8-0x82efafd] ===
 82efaa8:	55                   	push   %ebp
 82efaa9:	89 e5                	mov    %esp,%ebp
 82efaab:	83 ec 28             	sub    $0x28,%esp
 82efaae:	8b 45 10             	mov    0x10(%ebp),%eax
 82efab1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82efab5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efab8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efabc:	8b 45 08             	mov    0x8(%ebp),%eax
 82efabf:	89 04 24             	mov    %eax,(%esp)
 82efac2:	e8 cd df ff ff       	call   82eda94 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji>
 82efac7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efaca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efacd:	89 04 24             	mov    %eax,(%esp)
 82efad0:	e8 2f a5 ff ff       	call   82ea004 <_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv>
 82efad5:	eb 1f                	jmp    82efaf6 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji+0x4e>
 82efad7:	83 fa 01             	cmp    $0x1,%edx
 82efada:	74 08                	je     82efae4 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji+0x3c>
 82efadc:	89 04 24             	mov    %eax,(%esp)
 82efadf:	e8 6c 3c 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efae4:	89 04 24             	mov    %eax,(%esp)
 82efae7:	e8 f4 61 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efaec:	8b 00                	mov    (%eax),%eax
 82efaee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efaf1:	e8 3a 61 43 00       	call   8725c30 <__cxa_end_catch>
 82efaf6:	b8 01 00 00 00       	mov    $0x1,%eax
 82efafb:	c9                   	leave
 82efafc:	c3                   	ret
 82efafd:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::OnTimeoutEndAssault @ 0x82efaa8

/* pvp_assault::CAssaultMgr::OnTimeoutEndAssault(unsigned int, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnTimeoutEndAssault(CAssaultMgr *this,uint param_1,int param_2)

{
  CAssaultPlace *this_00;
  
                    /* try { // try from 082efac2 to 082efad4 has its CatchHandler @ 082efad7 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace(this,param_1,param_2);
  CAssaultPlace::TimeoutEndAssault(this_00);
  return 1;
}

```

---

## Reset

```asm
// === 082ed966 pvp_assault::CAssaultMgr::Reset  [0x082ed966-0x82ed975] ===
 82ed966:	55                   	push   %ebp
 82ed967:	89 e5                	mov    %esp,%ebp
 82ed969:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed96c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 82ed973:	5d                   	pop    %ebp
 82ed974:	c3                   	ret
 82ed975:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::Reset @ 0x82ed966

/* pvp_assault::CAssaultMgr::Reset() */

void __thiscall pvp_assault::CAssaultMgr::Reset(CAssaultMgr *this)

{
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## SendPacket

```asm
// === 082efb54 pvp_assault::CAssaultMgr::SendPacket  [0x082efb54-0x82efbf5] ===
 82efb54:	55                   	push   %ebp
 82efb55:	89 e5                	mov    %esp,%ebp
 82efb57:	83 ec 38             	sub    $0x38,%esp
 82efb5a:	8b 45 10             	mov    0x10(%ebp),%eax
 82efb5d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82efb60:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efb63:	89 04 24             	mov    %eax,(%esp)
 82efb66:	e8 67 fb f3 ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 82efb6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efb6f:	8b 45 08             	mov    0x8(%ebp),%eax
 82efb72:	89 04 24             	mov    %eax,(%esp)
 82efb75:	e8 84 de ff ff       	call   82ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>
 82efb7a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82efb7d:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 82efb81:	74 38                	je     82efbbb <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard+0x67>
 82efb83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82efb86:	89 44 24 08          	mov    %eax,0x8(%esp)
 82efb8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efb8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efb91:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efb94:	89 04 24             	mov    %eax,(%esp)
 82efb97:	e8 40 71 ff ff       	call   82e6cdc <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM>
 82efb9c:	84 c0                	test   %al,%al
 82efb9e:	74 4e                	je     82efbee <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard+0x9a>
 82efba0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82efba3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82efba7:	8b 45 14             	mov    0x14(%ebp),%eax
 82efbaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efbae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efbb1:	89 04 24             	mov    %eax,(%esp)
 82efbb4:	e8 9d 70 ff ff       	call   82e6c56 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM>
 82efbb9:	eb 33                	jmp    82efbee <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard+0x9a>
 82efbbb:	8b 45 14             	mov    0x14(%ebp),%eax
 82efbbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efbc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82efbc5:	89 04 24             	mov    %eax,(%esp)
 82efbc8:	e8 29 70 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82efbcd:	eb 1f                	jmp    82efbee <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard+0x9a>
 82efbcf:	83 fa 01             	cmp    $0x1,%edx
 82efbd2:	74 08                	je     82efbdc <_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard+0x88>
 82efbd4:	89 04 24             	mov    %eax,(%esp)
 82efbd7:	e8 74 3b 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efbdc:	89 04 24             	mov    %eax,(%esp)
 82efbdf:	e8 fc 60 43 00       	call   8725ce0 <__cxa_begin_catch>
 82efbe4:	8b 00                	mov    (%eax),%eax
 82efbe6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efbe9:	e8 42 60 43 00       	call   8725c30 <__cxa_end_catch>
 82efbee:	b8 01 00 00 00       	mov    $0x1,%eax
 82efbf3:	c9                   	leave
 82efbf4:	c3                   	ret
 82efbf5:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::SendPacket @ 0x82efb54

/* pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::SendPacket
          (CAssaultMgr *this,CUser *param_1,bool param_2,PacketGuard *param_3)

{
  char cVar1;
  undefined4 local_18;
  CAssaultPlace *local_14;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efb75 to 082efbcc has its CatchHandler @ 082efbcf */
  local_14 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  if (param_2) {
    cVar1 = CAssaultPlace::GetTeam(local_14,param_1,(ENUM_ASSAULT_TEAM *)&local_18);
    if (cVar1 != '\0') {
      CAssaultPlace::SendPacket(local_14,param_3,local_18);
    }
  }
  else {
    CAssaultPlace::SendPacket(local_14,param_3);
  }
  return 1;
}

```

---

## _GetAssaultPlace

```asm
// === 082ed9fe pvp_assault::CAssaultMgr::_GetAssaultPlace  [0x082ed9fe-0x82eda93] ===
 82ed9fe:	55                   	push   %ebp
 82ed9ff:	89 e5                	mov    %esp,%ebp
 82eda01:	83 ec 28             	sub    $0x28,%esp
 82eda04:	8b 45 08             	mov    0x8(%ebp),%eax
 82eda07:	8d 48 08             	lea    0x8(%eax),%ecx
 82eda0a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eda0d:	8d 55 0c             	lea    0xc(%ebp),%edx
 82eda10:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eda14:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82eda18:	89 04 24             	mov    %eax,(%esp)
 82eda1b:	e8 7e 42 00 00       	call   82f1c9e <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 82eda20:	83 ec 04             	sub    $0x4,%esp
 82eda23:	8b 45 08             	mov    0x8(%ebp),%eax
 82eda26:	8d 50 08             	lea    0x8(%eax),%edx
 82eda29:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82eda2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eda30:	89 04 24             	mov    %eax,(%esp)
 82eda33:	e8 00 42 00 00       	call   82f1c38 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 82eda38:	83 ec 04             	sub    $0x4,%esp
 82eda3b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82eda3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eda42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eda45:	89 04 24             	mov    %eax,(%esp)
 82eda48:	e8 7d 42 00 00       	call   82f1cca <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEeqERKS6_>
 82eda4d:	84 c0                	test   %al,%al
 82eda4f:	74 2c                	je     82eda7d <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj+0x7f>
 82eda51:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eda58:	e8 a3 7d 43 00       	call   8725800 <__cxa_allocate_exception>
 82eda5d:	89 c2                	mov    %eax,%edx
 82eda5f:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 82eda65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eda6c:	00 
 82eda6d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eda74:	08 
 82eda75:	89 04 24             	mov    %eax,(%esp)
 82eda78:	e8 d3 71 43 00       	call   8724c50 <__cxa_throw>
 82eda7d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82eda80:	89 04 24             	mov    %eax,(%esp)
 82eda83:	e8 08 42 00 00       	call   82f1c90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEptEv>
 82eda88:	8b 40 04             	mov    0x4(%eax),%eax
 82eda8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82eda8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eda91:	c9                   	leave
 82eda92:	c3                   	ret
 82eda93:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::_GetAssaultPlace @ 0x82ed9fe

/* pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int) */

undefined4 pvp_assault::CAssaultMgr::_GetAssaultPlace(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [16];
  
  puVar5 = &stack0x00000008;
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::end(local_14);
  p_Var4 = (_Rb_tree_iterator *)local_14;
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator==(local_18,p_Var4);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4,p_Var4,puVar5);
    *puVar2 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator->(local_18);
  return *(undefined4 *)(iVar3 + 4);
}

```

---

## _GetAssaultPlace_082eda94

```asm
// === 082eda94 pvp_assault::CAssaultMgr::_GetAssaultPlace  [0x082eda94-0x82edb69] ===
 82eda94:	55                   	push   %ebp
 82eda95:	89 e5                	mov    %esp,%ebp
 82eda97:	83 ec 28             	sub    $0x28,%esp
 82eda9a:	8b 45 08             	mov    0x8(%ebp),%eax
 82eda9d:	8d 48 08             	lea    0x8(%eax),%ecx
 82edaa0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82edaa3:	8d 55 0c             	lea    0xc(%ebp),%edx
 82edaa6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82edaaa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82edaae:	89 04 24             	mov    %eax,(%esp)
 82edab1:	e8 e8 41 00 00       	call   82f1c9e <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 82edab6:	83 ec 04             	sub    $0x4,%esp
 82edab9:	8b 45 08             	mov    0x8(%ebp),%eax
 82edabc:	8d 50 08             	lea    0x8(%eax),%edx
 82edabf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82edac2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82edac6:	89 04 24             	mov    %eax,(%esp)
 82edac9:	e8 6a 41 00 00       	call   82f1c38 <_ZNSt3mapIjPN11pvp_assault13CAssaultPlaceESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 82edace:	83 ec 04             	sub    $0x4,%esp
 82edad1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82edad4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82edad8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82edadb:	89 04 24             	mov    %eax,(%esp)
 82edade:	e8 e7 41 00 00       	call   82f1cca <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEeqERKS6_>
 82edae3:	84 c0                	test   %al,%al
 82edae5:	74 2c                	je     82edb13 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji+0x7f>
 82edae7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82edaee:	e8 0d 7d 43 00       	call   8725800 <__cxa_allocate_exception>
 82edaf3:	89 c2                	mov    %eax,%edx
 82edaf5:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 82edafb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82edb02:	00 
 82edb03:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82edb0a:	08 
 82edb0b:	89 04 24             	mov    %eax,(%esp)
 82edb0e:	e8 3d 71 43 00       	call   8724c50 <__cxa_throw>
 82edb13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82edb16:	89 04 24             	mov    %eax,(%esp)
 82edb19:	e8 72 41 00 00       	call   82f1c90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN11pvp_assault13CAssaultPlaceEEEptEv>
 82edb1e:	8b 40 04             	mov    0x4(%eax),%eax
 82edb21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82edb24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82edb27:	89 04 24             	mov    %eax,(%esp)
 82edb2a:	e8 71 2b 00 00       	call   82f06a0 <_ZN11pvp_assault13CAssaultPlace14GetAuthenValueEv>
 82edb2f:	3b 45 10             	cmp    0x10(%ebp),%eax
 82edb32:	0f 95 c0             	setne  %al
 82edb35:	84 c0                	test   %al,%al
 82edb37:	74 2c                	je     82edb65 <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji+0xd1>
 82edb39:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82edb40:	e8 bb 7c 43 00       	call   8725800 <__cxa_allocate_exception>
 82edb45:	89 c2                	mov    %eax,%edx
 82edb47:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 82edb4d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82edb54:	00 
 82edb55:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82edb5c:	08 
 82edb5d:	89 04 24             	mov    %eax,(%esp)
 82edb60:	e8 eb 70 43 00       	call   8724c50 <__cxa_throw>
 82edb65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82edb68:	c9                   	leave
 82edb69:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::_GetAssaultPlace @ 0x82eda94

/* pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int) */

CAssaultPlace * __thiscall
pvp_assault::CAssaultMgr::_GetAssaultPlace(CAssaultMgr *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  uint *puVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [4];
  CAssaultPlace *local_10;
  
  puVar5 = &param_1;
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::end(local_14);
  p_Var4 = (_Rb_tree_iterator *)local_14;
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator==(local_18,p_Var4);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4,p_Var4,puVar5);
    *puVar2 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator->(local_18);
  local_10 = *(CAssaultPlace **)(iVar3 + 4);
  iVar3 = CAssaultPlace::GetAuthenValue(local_10);
  if (iVar3 != param_2) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  return local_10;
}

```

---

## _GetNextAssaultPlaceId

```asm
// === 082ed976 pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId  [0x082ed976-0x82ed9fd] ===
 82ed976:	55                   	push   %ebp
 82ed977:	89 e5                	mov    %esp,%ebp
 82ed979:	53                   	push   %ebx
 82ed97a:	83 ec 24             	sub    $0x24,%esp
 82ed97d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed980:	8b 40 04             	mov    0x4(%eax),%eax
 82ed983:	8d 50 01             	lea    0x1(%eax),%edx
 82ed986:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed989:	89 50 04             	mov    %edx,0x4(%eax)
 82ed98c:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed98f:	8b 40 04             	mov    0x4(%eax),%eax
 82ed992:	85 c0                	test   %eax,%eax
 82ed994:	75 5c                	jne    82ed9f2 <_ZN11pvp_assault11CAssaultMgr22_GetNextAssaultPlaceIdEv+0x7c>
 82ed996:	a1 bc bc 43 09       	mov    0x943bcbc,%eax
 82ed99b:	83 c0 01             	add    $0x1,%eax
 82ed99e:	a3 bc bc 43 09       	mov    %eax,0x943bcbc
 82ed9a3:	8b 1d bc bc 43 09    	mov    0x943bcbc,%ebx
 82ed9a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ed9b0:	00 
 82ed9b1:	c7 44 24 08 85 10 00 	movl   $0x1085,0x8(%esp)
 82ed9b8:	00 
 82ed9b9:	c7 44 24 04 c0 ce c1 	movl   $0x8c1cec0,0x4(%esp)
 82ed9c0:	08 
 82ed9c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ed9c4:	89 04 24             	mov    %eax,(%esp)
 82ed9c7:	e8 4c 1d 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ed9cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ed9d0:	c7 44 24 04 3c c0 c1 	movl   $0x8c1c03c,0x4(%esp)
 82ed9d7:	08 
 82ed9d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ed9db:	89 04 24             	mov    %eax,(%esp)
 82ed9de:	e8 a5 1d 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ed9e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed9e6:	8b 40 04             	mov    0x4(%eax),%eax
 82ed9e9:	8d 50 01             	lea    0x1(%eax),%edx
 82ed9ec:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed9ef:	89 50 04             	mov    %edx,0x4(%eax)
 82ed9f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed9f5:	8b 40 04             	mov    0x4(%eax),%eax
 82ed9f8:	83 c4 24             	add    $0x24,%esp
 82ed9fb:	5b                   	pop    %ebx
 82ed9fc:	5d                   	pop    %ebp
 82ed9fd:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId @ 0x82ed976

/* pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId() */

undefined4 __thiscall pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId(CAssaultMgr *this)

{
  int iVar1;
  cMyTrace local_1c [20];
  
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  if (*(int *)(this + 4) == 0) {
    iVar1 = _GetNextAssaultPlaceId()::count + 1;
    _GetNextAssaultPlaceId()::count = iVar1;
    cMyTrace::cMyTrace(local_1c,"unsigned int pvp_assault::CAssaultMgr::_GetNextAssaultPlaceId()",
                       0x1085,0);
    cMyTrace::operator()(local_1c,"NEXT_ASSAULT_PLACE_ID overflow count(%d)",iVar1);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
  }
  return *(undefined4 *)(this + 4);
}

```

---

## _SendVictoryInfo

```asm
// === 082efcb2 pvp_assault::CAssaultMgr::_SendVictoryInfo  [0x082efcb2-0x82efe13] ===
 82efcb2:	55                   	push   %ebp
 82efcb3:	89 e5                	mov    %esp,%ebp
 82efcb5:	56                   	push   %esi
 82efcb6:	53                   	push   %ebx
 82efcb7:	83 ec 20             	sub    $0x20,%esp
 82efcba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efcbd:	89 04 24             	mov    %eax,(%esp)
 82efcc0:	e8 87 e0 29 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82efcc5:	c7 44 24 08 0a 01 00 	movl   $0x10a,0x8(%esp)
 82efccc:	00 
 82efccd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82efcd4:	00 
 82efcd5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efcd8:	89 04 24             	mov    %eax,(%esp)
 82efcdb:	e8 1c bc dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82efce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efce3:	89 04 24             	mov    %eax,(%esp)
 82efce6:	e8 db ff f3 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82efceb:	3c 01                	cmp    $0x1,%al
 82efced:	0f 94 c0             	sete   %al
 82efcf0:	84 c0                	test   %al,%al
 82efcf2:	74 36                	je     82efd2a <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0x78>
 82efcf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efcf7:	89 04 24             	mov    %eax,(%esp)
 82efcfa:	e8 6d 88 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82efcff:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efd03:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd06:	89 04 24             	mov    %eax,(%esp)
 82efd09:	e8 2e bc dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82efd0e:	8b 45 10             	mov    0x10(%ebp),%eax
 82efd11:	89 04 24             	mov    %eax,(%esp)
 82efd14:	e8 53 88 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82efd19:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efd1d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd20:	89 04 24             	mov    %eax,(%esp)
 82efd23:	e8 14 bc dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82efd28:	eb 34                	jmp    82efd5e <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0xac>
 82efd2a:	8b 45 10             	mov    0x10(%ebp),%eax
 82efd2d:	89 04 24             	mov    %eax,(%esp)
 82efd30:	e8 37 88 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82efd35:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efd39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd3c:	89 04 24             	mov    %eax,(%esp)
 82efd3f:	e8 f8 bb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82efd44:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efd47:	89 04 24             	mov    %eax,(%esp)
 82efd4a:	e8 1d 88 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82efd4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efd53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd56:	89 04 24             	mov    %eax,(%esp)
 82efd59:	e8 de bb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82efd5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82efd65:	00 
 82efd66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd69:	89 04 24             	mov    %eax,(%esp)
 82efd6c:	e8 e7 bb dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82efd71:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efd74:	89 04 24             	mov    %eax,(%esp)
 82efd77:	e8 d0 53 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82efd7c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efd7f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82efd83:	74 14                	je     82efd99 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0xe7>
 82efd85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd88:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efd8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efd8f:	89 04 24             	mov    %eax,(%esp)
 82efd92:	e8 b7 d3 2a 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 82efd97:	eb 12                	jmp    82efdab <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0xf9>
 82efd99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efd9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efda0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82efda3:	89 04 24             	mov    %eax,(%esp)
 82efda6:	e8 0f 88 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82efdab:	8b 45 10             	mov    0x10(%ebp),%eax
 82efdae:	89 04 24             	mov    %eax,(%esp)
 82efdb1:	e8 96 53 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82efdb6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efdb9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82efdbd:	74 14                	je     82efdd3 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0x121>
 82efdbf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efdc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efdc6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efdc9:	89 04 24             	mov    %eax,(%esp)
 82efdcc:	e8 7d d3 2a 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 82efdd1:	eb 2f                	jmp    82efe02 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0x150>
 82efdd3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efdd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82efdda:	8b 45 10             	mov    0x10(%ebp),%eax
 82efddd:	89 04 24             	mov    %eax,(%esp)
 82efde0:	e8 d5 87 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82efde5:	eb 1b                	jmp    82efe02 <_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_+0x150>
 82efde7:	89 d3                	mov    %edx,%ebx
 82efde9:	89 c6                	mov    %eax,%esi
 82efdeb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efdee:	89 04 24             	mov    %eax,(%esp)
 82efdf1:	e8 8a e0 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82efdf6:	89 f0                	mov    %esi,%eax
 82efdf8:	89 da                	mov    %ebx,%edx
 82efdfa:	89 04 24             	mov    %eax,(%esp)
 82efdfd:	e8 4e 39 7f 00       	call   8ae3750 <_Unwind_Resume>
 82efe02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82efe05:	89 04 24             	mov    %eax,(%esp)
 82efe08:	e8 73 e0 29 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82efe0d:	83 c4 20             	add    $0x20,%esp
 82efe10:	5b                   	pop    %ebx
 82efe11:	5e                   	pop    %esi
 82efe12:	5d                   	pop    %ebp
 82efe13:	c3                   	ret

```

```c
// pvp_assault::CAssaultMgr::_SendVictoryInfo @ 0x82efcb2

/* pvp_assault::CAssaultMgr::_SendVictoryInfo(CUser*, CUser*) */

void __thiscall
pvp_assault::CAssaultMgr::_SendVictoryInfo(CAssaultMgr *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082efcdb to 082efde4 has its CatchHandler @ 082efde7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x10a);
  cVar1 = CUser::getPowerSide(param_1);
  if (cVar1 == '\x01') {
    iVar2 = CUser::GetPowerWarPartyVictory(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUser::GetPowerWarPartyVictory(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
  }
  else {
    iVar2 = CUser::GetPowerWarPartyVictory(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUser::GetPowerWarPartyVictory(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  local_10 = (CParty *)CUser::GetParty(param_2);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_2,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## check_party_teleport_user

```asm
// === 082efe14 pvp_assault::CAssaultMgr::check_party_teleport_user  [0x082efe14-0x82eff41] ===
 82efe14:	55                   	push   %ebp
 82efe15:	89 e5                	mov    %esp,%ebp
 82efe17:	83 ec 38             	sub    $0x38,%esp
 82efe1a:	8b 55 0c             	mov    0xc(%ebp),%edx
 82efe1d:	8b 45 18             	mov    0x18(%ebp),%eax
 82efe20:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 82efe23:	88 45 e0             	mov    %al,-0x20(%ebp)
 82efe26:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82efe2d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82efe34:	8b 45 10             	mov    0x10(%ebp),%eax
 82efe37:	89 04 24             	mov    %eax,(%esp)
 82efe3a:	e8 d5 a4 de ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82efe3f:	84 c0                	test   %al,%al
 82efe41:	74 0e                	je     82efe51 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x3d>
 82efe43:	8b 45 10             	mov    0x10(%ebp),%eax
 82efe46:	89 04 24             	mov    %eax,(%esp)
 82efe49:	e8 fe 52 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82efe4e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efe51:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82efe55:	74 45                	je     82efe9c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x88>
 82efe57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efe5a:	89 04 24             	mov    %eax,(%esp)
 82efe5d:	e8 ac da f3 ff       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 82efe62:	89 04 24             	mov    %eax,(%esp)
 82efe65:	e8 84 d9 f3 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 82efe6a:	84 c0                	test   %al,%al
 82efe6c:	78 1e                	js     82efe8c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x78>
 82efe6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efe71:	89 04 24             	mov    %eax,(%esp)
 82efe74:	e8 95 da f3 ff       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 82efe79:	89 04 24             	mov    %eax,(%esp)
 82efe7c:	e8 6d d9 f3 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 82efe81:	3c 03                	cmp    $0x3,%al
 82efe83:	7f 07                	jg     82efe8c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x78>
 82efe85:	b8 01 00 00 00       	mov    $0x1,%eax
 82efe8a:	eb 05                	jmp    82efe91 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x7d>
 82efe8c:	b8 00 00 00 00       	mov    $0x0,%eax
 82efe91:	84 c0                	test   %al,%al
 82efe93:	74 07                	je     82efe9c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x88>
 82efe95:	c7 45 f0 9c 00 00 00 	movl   $0x9c,-0x10(%ebp)
 82efe9c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82efea3:	8b 45 14             	mov    0x14(%ebp),%eax
 82efea6:	89 04 24             	mov    %eax,(%esp)
 82efea9:	e8 66 a4 de ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82efeae:	84 c0                	test   %al,%al
 82efeb0:	74 0e                	je     82efec0 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xac>
 82efeb2:	8b 45 14             	mov    0x14(%ebp),%eax
 82efeb5:	89 04 24             	mov    %eax,(%esp)
 82efeb8:	e8 8f 52 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82efebd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82efec0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82efec4:	74 45                	je     82eff0b <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xf7>
 82efec6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efec9:	89 04 24             	mov    %eax,(%esp)
 82efecc:	e8 3d da f3 ff       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 82efed1:	89 04 24             	mov    %eax,(%esp)
 82efed4:	e8 15 d9 f3 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 82efed9:	84 c0                	test   %al,%al
 82efedb:	78 1e                	js     82efefb <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xe7>
 82efedd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82efee0:	89 04 24             	mov    %eax,(%esp)
 82efee3:	e8 26 da f3 ff       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 82efee8:	89 04 24             	mov    %eax,(%esp)
 82efeeb:	e8 fe d8 f3 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 82efef0:	3c 03                	cmp    $0x3,%al
 82efef2:	7f 07                	jg     82efefb <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xe7>
 82efef4:	b8 01 00 00 00       	mov    $0x1,%eax
 82efef9:	eb 05                	jmp    82eff00 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xec>
 82efefb:	b8 00 00 00 00       	mov    $0x0,%eax
 82eff00:	84 c0                	test   %al,%al
 82eff02:	74 07                	je     82eff0b <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0xf7>
 82eff04:	c7 45 f0 9d 00 00 00 	movl   $0x9d,-0x10(%ebp)
 82eff0b:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 82eff0f:	74 2b                	je     82eff3c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x128>
 82eff11:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82eff15:	74 25                	je     82eff3c <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b+0x128>
 82eff17:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eff1a:	0f b6 d0             	movzbl %al,%edx
 82eff1d:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 82eff21:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82eff25:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eff29:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 82eff30:	00 
 82eff31:	8b 45 10             	mov    0x10(%ebp),%eax
 82eff34:	89 04 24             	mov    %eax,(%esp)
 82eff37:	e8 f2 be 38 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 82eff3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eff3f:	c9                   	leave
 82eff40:	c3                   	ret
 82eff41:	90                   	nop

```

```c
// pvp_assault::CAssaultMgr::check_party_teleport_user @ 0x82efe14

/* pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool) */

int __thiscall
pvp_assault::CAssaultMgr::check_party_teleport_user
          (CAssaultMgr *this,char param_1,CUser *param_2,CUser *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  CPartyTelePort *pCVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_2);
  if (cVar2 != '\0') {
    local_10 = (CParty *)CUser::GetParty(param_2);
  }
  if (local_10 != (CParty *)0x0) {
    pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
    if (cVar2 < '\0') {
LAB_082efe8c:
      bVar1 = false;
    }
    else {
      pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
      if ('\x03' < cVar2) goto LAB_082efe8c;
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = 0x9c;
    }
  }
  local_10 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_3);
  if (cVar2 != '\0') {
    local_10 = (CParty *)CUser::GetParty(param_3);
  }
  if (local_10 == (CParty *)0x0) goto LAB_082eff0b;
  pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
  if (cVar2 < '\0') {
LAB_082efefb:
    bVar1 = false;
  }
  else {
    pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
    if ('\x03' < cVar2) goto LAB_082efefb;
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = 0x9d;
  }
LAB_082eff0b:
  if ((param_4) && (local_14 != 0)) {
    CUser::SendCmdPeerErrorPacket(param_2,10,(int)param_1,local_14);
  }
  return local_14;
}

```

