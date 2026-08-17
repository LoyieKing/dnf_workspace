# Dispatcher_RequestAssaultPrice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081df084 Dispatcher_RequestAssaultPrice::check_error  [0x081df084-0x81df293] ===
 81df084:	55                   	push   %ebp
 81df085:	89 e5                	mov    %esp,%ebp
 81df087:	53                   	push   %ebx
 81df088:	83 ec 34             	sub    $0x34,%esp
 81df08b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81df08f:	75 0a                	jne    81df09b <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x17>
 81df091:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81df096:	e9 f3 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df09b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df09e:	89 04 24             	mov    %eax,(%esp)
 81df0a1:	e8 e6 b2 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81df0a6:	83 f8 02             	cmp    $0x2,%eax
 81df0a9:	0f 9e c0             	setle  %al
 81df0ac:	84 c0                	test   %al,%al
 81df0ae:	74 0a                	je     81df0ba <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x36>
 81df0b0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81df0b5:	e9 d4 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df0ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81df0bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81df0c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81df0c3:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81df0c7:	0f b7 d8             	movzwl %ax,%ebx
 81df0ca:	e8 d8 b2 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81df0cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81df0d3:	89 04 24             	mov    %eax,(%esp)
 81df0d6:	e8 c1 5a 4e 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81df0db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81df0de:	e8 05 5b 3e 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81df0e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81df0e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81df0ea:	89 04 24             	mov    %eax,(%esp)
 81df0ed:	e8 6c bc 3e 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81df0f2:	84 c0                	test   %al,%al
 81df0f4:	74 0a                	je     81df100 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x7c>
 81df0f6:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81df0fb:	e9 8e 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df100:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df103:	89 04 24             	mov    %eax,(%esp)
 81df106:	e8 13 87 46 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81df10b:	84 c0                	test   %al,%al
 81df10d:	74 0a                	je     81df119 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x95>
 81df10f:	b8 bf 00 00 00       	mov    $0xbf,%eax
 81df114:	e9 75 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df119:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df11c:	89 04 24             	mov    %eax,(%esp)
 81df11f:	e8 b6 b1 ef ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81df124:	84 c0                	test   %al,%al
 81df126:	74 0a                	je     81df132 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0xae>
 81df128:	b8 13 00 00 00       	mov    $0x13,%eax
 81df12d:	e9 5c 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df132:	e8 70 b2 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81df137:	89 04 24             	mov    %eax,(%esp)
 81df13a:	e8 df 21 f1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81df13f:	84 c0                	test   %al,%al
 81df141:	74 0a                	je     81df14d <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0xc9>
 81df143:	b8 13 00 00 00       	mov    $0x13,%eax
 81df148:	e9 41 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df14d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81df151:	75 0a                	jne    81df15d <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0xd9>
 81df153:	b8 03 00 00 00       	mov    $0x3,%eax
 81df158:	e9 31 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df15d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df160:	89 04 24             	mov    %eax,(%esp)
 81df163:	e8 b6 86 46 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81df168:	84 c0                	test   %al,%al
 81df16a:	74 0a                	je     81df176 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0xf2>
 81df16c:	b8 c0 00 00 00       	mov    $0xc0,%eax
 81df171:	e9 18 01 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df176:	e8 25 5f 05 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81df17b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81df182:	00 
 81df183:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81df186:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81df18a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81df18d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81df191:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81df198:	00 
 81df199:	89 04 24             	mov    %eax,(%esp)
 81df19c:	e8 73 0c 11 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81df1a1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81df1a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81df1a7:	85 c0                	test   %eax,%eax
 81df1a9:	7e 08                	jle    81df1b3 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x12f>
 81df1ab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81df1ae:	e9 db 00 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df1b3:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81df1b8:	c7 44 24 08 37 00 00 	movl   $0x37,0x8(%esp)
 81df1bf:	00 
 81df1c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81df1c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81df1c7:	89 04 24             	mov    %eax,(%esp)
 81df1ca:	e8 33 98 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81df1cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81df1d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81df1d6:	74 08                	je     81df1e0 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x15c>
 81df1d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df1db:	e9 ae 00 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df1e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df1e3:	89 04 24             	mov    %eax,(%esp)
 81df1e6:	e8 a1 b1 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81df1eb:	83 f8 04             	cmp    $0x4,%eax
 81df1ee:	0f 9f c0             	setg   %al
 81df1f1:	84 c0                	test   %al,%al
 81df1f3:	74 0a                	je     81df1ff <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x17b>
 81df1f5:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81df1fa:	e9 8f 00 00 00       	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df1ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df202:	89 04 24             	mov    %eax,(%esp)
 81df205:	e8 64 b1 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81df20a:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81df210:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df214:	89 14 24             	mov    %edx,(%esp)
 81df217:	e8 2a a1 f2 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81df21c:	83 f0 01             	xor    $0x1,%eax
 81df21f:	84 c0                	test   %al,%al
 81df221:	74 28                	je     81df24b <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x1c7>
 81df223:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81df226:	89 04 24             	mov    %eax,(%esp)
 81df229:	e8 40 b1 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81df22e:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81df234:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df238:	89 14 24             	mov    %edx,(%esp)
 81df23b:	e8 06 a1 f2 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81df240:	84 c0                	test   %al,%al
 81df242:	74 07                	je     81df24b <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x1c7>
 81df244:	b8 01 00 00 00       	mov    $0x1,%eax
 81df249:	eb 05                	jmp    81df250 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x1cc>
 81df24b:	b8 00 00 00 00       	mov    $0x0,%eax
 81df250:	84 c0                	test   %al,%al
 81df252:	74 07                	je     81df25b <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x1d7>
 81df254:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81df259:	eb 33                	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df25b:	e8 40 5e 05 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81df260:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81df263:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81df267:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81df26a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81df26e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81df271:	89 54 24 04          	mov    %edx,0x4(%esp)
 81df275:	89 04 24             	mov    %eax,(%esp)
 81df278:	e8 3d ed 10 00       	call   82edfba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi>
 81df27d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81df280:	85 c0                	test   %eax,%eax
 81df282:	74 05                	je     81df289 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x205>
 81df284:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81df287:	eb 05                	jmp    81df28e <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE+0x20a>
 81df289:	b8 00 00 00 00       	mov    $0x0,%eax
 81df28e:	83 c4 34             	add    $0x34,%esp
 81df291:	5b                   	pop    %ebx
 81df292:	5d                   	pop    %ebp
 81df293:	c3                   	ret

```

```c
// Dispatcher_RequestAssaultPrice::check_error @ 0x81df084

/* Dispatcher_RequestAssaultPrice::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_RequestAssaultPrice::check_error
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,MSG_BASE *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  CPrivateStoreMgr *this_00;
  CAssaultMgr *pCVar6;
  uint uVar7;
  int local_1c;
  MSG_BASE *local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return -1;
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 < 3) {
    return -1;
  }
  local_18 = param_2;
  uVar1 = *(ushort *)(param_2 + 0xd);
  pGVar5 = (GameWorld *)G_GameWorld();
  local_14 = (CUserCharacInfo *)GameWorld::find_from_world(pGVar5,uVar1);
  this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
  if (cVar3 != '\0') {
    return 0x3c;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    return 0xbf;
  }
  cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 != '\0') {
    return 0x13;
  }
  if (local_14 == (CUserCharacInfo *)0x0) {
    return 3;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore(local_14);
  if (cVar3 != '\0') {
    return 0xc0;
  }
  pCVar6 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  local_1c = pvp_assault::CAssaultMgr::check_party_teleport_user
                       (pCVar6,'\x04',param_1,(CUser *)local_14,false);
  if (0 < local_1c) {
    return local_1c;
  }
  local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x37);
  if (local_10 != 0) {
    return local_10;
  }
  iVar4 = CUser::get_state((CUser *)local_14);
  if (4 < iVar4) {
    return 0x7fffffff;
  }
  uVar7 = CUser::get_acc_id(param_1);
  cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar7);
  if (cVar3 != '\x01') {
    uVar7 = CUser::get_acc_id((CUser *)local_14);
    cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar7);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_081df250;
    }
  }
  bVar2 = false;
LAB_081df250:
  if (bVar2) {
    local_1c = 0x7fffffff;
  }
  else {
    pCVar6 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnRequestAssault(pCVar6,param_1,(CUser *)local_14,&local_1c);
    if (local_1c == 0) {
      local_1c = 0;
    }
  }
  return local_1c;
}

```

---

## process

```asm
// === 081dee80 Dispatcher_RequestAssaultPrice::process  [0x081dee80-0x81df083] ===
 81dee80:	55                   	push   %ebp
 81dee81:	89 e5                	mov    %esp,%ebp
 81dee83:	53                   	push   %ebx
 81dee84:	81 ec 84 00 00 00    	sub    $0x84,%esp
 81dee8a:	8b 45 14             	mov    0x14(%ebp),%eax
 81dee8d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dee90:	8b 45 10             	mov    0x10(%ebp),%eax
 81dee93:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81dee96:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dee99:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81dee9d:	0f b7 d8             	movzwl %ax,%ebx
 81deea0:	e8 02 b5 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81deea5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81deea9:	89 04 24             	mov    %eax,(%esp)
 81deeac:	e8 eb 5c 4e 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81deeb1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81deeb4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81deeb8:	75 14                	jne    81deece <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x4e>
 81deeba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81deebd:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 81deec4:	b8 00 00 00 00       	mov    $0x0,%eax
 81deec9:	e9 b1 01 00 00       	jmp    81df07f <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1ff>
 81deece:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deed1:	89 04 24             	mov    %eax,(%esp)
 81deed4:	e8 b3 b4 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81deed9:	83 f8 02             	cmp    $0x2,%eax
 81deedc:	7e 0f                	jle    81deeed <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x6d>
 81deede:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deee1:	89 04 24             	mov    %eax,(%esp)
 81deee4:	e8 49 15 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81deee9:	85 c0                	test   %eax,%eax
 81deeeb:	75 07                	jne    81deef4 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x74>
 81deeed:	b8 01 00 00 00       	mov    $0x1,%eax
 81deef2:	eb 05                	jmp    81deef9 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81deef4:	b8 00 00 00 00       	mov    $0x0,%eax
 81deef9:	84 c0                	test   %al,%al
 81deefb:	74 14                	je     81def11 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x91>
 81deefd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81def00:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 81def07:	b8 00 00 00 00       	mov    $0x0,%eax
 81def0c:	e9 6e 01 00 00       	jmp    81df07f <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1ff>
 81def11:	e8 8a 61 05 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81def16:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81def19:	89 54 24 08          	mov    %edx,0x8(%esp)
 81def1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81def20:	89 54 24 04          	mov    %edx,0x4(%esp)
 81def24:	89 04 24             	mov    %eax,(%esp)
 81def27:	e8 5a ed 10 00       	call   82edc86 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_>
 81def2c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81def2f:	89 42 08             	mov    %eax,0x8(%edx)
 81def32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81def35:	8b 40 08             	mov    0x8(%eax),%eax
 81def38:	85 c0                	test   %eax,%eax
 81def3a:	0f 8e a6 00 00 00    	jle    81defe6 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81def40:	8b 45 0c             	mov    0xc(%ebp),%eax
 81def43:	89 04 24             	mov    %eax,(%esp)
 81def46:	e8 33 b3 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81def4b:	8d 55 a7             	lea    -0x59(%ebp),%edx
 81def4e:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 81def55:	00 
 81def56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81def5d:	00 
 81def5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81def62:	89 14 24             	mov    %edx,(%esp)
 81def65:	e8 ae c9 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81def6a:	83 ec 04             	sub    $0x4,%esp
 81def6d:	8b 45 a9             	mov    -0x57(%ebp),%eax
 81def70:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81def73:	e8 23 d2 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81def78:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81def7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81def7f:	89 04 24             	mov    %eax,(%esp)
 81def82:	e8 ab 0a 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81def87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81def8a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81def8e:	74 56                	je     81defe6 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81def90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81def93:	8b 40 08             	mov    0x8(%eax),%eax
 81def96:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81def99:	db 45 94             	fildl  -0x6c(%ebp)
 81def9c:	d9 5d 88             	fstps  -0x78(%ebp)
 81def9f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81defa2:	8b 40 08             	mov    0x8(%eax),%eax
 81defa5:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81defa8:	db 45 94             	fildl  -0x6c(%ebp)
 81defab:	d9 5d 8c             	fstps  -0x74(%ebp)
 81defae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81defb1:	89 04 24             	mov    %eax,(%esp)
 81defb4:	e8 c7 da 04 00       	call   822ca80 <_ZNK10CEquipItem22getUpgradeCostDiscountEv>
 81defb9:	d8 4d 8c             	fmuls  -0x74(%ebp)
 81defbc:	d9 05 50 63 bd 08    	flds   0x8bd6350
 81defc2:	de f9                	fdivrp %st,%st(1)
 81defc4:	d8 45 88             	fadds  -0x78(%ebp)
 81defc7:	d9 7d 92             	fnstcw -0x6e(%ebp)
 81defca:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 81defce:	b4 0c                	mov    $0xc,%ah
 81defd0:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 81defd4:	d9 6d 90             	fldcw  -0x70(%ebp)
 81defd7:	db 5d 94             	fistpl -0x6c(%ebp)
 81defda:	d9 6d 92             	fldcw  -0x6e(%ebp)
 81defdd:	8b 55 94             	mov    -0x6c(%ebp),%edx
 81defe0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81defe3:	89 50 08             	mov    %edx,0x8(%eax)
 81defe6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81defe9:	8b 50 08             	mov    0x8(%eax),%edx
 81defec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81defef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81deff3:	89 04 24             	mov    %eax,(%esp)
 81deff6:	e8 47 ff 4a 00       	call   868ef42 <_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi>
 81deffb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deffe:	89 04 24             	mov    %eax,(%esp)
 81df001:	e8 76 b3 ef ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81df006:	0f b7 d0             	movzwl %ax,%edx
 81df009:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df00c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81df010:	89 04 24             	mov    %eax,(%esp)
 81df013:	e8 6c ff 4a 00       	call   868ef84 <_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt>
 81df018:	8b 45 10             	mov    0x10(%ebp),%eax
 81df01b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81df01f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df022:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df026:	8b 45 08             	mov    0x8(%ebp),%eax
 81df029:	89 04 24             	mov    %eax,(%esp)
 81df02c:	e8 53 00 00 00       	call   81df084 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE>
 81df031:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81df034:	89 42 04             	mov    %eax,0x4(%edx)
 81df037:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81df03a:	8b 40 04             	mov    0x4(%eax),%eax
 81df03d:	85 c0                	test   %eax,%eax
 81df03f:	7e 07                	jle    81df048 <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81df041:	b8 00 00 00 00       	mov    $0x0,%eax
 81df046:	eb 37                	jmp    81df07f <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1ff>
 81df048:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81df04b:	8b 40 04             	mov    0x4(%eax),%eax
 81df04e:	85 c0                	test   %eax,%eax
 81df050:	79 28                	jns    81df07a <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1fa>
 81df052:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81df055:	8b 40 04             	mov    0x4(%eax),%eax
 81df058:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81df05f:	00 
 81df060:	89 44 24 08          	mov    %eax,0x8(%esp)
 81df064:	c7 44 24 04 40 1c bd 	movl   $0x8bd1c40,0x4(%esp)
 81df06b:	08 
 81df06c:	c7 04 24 f4 50 00 00 	movl   $0x50f4,(%esp)
 81df073:	e8 5f 18 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81df078:	eb 05                	jmp    81df07f <_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase+0x1ff>
 81df07a:	b8 00 00 00 00       	mov    $0x0,%eax
 81df07f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81df082:	c9                   	leave
 81df083:	c3                   	ret

```

```c
// Dispatcher_RequestAssaultPrice::process @ 0x81dee80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestAssaultPrice::process
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  GameWorld *this_00;
  int iVar4;
  undefined4 uVar5;
  CAssaultMgr *this_01;
  CDataManager *this_02;
  longdouble lVar6;
  undefined1 local_5d [2];
  int local_5b;
  ParamBase *local_20;
  MSG_BASE *local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  CEquipItem *local_10;
  
  local_20 = param_3;
  local_1c = param_2;
  uVar3 = *(ushort *)(param_2 + 0xd);
  this_00 = (GameWorld *)G_GameWorld();
  local_18 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,uVar3);
  if (local_18 != (CUserCharacInfo *)0x0) {
    iVar4 = CUser::get_state((CUser *)local_18);
    if ((iVar4 < 3) || (iVar4 = CUserCharacInfo::getCurCharacR(local_18), iVar4 == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      *(undefined4 *)(local_20 + 4) = 3;
      uVar5 = 0;
    }
    else {
      this_01 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      uVar5 = pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney
                        (this_01,param_1,(CUser *)local_18);
      *(undefined4 *)(local_20 + 8) = uVar5;
      if (0 < *(int *)(local_20 + 8)) {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_5d,iVar4);
        local_14 = local_5b;
        this_02 = (CDataManager *)G_CDataManager();
        local_10 = (CEquipItem *)CDataManager::find_item(this_02,local_14);
        if (local_10 != (CEquipItem *)0x0) {
          iVar4 = *(int *)(local_20 + 8);
          iVar1 = *(int *)(local_20 + 8);
          lVar6 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_10);
          *(int *)(local_20 + 8) =
               (int)ROUND((lVar6 * (longdouble)iVar1) / (longdouble)_DAT_08bd6350 +
                          (longdouble)iVar4);
        }
      }
      CUserCharacInfo::SetCurCharacAssaultMoney((CUserCharacInfo *)param_1,*(int *)(local_20 + 8));
      uVar3 = CUser::get_unique_id((CUser *)local_18);
      CUserCharacInfo::SetCurCharacAssaultedUserId((CUserCharacInfo *)param_1,uVar3);
      uVar5 = check_error(this,param_1,param_2);
      *(undefined4 *)(local_20 + 4) = uVar5;
      if (*(int *)(local_20 + 4) < 1) {
        if (*(int *)(local_20 + 4) < 0) {
          uVar5 = LineFunc(0x50f4,
                           "virtual int Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,*(int *)(local_20 + 4),0);
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  *(undefined4 *)(local_20 + 4) = 3;
  return 0;
}

```

---

## read

```asm
// === 081dee2a Dispatcher_RequestAssaultPrice::read  [0x081dee2a-0x81dee7f] ===
 81dee2a:	55                   	push   %ebp
 81dee2b:	89 e5                	mov    %esp,%ebp
 81dee2d:	83 ec 28             	sub    $0x28,%esp
 81dee30:	8b 45 10             	mov    0x10(%ebp),%eax
 81dee33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dee36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dee39:	83 c0 0d             	add    $0xd,%eax
 81dee3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dee40:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dee43:	89 04 24             	mov    %eax,(%esp)
 81dee46:	e8 65 e2 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81dee4b:	83 f0 01             	xor    $0x1,%eax
 81dee4e:	84 c0                	test   %al,%al
 81dee50:	74 26                	je     81dee78 <_ZN30Dispatcher_RequestAssaultPrice4readER9PacketBufR8MSG_BASE+0x4e>
 81dee52:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dee59:	00 
 81dee5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dee61:	00 
 81dee62:	c7 44 24 04 a0 1c bd 	movl   $0x8bd1ca0,0x4(%esp)
 81dee69:	08 
 81dee6a:	c7 04 24 bd 50 00 00 	movl   $0x50bd,(%esp)
 81dee71:	e8 61 1a 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dee76:	eb 05                	jmp    81dee7d <_ZN30Dispatcher_RequestAssaultPrice4readER9PacketBufR8MSG_BASE+0x53>
 81dee78:	b8 00 00 00 00       	mov    $0x0,%eax
 81dee7d:	c9                   	leave
 81dee7e:	c3                   	ret
 81dee7f:	90                   	nop

```

```c
// Dispatcher_RequestAssaultPrice::read @ 0x81dee2a

/* Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestAssaultPrice::read
          (Dispatcher_RequestAssaultPrice *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x50bd,
                     "virtual int Dispatcher_RequestAssaultPrice::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081df294 Dispatcher_RequestAssaultPrice::send  [0x081df294-0x81df3c5] ===
 81df294:	55                   	push   %ebp
 81df295:	89 e5                	mov    %esp,%ebp
 81df297:	56                   	push   %esi
 81df298:	53                   	push   %ebx
 81df299:	83 ec 20             	sub    $0x20,%esp
 81df29c:	8b 45 10             	mov    0x10(%ebp),%eax
 81df29f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81df2a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df2a5:	89 04 24             	mov    %eax,(%esp)
 81df2a8:	e8 9f ea 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81df2ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df2b0:	89 04 24             	mov    %eax,(%esp)
 81df2b3:	e8 2e c6 ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81df2b8:	c7 44 24 08 bf 01 00 	movl   $0x1bf,0x8(%esp)
 81df2bf:	00 
 81df2c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81df2c7:	00 
 81df2c8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df2cb:	89 04 24             	mov    %eax,(%esp)
 81df2ce:	e8 29 c6 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81df2d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df2d6:	8b 40 04             	mov    0x4(%eax),%eax
 81df2d9:	85 c0                	test   %eax,%eax
 81df2db:	75 2a                	jne    81df307 <_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase+0x73>
 81df2dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81df2e4:	00 
 81df2e5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df2e8:	89 04 24             	mov    %eax,(%esp)
 81df2eb:	e8 30 c6 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81df2f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df2f3:	8b 40 08             	mov    0x8(%eax),%eax
 81df2f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df2fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df2fd:	89 04 24             	mov    %eax,(%esp)
 81df300:	e8 37 c6 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81df305:	eb 6a                	jmp    81df371 <_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase+0xdd>
 81df307:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df30a:	8b 40 04             	mov    0x4(%eax),%eax
 81df30d:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81df312:	0f 84 9b 00 00 00    	je     81df3b3 <_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase+0x11f>
 81df318:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81df31f:	00 
 81df320:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df323:	89 04 24             	mov    %eax,(%esp)
 81df326:	e8 f5 c5 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81df32b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df32e:	8b 40 04             	mov    0x4(%eax),%eax
 81df331:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df335:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df338:	89 04 24             	mov    %eax,(%esp)
 81df33b:	e8 e0 c5 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81df340:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df343:	8b 40 04             	mov    0x4(%eax),%eax
 81df346:	83 f8 0a             	cmp    $0xa,%eax
 81df349:	75 26                	jne    81df371 <_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase+0xdd>
 81df34b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df34e:	8b 58 08             	mov    0x8(%eax),%ebx
 81df351:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df354:	89 04 24             	mov    %eax,(%esp)
 81df357:	e8 2c ae f9 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81df35c:	89 da                	mov    %ebx,%edx
 81df35e:	29 c2                	sub    %eax,%edx
 81df360:	89 d0                	mov    %edx,%eax
 81df362:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df366:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df369:	89 04 24             	mov    %eax,(%esp)
 81df36c:	e8 cb c5 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81df371:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81df378:	00 
 81df379:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df37c:	89 04 24             	mov    %eax,(%esp)
 81df37f:	e8 d4 c5 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81df384:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df387:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df38b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df38e:	89 04 24             	mov    %eax,(%esp)
 81df391:	e8 24 92 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81df396:	eb 1b                	jmp    81df3b3 <_ZN30Dispatcher_RequestAssaultPrice4sendEP5CUserR9ParamBase+0x11f>
 81df398:	89 d3                	mov    %edx,%ebx
 81df39a:	89 c6                	mov    %eax,%esi
 81df39c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df39f:	89 04 24             	mov    %eax,(%esp)
 81df3a2:	e8 d9 ea 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81df3a7:	89 f0                	mov    %esi,%eax
 81df3a9:	89 da                	mov    %ebx,%edx
 81df3ab:	89 04 24             	mov    %eax,(%esp)
 81df3ae:	e8 9d 43 90 00       	call   8ae3750 <_Unwind_Resume>
 81df3b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df3b6:	89 04 24             	mov    %eax,(%esp)
 81df3b9:	e8 c2 ea 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81df3be:	83 c4 20             	add    $0x20,%esp
 81df3c1:	5b                   	pop    %ebx
 81df3c2:	5e                   	pop    %esi
 81df3c3:	5d                   	pop    %ebp
 81df3c4:	c3                   	ret
 81df3c5:	90                   	nop

```

```c
// Dispatcher_RequestAssaultPrice::send @ 0x81df294

/* Dispatcher_RequestAssaultPrice::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestAssaultPrice::send
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081df2b3 to 081df395 has its CatchHandler @ 081df398 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bf);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  else {
    if (*(int *)(local_10 + 4) == 0x7fffffff) goto LAB_081df3b3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 10) {
      iVar1 = *(int *)(local_10 + 8);
      iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1 - iVar2);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
LAB_081df3b3:
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

