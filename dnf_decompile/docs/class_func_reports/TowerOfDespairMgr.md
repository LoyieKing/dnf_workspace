# TowerOfDespairMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## CheckEnterable

```asm
// === 086440ee TowerOfDespairMgr::CheckEnterable  [0x086440ee-0x8644271] ===
 86440ee:	55                   	push   %ebp
 86440ef:	89 e5                	mov    %esp,%ebp
 86440f1:	56                   	push   %esi
 86440f2:	53                   	push   %ebx
 86440f3:	83 ec 60             	sub    $0x60,%esp
 86440f6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86440fa:	75 0a                	jne    8644106 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x18>
 86440fc:	b8 15 00 00 00       	mov    $0x15,%eax
 8644101:	e9 61 01 00 00       	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 8644106:	8b 45 0c             	mov    0xc(%ebp),%eax
 8644109:	89 04 24             	mov    %eax,(%esp)
 864410c:	e8 a7 61 a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8644111:	8b 55 08             	mov    0x8(%ebp),%edx
 8644114:	0f b7 92 4e 03 00 00 	movzwl 0x34e(%edx),%edx
 864411b:	0f b7 d2             	movzwl %dx,%edx
 864411e:	39 d0                	cmp    %edx,%eax
 8644120:	0f 9c c0             	setl   %al
 8644123:	84 c0                	test   %al,%al
 8644125:	74 0a                	je     8644131 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x43>
 8644127:	b8 0e 00 00 00       	mov    $0xe,%eax
 864412c:	e9 36 01 00 00       	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 8644131:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8644138:	00 
 8644139:	8b 45 0c             	mov    0xc(%ebp),%eax
 864413c:	89 04 24             	mov    %eax,(%esp)
 864413f:	e8 40 94 a9 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8644144:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8644147:	8b 45 ec             	mov    -0x14(%ebp),%eax
 864414a:	89 04 24             	mov    %eax,(%esp)
 864414d:	e8 20 f7 ff ff       	call   8643872 <_ZNK13TOD_UserState13getEnterCountEv>
 8644152:	85 c0                	test   %eax,%eax
 8644154:	0f 9f c0             	setg   %al
 8644157:	84 c0                	test   %al,%al
 8644159:	0f 84 cc 00 00 00    	je     864422b <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x13d>
 864415f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8644162:	89 04 24             	mov    %eax,(%esp)
 8644165:	e8 32 17 b0 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 864416a:	83 f0 01             	xor    $0x1,%eax
 864416d:	84 c0                	test   %al,%al
 864416f:	74 47                	je     86441b8 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0xca>
 8644171:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8644178:	e8 21 7b a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 864417d:	89 c6                	mov    %eax,%esi
 864417f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8644182:	89 04 24             	mov    %eax,(%esp)
 8644185:	e8 f4 f6 ff ff       	call   864387e <_ZNK13TOD_UserState16getLastClearTimeEv>
 864418a:	89 c3                	mov    %eax,%ebx
 864418c:	e8 f0 7f a8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8644191:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8644197:	89 74 24 08          	mov    %esi,0x8(%esp)
 864419b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 864419f:	89 04 24             	mov    %eax,(%esp)
 86441a2:	e8 01 7f e2 ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 86441a7:	83 f0 01             	xor    $0x1,%eax
 86441aa:	84 c0                	test   %al,%al
 86441ac:	74 0a                	je     86441b8 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0xca>
 86441ae:	b8 f5 00 00 00       	mov    $0xf5,%eax
 86441b3:	e9 af 00 00 00       	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 86441b8:	8b 45 10             	mov    0x10(%ebp),%eax
 86441bb:	8b 98 f4 07 00 00    	mov    0x7f4(%eax),%ebx
 86441c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86441c4:	89 04 24             	mov    %eax,(%esp)
 86441c7:	e8 b2 60 a9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86441cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86441d0:	89 04 24             	mov    %eax,(%esp)
 86441d3:	e8 9a 0f ec ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 86441d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86441db:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 86441df:	75 07                	jne    86441e8 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0xfa>
 86441e1:	b8 f5 00 00 00       	mov    $0xf5,%eax
 86441e6:	eb 7f                	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 86441e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86441eb:	89 04 24             	mov    %eax,(%esp)
 86441ee:	e8 8b 60 a9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86441f3:	8d 55 af             	lea    -0x51(%ebp),%edx
 86441f6:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86441f9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86441fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8644204:	00 
 8644205:	89 44 24 04          	mov    %eax,0x4(%esp)
 8644209:	89 14 24             	mov    %edx,(%esp)
 864420c:	e8 07 77 eb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8644211:	83 ec 04             	sub    $0x4,%esp
 8644214:	8b 55 b6             	mov    -0x4a(%ebp),%edx
 8644217:	8b 45 10             	mov    0x10(%ebp),%eax
 864421a:	8b 80 f8 07 00 00    	mov    0x7f8(%eax),%eax
 8644220:	39 c2                	cmp    %eax,%edx
 8644222:	7d 07                	jge    864422b <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x13d>
 8644224:	b8 11 00 00 00       	mov    $0x11,%eax
 8644229:	eb 3c                	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 864422b:	8b 45 0c             	mov    0xc(%ebp),%eax
 864422e:	89 04 24             	mov    %eax,(%esp)
 8644231:	e8 16 0f 01 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8644236:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8644239:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 864423d:	74 1c                	je     864425b <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x16d>
 864423f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8644242:	89 04 24             	mov    %eax,(%esp)
 8644245:	e8 20 5f f5 ff       	call   859a16a <_ZN6CParty16get_member_countEv>
 864424a:	83 f8 01             	cmp    $0x1,%eax
 864424d:	0f 9f c0             	setg   %al
 8644250:	84 c0                	test   %al,%al
 8644252:	74 0e                	je     8644262 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x174>
 8644254:	b8 ab 00 00 00       	mov    $0xab,%eax
 8644259:	eb 0c                	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 864425b:	b8 15 00 00 00       	mov    $0x15,%eax
 8644260:	eb 05                	jmp    8644267 <_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon+0x179>
 8644262:	b8 00 00 00 00       	mov    $0x0,%eax
 8644267:	8d 65 f8             	lea    -0x8(%ebp),%esp
 864426a:	83 c4 00             	add    $0x0,%esp
 864426d:	5b                   	pop    %ebx
 864426e:	5e                   	pop    %esi
 864426f:	5d                   	pop    %ebp
 8644270:	c3                   	ret
 8644271:	90                   	nop

```

```c
// TowerOfDespairMgr::CheckEnterable @ 0x86440ee

/* TowerOfDespairMgr::CheckEnterable(CUser*, CDungeon const*) */

undefined4 __thiscall
TowerOfDespairMgr::CheckEnterable(TowerOfDespairMgr *this,CUser *param_1,CDungeon *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  CInventory *this_00;
  undefined1 local_55 [7];
  int local_4e;
  TOD_UserState *local_18;
  CParty *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0x15;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 < (int)(uint)*(ushort *)(this + 0x34e)) {
      uVar2 = 0xe;
    }
    else {
      local_18 = (TOD_UserState *)CUser::GetCharacExpandData(param_1,0xd);
      iVar3 = TOD_UserState::getEnterCount(local_18);
      if (0 < iVar3) {
        cVar1 = CUser::isGMUser(param_1);
        if (cVar1 != '\x01') {
          lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          lVar5 = TOD_UserState::getLastClearTime(local_18);
          iVar3 = G_CEnvironment();
          cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),lVar5,lVar4);
          if (cVar1 != '\x01') {
            return 0xf5;
          }
        }
        iVar3 = *(int *)(param_2 + 0x7f4);
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_10 = CInventory::check_item_exist(this_00,iVar3);
        if (local_10 == -1) {
          return 0xf5;
        }
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_55,iVar3);
        if (local_4e < *(int *)(param_2 + 0x7f8)) {
          return 0x11;
        }
      }
      local_14 = (CParty *)CUser::GetParty(param_1);
      if (local_14 == (CParty *)0x0) {
        uVar2 = 0x15;
      }
      else {
        iVar3 = CParty::get_member_count(local_14);
        if (iVar3 < 2) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xab;
        }
      }
    }
  }
  return uVar2;
}

```

---

## GetBaseLayerIndex

```asm
// === 086440a0 TowerOfDespairMgr::GetBaseLayerIndex  [0x086440a0-0x86440ed] ===
 86440a0:	55                   	push   %ebp
 86440a1:	89 e5                	mov    %esp,%ebp
 86440a3:	83 ec 28             	sub    $0x28,%esp
 86440a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86440a9:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 86440af:	85 c0                	test   %eax,%eax
 86440b1:	75 30                	jne    86440e3 <_ZN17TowerOfDespairMgr17GetBaseLayerIndexEv+0x43>
 86440b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86440ba:	00 
 86440bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86440be:	89 04 24             	mov    %eax,(%esp)
 86440c1:	e8 4e fc ff ff       	call   8643d14 <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj>
 86440c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86440c9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86440cd:	74 14                	je     86440e3 <_ZN17TowerOfDespairMgr17GetBaseLayerIndexEv+0x43>
 86440cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86440d2:	89 04 24             	mov    %eax,(%esp)
 86440d5:	e8 16 9c ab ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 86440da:	8b 55 08             	mov    0x8(%ebp),%edx
 86440dd:	89 82 58 03 00 00    	mov    %eax,0x358(%edx)
 86440e3:	8b 45 08             	mov    0x8(%ebp),%eax
 86440e6:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 86440ec:	c9                   	leave
 86440ed:	c3                   	ret

```

```c
// TowerOfDespairMgr::GetBaseLayerIndex @ 0x86440a0

/* TowerOfDespairMgr::GetBaseLayerIndex() */

undefined4 __thiscall TowerOfDespairMgr::GetBaseLayerIndex(TowerOfDespairMgr *this)

{
  CDungeon *this_00;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x358) == 0) {
    this_00 = (CDungeon *)Get_CDungeonByLayer(this,1);
    if (this_00 != (CDungeon *)0x0) {
      uVar1 = CDungeon::get_index(this_00);
      *(undefined4 *)(this + 0x358) = uVar1;
    }
  }
  return *(undefined4 *)(this + 0x358);
}

```

---

## Get_APCIndexByLayer

```asm
// === 08643d9c TowerOfDespairMgr::Get_APCIndexByLayer  [0x08643d9c-0x8643e49] ===
 8643d9c:	55                   	push   %ebp
 8643d9d:	89 e5                	mov    %esp,%ebp
 8643d9f:	83 ec 28             	sub    $0x28,%esp
 8643da2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643da5:	83 f8 64             	cmp    $0x64,%eax
 8643da8:	76 0a                	jbe    8643db4 <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj+0x18>
 8643daa:	b8 00 00 00 00       	mov    $0x0,%eax
 8643daf:	e9 94 00 00 00       	jmp    8643e48 <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj+0xac>
 8643db4:	8b 45 08             	mov    0x8(%ebp),%eax
 8643db7:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 8643dbd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8643dc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643dc4:	89 04 24             	mov    %eax,(%esp)
 8643dc7:	e8 be ec a9 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 8643dcc:	83 ec 04             	sub    $0x4,%esp
 8643dcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8643dd2:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 8643dd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8643ddb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643ddf:	89 04 24             	mov    %eax,(%esp)
 8643de2:	e8 67 fa a9 ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 8643de7:	83 ec 04             	sub    $0x4,%esp
 8643dea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8643ded:	8d 55 0c             	lea    0xc(%ebp),%edx
 8643df0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8643df4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8643df7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8643dfb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8643dfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643e02:	89 04 24             	mov    %eax,(%esp)
 8643e05:	e8 61 e8 b0 ff       	call   815266b <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEjET_S7_S7_RKT0_>
 8643e0a:	83 ec 04             	sub    $0x4,%esp
 8643e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8643e10:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 8643e16:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8643e19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643e1d:	89 04 24             	mov    %eax,(%esp)
 8643e20:	e8 65 ec a9 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 8643e25:	83 ec 04             	sub    $0x4,%esp
 8643e28:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8643e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643e2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8643e32:	89 04 24             	mov    %eax,(%esp)
 8643e35:	e8 b6 d4 ac ff       	call   81112f0 <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8643e3a:	84 c0                	test   %al,%al
 8643e3c:	74 05                	je     8643e43 <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj+0xa7>
 8643e3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643e41:	eb 05                	jmp    8643e48 <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj+0xac>
 8643e43:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8643e48:	c9                   	leave
 8643e49:	c3                   	ret

```

```c
// TowerOfDespairMgr::Get_APCIndexByLayer @ 0x8643d9c

/* TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int) */

uint __thiscall TowerOfDespairMgr::Get_APCIndexByLayer(TowerOfDespairMgr *this,uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  if (param_1 < 0x65) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::
    find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
              (local_1c,local_14,local_18,&param_1);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
    if (!bVar1) {
      param_1 = 0xffffffff;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

```

---

## Get_APCNameByLayer

```asm
// === 08643e4a TowerOfDespairMgr::Get_APCNameByLayer  [0x08643e4a-0x8643e7d] ===
 8643e4a:	55                   	push   %ebp
 8643e4b:	89 e5                	mov    %esp,%ebp
 8643e4d:	83 ec 18             	sub    $0x18,%esp
 8643e50:	8b 45 08             	mov    0x8(%ebp),%eax
 8643e53:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 8643e59:	85 c0                	test   %eax,%eax
 8643e5b:	74 1a                	je     8643e77 <_ZN17TowerOfDespairMgr18Get_APCNameByLayerERK9TOD_Layer+0x2d>
 8643e5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8643e60:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 8643e66:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643e69:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643e6d:	89 04 24             	mov    %eax,(%esp)
 8643e70:	e8 ab b1 fb ff       	call   85ff020 <_ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer>
 8643e75:	eb 05                	jmp    8643e7c <_ZN17TowerOfDespairMgr18Get_APCNameByLayerERK9TOD_Layer+0x32>
 8643e77:	b8 00 00 00 00       	mov    $0x0,%eax
 8643e7c:	c9                   	leave
 8643e7d:	c3                   	ret

```

```c
// TowerOfDespairMgr::Get_APCNameByLayer @ 0x8643e4a

/* TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer const&) */

undefined4 TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x354) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(*(TOD_Layer **)(param_1 + 0x354));
  }
  return uVar1;
}

```

---

## Get_CDungeonByLayer

```asm
// === 08643d14 TowerOfDespairMgr::Get_CDungeonByLayer  [0x08643d14-0x8643d75] ===
 8643d14:	55                   	push   %ebp
 8643d15:	89 e5                	mov    %esp,%ebp
 8643d17:	56                   	push   %esi
 8643d18:	53                   	push   %ebx
 8643d19:	83 ec 10             	sub    $0x10,%esp
 8643d1c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8643d20:	74 06                	je     8643d28 <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj+0x14>
 8643d22:	83 7d 0c 64          	cmpl   $0x64,0xc(%ebp)
 8643d26:	76 07                	jbe    8643d2f <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj+0x1b>
 8643d28:	b8 00 00 00 00       	mov    $0x0,%eax
 8643d2d:	eb 3f                	jmp    8643d6e <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj+0x5a>
 8643d2f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643d32:	8b 45 08             	mov    0x8(%ebp),%eax
 8643d35:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8643d38:	85 c0                	test   %eax,%eax
 8643d3a:	75 29                	jne    8643d65 <_ZN17TowerOfDespairMgr19Get_CDungeonByLayerEj+0x51>
 8643d3c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8643d3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643d42:	8b 45 08             	mov    0x8(%ebp),%eax
 8643d45:	83 c2 64             	add    $0x64,%edx
 8643d48:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8643d4c:	89 c6                	mov    %eax,%esi
 8643d4e:	e8 48 84 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8643d53:	89 74 24 04          	mov    %esi,0x4(%esp)
 8643d57:	89 04 24             	mov    %eax,(%esp)
 8643d5a:	e8 99 bc d1 ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8643d5f:	8b 55 08             	mov    0x8(%ebp),%edx
 8643d62:	89 04 9a             	mov    %eax,(%edx,%ebx,4)
 8643d65:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643d68:	8b 45 08             	mov    0x8(%ebp),%eax
 8643d6b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8643d6e:	83 c4 10             	add    $0x10,%esp
 8643d71:	5b                   	pop    %ebx
 8643d72:	5e                   	pop    %esi
 8643d73:	5d                   	pop    %ebp
 8643d74:	c3                   	ret
 8643d75:	90                   	nop

```

```c
// TowerOfDespairMgr::Get_CDungeonByLayer @ 0x8643d14

/* TowerOfDespairMgr::Get_CDungeonByLayer(unsigned int) */

undefined4 __thiscall TowerOfDespairMgr::Get_CDungeonByLayer(TowerOfDespairMgr *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == 0) || (100 < param_1)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(this + param_1 * 4) == 0) {
      iVar2 = G_CDataManager();
      uVar1 = CDataManager::find_dungeon(iVar2);
      *(undefined4 *)(this + param_1 * 4) = uVar1;
    }
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}

```

---

## Get_DungeonIndexByLayer

```asm
// === 08643d76 TowerOfDespairMgr::Get_DungeonIndexByLayer  [0x08643d76-0x8643d9b] ===
 8643d76:	55                   	push   %ebp
 8643d77:	89 e5                	mov    %esp,%ebp
 8643d79:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8643d7d:	74 06                	je     8643d85 <_ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj+0xf>
 8643d7f:	83 7d 0c 64          	cmpl   $0x64,0xc(%ebp)
 8643d83:	76 07                	jbe    8643d8c <_ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj+0x16>
 8643d85:	b8 00 00 00 00       	mov    $0x0,%eax
 8643d8a:	eb 0d                	jmp    8643d99 <_ZN17TowerOfDespairMgr23Get_DungeonIndexByLayerEj+0x23>
 8643d8c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643d8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8643d92:	83 c2 64             	add    $0x64,%edx
 8643d95:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8643d99:	5d                   	pop    %ebp
 8643d9a:	c3                   	ret
 8643d9b:	90                   	nop

```

```c
// TowerOfDespairMgr::Get_DungeonIndexByLayer @ 0x8643d76

/* TowerOfDespairMgr::Get_DungeonIndexByLayer(unsigned int) */

undefined4 __thiscall
TowerOfDespairMgr::Get_DungeonIndexByLayer(TowerOfDespairMgr *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (100 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 100) * 4 + 4);
  }
  return uVar1;
}

```

---

## IsTowerOfDespairDungeon_ByIndex

```asm
// === 08644272 TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex  [0x08644272-0x86442c9] ===
 8644272:	55                   	push   %ebp
 8644273:	89 e5                	mov    %esp,%ebp
 8644275:	83 ec 28             	sub    $0x28,%esp
 8644278:	8b 45 08             	mov    0x8(%ebp),%eax
 864427b:	8d 88 28 03 00 00    	lea    0x328(%eax),%ecx
 8644281:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8644284:	8d 55 0c             	lea    0xc(%ebp),%edx
 8644287:	89 54 24 08          	mov    %edx,0x8(%esp)
 864428b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 864428f:	89 04 24             	mov    %eax,(%esp)
 8644292:	e8 d3 61 a9 ff       	call   80da46a <_ZNKSt3setIiSt4lessIiESaIiEE4findERKi>
 8644297:	83 ec 04             	sub    $0x4,%esp
 864429a:	8b 45 08             	mov    0x8(%ebp),%eax
 864429d:	8d 90 28 03 00 00    	lea    0x328(%eax),%edx
 86442a3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86442a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86442aa:	89 04 24             	mov    %eax,(%esp)
 86442ad:	e8 e4 61 a9 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 86442b2:	83 ec 04             	sub    $0x4,%esp
 86442b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86442b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86442bc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86442bf:	89 04 24             	mov    %eax,(%esp)
 86442c2:	e8 8b 1e aa ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 86442c7:	c9                   	leave
 86442c8:	c3                   	ret
 86442c9:	90                   	nop

```

```c
// TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex @ 0x8644272

/* TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int) const */

void TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(int param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  std::_Rb_tree_const_iterator<int>::operator!=((_Rb_tree_const_iterator<int> *)local_10,local_14);
  return;
}

```

---

## LoadScript

```asm
// === 08643e7e TowerOfDespairMgr::LoadScript  [0x08643e7e-0x864409f] ===
 8643e7e:	55                   	push   %ebp
 8643e7f:	89 e5                	mov    %esp,%ebp
 8643e81:	56                   	push   %esi
 8643e82:	53                   	push   %ebx
 8643e83:	83 ec 30             	sub    $0x30,%esp
 8643e86:	8b 45 10             	mov    0x10(%ebp),%eax
 8643e89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643e8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643e90:	89 04 24             	mov    %eax,(%esp)
 8643e93:	e8 91 7e 27 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8643e98:	83 f0 01             	xor    $0x1,%eax
 8643e9b:	84 c0                	test   %al,%al
 8643e9d:	74 0a                	je     8643ea9 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x2b>
 8643e9f:	bb 65 00 00 00       	mov    $0x65,%ebx
 8643ea4:	e9 ea 01 00 00       	jmp    8644093 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x215>
 8643ea9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643eac:	89 04 24             	mov    %eax,(%esp)
 8643eaf:	e8 1c 27 0c 00       	call   87065d0 <_ZNSsC1Ev>
 8643eb4:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 8643eb8:	eb 01                	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8643eba:	90                   	nop
 8643ebb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8643ec2:	00 
 8643ec3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643ec6:	89 04 24             	mov    %eax,(%esp)
 8643ec9:	e8 91 89 27 00       	call   88bc85f <_Z8ScanTypeRSsb>
 8643ece:	83 f0 01             	xor    $0x1,%eax
 8643ed1:	84 c0                	test   %al,%al
 8643ed3:	0f 85 8c 01 00 00    	jne    8644065 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x1e7>
 8643ed9:	c7 44 24 04 a3 c6 ce 	movl   $0x8cec6a3,0x4(%esp)
 8643ee0:	08 
 8643ee1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643ee4:	89 04 24             	mov    %eax,(%esp)
 8643ee7:	e8 b5 ca a3 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8643eec:	84 c0                	test   %al,%al
 8643eee:	74 1a                	je     8643f0a <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x8c>
 8643ef0:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8643ef7:	e8 7f 84 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643efc:	89 c2                	mov    %eax,%edx
 8643efe:	8b 45 08             	mov    0x8(%ebp),%eax
 8643f01:	66 89 90 4c 03 00 00 	mov    %dx,0x34c(%eax)
 8643f08:	eb b1                	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8643f0a:	c7 44 24 04 b5 c6 ce 	movl   $0x8cec6b5,0x4(%esp)
 8643f11:	08 
 8643f12:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643f15:	89 04 24             	mov    %eax,(%esp)
 8643f18:	e8 84 ca a3 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8643f1d:	84 c0                	test   %al,%al
 8643f1f:	74 1a                	je     8643f3b <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0xbd>
 8643f21:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8643f28:	e8 4e 84 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643f2d:	89 c2                	mov    %eax,%edx
 8643f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8643f32:	66 89 90 4e 03 00 00 	mov    %dx,0x34e(%eax)
 8643f39:	eb 80                	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8643f3b:	c7 44 24 04 c1 c6 ce 	movl   $0x8cec6c1,0x4(%esp)
 8643f42:	08 
 8643f43:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643f46:	89 04 24             	mov    %eax,(%esp)
 8643f49:	e8 53 ca a3 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8643f4e:	84 c0                	test   %al,%al
 8643f50:	74 1d                	je     8643f6f <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0xf1>
 8643f52:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8643f59:	e8 1d 84 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643f5e:	89 c2                	mov    %eax,%edx
 8643f60:	8b 45 08             	mov    0x8(%ebp),%eax
 8643f63:	66 89 90 50 03 00 00 	mov    %dx,0x350(%eax)
 8643f6a:	e9 4c ff ff ff       	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8643f6f:	c7 44 24 04 cd c6 ce 	movl   $0x8cec6cd,0x4(%esp)
 8643f76:	08 
 8643f77:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643f7a:	89 04 24             	mov    %eax,(%esp)
 8643f7d:	e8 1f ca a3 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8643f82:	84 c0                	test   %al,%al
 8643f84:	74 49                	je     8643fcf <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x151>
 8643f86:	8d 45 df             	lea    -0x21(%ebp),%eax
 8643f89:	89 04 24             	mov    %eax,(%esp)
 8643f8c:	e8 ea 83 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643f91:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8643f94:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8643f98:	83 f0 01             	xor    $0x1,%eax
 8643f9b:	84 c0                	test   %al,%al
 8643f9d:	74 06                	je     8643fa5 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x127>
 8643f9f:	90                   	nop
 8643fa0:	e9 16 ff ff ff       	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8643fa5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8643fac:	e8 ca 83 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643fb1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8643fb4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8643fb7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8643fba:	89 54 24 08          	mov    %edx,0x8(%esp)
 8643fbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643fc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8643fc5:	89 04 24             	mov    %eax,(%esp)
 8643fc8:	e8 b9 fc ff ff       	call   8643c86 <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjj>
 8643fcd:	eb b7                	jmp    8643f86 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x108>
 8643fcf:	c7 44 24 04 eb c6 ce 	movl   $0x8cec6eb,0x4(%esp)
 8643fd6:	08 
 8643fd7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643fda:	89 04 24             	mov    %eax,(%esp)
 8643fdd:	e8 bf c9 a3 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8643fe2:	84 c0                	test   %al,%al
 8643fe4:	0f 84 d0 fe ff ff    	je     8643eba <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3c>
 8643fea:	8d 45 df             	lea    -0x21(%ebp),%eax
 8643fed:	89 04 24             	mov    %eax,(%esp)
 8643ff0:	e8 86 83 27 00       	call   88bc37b <_Z7ScanIntPb>
 8643ff5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8643ff8:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8643ffc:	83 f0 01             	xor    $0x1,%eax
 8643fff:	84 c0                	test   %al,%al
 8644001:	75 14                	jne    8644017 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x199>
 8644003:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8644006:	89 44 24 04          	mov    %eax,0x4(%esp)
 864400a:	8b 45 08             	mov    0x8(%ebp),%eax
 864400d:	89 04 24             	mov    %eax,(%esp)
 8644010:	e8 df fc ff ff       	call   8643cf4 <_ZN17TowerOfDespairMgr20_Set_APCIndexByLayerEj>
 8644015:	eb d3                	jmp    8643fea <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x16c>
 8644017:	90                   	nop
 8644018:	8b 45 08             	mov    0x8(%ebp),%eax
 864401b:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 8644021:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8644024:	89 54 24 04          	mov    %edx,0x4(%esp)
 8644028:	89 04 24             	mov    %eax,(%esp)
 864402b:	e8 5a ea a9 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 8644030:	83 ec 04             	sub    $0x4,%esp
 8644033:	8b 45 08             	mov    0x8(%ebp),%eax
 8644036:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 864403c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 864403f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8644043:	89 04 24             	mov    %eax,(%esp)
 8644046:	e8 03 f8 a9 ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 864404b:	83 ec 04             	sub    $0x4,%esp
 864404e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8644051:	89 44 24 04          	mov    %eax,0x4(%esp)
 8644055:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8644058:	89 04 24             	mov    %eax,(%esp)
 864405b:	e8 97 05 00 00       	call   86445f7 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEEvT_S7_>
 8644060:	e9 56 fe ff ff       	jmp    8643ebb <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x3d>
 8644065:	90                   	nop
 8644066:	bb 00 00 00 00       	mov    $0x0,%ebx
 864406b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 864406e:	89 04 24             	mov    %eax,(%esp)
 8644071:	e8 6a 3b 0c 00       	call   8707be0 <_ZNSsD1Ev>
 8644076:	eb 1b                	jmp    8644093 <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_+0x215>
 8644078:	89 d3                	mov    %edx,%ebx
 864407a:	89 c6                	mov    %eax,%esi
 864407c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 864407f:	89 04 24             	mov    %eax,(%esp)
 8644082:	e8 59 3b 0c 00       	call   8707be0 <_ZNSsD1Ev>
 8644087:	89 f0                	mov    %esi,%eax
 8644089:	89 da                	mov    %ebx,%edx
 864408b:	89 04 24             	mov    %eax,(%esp)
 864408e:	e8 bd f6 49 00       	call   8ae3750 <_Unwind_Resume>
 8644093:	89 d8                	mov    %ebx,%eax
 8644095:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8644098:	83 c4 00             	add    $0x0,%esp
 864409b:	5b                   	pop    %ebx
 864409c:	5e                   	pop    %esi
 864409d:	5d                   	pop    %ebp
 864409e:	c3                   	ret
 864409f:	90                   	nop

```

```c
// TowerOfDespairMgr::LoadScript @ 0x8643e7e

/* TowerOfDespairMgr::LoadScript(char const*, char const*) */

undefined4 __thiscall
TowerOfDespairMgr::LoadScript(TowerOfDespairMgr *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  bool local_25;
  string local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_24);
    local_25 = false;
                    /* try { // try from 08643ec9 to 0864405f has its CatchHandler @ 08644078 */
    while (cVar1 = ScanType((string *)&local_24,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_24,"[enterable count]");
      if (bVar2) {
        uVar3 = ScanInt((bool *)0x0);
        *(undefined2 *)(this + 0x34c) = uVar3;
      }
      else {
        bVar2 = std::operator==(&local_24,"[min Level]");
        if (bVar2) {
          uVar3 = ScanInt((bool *)0x0);
          *(undefined2 *)(this + 0x34e) = uVar3;
        }
        else {
          bVar2 = std::operator==(&local_24,"[top layer]");
          if (bVar2) {
            uVar3 = ScanInt((bool *)0x0);
            *(undefined2 *)(this + 0x350) = uVar3;
          }
          else {
            bVar2 = std::operator==(&local_24,"[each layer matching dungeon]");
            if (bVar2) {
              while (local_18 = ScanInt(&local_25), local_25 == true) {
                local_14 = ScanInt((bool *)0x0);
                _Set_LayerByDungeonIndex(this,local_18,local_14);
              }
            }
            else {
              bVar2 = std::operator==(&local_24,"[npc layer]");
              if (bVar2) {
                while (local_10 = ScanInt(&local_25), local_25 == true) {
                  _Set_APCIndexByLayer((uint)this);
                }
                std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
                std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
                std::
                sort<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
                          (local_1c,local_20);
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
    std::string::~string((string *)&local_24);
  }
  else {
    uVar4 = 0x65;
  }
  return uVar4;
}

```

---

## Reload_APC_Info

```asm
// === 08644360 TowerOfDespairMgr::Reload_APC_Info  [0x08644360-0x8644365] ===
 8644360:	55                   	push   %ebp
 8644361:	89 e5                	mov    %esp,%ebp
 8644363:	5d                   	pop    %ebp
 8644364:	c3                   	ret
 8644365:	90                   	nop

```

```c
// TowerOfDespairMgr::Reload_APC_Info @ 0x8644360

/* TowerOfDespairMgr::Reload_APC_Info() */

void TowerOfDespairMgr::Reload_APC_Info(void)

{
  return;
}

```

---

## ResetAPCInfo

```asm
// === 0864431e TowerOfDespairMgr::ResetAPCInfo  [0x0864431e-0x8644337] ===
 864431e:	55                   	push   %ebp
 864431f:	89 e5                	mov    %esp,%ebp
 8644321:	83 ec 18             	sub    $0x18,%esp
 8644324:	8b 45 08             	mov    0x8(%ebp),%eax
 8644327:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 864432d:	89 04 24             	mov    %eax,(%esp)
 8644330:	e8 9b ab fb ff       	call   85feed0 <_ZN22TowerOfDespair_APC_Mgr14Reset_APC_InfoEv>
 8644335:	c9                   	leave
 8644336:	c3                   	ret
 8644337:	90                   	nop

```

```c
// TowerOfDespairMgr::ResetAPCInfo @ 0x864431e

/* TowerOfDespairMgr::ResetAPCInfo() */

void __thiscall TowerOfDespairMgr::ResetAPCInfo(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr::Reset_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354));
  return;
}

```

---

## SendAPCInfo

```asm
// === 08644338 TowerOfDespairMgr::SendAPCInfo  [0x08644338-0x864435f] ===
 8644338:	55                   	push   %ebp
 8644339:	89 e5                	mov    %esp,%ebp
 864433b:	83 ec 18             	sub    $0x18,%esp
 864433e:	8b 45 08             	mov    0x8(%ebp),%eax
 8644341:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 8644347:	8b 55 10             	mov    0x10(%ebp),%edx
 864434a:	89 54 24 08          	mov    %edx,0x8(%esp)
 864434e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8644351:	89 54 24 04          	mov    %edx,0x4(%esp)
 8644355:	89 04 24             	mov    %eax,(%esp)
 8644358:	e8 87 ab fb ff       	call   85feee4 <_ZN22TowerOfDespair_APC_Mgr13Send_APC_InfoERK9TOD_LayerP5CUser>
 864435d:	c9                   	leave
 864435e:	c3                   	ret
 864435f:	90                   	nop

```

```c
// TowerOfDespairMgr::SendAPCInfo @ 0x8644338

/* TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*) */

void __thiscall
TowerOfDespairMgr::SendAPCInfo(TowerOfDespairMgr *this,TOD_Layer *param_1,CUser *param_2)

{
  TowerOfDespair_APC_Mgr::Send_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354),param_1,param_2);
  return;
}

```

---

## SendMessageToCUser

```asm
// === 08644366 TowerOfDespairMgr::SendMessageToCUser  [0x08644366-0x864446f] ===
 8644366:	55                   	push   %ebp
 8644367:	89 e5                	mov    %esp,%ebp
 8644369:	56                   	push   %esi
 864436a:	53                   	push   %ebx
 864436b:	83 ec 20             	sub    $0x20,%esp
 864436e:	8b 45 08             	mov    0x8(%ebp),%eax
 8644371:	89 04 24             	mov    %eax,(%esp)
 8644374:	e8 23 15 b0 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8644379:	84 c0                	test   %al,%al
 864437b:	0f 84 e7 00 00 00    	je     8644468 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc+0x102>
 8644381:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644384:	89 04 24             	mov    %eax,(%esp)
 8644387:	e8 c0 99 f4 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 864438c:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8644393:	00 
 8644394:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 864439b:	00 
 864439c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 864439f:	89 04 24             	mov    %eax,(%esp)
 86443a2:	e8 55 75 a8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86443a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86443ae:	00 
 86443af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86443b2:	89 04 24             	mov    %eax,(%esp)
 86443b5:	e8 66 75 a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86443ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86443c1:	00 
 86443c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86443c5:	89 04 24             	mov    %eax,(%esp)
 86443c8:	e8 d7 5a a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86443cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86443d4:	00 
 86443d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86443d8:	89 04 24             	mov    %eax,(%esp)
 86443db:	e8 40 75 a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86443e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86443e3:	89 04 24             	mov    %eax,(%esp)
 86443e6:	e8 c5 9f a3 ff       	call   807e3b0 <strlen@plt>
 86443eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86443ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86443f2:	89 04 24             	mov    %eax,(%esp)
 86443f5:	e8 42 75 a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86443fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86443fd:	89 04 24             	mov    %eax,(%esp)
 8644400:	e8 ab 9f a3 ff       	call   807e3b0 <strlen@plt>
 8644405:	89 44 24 08          	mov    %eax,0x8(%esp)
 8644409:	8b 45 0c             	mov    0xc(%ebp),%eax
 864440c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8644410:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644413:	89 04 24             	mov    %eax,(%esp)
 8644416:	e8 c9 2f b7 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 864441b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8644422:	00 
 8644423:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644426:	89 04 24             	mov    %eax,(%esp)
 8644429:	e8 2a 75 a8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 864442e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644431:	89 44 24 04          	mov    %eax,0x4(%esp)
 8644435:	8b 45 08             	mov    0x8(%ebp),%eax
 8644438:	89 04 24             	mov    %eax,(%esp)
 864443b:	e8 7a 41 00 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8644440:	eb 1b                	jmp    864445d <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc+0xf7>
 8644442:	89 d3                	mov    %edx,%ebx
 8644444:	89 c6                	mov    %eax,%esi
 8644446:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644449:	89 04 24             	mov    %eax,(%esp)
 864444c:	e8 2f 9a f4 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8644451:	89 f0                	mov    %esi,%eax
 8644453:	89 da                	mov    %ebx,%edx
 8644455:	89 04 24             	mov    %eax,(%esp)
 8644458:	e8 f3 f2 49 00       	call   8ae3750 <_Unwind_Resume>
 864445d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8644460:	89 04 24             	mov    %eax,(%esp)
 8644463:	e8 18 9a f4 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8644468:	83 c4 20             	add    $0x20,%esp
 864446b:	5b                   	pop    %ebx
 864446c:	5e                   	pop    %esi
 864446d:	5d                   	pop    %ebp
 864446e:	c3                   	ret
 864446f:	90                   	nop

```

```c
// TowerOfDespairMgr::SendMessageToCUser @ 0x8644366

/* TowerOfDespairMgr::SendMessageToCUser(CUser*, char*) */

void TowerOfDespairMgr::SendMessageToCUser(CUser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086443a2 to 0864443f has its CatchHandler @ 08644442 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar2);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## SetAPCInfo

```asm
// === 086442ca TowerOfDespairMgr::SetAPCInfo  [0x086442ca-0x864431d] ===
 86442ca:	55                   	push   %ebp
 86442cb:	89 e5                	mov    %esp,%ebp
 86442cd:	83 ec 28             	sub    $0x28,%esp
 86442d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86442d3:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 86442d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86442dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86442e0:	89 14 24             	mov    %edx,(%esp)
 86442e3:	e8 7c e2 a9 ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 86442e8:	8b 00                	mov    (%eax),%eax
 86442ea:	0f b7 c0             	movzwl %ax,%eax
 86442ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 86442f1:	8d 45 f6             	lea    -0xa(%ebp),%eax
 86442f4:	89 04 24             	mov    %eax,(%esp)
 86442f7:	e8 b8 a4 fb ff       	call   85fe7b4 <_ZN9TOD_LayerC1Et>
 86442fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86442ff:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 8644305:	8b 55 10             	mov    0x10(%ebp),%edx
 8644308:	89 54 24 08          	mov    %edx,0x8(%esp)
 864430c:	8d 55 f6             	lea    -0xa(%ebp),%edx
 864430f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8644313:	89 04 24             	mov    %eax,(%esp)
 8644316:	e8 13 aa fb ff       	call   85fed2e <_ZN22TowerOfDespair_APC_Mgr12Set_APC_InfoERK9TOD_LayerRK8_APCInfo>
 864431b:	c9                   	leave
 864431c:	c3                   	ret
 864431d:	90                   	nop

```

```c
// TowerOfDespairMgr::SetAPCInfo @ 0x86442ca

/* TowerOfDespairMgr::SetAPCInfo(unsigned int, _APCInfo const&) */

void __thiscall
TowerOfDespairMgr::SetAPCInfo(TowerOfDespairMgr *this,uint param_1,_APCInfo *param_2)

{
  undefined4 *puVar1;
  TOD_Layer local_e [10];
  
  puVar1 = (undefined4 *)
           std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                     ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340),param_1);
  TOD_Layer::TOD_Layer(local_e,(ushort)*puVar1);
  TowerOfDespair_APC_Mgr::Set_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354),local_e,param_2);
  return;
}

```

---

## TowerOfDespairMgr

```asm
// === 08643ac4 TowerOfDespairMgr::TowerOfDespairMgr  [0x08643ac4-0x8643be1] ===
 8643ac4:	55                   	push   %ebp
 8643ac5:	89 e5                	mov    %esp,%ebp
 8643ac7:	57                   	push   %edi
 8643ac8:	56                   	push   %esi
 8643ac9:	53                   	push   %ebx
 8643aca:	83 ec 2c             	sub    $0x2c,%esp
 8643acd:	8b 45 08             	mov    0x8(%ebp),%eax
 8643ad0:	05 28 03 00 00       	add    $0x328,%eax
 8643ad5:	89 04 24             	mov    %eax,(%esp)
 8643ad8:	e8 ff 68 a9 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 8643add:	8b 45 08             	mov    0x8(%ebp),%eax
 8643ae0:	05 40 03 00 00       	add    $0x340,%eax
 8643ae5:	89 04 24             	mov    %eax,(%esp)
 8643ae8:	e8 91 e9 a9 ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 8643aed:	8b 45 08             	mov    0x8(%ebp),%eax
 8643af0:	66 c7 80 4c 03 00 00 	movw   $0x0,0x34c(%eax)
 8643af7:	00 00 
 8643af9:	8b 45 08             	mov    0x8(%ebp),%eax
 8643afc:	66 c7 80 4e 03 00 00 	movw   $0x0,0x34e(%eax)
 8643b03:	00 00 
 8643b05:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b08:	c7 80 58 03 00 00 00 	movl   $0x0,0x358(%eax)
 8643b0f:	00 00 00 
 8643b12:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8643b19:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b1c:	8d 88 94 01 00 00    	lea    0x194(%eax),%ecx
 8643b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b25:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8643b28:	89 54 24 08          	mov    %edx,0x8(%esp)
 8643b2c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8643b30:	89 04 24             	mov    %eax,(%esp)
 8643b33:	e8 d5 09 00 00       	call   864450d <_ZSt4fillIPPK8CDungeonS2_EvT_S4_RKT0_>
 8643b38:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8643b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b42:	05 94 01 00 00       	add    $0x194,%eax
 8643b47:	8d 88 94 01 00 00    	lea    0x194(%eax),%ecx
 8643b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b50:	8d 90 94 01 00 00    	lea    0x194(%eax),%edx
 8643b56:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8643b59:	89 44 24 08          	mov    %eax,0x8(%esp)
 8643b5d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8643b61:	89 14 24             	mov    %edx,(%esp)
 8643b64:	e8 dc 09 00 00       	call   8644545 <_ZSt4fillIPjiEvT_S1_RKT0_>
 8643b69:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8643b70:	e8 db 08 0e 00       	call   8724450 <_Znwj>
 8643b75:	89 c3                	mov    %eax,%ebx
 8643b77:	89 d8                	mov    %ebx,%eax
 8643b79:	89 04 24             	mov    %eax,(%esp)
 8643b7c:	e8 65 09 00 00       	call   86444e6 <_ZN22TowerOfDespair_APC_MgrC1Ev>
 8643b81:	eb 12                	jmp    8643b95 <_ZN17TowerOfDespairMgrC1Ev+0xd1>
 8643b83:	89 d6                	mov    %edx,%esi
 8643b85:	89 c7                	mov    %eax,%edi
 8643b87:	89 1c 24             	mov    %ebx,(%esp)
 8643b8a:	e8 61 09 0e 00       	call   87244f0 <_ZdlPv>
 8643b8f:	89 f8                	mov    %edi,%eax
 8643b91:	89 f2                	mov    %esi,%edx
 8643b93:	eb 13                	jmp    8643ba8 <_ZN17TowerOfDespairMgrC1Ev+0xe4>
 8643b95:	89 da                	mov    %ebx,%edx
 8643b97:	8b 45 08             	mov    0x8(%ebp),%eax
 8643b9a:	89 90 54 03 00 00    	mov    %edx,0x354(%eax)
 8643ba0:	83 c4 2c             	add    $0x2c,%esp
 8643ba3:	5b                   	pop    %ebx
 8643ba4:	5e                   	pop    %esi
 8643ba5:	5f                   	pop    %edi
 8643ba6:	5d                   	pop    %ebp
 8643ba7:	c3                   	ret
 8643ba8:	89 d3                	mov    %edx,%ebx
 8643baa:	89 c6                	mov    %eax,%esi
 8643bac:	8b 45 08             	mov    0x8(%ebp),%eax
 8643baf:	05 40 03 00 00       	add    $0x340,%eax
 8643bb4:	89 04 24             	mov    %eax,(%esp)
 8643bb7:	e8 d6 e8 a9 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 8643bbc:	89 f0                	mov    %esi,%eax
 8643bbe:	89 da                	mov    %ebx,%edx
 8643bc0:	eb 00                	jmp    8643bc2 <_ZN17TowerOfDespairMgrC1Ev+0xfe>
 8643bc2:	89 d3                	mov    %edx,%ebx
 8643bc4:	89 c6                	mov    %eax,%esi
 8643bc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8643bc9:	05 28 03 00 00       	add    $0x328,%eax
 8643bce:	89 04 24             	mov    %eax,(%esp)
 8643bd1:	e8 5e 63 a9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8643bd6:	89 f0                	mov    %esi,%eax
 8643bd8:	89 da                	mov    %ebx,%edx
 8643bda:	89 04 24             	mov    %eax,(%esp)
 8643bdd:	e8 6e fb 49 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// TowerOfDespairMgr::TowerOfDespairMgr @ 0x8643ac4

/* TowerOfDespairMgr::TowerOfDespairMgr() */

void __thiscall TowerOfDespairMgr::TowerOfDespairMgr(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr *this_00;
  CDungeon *local_24;
  int local_20 [4];
  
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x328));
                    /* try { // try from 08643ae8 to 08643aec has its CatchHandler @ 08643bc2 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340));
  *(undefined2 *)(this + 0x34c) = 0;
  *(undefined2 *)(this + 0x34e) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  local_24 = (CDungeon *)0x0;
                    /* try { // try from 08643b33 to 08643b74 has its CatchHandler @ 08643ba8 */
  std::fill<CDungeon_const**,CDungeon_const*>
            ((CDungeon **)this,(CDungeon **)(this + 0x194),&local_24);
  local_20[0] = 0;
  std::fill<unsigned_int*,int>((uint *)(this + 0x194),(uint *)(this + 0x328),local_20);
  this_00 = operator_new(0x18);
                    /* try { // try from 08643b7c to 08643b80 has its CatchHandler @ 08643b83 */
  TowerOfDespair_APC_Mgr::TowerOfDespair_APC_Mgr(this_00);
  *(TowerOfDespair_APC_Mgr **)(this + 0x354) = this_00;
  return;
}

```

---

## _Set_APCIndexByLayer

```asm
// === 08643cf4 TowerOfDespairMgr::_Set_APCIndexByLayer  [0x08643cf4-0x8643d13] ===
 8643cf4:	55                   	push   %ebp
 8643cf5:	89 e5                	mov    %esp,%ebp
 8643cf7:	83 ec 18             	sub    $0x18,%esp
 8643cfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8643cfd:	8d 90 40 03 00 00    	lea    0x340(%eax),%edx
 8643d03:	8d 45 0c             	lea    0xc(%ebp),%eax
 8643d06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643d0a:	89 14 24             	mov    %edx,(%esp)
 8643d0d:	e8 de e7 a9 ff       	call   80e24f0 <_ZNSt6vectorIjSaIjEE9push_backERKj>
 8643d12:	c9                   	leave
 8643d13:	c3                   	ret

```

```c
// TowerOfDespairMgr::_Set_APCIndexByLayer @ 0x8643cf4

/* TowerOfDespairMgr::_Set_APCIndexByLayer(unsigned int) */

void TowerOfDespairMgr::_Set_APCIndexByLayer(uint param_1)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(param_1 + 0x340),
             (uint *)&stack0x00000008);
  return;
}

```

---

## _Set_LayerByDungeonIndex

```asm
// === 08643c6c TowerOfDespairMgr::_Set_LayerByDungeonIndex  [0x08643c6c-0x8643c85] ===
 8643c6c:	55                   	push   %ebp
 8643c6d:	89 e5                	mov    %esp,%ebp
 8643c6f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8643c73:	74 0e                	je     8643c83 <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon+0x17>
 8643c75:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643c78:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c7b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8643c7e:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 8643c81:	eb 01                	jmp    8643c84 <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon+0x18>
 8643c83:	90                   	nop
 8643c84:	5d                   	pop    %ebp
 8643c85:	c3                   	ret

```

```c
// TowerOfDespairMgr::_Set_LayerByDungeonIndex @ 0x8643c6c

/* TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, CDungeon const*) */

void __thiscall
TowerOfDespairMgr::_Set_LayerByDungeonIndex(TowerOfDespairMgr *this,uint param_1,CDungeon *param_2)

{
  if (param_2 != (CDungeon *)0x0) {
    *(CDungeon **)(this + param_1 * 4) = param_2;
  }
  return;
}

```

---

## _Set_LayerByDungeonIndex_08643c86

```asm
// === 08643c86 TowerOfDespairMgr::_Set_LayerByDungeonIndex  [0x08643c86-0x8643cf3] ===
 8643c86:	55                   	push   %ebp
 8643c87:	89 e5                	mov    %esp,%ebp
 8643c89:	53                   	push   %ebx
 8643c8a:	83 ec 24             	sub    $0x24,%esp
 8643c8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8643c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c93:	8d 4a 64             	lea    0x64(%edx),%ecx
 8643c96:	8b 55 10             	mov    0x10(%ebp),%edx
 8643c99:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 8643c9d:	8b 45 10             	mov    0x10(%ebp),%eax
 8643ca0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8643ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 8643ca6:	8d 88 28 03 00 00    	lea    0x328(%eax),%ecx
 8643cac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8643caf:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8643cb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8643cb6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8643cba:	89 04 24             	mov    %eax,(%esp)
 8643cbd:	e8 04 69 a9 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 8643cc2:	83 ec 04             	sub    $0x4,%esp
 8643cc5:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8643cc8:	e8 ce 84 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8643ccd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8643cd1:	89 04 24             	mov    %eax,(%esp)
 8643cd4:	e8 1f bd d1 ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8643cd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8643cdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8643ce0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8643ce7:	89 04 24             	mov    %eax,(%esp)
 8643cea:	e8 7d ff ff ff       	call   8643c6c <_ZN17TowerOfDespairMgr24_Set_LayerByDungeonIndexEjPK8CDungeon>
 8643cef:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8643cf2:	c9                   	leave
 8643cf3:	c3                   	ret

```

```c
// TowerOfDespairMgr::_Set_LayerByDungeonIndex @ 0x8643c86

/* TowerOfDespairMgr::_Set_LayerByDungeonIndex(unsigned int, unsigned int) */

void __thiscall
TowerOfDespairMgr::_Set_LayerByDungeonIndex(TowerOfDespairMgr *this,uint param_1,uint param_2)

{
  int iVar1;
  CDungeon *pCVar2;
  int local_18 [2];
  uint local_10;
  
  *(uint *)(this + (param_1 + 100) * 4 + 4) = param_2;
  local_10 = param_2;
  std::set<int,std::less<int>,std::allocator<int>>::insert(local_18);
  iVar1 = G_CDataManager();
  pCVar2 = (CDungeon *)CDataManager::find_dungeon(iVar1);
  _Set_LayerByDungeonIndex(this,param_1,pCVar2);
  return;
}

```

---

## _layerInfo

```asm
// === 08644470 TowerOfDespairMgr::_layerInfo  [0x08644470-0x8644474] ===
 8644470:	55                   	push   %ebp
 8644471:	89 e5                	mov    %esp,%ebp
 8644473:	5d                   	pop    %ebp
 8644474:	c3                   	ret

```

```c
// TowerOfDespairMgr::_layerInfo @ 0x8644470

/* TowerOfDespairMgr::_layerInfo(CUser*) */

void TowerOfDespairMgr::_layerInfo(CUser *param_1)

{
  return;
}

```

---

## ~TowerOfDespairMgr

```asm
// === 08643be2 TowerOfDespairMgr::~TowerOfDespairMgr  [0x08643be2-0x8643c6b] ===
 8643be2:	55                   	push   %ebp
 8643be3:	89 e5                	mov    %esp,%ebp
 8643be5:	56                   	push   %esi
 8643be6:	53                   	push   %ebx
 8643be7:	83 ec 10             	sub    $0x10,%esp
 8643bea:	8b 45 08             	mov    0x8(%ebp),%eax
 8643bed:	8b 98 54 03 00 00    	mov    0x354(%eax),%ebx
 8643bf3:	85 db                	test   %ebx,%ebx
 8643bf5:	74 2c                	je     8643c23 <_ZN17TowerOfDespairMgrD1Ev+0x41>
 8643bf7:	89 1c 24             	mov    %ebx,(%esp)
 8643bfa:	e8 fb 08 00 00       	call   86444fa <_ZN22TowerOfDespair_APC_MgrD1Ev>
 8643bff:	89 1c 24             	mov    %ebx,(%esp)
 8643c02:	e8 e9 08 0e 00       	call   87244f0 <_ZdlPv>
 8643c07:	eb 1a                	jmp    8643c23 <_ZN17TowerOfDespairMgrD1Ev+0x41>
 8643c09:	89 d3                	mov    %edx,%ebx
 8643c0b:	89 c6                	mov    %eax,%esi
 8643c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c10:	05 40 03 00 00       	add    $0x340,%eax
 8643c15:	89 04 24             	mov    %eax,(%esp)
 8643c18:	e8 75 e8 a9 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 8643c1d:	89 f0                	mov    %esi,%eax
 8643c1f:	89 da                	mov    %ebx,%edx
 8643c21:	eb 12                	jmp    8643c35 <_ZN17TowerOfDespairMgrD1Ev+0x53>
 8643c23:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c26:	05 40 03 00 00       	add    $0x340,%eax
 8643c2b:	89 04 24             	mov    %eax,(%esp)
 8643c2e:	e8 5f e8 a9 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 8643c33:	eb 20                	jmp    8643c55 <_ZN17TowerOfDespairMgrD1Ev+0x73>
 8643c35:	89 d3                	mov    %edx,%ebx
 8643c37:	89 c6                	mov    %eax,%esi
 8643c39:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c3c:	05 28 03 00 00       	add    $0x328,%eax
 8643c41:	89 04 24             	mov    %eax,(%esp)
 8643c44:	e8 eb 62 a9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8643c49:	89 f0                	mov    %esi,%eax
 8643c4b:	89 da                	mov    %ebx,%edx
 8643c4d:	89 04 24             	mov    %eax,(%esp)
 8643c50:	e8 fb fa 49 00       	call   8ae3750 <_Unwind_Resume>
 8643c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8643c58:	05 28 03 00 00       	add    $0x328,%eax
 8643c5d:	89 04 24             	mov    %eax,(%esp)
 8643c60:	e8 cf 62 a9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 8643c65:	83 c4 10             	add    $0x10,%esp
 8643c68:	5b                   	pop    %ebx
 8643c69:	5e                   	pop    %esi
 8643c6a:	5d                   	pop    %ebp
 8643c6b:	c3                   	ret

```

```c
// TowerOfDespairMgr::~TowerOfDespairMgr @ 0x8643be2

/* TowerOfDespairMgr::~TowerOfDespairMgr() */

void __thiscall TowerOfDespairMgr::~TowerOfDespairMgr(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr *this_00;
  
  this_00 = *(TowerOfDespair_APC_Mgr **)(this + 0x354);
  if (this_00 != (TowerOfDespair_APC_Mgr *)0x0) {
                    /* try { // try from 08643bfa to 08643bfe has its CatchHandler @ 08643c09 */
    TowerOfDespair_APC_Mgr::~TowerOfDespair_APC_Mgr(this_00);
    operator_delete(this_00);
  }
                    /* try { // try from 08643c2e to 08643c32 has its CatchHandler @ 08643c35 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x340));
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x328));
  return;
}

```

