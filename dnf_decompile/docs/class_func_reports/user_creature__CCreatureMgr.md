# user_creature__CCreatureMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 68

---

## AuctionRegist

```asm
// === 0833b09c user_creature::CCreatureMgr::AuctionRegist  [0x0833b09c-0x833b203] ===
 833b09c:	55                   	push   %ebp
 833b09d:	89 e5                	mov    %esp,%ebp
 833b09f:	56                   	push   %esi
 833b0a0:	53                   	push   %ebx
 833b0a1:	83 ec 40             	sub    $0x40,%esp
 833b0a4:	8b 45 10             	mov    0x10(%ebp),%eax
 833b0a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 833b0ae:	89 04 24             	mov    %eax,(%esp)
 833b0b1:	e8 b6 e1 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833b0b6:	83 f0 01             	xor    $0x1,%eax
 833b0b9:	84 c0                	test   %al,%al
 833b0bb:	74 0a                	je     833b0c7 <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x2b>
 833b0bd:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b0c2:	e9 34 01 00 00       	jmp    833b1fb <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x15f>
 833b0c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b0ca:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833b0ce:	3c 05                	cmp    $0x5,%al
 833b0d0:	74 0a                	je     833b0dc <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x40>
 833b0d2:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b0d7:	e9 1f 01 00 00       	jmp    833b1fb <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x15f>
 833b0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 833b0df:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b0e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b0e6:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833b0ed:	00 
 833b0ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b0f1:	89 04 24             	mov    %eax,(%esp)
 833b0f4:	e8 b5 47 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833b0f9:	8b 45 08             	mov    0x8(%ebp),%eax
 833b0fc:	89 04 24             	mov    %eax,(%esp)
 833b0ff:	e8 ee 67 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833b104:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b107:	8b 45 08             	mov    0x8(%ebp),%eax
 833b10a:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b10d:	89 04 24             	mov    %eax,(%esp)
 833b110:	e8 39 0b d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833b115:	8b 55 f4             	mov    -0xc(%ebp),%edx
 833b118:	89 54 24 14          	mov    %edx,0x14(%esp)
 833b11c:	8b 55 14             	mov    0x14(%ebp),%edx
 833b11f:	89 54 24 10          	mov    %edx,0x10(%esp)
 833b123:	8b 55 10             	mov    0x10(%ebp),%edx
 833b126:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833b12a:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b12e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b131:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b135:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b138:	89 04 24             	mov    %eax,(%esp)
 833b13b:	e8 04 50 00 00       	call   8340144 <_ZN13user_creature12CDBMsgSender13AuctionRegistEP10Inven_Itemiiii>
 833b140:	83 f0 01             	xor    $0x1,%eax
 833b143:	84 c0                	test   %al,%al
 833b145:	74 52                	je     833b199 <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0xfd>
 833b147:	8b 45 08             	mov    0x8(%ebp),%eax
 833b14a:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b14d:	89 04 24             	mov    %eax,(%esp)
 833b150:	e8 27 f2 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833b155:	0f b7 d8             	movzwl %ax,%ebx
 833b158:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833b15f:	00 
 833b160:	c7 44 24 08 5c 0c 00 	movl   $0xc5c,0x8(%esp)
 833b167:	00 
 833b168:	c7 44 24 04 c0 ee c2 	movl   $0x8c2eec0,0x4(%esp)
 833b16f:	08 
 833b170:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b173:	89 04 24             	mov    %eax,(%esp)
 833b176:	e8 9d 45 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833b17b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b17f:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833b186:	08 
 833b187:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b18a:	89 04 24             	mov    %eax,(%esp)
 833b18d:	e8 f6 45 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833b192:	bb 00 00 00 00       	mov    $0x0,%ebx
 833b197:	eb 57                	jmp    833b1f0 <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x154>
 833b199:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b19c:	89 04 24             	mov    %eax,(%esp)
 833b19f:	e8 ac 47 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833b1a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b1a7:	8b 40 07             	mov    0x7(%eax),%eax
 833b1aa:	8b 55 14             	mov    0x14(%ebp),%edx
 833b1ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 833b1b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b1b5:	8b 45 08             	mov    0x8(%ebp),%eax
 833b1b8:	89 04 24             	mov    %eax,(%esp)
 833b1bb:	e8 46 04 00 00       	call   833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>
 833b1c0:	83 f0 01             	xor    $0x1,%eax
 833b1c3:	84 c0                	test   %al,%al
 833b1c5:	74 07                	je     833b1ce <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x132>
 833b1c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 833b1cc:	eb 22                	jmp    833b1f0 <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x154>
 833b1ce:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b1d3:	eb 1b                	jmp    833b1f0 <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii+0x154>
 833b1d5:	89 d3                	mov    %edx,%ebx
 833b1d7:	89 c6                	mov    %eax,%esi
 833b1d9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b1dc:	89 04 24             	mov    %eax,(%esp)
 833b1df:	e8 f4 46 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b1e4:	89 f0                	mov    %esi,%eax
 833b1e6:	89 da                	mov    %ebx,%edx
 833b1e8:	89 04 24             	mov    %eax,(%esp)
 833b1eb:	e8 60 85 7a 00       	call   8ae3750 <_Unwind_Resume>
 833b1f0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b1f3:	89 04 24             	mov    %eax,(%esp)
 833b1f6:	e8 dd 46 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b1fb:	89 d8                	mov    %ebx,%eax
 833b1fd:	83 c4 40             	add    $0x40,%esp
 833b200:	5b                   	pop    %ebx
 833b201:	5e                   	pop    %esi
 833b202:	5d                   	pop    %ebp
 833b203:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::AuctionRegist @ 0x833b09c

/* user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::AuctionRegist
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CDBMsgSender local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  cVar1 = IsCreatureEquipmentScope(this,param_2);
  if (cVar1 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833b0ff to 0833b1bf has its CatchHandler @ 0833b1d5 */
      local_10 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar1 = CDBMsgSender::AuctionRegist(local_28,param_1,iVar2,param_2,param_3,local_10);
      if (cVar1 == '\x01') {
        CDBMsgSender::Send(local_28);
        cVar1 = DeleteCreatureItem((int)this,*(int *)(param_1 + 7));
        if (cVar1 == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar3 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_20,
                           "bool user_creature::CCreatureMgr::AuctionRegist(Inven_Item*, int, int)",
                           0xc5c,5);
        cMyTrace::operator()(local_20,"cannot write db uid(%d)\n",uVar3 & 0xffff);
        uVar4 = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_28);
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## CCreatureMgr

```asm
// === 08339196 user_creature::CCreatureMgr::CCreatureMgr  [0x08339196-0x8339225] ===
 8339196:	55                   	push   %ebp
 8339197:	89 e5                	mov    %esp,%ebp
 8339199:	56                   	push   %esi
 833919a:	53                   	push   %ebx
 833919b:	83 ec 10             	sub    $0x10,%esp
 833919e:	8b 45 08             	mov    0x8(%ebp),%eax
 83391a1:	89 04 24             	mov    %eax,(%esp)
 83391a4:	e8 e7 95 00 00       	call   8342790 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEEC1Ev>
 83391a9:	8b 45 08             	mov    0x8(%ebp),%eax
 83391ac:	83 c0 20             	add    $0x20,%eax
 83391af:	89 c3                	mov    %eax,%ebx
 83391b1:	be 02 00 00 00       	mov    $0x2,%esi
 83391b6:	eb 0e                	jmp    83391c6 <_ZN13user_creature12CCreatureMgrC1Ev+0x30>
 83391b8:	89 1c 24             	mov    %ebx,(%esp)
 83391bb:	e8 4c 5d 00 00       	call   833ef0c <_ZN13user_creature9CArtifactC1Ev>
 83391c0:	83 c3 04             	add    $0x4,%ebx
 83391c3:	83 ee 01             	sub    $0x1,%esi
 83391c6:	83 fe ff             	cmp    $0xffffffff,%esi
 83391c9:	0f 95 c0             	setne  %al
 83391cc:	84 c0                	test   %al,%al
 83391ce:	75 e8                	jne    83391b8 <_ZN13user_creature12CCreatureMgrC1Ev+0x22>
 83391d0:	8b 45 08             	mov    0x8(%ebp),%eax
 83391d3:	83 c0 30             	add    $0x30,%eax
 83391d6:	89 04 24             	mov    %eax,(%esp)
 83391d9:	e8 86 da d8 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 83391de:	8b 45 08             	mov    0x8(%ebp),%eax
 83391e1:	89 04 24             	mov    %eax,(%esp)
 83391e4:	e8 71 12 00 00       	call   833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>
 83391e9:	eb 33                	jmp    833921e <_ZN13user_creature12CCreatureMgrC1Ev+0x88>
 83391eb:	89 d3                	mov    %edx,%ebx
 83391ed:	89 c6                	mov    %eax,%esi
 83391ef:	8b 45 08             	mov    0x8(%ebp),%eax
 83391f2:	83 c0 30             	add    $0x30,%eax
 83391f5:	89 04 24             	mov    %eax,(%esp)
 83391f8:	e8 c9 d8 d8 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 83391fd:	89 f0                	mov    %esi,%eax
 83391ff:	89 da                	mov    %ebx,%edx
 8339201:	eb 00                	jmp    8339203 <_ZN13user_creature12CCreatureMgrC1Ev+0x6d>
 8339203:	89 d3                	mov    %edx,%ebx
 8339205:	89 c6                	mov    %eax,%esi
 8339207:	8b 45 08             	mov    0x8(%ebp),%eax
 833920a:	89 04 24             	mov    %eax,(%esp)
 833920d:	e8 7e 7a 00 00       	call   8340c90 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8339212:	89 f0                	mov    %esi,%eax
 8339214:	89 da                	mov    %ebx,%edx
 8339216:	89 04 24             	mov    %eax,(%esp)
 8339219:	e8 32 a5 7a 00       	call   8ae3750 <_Unwind_Resume>
 833921e:	83 c4 10             	add    $0x10,%esp
 8339221:	5b                   	pop    %ebx
 8339222:	5e                   	pop    %esi
 8339223:	5d                   	pop    %ebp
 8339224:	c3                   	ret
 8339225:	90                   	nop

```

```c
// user_creature::CCreatureMgr::CCreatureMgr @ 0x8339196

/* user_creature::CCreatureMgr::CCreatureMgr() */

void __thiscall user_creature::CCreatureMgr::CCreatureMgr(CCreatureMgr *this)

{
  CArtifact *this_00;
  int iVar1;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::map((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
         *)this);
  this_00 = (CArtifact *)(this + 0x20);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
    CArtifact::CArtifact(this_00);
    this_00 = this_00 + 4;
  }
                    /* try { // try from 083391d9 to 083391dd has its CatchHandler @ 08339203 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 083391e4 to 083391e8 has its CatchHandler @ 083391eb */
  Reset(this);
  return;
}

```

---

## ChangeOwner

```asm
// === 0833ad34 user_creature::CCreatureMgr::ChangeOwner  [0x0833ad34-0x833aedb] ===
 833ad34:	55                   	push   %ebp
 833ad35:	89 e5                	mov    %esp,%ebp
 833ad37:	57                   	push   %edi
 833ad38:	56                   	push   %esi
 833ad39:	53                   	push   %ebx
 833ad3a:	83 ec 5c             	sub    $0x5c,%esp
 833ad3d:	8b 45 10             	mov    0x10(%ebp),%eax
 833ad40:	89 44 24 04          	mov    %eax,0x4(%esp)
 833ad44:	8b 45 08             	mov    0x8(%ebp),%eax
 833ad47:	89 04 24             	mov    %eax,(%esp)
 833ad4a:	e8 1d e5 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833ad4f:	83 f0 01             	xor    $0x1,%eax
 833ad52:	84 c0                	test   %al,%al
 833ad54:	74 0a                	je     833ad60 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x2c>
 833ad56:	bb 01 00 00 00       	mov    $0x1,%ebx
 833ad5b:	e9 72 01 00 00       	jmp    833aed2 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x19e>
 833ad60:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ad63:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833ad67:	3c 05                	cmp    $0x5,%al
 833ad69:	74 0a                	je     833ad75 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x41>
 833ad6b:	bb 01 00 00 00       	mov    $0x1,%ebx
 833ad70:	e9 5d 01 00 00       	jmp    833aed2 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x19e>
 833ad75:	8b 45 08             	mov    0x8(%ebp),%eax
 833ad78:	8b 40 1c             	mov    0x1c(%eax),%eax
 833ad7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833ad7f:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833ad86:	00 
 833ad87:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ad8a:	89 04 24             	mov    %eax,(%esp)
 833ad8d:	e8 1c 4b 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833ad92:	8b 45 08             	mov    0x8(%ebp),%eax
 833ad95:	89 04 24             	mov    %eax,(%esp)
 833ad98:	e8 55 6b 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833ad9d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833ada0:	8b 45 08             	mov    0x8(%ebp),%eax
 833ada3:	8b 40 1c             	mov    0x1c(%eax),%eax
 833ada6:	89 04 24             	mov    %eax,(%esp)
 833ada9:	e8 a0 0e d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833adae:	8b 55 1c             	mov    0x1c(%ebp),%edx
 833adb1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 833adb5:	8b 55 18             	mov    0x18(%ebp),%edx
 833adb8:	89 54 24 18          	mov    %edx,0x18(%esp)
 833adbc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 833adbf:	89 54 24 14          	mov    %edx,0x14(%esp)
 833adc3:	8b 55 14             	mov    0x14(%ebp),%edx
 833adc6:	89 54 24 10          	mov    %edx,0x10(%esp)
 833adca:	8b 55 10             	mov    0x10(%ebp),%edx
 833adcd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833add1:	89 44 24 08          	mov    %eax,0x8(%esp)
 833add5:	8b 45 0c             	mov    0xc(%ebp),%eax
 833add8:	89 44 24 04          	mov    %eax,0x4(%esp)
 833addc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833addf:	89 04 24             	mov    %eax,(%esp)
 833ade2:	e8 01 52 00 00       	call   833ffe8 <_ZN13user_creature12CDBMsgSender11ChangeOwnerEP10Inven_Itemiiiiii>
 833ade7:	83 f0 01             	xor    $0x1,%eax
 833adea:	84 c0                	test   %al,%al
 833adec:	74 55                	je     833ae43 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x10f>
 833adee:	8b 45 08             	mov    0x8(%ebp),%eax
 833adf1:	8b 40 1c             	mov    0x1c(%eax),%eax
 833adf4:	89 04 24             	mov    %eax,(%esp)
 833adf7:	e8 80 f5 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833adfc:	0f b7 d8             	movzwl %ax,%ebx
 833adff:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833ae06:	00 
 833ae07:	c7 44 24 08 26 0c 00 	movl   $0xc26,0x8(%esp)
 833ae0e:	00 
 833ae0f:	c7 44 24 04 80 ef c2 	movl   $0x8c2ef80,0x4(%esp)
 833ae16:	08 
 833ae17:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833ae1a:	89 04 24             	mov    %eax,(%esp)
 833ae1d:	e8 f6 48 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833ae22:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833ae26:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833ae2d:	08 
 833ae2e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833ae31:	89 04 24             	mov    %eax,(%esp)
 833ae34:	e8 4f 49 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833ae39:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ae3e:	e9 84 00 00 00       	jmp    833aec7 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x193>
 833ae43:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ae46:	89 04 24             	mov    %eax,(%esp)
 833ae49:	e8 02 4b 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833ae4e:	8b 45 14             	mov    0x14(%ebp),%eax
 833ae51:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 833ae54:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ae57:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833ae5b:	0f b6 f8             	movzbl %al,%edi
 833ae5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ae61:	8b 70 07             	mov    0x7(%eax),%esi
 833ae64:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ae67:	8b 40 02             	mov    0x2(%eax),%eax
 833ae6a:	89 c3                	mov    %eax,%ebx
 833ae6c:	8b 45 08             	mov    0x8(%ebp),%eax
 833ae6f:	8b 40 1c             	mov    0x1c(%eax),%eax
 833ae72:	89 04 24             	mov    %eax,(%esp)
 833ae75:	e8 04 f4 d9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 833ae7a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 833ae7d:	89 54 24 18          	mov    %edx,0x18(%esp)
 833ae81:	89 7c 24 14          	mov    %edi,0x14(%esp)
 833ae85:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 833ae8c:	00 
 833ae8d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833ae91:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833ae95:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833ae9c:	00 
 833ae9d:	89 04 24             	mov    %eax,(%esp)
 833aea0:	e8 0b f6 1c 00       	call   850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>
 833aea5:	bb 01 00 00 00       	mov    $0x1,%ebx
 833aeaa:	eb 1b                	jmp    833aec7 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii+0x193>
 833aeac:	89 d3                	mov    %edx,%ebx
 833aeae:	89 c6                	mov    %eax,%esi
 833aeb0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833aeb3:	89 04 24             	mov    %eax,(%esp)
 833aeb6:	e8 1d 4a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833aebb:	89 f0                	mov    %esi,%eax
 833aebd:	89 da                	mov    %ebx,%edx
 833aebf:	89 04 24             	mov    %eax,(%esp)
 833aec2:	e8 89 88 7a 00       	call   8ae3750 <_Unwind_Resume>
 833aec7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833aeca:	89 04 24             	mov    %eax,(%esp)
 833aecd:	e8 06 4a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833aed2:	89 d8                	mov    %ebx,%eax
 833aed4:	83 c4 5c             	add    $0x5c,%esp
 833aed7:	5b                   	pop    %ebx
 833aed8:	5e                   	pop    %esi
 833aed9:	5f                   	pop    %edi
 833aeda:	5d                   	pop    %ebp
 833aedb:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::ChangeOwner @ 0x833ad34

/* user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int) */

bool __thiscall
user_creature::CCreatureMgr::ChangeOwner
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  bool bVar8;
  CDBMsgSender local_38 [8];
  cMyTrace local_30 [16];
  int local_20;
  
  cVar4 = IsCreatureEquipmentScope(this,param_2);
  if (cVar4 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_38,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833ad98 to 0833aea4 has its CatchHandler @ 0833aeac */
      local_20 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar4 = CDBMsgSender::ChangeOwner
                        (local_38,param_1,iVar5,param_2,param_3,local_20,param_4,param_5);
      bVar8 = cVar4 == '\x01';
      if (bVar8) {
        CDBMsgSender::Send(local_38);
        IVar1 = param_1[1];
        uVar2 = *(undefined4 *)(param_1 + 7);
        uVar3 = *(undefined4 *)(param_1 + 2);
        pCVar7 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
        CInventory::WriteCreatureLog(pCVar7,3,uVar3,uVar2,1,IVar1,param_3);
      }
      else {
        uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_30,
                           "bool user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int)"
                           ,0xc26,5);
        cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
      }
      CDBMsgSender::~CDBMsgSender(local_38);
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}

```

---

## ChangeSlotNo

```asm
// === 0833aedc user_creature::CCreatureMgr::ChangeSlotNo  [0x0833aedc-0x833b09b] ===
 833aedc:	55                   	push   %ebp
 833aedd:	89 e5                	mov    %esp,%ebp
 833aedf:	57                   	push   %edi
 833aee0:	56                   	push   %esi
 833aee1:	53                   	push   %ebx
 833aee2:	83 ec 5c             	sub    $0x5c,%esp
 833aee5:	8b 45 10             	mov    0x10(%ebp),%eax
 833aee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 833aeec:	8b 45 08             	mov    0x8(%ebp),%eax
 833aeef:	89 04 24             	mov    %eax,(%esp)
 833aef2:	e8 75 e3 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833aef7:	83 f0 01             	xor    $0x1,%eax
 833aefa:	84 c0                	test   %al,%al
 833aefc:	74 0a                	je     833af08 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x2c>
 833aefe:	bb 01 00 00 00       	mov    $0x1,%ebx
 833af03:	e9 89 01 00 00       	jmp    833b091 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x1b5>
 833af08:	8b 45 0c             	mov    0xc(%ebp),%eax
 833af0b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833af0f:	3c 05                	cmp    $0x5,%al
 833af11:	74 0a                	je     833af1d <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x41>
 833af13:	bb 01 00 00 00       	mov    $0x1,%ebx
 833af18:	e9 74 01 00 00       	jmp    833b091 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x1b5>
 833af1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833af20:	8b 40 07             	mov    0x7(%eax),%eax
 833af23:	89 44 24 04          	mov    %eax,0x4(%esp)
 833af27:	8b 45 08             	mov    0x8(%ebp),%eax
 833af2a:	89 04 24             	mov    %eax,(%esp)
 833af2d:	e8 60 e3 ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833af32:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833af35:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 833af39:	75 0a                	jne    833af45 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x69>
 833af3b:	bb 00 00 00 00       	mov    $0x0,%ebx
 833af40:	e9 4c 01 00 00       	jmp    833b091 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x1b5>
 833af45:	8b 45 10             	mov    0x10(%ebp),%eax
 833af48:	89 44 24 04          	mov    %eax,0x4(%esp)
 833af4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833af4f:	89 04 24             	mov    %eax,(%esp)
 833af52:	e8 f9 c0 ff ff       	call   8337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>
 833af57:	8b 45 08             	mov    0x8(%ebp),%eax
 833af5a:	8b 40 1c             	mov    0x1c(%eax),%eax
 833af5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 833af61:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833af68:	00 
 833af69:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833af6c:	89 04 24             	mov    %eax,(%esp)
 833af6f:	e8 3a 49 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833af74:	8b 45 08             	mov    0x8(%ebp),%eax
 833af77:	8b 40 1c             	mov    0x1c(%eax),%eax
 833af7a:	89 04 24             	mov    %eax,(%esp)
 833af7d:	e8 cc 0c d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833af82:	8b 55 14             	mov    0x14(%ebp),%edx
 833af85:	89 54 24 10          	mov    %edx,0x10(%esp)
 833af89:	8b 55 10             	mov    0x10(%ebp),%edx
 833af8c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833af90:	89 44 24 08          	mov    %eax,0x8(%esp)
 833af94:	8b 45 0c             	mov    0xc(%ebp),%eax
 833af97:	89 44 24 04          	mov    %eax,0x4(%esp)
 833af9b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833af9e:	89 04 24             	mov    %eax,(%esp)
 833afa1:	e8 fe 50 00 00       	call   83400a4 <_ZN13user_creature12CDBMsgSender12ChangeSlotNoEP10Inven_Itemiii>
 833afa6:	83 f0 01             	xor    $0x1,%eax
 833afa9:	84 c0                	test   %al,%al
 833afab:	74 55                	je     833b002 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x126>
 833afad:	8b 45 08             	mov    0x8(%ebp),%eax
 833afb0:	8b 40 1c             	mov    0x1c(%eax),%eax
 833afb3:	89 04 24             	mov    %eax,(%esp)
 833afb6:	e8 c1 f3 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833afbb:	0f b7 d8             	movzwl %ax,%ebx
 833afbe:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833afc5:	00 
 833afc6:	c7 44 24 08 44 0c 00 	movl   $0xc44,0x8(%esp)
 833afcd:	00 
 833afce:	c7 44 24 04 20 ef c2 	movl   $0x8c2ef20,0x4(%esp)
 833afd5:	08 
 833afd6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833afd9:	89 04 24             	mov    %eax,(%esp)
 833afdc:	e8 37 47 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833afe1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833afe5:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833afec:	08 
 833afed:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833aff0:	89 04 24             	mov    %eax,(%esp)
 833aff3:	e8 90 47 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833aff8:	bb 00 00 00 00       	mov    $0x0,%ebx
 833affd:	e9 84 00 00 00       	jmp    833b086 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x1aa>
 833b002:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833b005:	89 04 24             	mov    %eax,(%esp)
 833b008:	e8 43 49 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833b00d:	8b 45 14             	mov    0x14(%ebp),%eax
 833b010:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 833b013:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b016:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833b01a:	0f b6 f8             	movzbl %al,%edi
 833b01d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b020:	8b 70 07             	mov    0x7(%eax),%esi
 833b023:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b026:	8b 40 02             	mov    0x2(%eax),%eax
 833b029:	89 c3                	mov    %eax,%ebx
 833b02b:	8b 45 08             	mov    0x8(%ebp),%eax
 833b02e:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b031:	89 04 24             	mov    %eax,(%esp)
 833b034:	e8 45 f2 d9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 833b039:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 833b03c:	89 54 24 18          	mov    %edx,0x18(%esp)
 833b040:	89 7c 24 14          	mov    %edi,0x14(%esp)
 833b044:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 833b04b:	00 
 833b04c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833b050:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b054:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833b05b:	00 
 833b05c:	89 04 24             	mov    %eax,(%esp)
 833b05f:	e8 4c f4 1c 00       	call   850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>
 833b064:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b069:	eb 1b                	jmp    833b086 <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii+0x1aa>
 833b06b:	89 d3                	mov    %edx,%ebx
 833b06d:	89 c6                	mov    %eax,%esi
 833b06f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833b072:	89 04 24             	mov    %eax,(%esp)
 833b075:	e8 5e 48 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b07a:	89 f0                	mov    %esi,%eax
 833b07c:	89 da                	mov    %ebx,%edx
 833b07e:	89 04 24             	mov    %eax,(%esp)
 833b081:	e8 ca 86 7a 00       	call   8ae3750 <_Unwind_Resume>
 833b086:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833b089:	89 04 24             	mov    %eax,(%esp)
 833b08c:	e8 47 48 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b091:	89 d8                	mov    %ebx,%eax
 833b093:	83 c4 5c             	add    $0x5c,%esp
 833b096:	5b                   	pop    %ebx
 833b097:	5e                   	pop    %esi
 833b098:	5f                   	pop    %edi
 833b099:	5d                   	pop    %ebp
 833b09a:	c3                   	ret
 833b09b:	90                   	nop

```

```c
// user_creature::CCreatureMgr::ChangeSlotNo @ 0x833aedc

/* user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::ChangeSlotNo
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  bool bVar8;
  CDBMsgSender local_38 [8];
  cMyTrace local_30 [16];
  CCreatureItem *local_20;
  
  cVar4 = IsCreatureEquipmentScope(this,param_2);
  if (cVar4 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      local_20 = (CCreatureItem *)FindCreatureItem((int)this);
      if (local_20 == (CCreatureItem *)0x0) {
        bVar8 = false;
      }
      else {
        CCreatureItem::SetSlotNo(local_20,param_2);
        CDBMsgSender::CDBMsgSender(local_38,0x8a,*(undefined4 *)(this + 0x1c));
        iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
                    /* try { // try from 0833afa1 to 0833b063 has its CatchHandler @ 0833b06b */
        cVar4 = CDBMsgSender::ChangeSlotNo(local_38,param_1,iVar5,param_2,param_3);
        bVar8 = cVar4 == '\x01';
        if (bVar8) {
          CDBMsgSender::Send(local_38);
          IVar1 = param_1[1];
          uVar2 = *(undefined4 *)(param_1 + 7);
          uVar3 = *(undefined4 *)(param_1 + 2);
          pCVar7 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
          CInventory::WriteCreatureLog(pCVar7,3,uVar3,uVar2,1,IVar1,param_3);
        }
        else {
          uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
          cMyTrace::cMyTrace(local_30,
                             "bool user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)"
                             ,0xc44,5);
          cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
        }
        CDBMsgSender::~CDBMsgSender(local_38);
      }
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}

```

---

## CheckDiedCreature

```asm
// === 08339acc user_creature::CCreatureMgr::CheckDiedCreature  [0x08339acc-0x8339b05] ===
 8339acc:	55                   	push   %ebp
 8339acd:	89 e5                	mov    %esp,%ebp
 8339acf:	83 ec 18             	sub    $0x18,%esp
 8339ad2:	8b 45 08             	mov    0x8(%ebp),%eax
 8339ad5:	8b 40 18             	mov    0x18(%eax),%eax
 8339ad8:	85 c0                	test   %eax,%eax
 8339ada:	74 23                	je     8339aff <_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv+0x33>
 8339adc:	8b 45 08             	mov    0x8(%ebp),%eax
 8339adf:	8b 50 1c             	mov    0x1c(%eax),%edx
 8339ae2:	8b 45 08             	mov    0x8(%ebp),%eax
 8339ae5:	8b 40 18             	mov    0x18(%eax),%eax
 8339ae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339aec:	89 04 24             	mov    %eax,(%esp)
 8339aef:	e8 c4 e9 ff ff       	call   83384b8 <_ZN13user_creature9CCreature17CheckDiedCreatureEP5CUser>
 8339af4:	84 c0                	test   %al,%al
 8339af6:	74 07                	je     8339aff <_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv+0x33>
 8339af8:	b8 01 00 00 00       	mov    $0x1,%eax
 8339afd:	eb 05                	jmp    8339b04 <_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv+0x38>
 8339aff:	b8 00 00 00 00       	mov    $0x0,%eax
 8339b04:	c9                   	leave
 8339b05:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::CheckDiedCreature @ 0x8339acc

/* user_creature::CCreatureMgr::CheckDiedCreature() */

undefined4 __thiscall user_creature::CCreatureMgr::CheckDiedCreature(CCreatureMgr *this)

{
  char cVar1;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (cVar1 = CCreature::CheckDiedCreature(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

```

---

## CheckItem

```asm
// === 0833c240 user_creature::CCreatureMgr::CheckItem  [0x0833c240-0x833c289] ===
 833c240:	55                   	push   %ebp
 833c241:	89 e5                	mov    %esp,%ebp
 833c243:	83 ec 18             	sub    $0x18,%esp
 833c246:	8b 45 14             	mov    0x14(%ebp),%eax
 833c249:	c6 00 01             	movb   $0x1,(%eax)
 833c24c:	8b 45 10             	mov    0x10(%ebp),%eax
 833c24f:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833c253:	3c 07                	cmp    $0x7,%al
 833c255:	75 2c                	jne    833c283 <_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb+0x43>
 833c257:	8b 45 10             	mov    0x10(%ebp),%eax
 833c25a:	8b 40 02             	mov    0x2(%eax),%eax
 833c25d:	83 f8 1a             	cmp    $0x1a,%eax
 833c260:	75 21                	jne    833c283 <_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb+0x43>
 833c262:	8b 45 14             	mov    0x14(%ebp),%eax
 833c265:	c6 00 00             	movb   $0x0,(%eax)
 833c268:	8b 45 10             	mov    0x10(%ebp),%eax
 833c26b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833c26f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c272:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c276:	8b 45 08             	mov    0x8(%ebp),%eax
 833c279:	89 04 24             	mov    %eax,(%esp)
 833c27c:	e8 8b fd ff ff       	call   833c00c <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item>
 833c281:	eb 05                	jmp    833c288 <_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb+0x48>
 833c283:	b8 01 00 00 00       	mov    $0x1,%eax
 833c288:	c9                   	leave
 833c289:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::CheckItem @ 0x833c240

/* user_creature::CCreatureMgr::CheckItem(CUser*, Inven_Item*, bool&) */

undefined4 __thiscall
user_creature::CCreatureMgr::CheckItem
          (CCreatureMgr *this,CUser *param_1,Inven_Item *param_2,bool *param_3)

{
  undefined4 uVar1;
  
  *param_3 = true;
  if ((param_2[1] == (Inven_Item)0x7) && (*(int *)(param_2 + 2) == 0x1a)) {
    *param_3 = false;
    uVar1 = SetKeepRightItem(this,param_1,param_2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## DeleteCreatureItem

```asm
// === 0833b606 user_creature::CCreatureMgr::DeleteCreatureItem  [0x0833b606-0x833b61f] ===
 833b606:	55                   	push   %ebp
 833b607:	89 e5                	mov    %esp,%ebp
 833b609:	83 ec 18             	sub    $0x18,%esp
 833b60c:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b60f:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b613:	8b 45 08             	mov    0x8(%ebp),%eax
 833b616:	89 04 24             	mov    %eax,(%esp)
 833b619:	e8 36 f2 ff ff       	call   833a854 <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi>
 833b61e:	c9                   	leave
 833b61f:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::DeleteCreatureItem @ 0x833b606

/* user_creature::CCreatureMgr::DeleteCreatureItem(int, int) */

void user_creature::CCreatureMgr::DeleteCreatureItem(int param_1,int param_2)

{
  UnregisterCreatureItem((CCreatureMgr *)param_1,param_2);
  return;
}

```

---

## DenySwapArtifact

```asm
// === 0833989c user_creature::CCreatureMgr::DenySwapArtifact  [0x0833989c-0x83399f9] ===
 833989c:	55                   	push   %ebp
 833989d:	89 e5                	mov    %esp,%ebp
 833989f:	83 ec 18             	sub    $0x18,%esp
 83398a2:	8b 45 08             	mov    0x8(%ebp),%eax
 83398a5:	8b 40 18             	mov    0x18(%eax),%eax
 83398a8:	85 c0                	test   %eax,%eax
 83398aa:	0f 84 c4 00 00 00    	je     8339974 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0xd8>
 83398b0:	8b 45 10             	mov    0x10(%ebp),%eax
 83398b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83398b7:	8b 45 08             	mov    0x8(%ebp),%eax
 83398ba:	89 04 24             	mov    %eax,(%esp)
 83398bd:	e8 3a fb ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 83398c2:	84 c0                	test   %al,%al
 83398c4:	74 19                	je     83398df <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x43>
 83398c6:	8b 45 18             	mov    0x18(%ebp),%eax
 83398c9:	89 04 24             	mov    %eax,(%esp)
 83398cc:	e8 95 54 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 83398d1:	83 f0 01             	xor    $0x1,%eax
 83398d4:	84 c0                	test   %al,%al
 83398d6:	74 07                	je     83398df <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x43>
 83398d8:	b8 01 00 00 00       	mov    $0x1,%eax
 83398dd:	eb 05                	jmp    83398e4 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x48>
 83398df:	b8 00 00 00 00       	mov    $0x0,%eax
 83398e4:	84 c0                	test   %al,%al
 83398e6:	74 26                	je     833990e <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x72>
 83398e8:	8b 45 08             	mov    0x8(%ebp),%eax
 83398eb:	8b 40 18             	mov    0x18(%eax),%eax
 83398ee:	8b 55 10             	mov    0x10(%ebp),%edx
 83398f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83398f5:	89 04 24             	mov    %eax,(%esp)
 83398f8:	e8 f9 dd ff ff       	call   83376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>
 83398fd:	83 f0 01             	xor    $0x1,%eax
 8339900:	84 c0                	test   %al,%al
 8339902:	74 0a                	je     833990e <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x72>
 8339904:	b8 01 00 00 00       	mov    $0x1,%eax
 8339909:	e9 ea 00 00 00       	jmp    83399f8 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x15c>
 833990e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8339911:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339915:	8b 45 08             	mov    0x8(%ebp),%eax
 8339918:	89 04 24             	mov    %eax,(%esp)
 833991b:	e8 dc fa ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 8339920:	84 c0                	test   %al,%al
 8339922:	74 19                	je     833993d <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0xa1>
 8339924:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339927:	89 04 24             	mov    %eax,(%esp)
 833992a:	e8 37 54 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 833992f:	83 f0 01             	xor    $0x1,%eax
 8339932:	84 c0                	test   %al,%al
 8339934:	74 07                	je     833993d <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0xa1>
 8339936:	b8 01 00 00 00       	mov    $0x1,%eax
 833993b:	eb 05                	jmp    8339942 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0xa6>
 833993d:	b8 00 00 00 00       	mov    $0x0,%eax
 8339942:	84 c0                	test   %al,%al
 8339944:	0f 84 a9 00 00 00    	je     83399f3 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x157>
 833994a:	8b 45 08             	mov    0x8(%ebp),%eax
 833994d:	8b 40 18             	mov    0x18(%eax),%eax
 8339950:	8b 55 10             	mov    0x10(%ebp),%edx
 8339953:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339957:	89 04 24             	mov    %eax,(%esp)
 833995a:	e8 97 dd ff ff       	call   83376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>
 833995f:	83 f0 01             	xor    $0x1,%eax
 8339962:	84 c0                	test   %al,%al
 8339964:	0f 84 89 00 00 00    	je     83399f3 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x157>
 833996a:	b8 01 00 00 00       	mov    $0x1,%eax
 833996f:	e9 84 00 00 00       	jmp    83399f8 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x15c>
 8339974:	8b 45 10             	mov    0x10(%ebp),%eax
 8339977:	89 44 24 04          	mov    %eax,0x4(%esp)
 833997b:	8b 45 08             	mov    0x8(%ebp),%eax
 833997e:	89 04 24             	mov    %eax,(%esp)
 8339981:	e8 76 fa ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 8339986:	84 c0                	test   %al,%al
 8339988:	74 16                	je     83399a0 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x104>
 833998a:	8b 45 18             	mov    0x18(%ebp),%eax
 833998d:	89 04 24             	mov    %eax,(%esp)
 8339990:	e8 d1 53 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8339995:	84 c0                	test   %al,%al
 8339997:	74 07                	je     83399a0 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x104>
 8339999:	b8 01 00 00 00       	mov    $0x1,%eax
 833999e:	eb 05                	jmp    83399a5 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x109>
 83399a0:	b8 00 00 00 00       	mov    $0x0,%eax
 83399a5:	84 c0                	test   %al,%al
 83399a7:	74 07                	je     83399b0 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x114>
 83399a9:	b8 00 00 00 00       	mov    $0x0,%eax
 83399ae:	eb 48                	jmp    83399f8 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x15c>
 83399b0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83399b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83399b7:	8b 45 08             	mov    0x8(%ebp),%eax
 83399ba:	89 04 24             	mov    %eax,(%esp)
 83399bd:	e8 3a fa ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 83399c2:	84 c0                	test   %al,%al
 83399c4:	74 16                	je     83399dc <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x140>
 83399c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83399c9:	89 04 24             	mov    %eax,(%esp)
 83399cc:	e8 95 53 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 83399d1:	84 c0                	test   %al,%al
 83399d3:	74 07                	je     83399dc <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x140>
 83399d5:	b8 01 00 00 00       	mov    $0x1,%eax
 83399da:	eb 05                	jmp    83399e1 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x145>
 83399dc:	b8 00 00 00 00       	mov    $0x0,%eax
 83399e1:	84 c0                	test   %al,%al
 83399e3:	74 07                	je     83399ec <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x150>
 83399e5:	b8 00 00 00 00       	mov    $0x0,%eax
 83399ea:	eb 0c                	jmp    83399f8 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x15c>
 83399ec:	b8 01 00 00 00       	mov    $0x1,%eax
 83399f1:	eb 05                	jmp    83399f8 <_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii+0x15c>
 83399f3:	b8 00 00 00 00       	mov    $0x0,%eax
 83399f8:	c9                   	leave
 83399f9:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::DenySwapArtifact @ 0x833989c

/* user_creature::CCreatureMgr::DenySwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4
user_creature::CCreatureMgr::DenySwapArtifact
          (Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_3);
    if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_5), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = CCreature::IsAvailableArtifact(*(CCreature **)(param_1 + 0x18),param_3),
       cVar2 != '\x01')) {
      return 1;
    }
    cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_6);
    if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = CCreature::IsAvailableArtifact(*(CCreature **)(param_1 + 0x18),param_3),
       cVar2 != '\x01')) {
      return 1;
    }
    return 0;
  }
  cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_3);
  if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_5), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_6);
  if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_2), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}

```

---

## Dismantle

```asm
// === 0833934c user_creature::CCreatureMgr::Dismantle  [0x0833934c-0x83393a1] ===
 833934c:	55                   	push   %ebp
 833934d:	89 e5                	mov    %esp,%ebp
 833934f:	83 ec 18             	sub    $0x18,%esp
 8339352:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339355:	89 04 24             	mov    %eax,(%esp)
 8339358:	e8 3b 5c 00 00       	call   833ef98 <_ZN13user_creature13CCreatureItem19GetCreatureItemTypeEv>
 833935d:	83 f8 01             	cmp    $0x1,%eax
 8339360:	0f 95 c0             	setne  %al
 8339363:	84 c0                	test   %al,%al
 8339365:	74 07                	je     833936e <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE+0x22>
 8339367:	b8 00 00 00 00       	mov    $0x0,%eax
 833936c:	eb 32                	jmp    83393a0 <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE+0x54>
 833936e:	8b 45 08             	mov    0x8(%ebp),%eax
 8339371:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339374:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339378:	8b 45 0c             	mov    0xc(%ebp),%eax
 833937b:	89 04 24             	mov    %eax,(%esp)
 833937e:	e8 ff df ff ff       	call   8337382 <_ZN13user_creature9CCreature9DismantleEP5CUser>
 8339383:	83 f0 01             	xor    $0x1,%eax
 8339386:	84 c0                	test   %al,%al
 8339388:	74 07                	je     8339391 <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE+0x45>
 833938a:	b8 00 00 00 00       	mov    $0x0,%eax
 833938f:	eb 0f                	jmp    83393a0 <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE+0x54>
 8339391:	8b 45 08             	mov    0x8(%ebp),%eax
 8339394:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 833939b:	b8 01 00 00 00       	mov    $0x1,%eax
 83393a0:	c9                   	leave
 83393a1:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::Dismantle @ 0x833934c

/* user_creature::CCreatureMgr::Dismantle(user_creature::CCreature*) */

undefined4 __thiscall user_creature::CCreatureMgr::Dismantle(CCreatureMgr *this,CCreature *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)param_1);
  if (iVar2 == 1) {
    cVar1 = CCreature::Dismantle(param_1,*(CUser **)(this + 0x1c));
    if (cVar1 == '\x01') {
      *(undefined4 *)(this + 0x18) = 0;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## DismantleArtifact

```asm
// === 08339718 user_creature::CCreatureMgr::DismantleArtifact  [0x08339718-0x8339751] ===
 8339718:	55                   	push   %ebp
 8339719:	89 e5                	mov    %esp,%ebp
 833971b:	83 ec 28             	sub    $0x28,%esp
 833971e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339721:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339725:	8b 45 08             	mov    0x8(%ebp),%eax
 8339728:	89 04 24             	mov    %eax,(%esp)
 833972b:	e8 26 27 00 00       	call   833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>
 8339730:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8339733:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8339737:	75 07                	jne    8339740 <_ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item+0x28>
 8339739:	b8 00 00 00 00       	mov    $0x0,%eax
 833973e:	eb 10                	jmp    8339750 <_ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item+0x38>
 8339740:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8339743:	89 04 24             	mov    %eax,(%esp)
 8339746:	e8 15 d8 ff ff       	call   8336f60 <_ZN13user_creature9CArtifact5ResetEv>
 833974b:	b8 01 00 00 00       	mov    $0x1,%eax
 8339750:	c9                   	leave
 8339751:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::DismantleArtifact @ 0x8339718

/* user_creature::CCreatureMgr::DismantleArtifact(int, Inven_Item*) */

bool user_creature::CCreatureMgr::DismantleArtifact(int param_1,Inven_Item *param_2)

{
  CArtifact *this;
  
  this = (CArtifact *)GetArtifact((CCreatureMgr *)param_1,(int)param_2);
  if (this != (CArtifact *)0x0) {
    CArtifact::Reset(this);
  }
  return this != (CArtifact *)0x0;
}

```

---

## Equip

```asm
// === 083392f6 user_creature::CCreatureMgr::Equip  [0x083392f6-0x833934b] ===
 83392f6:	55                   	push   %ebp
 83392f7:	89 e5                	mov    %esp,%ebp
 83392f9:	83 ec 18             	sub    $0x18,%esp
 83392fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 83392ff:	89 04 24             	mov    %eax,(%esp)
 8339302:	e8 91 5c 00 00       	call   833ef98 <_ZN13user_creature13CCreatureItem19GetCreatureItemTypeEv>
 8339307:	83 f8 01             	cmp    $0x1,%eax
 833930a:	0f 95 c0             	setne  %al
 833930d:	84 c0                	test   %al,%al
 833930f:	74 07                	je     8339318 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE+0x22>
 8339311:	b8 00 00 00 00       	mov    $0x0,%eax
 8339316:	eb 31                	jmp    8339349 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE+0x53>
 8339318:	8b 45 08             	mov    0x8(%ebp),%eax
 833931b:	8b 40 1c             	mov    0x1c(%eax),%eax
 833931e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339322:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339325:	89 04 24             	mov    %eax,(%esp)
 8339328:	e8 03 e0 ff ff       	call   8337330 <_ZN13user_creature9CCreature5EquipEP5CUser>
 833932d:	83 f0 01             	xor    $0x1,%eax
 8339330:	84 c0                	test   %al,%al
 8339332:	74 07                	je     833933b <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE+0x45>
 8339334:	b8 00 00 00 00       	mov    $0x0,%eax
 8339339:	eb 0e                	jmp    8339349 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE+0x53>
 833933b:	8b 45 08             	mov    0x8(%ebp),%eax
 833933e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339341:	89 50 18             	mov    %edx,0x18(%eax)
 8339344:	b8 01 00 00 00       	mov    $0x1,%eax
 8339349:	c9                   	leave
 833934a:	c3                   	ret
 833934b:	90                   	nop

```

```c
// user_creature::CCreatureMgr::Equip @ 0x83392f6

/* user_creature::CCreatureMgr::Equip(user_creature::CCreature*) */

undefined4 __thiscall user_creature::CCreatureMgr::Equip(CCreatureMgr *this,CCreature *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)param_1);
  if (iVar2 == 1) {
    cVar1 = CCreature::Equip(param_1,*(CUser **)(this + 0x1c));
    if (cVar1 == '\x01') {
      *(CCreature **)(this + 0x18) = param_1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## EquipArtifact

```asm
// === 083396c8 user_creature::CCreatureMgr::EquipArtifact  [0x083396c8-0x8339717] ===
 83396c8:	55                   	push   %ebp
 83396c9:	89 e5                	mov    %esp,%ebp
 83396cb:	83 ec 28             	sub    $0x28,%esp
 83396ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 83396d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83396d5:	8b 45 08             	mov    0x8(%ebp),%eax
 83396d8:	89 04 24             	mov    %eax,(%esp)
 83396db:	e8 76 27 00 00       	call   833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>
 83396e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83396e3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83396e7:	75 07                	jne    83396f0 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item+0x28>
 83396e9:	b8 00 00 00 00       	mov    $0x0,%eax
 83396ee:	eb 25                	jmp    8339715 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item+0x4d>
 83396f0:	8b 45 10             	mov    0x10(%ebp),%eax
 83396f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83396f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83396fa:	89 04 24             	mov    %eax,(%esp)
 83396fd:	e8 6c d8 ff ff       	call   8336f6e <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item>
 8339702:	83 f0 01             	xor    $0x1,%eax
 8339705:	84 c0                	test   %al,%al
 8339707:	74 07                	je     8339710 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item+0x48>
 8339709:	b8 00 00 00 00       	mov    $0x0,%eax
 833970e:	eb 05                	jmp    8339715 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item+0x4d>
 8339710:	b8 01 00 00 00       	mov    $0x1,%eax
 8339715:	c9                   	leave
 8339716:	c3                   	ret
 8339717:	90                   	nop

```

```c
// user_creature::CCreatureMgr::EquipArtifact @ 0x83396c8

/* user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::EquipArtifact(CCreatureMgr *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  CArtifact *this_00;
  undefined4 uVar2;
  
  this_00 = (CArtifact *)GetArtifact(this,param_1);
  if (this_00 == (CArtifact *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CArtifact::EquipArtifact(this_00,param_2);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## EquipCreatureItem

```asm
// === 083393a2 user_creature::CCreatureMgr::EquipCreatureItem  [0x083393a2-0x83393fb] ===
 83393a2:	55                   	push   %ebp
 83393a3:	89 e5                	mov    %esp,%ebp
 83393a5:	83 ec 18             	sub    $0x18,%esp
 83393a8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83393ac:	74 20                	je     83393ce <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x2c>
 83393ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 83393b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83393b5:	8b 45 08             	mov    0x8(%ebp),%eax
 83393b8:	89 04 24             	mov    %eax,(%esp)
 83393bb:	e8 8c ff ff ff       	call   833934c <_ZN13user_creature12CCreatureMgr9DismantleEPNS_9CCreatureE>
 83393c0:	83 f0 01             	xor    $0x1,%eax
 83393c3:	84 c0                	test   %al,%al
 83393c5:	74 07                	je     83393ce <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x2c>
 83393c7:	b8 00 00 00 00       	mov    $0x0,%eax
 83393cc:	eb 2b                	jmp    83393f9 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x57>
 83393ce:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83393d2:	74 20                	je     83393f4 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x52>
 83393d4:	8b 45 10             	mov    0x10(%ebp),%eax
 83393d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83393db:	8b 45 08             	mov    0x8(%ebp),%eax
 83393de:	89 04 24             	mov    %eax,(%esp)
 83393e1:	e8 10 ff ff ff       	call   83392f6 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE>
 83393e6:	83 f0 01             	xor    $0x1,%eax
 83393e9:	84 c0                	test   %al,%al
 83393eb:	74 07                	je     83393f4 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x52>
 83393ed:	b8 00 00 00 00       	mov    $0x0,%eax
 83393f2:	eb 05                	jmp    83393f9 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_+0x57>
 83393f4:	b8 01 00 00 00       	mov    $0x1,%eax
 83393f9:	c9                   	leave
 83393fa:	c3                   	ret
 83393fb:	90                   	nop

```

```c
// user_creature::CCreatureMgr::EquipCreatureItem @ 0x83393a2

/* user_creature::CCreatureMgr::EquipCreatureItem(user_creature::CCreature*,
   user_creature::CCreature*) */

undefined4 __thiscall
user_creature::CCreatureMgr::EquipCreatureItem
          (CCreatureMgr *this,CCreature *param_1,CCreature *param_2)

{
  char cVar1;
  
  if ((param_1 != (CCreature *)0x0) && (cVar1 = Dismantle(this,param_1), cVar1 != '\x01')) {
    return 0;
  }
  if ((param_2 != (CCreature *)0x0) && (cVar1 = Equip(this,param_2), cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}

```

---

## EventEvoluteCreature

```asm
// === 0833da1e user_creature::CCreatureMgr::EventEvoluteCreature  [0x0833da1e-0x833db2d] ===
 833da1e:	55                   	push   %ebp
 833da1f:	89 e5                	mov    %esp,%ebp
 833da21:	56                   	push   %esi
 833da22:	53                   	push   %ebx
 833da23:	83 ec 40             	sub    $0x40,%esp
 833da26:	8b 45 08             	mov    0x8(%ebp),%eax
 833da29:	8b 40 18             	mov    0x18(%eax),%eax
 833da2c:	85 c0                	test   %eax,%eax
 833da2e:	0f 84 ec 00 00 00    	je     833db20 <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii+0x102>
 833da34:	8b 45 08             	mov    0x8(%ebp),%eax
 833da37:	8b 40 18             	mov    0x18(%eax),%eax
 833da3a:	89 04 24             	mov    %eax,(%esp)
 833da3d:	e8 58 16 00 00       	call   833f09a <_ZN13user_creature9CCreature8GetLevelEv>
 833da42:	3b 45 10             	cmp    0x10(%ebp),%eax
 833da45:	0f 9d c0             	setge  %al
 833da48:	84 c0                	test   %al,%al
 833da4a:	0f 84 9a 00 00 00    	je     833daea <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii+0xcc>
 833da50:	8b 45 08             	mov    0x8(%ebp),%eax
 833da53:	8b 50 1c             	mov    0x1c(%eax),%edx
 833da56:	8b 45 08             	mov    0x8(%ebp),%eax
 833da59:	8b 40 18             	mov    0x18(%eax),%eax
 833da5c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 833da5f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 833da63:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 833da66:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833da6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833da6e:	89 04 24             	mov    %eax,(%esp)
 833da71:	e8 b8 00 00 00       	call   833db2e <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii>
 833da76:	84 c0                	test   %al,%al
 833da78:	0f 84 a2 00 00 00    	je     833db20 <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii+0x102>
 833da7e:	8b 45 08             	mov    0x8(%ebp),%eax
 833da81:	8b 40 1c             	mov    0x1c(%eax),%eax
 833da84:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833da8b:	00 
 833da8c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833da93:	00 
 833da94:	89 44 24 04          	mov    %eax,0x4(%esp)
 833da98:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833da9b:	89 04 24             	mov    %eax,(%esp)
 833da9e:	e8 87 28 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833daa3:	8b 45 08             	mov    0x8(%ebp),%eax
 833daa6:	c7 44 24 08 ee 00 00 	movl   $0xee,0x8(%esp)
 833daad:	00 
 833daae:	89 44 24 04          	mov    %eax,0x4(%esp)
 833dab2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833dab5:	89 04 24             	mov    %eax,(%esp)
 833dab8:	e8 23 2f 00 00       	call   83409e0 <_ZN13user_creature17CPacketRespondent30MakeNotipacketCreatureItemListEPKSt3mapIiPNS_13CCreatureItemESt4lessIiESaISt4pairIKiS3_EEEi>
 833dabd:	bb 01 00 00 00       	mov    $0x1,%ebx
 833dac2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833dac5:	89 04 24             	mov    %eax,(%esp)
 833dac8:	e8 9d 28 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833dacd:	eb 56                	jmp    833db25 <_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii+0x107>
 833dacf:	89 d3                	mov    %edx,%ebx
 833dad1:	89 c6                	mov    %eax,%esi
 833dad3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833dad6:	89 04 24             	mov    %eax,(%esp)
 833dad9:	e8 8c 28 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833dade:	89 f0                	mov    %esi,%eax
 833dae0:	89 da                	mov    %ebx,%edx
 833dae2:	89 04 24             	mov    %eax,(%esp)
 833dae5:	e8 66 5c 7a 00       	call   8ae3750 <_Unwind_Resume>
 833daea:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833daf1:	00 
 833daf2:	c7 44 24 08 c2 10 00 	movl   $0x10c2,0x8(%esp)
 833daf9:	00 
 833dafa:	c7 44 24 04 a0 ea c2 	movl   $0x8c2eaa0,0x4(%esp)
 833db01:	08 
 833db02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833db05:	89 04 24             	mov    %eax,(%esp)
 833db08:	e8 0b 1c 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833db0d:	c7 44 24 04 dc db c2 	movl   $0x8c2dbdc,0x4(%esp)
 833db14:	08 
 833db15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833db18:	89 04 24             	mov    %eax,(%esp)
 833db1b:	e8 68 1c 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833db20:	bb 00 00 00 00       	mov    $0x0,%ebx
 833db25:	89 d8                	mov    %ebx,%eax
 833db27:	83 c4 40             	add    $0x40,%esp
 833db2a:	5b                   	pop    %ebx
 833db2b:	5e                   	pop    %esi
 833db2c:	5d                   	pop    %ebp
 833db2d:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::EventEvoluteCreature @ 0x833da1e

/* user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::EventEvoluteCreature
          (CCreatureMgr *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CPacketRespondent local_3c [32];
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x18) != 0) {
    iVar2 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
    if (iVar2 < param_2) {
      cMyTrace::cMyTrace(local_1c,
                         "bool user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)",
                         0x10c2,0);
      cMyTrace::operator()(local_1c,"event evolute creature error : low creature level.");
    }
    else {
      cVar1 = CCreature::EventEvolute
                        (*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1,param_3);
      if (cVar1 != '\0') {
        CPacketRespondent::CPacketRespondent(local_3c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833dab8 to 0833dabc has its CatchHandler @ 0833dacf */
        CPacketRespondent::MakeNotipacketCreatureItemList(local_3c,(map *)this,0xee);
        CPacketRespondent::~CPacketRespondent(local_3c);
        return 1;
      }
    }
  }
  return 0;
}

```

---

## Evolute

```asm
// === 0833beb4 user_creature::CCreatureMgr::Evolute  [0x0833beb4-0x833c00b] ===
 833beb4:	55                   	push   %ebp
 833beb5:	89 e5                	mov    %esp,%ebp
 833beb7:	83 ec 48             	sub    $0x48,%esp
 833beba:	8b 45 14             	mov    0x14(%ebp),%eax
 833bebd:	88 45 d4             	mov    %al,-0x2c(%ebp)
 833bec0:	8b 45 08             	mov    0x8(%ebp),%eax
 833bec3:	8b 40 18             	mov    0x18(%eax),%eax
 833bec6:	85 c0                	test   %eax,%eax
 833bec8:	0f 84 37 01 00 00    	je     833c005 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x151>
 833bece:	8b 45 08             	mov    0x8(%ebp),%eax
 833bed1:	8b 40 18             	mov    0x18(%eax),%eax
 833bed4:	89 04 24             	mov    %eax,(%esp)
 833bed7:	e8 be 31 00 00       	call   833f09a <_ZN13user_creature9CCreature8GetLevelEv>
 833bedc:	3b 45 10             	cmp    0x10(%ebp),%eax
 833bedf:	7d 06                	jge    833bee7 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x33>
 833bee1:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 833bee5:	74 07                	je     833beee <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x3a>
 833bee7:	b8 01 00 00 00       	mov    $0x1,%eax
 833beec:	eb 05                	jmp    833bef3 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x3f>
 833beee:	b8 00 00 00 00       	mov    $0x0,%eax
 833bef3:	84 c0                	test   %al,%al
 833bef5:	0f 84 d4 00 00 00    	je     833bfcf <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x11b>
 833befb:	8b 45 08             	mov    0x8(%ebp),%eax
 833befe:	8b 40 18             	mov    0x18(%eax),%eax
 833bf01:	8b 55 0c             	mov    0xc(%ebp),%edx
 833bf04:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bf08:	89 04 24             	mov    %eax,(%esp)
 833bf0b:	e8 dc c9 ff ff       	call   83388ec <_ZN13user_creature9CCreature19IsEvolutionCreatureEi>
 833bf10:	84 c0                	test   %al,%al
 833bf12:	75 06                	jne    833bf1a <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x66>
 833bf14:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 833bf18:	74 07                	je     833bf21 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x6d>
 833bf1a:	b8 01 00 00 00       	mov    $0x1,%eax
 833bf1f:	eb 05                	jmp    833bf26 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x72>
 833bf21:	b8 00 00 00 00       	mov    $0x0,%eax
 833bf26:	84 c0                	test   %al,%al
 833bf28:	74 1d                	je     833bf47 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x93>
 833bf2a:	8b 45 08             	mov    0x8(%ebp),%eax
 833bf2d:	8b 50 1c             	mov    0x1c(%eax),%edx
 833bf30:	8b 45 08             	mov    0x8(%ebp),%eax
 833bf33:	8b 40 18             	mov    0x18(%eax),%eax
 833bf36:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bf3a:	89 04 24             	mov    %eax,(%esp)
 833bf3d:	e8 a8 c2 ff ff       	call   83381ea <_ZN13user_creature9CCreature7EvoluteEP5CUser>
 833bf42:	e9 c3 00 00 00       	jmp    833c00a <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x156>
 833bf47:	8b 45 08             	mov    0x8(%ebp),%eax
 833bf4a:	8b 40 18             	mov    0x18(%eax),%eax
 833bf4d:	8b 55 0c             	mov    0xc(%ebp),%edx
 833bf50:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bf54:	89 04 24             	mov    %eax,(%esp)
 833bf57:	e8 c6 c9 ff ff       	call   8338922 <_ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi>
 833bf5c:	84 c0                	test   %al,%al
 833bf5e:	75 06                	jne    833bf66 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0xb2>
 833bf60:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 833bf64:	74 07                	je     833bf6d <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0xb9>
 833bf66:	b8 01 00 00 00       	mov    $0x1,%eax
 833bf6b:	eb 05                	jmp    833bf72 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0xbe>
 833bf6d:	b8 00 00 00 00       	mov    $0x0,%eax
 833bf72:	84 c0                	test   %al,%al
 833bf74:	74 21                	je     833bf97 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0xe3>
 833bf76:	8b 45 08             	mov    0x8(%ebp),%eax
 833bf79:	8b 50 1c             	mov    0x1c(%eax),%edx
 833bf7c:	8b 45 08             	mov    0x8(%ebp),%eax
 833bf7f:	8b 40 18             	mov    0x18(%eax),%eax
 833bf82:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 833bf85:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833bf89:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bf8d:	89 04 24             	mov    %eax,(%esp)
 833bf90:	e8 bb c9 ff ff       	call   8338950 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri>
 833bf95:	eb 73                	jmp    833c00a <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x156>
 833bf97:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833bf9e:	00 
 833bf9f:	c7 44 24 08 d6 0d 00 	movl   $0xdd6,0x8(%esp)
 833bfa6:	00 
 833bfa7:	c7 44 24 04 c0 ec c2 	movl   $0x8c2ecc0,0x4(%esp)
 833bfae:	08 
 833bfaf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833bfb2:	89 04 24             	mov    %eax,(%esp)
 833bfb5:	e8 5e 37 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833bfba:	c7 44 24 04 a4 d9 c2 	movl   $0x8c2d9a4,0x4(%esp)
 833bfc1:	08 
 833bfc2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833bfc5:	89 04 24             	mov    %eax,(%esp)
 833bfc8:	e8 bb 37 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833bfcd:	eb 36                	jmp    833c005 <_ZN13user_creature12CCreatureMgr7EvoluteEiib+0x151>
 833bfcf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833bfd6:	00 
 833bfd7:	c7 44 24 08 db 0d 00 	movl   $0xddb,0x8(%esp)
 833bfde:	00 
 833bfdf:	c7 44 24 04 c0 ec c2 	movl   $0x8c2ecc0,0x4(%esp)
 833bfe6:	08 
 833bfe7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bfea:	89 04 24             	mov    %eax,(%esp)
 833bfed:	e8 26 37 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833bff2:	c7 44 24 04 d0 d9 c2 	movl   $0x8c2d9d0,0x4(%esp)
 833bff9:	08 
 833bffa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bffd:	89 04 24             	mov    %eax,(%esp)
 833c000:	e8 83 37 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833c005:	b8 00 00 00 00       	mov    $0x0,%eax
 833c00a:	c9                   	leave
 833c00b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::Evolute @ 0x833beb4

/* user_creature::CCreatureMgr::Evolute(int, int, bool) */

undefined4 __thiscall
user_creature::CCreatureMgr::Evolute(CCreatureMgr *this,int param_1,int param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x18) != 0) {
    iVar3 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
    if ((param_2 <= iVar3) || (param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      cVar2 = CCreature::IsEvolutionCreature(*(CCreature **)(this + 0x18),param_1);
      if ((cVar2 != '\0') || (param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = CCreature::Evolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
        return uVar4;
      }
      cVar2 = CCreature::IsEvolutionCreatureMulty(*(CCreature **)(this + 0x18),param_1);
      if ((cVar2 != '\0') || (param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = CCreature::EvoluteMulty
                          (*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1);
        return uVar4;
      }
      cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreatureMgr::Evolute(int, int, bool)",0xdd6,
                         0);
      cMyTrace::operator()(local_2c,"evolute error : different creature kind.");
    }
    else {
      cMyTrace::cMyTrace(local_1c,"bool user_creature::CCreatureMgr::Evolute(int, int, bool)",0xddb,
                         0);
      cMyTrace::operator()(local_1c,"evolute error : low creature level.");
    }
  }
  return 0;
}

```

---

## FindCreatureItem

```asm
// === 08339292 user_creature::CCreatureMgr::FindCreatureItem  [0x08339292-0x83392f5] ===
 8339292:	55                   	push   %ebp
 8339293:	89 e5                	mov    %esp,%ebp
 8339295:	83 ec 28             	sub    $0x28,%esp
 8339298:	8b 55 08             	mov    0x8(%ebp),%edx
 833929b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833929e:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 83392a1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83392a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83392a9:	89 04 24             	mov    %eax,(%esp)
 83392ac:	e8 59 95 00 00       	call   834280a <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 83392b1:	83 ec 04             	sub    $0x4,%esp
 83392b4:	8b 55 08             	mov    0x8(%ebp),%edx
 83392b7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83392ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 83392be:	89 04 24             	mov    %eax,(%esp)
 83392c1:	e8 44 94 00 00       	call   834270a <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 83392c6:	83 ec 04             	sub    $0x4,%esp
 83392c9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83392cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 83392d0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83392d3:	89 04 24             	mov    %eax,(%esp)
 83392d6:	e8 55 94 00 00       	call   8342730 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 83392db:	84 c0                	test   %al,%al
 83392dd:	74 10                	je     83392ef <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi+0x5d>
 83392df:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83392e2:	89 04 24             	mov    %eax,(%esp)
 83392e5:	e8 98 94 00 00       	call   8342782 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 83392ea:	8b 40 04             	mov    0x4(%eax),%eax
 83392ed:	eb 05                	jmp    83392f4 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi+0x62>
 83392ef:	b8 00 00 00 00       	mov    $0x0,%eax
 83392f4:	c9                   	leave
 83392f5:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::FindCreatureItem @ 0x8339292

/* user_creature::CCreatureMgr::FindCreatureItem(int) const */

undefined4 user_creature::CCreatureMgr::FindCreatureItem(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_10 [12];
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find((int *)local_14);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GainExp

```asm
// === 08339b06 user_creature::CCreatureMgr::GainExp  [0x08339b06-0x8339b6d] ===
 8339b06:	55                   	push   %ebp
 8339b07:	89 e5                	mov    %esp,%ebp
 8339b09:	83 ec 18             	sub    $0x18,%esp
 8339b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b0f:	8b 40 18             	mov    0x18(%eax),%eax
 8339b12:	85 c0                	test   %eax,%eax
 8339b14:	74 50                	je     8339b66 <_ZN13user_creature12CCreatureMgr7GainExpEi+0x60>
 8339b16:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b19:	8b 50 1c             	mov    0x1c(%eax),%edx
 8339b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b1f:	8b 40 18             	mov    0x18(%eax),%eax
 8339b22:	89 54 24 08          	mov    %edx,0x8(%esp)
 8339b26:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339b29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339b2d:	89 04 24             	mov    %eax,(%esp)
 8339b30:	e8 c7 dd ff ff       	call   83378fc <_ZN13user_creature9CCreature7GainExpEiP5CUser>
 8339b35:	84 c0                	test   %al,%al
 8339b37:	74 2d                	je     8339b66 <_ZN13user_creature12CCreatureMgr7GainExpEi+0x60>
 8339b39:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b3c:	8b 40 18             	mov    0x18(%eax),%eax
 8339b3f:	89 04 24             	mov    %eax,(%esp)
 8339b42:	e8 83 55 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 8339b47:	84 c0                	test   %al,%al
 8339b49:	74 14                	je     8339b5f <_ZN13user_creature12CCreatureMgr7GainExpEi+0x59>
 8339b4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b4e:	8b 40 18             	mov    0x18(%eax),%eax
 8339b51:	89 04 24             	mov    %eax,(%esp)
 8339b54:	e8 15 da ff ff       	call   833756e <_ZN13user_creature9CCreature10isMaxLevelEv>
 8339b59:	8b 55 08             	mov    0x8(%ebp),%edx
 8339b5c:	88 42 48             	mov    %al,0x48(%edx)
 8339b5f:	b8 01 00 00 00       	mov    $0x1,%eax
 8339b64:	eb 05                	jmp    8339b6b <_ZN13user_creature12CCreatureMgr7GainExpEi+0x65>
 8339b66:	b8 00 00 00 00       	mov    $0x0,%eax
 8339b6b:	c9                   	leave
 8339b6c:	c3                   	ret
 8339b6d:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GainExp @ 0x8339b06

/* user_creature::CCreatureMgr::GainExp(int) */

undefined4 __thiscall user_creature::CCreatureMgr::GainExp(CCreatureMgr *this,int param_1)

{
  char cVar1;
  CCreatureMgr CVar2;
  
  if ((*(int *)(this + 0x18) != 0) &&
     (cVar1 = CCreature::GainExp(*(CCreature **)(this + 0x18),param_1,*(CUser **)(this + 0x1c)),
     cVar1 != '\0')) {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      CVar2 = (CCreatureMgr)CCreature::isMaxLevel(*(CCreature **)(this + 0x18));
      this[0x48] = CVar2;
    }
    return 1;
  }
  return 0;
}

```

---

## GetArtifact

```asm
// === 0833be56 user_creature::CCreatureMgr::GetArtifact  [0x0833be56-0x833be7b] ===
 833be56:	55                   	push   %ebp
 833be57:	89 e5                	mov    %esp,%ebp
 833be59:	8b 45 0c             	mov    0xc(%ebp),%eax
 833be5c:	83 e8 17             	sub    $0x17,%eax
 833be5f:	83 f8 03             	cmp    $0x3,%eax
 833be62:	7e 07                	jle    833be6b <_ZN13user_creature12CCreatureMgr11GetArtifactEi+0x15>
 833be64:	b8 00 00 00 00       	mov    $0x0,%eax
 833be69:	eb 0f                	jmp    833be7a <_ZN13user_creature12CCreatureMgr11GetArtifactEi+0x24>
 833be6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833be6e:	83 e8 17             	sub    $0x17,%eax
 833be71:	83 c0 08             	add    $0x8,%eax
 833be74:	c1 e0 02             	shl    $0x2,%eax
 833be77:	03 45 08             	add    0x8(%ebp),%eax
 833be7a:	5d                   	pop    %ebp
 833be7b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::GetArtifact @ 0x833be56

/* user_creature::CCreatureMgr::GetArtifact(int) */

CCreatureMgr * __thiscall user_creature::CCreatureMgr::GetArtifact(CCreatureMgr *this,int param_1)

{
  CCreatureMgr *pCVar1;
  
  if (param_1 + -0x17 < 4) {
    pCVar1 = this + (param_1 + -0xf) * 4;
  }
  else {
    pCVar1 = (CCreatureMgr *)0x0;
  }
  return pCVar1;
}

```

---

## GetCreatureIndex

```asm
// === 08338f36 user_creature::CCreatureMgr::GetCreatureIndex  [0x08338f36-0x8338f4b] ===
 8338f36:	55                   	push   %ebp
 8338f37:	89 e5                	mov    %esp,%ebp
 8338f39:	83 ec 18             	sub    $0x18,%esp
 8338f3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8338f3f:	8b 40 18             	mov    0x18(%eax),%eax
 8338f42:	89 04 24             	mov    %eax,(%esp)
 8338f45:	e8 90 61 00 00       	call   833f0da <_ZN13user_creature9CCreature13GetCreatureIdEv>
 8338f4a:	c9                   	leave
 8338f4b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::GetCreatureIndex @ 0x8338f36

/* user_creature::CCreatureMgr::GetCreatureIndex() */

void __thiscall user_creature::CCreatureMgr::GetCreatureIndex(CCreatureMgr *this)

{
  CCreature::GetCreatureId(*(CCreature **)(this + 0x18));
  return;
}

```

---

## GetCreatureItem

```asm
// === 0833b80c user_creature::CCreatureMgr::GetCreatureItem  [0x0833b80c-0x833ba2f] ===
 833b80c:	55                   	push   %ebp
 833b80d:	89 e5                	mov    %esp,%ebp
 833b80f:	56                   	push   %esi
 833b810:	53                   	push   %ebx
 833b811:	83 ec 70             	sub    $0x70,%esp
 833b814:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b817:	05 80 28 01 00       	add    $0x12880,%eax
 833b81c:	c7 44 24 08 d8 1e 00 	movl   $0x1ed8,0x8(%esp)
 833b823:	00 
 833b824:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833b82b:	00 
 833b82c:	89 04 24             	mov    %eax,(%esp)
 833b82f:	e8 8c 24 d4 ff       	call   807dcc0 <memset@plt>
 833b834:	8d 45 9f             	lea    -0x61(%ebp),%eax
 833b837:	89 04 24             	mov    %eax,(%esp)
 833b83a:	e8 15 00 d9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 833b83f:	8b 55 08             	mov    0x8(%ebp),%edx
 833b842:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b845:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b849:	89 04 24             	mov    %eax,(%esp)
 833b84c:	e8 93 6e 00 00       	call   83426e4 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833b851:	83 ec 04             	sub    $0x4,%esp
 833b854:	8b 55 08             	mov    0x8(%ebp),%edx
 833b857:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833b85a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b85e:	89 04 24             	mov    %eax,(%esp)
 833b861:	e8 a4 6e 00 00       	call   834270a <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833b866:	83 ec 04             	sub    $0x4,%esp
 833b869:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833b870:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833b877:	e9 95 00 00 00       	jmp    833b911 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x105>
 833b87c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b87f:	89 04 24             	mov    %eax,(%esp)
 833b882:	e8 fb 6e 00 00       	call   8342782 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833b887:	8b 40 04             	mov    0x4(%eax),%eax
 833b88a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b88d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b890:	8b 00                	mov    (%eax),%eax
 833b892:	83 c0 0c             	add    $0xc,%eax
 833b895:	8b 18                	mov    (%eax),%ebx
 833b897:	8b 45 08             	mov    0x8(%ebp),%eax
 833b89a:	8b 48 1c             	mov    0x1c(%eax),%ecx
 833b89d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833b8a0:	c1 e0 03             	shl    $0x3,%eax
 833b8a3:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 833b8aa:	29 c2                	sub    %eax,%edx
 833b8ac:	8d 82 80 28 01 00    	lea    0x12880(%edx),%eax
 833b8b2:	03 45 0c             	add    0xc(%ebp),%eax
 833b8b5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 833b8b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b8bd:	8d 45 9f             	lea    -0x61(%ebp),%eax
 833b8c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b8c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b8c7:	89 04 24             	mov    %eax,(%esp)
 833b8ca:	ff d3                	call   *%ebx
 833b8cc:	8b 75 f0             	mov    -0x10(%ebp),%esi
 833b8cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b8d2:	89 04 24             	mov    %eax,(%esp)
 833b8d5:	e8 a8 6e 00 00       	call   8342782 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833b8da:	8b 40 04             	mov    0x4(%eax),%eax
 833b8dd:	89 04 24             	mov    %eax,(%esp)
 833b8e0:	e8 25 37 00 00       	call   833f00a <_ZNK13user_creature13CCreatureItem13getExpireTimeEv>
 833b8e5:	89 c1                	mov    %eax,%ecx
 833b8e7:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 833b8ea:	89 f0                	mov    %esi,%eax
 833b8ec:	c1 e0 03             	shl    $0x3,%eax
 833b8ef:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 833b8f6:	29 c2                	sub    %eax,%edx
 833b8f8:	8d 04 13             	lea    (%ebx,%edx,1),%eax
 833b8fb:	05 a8 28 01 00       	add    $0x128a8,%eax
 833b900:	89 08                	mov    %ecx,(%eax)
 833b902:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b905:	89 04 24             	mov    %eax,(%esp)
 833b908:	e8 2b 72 00 00       	call   8342b38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEv>
 833b90d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 833b911:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833b914:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b918:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833b91b:	89 04 24             	mov    %eax,(%esp)
 833b91e:	e8 0d 6e 00 00       	call   8342730 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833b923:	84 c0                	test   %al,%al
 833b925:	74 10                	je     833b937 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x12b>
 833b927:	81 7d f0 8c 00 00 00 	cmpl   $0x8c,-0x10(%ebp)
 833b92e:	7f 07                	jg     833b937 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x12b>
 833b930:	b8 01 00 00 00       	mov    $0x1,%eax
 833b935:	eb 05                	jmp    833b93c <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x130>
 833b937:	b8 00 00 00 00       	mov    $0x0,%eax
 833b93c:	84 c0                	test   %al,%al
 833b93e:	0f 85 38 ff ff ff    	jne    833b87c <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x70>
 833b944:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b947:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833b94a:	89 90 7c 28 01 00    	mov    %edx,0x1287c(%eax)
 833b950:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833b957:	8b 45 08             	mov    0x8(%ebp),%eax
 833b95a:	8d 50 30             	lea    0x30(%eax),%edx
 833b95d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b960:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b964:	89 04 24             	mov    %eax,(%esp)
 833b967:	e8 60 5f 00 00       	call   83418cc <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 833b96c:	83 ec 04             	sub    $0x4,%esp
 833b96f:	eb 5c                	jmp    833b9cd <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x1c1>
 833b971:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 833b974:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b977:	89 04 24             	mov    %eax,(%esp)
 833b97a:	e8 91 b5 d8 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 833b97f:	8b 10                	mov    (%eax),%edx
 833b981:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b984:	8d 8b 68 2a 00 00    	lea    0x2a68(%ebx),%ecx
 833b98a:	89 54 c8 04          	mov    %edx,0x4(%eax,%ecx,8)
 833b98e:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 833b991:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b994:	89 04 24             	mov    %eax,(%esp)
 833b997:	e8 74 b5 d8 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 833b99c:	8b 50 04             	mov    0x4(%eax),%edx
 833b99f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b9a2:	8d 8b 68 2a 00 00    	lea    0x2a68(%ebx),%ecx
 833b9a8:	89 54 c8 08          	mov    %edx,0x8(%eax,%ecx,8)
 833b9ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833b9af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833b9b6:	00 
 833b9b7:	8d 55 dc             	lea    -0x24(%ebp),%edx
 833b9ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b9be:	89 04 24             	mov    %eax,(%esp)
 833b9c1:	e8 90 71 00 00       	call   8342b56 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEi>
 833b9c6:	83 ec 04             	sub    $0x4,%esp
 833b9c9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 833b9cd:	8b 45 08             	mov    0x8(%ebp),%eax
 833b9d0:	8d 50 30             	lea    0x30(%eax),%edx
 833b9d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833b9d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b9da:	89 04 24             	mov    %eax,(%esp)
 833b9dd:	e8 f4 b4 d8 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833b9e2:	83 ec 04             	sub    $0x4,%esp
 833b9e5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833b9e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b9ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833b9ef:	89 04 24             	mov    %eax,(%esp)
 833b9f2:	e8 05 b5 d8 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 833b9f7:	84 c0                	test   %al,%al
 833b9f9:	74 0d                	je     833ba08 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x1fc>
 833b9fb:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 833b9ff:	7f 07                	jg     833ba08 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x1fc>
 833ba01:	b8 01 00 00 00       	mov    $0x1,%eax
 833ba06:	eb 05                	jmp    833ba0d <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x201>
 833ba08:	b8 00 00 00 00       	mov    $0x0,%eax
 833ba0d:	84 c0                	test   %al,%al
 833ba0f:	0f 85 5c ff ff ff    	jne    833b971 <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY+0x165>
 833ba15:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ba18:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833ba1b:	89 90 40 53 01 00    	mov    %edx,0x15340(%eax)
 833ba21:	b8 01 00 00 00       	mov    $0x1,%eax
 833ba26:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833ba29:	83 c4 00             	add    $0x0,%esp
 833ba2c:	5b                   	pop    %ebx
 833ba2d:	5e                   	pop    %esi
 833ba2e:	5d                   	pop    %ebp
 833ba2f:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::GetCreatureItem @ 0x833b80c

/* user_creature::CCreatureMgr::GetCreatureItem(SIG_LOAD_INVENTORY*) const */

undefined4 __thiscall
user_creature::CCreatureMgr::GetCreatureItem(CCreatureMgr *this,SIG_LOAD_INVENTORY *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  Inven_Item local_65 [61];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_24 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_18 [4];
  int local_14;
  int *local_10;
  
  memset(param_1 + 0x12880,0,0x1ed8);
  Inven_Item::Inven_Item(local_65);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_20);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_24);
  local_14 = 0;
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20,(_Rb_tree_const_iterator *)local_24);
    if ((cVar2 == '\0') || (0x8c < local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20);
    local_10 = *(int **)(iVar6 + 4);
    (**(code **)(*local_10 + 0xc))
              (local_10,local_65,param_1 + local_14 * 0x38 + 0x12880,*(undefined4 *)(this + 0x1c));
    iVar6 = local_14;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20);
    uVar4 = CCreatureItem::getExpireTime(*(CCreatureItem **)(iVar3 + 4));
    *(undefined4 *)(param_1 + iVar6 * 0x38 + 0x128a8) = uVar4;
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
               local_20);
    local_14 = local_14 + 1;
  }
  *(int *)(param_1 + 0x1287c) = local_14;
  local_14 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_28);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28,
                       (_Rb_tree_const_iterator *)local_1c);
    iVar6 = local_14;
    if ((cVar2 == '\0') || (0x13 < local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar5 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28);
    iVar3 = local_14;
    *(undefined4 *)(param_1 + (iVar6 + 0x2a68) * 8 + 4) = *puVar5;
    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28);
    *(undefined4 *)(param_1 + (iVar3 + 0x2a68) * 8 + 8) = *(undefined4 *)(iVar6 + 4);
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_18,(int)local_28);
    local_14 = local_14 + 1;
  }
  *(int *)(param_1 + 0x15340) = local_14;
  return 1;
}

```

---

## GetCreatureItemId

```asm
// === 0833a638 user_creature::CCreatureMgr::GetCreatureItemId  [0x0833a638-0x833a65f] ===
 833a638:	55                   	push   %ebp
 833a639:	89 e5                	mov    %esp,%ebp
 833a63b:	83 ec 18             	sub    $0x18,%esp
 833a63e:	8b 45 08             	mov    0x8(%ebp),%eax
 833a641:	8b 40 18             	mov    0x18(%eax),%eax
 833a644:	85 c0                	test   %eax,%eax
 833a646:	74 10                	je     833a658 <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv+0x20>
 833a648:	8b 45 08             	mov    0x8(%ebp),%eax
 833a64b:	8b 40 18             	mov    0x18(%eax),%eax
 833a64e:	89 04 24             	mov    %eax,(%esp)
 833a651:	e8 4e 49 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833a656:	eb 05                	jmp    833a65d <_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv+0x25>
 833a658:	b8 00 00 00 00       	mov    $0x0,%eax
 833a65d:	c9                   	leave
 833a65e:	c3                   	ret
 833a65f:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GetCreatureItemId @ 0x833a638

/* user_creature::CCreatureMgr::GetCreatureItemId() const */

undefined4 __thiscall user_creature::CCreatureMgr::GetCreatureItemId(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
  }
  return uVar1;
}

```

---

## GetCreatureName

```asm
// === 0833a688 user_creature::CCreatureMgr::GetCreatureName  [0x0833a688-0x833a6af] ===
 833a688:	55                   	push   %ebp
 833a689:	89 e5                	mov    %esp,%ebp
 833a68b:	83 ec 18             	sub    $0x18,%esp
 833a68e:	8b 45 08             	mov    0x8(%ebp),%eax
 833a691:	8b 40 18             	mov    0x18(%eax),%eax
 833a694:	85 c0                	test   %eax,%eax
 833a696:	74 10                	je     833a6a8 <_ZNK13user_creature12CCreatureMgr15GetCreatureNameEv+0x20>
 833a698:	8b 45 08             	mov    0x8(%ebp),%eax
 833a69b:	8b 40 18             	mov    0x18(%eax),%eax
 833a69e:	89 04 24             	mov    %eax,(%esp)
 833a6a1:	e8 b2 49 00 00       	call   833f058 <_ZN13user_creature9CCreature7GetNameEv>
 833a6a6:	eb 05                	jmp    833a6ad <_ZNK13user_creature12CCreatureMgr15GetCreatureNameEv+0x25>
 833a6a8:	b8 60 d7 c2 08       	mov    $0x8c2d760,%eax
 833a6ad:	c9                   	leave
 833a6ae:	c3                   	ret
 833a6af:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GetCreatureName @ 0x833a688

/* user_creature::CCreatureMgr::GetCreatureName() const */

undefined * __thiscall user_creature::CCreatureMgr::GetCreatureName(CCreatureMgr *this)

{
  undefined *puVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    puVar1 = &DAT_08c2d760;
  }
  else {
    puVar1 = (undefined *)CCreature::GetName(*(CCreature **)(this + 0x18));
  }
  return puVar1;
}

```

---

## GetEquipedCreatureLevel

```asm
// === 0833a6b0 user_creature::CCreatureMgr::GetEquipedCreatureLevel  [0x0833a6b0-0x833a6d7] ===
 833a6b0:	55                   	push   %ebp
 833a6b1:	89 e5                	mov    %esp,%ebp
 833a6b3:	83 ec 18             	sub    $0x18,%esp
 833a6b6:	8b 45 08             	mov    0x8(%ebp),%eax
 833a6b9:	8b 40 18             	mov    0x18(%eax),%eax
 833a6bc:	85 c0                	test   %eax,%eax
 833a6be:	74 10                	je     833a6d0 <_ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv+0x20>
 833a6c0:	8b 45 08             	mov    0x8(%ebp),%eax
 833a6c3:	8b 40 18             	mov    0x18(%eax),%eax
 833a6c6:	89 04 24             	mov    %eax,(%esp)
 833a6c9:	e8 cc 49 00 00       	call   833f09a <_ZN13user_creature9CCreature8GetLevelEv>
 833a6ce:	eb 05                	jmp    833a6d5 <_ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv+0x25>
 833a6d0:	b8 00 00 00 00       	mov    $0x0,%eax
 833a6d5:	c9                   	leave
 833a6d6:	c3                   	ret
 833a6d7:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GetEquipedCreatureLevel @ 0x833a6b0

/* user_creature::CCreatureMgr::GetEquipedCreatureLevel() const */

undefined4 __thiscall user_creature::CCreatureMgr::GetEquipedCreatureLevel(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
  }
  return uVar1;
}

```

---

## GetExtraGold

```asm
// === 0833c31a user_creature::CCreatureMgr::GetExtraGold  [0x0833c31a-0x833c41d] ===
 833c31a:	55                   	push   %ebp
 833c31b:	89 e5                	mov    %esp,%ebp
 833c31d:	83 ec 28             	sub    $0x28,%esp
 833c320:	8b 45 08             	mov    0x8(%ebp),%eax
 833c323:	8b 40 18             	mov    0x18(%eax),%eax
 833c326:	85 c0                	test   %eax,%eax
 833c328:	0f 84 e8 00 00 00    	je     833c416 <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0xfc>
 833c32e:	8b 45 08             	mov    0x8(%ebp),%eax
 833c331:	8b 40 18             	mov    0x18(%eax),%eax
 833c334:	89 04 24             	mov    %eax,(%esp)
 833c337:	e8 3c c1 ff ff       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 833c33c:	84 c0                	test   %al,%al
 833c33e:	74 0a                	je     833c34a <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x30>
 833c340:	b8 00 00 00 00       	mov    $0x0,%eax
 833c345:	e9 d1 00 00 00       	jmp    833c41b <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x101>
 833c34a:	8b 45 08             	mov    0x8(%ebp),%eax
 833c34d:	8b 40 18             	mov    0x18(%eax),%eax
 833c350:	89 04 24             	mov    %eax,(%esp)
 833c353:	e8 82 2d 00 00       	call   833f0da <_ZN13user_creature9CCreature13GetCreatureIdEv>
 833c358:	83 e8 16             	sub    $0x16,%eax
 833c35b:	83 f8 2a             	cmp    $0x2a,%eax
 833c35e:	0f 87 b2 00 00 00    	ja     833c416 <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0xfc>
 833c364:	8b 04 85 f4 d9 c2 08 	mov    0x8c2d9f4(,%eax,4),%eax
 833c36b:	ff e0                	jmp    *%eax
 833c36d:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c370:	89 d0                	mov    %edx,%eax
 833c372:	c1 e0 02             	shl    $0x2,%eax
 833c375:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 833c378:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 833c37d:	89 c8                	mov    %ecx,%eax
 833c37f:	f7 ea                	imul   %edx
 833c381:	c1 fa 05             	sar    $0x5,%edx
 833c384:	89 c8                	mov    %ecx,%eax
 833c386:	c1 f8 1f             	sar    $0x1f,%eax
 833c389:	89 d1                	mov    %edx,%ecx
 833c38b:	29 c1                	sub    %eax,%ecx
 833c38d:	89 c8                	mov    %ecx,%eax
 833c38f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 833c392:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833c395:	e9 81 00 00 00       	jmp    833c41b <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x101>
 833c39a:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c39d:	89 d0                	mov    %edx,%eax
 833c39f:	01 c0                	add    %eax,%eax
 833c3a1:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 833c3a4:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 833c3a9:	89 c8                	mov    %ecx,%eax
 833c3ab:	f7 ea                	imul   %edx
 833c3ad:	c1 fa 05             	sar    $0x5,%edx
 833c3b0:	89 c8                	mov    %ecx,%eax
 833c3b2:	c1 f8 1f             	sar    $0x1f,%eax
 833c3b5:	89 d1                	mov    %edx,%ecx
 833c3b7:	29 c1                	sub    %eax,%ecx
 833c3b9:	89 c8                	mov    %ecx,%eax
 833c3bb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 833c3be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833c3c1:	eb 58                	jmp    833c41b <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x101>
 833c3c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c3c6:	89 d0                	mov    %edx,%eax
 833c3c8:	c1 e0 02             	shl    $0x2,%eax
 833c3cb:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 833c3ce:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 833c3d3:	89 c8                	mov    %ecx,%eax
 833c3d5:	f7 ea                	imul   %edx
 833c3d7:	c1 fa 05             	sar    $0x5,%edx
 833c3da:	89 c8                	mov    %ecx,%eax
 833c3dc:	c1 f8 1f             	sar    $0x1f,%eax
 833c3df:	89 d1                	mov    %edx,%ecx
 833c3e1:	29 c1                	sub    %eax,%ecx
 833c3e3:	89 c8                	mov    %ecx,%eax
 833c3e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833c3e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833c3eb:	eb 2e                	jmp    833c41b <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x101>
 833c3ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c3f0:	89 d0                	mov    %edx,%eax
 833c3f2:	01 c0                	add    %eax,%eax
 833c3f4:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 833c3f7:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 833c3fc:	89 c8                	mov    %ecx,%eax
 833c3fe:	f7 ea                	imul   %edx
 833c400:	c1 fa 05             	sar    $0x5,%edx
 833c403:	89 c8                	mov    %ecx,%eax
 833c405:	c1 f8 1f             	sar    $0x1f,%eax
 833c408:	89 d1                	mov    %edx,%ecx
 833c40a:	29 c1                	sub    %eax,%ecx
 833c40c:	89 c8                	mov    %ecx,%eax
 833c40e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833c411:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c414:	eb 05                	jmp    833c41b <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi+0x101>
 833c416:	b8 00 00 00 00       	mov    $0x0,%eax
 833c41b:	c9                   	leave
 833c41c:	c3                   	ret
 833c41d:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GetExtraGold @ 0x833c31a

/* user_creature::CCreatureMgr::GetExtraGold(int) const */

int __thiscall user_creature::CCreatureMgr::GetExtraGold(CCreatureMgr *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x18) == 0) {
switchD_0833c36b_caseD_19:
    iVar3 = 0;
  }
  else {
    cVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      return 0;
    }
    uVar2 = CCreature::GetCreatureId(*(CCreature **)(this + 0x18));
    switch(uVar2) {
    case 0x16:
    case 0x17:
    case 0x18:
      iVar3 = (param_1 * 5) / 100;
      break;
    default:
      goto switchD_0833c36b_caseD_19;
    case 0x2a:
    case 0x3f:
      iVar3 = (param_1 * 3) / 100;
      break;
    case 0x36:
    case 0x37:
    case 0x38:
      iVar3 = (param_1 * 3) / 100;
      break;
    case 0x40:
      iVar3 = (param_1 * 5) / 100;
    }
  }
  return iVar3;
}

```

---

## GetOverSkillExtraGold

```asm
// === 0833c6f6 user_creature::CCreatureMgr::GetOverSkillExtraGold  [0x0833c6f6-0x833c77d] ===
 833c6f6:	55                   	push   %ebp
 833c6f7:	89 e5                	mov    %esp,%ebp
 833c6f9:	83 ec 18             	sub    $0x18,%esp
 833c6fc:	8b 45 08             	mov    0x8(%ebp),%eax
 833c6ff:	8b 40 18             	mov    0x18(%eax),%eax
 833c702:	85 c0                	test   %eax,%eax
 833c704:	74 71                	je     833c777 <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x81>
 833c706:	8b 45 08             	mov    0x8(%ebp),%eax
 833c709:	8b 40 18             	mov    0x18(%eax),%eax
 833c70c:	89 04 24             	mov    %eax,(%esp)
 833c70f:	e8 64 bd ff ff       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 833c714:	84 c0                	test   %al,%al
 833c716:	74 07                	je     833c71f <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x29>
 833c718:	b8 00 00 00 00       	mov    $0x0,%eax
 833c71d:	eb 5d                	jmp    833c77c <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x86>
 833c71f:	8b 45 08             	mov    0x8(%ebp),%eax
 833c722:	8b 40 18             	mov    0x18(%eax),%eax
 833c725:	89 04 24             	mov    %eax,(%esp)
 833c728:	e8 77 28 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833c72d:	3d 8a f6 00 00       	cmp    $0xf68a,%eax
 833c732:	0f 94 c0             	sete   %al
 833c735:	84 c0                	test   %al,%al
 833c737:	74 3e                	je     833c777 <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x81>
 833c739:	8b 45 08             	mov    0x8(%ebp),%eax
 833c73c:	8b 40 18             	mov    0x18(%eax),%eax
 833c73f:	89 04 24             	mov    %eax,(%esp)
 833c742:	e8 9f 29 00 00       	call   833f0e6 <_ZN13user_creature9CCreature16GetOverSkillTimeEv>
 833c747:	89 04 24             	mov    %eax,(%esp)
 833c74a:	e8 0f 0f 00 00       	call   833d65e <_ZN13user_creature14COverSkillTime9checkTimeEv>
 833c74f:	84 c0                	test   %al,%al
 833c751:	74 24                	je     833c777 <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x81>
 833c753:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c756:	89 d0                	mov    %edx,%eax
 833c758:	c1 e0 02             	shl    $0x2,%eax
 833c75b:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 833c75e:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 833c763:	89 c8                	mov    %ecx,%eax
 833c765:	f7 ea                	imul   %edx
 833c767:	c1 fa 05             	sar    $0x5,%edx
 833c76a:	89 c8                	mov    %ecx,%eax
 833c76c:	c1 f8 1f             	sar    $0x1f,%eax
 833c76f:	89 d1                	mov    %edx,%ecx
 833c771:	29 c1                	sub    %eax,%ecx
 833c773:	89 c8                	mov    %ecx,%eax
 833c775:	eb 05                	jmp    833c77c <_ZNK13user_creature12CCreatureMgr21GetOverSkillExtraGoldEi+0x86>
 833c777:	b8 00 00 00 00       	mov    $0x0,%eax
 833c77c:	c9                   	leave
 833c77d:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::GetOverSkillExtraGold @ 0x833c6f6

/* user_creature::CCreatureMgr::GetOverSkillExtraGold(int) const */

int __thiscall user_creature::CCreatureMgr::GetOverSkillExtraGold(CCreatureMgr *this,int param_1)

{
  char cVar1;
  int iVar2;
  COverSkillTime *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    cVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      return 0;
    }
    iVar2 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
    if (iVar2 == 0xf68a) {
      this_00 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      cVar1 = COverSkillTime::checkTime(this_00);
      if (cVar1 != '\0') {
        return (param_1 * 5) / 100;
      }
    }
  }
  return 0;
}

```

---

## GetRemainDate

```asm
// === 0833d78e user_creature::CCreatureMgr::GetRemainDate  [0x0833d78e-0x833d7dd] ===
 833d78e:	55                   	push   %ebp
 833d78f:	89 e5                	mov    %esp,%ebp
 833d791:	83 ec 28             	sub    $0x28,%esp
 833d794:	8b 45 08             	mov    0x8(%ebp),%eax
 833d797:	8b 40 2c             	mov    0x2c(%eax),%eax
 833d79a:	83 f8 ff             	cmp    $0xffffffff,%eax
 833d79d:	74 08                	je     833d7a7 <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii+0x19>
 833d79f:	8b 45 08             	mov    0x8(%ebp),%eax
 833d7a2:	8b 40 2c             	mov    0x2c(%eax),%eax
 833d7a5:	eb 34                	jmp    833d7db <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii+0x4d>
 833d7a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d7aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 833d7b1:	89 04 24             	mov    %eax,(%esp)
 833d7b4:	e8 d9 ba ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833d7b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833d7bc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833d7c0:	75 07                	jne    833d7c9 <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii+0x3b>
 833d7c2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 833d7c7:	eb 12                	jmp    833d7db <_ZNK13user_creature12CCreatureMgr13GetRemainDateEii+0x4d>
 833d7c9:	8b 45 10             	mov    0x10(%ebp),%eax
 833d7cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d7d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833d7d3:	89 04 24             	mov    %eax,(%esp)
 833d7d6:	e8 3b 18 00 00       	call   833f016 <_ZNK13user_creature13CCreatureItem13GetRemainDateEi>
 833d7db:	c9                   	leave
 833d7dc:	c3                   	ret
 833d7dd:	90                   	nop

```

```c
// user_creature::CCreatureMgr::GetRemainDate @ 0x833d78e

/* user_creature::CCreatureMgr::GetRemainDate(int, int) const */

undefined4 __thiscall
user_creature::CCreatureMgr::GetRemainDate(CCreatureMgr *this,int param_1,int param_2)

{
  CCreatureItem *this_00;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x2c) == -1) {
    this_00 = (CCreatureItem *)FindCreatureItem((int)this);
    if (this_00 == (CCreatureItem *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = CCreatureItem::GetRemainDate(this_00,param_2);
    }
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x2c);
  }
  return uVar1;
}

```

---

## Hatch

```asm
// === 08339fa0 user_creature::CCreatureMgr::Hatch  [0x08339fa0-0x833a459] ===
 8339fa0:	55                   	push   %ebp
 8339fa1:	89 e5                	mov    %esp,%ebp
 8339fa3:	56                   	push   %esi
 8339fa4:	53                   	push   %ebx
 8339fa5:	83 ec 70             	sub    $0x70,%esp
 8339fa8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8339faf:	8b 45 08             	mov    0x8(%ebp),%eax
 8339fb2:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339fb5:	c7 44 24 0c 69 00 00 	movl   $0x69,0xc(%esp)
 8339fbc:	00 
 8339fbd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8339fc4:	00 
 8339fc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339fc9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8339fcc:	89 04 24             	mov    %eax,(%esp)
 8339fcf:	e8 56 63 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8339fd4:	8b 55 08             	mov    0x8(%ebp),%edx
 8339fd7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8339fda:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8339fdd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8339fe1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339fe5:	89 04 24             	mov    %eax,(%esp)
 8339fe8:	e8 97 89 00 00       	call   8342984 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8339fed:	83 ec 04             	sub    $0x4,%esp
 8339ff0:	8b 55 08             	mov    0x8(%ebp),%edx
 8339ff3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8339ff6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339ffa:	89 04 24             	mov    %eax,(%esp)
 8339ffd:	e8 ae 89 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833a002:	83 ec 04             	sub    $0x4,%esp
 833a005:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833a008:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a00c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833a00f:	89 04 24             	mov    %eax,(%esp)
 833a012:	e8 bf 89 00 00       	call   83429d6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEeqERKS6_>
 833a017:	84 c0                	test   %al,%al
 833a019:	74 1d                	je     833a038 <_ZN13user_creature12CCreatureMgr5HatchEi+0x98>
 833a01b:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 833a022:	00 
 833a023:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a026:	89 04 24             	mov    %eax,(%esp)
 833a029:	e8 0a 65 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 833a02e:	bb 00 00 00 00       	mov    $0x0,%ebx
 833a033:	e9 0b 04 00 00       	jmp    833a443 <_ZN13user_creature12CCreatureMgr5HatchEi+0x4a3>
 833a038:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833a03b:	89 04 24             	mov    %eax,(%esp)
 833a03e:	e8 a7 89 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833a043:	8b 40 04             	mov    0x4(%eax),%eax
 833a046:	89 45 e8             	mov    %eax,-0x18(%ebp)
 833a049:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833a04c:	89 04 24             	mov    %eax,(%esp)
 833a04f:	e8 44 4f 00 00       	call   833ef98 <_ZN13user_creature13CCreatureItem19GetCreatureItemTypeEv>
 833a054:	85 c0                	test   %eax,%eax
 833a056:	0f 95 c0             	setne  %al
 833a059:	84 c0                	test   %al,%al
 833a05b:	74 1d                	je     833a07a <_ZN13user_creature12CCreatureMgr5HatchEi+0xda>
 833a05d:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 833a064:	00 
 833a065:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a068:	89 04 24             	mov    %eax,(%esp)
 833a06b:	e8 c8 64 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 833a070:	bb 00 00 00 00       	mov    $0x0,%ebx
 833a075:	e9 c9 03 00 00       	jmp    833a443 <_ZN13user_creature12CCreatureMgr5HatchEi+0x4a3>
 833a07a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833a07d:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a081:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833a084:	89 04 24             	mov    %eax,(%esp)
 833a087:	e8 9e f0 ff ff       	call   833912a <_ZN13user_creature4CEgg5HatchEPi>
 833a08c:	83 f0 01             	xor    $0x1,%eax
 833a08f:	84 c0                	test   %al,%al
 833a091:	74 1d                	je     833a0b0 <_ZN13user_creature12CCreatureMgr5HatchEi+0x110>
 833a093:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 833a09a:	00 
 833a09b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a09e:	89 04 24             	mov    %eax,(%esp)
 833a0a1:	e8 92 64 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 833a0a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 833a0ab:	e9 93 03 00 00       	jmp    833a443 <_ZN13user_creature12CCreatureMgr5HatchEi+0x4a3>
 833a0b0:	e8 60 56 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 833a0b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833a0bc:	00 
 833a0bd:	89 04 24             	mov    %eax,(%esp)
 833a0c0:	e8 b7 54 00 00       	call   833f57c <_ZN13user_creature20CCreatureItemFactory19AcquireCreatureItemENS_18CREATURE_ITME_TYPEE>
 833a0c5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833a0c8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 833a0cc:	75 1d                	jne    833a0eb <_ZN13user_creature12CCreatureMgr5HatchEi+0x14b>
 833a0ce:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 833a0d5:	00 
 833a0d6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a0d9:	89 04 24             	mov    %eax,(%esp)
 833a0dc:	e8 57 64 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 833a0e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 833a0e6:	e9 58 03 00 00       	jmp    833a443 <_ZN13user_creature12CCreatureMgr5HatchEi+0x4a3>
 833a0eb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 833a0ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a0f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a0f5:	89 04 24             	mov    %eax,(%esp)
 833a0f8:	e8 23 4e 00 00       	call   833ef20 <_ZN13user_creature13CCreatureItem3SetEPS0_>
 833a0fd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 833a100:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a104:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a107:	89 04 24             	mov    %eax,(%esp)
 833a10a:	e8 9f d4 ff ff       	call   83375ae <_ZN13user_creature9CCreature9SetItemIdEi>
 833a10f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a112:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833a119:	00 
 833a11a:	89 04 24             	mov    %eax,(%esp)
 833a11d:	e8 c0 4e 00 00       	call   833efe2 <_ZN13user_creature13CCreatureItem19SetCreatureItemTypeENS_18CREATURE_ITME_TYPEE>
 833a122:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 833a129:	00 
 833a12a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a12d:	89 04 24             	mov    %eax,(%esp)
 833a130:	e8 3b 4f 00 00       	call   833f070 <_ZN13user_creature9CCreature10SetStomachEi>
 833a135:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 833a138:	e8 5e 20 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833a13d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 833a141:	89 04 24             	mov    %eax,(%esp)
 833a144:	e8 e9 58 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 833a149:	89 45 ec             	mov    %eax,-0x14(%ebp)
 833a14c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833a153:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a156:	89 04 24             	mov    %eax,(%esp)
 833a159:	e8 02 6b dd ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 833a15e:	85 c0                	test   %eax,%eax
 833a160:	75 16                	jne    833a178 <_ZN13user_creature12CCreatureMgr5HatchEi+0x1d8>
 833a162:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a165:	89 04 24             	mov    %eax,(%esp)
 833a168:	e8 99 71 db ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 833a16d:	85 c0                	test   %eax,%eax
 833a16f:	74 07                	je     833a178 <_ZN13user_creature12CCreatureMgr5HatchEi+0x1d8>
 833a171:	b8 01 00 00 00       	mov    $0x1,%eax
 833a176:	eb 05                	jmp    833a17d <_ZN13user_creature12CCreatureMgr5HatchEi+0x1dd>
 833a178:	b8 00 00 00 00       	mov    $0x0,%eax
 833a17d:	84 c0                	test   %al,%al
 833a17f:	74 1d                	je     833a19e <_ZN13user_creature12CCreatureMgr5HatchEi+0x1fe>
 833a181:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a184:	89 04 24             	mov    %eax,(%esp)
 833a187:	e8 7a 71 db ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 833a18c:	89 c3                	mov    %eax,%ebx
 833a18e:	e8 6f 26 25 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 833a193:	89 da                	mov    %ebx,%edx
 833a195:	29 c2                	sub    %eax,%edx
 833a197:	89 d0                	mov    %edx,%eax
 833a199:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833a19c:	eb 1e                	jmp    833a1bc <_ZN13user_creature12CCreatureMgr5HatchEi+0x21c>
 833a19e:	e8 5f 26 25 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 833a1a3:	89 c3                	mov    %eax,%ebx
 833a1a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a1a8:	89 04 24             	mov    %eax,(%esp)
 833a1ab:	e8 b0 6a dd ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 833a1b0:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 833a1b6:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 833a1b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833a1bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a1bf:	89 04 24             	mov    %eax,(%esp)
 833a1c2:	e8 99 6a dd ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 833a1c7:	85 c0                	test   %eax,%eax
 833a1c9:	75 16                	jne    833a1e1 <_ZN13user_creature12CCreatureMgr5HatchEi+0x241>
 833a1cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833a1ce:	89 04 24             	mov    %eax,(%esp)
 833a1d1:	e8 30 71 db ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 833a1d6:	85 c0                	test   %eax,%eax
 833a1d8:	75 07                	jne    833a1e1 <_ZN13user_creature12CCreatureMgr5HatchEi+0x241>
 833a1da:	b8 01 00 00 00       	mov    $0x1,%eax
 833a1df:	eb 05                	jmp    833a1e6 <_ZN13user_creature12CCreatureMgr5HatchEi+0x246>
 833a1e1:	b8 00 00 00 00       	mov    $0x0,%eax
 833a1e6:	84 c0                	test   %al,%al
 833a1e8:	74 07                	je     833a1f1 <_ZN13user_creature12CCreatureMgr5HatchEi+0x251>
 833a1ea:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833a1f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a1f4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833a1f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a1fb:	89 04 24             	mov    %eax,(%esp)
 833a1fe:	e8 f9 4d 00 00       	call   833effc <_ZN13user_creature13CCreatureItem13SetExpireTimeEi>
 833a203:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833a206:	89 04 24             	mov    %eax,(%esp)
 833a209:	e8 b0 4d 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833a20e:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a212:	8b 45 08             	mov    0x8(%ebp),%eax
 833a215:	89 04 24             	mov    %eax,(%esp)
 833a218:	e8 37 06 00 00       	call   833a854 <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi>
 833a21d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a220:	89 04 24             	mov    %eax,(%esp)
 833a223:	e8 96 4d 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833a228:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 833a22b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833a22f:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a233:	8b 45 08             	mov    0x8(%ebp),%eax
 833a236:	89 04 24             	mov    %eax,(%esp)
 833a239:	e8 40 05 00 00       	call   833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>
 833a23e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833a245:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a248:	89 04 24             	mov    %eax,(%esp)
 833a24b:	e8 7a 4d 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833a250:	89 c3                	mov    %eax,%ebx
 833a252:	8b 45 08             	mov    0x8(%ebp),%eax
 833a255:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a258:	89 04 24             	mov    %eax,(%esp)
 833a25b:	e8 2e 00 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 833a260:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833a264:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833a26b:	00 
 833a26c:	89 04 24             	mov    %eax,(%esp)
 833a26f:	e8 3a 20 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 833a274:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833a277:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833a27a:	c6 00 00             	movb   $0x0,(%eax)
 833a27d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a280:	89 04 24             	mov    %eax,(%esp)
 833a283:	e8 1c 4d 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833a288:	89 c2                	mov    %eax,%edx
 833a28a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833a28d:	89 50 02             	mov    %edx,0x2(%eax)
 833a290:	8b 45 08             	mov    0x8(%ebp),%eax
 833a293:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a296:	89 44 24 08          	mov    %eax,0x8(%esp)
 833a29a:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833a2a1:	00 
 833a2a2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833a2a5:	89 04 24             	mov    %eax,(%esp)
 833a2a8:	e8 01 56 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833a2ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a2b0:	89 04 24             	mov    %eax,(%esp)
 833a2b3:	e8 ec 4c 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833a2b8:	89 c3                	mov    %eax,%ebx
 833a2ba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a2bd:	89 04 24             	mov    %eax,(%esp)
 833a2c0:	e8 f9 4c 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833a2c5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833a2c9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 833a2d0:	00 
 833a2d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a2d5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833a2d8:	89 04 24             	mov    %eax,(%esp)
 833a2db:	e8 e2 59 00 00       	call   833fcc2 <_ZN13user_creature12CDBMsgSender13HatchCreatureEiii>
 833a2e0:	83 f0 01             	xor    $0x1,%eax
 833a2e3:	84 c0                	test   %al,%al
 833a2e5:	74 68                	je     833a34f <_ZN13user_creature12CCreatureMgr5HatchEi+0x3af>
 833a2e7:	8b 45 08             	mov    0x8(%ebp),%eax
 833a2ea:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a2ed:	89 04 24             	mov    %eax,(%esp)
 833a2f0:	e8 87 00 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833a2f5:	0f b7 d8             	movzwl %ax,%ebx
 833a2f8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833a2ff:	00 
 833a300:	c7 44 24 08 1a 0b 00 	movl   $0xb1a,0x8(%esp)
 833a307:	00 
 833a308:	c7 44 24 04 e0 f1 c2 	movl   $0x8c2f1e0,0x4(%esp)
 833a30f:	08 
 833a310:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833a313:	89 04 24             	mov    %eax,(%esp)
 833a316:	e8 fd 53 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833a31b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833a31f:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833a326:	08 
 833a327:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833a32a:	89 04 24             	mov    %eax,(%esp)
 833a32d:	e8 56 54 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833a332:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 833a339:	00 
 833a33a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a33d:	89 04 24             	mov    %eax,(%esp)
 833a340:	e8 f3 61 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 833a345:	bb 00 00 00 00       	mov    $0x0,%ebx
 833a34a:	e9 cc 00 00 00       	jmp    833a41b <_ZN13user_creature12CCreatureMgr5HatchEi+0x47b>
 833a34f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a352:	89 04 24             	mov    %eax,(%esp)
 833a355:	e8 64 4c 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833a35a:	89 c3                	mov    %eax,%ebx
 833a35c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a35f:	89 04 24             	mov    %eax,(%esp)
 833a362:	e8 3d 4c 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833a367:	8b 55 08             	mov    0x8(%ebp),%edx
 833a36a:	8b 52 1c             	mov    0x1c(%edx),%edx
 833a36d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833a371:	89 44 24 08          	mov    %eax,0x8(%esp)
 833a375:	c7 44 24 04 f7 d8 c2 	movl   $0x8c2d8f7,0x4(%esp)
 833a37c:	08 
 833a37d:	89 14 24             	mov    %edx,(%esp)
 833a380:	e8 79 25 34 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 833a385:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833a388:	89 04 24             	mov    %eax,(%esp)
 833a38b:	e8 c0 55 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833a390:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a393:	89 04 24             	mov    %eax,(%esp)
 833a396:	e8 07 62 00 00       	call   83405a2 <_ZN13user_creature17CPacketRespondent5SetOkEv>
 833a39b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a39e:	89 04 24             	mov    %eax,(%esp)
 833a3a1:	e8 3a 60 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 833a3a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a3a9:	89 04 24             	mov    %eax,(%esp)
 833a3ac:	e8 19 4c 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833a3b1:	8b 55 08             	mov    0x8(%ebp),%edx
 833a3b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 833a3b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a3bc:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a3bf:	89 04 24             	mov    %eax,(%esp)
 833a3c2:	e8 19 66 00 00       	call   83409e0 <_ZN13user_creature17CPacketRespondent30MakeNotipacketCreatureItemListEPKSt3mapIiPNS_13CCreatureItemESt4lessIiESaISt4pairIKiS3_EEEi>
 833a3c7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a3ca:	89 04 24             	mov    %eax,(%esp)
 833a3cd:	e8 0e 60 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 833a3d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 833a3d5:	89 04 24             	mov    %eax,(%esp)
 833a3d8:	e8 ed 4b 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833a3dd:	8b 55 08             	mov    0x8(%ebp),%edx
 833a3e0:	8b 52 1c             	mov    0x1c(%edx),%edx
 833a3e3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 833a3e7:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 833a3ee:	00 
 833a3ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833a3f6:	00 
 833a3f7:	89 14 24             	mov    %edx,(%esp)
 833a3fa:	e8 5b 22 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 833a3ff:	bb 01 00 00 00       	mov    $0x1,%ebx
 833a404:	eb 15                	jmp    833a41b <_ZN13user_creature12CCreatureMgr5HatchEi+0x47b>
 833a406:	89 d3                	mov    %edx,%ebx
 833a408:	89 c6                	mov    %eax,%esi
 833a40a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833a40d:	89 04 24             	mov    %eax,(%esp)
 833a410:	e8 c3 54 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833a415:	89 f0                	mov    %esi,%eax
 833a417:	89 da                	mov    %ebx,%edx
 833a419:	eb 0d                	jmp    833a428 <_ZN13user_creature12CCreatureMgr5HatchEi+0x488>
 833a41b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 833a41e:	89 04 24             	mov    %eax,(%esp)
 833a421:	e8 b2 54 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833a426:	eb 1b                	jmp    833a443 <_ZN13user_creature12CCreatureMgr5HatchEi+0x4a3>
 833a428:	89 d3                	mov    %edx,%ebx
 833a42a:	89 c6                	mov    %eax,%esi
 833a42c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a42f:	89 04 24             	mov    %eax,(%esp)
 833a432:	e8 33 5f 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833a437:	89 f0                	mov    %esi,%eax
 833a439:	89 da                	mov    %ebx,%edx
 833a43b:	89 04 24             	mov    %eax,(%esp)
 833a43e:	e8 0d 93 7a 00       	call   8ae3750 <_Unwind_Resume>
 833a443:	8d 45 a0             	lea    -0x60(%ebp),%eax
 833a446:	89 04 24             	mov    %eax,(%esp)
 833a449:	e8 1c 5f 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833a44e:	89 d8                	mov    %ebx,%eax
 833a450:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833a453:	83 c4 00             	add    $0x0,%esp
 833a456:	5b                   	pop    %ebx
 833a457:	5e                   	pop    %esi
 833a458:	5d                   	pop    %ebp
 833a459:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::Hatch @ 0x8339fa0

/* user_creature::CCreatureMgr::Hatch(int) */

bool user_creature::CCreatureMgr::Hatch(int param_1)

{
  char cVar1;
  int iVar2;
  CCreatureItemFactory *pCVar3;
  CDataManager *this;
  CInventory *this_00;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  CPacketRespondent local_64 [32];
  CDBMsgSender local_44 [8];
  int local_3c;
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_38 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_34 [4];
  cMyTrace local_30 [16];
  CCreatureItem *local_20;
  CEgg *local_1c;
  CItem *local_18;
  int local_14;
  undefined1 *local_10;
  
  local_20 = (CCreatureItem *)0x0;
  CPacketRespondent::CPacketRespondent(local_64,*(CUser **)(param_1 + 0x1c),1,0x69);
                    /* try { // try from 08339fe8 to 0833a2ac has its CatchHandler @ 0833a428 */
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find((int *)local_38);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator==
                    (local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 != '\0') {
    CPacketRespondent::SetError(local_64,0x15);
    bVar8 = false;
    goto LAB_0833a443;
  }
  iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                    (local_38);
  local_1c = *(CEgg **)(iVar2 + 4);
  iVar2 = CCreatureItem::GetCreatureItemType((CCreatureItem *)local_1c);
  if (iVar2 != 0) {
    CPacketRespondent::SetError(local_64,0x17);
    bVar8 = false;
    goto LAB_0833a443;
  }
  cVar1 = CEgg::Hatch(local_1c,&local_3c);
  if (cVar1 != '\x01') {
    CPacketRespondent::SetError(local_64,0x11);
    bVar8 = false;
    goto LAB_0833a443;
  }
  pCVar3 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  local_20 = (CCreatureItem *)CCreatureItemFactory::AcquireCreatureItem(pCVar3,1);
  if (local_20 == (CCreatureItem *)0x0) {
    CPacketRespondent::SetError(local_64,0x16);
    bVar8 = false;
    goto LAB_0833a443;
  }
  CCreatureItem::Set(local_20,(CCreatureItem *)local_1c);
  CCreature::SetItemId((CCreature *)local_20,local_3c);
  CCreatureItem::SetCreatureItemType(local_20,1);
  CCreature::SetStomach((CCreature *)local_20,100);
  this = (CDataManager *)G_CDataManager();
  local_18 = (CItem *)CDataManager::find_item(this,local_3c);
  local_14 = 0;
  iVar2 = CItem::getUsablePeriod(local_18);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate(local_18);
    if (iVar2 == 0) goto LAB_0833a178;
    bVar8 = true;
  }
  else {
LAB_0833a178:
    bVar8 = false;
  }
  if (bVar8) {
    iVar2 = CItem::getExpirationDate(local_18);
    local_14 = OS_API::GetDateTimeTick();
    local_14 = iVar2 - local_14;
  }
  else {
    iVar2 = OS_API::GetDateTimeTick();
    iVar5 = CItem::getUsablePeriod(local_18);
    local_14 = iVar2 + iVar5 * 0x15180;
  }
  iVar2 = CItem::getUsablePeriod(local_18);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate(local_18);
    if (iVar2 != 0) goto LAB_0833a1e1;
    bVar8 = true;
  }
  else {
LAB_0833a1e1:
    bVar8 = false;
  }
  if (bVar8) {
    local_14 = 0;
  }
  CCreatureItem::SetExpireTime(local_20,local_14);
  iVar2 = CCreatureItem::GetUid((CCreatureItem *)local_1c);
  UnregisterCreatureItem((CCreatureMgr *)param_1,iVar2);
  iVar2 = CCreatureItem::GetUid(local_20);
  RegisterCreatureItem((CCreatureMgr *)param_1,local_20,iVar2);
  local_10 = (undefined1 *)0x0;
  iVar2 = CCreatureItem::GetSlotNo(local_20);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(param_1 + 0x1c))
  ;
  local_10 = (undefined1 *)CInventory::GetInvenRef(this_00,3,iVar2);
  *local_10 = 0;
  uVar4 = CCreatureItem::GetItemId(local_20);
  *(undefined4 *)(local_10 + 2) = uVar4;
  CDBMsgSender::CDBMsgSender(local_44,0x8a,*(undefined4 *)(param_1 + 0x1c));
  iVar2 = CCreatureItem::GetItemId(local_20);
  iVar5 = CCreatureItem::GetUid(local_20);
                    /* try { // try from 0833a2db to 0833a3fe has its CatchHandler @ 0833a406 */
  cVar1 = CDBMsgSender::HatchCreature(local_44,iVar5,1,iVar2);
  bVar8 = cVar1 == '\x01';
  if (bVar8) {
    uVar4 = CCreatureItem::GetUid(local_20);
    uVar7 = CCreatureItem::GetItemId(local_20);
    CUser::LogHistory(*(CUser **)(param_1 + 0x1c),"Hatch,%d,%d",uVar7,uVar4);
    CDBMsgSender::Send(local_44);
    CPacketRespondent::SetOk(local_64);
    CPacketRespondent::Send(local_64);
    iVar2 = CCreatureItem::GetSlotNo(local_20);
    CPacketRespondent::MakeNotipacketCreatureItemList(local_64,(map *)param_1,iVar2);
    CPacketRespondent::Send(local_64);
    uVar4 = CCreatureItem::GetSlotNo(local_20);
    CUser::SendUpdateItemList(*(CUser **)(param_1 + 0x1c),1,7,uVar4);
  }
  else {
    uVar6 = CUser::get_unique_id(*(CUser **)(param_1 + 0x1c));
    cMyTrace::cMyTrace(local_30,"bool user_creature::CCreatureMgr::Hatch(int)",0xb1a,5);
    cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
    CPacketRespondent::SetError(local_64,2);
  }
                    /* try { // try from 0833a421 to 0833a425 has its CatchHandler @ 0833a428 */
  CDBMsgSender::~CDBMsgSender(local_44);
LAB_0833a443:
  CPacketRespondent::~CPacketRespondent(local_64);
  return bVar8;
}

```

---

## InsertCreatureItem

```asm
// === 0833b204 user_creature::CCreatureMgr::InsertCreatureItem  [0x0833b204-0x833b38b] ===
 833b204:	55                   	push   %ebp
 833b205:	89 e5                	mov    %esp,%ebp
 833b207:	56                   	push   %esi
 833b208:	53                   	push   %ebx
 833b209:	83 ec 40             	sub    $0x40,%esp
 833b20c:	8b 45 10             	mov    0x10(%ebp),%eax
 833b20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b213:	8b 45 08             	mov    0x8(%ebp),%eax
 833b216:	89 04 24             	mov    %eax,(%esp)
 833b219:	e8 4e e0 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833b21e:	83 f0 01             	xor    $0x1,%eax
 833b221:	84 c0                	test   %al,%al
 833b223:	74 0a                	je     833b22f <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x2b>
 833b225:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b22a:	e9 54 01 00 00       	jmp    833b383 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x17f>
 833b22f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b232:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833b236:	3c 05                	cmp    $0x5,%al
 833b238:	74 0a                	je     833b244 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x40>
 833b23a:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b23f:	e9 3f 01 00 00       	jmp    833b383 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x17f>
 833b244:	8b 45 08             	mov    0x8(%ebp),%eax
 833b247:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b24a:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b24e:	c7 44 24 04 87 00 00 	movl   $0x87,0x4(%esp)
 833b255:	00 
 833b256:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833b259:	89 04 24             	mov    %eax,(%esp)
 833b25c:	e8 4d 46 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833b261:	8b 45 08             	mov    0x8(%ebp),%eax
 833b264:	89 04 24             	mov    %eax,(%esp)
 833b267:	e8 86 66 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833b26c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833b26f:	8b 45 08             	mov    0x8(%ebp),%eax
 833b272:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b275:	8b 55 1c             	mov    0x1c(%ebp),%edx
 833b278:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 833b27c:	8b 55 18             	mov    0x18(%ebp),%edx
 833b27f:	89 54 24 18          	mov    %edx,0x18(%esp)
 833b283:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833b286:	89 54 24 14          	mov    %edx,0x14(%esp)
 833b28a:	8b 55 14             	mov    0x14(%ebp),%edx
 833b28d:	89 54 24 10          	mov    %edx,0x10(%esp)
 833b291:	8b 55 10             	mov    0x10(%ebp),%edx
 833b294:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833b298:	8b 55 0c             	mov    0xc(%ebp),%edx
 833b29b:	89 54 24 08          	mov    %edx,0x8(%esp)
 833b29f:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b2a3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833b2a6:	89 04 24             	mov    %eax,(%esp)
 833b2a9:	e8 fc 47 00 00       	call   833faaa <_ZN13user_creature12CDBMsgSender18InsertCreatureItemEP5CUserP10Inven_Itemiiiii>
 833b2ae:	83 f0 01             	xor    $0x1,%eax
 833b2b1:	84 c0                	test   %al,%al
 833b2b3:	74 52                	je     833b307 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x103>
 833b2b5:	8b 45 08             	mov    0x8(%ebp),%eax
 833b2b8:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b2bb:	89 04 24             	mov    %eax,(%esp)
 833b2be:	e8 b9 f0 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833b2c3:	0f b7 d8             	movzwl %ax,%ebx
 833b2c6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833b2cd:	00 
 833b2ce:	c7 44 24 08 af 0c 00 	movl   $0xcaf,0x8(%esp)
 833b2d5:	00 
 833b2d6:	c7 44 24 04 60 ee c2 	movl   $0x8c2ee60,0x4(%esp)
 833b2dd:	08 
 833b2de:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833b2e1:	89 04 24             	mov    %eax,(%esp)
 833b2e4:	e8 2f 44 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833b2e9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b2ed:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833b2f4:	08 
 833b2f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833b2f8:	89 04 24             	mov    %eax,(%esp)
 833b2fb:	e8 88 44 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833b300:	bb 00 00 00 00       	mov    $0x0,%ebx
 833b305:	eb 71                	jmp    833b378 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x174>
 833b307:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833b30a:	89 04 24             	mov    %eax,(%esp)
 833b30d:	e8 3e 46 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833b312:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833b319:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 833b31d:	75 19                	jne    833b338 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x134>
 833b31f:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 833b323:	74 13                	je     833b338 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x134>
 833b325:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 833b328:	e8 d5 14 25 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 833b32d:	89 da                	mov    %ebx,%edx
 833b32f:	29 c2                	sub    %eax,%edx
 833b331:	89 d0                	mov    %edx,%eax
 833b333:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b336:	eb 0c                	jmp    833b344 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x140>
 833b338:	8b 45 18             	mov    0x18(%ebp),%eax
 833b33b:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 833b341:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b344:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b347:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b34b:	8b 45 08             	mov    0x8(%ebp),%eax
 833b34e:	89 04 24             	mov    %eax,(%esp)
 833b351:	e8 b6 3d 00 00       	call   833f10c <_ZN13user_creature12CCreatureMgr17setTempExpireTimeEi>
 833b356:	bb 01 00 00 00       	mov    $0x1,%ebx
 833b35b:	eb 1b                	jmp    833b378 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii+0x174>
 833b35d:	89 d3                	mov    %edx,%ebx
 833b35f:	89 c6                	mov    %eax,%esi
 833b361:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833b364:	89 04 24             	mov    %eax,(%esp)
 833b367:	e8 6c 45 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b36c:	89 f0                	mov    %esi,%eax
 833b36e:	89 da                	mov    %ebx,%edx
 833b370:	89 04 24             	mov    %eax,(%esp)
 833b373:	e8 d8 83 7a 00       	call   8ae3750 <_Unwind_Resume>
 833b378:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833b37b:	89 04 24             	mov    %eax,(%esp)
 833b37e:	e8 55 45 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833b383:	89 d8                	mov    %ebx,%eax
 833b385:	83 c4 40             	add    $0x40,%esp
 833b388:	5b                   	pop    %ebx
 833b389:	5e                   	pop    %esi
 833b38a:	5d                   	pop    %ebp
 833b38b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::InsertCreatureItem @ 0x833b204

/* user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::InsertCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CDBMsgSender local_2c [8];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = IsCreatureEquipmentScope(this,param_2);
  if (cVar1 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_2c,0x87,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833b267 to 0833b32c has its CatchHandler @ 0833b35d */
      local_14 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      cVar1 = CDBMsgSender::InsertCreatureItem
                        (local_2c,*(CUser **)(this + 0x1c),param_1,param_2,param_3,local_14,param_4,
                         param_5);
      if (cVar1 == '\x01') {
        CDBMsgSender::Send(local_2c);
        local_10 = 0;
        if ((param_4 == 0) && (param_5 != 0)) {
          local_10 = OS_API::GetDateTimeTick();
          local_10 = param_5 - local_10;
        }
        else {
          local_10 = param_4 * 0x15180;
        }
        setTempExpireTime(this,local_10);
        uVar3 = 1;
      }
      else {
        uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_24,
                           "bool user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)"
                           ,0xcaf,5);
        cMyTrace::operator()(local_24,"cannot write db uid(%d)\n",uVar2 & 0xffff);
        uVar3 = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_2c);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## InsertCreatureItemResult

```asm
// === 0833b38c user_creature::CCreatureMgr::InsertCreatureItemResult  [0x0833b38c-0x833b497] ===
 833b38c:	55                   	push   %ebp
 833b38d:	89 e5                	mov    %esp,%ebp
 833b38f:	57                   	push   %edi
 833b390:	56                   	push   %esi
 833b391:	53                   	push   %ebx
 833b392:	83 ec 7c             	sub    $0x7c,%esp
 833b395:	8d 45 ab             	lea    -0x55(%ebp),%eax
 833b398:	89 04 24             	mov    %eax,(%esp)
 833b39b:	e8 b4 04 d9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 833b3a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b3a3:	8d 50 04             	lea    0x4(%eax),%edx
 833b3a6:	8d 45 ab             	lea    -0x55(%ebp),%eax
 833b3a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b3ad:	89 14 24             	mov    %edx,(%esp)
 833b3b0:	e8 63 40 00 00       	call   833f418 <_ZN21Inven_Item_Compatible13makeInvenItemER10Inven_Item>
 833b3b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b3b8:	83 c0 2c             	add    $0x2c,%eax
 833b3bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b3bf:	8d 45 ab             	lea    -0x55(%ebp),%eax
 833b3c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b3c6:	8b 45 08             	mov    0x8(%ebp),%eax
 833b3c9:	89 04 24             	mov    %eax,(%esp)
 833b3cc:	e8 bb 02 00 00       	call   833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>
 833b3d1:	83 f0 01             	xor    $0x1,%eax
 833b3d4:	84 c0                	test   %al,%al
 833b3d6:	74 0a                	je     833b3e2 <_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM+0x56>
 833b3d8:	b8 00 00 00 00       	mov    $0x0,%eax
 833b3dd:	e9 ae 00 00 00       	jmp    833b490 <_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM+0x104>
 833b3e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b3e5:	8b 40 64             	mov    0x64(%eax),%eax
 833b3e8:	83 f8 06             	cmp    $0x6,%eax
 833b3eb:	75 12                	jne    833b3ff <_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM+0x73>
 833b3ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b3f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b3f4:	8b 45 08             	mov    0x8(%ebp),%eax
 833b3f7:	89 04 24             	mov    %eax,(%esp)
 833b3fa:	e8 99 00 00 00       	call   833b498 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM>
 833b3ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b402:	8b 50 60             	mov    0x60(%eax),%edx
 833b405:	8b 45 08             	mov    0x8(%ebp),%eax
 833b408:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b40b:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b40f:	89 04 24             	mov    %eax,(%esp)
 833b412:	e8 93 40 00 00       	call   833f4aa <_ZN5CUser22set_cera_item_order_noEj>
 833b417:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b41a:	0f b6 40 51          	movzbl 0x51(%eax),%eax
 833b41e:	0f be c0             	movsbl %al,%eax
 833b421:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 833b424:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b427:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 833b42b:	0f b6 f8             	movzbl %al,%edi
 833b42e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b431:	8b 70 30             	mov    0x30(%eax),%esi
 833b434:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b437:	8b 40 08             	mov    0x8(%eax),%eax
 833b43a:	89 c3                	mov    %eax,%ebx
 833b43c:	8b 45 08             	mov    0x8(%ebp),%eax
 833b43f:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b442:	89 04 24             	mov    %eax,(%esp)
 833b445:	e8 34 ee d9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 833b44a:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 833b44d:	89 54 24 18          	mov    %edx,0x18(%esp)
 833b451:	89 7c 24 14          	mov    %edi,0x14(%esp)
 833b455:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 833b45c:	00 
 833b45d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833b461:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b465:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833b46c:	00 
 833b46d:	89 04 24             	mov    %eax,(%esp)
 833b470:	e8 3b f0 1c 00       	call   850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>
 833b475:	8b 45 08             	mov    0x8(%ebp),%eax
 833b478:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b47b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833b482:	00 
 833b483:	89 04 24             	mov    %eax,(%esp)
 833b486:	e8 1f 40 00 00       	call   833f4aa <_ZN5CUser22set_cera_item_order_noEj>
 833b48b:	b8 01 00 00 00       	mov    $0x1,%eax
 833b490:	83 c4 7c             	add    $0x7c,%esp
 833b493:	5b                   	pop    %ebx
 833b494:	5e                   	pop    %esi
 833b495:	5f                   	pop    %edi
 833b496:	5d                   	pop    %ebp
 833b497:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::InsertCreatureItemResult @ 0x833b38c

/* user_creature::CCreatureMgr::InsertCreatureItemResult(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::InsertCreatureItemResult(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  SIG_CREATURE_ITEM SVar1;
  SIG_CREATURE_ITEM SVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  Inven_Item local_59 [73];
  
  Inven_Item::Inven_Item(local_59);
  Inven_Item_Compatible::makeInvenItem((Inven_Item_Compatible *)(param_1 + 4),local_59);
  cVar4 = LoadCreatureItem(this,local_59,(SIG_CREATURE_ITEM_DETAIL_INFO *)(param_1 + 0x2c));
  if (cVar4 == '\x01') {
    if (*(int *)(param_1 + 100) == 6) {
      SendCreatureItemInfo(this,param_1);
    }
    CUser::set_cera_item_order_no(*(CUser **)(this + 0x1c),*(uint *)(param_1 + 0x60));
    SVar1 = param_1[0x51];
    SVar2 = param_1[5];
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 8);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
    CInventory::WriteCreatureLog(pCVar6,3,uVar3,uVar5,1,SVar2,(int)(char)SVar1);
    CUser::set_cera_item_order_no(*(CUser **)(this + 0x1c),0);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## IsArtifactEquipSlot

```asm
// === 083393fc user_creature::CCreatureMgr::IsArtifactEquipSlot  [0x083393fc-0x833941f] ===
 83393fc:	55                   	push   %ebp
 83393fd:	89 e5                	mov    %esp,%ebp
 83393ff:	83 7d 0c 17          	cmpl   $0x17,0xc(%ebp)
 8339403:	74 0c                	je     8339411 <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi+0x15>
 8339405:	83 7d 0c 18          	cmpl   $0x18,0xc(%ebp)
 8339409:	74 06                	je     8339411 <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi+0x15>
 833940b:	83 7d 0c 19          	cmpl   $0x19,0xc(%ebp)
 833940f:	75 07                	jne    8339418 <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi+0x1c>
 8339411:	b8 01 00 00 00       	mov    $0x1,%eax
 8339416:	eb 05                	jmp    833941d <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi+0x21>
 8339418:	b8 00 00 00 00       	mov    $0x0,%eax
 833941d:	5d                   	pop    %ebp
 833941e:	c3                   	ret
 833941f:	90                   	nop

```

```c
// user_creature::CCreatureMgr::IsArtifactEquipSlot @ 0x83393fc

/* user_creature::CCreatureMgr::IsArtifactEquipSlot(int) */

undefined4 __thiscall
user_creature::CCreatureMgr::IsArtifactEquipSlot(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x17) || (param_1 == 0x18)) || (param_1 == 0x19)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsCreatureEquipmentScope

```asm
// === 0833926c user_creature::CCreatureMgr::IsCreatureEquipmentScope  [0x0833926c-0x8339291] ===
 833926c:	55                   	push   %ebp
 833926d:	89 e5                	mov    %esp,%ebp
 833926f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8339273:	78 09                	js     833927e <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi+0x12>
 8339275:	81 7d 0c 8b 00 00 00 	cmpl   $0x8b,0xc(%ebp)
 833927c:	7e 06                	jle    8339284 <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi+0x18>
 833927e:	83 7d 0c 16          	cmpl   $0x16,0xc(%ebp)
 8339282:	75 07                	jne    833928b <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi+0x1f>
 8339284:	b8 01 00 00 00       	mov    $0x1,%eax
 8339289:	eb 05                	jmp    8339290 <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi+0x24>
 833928b:	b8 00 00 00 00       	mov    $0x0,%eax
 8339290:	5d                   	pop    %ebp
 8339291:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::IsCreatureEquipmentScope @ 0x833926c

/* user_creature::CCreatureMgr::IsCreatureEquipmentScope(int) */

undefined4 __thiscall
user_creature::CCreatureMgr::IsCreatureEquipmentScope(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 0) || (0x8b < param_1)) && (param_1 != 0x16)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## IsDieCreature

```asm
// === 0833a660 user_creature::CCreatureMgr::IsDieCreature  [0x0833a660-0x833a687] ===
 833a660:	55                   	push   %ebp
 833a661:	89 e5                	mov    %esp,%ebp
 833a663:	83 ec 18             	sub    $0x18,%esp
 833a666:	8b 45 08             	mov    0x8(%ebp),%eax
 833a669:	8b 40 18             	mov    0x18(%eax),%eax
 833a66c:	85 c0                	test   %eax,%eax
 833a66e:	74 10                	je     833a680 <_ZNK13user_creature12CCreatureMgr13IsDieCreatureEv+0x20>
 833a670:	8b 45 08             	mov    0x8(%ebp),%eax
 833a673:	8b 40 18             	mov    0x18(%eax),%eax
 833a676:	89 04 24             	mov    %eax,(%esp)
 833a679:	e8 fa dd ff ff       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 833a67e:	eb 05                	jmp    833a685 <_ZNK13user_creature12CCreatureMgr13IsDieCreatureEv+0x25>
 833a680:	b8 01 00 00 00       	mov    $0x1,%eax
 833a685:	c9                   	leave
 833a686:	c3                   	ret
 833a687:	90                   	nop

```

```c
// user_creature::CCreatureMgr::IsDieCreature @ 0x833a660

/* user_creature::CCreatureMgr::IsDieCreature() const */

undefined4 __thiscall user_creature::CCreatureMgr::IsDieCreature(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
  }
  return uVar1;
}

```

---

## IsExistedCreatureItem

```asm
// === 0833a942 user_creature::CCreatureMgr::IsExistedCreatureItem  [0x0833a942-0x833aa31] ===
 833a942:	55                   	push   %ebp
 833a943:	89 e5                	mov    %esp,%ebp
 833a945:	83 ec 38             	sub    $0x38,%esp
 833a948:	8b 55 08             	mov    0x8(%ebp),%edx
 833a94b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a94e:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a952:	89 04 24             	mov    %eax,(%esp)
 833a955:	e8 8a 7d 00 00       	call   83426e4 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833a95a:	83 ec 04             	sub    $0x4,%esp
 833a95d:	e9 99 00 00 00       	jmp    833a9fb <_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi+0xb9>
 833a962:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a965:	89 04 24             	mov    %eax,(%esp)
 833a968:	e8 15 7e 00 00       	call   8342782 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833a96d:	8b 40 04             	mov    0x4(%eax),%eax
 833a970:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833a973:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833a977:	74 1f                	je     833a998 <_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi+0x56>
 833a979:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833a97c:	89 04 24             	mov    %eax,(%esp)
 833a97f:	e8 46 46 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833a984:	3b 45 0c             	cmp    0xc(%ebp),%eax
 833a987:	0f 94 c0             	sete   %al
 833a98a:	84 c0                	test   %al,%al
 833a98c:	74 50                	je     833a9de <_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi+0x9c>
 833a98e:	b8 01 00 00 00       	mov    $0x1,%eax
 833a993:	e9 97 00 00 00       	jmp    833aa2f <_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi+0xed>
 833a998:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833a99f:	00 
 833a9a0:	c7 44 24 08 da 0b 00 	movl   $0xbda,0x8(%esp)
 833a9a7:	00 
 833a9a8:	c7 44 24 04 a0 f0 c2 	movl   $0x8c2f0a0,0x4(%esp)
 833a9af:	08 
 833a9b0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833a9b3:	89 04 24             	mov    %eax,(%esp)
 833a9b6:	e8 5d 4d 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833a9bb:	c7 44 24 0c da 0b 00 	movl   $0xbda,0xc(%esp)
 833a9c2:	00 
 833a9c3:	c7 44 24 08 a0 f0 c2 	movl   $0x8c2f0a0,0x8(%esp)
 833a9ca:	08 
 833a9cb:	c7 44 24 04 61 d7 c2 	movl   $0x8c2d761,0x4(%esp)
 833a9d2:	08 
 833a9d3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833a9d6:	89 04 24             	mov    %eax,(%esp)
 833a9d9:	e8 aa 4d 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833a9de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833a9e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833a9e8:	00 
 833a9e9:	8d 55 d8             	lea    -0x28(%ebp),%edx
 833a9ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a9f0:	89 04 24             	mov    %eax,(%esp)
 833a9f3:	e8 4c 7d 00 00       	call   8342744 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833a9f8:	83 ec 04             	sub    $0x4,%esp
 833a9fb:	8b 55 08             	mov    0x8(%ebp),%edx
 833a9fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833aa01:	89 54 24 04          	mov    %edx,0x4(%esp)
 833aa05:	89 04 24             	mov    %eax,(%esp)
 833aa08:	e8 fd 7c 00 00       	call   834270a <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833aa0d:	83 ec 04             	sub    $0x4,%esp
 833aa10:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833aa13:	89 44 24 04          	mov    %eax,0x4(%esp)
 833aa17:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833aa1a:	89 04 24             	mov    %eax,(%esp)
 833aa1d:	e8 0e 7d 00 00       	call   8342730 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833aa22:	84 c0                	test   %al,%al
 833aa24:	0f 85 38 ff ff ff    	jne    833a962 <_ZNK13user_creature12CCreatureMgr21IsExistedCreatureItemEi+0x20>
 833aa2a:	b8 00 00 00 00       	mov    $0x0,%eax
 833aa2f:	c9                   	leave
 833aa30:	c3                   	ret
 833aa31:	90                   	nop

```

```c
// user_creature::CCreatureMgr::IsExistedCreatureItem @ 0x833a942

/* user_creature::CCreatureMgr::IsExistedCreatureItem(int) const */

undefined4 __thiscall
user_creature::CCreatureMgr::IsExistedCreatureItem(CCreatureMgr *this,int param_1)

{
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_2c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_28 [4];
  cMyTrace local_24 [16];
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_2c);
  do {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_28);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_2c,(_Rb_tree_const_iterator *)local_28);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_2c);
    local_10 = *(CCreatureItem **)(iVar2 + 4);
    if (local_10 == (CCreatureItem *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "bool user_creature::CCreatureMgr::IsExistedCreatureItem(int) const",0xbda,
                         5);
      cMyTrace::operator()
                (local_24,"[%s][%d]",
                 "bool user_creature::CCreatureMgr::IsExistedCreatureItem(int) const",0xbda);
    }
    else {
      iVar2 = CCreatureItem::GetSlotNo(local_10);
      if (iVar2 == param_1) {
        return 1;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_2c);
  } while( true );
}

```

---

## IsGrowCreature_Equipped_Creature

```asm
// === 0833debc user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature  [0x0833debc-0x833def2] ===
 833debc:	55                   	push   %ebp
 833debd:	89 e5                	mov    %esp,%ebp
 833debf:	83 ec 18             	sub    $0x18,%esp
 833dec2:	8b 45 08             	mov    0x8(%ebp),%eax
 833dec5:	8b 40 18             	mov    0x18(%eax),%eax
 833dec8:	85 c0                	test   %eax,%eax
 833deca:	74 20                	je     833deec <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv+0x30>
 833decc:	8b 45 08             	mov    0x8(%ebp),%eax
 833decf:	8b 40 18             	mov    0x18(%eax),%eax
 833ded2:	89 04 24             	mov    %eax,(%esp)
 833ded5:	e8 f0 11 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 833deda:	84 c0                	test   %al,%al
 833dedc:	74 07                	je     833dee5 <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv+0x29>
 833dede:	b8 01 00 00 00       	mov    $0x1,%eax
 833dee3:	eb 0c                	jmp    833def1 <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv+0x35>
 833dee5:	b8 00 00 00 00       	mov    $0x0,%eax
 833deea:	eb 05                	jmp    833def1 <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv+0x35>
 833deec:	b8 00 00 00 00       	mov    $0x0,%eax
 833def1:	c9                   	leave
 833def2:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature @ 0x833debc

/* user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const */

undefined4 __thiscall
user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(CCreatureMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## IsSaveCreatureItem

```asm
// === 0833ba30 user_creature::CCreatureMgr::IsSaveCreatureItem  [0x0833ba30-0x833baed] ===
 833ba30:	55                   	push   %ebp
 833ba31:	89 e5                	mov    %esp,%ebp
 833ba33:	83 ec 28             	sub    $0x28,%esp
 833ba36:	8b 45 08             	mov    0x8(%ebp),%eax
 833ba39:	89 04 24             	mov    %eax,(%esp)
 833ba3c:	e8 b1 5e 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833ba41:	85 c0                	test   %eax,%eax
 833ba43:	0f 94 c0             	sete   %al
 833ba46:	84 c0                	test   %al,%al
 833ba48:	74 0a                	je     833ba54 <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0x24>
 833ba4a:	b8 00 00 00 00       	mov    $0x0,%eax
 833ba4f:	e9 98 00 00 00       	jmp    833baec <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0xbc>
 833ba54:	8b 55 08             	mov    0x8(%ebp),%edx
 833ba57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833ba5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833ba5e:	89 04 24             	mov    %eax,(%esp)
 833ba61:	e8 92 6f 00 00       	call   83429f8 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833ba66:	83 ec 04             	sub    $0x4,%esp
 833ba69:	eb 51                	jmp    833babc <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0x8c>
 833ba6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833ba6e:	89 04 24             	mov    %eax,(%esp)
 833ba71:	e8 74 6f 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833ba76:	8b 40 04             	mov    0x4(%eax),%eax
 833ba79:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833ba7c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833ba80:	74 1d                	je     833ba9f <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0x6f>
 833ba82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833ba85:	8b 00                	mov    (%eax),%eax
 833ba87:	83 c0 04             	add    $0x4,%eax
 833ba8a:	8b 10                	mov    (%eax),%edx
 833ba8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833ba8f:	89 04 24             	mov    %eax,(%esp)
 833ba92:	ff d2                	call   *%edx
 833ba94:	84 c0                	test   %al,%al
 833ba96:	74 07                	je     833ba9f <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0x6f>
 833ba98:	b8 01 00 00 00       	mov    $0x1,%eax
 833ba9d:	eb 4d                	jmp    833baec <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0xbc>
 833ba9f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833baa2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833baa9:	00 
 833baaa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 833baad:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bab1:	89 04 24             	mov    %eax,(%esp)
 833bab4:	e8 79 6f 00 00       	call   8342a32 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833bab9:	83 ec 04             	sub    $0x4,%esp
 833babc:	8b 55 08             	mov    0x8(%ebp),%edx
 833babf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833bac2:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bac6:	89 04 24             	mov    %eax,(%esp)
 833bac9:	e8 e2 6e 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833bace:	83 ec 04             	sub    $0x4,%esp
 833bad1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833bad4:	89 44 24 04          	mov    %eax,0x4(%esp)
 833bad8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833badb:	89 04 24             	mov    %eax,(%esp)
 833bade:	e8 3b 6f 00 00       	call   8342a1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833bae3:	84 c0                	test   %al,%al
 833bae5:	75 84                	jne    833ba6b <_ZN13user_creature12CCreatureMgr18IsSaveCreatureItemEv+0x3b>
 833bae7:	b8 00 00 00 00       	mov    $0x0,%eax
 833baec:	c9                   	leave
 833baed:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::IsSaveCreatureItem @ 0x833ba30

/* user_creature::CCreatureMgr::IsSaveCreatureItem() */

undefined4 __thiscall user_creature::CCreatureMgr::IsSaveCreatureItem(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  int *local_10;
  
  iVar2 = std::
          map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_1c);
      local_10 = *(int **)(iVar2 + 4);
      if ((local_10 != (int *)0x0) &&
         (cVar1 = (**(code **)(*local_10 + 4))(local_10), cVar1 != '\0')) {
        return 1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return 0;
}

```

---

## ItemEvolute

```asm
// === 0833d6c2 user_creature::CCreatureMgr::ItemEvolute  [0x0833d6c2-0x833d6f9] ===
 833d6c2:	55                   	push   %ebp
 833d6c3:	89 e5                	mov    %esp,%ebp
 833d6c5:	83 ec 18             	sub    $0x18,%esp
 833d6c8:	8b 45 08             	mov    0x8(%ebp),%eax
 833d6cb:	8b 40 18             	mov    0x18(%eax),%eax
 833d6ce:	85 c0                	test   %eax,%eax
 833d6d0:	74 21                	je     833d6f3 <_ZN13user_creature12CCreatureMgr11ItemEvoluteEi+0x31>
 833d6d2:	8b 45 08             	mov    0x8(%ebp),%eax
 833d6d5:	8b 50 1c             	mov    0x1c(%eax),%edx
 833d6d8:	8b 45 08             	mov    0x8(%ebp),%eax
 833d6db:	8b 40 18             	mov    0x18(%eax),%eax
 833d6de:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 833d6e1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833d6e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d6e9:	89 04 24             	mov    %eax,(%esp)
 833d6ec:	e8 af b5 ff ff       	call   8338ca0 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri>
 833d6f1:	eb 05                	jmp    833d6f8 <_ZN13user_creature12CCreatureMgr11ItemEvoluteEi+0x36>
 833d6f3:	b8 00 00 00 00       	mov    $0x0,%eax
 833d6f8:	c9                   	leave
 833d6f9:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::ItemEvolute @ 0x833d6c2

/* user_creature::CCreatureMgr::ItemEvolute(int) */

undefined4 __thiscall user_creature::CCreatureMgr::ItemEvolute(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreature::ItemEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1);
  }
  return uVar1;
}

```

---

## LoadArtifact

```asm
// === 0833be7c user_creature::CCreatureMgr::LoadArtifact  [0x0833be7c-0x833beb3] ===
 833be7c:	55                   	push   %ebp
 833be7d:	89 e5                	mov    %esp,%ebp
 833be7f:	83 ec 18             	sub    $0x18,%esp
 833be82:	8b 45 10             	mov    0x10(%ebp),%eax
 833be85:	89 04 24             	mov    %eax,(%esp)
 833be88:	e8 d9 2e de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 833be8d:	84 c0                	test   %al,%al
 833be8f:	74 07                	je     833be98 <_ZN13user_creature12CCreatureMgr12LoadArtifactEiP10Inven_Item+0x1c>
 833be91:	b8 01 00 00 00       	mov    $0x1,%eax
 833be96:	eb 19                	jmp    833beb1 <_ZN13user_creature12CCreatureMgr12LoadArtifactEiP10Inven_Item+0x35>
 833be98:	8b 45 10             	mov    0x10(%ebp),%eax
 833be9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833be9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833bea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 833bea6:	8b 45 08             	mov    0x8(%ebp),%eax
 833bea9:	89 04 24             	mov    %eax,(%esp)
 833beac:	e8 17 d8 ff ff       	call   83396c8 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item>
 833beb1:	c9                   	leave
 833beb2:	c3                   	ret
 833beb3:	90                   	nop

```

```c
// user_creature::CCreatureMgr::LoadArtifact @ 0x833be7c

/* user_creature::CCreatureMgr::LoadArtifact(int, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::LoadArtifact(CCreatureMgr *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Inven_Item::isEmpty(param_2);
  if (cVar1 == '\0') {
    uVar2 = EquipArtifact(this,param_1,param_2);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## LoadCreatureItem

```asm
// === 0833b68c user_creature::CCreatureMgr::LoadCreatureItem  [0x0833b68c-0x833b80b] ===
 833b68c:	55                   	push   %ebp
 833b68d:	89 e5                	mov    %esp,%ebp
 833b68f:	57                   	push   %edi
 833b690:	56                   	push   %esi
 833b691:	53                   	push   %ebx
 833b692:	83 ec 4c             	sub    $0x4c,%esp
 833b695:	8b 45 10             	mov    0x10(%ebp),%eax
 833b698:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 833b69c:	0f be d8             	movsbl %al,%ebx
 833b69f:	e8 71 40 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 833b6a4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 833b6a8:	89 04 24             	mov    %eax,(%esp)
 833b6ab:	e8 cc 3e 00 00       	call   833f57c <_ZN13user_creature20CCreatureItemFactory19AcquireCreatureItemENS_18CREATURE_ITME_TYPEE>
 833b6b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 833b6b3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 833b6b7:	75 0a                	jne    833b6c3 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x37>
 833b6b9:	b8 00 00 00 00       	mov    $0x0,%eax
 833b6be:	e9 41 01 00 00       	jmp    833b804 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x178>
 833b6c3:	8b 45 08             	mov    0x8(%ebp),%eax
 833b6c6:	8b 40 2c             	mov    0x2c(%eax),%eax
 833b6c9:	83 f8 ff             	cmp    $0xffffffff,%eax
 833b6cc:	74 44                	je     833b712 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x86>
 833b6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 833b6d1:	8b 40 2c             	mov    0x2c(%eax),%eax
 833b6d4:	85 c0                	test   %eax,%eax
 833b6d6:	75 0e                	jne    833b6e6 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x5a>
 833b6d8:	8b 45 08             	mov    0x8(%ebp),%eax
 833b6db:	8b 50 2c             	mov    0x2c(%eax),%edx
 833b6de:	8b 45 10             	mov    0x10(%ebp),%eax
 833b6e1:	89 50 28             	mov    %edx,0x28(%eax)
 833b6e4:	eb 19                	jmp    833b6ff <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x73>
 833b6e6:	e8 17 11 25 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 833b6eb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833b6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 833b6f1:	8b 40 2c             	mov    0x2c(%eax),%eax
 833b6f4:	03 45 e4             	add    -0x1c(%ebp),%eax
 833b6f7:	89 c2                	mov    %eax,%edx
 833b6f9:	8b 45 10             	mov    0x10(%ebp),%eax
 833b6fc:	89 50 28             	mov    %edx,0x28(%eax)
 833b6ff:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 833b706:	ff 
 833b707:	8b 45 08             	mov    0x8(%ebp),%eax
 833b70a:	89 04 24             	mov    %eax,(%esp)
 833b70d:	e8 fa 39 00 00       	call   833f10c <_ZN13user_creature12CCreatureMgr17setTempExpireTimeEi>
 833b712:	8b 45 10             	mov    0x10(%ebp),%eax
 833b715:	8b 40 04             	mov    0x4(%eax),%eax
 833b718:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b71c:	8b 45 08             	mov    0x8(%ebp),%eax
 833b71f:	89 04 24             	mov    %eax,(%esp)
 833b722:	e8 3b 22 00 00       	call   833d962 <_ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi>
 833b727:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833b72a:	8b 00                	mov    (%eax),%eax
 833b72c:	83 c0 08             	add    $0x8,%eax
 833b72f:	8b 10                	mov    (%eax),%edx
 833b731:	8b 45 08             	mov    0x8(%ebp),%eax
 833b734:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b737:	89 44 24 10          	mov    %eax,0x10(%esp)
 833b73b:	8b 45 10             	mov    0x10(%ebp),%eax
 833b73e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 833b742:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b745:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b749:	8b 45 08             	mov    0x8(%ebp),%eax
 833b74c:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b750:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833b753:	89 04 24             	mov    %eax,(%esp)
 833b756:	ff d2                	call   *%edx
 833b758:	83 f0 01             	xor    $0x1,%eax
 833b75b:	84 c0                	test   %al,%al
 833b75d:	74 7a                	je     833b7d9 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x14d>
 833b75f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b762:	8b 78 07             	mov    0x7(%eax),%edi
 833b765:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b768:	8b 70 02             	mov    0x2(%eax),%esi
 833b76b:	8b 45 08             	mov    0x8(%ebp),%eax
 833b76e:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b771:	89 04 24             	mov    %eax,(%esp)
 833b774:	e8 03 ec d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833b779:	0f b7 d8             	movzwl %ax,%ebx
 833b77c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833b783:	00 
 833b784:	c7 44 24 08 36 0d 00 	movl   $0xd36,0x8(%esp)
 833b78b:	00 
 833b78c:	c7 44 24 04 40 ed c2 	movl   $0x8c2ed40,0x4(%esp)
 833b793:	08 
 833b794:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833b797:	89 04 24             	mov    %eax,(%esp)
 833b79a:	e8 79 3f 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833b79f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 833b7a3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833b7a7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b7ab:	c7 44 24 04 80 d9 c2 	movl   $0x8c2d980,0x4(%esp)
 833b7b2:	08 
 833b7b3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833b7b6:	89 04 24             	mov    %eax,(%esp)
 833b7b9:	e8 ca 3f 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833b7be:	e8 52 3f 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 833b7c3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 833b7c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 833b7ca:	89 04 24             	mov    %eax,(%esp)
 833b7cd:	e8 46 3e 00 00       	call   833f618 <_ZN13user_creature20CCreatureItemFactory16FreeCreatureItemEPNS_13CCreatureItemE>
 833b7d2:	b8 00 00 00 00       	mov    $0x0,%eax
 833b7d7:	eb 2b                	jmp    833b804 <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x178>
 833b7d9:	8b 45 10             	mov    0x10(%ebp),%eax
 833b7dc:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 833b7e0:	83 f0 01             	xor    $0x1,%eax
 833b7e3:	84 c0                	test   %al,%al
 833b7e5:	74 18                	je     833b7ff <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x173>
 833b7e7:	8b 45 10             	mov    0x10(%ebp),%eax
 833b7ea:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 833b7ee:	3c 01                	cmp    $0x1,%al
 833b7f0:	75 0d                	jne    833b7ff <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO+0x173>
 833b7f2:	8b 45 10             	mov    0x10(%ebp),%eax
 833b7f5:	0f b6 50 31          	movzbl 0x31(%eax),%edx
 833b7f9:	8b 45 08             	mov    0x8(%ebp),%eax
 833b7fc:	88 50 48             	mov    %dl,0x48(%eax)
 833b7ff:	b8 01 00 00 00       	mov    $0x1,%eax
 833b804:	83 c4 4c             	add    $0x4c,%esp
 833b807:	5b                   	pop    %ebx
 833b808:	5e                   	pop    %esi
 833b809:	5f                   	pop    %edi
 833b80a:	5d                   	pop    %ebp
 833b80b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::LoadCreatureItem @ 0x833b68c

/* user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*) */

undefined4 __thiscall
user_creature::CCreatureMgr::LoadCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2)

{
  SIG_CREATURE_ITEM_DETAIL_INFO SVar1;
  undefined4 uVar2;
  char cVar3;
  CCreatureItemFactory *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  cMyTrace local_34 [16];
  CCreatureItem *local_24;
  int local_20;
  
  SVar1 = param_2[0x24];
  pCVar4 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  local_24 = (CCreatureItem *)CCreatureItemFactory::AcquireCreatureItem(pCVar4,(int)(char)SVar1);
  if (local_24 == (CCreatureItem *)0x0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(this + 0x2c) != -1) {
      if (*(int *)(this + 0x2c) == 0) {
        *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x2c);
      }
      else {
        local_20 = OS_API::GetDateTimeTick();
        *(int *)(param_2 + 0x28) = *(int *)(this + 0x2c) + local_20;
      }
      setTempExpireTime(this,-1);
    }
    UnRegistTempPeriod((int)this);
    cVar3 = (**(code **)(*(int *)local_24 + 8))
                      (local_24,this,param_1,param_2,*(undefined4 *)(this + 0x1c));
    if (cVar3 == '\x01') {
      if ((param_2[0x30] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x1) &&
         (param_2[0x24] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x1)) {
        this[0x48] = *(CCreatureMgr *)(param_2 + 0x31);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 7);
      uVar2 = *(undefined4 *)(param_1 + 2);
      uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_34,
                         "bool user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)"
                         ,0xd36,5);
      cMyTrace::operator()
                (local_34,"LoadCreatureItem() failed %d,%d,%d\n",uVar6 & 0xffff,uVar2,uVar5);
      pCVar4 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
      CCreatureItemFactory::FreeCreatureItem(pCVar4,local_24);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## LoadCreatureTempPeriod

```asm
// === 0833d9d8 user_creature::CCreatureMgr::LoadCreatureTempPeriod  [0x0833d9d8-0x833da1d] ===
 833d9d8:	55                   	push   %ebp
 833d9d9:	89 e5                	mov    %esp,%ebp
 833d9db:	83 ec 18             	sub    $0x18,%esp
 833d9de:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d9e1:	8b 40 04             	mov    0x4(%eax),%eax
 833d9e4:	83 f8 ff             	cmp    $0xffffffff,%eax
 833d9e7:	74 2d                	je     833da16 <_ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD+0x3e>
 833d9e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d9ec:	8b 50 04             	mov    0x4(%eax),%edx
 833d9ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d9f2:	8b 00                	mov    (%eax),%eax
 833d9f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833d9fb:	00 
 833d9fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 833da00:	89 44 24 04          	mov    %eax,0x4(%esp)
 833da04:	8b 45 08             	mov    0x8(%ebp),%eax
 833da07:	89 04 24             	mov    %eax,(%esp)
 833da0a:	e8 cf fd ff ff       	call   833d7de <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii>
 833da0f:	b8 01 00 00 00       	mov    $0x1,%eax
 833da14:	eb 05                	jmp    833da1b <_ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD+0x43>
 833da16:	b8 00 00 00 00       	mov    $0x0,%eax
 833da1b:	c9                   	leave
 833da1c:	c3                   	ret
 833da1d:	90                   	nop

```

```c
// user_creature::CCreatureMgr::LoadCreatureTempPeriod @ 0x833d9d8

/* user_creature::CCreatureMgr::LoadCreatureTempPeriod(SIG_POSTAL_CREATURE_TEMP_PERIOD*) */

bool __thiscall
user_creature::CCreatureMgr::LoadCreatureTempPeriod
          (CCreatureMgr *this,SIG_POSTAL_CREATURE_TEMP_PERIOD *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != -1) {
    RegistTempPeriod((int)this,*(int *)param_1,*(int *)(param_1 + 4));
  }
  return iVar1 != -1;
}

```

---

## RecvMail

```asm
// === 0833ab9a user_creature::CCreatureMgr::RecvMail  [0x0833ab9a-0x833ad33] ===
 833ab9a:	55                   	push   %ebp
 833ab9b:	89 e5                	mov    %esp,%ebp
 833ab9d:	57                   	push   %edi
 833ab9e:	56                   	push   %esi
 833ab9f:	53                   	push   %ebx
 833aba0:	83 ec 5c             	sub    $0x5c,%esp
 833aba3:	8b 45 10             	mov    0x10(%ebp),%eax
 833aba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 833abaa:	8b 45 08             	mov    0x8(%ebp),%eax
 833abad:	89 04 24             	mov    %eax,(%esp)
 833abb0:	e8 b7 e6 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833abb5:	83 f0 01             	xor    $0x1,%eax
 833abb8:	84 c0                	test   %al,%al
 833abba:	74 0a                	je     833abc6 <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x2c>
 833abbc:	bb 01 00 00 00       	mov    $0x1,%ebx
 833abc1:	e9 64 01 00 00       	jmp    833ad2a <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x190>
 833abc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 833abc9:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833abcd:	3c 05                	cmp    $0x5,%al
 833abcf:	74 0a                	je     833abdb <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x41>
 833abd1:	bb 01 00 00 00       	mov    $0x1,%ebx
 833abd6:	e9 4f 01 00 00       	jmp    833ad2a <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x190>
 833abdb:	8b 45 08             	mov    0x8(%ebp),%eax
 833abde:	8b 40 1c             	mov    0x1c(%eax),%eax
 833abe1:	89 44 24 08          	mov    %eax,0x8(%esp)
 833abe5:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833abec:	00 
 833abed:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833abf0:	89 04 24             	mov    %eax,(%esp)
 833abf3:	e8 b6 4c 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833abf8:	8b 45 08             	mov    0x8(%ebp),%eax
 833abfb:	89 04 24             	mov    %eax,(%esp)
 833abfe:	e8 ef 6c 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833ac03:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833ac06:	8b 45 08             	mov    0x8(%ebp),%eax
 833ac09:	8b 40 1c             	mov    0x1c(%eax),%eax
 833ac0c:	89 04 24             	mov    %eax,(%esp)
 833ac0f:	e8 3a 10 d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833ac14:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 833ac17:	89 54 24 14          	mov    %edx,0x14(%esp)
 833ac1b:	8b 55 14             	mov    0x14(%ebp),%edx
 833ac1e:	89 54 24 10          	mov    %edx,0x10(%esp)
 833ac22:	8b 55 10             	mov    0x10(%ebp),%edx
 833ac25:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833ac29:	89 44 24 08          	mov    %eax,0x8(%esp)
 833ac2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ac30:	89 44 24 04          	mov    %eax,0x4(%esp)
 833ac34:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ac37:	89 04 24             	mov    %eax,(%esp)
 833ac3a:	e8 f5 52 00 00       	call   833ff34 <_ZN13user_creature12CDBMsgSender8RecvMailEP10Inven_Itemiiii>
 833ac3f:	83 f0 01             	xor    $0x1,%eax
 833ac42:	84 c0                	test   %al,%al
 833ac44:	74 55                	je     833ac9b <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x101>
 833ac46:	8b 45 08             	mov    0x8(%ebp),%eax
 833ac49:	8b 40 1c             	mov    0x1c(%eax),%eax
 833ac4c:	89 04 24             	mov    %eax,(%esp)
 833ac4f:	e8 28 f7 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833ac54:	0f b7 d8             	movzwl %ax,%ebx
 833ac57:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833ac5e:	00 
 833ac5f:	c7 44 24 08 09 0c 00 	movl   $0xc09,0x8(%esp)
 833ac66:	00 
 833ac67:	c7 44 24 04 e0 ef c2 	movl   $0x8c2efe0,0x4(%esp)
 833ac6e:	08 
 833ac6f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833ac72:	89 04 24             	mov    %eax,(%esp)
 833ac75:	e8 9e 4a 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833ac7a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833ac7e:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833ac85:	08 
 833ac86:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833ac89:	89 04 24             	mov    %eax,(%esp)
 833ac8c:	e8 f7 4a 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833ac91:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ac96:	e9 84 00 00 00       	jmp    833ad1f <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x185>
 833ac9b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ac9e:	89 04 24             	mov    %eax,(%esp)
 833aca1:	e8 aa 4c 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833aca6:	8b 45 14             	mov    0x14(%ebp),%eax
 833aca9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 833acac:	8b 45 0c             	mov    0xc(%ebp),%eax
 833acaf:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833acb3:	0f b6 f8             	movzbl %al,%edi
 833acb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 833acb9:	8b 70 07             	mov    0x7(%eax),%esi
 833acbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 833acbf:	8b 40 02             	mov    0x2(%eax),%eax
 833acc2:	89 c3                	mov    %eax,%ebx
 833acc4:	8b 45 08             	mov    0x8(%ebp),%eax
 833acc7:	8b 40 1c             	mov    0x1c(%eax),%eax
 833acca:	89 04 24             	mov    %eax,(%esp)
 833accd:	e8 ac f5 d9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 833acd2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 833acd5:	89 54 24 18          	mov    %edx,0x18(%esp)
 833acd9:	89 7c 24 14          	mov    %edi,0x14(%esp)
 833acdd:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 833ace4:	00 
 833ace5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833ace9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833aced:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833acf4:	00 
 833acf5:	89 04 24             	mov    %eax,(%esp)
 833acf8:	e8 b3 f7 1c 00       	call   850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>
 833acfd:	bb 01 00 00 00       	mov    $0x1,%ebx
 833ad02:	eb 1b                	jmp    833ad1f <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii+0x185>
 833ad04:	89 d3                	mov    %edx,%ebx
 833ad06:	89 c6                	mov    %eax,%esi
 833ad08:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ad0b:	89 04 24             	mov    %eax,(%esp)
 833ad0e:	e8 c5 4b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833ad13:	89 f0                	mov    %esi,%eax
 833ad15:	89 da                	mov    %ebx,%edx
 833ad17:	89 04 24             	mov    %eax,(%esp)
 833ad1a:	e8 31 8a 7a 00       	call   8ae3750 <_Unwind_Resume>
 833ad1f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833ad22:	89 04 24             	mov    %eax,(%esp)
 833ad25:	e8 ae 4b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833ad2a:	89 d8                	mov    %ebx,%eax
 833ad2c:	83 c4 5c             	add    $0x5c,%esp
 833ad2f:	5b                   	pop    %ebx
 833ad30:	5e                   	pop    %esi
 833ad31:	5f                   	pop    %edi
 833ad32:	5d                   	pop    %ebp
 833ad33:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::RecvMail @ 0x833ab9a

/* user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::RecvMail
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  bool bVar8;
  CDBMsgSender local_38 [8];
  cMyTrace local_30 [16];
  int local_20;
  
  cVar4 = IsCreatureEquipmentScope(this,param_2);
  if (cVar4 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_38,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833abfe to 0833acfc has its CatchHandler @ 0833ad04 */
      local_20 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar4 = CDBMsgSender::RecvMail(local_38,param_1,iVar5,param_2,param_3,local_20);
      bVar8 = cVar4 == '\x01';
      if (bVar8) {
        CDBMsgSender::Send(local_38);
        IVar1 = param_1[1];
        uVar2 = *(undefined4 *)(param_1 + 7);
        uVar3 = *(undefined4 *)(param_1 + 2);
        pCVar7 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x1c));
        CInventory::WriteCreatureLog(pCVar7,3,uVar3,uVar2,1,IVar1,param_3);
      }
      else {
        uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_30,
                           "bool user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int)",0xc09
                           ,5);
        cMyTrace::operator()(local_30,"cannot write db uid(%d)\n",uVar6 & 0xffff);
      }
      CDBMsgSender::~CDBMsgSender(local_38);
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}

```

---

## RegistTempPeriod

```asm
// === 0833d7de user_creature::CCreatureMgr::RegistTempPeriod  [0x0833d7de-0x833d88b] ===
 833d7de:	55                   	push   %ebp
 833d7df:	89 e5                	mov    %esp,%ebp
 833d7e1:	83 ec 38             	sub    $0x38,%esp
 833d7e4:	8b 45 08             	mov    0x8(%ebp),%eax
 833d7e7:	8d 48 30             	lea    0x30(%eax),%ecx
 833d7ea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833d7ed:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d7f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d7f4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d7f8:	89 04 24             	mov    %eax,(%esp)
 833d7fb:	e8 ee fa d8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 833d800:	83 ec 04             	sub    $0x4,%esp
 833d803:	8b 45 08             	mov    0x8(%ebp),%eax
 833d806:	8d 50 30             	lea    0x30(%eax),%edx
 833d809:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833d80c:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d810:	89 04 24             	mov    %eax,(%esp)
 833d813:	e8 02 fb d8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833d818:	83 ec 04             	sub    $0x4,%esp
 833d81b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833d81e:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d822:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833d825:	89 04 24             	mov    %eax,(%esp)
 833d828:	e8 9b cb d9 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 833d82d:	84 c0                	test   %al,%al
 833d82f:	74 07                	je     833d838 <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii+0x5a>
 833d831:	b8 00 00 00 00       	mov    $0x0,%eax
 833d836:	eb 52                	jmp    833d88a <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii+0xac>
 833d838:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d83b:	8d 55 10             	lea    0x10(%ebp),%edx
 833d83e:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d842:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d845:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d849:	89 04 24             	mov    %eax,(%esp)
 833d84c:	e8 61 3a dd ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 833d851:	83 ec 04             	sub    $0x4,%esp
 833d854:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d857:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d85b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d85e:	89 04 24             	mov    %eax,(%esp)
 833d861:	e8 ba 94 d8 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 833d866:	8b 45 08             	mov    0x8(%ebp),%eax
 833d869:	8d 48 30             	lea    0x30(%eax),%ecx
 833d86c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833d86f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 833d872:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d876:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d87a:	89 04 24             	mov    %eax,(%esp)
 833d87d:	e8 ce 94 d8 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 833d882:	83 ec 04             	sub    $0x4,%esp
 833d885:	b8 01 00 00 00       	mov    $0x1,%eax
 833d88a:	c9                   	leave
 833d88b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::RegistTempPeriod @ 0x833d7de

/* user_creature::CCreatureMgr::RegistTempPeriod(int, int, int) */

bool user_creature::CCreatureMgr::RegistTempPeriod(int param_1,int param_2,int param_3)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_2c,(_Rb_tree_iterator *)local_28);
  if (cVar1 == '\0') {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  return cVar1 == '\0';
}

```

---

## RegisterCreatureItem

```asm
// === 0833a77e user_creature::CCreatureMgr::RegisterCreatureItem  [0x0833a77e-0x833a853] ===
 833a77e:	55                   	push   %ebp
 833a77f:	89 e5                	mov    %esp,%ebp
 833a781:	56                   	push   %esi
 833a782:	53                   	push   %ebx
 833a783:	83 ec 40             	sub    $0x40,%esp
 833a786:	8b 45 10             	mov    0x10(%ebp),%eax
 833a789:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a78d:	8b 45 08             	mov    0x8(%ebp),%eax
 833a790:	89 04 24             	mov    %eax,(%esp)
 833a793:	e8 fa ea ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833a798:	85 c0                	test   %eax,%eax
 833a79a:	0f 95 c0             	setne  %al
 833a79d:	84 c0                	test   %al,%al
 833a79f:	74 59                	je     833a7fa <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi+0x7c>
 833a7a1:	8b 75 10             	mov    0x10(%ebp),%esi
 833a7a4:	8b 45 08             	mov    0x8(%ebp),%eax
 833a7a7:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a7aa:	89 04 24             	mov    %eax,(%esp)
 833a7ad:	e8 ca fb d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833a7b2:	0f b7 d8             	movzwl %ax,%ebx
 833a7b5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833a7bc:	00 
 833a7bd:	c7 44 24 08 b4 0b 00 	movl   $0xbb4,0x8(%esp)
 833a7c4:	00 
 833a7c5:	c7 44 24 04 40 f1 c2 	movl   $0x8c2f140,0x4(%esp)
 833a7cc:	08 
 833a7cd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833a7d0:	89 04 24             	mov    %eax,(%esp)
 833a7d3:	e8 40 4f 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833a7d8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833a7dc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833a7e0:	c7 44 24 04 1c d9 c2 	movl   $0x8c2d91c,0x4(%esp)
 833a7e7:	08 
 833a7e8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833a7eb:	89 04 24             	mov    %eax,(%esp)
 833a7ee:	e8 95 4f 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833a7f3:	b8 00 00 00 00       	mov    $0x0,%eax
 833a7f8:	eb 4f                	jmp    833a849 <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi+0xcb>
 833a7fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833a7fd:	8d 55 0c             	lea    0xc(%ebp),%edx
 833a800:	89 54 24 08          	mov    %edx,0x8(%esp)
 833a804:	8d 55 10             	lea    0x10(%ebp),%edx
 833a807:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a80b:	89 04 24             	mov    %eax,(%esp)
 833a80e:	e8 70 82 00 00       	call   8342a83 <_ZSt9make_pairIRiRPN13user_creature13CCreatureItemEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 833a813:	83 ec 04             	sub    $0x4,%esp
 833a816:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833a819:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a81d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833a820:	89 04 24             	mov    %eax,(%esp)
 833a823:	e8 9a 82 00 00       	call   8342ac2 <_ZNSt4pairIKiPN13user_creature13CCreatureItemEEC1IiS3_EEOS_IT_T0_E>
 833a828:	8b 55 08             	mov    0x8(%ebp),%edx
 833a82b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833a82e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 833a831:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833a835:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a839:	89 04 24             	mov    %eax,(%esp)
 833a83c:	e8 b1 82 00 00       	call   8342af2 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 833a841:	83 ec 04             	sub    $0x4,%esp
 833a844:	b8 01 00 00 00       	mov    $0x1,%eax
 833a849:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833a84c:	83 c4 00             	add    $0x0,%esp
 833a84f:	5b                   	pop    %ebx
 833a850:	5e                   	pop    %esi
 833a851:	5d                   	pop    %ebp
 833a852:	c3                   	ret
 833a853:	90                   	nop

```

```c
// user_creature::CCreatureMgr::RegisterCreatureItem @ 0x833a77e

/* user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int) */

bool __thiscall
user_creature::CCreatureMgr::RegisterCreatureItem
          (CCreatureMgr *this,CCreatureItem *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  cMyTrace local_34 [16];
  pair local_24 [8];
  pair<int_const,user_creature::CCreatureItem*> local_1c [8];
  int local_14 [2];
  
  iVar2 = FindCreatureItem((int)this);
  iVar1 = param_2;
  if (iVar2 == 0) {
    std::make_pair<int&,user_creature::CCreatureItem*&>(local_14,(CCreatureItem **)&param_2);
    std::pair<int_const,user_creature::CCreatureItem*>::pair<int,user_creature::CCreatureItem*>
              (local_1c,(pair *)local_14);
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::insert(local_24);
  }
  else {
    uVar3 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_34,
                       "bool user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)"
                       ,0xbb4,5);
    cMyTrace::operator()
              (local_34,"RegisterCreatureItem failed. uid(%d), key(%d)\n",uVar3 & 0xffff,iVar1);
  }
  return iVar2 == 0;
}

```

---

## RenameCreature

```asm
// === 08339b6e user_creature::CCreatureMgr::RenameCreature  [0x08339b6e-0x8339db9] ===
 8339b6e:	55                   	push   %ebp
 8339b6f:	89 e5                	mov    %esp,%ebp
 8339b71:	56                   	push   %esi
 8339b72:	53                   	push   %ebx
 8339b73:	83 ec 50             	sub    $0x50,%esp
 8339b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8339b79:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339b7c:	c7 44 24 0c 67 00 00 	movl   $0x67,0xc(%esp)
 8339b83:	00 
 8339b84:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8339b8b:	00 
 8339b8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339b90:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339b93:	89 04 24             	mov    %eax,(%esp)
 8339b96:	e8 8f 67 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8339b9b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8339ba2:	8b 45 08             	mov    0x8(%ebp),%eax
 8339ba5:	8b 40 18             	mov    0x18(%eax),%eax
 8339ba8:	85 c0                	test   %eax,%eax
 8339baa:	75 1d                	jne    8339bc9 <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x5b>
 8339bac:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8339bb3:	00 
 8339bb4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339bb7:	89 04 24             	mov    %eax,(%esp)
 8339bba:	e8 79 69 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 8339bbf:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339bc4:	e9 dd 01 00 00       	jmp    8339da6 <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x238>
 8339bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8339bcc:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339bcf:	89 04 24             	mov    %eax,(%esp)
 8339bd2:	e8 b7 06 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8339bd7:	8b 55 14             	mov    0x14(%ebp),%edx
 8339bda:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8339bde:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8339be5:	00 
 8339be6:	8b 55 10             	mov    0x10(%ebp),%edx
 8339be9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339bed:	89 04 24             	mov    %eax,(%esp)
 8339bf0:	e8 e9 5c 1c 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 8339bf5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8339bf8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8339bfc:	0f 95 c0             	setne  %al
 8339bff:	84 c0                	test   %al,%al
 8339c01:	74 1c                	je     8339c1f <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0xb1>
 8339c03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8339c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339c0a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339c0d:	89 04 24             	mov    %eax,(%esp)
 8339c10:	e8 23 69 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 8339c15:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339c1a:	e9 87 01 00 00       	jmp    8339da6 <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x238>
 8339c1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8339c22:	8b 40 18             	mov    0x18(%eax),%eax
 8339c25:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339c28:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339c2c:	89 04 24             	mov    %eax,(%esp)
 8339c2f:	e8 76 d7 ff ff       	call   83373aa <_ZN13user_creature9CCreature14RenameCreatureEPKc>
 8339c34:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339c37:	89 04 24             	mov    %eax,(%esp)
 8339c3a:	e8 71 47 d4 ff       	call   807e3b0 <strlen@plt>
 8339c3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339c43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339c46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339c4a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339c4d:	89 04 24             	mov    %eax,(%esp)
 8339c50:	e8 1d 6a 00 00       	call   8340672 <_ZN13user_creature17CPacketRespondent28MakeNotipacketRenameCreatureEPKci>
 8339c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8339c58:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339c5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8339c62:	00 
 8339c63:	89 04 24             	mov    %eax,(%esp)
 8339c66:	e8 53 77 34 00       	call   86813be <_ZN5CUser8get_areaEb>
 8339c6b:	89 c3                	mov    %eax,%ebx
 8339c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8339c70:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339c73:	89 04 24             	mov    %eax,(%esp)
 8339c76:	e8 e9 b8 30 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8339c7b:	0f be c0             	movsbl %al,%eax
 8339c7e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339c82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339c86:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339c89:	89 04 24             	mov    %eax,(%esp)
 8339c8c:	e8 73 67 00 00       	call   8340404 <_ZN13user_creature17CPacketRespondent9BroadcastEii>
 8339c91:	8b 45 08             	mov    0x8(%ebp),%eax
 8339c94:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339c97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339c9b:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8339ca2:	00 
 8339ca3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339ca6:	89 04 24             	mov    %eax,(%esp)
 8339ca9:	e8 00 5c 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8339cae:	8b 45 08             	mov    0x8(%ebp),%eax
 8339cb1:	8b 40 18             	mov    0x18(%eax),%eax
 8339cb4:	89 04 24             	mov    %eax,(%esp)
 8339cb7:	e8 02 53 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8339cbc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339cbf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8339cc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339cc7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339cca:	89 04 24             	mov    %eax,(%esp)
 8339ccd:	e8 0c 5f 00 00       	call   833fbde <_ZN13user_creature12CDBMsgSender18RenameCreatureItemEiPKc>
 8339cd2:	83 f0 01             	xor    $0x1,%eax
 8339cd5:	84 c0                	test   %al,%al
 8339cd7:	74 65                	je     8339d3e <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x1d0>
 8339cd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8339cdc:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339cdf:	89 04 24             	mov    %eax,(%esp)
 8339ce2:	e8 95 06 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8339ce7:	0f b7 d8             	movzwl %ax,%ebx
 8339cea:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8339cf1:	00 
 8339cf2:	c7 44 24 08 a0 0a 00 	movl   $0xaa0,0x8(%esp)
 8339cf9:	00 
 8339cfa:	c7 44 24 04 60 f2 c2 	movl   $0x8c2f260,0x4(%esp)
 8339d01:	08 
 8339d02:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8339d05:	89 04 24             	mov    %eax,(%esp)
 8339d08:	e8 0b 5a 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8339d0d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339d11:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 8339d18:	08 
 8339d19:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8339d1c:	89 04 24             	mov    %eax,(%esp)
 8339d1f:	e8 64 5a 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8339d24:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8339d2b:	00 
 8339d2c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339d2f:	89 04 24             	mov    %eax,(%esp)
 8339d32:	e8 01 68 00 00       	call   8340538 <_ZN13user_creature17CPacketRespondent8SetErrorEi>
 8339d37:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339d3c:	eb 40                	jmp    8339d7e <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x210>
 8339d3e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339d41:	89 04 24             	mov    %eax,(%esp)
 8339d44:	e8 07 5c 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8339d49:	8b 45 14             	mov    0x14(%ebp),%eax
 8339d4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339d50:	8b 45 10             	mov    0x10(%ebp),%eax
 8339d53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339d57:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339d5a:	89 04 24             	mov    %eax,(%esp)
 8339d5d:	e8 98 68 00 00       	call   83405fa <_ZN13user_creature17CPacketRespondent27MakeCmdpacketRenameCreatureEii>
 8339d62:	bb 01 00 00 00       	mov    $0x1,%ebx
 8339d67:	eb 15                	jmp    8339d7e <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x210>
 8339d69:	89 d3                	mov    %edx,%ebx
 8339d6b:	89 c6                	mov    %eax,%esi
 8339d6d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339d70:	89 04 24             	mov    %eax,(%esp)
 8339d73:	e8 60 5b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8339d78:	89 f0                	mov    %esi,%eax
 8339d7a:	89 da                	mov    %ebx,%edx
 8339d7c:	eb 0d                	jmp    8339d8b <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x21d>
 8339d7e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339d81:	89 04 24             	mov    %eax,(%esp)
 8339d84:	e8 4f 5b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8339d89:	eb 1b                	jmp    8339da6 <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii+0x238>
 8339d8b:	89 d3                	mov    %edx,%ebx
 8339d8d:	89 c6                	mov    %eax,%esi
 8339d8f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339d92:	89 04 24             	mov    %eax,(%esp)
 8339d95:	e8 d0 65 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8339d9a:	89 f0                	mov    %esi,%eax
 8339d9c:	89 da                	mov    %ebx,%edx
 8339d9e:	89 04 24             	mov    %eax,(%esp)
 8339da1:	e8 aa 99 7a 00       	call   8ae3750 <_Unwind_Resume>
 8339da6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8339da9:	89 04 24             	mov    %eax,(%esp)
 8339dac:	e8 b9 65 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8339db1:	89 d8                	mov    %ebx,%eax
 8339db3:	83 c4 50             	add    $0x50,%esp
 8339db6:	5b                   	pop    %ebx
 8339db7:	5e                   	pop    %esi
 8339db8:	5d                   	pop    %ebp
 8339db9:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::RenameCreature @ 0x8339b6e

/* user_creature::CCreatureMgr::RenameCreature(char const*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::RenameCreature
          (CCreatureMgr *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  CInventory *this_00;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  CPacketRespondent local_48 [32];
  CDBMsgSender local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  CPacketRespondent::CPacketRespondent(local_48,*(CUser **)(this + 0x1c),1,0x67);
  local_10 = 0;
  if (*(int *)(this + 0x18) == 0) {
                    /* try { // try from 08339bba to 08339cad has its CatchHandler @ 08339d8b */
    CPacketRespondent::SetError(local_48,4);
    bVar5 = false;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x1c));
    local_10 = CInventory::use_item(this_00,param_2,1,param_3);
    if (local_10 == 0) {
      CCreature::RenameCreature(*(CCreature **)(this + 0x18),param_1);
      sVar2 = strlen(param_1);
      CPacketRespondent::MakeNotipacketRenameCreature(local_48,param_1,sVar2);
      iVar3 = CUser::get_area(*(CUser **)(this + 0x1c),false);
      cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x1c));
      CPacketRespondent::Broadcast(local_48,(int)cVar1,iVar3);
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
      iVar3 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339ccd to 08339d61 has its CatchHandler @ 08339d69 */
      cVar1 = CDBMsgSender::RenameCreatureItem(local_28,iVar3,param_1);
      bVar5 = cVar1 == '\x01';
      if (bVar5) {
        CDBMsgSender::Send(local_28);
        CPacketRespondent::MakeCmdpacketRenameCreature(local_48,param_2,param_3);
      }
      else {
        uVar4 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_20,
                           "bool user_creature::CCreatureMgr::RenameCreature(const char*, int, int)"
                           ,0xaa0,5);
        cMyTrace::operator()(local_20,"cannot write db uid(%d)\n",uVar4 & 0xffff);
        CPacketRespondent::SetError(local_48,2);
      }
                    /* try { // try from 08339d84 to 08339d88 has its CatchHandler @ 08339d8b */
      CDBMsgSender::~CDBMsgSender(local_28);
    }
    else {
      CPacketRespondent::SetError(local_48,local_10);
      bVar5 = false;
    }
  }
  CPacketRespondent::~CPacketRespondent(local_48);
  return bVar5;
}

```

---

## Reset

```asm
// === 0833a45a user_creature::CCreatureMgr::Reset  [0x0833a45a-0x833a5bb] ===
 833a45a:	55                   	push   %ebp
 833a45b:	89 e5                	mov    %esp,%ebp
 833a45d:	83 ec 48             	sub    $0x48,%esp
 833a460:	8b 45 08             	mov    0x8(%ebp),%eax
 833a463:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 833a46a:	8b 45 08             	mov    0x8(%ebp),%eax
 833a46d:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 833a474:	8b 45 08             	mov    0x8(%ebp),%eax
 833a477:	c7 40 2c ff ff ff ff 	movl   $0xffffffff,0x2c(%eax)
 833a47e:	8b 45 08             	mov    0x8(%ebp),%eax
 833a481:	83 c0 30             	add    $0x30,%eax
 833a484:	89 04 24             	mov    %eax,(%esp)
 833a487:	e8 b4 b3 ef ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 833a48c:	85 c0                	test   %eax,%eax
 833a48e:	0f 95 c0             	setne  %al
 833a491:	84 c0                	test   %al,%al
 833a493:	74 0e                	je     833a4a3 <_ZN13user_creature12CCreatureMgr5ResetEv+0x49>
 833a495:	8b 45 08             	mov    0x8(%ebp),%eax
 833a498:	83 c0 30             	add    $0x30,%eax
 833a49b:	89 04 24             	mov    %eax,(%esp)
 833a49e:	e8 3b c8 d8 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 833a4a3:	8b 45 08             	mov    0x8(%ebp),%eax
 833a4a6:	89 04 24             	mov    %eax,(%esp)
 833a4a9:	e8 44 74 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833a4ae:	85 c0                	test   %eax,%eax
 833a4b0:	0f 95 c0             	setne  %al
 833a4b3:	84 c0                	test   %al,%al
 833a4b5:	0f 84 cc 00 00 00    	je     833a587 <_ZN13user_creature12CCreatureMgr5ResetEv+0x12d>
 833a4bb:	8b 55 08             	mov    0x8(%ebp),%edx
 833a4be:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833a4c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a4c5:	89 04 24             	mov    %eax,(%esp)
 833a4c8:	e8 2b 85 00 00       	call   83429f8 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833a4cd:	83 ec 04             	sub    $0x4,%esp
 833a4d0:	eb 7b                	jmp    833a54d <_ZN13user_creature12CCreatureMgr5ResetEv+0xf3>
 833a4d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833a4d5:	89 04 24             	mov    %eax,(%esp)
 833a4d8:	e8 0d 85 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833a4dd:	8b 40 04             	mov    0x4(%eax),%eax
 833a4e0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833a4e3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 833a4e7:	74 47                	je     833a530 <_ZN13user_creature12CCreatureMgr5ResetEv+0xd6>
 833a4e9:	e8 27 52 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 833a4ee:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833a4f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a4f5:	89 04 24             	mov    %eax,(%esp)
 833a4f8:	e8 1b 51 00 00       	call   833f618 <_ZN13user_creature20CCreatureItemFactory16FreeCreatureItemEPNS_13CCreatureItemE>
 833a4fd:	83 f0 01             	xor    $0x1,%eax
 833a500:	84 c0                	test   %al,%al
 833a502:	74 2c                	je     833a530 <_ZN13user_creature12CCreatureMgr5ResetEv+0xd6>
 833a504:	c7 44 24 10 03 d9 c2 	movl   $0x8c2d903,0x10(%esp)
 833a50b:	08 
 833a50c:	c7 44 24 0c 50 0b 00 	movl   $0xb50,0xc(%esp)
 833a513:	00 
 833a514:	c7 44 24 08 a0 f1 c2 	movl   $0x8c2f1a0,0x8(%esp)
 833a51b:	08 
 833a51c:	c7 44 24 04 6a d7 c2 	movl   $0x8c2d76a,0x4(%esp)
 833a523:	08 
 833a524:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 833a52b:	e8 da 96 79 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 833a530:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833a533:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833a53a:	00 
 833a53b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 833a53e:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a542:	89 04 24             	mov    %eax,(%esp)
 833a545:	e8 e8 84 00 00       	call   8342a32 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833a54a:	83 ec 04             	sub    $0x4,%esp
 833a54d:	8b 55 08             	mov    0x8(%ebp),%edx
 833a550:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833a553:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a557:	89 04 24             	mov    %eax,(%esp)
 833a55a:	e8 51 84 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833a55f:	83 ec 04             	sub    $0x4,%esp
 833a562:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833a565:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a569:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833a56c:	89 04 24             	mov    %eax,(%esp)
 833a56f:	e8 aa 84 00 00       	call   8342a1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833a574:	84 c0                	test   %al,%al
 833a576:	0f 85 56 ff ff ff    	jne    833a4d2 <_ZN13user_creature12CCreatureMgr5ResetEv+0x78>
 833a57c:	8b 45 08             	mov    0x8(%ebp),%eax
 833a57f:	89 04 24             	mov    %eax,(%esp)
 833a582:	e8 e9 84 00 00       	call   8342a70 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5clearEv>
 833a587:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833a58e:	eb 18                	jmp    833a5a8 <_ZN13user_creature12CCreatureMgr5ResetEv+0x14e>
 833a590:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833a593:	83 c0 08             	add    $0x8,%eax
 833a596:	c1 e0 02             	shl    $0x2,%eax
 833a599:	03 45 08             	add    0x8(%ebp),%eax
 833a59c:	89 04 24             	mov    %eax,(%esp)
 833a59f:	e8 bc c9 ff ff       	call   8336f60 <_ZN13user_creature9CArtifact5ResetEv>
 833a5a4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 833a5a8:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 833a5ac:	0f 9e c0             	setle  %al
 833a5af:	84 c0                	test   %al,%al
 833a5b1:	75 dd                	jne    833a590 <_ZN13user_creature12CCreatureMgr5ResetEv+0x136>
 833a5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 833a5b6:	c6 40 48 01          	movb   $0x1,0x48(%eax)
 833a5ba:	c9                   	leave
 833a5bb:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::Reset @ 0x833a45a

/* user_creature::CCreatureMgr::Reset() */

void __thiscall user_creature::CCreatureMgr::Reset(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  CCreatureItemFactory *this_00;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_20 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_18 [4];
  CCreatureItem *local_14;
  int local_10;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 0x30));
  if (iVar2 != 0) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30)
              );
  }
  iVar2 = std::
          map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_20);
      local_14 = *(CCreatureItem **)(iVar2 + 4);
      if (local_14 != (CCreatureItem *)0x0) {
        this_00 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
        cVar1 = CCreatureItemFactory::FreeCreatureItem(this_00,local_14);
        if (cVar1 != '\x01') {
          LogManager::logFormat
                    (1,"Creature.cpp","void user_creature::CCreatureMgr::Reset()",0xb50,
                     "FreeCreatureItem() error");
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_18,(int)local_20);
    }
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::clear((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
             *)this);
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    CArtifact::Reset((CArtifact *)(this + (local_10 + 8) * 4));
  }
  this[0x48] = (CCreatureMgr)0x1;
  return;
}

```

---

## ResponseCreature

```asm
// === 0833a6d8 user_creature::CCreatureMgr::ResponseCreature  [0x0833a6d8-0x833a77d] ===
 833a6d8:	55                   	push   %ebp
 833a6d9:	89 e5                	mov    %esp,%ebp
 833a6db:	56                   	push   %esi
 833a6dc:	53                   	push   %ebx
 833a6dd:	83 ec 30             	sub    $0x30,%esp
 833a6e0:	8b 45 08             	mov    0x8(%ebp),%eax
 833a6e3:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a6e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833a6ed:	00 
 833a6ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833a6f5:	00 
 833a6f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a6fa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a6fd:	89 04 24             	mov    %eax,(%esp)
 833a700:	e8 25 5c 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833a705:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a708:	89 04 24             	mov    %eax,(%esp)
 833a70b:	e8 6e 62 00 00       	call   834097e <_ZN13user_creature17CPacketRespondent30MakeNotipacketResponseCreatureEv>
 833a710:	8b 45 08             	mov    0x8(%ebp),%eax
 833a713:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a716:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833a71d:	00 
 833a71e:	89 04 24             	mov    %eax,(%esp)
 833a721:	e8 98 6c 34 00       	call   86813be <_ZN5CUser8get_areaEb>
 833a726:	89 c3                	mov    %eax,%ebx
 833a728:	8b 45 08             	mov    0x8(%ebp),%eax
 833a72b:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a72e:	89 04 24             	mov    %eax,(%esp)
 833a731:	e8 2e ae 30 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 833a736:	0f be c0             	movsbl %al,%eax
 833a739:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833a73d:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a741:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a744:	89 04 24             	mov    %eax,(%esp)
 833a747:	e8 b8 5c 00 00       	call   8340404 <_ZN13user_creature17CPacketRespondent9BroadcastEii>
 833a74c:	89 c3                	mov    %eax,%ebx
 833a74e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a751:	89 04 24             	mov    %eax,(%esp)
 833a754:	e8 11 5c 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833a759:	89 d8                	mov    %ebx,%eax
 833a75b:	83 c4 30             	add    $0x30,%esp
 833a75e:	5b                   	pop    %ebx
 833a75f:	5e                   	pop    %esi
 833a760:	5d                   	pop    %ebp
 833a761:	c3                   	ret
 833a762:	89 d3                	mov    %edx,%ebx
 833a764:	89 c6                	mov    %eax,%esi
 833a766:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833a769:	89 04 24             	mov    %eax,(%esp)
 833a76c:	e8 f9 5b 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833a771:	89 f0                	mov    %esi,%eax
 833a773:	89 da                	mov    %ebx,%edx
 833a775:	89 04 24             	mov    %eax,(%esp)
 833a778:	e8 d3 8f 7a 00       	call   8ae3750 <_Unwind_Resume>
 833a77d:	90                   	nop

```

```c
// user_creature::CCreatureMgr::ResponseCreature @ 0x833a6d8

/* user_creature::CCreatureMgr::ResponseCreature() */

undefined4 __thiscall user_creature::CCreatureMgr::ResponseCreature(CCreatureMgr *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833a70b to 0833a74b has its CatchHandler @ 0833a762 */
  CPacketRespondent::MakeNotipacketResponseCreature(local_2c);
  iVar2 = CUser::get_area(*(CUser **)(this + 0x1c),false);
  cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x1c));
  uVar3 = CPacketRespondent::Broadcast(local_2c,(int)cVar1,iVar2);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return uVar3;
}

```

---

## SaveCreatureItem

```asm
// === 0833bbbe user_creature::CCreatureMgr::SaveCreatureItem  [0x0833bbbe-0x833bdd1] ===
 833bbbe:	55                   	push   %ebp
 833bbbf:	89 e5                	mov    %esp,%ebp
 833bbc1:	56                   	push   %esi
 833bbc2:	53                   	push   %ebx
 833bbc3:	83 ec 40             	sub    $0x40,%esp
 833bbc6:	8b 45 08             	mov    0x8(%ebp),%eax
 833bbc9:	8b 40 1c             	mov    0x1c(%eax),%eax
 833bbcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 833bbd0:	c7 44 24 04 89 00 00 	movl   $0x89,0x4(%esp)
 833bbd7:	00 
 833bbd8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bbdb:	89 04 24             	mov    %eax,(%esp)
 833bbde:	e8 cb 3c 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833bbe3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bbe6:	89 04 24             	mov    %eax,(%esp)
 833bbe9:	e8 a6 6f 00 00       	call   8342b94 <_ZN13user_creature12CDBMsgSender11GetInBufferI22SIG_CREATURE_ITEM_LISTEEPT_v>
 833bbee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833bbf1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 833bbf5:	75 55                	jne    833bc4c <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x8e>
 833bbf7:	8b 45 08             	mov    0x8(%ebp),%eax
 833bbfa:	8b 40 1c             	mov    0x1c(%eax),%eax
 833bbfd:	89 04 24             	mov    %eax,(%esp)
 833bc00:	e8 77 e7 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833bc05:	0f b7 d8             	movzwl %ax,%ebx
 833bc08:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833bc0f:	00 
 833bc10:	c7 44 24 08 90 0d 00 	movl   $0xd90,0x8(%esp)
 833bc17:	00 
 833bc18:	c7 44 24 04 00 ed c2 	movl   $0x8c2ed00,0x4(%esp)
 833bc1f:	08 
 833bc20:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833bc23:	89 04 24             	mov    %eax,(%esp)
 833bc26:	e8 ed 3a 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833bc2b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833bc2f:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833bc36:	08 
 833bc37:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833bc3a:	89 04 24             	mov    %eax,(%esp)
 833bc3d:	e8 46 3b 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833bc42:	bb 00 00 00 00       	mov    $0x0,%ebx
 833bc47:	e9 6f 01 00 00       	jmp    833bdbb <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x1fd>
 833bc4c:	c7 44 24 08 78 40 00 	movl   $0x4078,0x8(%esp)
 833bc53:	00 
 833bc54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833bc5b:	00 
 833bc5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bc5f:	89 04 24             	mov    %eax,(%esp)
 833bc62:	e8 59 20 d4 ff       	call   807dcc0 <memset@plt>
 833bc67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bc6a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 833bc70:	8b 55 08             	mov    0x8(%ebp),%edx
 833bc73:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833bc76:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bc7a:	89 04 24             	mov    %eax,(%esp)
 833bc7d:	e8 76 6d 00 00       	call   83429f8 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833bc82:	83 ec 04             	sub    $0x4,%esp
 833bc85:	e9 bf 00 00 00       	jmp    833bd49 <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x18b>
 833bc8a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833bc8d:	89 04 24             	mov    %eax,(%esp)
 833bc90:	e8 55 6d 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833bc95:	8b 40 04             	mov    0x4(%eax),%eax
 833bc98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833bc9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bc9e:	8b 00                	mov    (%eax),%eax
 833bca0:	83 c0 04             	add    $0x4,%eax
 833bca3:	8b 10                	mov    (%eax),%edx
 833bca5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bca8:	89 04 24             	mov    %eax,(%esp)
 833bcab:	ff d2                	call   *%edx
 833bcad:	84 c0                	test   %al,%al
 833bcaf:	74 7b                	je     833bd2c <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x16e>
 833bcb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bcb4:	8b 00                	mov    (%eax),%eax
 833bcb6:	83 c0 0c             	add    $0xc,%eax
 833bcb9:	8b 18                	mov    (%eax),%ebx
 833bcbb:	8b 45 08             	mov    0x8(%ebp),%eax
 833bcbe:	8b 48 1c             	mov    0x1c(%eax),%ecx
 833bcc1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bcc4:	8b 00                	mov    (%eax),%eax
 833bcc6:	c1 e0 03             	shl    $0x3,%eax
 833bcc9:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 833bcd0:	29 c2                	sub    %eax,%edx
 833bcd2:	8d 82 a0 21 00 00    	lea    0x21a0(%edx),%eax
 833bcd8:	03 45 f0             	add    -0x10(%ebp),%eax
 833bcdb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833bcde:	8b 12                	mov    (%edx),%edx
 833bce0:	6b d2 3d             	imul   $0x3d,%edx,%edx
 833bce3:	03 55 f0             	add    -0x10(%ebp),%edx
 833bce6:	83 c2 04             	add    $0x4,%edx
 833bce9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 833bced:	89 44 24 08          	mov    %eax,0x8(%esp)
 833bcf1:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bcf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bcf8:	89 04 24             	mov    %eax,(%esp)
 833bcfb:	ff d3                	call   *%ebx
 833bcfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bd00:	8b 00                	mov    (%eax),%eax
 833bd02:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 833bd05:	c1 e0 03             	shl    $0x3,%eax
 833bd08:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 833bd0f:	29 c2                	sub    %eax,%edx
 833bd11:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 833bd14:	05 a4 21 00 00       	add    $0x21a4,%eax
 833bd19:	8b 00                	mov    (%eax),%eax
 833bd1b:	85 c0                	test   %eax,%eax
 833bd1d:	74 0d                	je     833bd2c <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x16e>
 833bd1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bd22:	8b 00                	mov    (%eax),%eax
 833bd24:	8d 50 01             	lea    0x1(%eax),%edx
 833bd27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bd2a:	89 10                	mov    %edx,(%eax)
 833bd2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833bd2f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833bd36:	00 
 833bd37:	8d 55 cc             	lea    -0x34(%ebp),%edx
 833bd3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bd3e:	89 04 24             	mov    %eax,(%esp)
 833bd41:	e8 ec 6c 00 00       	call   8342a32 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833bd46:	83 ec 04             	sub    $0x4,%esp
 833bd49:	8b 55 08             	mov    0x8(%ebp),%edx
 833bd4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bd4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bd53:	89 04 24             	mov    %eax,(%esp)
 833bd56:	e8 55 6c 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833bd5b:	83 ec 04             	sub    $0x4,%esp
 833bd5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bd61:	89 44 24 04          	mov    %eax,0x4(%esp)
 833bd65:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833bd68:	89 04 24             	mov    %eax,(%esp)
 833bd6b:	e8 ae 6c 00 00       	call   8342a1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833bd70:	84 c0                	test   %al,%al
 833bd72:	0f 85 12 ff ff ff    	jne    833bc8a <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0xcc>
 833bd78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833bd7b:	8b 00                	mov    (%eax),%eax
 833bd7d:	85 c0                	test   %eax,%eax
 833bd7f:	74 0d                	je     833bd8e <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x1d0>
 833bd81:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bd84:	89 04 24             	mov    %eax,(%esp)
 833bd87:	e8 c4 3b 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833bd8c:	eb 0b                	jmp    833bd99 <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x1db>
 833bd8e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bd91:	89 04 24             	mov    %eax,(%esp)
 833bd94:	e8 fb 3b 00 00       	call   833f994 <_ZN13user_creature12CDBMsgSender6CancelEv>
 833bd99:	bb 01 00 00 00       	mov    $0x1,%ebx
 833bd9e:	eb 1b                	jmp    833bdbb <_ZN13user_creature12CCreatureMgr16SaveCreatureItemEv+0x1fd>
 833bda0:	89 d3                	mov    %edx,%ebx
 833bda2:	89 c6                	mov    %eax,%esi
 833bda4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bda7:	89 04 24             	mov    %eax,(%esp)
 833bdaa:	e8 29 3b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833bdaf:	89 f0                	mov    %esi,%eax
 833bdb1:	89 da                	mov    %ebx,%edx
 833bdb3:	89 04 24             	mov    %eax,(%esp)
 833bdb6:	e8 95 79 7a 00       	call   8ae3750 <_Unwind_Resume>
 833bdbb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833bdbe:	89 04 24             	mov    %eax,(%esp)
 833bdc1:	e8 12 3b 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833bdc6:	89 d8                	mov    %ebx,%eax
 833bdc8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833bdcb:	83 c4 00             	add    $0x0,%esp
 833bdce:	5b                   	pop    %ebx
 833bdcf:	5e                   	pop    %esi
 833bdd0:	5d                   	pop    %ebp
 833bdd1:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SaveCreatureItem @ 0x833bbbe

/* user_creature::CCreatureMgr::SaveCreatureItem() */

undefined4 __thiscall user_creature::CCreatureMgr::SaveCreatureItem(CCreatureMgr *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_38 [4];
  CDBMsgSender local_34 [8];
  cMyTrace local_2c [16];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_18 [4];
  SIG_CREATURE_ITEM_LIST *local_14;
  int *local_10;
  
  CDBMsgSender::CDBMsgSender(local_34,0x89,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833bbe9 to 0833bd98 has its CatchHandler @ 0833bda0 */
  local_14 = CDBMsgSender::GetInBuffer<SIG_CREATURE_ITEM_LIST>(local_34);
  if (local_14 == (SIG_CREATURE_ITEM_LIST *)0x0) {
    uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreatureMgr::SaveCreatureItem()",0xd90,5);
    cMyTrace::operator()(local_2c,"cannot write db uid(%d)\n",uVar2 & 0xffff);
    uVar4 = 0;
  }
  else {
    memset(local_14,0,0x4078);
    *(int *)local_14 = 0;
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_38,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                         local_38);
      local_10 = *(int **)(iVar3 + 4);
      cVar1 = (**(code **)(*local_10 + 4))(local_10);
      if (cVar1 != '\0') {
        (**(code **)(*local_10 + 0xc))
                  (local_10,local_14 + *(int *)local_14 * 0x3d + 4,
                   local_14 + *(int *)local_14 * 0x38 + 0x21a0,*(undefined4 *)(this + 0x1c));
        if (*(int *)(local_14 + *(int *)local_14 * 0x38 + 0x21a4) != 0) {
          *(int *)local_14 = *(int *)local_14 + 1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
                (local_18,(int)local_38);
    }
    if (*(int *)local_14 == 0) {
      CDBMsgSender::Cancel(local_34);
    }
    else {
      CDBMsgSender::Send(local_34);
    }
    uVar4 = 1;
  }
  CDBMsgSender::~CDBMsgSender(local_34);
  return uVar4;
}

```

---

## SendCreatureItemInfo

```asm
// === 0833b498 user_creature::CCreatureMgr::SendCreatureItemInfo  [0x0833b498-0x833b591] ===
 833b498:	55                   	push   %ebp
 833b499:	89 e5                	mov    %esp,%ebp
 833b49b:	56                   	push   %esi
 833b49c:	53                   	push   %ebx
 833b49d:	83 ec 40             	sub    $0x40,%esp
 833b4a0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833b4a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b4aa:	8b 58 2c             	mov    0x2c(%eax),%ebx
 833b4ad:	8b 45 08             	mov    0x8(%ebp),%eax
 833b4b0:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b4b3:	89 04 24             	mov    %eax,(%esp)
 833b4b6:	e8 d3 ed d9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 833b4bb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833b4bf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833b4c6:	00 
 833b4c7:	89 04 24             	mov    %eax,(%esp)
 833b4ca:	e8 df 0d 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 833b4cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b4d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833b4d6:	0f 84 aa 00 00 00    	je     833b586 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM+0xee>
 833b4dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b4df:	8b 40 02             	mov    0x2(%eax),%eax
 833b4e2:	85 c0                	test   %eax,%eax
 833b4e4:	0f 84 9c 00 00 00    	je     833b586 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM+0xee>
 833b4ea:	8b 45 08             	mov    0x8(%ebp),%eax
 833b4ed:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b4f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833b4f7:	00 
 833b4f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833b4ff:	00 
 833b500:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b504:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833b507:	89 04 24             	mov    %eax,(%esp)
 833b50a:	e8 1b 4e 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833b50f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b512:	8b 50 2c             	mov    0x2c(%eax),%edx
 833b515:	8b 45 08             	mov    0x8(%ebp),%eax
 833b518:	89 54 24 08          	mov    %edx,0x8(%esp)
 833b51c:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b520:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833b523:	89 04 24             	mov    %eax,(%esp)
 833b526:	e8 b5 54 00 00       	call   83409e0 <_ZN13user_creature17CPacketRespondent30MakeNotipacketCreatureItemListEPKSt3mapIiPNS_13CCreatureItemESt4lessIiESaISt4pairIKiS3_EEEi>
 833b52b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833b52e:	89 04 24             	mov    %eax,(%esp)
 833b531:	e8 aa 4e 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 833b536:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b539:	8b 50 2c             	mov    0x2c(%eax),%edx
 833b53c:	8b 45 08             	mov    0x8(%ebp),%eax
 833b53f:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b542:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833b546:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 833b54d:	00 
 833b54e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833b555:	00 
 833b556:	89 04 24             	mov    %eax,(%esp)
 833b559:	e8 fc 10 34 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 833b55e:	eb 1b                	jmp    833b57b <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM+0xe3>
 833b560:	89 d3                	mov    %edx,%ebx
 833b562:	89 c6                	mov    %eax,%esi
 833b564:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833b567:	89 04 24             	mov    %eax,(%esp)
 833b56a:	e8 fb 4d 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833b56f:	89 f0                	mov    %esi,%eax
 833b571:	89 da                	mov    %ebx,%edx
 833b573:	89 04 24             	mov    %eax,(%esp)
 833b576:	e8 d5 81 7a 00       	call   8ae3750 <_Unwind_Resume>
 833b57b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833b57e:	89 04 24             	mov    %eax,(%esp)
 833b581:	e8 e4 4d 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833b586:	b8 01 00 00 00       	mov    $0x1,%eax
 833b58b:	83 c4 40             	add    $0x40,%esp
 833b58e:	5b                   	pop    %ebx
 833b58f:	5e                   	pop    %esi
 833b590:	5d                   	pop    %ebp
 833b591:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SendCreatureItemInfo @ 0x833b498

/* user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::SendCreatureItemInfo(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  int iVar1;
  CInventory *this_00;
  CPacketRespondent local_30 [32];
  int local_10;
  
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x1c));
  local_10 = CInventory::GetInvenRef(this_00,3,iVar1);
  if ((local_10 != 0) && (*(int *)(local_10 + 2) != 0)) {
    CPacketRespondent::CPacketRespondent(local_30,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833b526 to 0833b55d has its CatchHandler @ 0833b560 */
    CPacketRespondent::MakeNotipacketCreatureItemList(local_30,(map *)this,*(int *)(param_1 + 0x2c))
    ;
    CPacketRespondent::Send(local_30);
    CUser::SendUpdateItemList(*(CUser **)(this + 0x1c),1,7,*(undefined4 *)(param_1 + 0x2c));
    CPacketRespondent::~CPacketRespondent(local_30);
  }
  return 1;
}

```

---

## SendCreatureItemList

```asm
// === 0833bdd2 user_creature::CCreatureMgr::SendCreatureItemList  [0x0833bdd2-0x833be55] ===
 833bdd2:	55                   	push   %ebp
 833bdd3:	89 e5                	mov    %esp,%ebp
 833bdd5:	56                   	push   %esi
 833bdd6:	53                   	push   %ebx
 833bdd7:	83 ec 30             	sub    $0x30,%esp
 833bdda:	8b 45 08             	mov    0x8(%ebp),%eax
 833bddd:	8b 40 1c             	mov    0x1c(%eax),%eax
 833bde0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833bde7:	00 
 833bde8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833bdef:	00 
 833bdf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 833bdf4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833bdf7:	89 04 24             	mov    %eax,(%esp)
 833bdfa:	e8 2b 45 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833bdff:	8b 45 08             	mov    0x8(%ebp),%eax
 833be02:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 833be09:	ff 
 833be0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 833be0e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833be11:	89 04 24             	mov    %eax,(%esp)
 833be14:	e8 c7 4b 00 00       	call   83409e0 <_ZN13user_creature17CPacketRespondent30MakeNotipacketCreatureItemListEPKSt3mapIiPNS_13CCreatureItemESt4lessIiESaISt4pairIKiS3_EEEi>
 833be19:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833be1c:	89 04 24             	mov    %eax,(%esp)
 833be1f:	e8 bc 45 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 833be24:	89 c3                	mov    %eax,%ebx
 833be26:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833be29:	89 04 24             	mov    %eax,(%esp)
 833be2c:	e8 39 45 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833be31:	89 d8                	mov    %ebx,%eax
 833be33:	83 c4 30             	add    $0x30,%esp
 833be36:	5b                   	pop    %ebx
 833be37:	5e                   	pop    %esi
 833be38:	5d                   	pop    %ebp
 833be39:	c3                   	ret
 833be3a:	89 d3                	mov    %edx,%ebx
 833be3c:	89 c6                	mov    %eax,%esi
 833be3e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833be41:	89 04 24             	mov    %eax,(%esp)
 833be44:	e8 21 45 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833be49:	89 f0                	mov    %esi,%eax
 833be4b:	89 da                	mov    %ebx,%edx
 833be4d:	89 04 24             	mov    %eax,(%esp)
 833be50:	e8 fb 78 7a 00       	call   8ae3750 <_Unwind_Resume>
 833be55:	90                   	nop

```

```c
// user_creature::CCreatureMgr::SendCreatureItemList @ 0x833bdd2

/* user_creature::CCreatureMgr::SendCreatureItemList() const */

undefined4 __thiscall user_creature::CCreatureMgr::SendCreatureItemList(CCreatureMgr *this)

{
  undefined4 uVar1;
  CPacketRespondent local_2c [32];
  
  CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833be14 to 0833be23 has its CatchHandler @ 0833be3a */
  CPacketRespondent::MakeNotipacketCreatureItemList(local_2c,(map *)this,-1);
  uVar1 = CPacketRespondent::Send(local_2c);
  CPacketRespondent::~CPacketRespondent(local_2c);
  return uVar1;
}

```

---

## SendMail

```asm
// === 0833aa32 user_creature::CCreatureMgr::SendMail  [0x0833aa32-0x833ab99] ===
 833aa32:	55                   	push   %ebp
 833aa33:	89 e5                	mov    %esp,%ebp
 833aa35:	56                   	push   %esi
 833aa36:	53                   	push   %ebx
 833aa37:	83 ec 40             	sub    $0x40,%esp
 833aa3a:	8b 45 10             	mov    0x10(%ebp),%eax
 833aa3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 833aa41:	8b 45 08             	mov    0x8(%ebp),%eax
 833aa44:	89 04 24             	mov    %eax,(%esp)
 833aa47:	e8 20 e8 ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833aa4c:	83 f0 01             	xor    $0x1,%eax
 833aa4f:	84 c0                	test   %al,%al
 833aa51:	74 0a                	je     833aa5d <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x2b>
 833aa53:	bb 01 00 00 00       	mov    $0x1,%ebx
 833aa58:	e9 34 01 00 00       	jmp    833ab91 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x15f>
 833aa5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833aa60:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833aa64:	3c 05                	cmp    $0x5,%al
 833aa66:	74 0a                	je     833aa72 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x40>
 833aa68:	bb 01 00 00 00       	mov    $0x1,%ebx
 833aa6d:	e9 1f 01 00 00       	jmp    833ab91 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x15f>
 833aa72:	8b 45 08             	mov    0x8(%ebp),%eax
 833aa75:	8b 40 1c             	mov    0x1c(%eax),%eax
 833aa78:	89 44 24 08          	mov    %eax,0x8(%esp)
 833aa7c:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833aa83:	00 
 833aa84:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833aa87:	89 04 24             	mov    %eax,(%esp)
 833aa8a:	e8 1f 4e 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833aa8f:	8b 45 08             	mov    0x8(%ebp),%eax
 833aa92:	89 04 24             	mov    %eax,(%esp)
 833aa95:	e8 58 6e 00 00       	call   83418f2 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833aa9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833aa9d:	8b 45 08             	mov    0x8(%ebp),%eax
 833aaa0:	8b 40 1c             	mov    0x1c(%eax),%eax
 833aaa3:	89 04 24             	mov    %eax,(%esp)
 833aaa6:	e8 a3 11 d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833aaab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 833aaae:	89 54 24 14          	mov    %edx,0x14(%esp)
 833aab2:	8b 55 14             	mov    0x14(%ebp),%edx
 833aab5:	89 54 24 10          	mov    %edx,0x10(%esp)
 833aab9:	8b 55 10             	mov    0x10(%ebp),%edx
 833aabc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833aac0:	89 44 24 08          	mov    %eax,0x8(%esp)
 833aac4:	8b 45 0c             	mov    0xc(%ebp),%eax
 833aac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 833aacb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833aace:	89 04 24             	mov    %eax,(%esp)
 833aad1:	e8 b6 53 00 00       	call   833fe8c <_ZN13user_creature12CDBMsgSender8SendMailEP10Inven_Itemiiii>
 833aad6:	83 f0 01             	xor    $0x1,%eax
 833aad9:	84 c0                	test   %al,%al
 833aadb:	74 52                	je     833ab2f <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0xfd>
 833aadd:	8b 45 08             	mov    0x8(%ebp),%eax
 833aae0:	8b 40 1c             	mov    0x1c(%eax),%eax
 833aae3:	89 04 24             	mov    %eax,(%esp)
 833aae6:	e8 91 f8 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833aaeb:	0f b7 d8             	movzwl %ax,%ebx
 833aaee:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833aaf5:	00 
 833aaf6:	c7 44 24 08 ed 0b 00 	movl   $0xbed,0x8(%esp)
 833aafd:	00 
 833aafe:	c7 44 24 04 40 f0 c2 	movl   $0x8c2f040,0x4(%esp)
 833ab05:	08 
 833ab06:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833ab09:	89 04 24             	mov    %eax,(%esp)
 833ab0c:	e8 07 4c 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833ab11:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833ab15:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833ab1c:	08 
 833ab1d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833ab20:	89 04 24             	mov    %eax,(%esp)
 833ab23:	e8 60 4c 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833ab28:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ab2d:	eb 57                	jmp    833ab86 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x154>
 833ab2f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833ab32:	89 04 24             	mov    %eax,(%esp)
 833ab35:	e8 16 4e 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833ab3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ab3d:	8b 40 07             	mov    0x7(%eax),%eax
 833ab40:	8b 55 14             	mov    0x14(%ebp),%edx
 833ab43:	89 54 24 08          	mov    %edx,0x8(%esp)
 833ab47:	89 44 24 04          	mov    %eax,0x4(%esp)
 833ab4b:	8b 45 08             	mov    0x8(%ebp),%eax
 833ab4e:	89 04 24             	mov    %eax,(%esp)
 833ab51:	e8 b0 0a 00 00       	call   833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>
 833ab56:	83 f0 01             	xor    $0x1,%eax
 833ab59:	84 c0                	test   %al,%al
 833ab5b:	74 07                	je     833ab64 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x132>
 833ab5d:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ab62:	eb 22                	jmp    833ab86 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x154>
 833ab64:	bb 01 00 00 00       	mov    $0x1,%ebx
 833ab69:	eb 1b                	jmp    833ab86 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii+0x154>
 833ab6b:	89 d3                	mov    %edx,%ebx
 833ab6d:	89 c6                	mov    %eax,%esi
 833ab6f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833ab72:	89 04 24             	mov    %eax,(%esp)
 833ab75:	e8 5e 4d 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833ab7a:	89 f0                	mov    %esi,%eax
 833ab7c:	89 da                	mov    %ebx,%edx
 833ab7e:	89 04 24             	mov    %eax,(%esp)
 833ab81:	e8 ca 8b 7a 00       	call   8ae3750 <_Unwind_Resume>
 833ab86:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833ab89:	89 04 24             	mov    %eax,(%esp)
 833ab8c:	e8 47 4d 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833ab91:	89 d8                	mov    %ebx,%eax
 833ab93:	83 c4 40             	add    $0x40,%esp
 833ab96:	5b                   	pop    %ebx
 833ab97:	5e                   	pop    %esi
 833ab98:	5d                   	pop    %ebp
 833ab99:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SendMail @ 0x833aa32

/* user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SendMail
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CDBMsgSender local_28 [8];
  cMyTrace local_20 [16];
  int local_10;
  
  cVar1 = IsCreatureEquipmentScope(this,param_2);
  if (cVar1 == '\x01') {
    if (param_1[1] == (Inven_Item)0x5) {
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 0833aa95 to 0833ab55 has its CatchHandler @ 0833ab6b */
      local_10 = std::
                 map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                 ::size((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
                         *)this);
      iVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
      cVar1 = CDBMsgSender::SendMail(local_28,param_1,iVar2,param_2,param_3,local_10);
      if (cVar1 == '\x01') {
        CDBMsgSender::Send(local_28);
        cVar1 = DeleteCreatureItem((int)this,*(int *)(param_1 + 7));
        if (cVar1 == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar3 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_20,
                           "bool user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int)",0xbed
                           ,5);
        cMyTrace::operator()(local_20,"cannot write db uid(%d)\n",uVar3 & 0xffff);
        uVar4 = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_28);
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## SetCreatureItemAddInfo

```asm
// === 0833b620 user_creature::CCreatureMgr::SetCreatureItemAddInfo  [0x0833b620-0x833b68b] ===
 833b620:	55                   	push   %ebp
 833b621:	89 e5                	mov    %esp,%ebp
 833b623:	83 ec 28             	sub    $0x28,%esp
 833b626:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833b62d:	8b 45 08             	mov    0x8(%ebp),%eax
 833b630:	8b 40 1c             	mov    0x1c(%eax),%eax
 833b633:	89 04 24             	mov    %eax,(%esp)
 833b636:	e8 cf 7d e5 ff       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 833b63b:	8b 55 0c             	mov    0xc(%ebp),%edx
 833b63e:	89 54 24 08          	mov    %edx,0x8(%esp)
 833b642:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 833b649:	00 
 833b64a:	89 04 24             	mov    %eax,(%esp)
 833b64d:	e8 5c 0c 1c 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 833b652:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833b655:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833b659:	75 07                	jne    833b662 <_ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii+0x42>
 833b65b:	b8 00 00 00 00       	mov    $0x0,%eax
 833b660:	eb 28                	jmp    833b68a <_ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii+0x6a>
 833b662:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b665:	8b 40 02             	mov    0x2(%eax),%eax
 833b668:	85 c0                	test   %eax,%eax
 833b66a:	75 07                	jne    833b673 <_ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii+0x53>
 833b66c:	b8 00 00 00 00       	mov    $0x0,%eax
 833b671:	eb 17                	jmp    833b68a <_ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii+0x6a>
 833b673:	8b 45 10             	mov    0x10(%ebp),%eax
 833b676:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b67a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833b67d:	89 04 24             	mov    %eax,(%esp)
 833b680:	e8 ff 01 d9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 833b685:	b8 01 00 00 00       	mov    $0x1,%eax
 833b68a:	c9                   	leave
 833b68b:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SetCreatureItemAddInfo @ 0x833b620

/* user_creature::CCreatureMgr::SetCreatureItemAddInfo(int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SetCreatureItemAddInfo(CCreatureMgr *this,int param_1,int param_2)

{
  CInventory *this_00;
  Inven_Item *this_01;
  undefined4 uVar1;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW(*(CUserCharacInfo **)(this + 0x1c))
  ;
  this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,param_1);
  if (this_01 == (Inven_Item *)0x0) {
    uVar1 = 0;
  }
  else if (*(int *)(this_01 + 2) == 0) {
    uVar1 = 0;
  }
  else {
    Inven_Item::set_add_info(this_01,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## SetKeepRightItem

```asm
// === 0833c00c user_creature::CCreatureMgr::SetKeepRightItem  [0x0833c00c-0x833c23f] ===
 833c00c:	55                   	push   %ebp
 833c00d:	89 e5                	mov    %esp,%ebp
 833c00f:	56                   	push   %esi
 833c010:	53                   	push   %ebx
 833c011:	83 ec 60             	sub    $0x60,%esp
 833c014:	8b 55 08             	mov    0x8(%ebp),%edx
 833c017:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833c01a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c01e:	89 04 24             	mov    %eax,(%esp)
 833c021:	e8 d2 69 00 00       	call   83429f8 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833c026:	83 ec 04             	sub    $0x4,%esp
 833c029:	e9 c6 01 00 00       	jmp    833c1f4 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1e8>
 833c02e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833c031:	89 04 24             	mov    %eax,(%esp)
 833c034:	e8 b1 69 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833c039:	8b 40 04             	mov    0x4(%eax),%eax
 833c03c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833c03f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833c043:	74 17                	je     833c05c <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x50>
 833c045:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c048:	89 04 24             	mov    %eax,(%esp)
 833c04b:	e8 48 2f 00 00       	call   833ef98 <_ZN13user_creature13CCreatureItem19GetCreatureItemTypeEv>
 833c050:	83 f8 01             	cmp    $0x1,%eax
 833c053:	75 07                	jne    833c05c <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x50>
 833c055:	b8 01 00 00 00       	mov    $0x1,%eax
 833c05a:	eb 05                	jmp    833c061 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x55>
 833c05c:	b8 00 00 00 00       	mov    $0x0,%eax
 833c061:	84 c0                	test   %al,%al
 833c063:	0f 84 6e 01 00 00    	je     833c1d7 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1cb>
 833c069:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c06c:	89 04 24             	mov    %eax,(%esp)
 833c06f:	e8 32 30 00 00       	call   833f0a6 <_ZN13user_creature9CCreature10IsNoChargeEv>
 833c074:	84 c0                	test   %al,%al
 833c076:	0f 84 5b 01 00 00    	je     833c1d7 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1cb>
 833c07c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833c083:	00 
 833c084:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c087:	89 04 24             	mov    %eax,(%esp)
 833c08a:	e8 23 30 00 00       	call   833f0b2 <_ZN13user_creature9CCreature11SetNoChargeEb>
 833c08f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c092:	89 44 24 08          	mov    %eax,0x8(%esp)
 833c096:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 833c09d:	00 
 833c09e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833c0a1:	89 04 24             	mov    %eax,(%esp)
 833c0a4:	e8 05 38 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 833c0a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c0ac:	89 04 24             	mov    %eax,(%esp)
 833c0af:	e8 f2 2f 00 00       	call   833f0a6 <_ZN13user_creature9CCreature10IsNoChargeEv>
 833c0b4:	0f b6 d8             	movzbl %al,%ebx
 833c0b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c0ba:	89 04 24             	mov    %eax,(%esp)
 833c0bd:	e8 fc 2e 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 833c0c2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833c0c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c0ca:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833c0cd:	89 04 24             	mov    %eax,(%esp)
 833c0d0:	e8 17 41 00 00       	call   83401ec <_ZN13user_creature12CDBMsgSender12UseKeepRightEii>
 833c0d5:	83 f0 01             	xor    $0x1,%eax
 833c0d8:	84 c0                	test   %al,%al
 833c0da:	74 57                	je     833c133 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x127>
 833c0dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c0df:	89 04 24             	mov    %eax,(%esp)
 833c0e2:	e8 95 e2 d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833c0e7:	0f b7 d8             	movzwl %ax,%ebx
 833c0ea:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833c0f1:	00 
 833c0f2:	c7 44 24 08 f0 0d 00 	movl   $0xdf0,0x8(%esp)
 833c0f9:	00 
 833c0fa:	c7 44 24 04 60 ec c2 	movl   $0x8c2ec60,0x4(%esp)
 833c101:	08 
 833c102:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833c105:	89 04 24             	mov    %eax,(%esp)
 833c108:	e8 0b 36 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833c10d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833c111:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 833c118:	08 
 833c119:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833c11c:	89 04 24             	mov    %eax,(%esp)
 833c11f:	e8 64 36 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833c124:	be 00 00 00 00       	mov    $0x0,%esi
 833c129:	bb 00 00 00 00       	mov    $0x0,%ebx
 833c12e:	e9 95 00 00 00       	jmp    833c1c8 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1bc>
 833c133:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833c136:	89 04 24             	mov    %eax,(%esp)
 833c139:	e8 12 38 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 833c13e:	8b 45 08             	mov    0x8(%ebp),%eax
 833c141:	8b 40 1c             	mov    0x1c(%eax),%eax
 833c144:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833c14b:	00 
 833c14c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833c153:	00 
 833c154:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c158:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833c15b:	89 04 24             	mov    %eax,(%esp)
 833c15e:	e8 c7 41 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 833c163:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833c166:	89 04 24             	mov    %eax,(%esp)
 833c169:	e8 5c 2e 00 00       	call   833efca <_ZN13user_creature13CCreatureItem9GetSlotNoEv>
 833c16e:	8b 55 08             	mov    0x8(%ebp),%edx
 833c171:	89 44 24 08          	mov    %eax,0x8(%esp)
 833c175:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c179:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833c17c:	89 04 24             	mov    %eax,(%esp)
 833c17f:	e8 5c 48 00 00       	call   83409e0 <_ZN13user_creature17CPacketRespondent30MakeNotipacketCreatureItemListEPKSt3mapIiPNS_13CCreatureItemESt4lessIiESaISt4pairIKiS3_EEEi>
 833c184:	eb 15                	jmp    833c19b <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x18f>
 833c186:	89 d3                	mov    %edx,%ebx
 833c188:	89 c6                	mov    %eax,%esi
 833c18a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833c18d:	89 04 24             	mov    %eax,(%esp)
 833c190:	e8 d5 41 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833c195:	89 f0                	mov    %esi,%eax
 833c197:	89 da                	mov    %ebx,%edx
 833c199:	eb 12                	jmp    833c1ad <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1a1>
 833c19b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833c19e:	89 04 24             	mov    %eax,(%esp)
 833c1a1:	e8 c4 41 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 833c1a6:	bb 01 00 00 00       	mov    $0x1,%ebx
 833c1ab:	eb 1b                	jmp    833c1c8 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x1bc>
 833c1ad:	89 d3                	mov    %edx,%ebx
 833c1af:	89 c6                	mov    %eax,%esi
 833c1b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833c1b4:	89 04 24             	mov    %eax,(%esp)
 833c1b7:	e8 1c 37 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833c1bc:	89 f0                	mov    %esi,%eax
 833c1be:	89 da                	mov    %ebx,%edx
 833c1c0:	89 04 24             	mov    %eax,(%esp)
 833c1c3:	e8 88 75 7a 00       	call   8ae3750 <_Unwind_Resume>
 833c1c8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833c1cb:	89 04 24             	mov    %eax,(%esp)
 833c1ce:	e8 05 37 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 833c1d3:	85 db                	test   %ebx,%ebx
 833c1d5:	74 5c                	je     833c233 <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x227>
 833c1d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833c1da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833c1e1:	00 
 833c1e2:	8d 55 d8             	lea    -0x28(%ebp),%edx
 833c1e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c1e9:	89 04 24             	mov    %eax,(%esp)
 833c1ec:	e8 41 68 00 00       	call   8342a32 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833c1f1:	83 ec 04             	sub    $0x4,%esp
 833c1f4:	8b 55 08             	mov    0x8(%ebp),%edx
 833c1f7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833c1fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c1fe:	89 04 24             	mov    %eax,(%esp)
 833c201:	e8 aa 67 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833c206:	83 ec 04             	sub    $0x4,%esp
 833c209:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833c20c:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c210:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833c213:	89 04 24             	mov    %eax,(%esp)
 833c216:	e8 03 68 00 00       	call   8342a1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833c21b:	84 c0                	test   %al,%al
 833c21d:	0f 85 0b fe ff ff    	jne    833c02e <_ZN13user_creature12CCreatureMgr16SetKeepRightItemEP5CUserP10Inven_Item+0x22>
 833c223:	8b 45 10             	mov    0x10(%ebp),%eax
 833c226:	89 04 24             	mov    %eax,(%esp)
 833c229:	e8 aa f5 d8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 833c22e:	be 01 00 00 00       	mov    $0x1,%esi
 833c233:	89 f0                	mov    %esi,%eax
 833c235:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833c238:	83 c4 00             	add    $0x0,%esp
 833c23b:	5b                   	pop    %ebx
 833c23c:	5e                   	pop    %esi
 833c23d:	5d                   	pop    %ebp
 833c23e:	c3                   	ret
 833c23f:	90                   	nop

```

```c
// user_creature::CCreatureMgr::SetKeepRightItem @ 0x833c00c

/* user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::SetKeepRightItem(CCreatureMgr *this,CUser *param_1,Inven_Item *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  CPacketRespondent local_54 [32];
  CDBMsgSender local_34 [8];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_2c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_28 [4];
  cMyTrace local_24 [16];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_2c);
  do {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       local_2c,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      Inven_Item::reset(param_2);
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       local_2c);
    local_10 = *(CCreatureItem **)(iVar3 + 4);
    if ((local_10 == (CCreatureItem *)0x0) ||
       (iVar3 = CCreatureItem::GetCreatureItemType(local_10), iVar3 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = CCreature::IsNoCharge((CCreature *)local_10), cVar2 != '\0')) {
      CCreature::SetNoCharge((CCreature *)local_10,false);
      CDBMsgSender::CDBMsgSender(local_34,0x8a,param_1);
      uVar4 = CCreature::IsNoCharge((CCreature *)local_10);
      iVar3 = CCreatureItem::GetUid(local_10);
                    /* try { // try from 0833c0d0 to 0833c162 has its CatchHandler @ 0833c1ad */
      cVar2 = CDBMsgSender::UseKeepRight(local_34,iVar3,uVar4 & 0xff);
      if (cVar2 == '\x01') {
        CDBMsgSender::Send(local_34);
        CPacketRespondent::CPacketRespondent(local_54,*(CUser **)(this + 0x1c),0,0);
        iVar3 = CCreatureItem::GetSlotNo(local_10);
                    /* try { // try from 0833c17f to 0833c183 has its CatchHandler @ 0833c186 */
        CPacketRespondent::MakeNotipacketCreatureItemList(local_54,(map *)this,iVar3);
                    /* try { // try from 0833c1a1 to 0833c1a5 has its CatchHandler @ 0833c1ad */
        CPacketRespondent::~CPacketRespondent(local_54);
      }
      else {
        uVar4 = CUser::get_unique_id(param_1);
        cMyTrace::cMyTrace(local_24,
                           "bool user_creature::CCreatureMgr::SetKeepRightItem(CUser*, Inven_Item*)"
                           ,0xdf0,5);
        cMyTrace::operator()(local_24,"cannot write db uid(%d)\n",uVar4 & 0xffff);
        unaff_ESI = 0;
      }
      CDBMsgSender::~CDBMsgSender(local_34);
      if (cVar2 != '\x01') {
        return unaff_ESI;
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_2c);
  } while( true );
}

```

---

## SetOverSkillTime

```asm
// === 0833c41e user_creature::CCreatureMgr::SetOverSkillTime  [0x0833c41e-0x833c6f5] ===
 833c41e:	55                   	push   %ebp
 833c41f:	89 e5                	mov    %esp,%ebp
 833c421:	57                   	push   %edi
 833c422:	56                   	push   %esi
 833c423:	53                   	push   %ebx
 833c424:	83 ec 6c             	sub    $0x6c,%esp
 833c427:	8b 45 08             	mov    0x8(%ebp),%eax
 833c42a:	8b 40 18             	mov    0x18(%eax),%eax
 833c42d:	85 c0                	test   %eax,%eax
 833c42f:	0f 84 b4 02 00 00    	je     833c6e9 <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2cb>
 833c435:	8b 45 08             	mov    0x8(%ebp),%eax
 833c438:	8b 40 18             	mov    0x18(%eax),%eax
 833c43b:	89 04 24             	mov    %eax,(%esp)
 833c43e:	e8 35 c0 ff ff       	call   8338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>
 833c443:	84 c0                	test   %al,%al
 833c445:	74 0a                	je     833c451 <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x33>
 833c447:	b8 01 00 00 00       	mov    $0x1,%eax
 833c44c:	e9 9d 02 00 00       	jmp    833c6ee <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2d0>
 833c451:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c454:	8b 18                	mov    (%eax),%ebx
 833c456:	8b 45 08             	mov    0x8(%ebp),%eax
 833c459:	8b 40 18             	mov    0x18(%eax),%eax
 833c45c:	89 04 24             	mov    %eax,(%esp)
 833c45f:	e8 40 2b 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833c464:	39 c3                	cmp    %eax,%ebx
 833c466:	0f 94 c0             	sete   %al
 833c469:	84 c0                	test   %al,%al
 833c46b:	0f 84 78 02 00 00    	je     833c6e9 <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2cb>
 833c471:	8b 45 08             	mov    0x8(%ebp),%eax
 833c474:	8b 40 18             	mov    0x18(%eax),%eax
 833c477:	89 04 24             	mov    %eax,(%esp)
 833c47a:	e8 73 2c 00 00       	call   833f0f2 <_ZN13user_creature9CCreature16IsCreatureScriptEv>
 833c47f:	83 f0 01             	xor    $0x1,%eax
 833c482:	84 c0                	test   %al,%al
 833c484:	74 49                	je     833c4cf <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0xb1>
 833c486:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c489:	8b 18                	mov    (%eax),%ebx
 833c48b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833c492:	00 
 833c493:	c7 44 24 08 62 0e 00 	movl   $0xe62,0x8(%esp)
 833c49a:	00 
 833c49b:	c7 44 24 04 20 ec c2 	movl   $0x8c2ec20,0x4(%esp)
 833c4a2:	08 
 833c4a3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833c4a6:	89 04 24             	mov    %eax,(%esp)
 833c4a9:	e8 6a 32 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833c4ae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833c4b2:	c7 44 24 04 a0 da c2 	movl   $0x8c2daa0,0x4(%esp)
 833c4b9:	08 
 833c4ba:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833c4bd:	89 04 24             	mov    %eax,(%esp)
 833c4c0:	e8 c3 32 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833c4c5:	b8 13 00 00 00       	mov    $0x13,%eax
 833c4ca:	e9 1f 02 00 00       	jmp    833c6ee <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2d0>
 833c4cf:	8b 45 08             	mov    0x8(%ebp),%eax
 833c4d2:	8b 40 18             	mov    0x18(%eax),%eax
 833c4d5:	89 04 24             	mov    %eax,(%esp)
 833c4d8:	e8 9b c7 ff ff       	call   8338c78 <_ZN13user_creature9CCreature22GetLearnOverSkillLevelEv>
 833c4dd:	89 c3                	mov    %eax,%ebx
 833c4df:	8b 45 08             	mov    0x8(%ebp),%eax
 833c4e2:	8b 40 18             	mov    0x18(%eax),%eax
 833c4e5:	89 04 24             	mov    %eax,(%esp)
 833c4e8:	e8 a1 2b 00 00       	call   833f08e <_ZN13user_creature9CCreature6GetExpEv>
 833c4ed:	8b 55 08             	mov    0x8(%ebp),%edx
 833c4f0:	8b 52 18             	mov    0x18(%edx),%edx
 833c4f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c4f7:	89 14 24             	mov    %edx,(%esp)
 833c4fa:	e8 d3 af ff ff       	call   83374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>
 833c4ff:	39 c3                	cmp    %eax,%ebx
 833c501:	0f 9f c0             	setg   %al
 833c504:	84 c0                	test   %al,%al
 833c506:	74 0a                	je     833c512 <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0xf4>
 833c508:	b8 13 00 00 00       	mov    $0x13,%eax
 833c50d:	e9 dc 01 00 00       	jmp    833c6ee <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2d0>
 833c512:	8b 45 08             	mov    0x8(%ebp),%eax
 833c515:	8b 40 18             	mov    0x18(%eax),%eax
 833c518:	89 04 24             	mov    %eax,(%esp)
 833c51b:	e8 c6 2b 00 00       	call   833f0e6 <_ZN13user_creature9CCreature16GetOverSkillTimeEv>
 833c520:	89 04 24             	mov    %eax,(%esp)
 833c523:	e8 dc 29 00 00       	call   833ef04 <_ZN13user_creature14COverSkillTime7GetTimeEv>
 833c528:	8b 18                	mov    (%eax),%ebx
 833c52a:	8b 45 08             	mov    0x8(%ebp),%eax
 833c52d:	8b 40 18             	mov    0x18(%eax),%eax
 833c530:	89 04 24             	mov    %eax,(%esp)
 833c533:	e8 f0 c6 ff ff       	call   8338c28 <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv>
 833c538:	89 c1                	mov    %eax,%ecx
 833c53a:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 833c53f:	89 c8                	mov    %ecx,%eax
 833c541:	f7 ea                	imul   %edx
 833c543:	c1 fa 06             	sar    $0x6,%edx
 833c546:	89 c8                	mov    %ecx,%eax
 833c548:	c1 f8 1f             	sar    $0x1f,%eax
 833c54b:	89 d1                	mov    %edx,%ecx
 833c54d:	29 c1                	sub    %eax,%ecx
 833c54f:	89 c8                	mov    %ecx,%eax
 833c551:	01 c3                	add    %eax,%ebx
 833c553:	8b 45 08             	mov    0x8(%ebp),%eax
 833c556:	8b 40 18             	mov    0x18(%eax),%eax
 833c559:	89 04 24             	mov    %eax,(%esp)
 833c55c:	e8 ef c6 ff ff       	call   8338c50 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv>
 833c561:	89 c1                	mov    %eax,%ecx
 833c563:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 833c568:	89 c8                	mov    %ecx,%eax
 833c56a:	f7 ea                	imul   %edx
 833c56c:	c1 fa 06             	sar    $0x6,%edx
 833c56f:	89 c8                	mov    %ecx,%eax
 833c571:	c1 f8 1f             	sar    $0x1f,%eax
 833c574:	89 d1                	mov    %edx,%ecx
 833c576:	29 c1                	sub    %eax,%ecx
 833c578:	89 c8                	mov    %ecx,%eax
 833c57a:	01 c3                	add    %eax,%ebx
 833c57c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 833c583:	e8 16 f7 d8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833c588:	83 c0 02             	add    $0x2,%eax
 833c58b:	39 c3                	cmp    %eax,%ebx
 833c58d:	0f 9f c0             	setg   %al
 833c590:	84 c0                	test   %al,%al
 833c592:	0f 84 3b 01 00 00    	je     833c6d3 <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2b5>
 833c598:	8b 45 08             	mov    0x8(%ebp),%eax
 833c59b:	8b 40 1c             	mov    0x1c(%eax),%eax
 833c59e:	89 04 24             	mov    %eax,(%esp)
 833c5a1:	e8 a8 f6 d8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 833c5a6:	89 c7                	mov    %eax,%edi
 833c5a8:	8b 45 08             	mov    0x8(%ebp),%eax
 833c5ab:	8b 40 1c             	mov    0x1c(%eax),%eax
 833c5ae:	89 04 24             	mov    %eax,(%esp)
 833c5b1:	e8 b8 dd d9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 833c5b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833c5bd:	00 
 833c5be:	89 04 24             	mov    %eax,(%esp)
 833c5c1:	e8 85 ca dc ff       	call   810904b <_Z14NumberToStringji>
 833c5c6:	89 c6                	mov    %eax,%esi
 833c5c8:	8b 45 08             	mov    0x8(%ebp),%eax
 833c5cb:	8b 40 18             	mov    0x18(%eax),%eax
 833c5ce:	89 04 24             	mov    %eax,(%esp)
 833c5d1:	e8 7a c6 ff ff       	call   8338c50 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv>
 833c5d6:	89 c1                	mov    %eax,%ecx
 833c5d8:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 833c5dd:	89 c8                	mov    %ecx,%eax
 833c5df:	f7 ea                	imul   %edx
 833c5e1:	c1 fa 06             	sar    $0x6,%edx
 833c5e4:	89 c8                	mov    %ecx,%eax
 833c5e6:	c1 f8 1f             	sar    $0x1f,%eax
 833c5e9:	89 d1                	mov    %edx,%ecx
 833c5eb:	29 c1                	sub    %eax,%ecx
 833c5ed:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 833c5f0:	8b 45 08             	mov    0x8(%ebp),%eax
 833c5f3:	8b 40 18             	mov    0x18(%eax),%eax
 833c5f6:	89 04 24             	mov    %eax,(%esp)
 833c5f9:	e8 2a c6 ff ff       	call   8338c28 <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv>
 833c5fe:	89 c1                	mov    %eax,%ecx
 833c600:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 833c605:	89 c8                	mov    %ecx,%eax
 833c607:	f7 ea                	imul   %edx
 833c609:	c1 fa 06             	sar    $0x6,%edx
 833c60c:	89 c8                	mov    %ecx,%eax
 833c60e:	c1 f8 1f             	sar    $0x1f,%eax
 833c611:	89 d1                	mov    %edx,%ecx
 833c613:	29 c1                	sub    %eax,%ecx
 833c615:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 833c618:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 833c61f:	e8 7a f6 d8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833c624:	89 c3                	mov    %eax,%ebx
 833c626:	8b 45 08             	mov    0x8(%ebp),%eax
 833c629:	8b 40 18             	mov    0x18(%eax),%eax
 833c62c:	89 04 24             	mov    %eax,(%esp)
 833c62f:	e8 b2 2a 00 00       	call   833f0e6 <_ZN13user_creature9CCreature16GetOverSkillTimeEv>
 833c634:	89 04 24             	mov    %eax,(%esp)
 833c637:	e8 c8 28 00 00       	call   833ef04 <_ZN13user_creature14COverSkillTime7GetTimeEv>
 833c63c:	8b 00                	mov    (%eax),%eax
 833c63e:	89 da                	mov    %ebx,%edx
 833c640:	29 c2                	sub    %eax,%edx
 833c642:	89 55 c0             	mov    %edx,-0x40(%ebp)
 833c645:	8b 45 08             	mov    0x8(%ebp),%eax
 833c648:	8b 40 18             	mov    0x18(%eax),%eax
 833c64b:	89 04 24             	mov    %eax,(%esp)
 833c64e:	e8 93 2a 00 00       	call   833f0e6 <_ZN13user_creature9CCreature16GetOverSkillTimeEv>
 833c653:	89 04 24             	mov    %eax,(%esp)
 833c656:	e8 a9 28 00 00       	call   833ef04 <_ZN13user_creature14COverSkillTime7GetTimeEv>
 833c65b:	8b 00                	mov    (%eax),%eax
 833c65d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 833c660:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 833c667:	e8 32 f6 d8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833c66c:	89 c3                	mov    %eax,%ebx
 833c66e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 833c675:	00 
 833c676:	c7 44 24 08 6c 0e 00 	movl   $0xe6c,0x8(%esp)
 833c67d:	00 
 833c67e:	c7 44 24 04 20 ec c2 	movl   $0x8c2ec20,0x4(%esp)
 833c685:	08 
 833c686:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833c689:	89 04 24             	mov    %eax,(%esp)
 833c68c:	e8 87 30 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833c691:	89 7c 24 20          	mov    %edi,0x20(%esp)
 833c695:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 833c699:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 833c69c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 833c6a0:	8b 45 bc             	mov    -0x44(%ebp),%eax
 833c6a3:	89 44 24 14          	mov    %eax,0x14(%esp)
 833c6a7:	8b 55 c0             	mov    -0x40(%ebp),%edx
 833c6aa:	89 54 24 10          	mov    %edx,0x10(%esp)
 833c6ae:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 833c6b1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 833c6b5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833c6b9:	c7 44 24 04 e0 da c2 	movl   $0x8c2dae0,0x4(%esp)
 833c6c0:	08 
 833c6c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833c6c4:	89 04 24             	mov    %eax,(%esp)
 833c6c7:	e8 bc 30 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833c6cc:	b8 13 00 00 00       	mov    $0x13,%eax
 833c6d1:	eb 1b                	jmp    833c6ee <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi+0x2d0>
 833c6d3:	8b 45 08             	mov    0x8(%ebp),%eax
 833c6d6:	8b 40 18             	mov    0x18(%eax),%eax
 833c6d9:	89 04 24             	mov    %eax,(%esp)
 833c6dc:	e8 05 2a 00 00       	call   833f0e6 <_ZN13user_creature9CCreature16GetOverSkillTimeEv>
 833c6e1:	89 04 24             	mov    %eax,(%esp)
 833c6e4:	e8 5b 0f 00 00       	call   833d644 <_ZN13user_creature14COverSkillTime7SetTimeEv>
 833c6e9:	b8 00 00 00 00       	mov    $0x0,%eax
 833c6ee:	83 c4 6c             	add    $0x6c,%esp
 833c6f1:	5b                   	pop    %ebx
 833c6f2:	5e                   	pop    %esi
 833c6f3:	5f                   	pop    %edi
 833c6f4:	5d                   	pop    %ebp
 833c6f5:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SetOverSkillTime @ 0x833c41e

/* user_creature::CCreatureMgr::SetOverSkillTime(int const&) */

undefined4 __thiscall user_creature::CCreatureMgr::SetOverSkillTime(CCreatureMgr *this,int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  COverSkillTime *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  if (*(int *)(this + 0x18) != 0) {
    cVar2 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar2 != '\0') {
      return 1;
    }
    iVar4 = *param_1;
    iVar3 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
    if (iVar4 == iVar3) {
      cVar2 = CCreature::IsCreatureScript(*(CCreature **)(this + 0x18));
      if (cVar2 != '\x01') {
        iVar4 = *param_1;
        cMyTrace::cMyTrace(local_3c,"int user_creature::CCreatureMgr::SetOverSkillTime(const int&)",
                           0xe62,0);
        cMyTrace::operator()
                  (local_3c,"SetOverSkillTime::creature_script is null(creature_itemno=%u)",iVar4);
        return 0x13;
      }
      iVar4 = CCreature::GetLearnOverSkillLevel(*(CCreature **)(this + 0x18));
      iVar3 = CCreature::GetExp(*(CCreature **)(this + 0x18));
      iVar3 = CCreature::GetExpLevel(*(CCreature **)(this + 0x18),iVar3);
      if (iVar3 < iVar4) {
        return 0x13;
      }
      pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      piVar6 = (int *)COverSkillTime::GetTime(pCVar5);
      iVar4 = *piVar6;
      iVar3 = CCreature::GetSkillRecoveryTime(*(CCreature **)(this + 0x18));
      iVar7 = CCreature::GetOverSkillRecoveryTime(*(CCreature **)(this + 0x18));
      iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar8 + 2 < iVar4 + iVar3 / 1000 + iVar7 / 1000) {
        uVar9 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
        uVar10 = CUser::get_acc_id(*(CUser **)(this + 0x1c));
        uVar11 = NumberToString(uVar10,0);
        iVar3 = CCreature::GetOverSkillRecoveryTime(*(CCreature **)(this + 0x18));
        iVar7 = CCreature::GetSkillRecoveryTime(*(CCreature **)(this + 0x18));
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
        piVar6 = (int *)COverSkillTime::GetTime(pCVar5);
        iVar4 = *piVar6;
        pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
        puVar12 = (undefined4 *)COverSkillTime::GetTime(pCVar5);
        uVar1 = *puVar12;
        uVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        cMyTrace::cMyTrace(local_2c,"int user_creature::CCreatureMgr::SetOverSkillTime(const int&)",
                           0xe6c,0);
        cMyTrace::operator()
                  (local_2c,
                   "fail:cur_time(%u),last_used_skilltime(%u),interval(%d) st(%d),ovst(%d),m_id(%s),ch_no(%u)"
                   ,uVar13,uVar1,iVar8 - iVar4,iVar7 / 1000,iVar3 / 1000,uVar11,uVar9);
        return 0x13;
      }
      pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      COverSkillTime::SetTime(pCVar5);
    }
  }
  return 0;
}

```

---

## SetStomach

```asm
// === 08339ee0 user_creature::CCreatureMgr::SetStomach  [0x08339ee0-0x8339f9f] ===
 8339ee0:	55                   	push   %ebp
 8339ee1:	89 e5                	mov    %esp,%ebp
 8339ee3:	56                   	push   %esi
 8339ee4:	53                   	push   %ebx
 8339ee5:	83 ec 30             	sub    $0x30,%esp
 8339ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 8339eeb:	8b 40 18             	mov    0x18(%eax),%eax
 8339eee:	85 c0                	test   %eax,%eax
 8339ef0:	0f 84 9e 00 00 00    	je     8339f94 <_ZN13user_creature12CCreatureMgr10SetStomachEi+0xb4>
 8339ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 8339ef9:	8b 40 18             	mov    0x18(%eax),%eax
 8339efc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339eff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339f03:	89 04 24             	mov    %eax,(%esp)
 8339f06:	e8 65 51 00 00       	call   833f070 <_ZN13user_creature9CCreature10SetStomachEi>
 8339f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8339f0e:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339f11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8339f18:	00 
 8339f19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8339f20:	00 
 8339f21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339f25:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8339f28:	89 04 24             	mov    %eax,(%esp)
 8339f2b:	e8 fa 63 00 00       	call   834032a <_ZN13user_creature17CPacketRespondentC1EP5CUserii>
 8339f30:	8b 45 08             	mov    0x8(%ebp),%eax
 8339f33:	8b 40 18             	mov    0x18(%eax),%eax
 8339f36:	89 04 24             	mov    %eax,(%esp)
 8339f39:	e8 b0 e5 ff ff       	call   83384ee <_ZN13user_creature9CCreature10GetStomachEv>
 8339f3e:	89 c3                	mov    %eax,%ebx
 8339f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8339f43:	8b 40 18             	mov    0x18(%eax),%eax
 8339f46:	89 04 24             	mov    %eax,(%esp)
 8339f49:	e8 70 50 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8339f4e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339f52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339f56:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8339f59:	89 04 24             	mov    %eax,(%esp)
 8339f5c:	e8 b7 69 00 00       	call   8340918 <_ZN13user_creature17CPacketRespondent27MakeNotipacketCreatureStateEii>
 8339f61:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8339f64:	89 04 24             	mov    %eax,(%esp)
 8339f67:	e8 74 64 00 00       	call   83403e0 <_ZN13user_creature17CPacketRespondent4SendEv>
 8339f6c:	eb 1b                	jmp    8339f89 <_ZN13user_creature12CCreatureMgr10SetStomachEi+0xa9>
 8339f6e:	89 d3                	mov    %edx,%ebx
 8339f70:	89 c6                	mov    %eax,%esi
 8339f72:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8339f75:	89 04 24             	mov    %eax,(%esp)
 8339f78:	e8 ed 63 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8339f7d:	89 f0                	mov    %esi,%eax
 8339f7f:	89 da                	mov    %ebx,%edx
 8339f81:	89 04 24             	mov    %eax,(%esp)
 8339f84:	e8 c7 97 7a 00       	call   8ae3750 <_Unwind_Resume>
 8339f89:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8339f8c:	89 04 24             	mov    %eax,(%esp)
 8339f8f:	e8 d6 63 00 00       	call   834036a <_ZN13user_creature17CPacketRespondentD1Ev>
 8339f94:	b8 01 00 00 00       	mov    $0x1,%eax
 8339f99:	83 c4 30             	add    $0x30,%esp
 8339f9c:	5b                   	pop    %ebx
 8339f9d:	5e                   	pop    %esi
 8339f9e:	5d                   	pop    %ebp
 8339f9f:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SetStomach @ 0x8339ee0

/* user_creature::CCreatureMgr::SetStomach(int) */

undefined4 __thiscall user_creature::CCreatureMgr::SetStomach(CCreatureMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  CPacketRespondent local_2c [32];
  
  if (*(int *)(this + 0x18) != 0) {
    CCreature::SetStomach(*(CCreature **)(this + 0x18),param_1);
    CPacketRespondent::CPacketRespondent(local_2c,*(CUser **)(this + 0x1c),0,0);
    iVar1 = CCreature::GetStomach(*(CCreature **)(this + 0x18));
    iVar2 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339f5c to 08339f6b has its CatchHandler @ 08339f6e */
    CPacketRespondent::MakeNotipacketCreatureState(local_2c,iVar2,iVar1);
    CPacketRespondent::Send(local_2c);
    CPacketRespondent::~CPacketRespondent(local_2c);
  }
  return 1;
}

```

---

## SwapArtifact

```asm
// === 08339752 user_creature::CCreatureMgr::SwapArtifact  [0x08339752-0x833989b] ===
 8339752:	55                   	push   %ebp
 8339753:	89 e5                	mov    %esp,%ebp
 8339755:	83 ec 28             	sub    $0x28,%esp
 8339758:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 833975c:	74 0a                	je     8339768 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x16>
 833975e:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8339762:	0f 85 2c 01 00 00    	jne    8339894 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x142>
 8339768:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 833976f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8339776:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 833977d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8339784:	8b 45 10             	mov    0x10(%ebp),%eax
 8339787:	89 44 24 04          	mov    %eax,0x4(%esp)
 833978b:	8b 45 08             	mov    0x8(%ebp),%eax
 833978e:	89 04 24             	mov    %eax,(%esp)
 8339791:	e8 66 fc ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 8339796:	84 c0                	test   %al,%al
 8339798:	74 3c                	je     83397d6 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x84>
 833979a:	8b 45 18             	mov    0x18(%ebp),%eax
 833979d:	89 04 24             	mov    %eax,(%esp)
 83397a0:	e8 c1 55 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 83397a5:	83 f0 01             	xor    $0x1,%eax
 83397a8:	84 c0                	test   %al,%al
 83397aa:	74 0c                	je     83397b8 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x66>
 83397ac:	8b 45 10             	mov    0x10(%ebp),%eax
 83397af:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83397b2:	8b 45 18             	mov    0x18(%ebp),%eax
 83397b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83397b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83397bb:	89 04 24             	mov    %eax,(%esp)
 83397be:	e8 a3 55 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 83397c3:	83 f0 01             	xor    $0x1,%eax
 83397c6:	84 c0                	test   %al,%al
 83397c8:	74 0c                	je     83397d6 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x84>
 83397ca:	8b 45 10             	mov    0x10(%ebp),%eax
 83397cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83397d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83397d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83397d6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83397d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83397dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83397e0:	89 04 24             	mov    %eax,(%esp)
 83397e3:	e8 14 fc ff ff       	call   83393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>
 83397e8:	84 c0                	test   %al,%al
 83397ea:	74 3c                	je     8339828 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0xd6>
 83397ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 83397ef:	89 04 24             	mov    %eax,(%esp)
 83397f2:	e8 6f 55 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 83397f7:	83 f0 01             	xor    $0x1,%eax
 83397fa:	84 c0                	test   %al,%al
 83397fc:	74 0c                	je     833980a <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0xb8>
 83397fe:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8339801:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8339804:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339807:	89 45 ec             	mov    %eax,-0x14(%ebp)
 833980a:	8b 45 18             	mov    0x18(%ebp),%eax
 833980d:	89 04 24             	mov    %eax,(%esp)
 8339810:	e8 51 55 de ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8339815:	83 f0 01             	xor    $0x1,%eax
 8339818:	84 c0                	test   %al,%al
 833981a:	74 0c                	je     8339828 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0xd6>
 833981c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 833981f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8339822:	8b 45 18             	mov    0x18(%ebp),%eax
 8339825:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8339828:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 833982c:	74 2d                	je     833985b <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x109>
 833982e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8339832:	74 27                	je     833985b <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x109>
 8339834:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8339837:	89 44 24 08          	mov    %eax,0x8(%esp)
 833983b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833983e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339842:	8b 45 08             	mov    0x8(%ebp),%eax
 8339845:	89 04 24             	mov    %eax,(%esp)
 8339848:	e8 cb fe ff ff       	call   8339718 <_ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item>
 833984d:	83 f0 01             	xor    $0x1,%eax
 8339850:	84 c0                	test   %al,%al
 8339852:	74 07                	je     833985b <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x109>
 8339854:	b8 00 00 00 00       	mov    $0x0,%eax
 8339859:	eb 3e                	jmp    8339899 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x147>
 833985b:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 833985f:	74 33                	je     8339894 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x142>
 8339861:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8339865:	74 2d                	je     8339894 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x142>
 8339867:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833986a:	89 44 24 08          	mov    %eax,0x8(%esp)
 833986e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8339871:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339875:	8b 45 08             	mov    0x8(%ebp),%eax
 8339878:	89 04 24             	mov    %eax,(%esp)
 833987b:	e8 48 fe ff ff       	call   83396c8 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item>
 8339880:	83 f0 01             	xor    $0x1,%eax
 8339883:	84 c0                	test   %al,%al
 8339885:	74 07                	je     833988e <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x13c>
 8339887:	b8 00 00 00 00       	mov    $0x0,%eax
 833988c:	eb 0b                	jmp    8339899 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii+0x147>
 833988e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8339891:	c6 00 00             	movb   $0x0,(%eax)
 8339894:	b8 01 00 00 00       	mov    $0x1,%eax
 8339899:	c9                   	leave
 833989a:	c3                   	ret
 833989b:	90                   	nop

```

```c
// user_creature::CCreatureMgr::SwapArtifact @ 0x8339752

/* user_creature::CCreatureMgr::SwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SwapArtifact
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  int local_1c;
  Inven_Item *local_18;
  Inven_Item *local_14;
  Inven_Item *local_10;
  
  if ((param_3 == 0) || (param_6 == 0)) {
    local_1c = -1;
    local_18 = (Inven_Item *)0x0;
    local_14 = (Inven_Item *)0xffffffff;
    local_10 = (Inven_Item *)0x0;
    cVar1 = IsArtifactEquipSlot(this,param_2);
    if (cVar1 != '\0') {
      cVar1 = Inven_Item::isEmpty(param_4);
      if (cVar1 != '\x01') {
        local_1c = param_2;
        local_18 = param_4;
      }
      cVar1 = Inven_Item::isEmpty(param_1);
      if (cVar1 != '\x01') {
        local_14 = (Inven_Item *)param_2;
        local_10 = param_1;
      }
    }
    cVar1 = IsArtifactEquipSlot(this,param_5);
    if (cVar1 != '\0') {
      cVar1 = Inven_Item::isEmpty(param_1);
      if (cVar1 != '\x01') {
        local_1c = param_5;
        local_18 = param_1;
      }
      cVar1 = Inven_Item::isEmpty(param_4);
      if (cVar1 != '\x01') {
        local_14 = (Inven_Item *)param_5;
        local_10 = param_4;
      }
    }
    if (((local_14 != (Inven_Item *)0xffffffff) && (local_10 != (Inven_Item *)0x0)) &&
       (cVar1 = DismantleArtifact((int)this,local_14), cVar1 != '\x01')) {
      return 0;
    }
    if ((local_1c != -1) && (local_18 != (Inven_Item *)0x0)) {
      cVar1 = EquipArtifact(this,local_1c,local_18);
      if (cVar1 != '\x01') {
        return 0;
      }
      *local_18 = (Inven_Item)0x0;
    }
  }
  return 1;
}

```

---

## SwapCreature

```asm
// === 08339420 user_creature::CCreatureMgr::SwapCreature  [0x08339420-0x83396c7] ===
 8339420:	55                   	push   %ebp
 8339421:	89 e5                	mov    %esp,%ebp
 8339423:	56                   	push   %esi
 8339424:	53                   	push   %ebx
 8339425:	83 ec 50             	sub    $0x50,%esp
 8339428:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833942f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8339436:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339439:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 833943d:	3c 05                	cmp    $0x5,%al
 833943f:	74 0f                	je     8339450 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x30>
 8339441:	8b 45 18             	mov    0x18(%ebp),%eax
 8339444:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8339448:	3c 05                	cmp    $0x5,%al
 833944a:	0f 85 91 01 00 00    	jne    83395e1 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1c1>
 8339450:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339453:	89 04 24             	mov    %eax,(%esp)
 8339456:	e8 df e3 db ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 833945b:	89 44 24 04          	mov    %eax,0x4(%esp)
 833945f:	8b 45 08             	mov    0x8(%ebp),%eax
 8339462:	89 04 24             	mov    %eax,(%esp)
 8339465:	e8 28 fe ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833946a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833946d:	8b 45 18             	mov    0x18(%ebp),%eax
 8339470:	89 04 24             	mov    %eax,(%esp)
 8339473:	e8 c2 e3 db ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8339478:	89 44 24 04          	mov    %eax,0x4(%esp)
 833947c:	8b 45 08             	mov    0x8(%ebp),%eax
 833947f:	89 04 24             	mov    %eax,(%esp)
 8339482:	e8 0b fe ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 8339487:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833948a:	8b 45 10             	mov    0x10(%ebp),%eax
 833948d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339491:	8b 45 08             	mov    0x8(%ebp),%eax
 8339494:	89 04 24             	mov    %eax,(%esp)
 8339497:	e8 d0 fd ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 833949c:	83 f0 01             	xor    $0x1,%eax
 833949f:	84 c0                	test   %al,%al
 83394a1:	74 5c                	je     83394ff <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0xdf>
 83394a3:	8b 45 08             	mov    0x8(%ebp),%eax
 83394a6:	8b 40 1c             	mov    0x1c(%eax),%eax
 83394a9:	89 04 24             	mov    %eax,(%esp)
 83394ac:	e8 cb 0e da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 83394b1:	0f b7 d8             	movzwl %ax,%ebx
 83394b4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83394bb:	00 
 83394bc:	c7 44 24 08 a5 09 00 	movl   $0x9a5,0x8(%esp)
 83394c3:	00 
 83394c4:	c7 44 24 04 c0 f2 c2 	movl   $0x8c2f2c0,0x4(%esp)
 83394cb:	08 
 83394cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83394cf:	89 04 24             	mov    %eax,(%esp)
 83394d2:	e8 41 62 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83394d7:	8b 45 10             	mov    0x10(%ebp),%eax
 83394da:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83394de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83394e2:	c7 44 24 04 90 d8 c2 	movl   $0x8c2d890,0x4(%esp)
 83394e9:	08 
 83394ea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83394ed:	89 04 24             	mov    %eax,(%esp)
 83394f0:	e8 93 62 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83394f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 83394fa:	e9 c0 01 00 00       	jmp    83396bf <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x29f>
 83394ff:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8339502:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339506:	8b 45 08             	mov    0x8(%ebp),%eax
 8339509:	89 04 24             	mov    %eax,(%esp)
 833950c:	e8 5b fd ff ff       	call   833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>
 8339511:	83 f0 01             	xor    $0x1,%eax
 8339514:	84 c0                	test   %al,%al
 8339516:	74 5c                	je     8339574 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x154>
 8339518:	8b 45 08             	mov    0x8(%ebp),%eax
 833951b:	8b 40 1c             	mov    0x1c(%eax),%eax
 833951e:	89 04 24             	mov    %eax,(%esp)
 8339521:	e8 56 0e da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8339526:	0f b7 d8             	movzwl %ax,%ebx
 8339529:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8339530:	00 
 8339531:	c7 44 24 08 ab 09 00 	movl   $0x9ab,0x8(%esp)
 8339538:	00 
 8339539:	c7 44 24 04 c0 f2 c2 	movl   $0x8c2f2c0,0x4(%esp)
 8339540:	08 
 8339541:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8339544:	89 04 24             	mov    %eax,(%esp)
 8339547:	e8 cc 61 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833954c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 833954f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8339553:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339557:	c7 44 24 04 c4 d8 c2 	movl   $0x8c2d8c4,0x4(%esp)
 833955e:	08 
 833955f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8339562:	89 04 24             	mov    %eax,(%esp)
 8339565:	e8 1e 62 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833956a:	bb 00 00 00 00       	mov    $0x0,%ebx
 833956f:	e9 4b 01 00 00       	jmp    83396bf <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x29f>
 8339574:	83 7d 10 16          	cmpl   $0x16,0x10(%ebp)
 8339578:	75 30                	jne    83395aa <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x18a>
 833957a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 833957e:	75 2a                	jne    83395aa <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x18a>
 8339580:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8339583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339587:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833958a:	89 44 24 04          	mov    %eax,0x4(%esp)
 833958e:	8b 45 08             	mov    0x8(%ebp),%eax
 8339591:	89 04 24             	mov    %eax,(%esp)
 8339594:	e8 09 fe ff ff       	call   83393a2 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_>
 8339599:	83 f0 01             	xor    $0x1,%eax
 833959c:	84 c0                	test   %al,%al
 833959e:	74 40                	je     83395e0 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1c0>
 83395a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 83395a5:	e9 15 01 00 00       	jmp    83396bf <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x29f>
 83395aa:	83 7d 1c 16          	cmpl   $0x16,0x1c(%ebp)
 83395ae:	75 31                	jne    83395e1 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1c1>
 83395b0:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 83395b4:	75 2b                	jne    83395e1 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1c1>
 83395b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83395b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 83395bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83395c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83395c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83395c7:	89 04 24             	mov    %eax,(%esp)
 83395ca:	e8 d3 fd ff ff       	call   83393a2 <_ZN13user_creature12CCreatureMgr17EquipCreatureItemEPNS_9CCreatureES2_>
 83395cf:	83 f0 01             	xor    $0x1,%eax
 83395d2:	84 c0                	test   %al,%al
 83395d4:	74 0b                	je     83395e1 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1c1>
 83395d6:	bb 00 00 00 00       	mov    $0x0,%ebx
 83395db:	e9 df 00 00 00       	jmp    83396bf <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x29f>
 83395e0:	90                   	nop
 83395e1:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 83395e5:	75 07                	jne    83395ee <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1ce>
 83395e7:	81 45 1c d8 00 00 00 	addl   $0xd8,0x1c(%ebp)
 83395ee:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 83395f2:	75 07                	jne    83395fb <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1db>
 83395f4:	81 45 10 d8 00 00 00 	addl   $0xd8,0x10(%ebp)
 83395fb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 83395ff:	74 12                	je     8339613 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x1f3>
 8339601:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8339604:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8339607:	89 54 24 04          	mov    %edx,0x4(%esp)
 833960b:	89 04 24             	mov    %eax,(%esp)
 833960e:	e8 3d da ff ff       	call   8337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>
 8339613:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8339617:	74 12                	je     833962b <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x20b>
 8339619:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833961c:	8b 55 10             	mov    0x10(%ebp),%edx
 833961f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339623:	89 04 24             	mov    %eax,(%esp)
 8339626:	e8 25 da ff ff       	call   8337050 <_ZN13user_creature13CCreatureItem9SetSlotNoEi>
 833962b:	8b 45 08             	mov    0x8(%ebp),%eax
 833962e:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339631:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339635:	c7 44 24 04 8c 00 00 	movl   $0x8c,0x4(%esp)
 833963c:	00 
 833963d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8339640:	89 04 24             	mov    %eax,(%esp)
 8339643:	e8 66 62 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8339648:	8b 45 08             	mov    0x8(%ebp),%eax
 833964b:	8b 40 1c             	mov    0x1c(%eax),%eax
 833964e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8339651:	89 54 24 14          	mov    %edx,0x14(%esp)
 8339655:	8b 55 18             	mov    0x18(%ebp),%edx
 8339658:	89 54 24 10          	mov    %edx,0x10(%esp)
 833965c:	8b 55 10             	mov    0x10(%ebp),%edx
 833965f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8339663:	8b 55 0c             	mov    0xc(%ebp),%edx
 8339666:	89 54 24 08          	mov    %edx,0x8(%esp)
 833966a:	89 44 24 04          	mov    %eax,0x4(%esp)
 833966e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8339671:	89 04 24             	mov    %eax,(%esp)
 8339674:	e8 93 63 00 00       	call   833fa0c <_ZN13user_creature12CDBMsgSender16SwapCreatureItemEP5CUserP10Inven_ItemiS4_i>
 8339679:	83 f0 01             	xor    $0x1,%eax
 833967c:	84 c0                	test   %al,%al
 833967e:	74 07                	je     8339687 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x267>
 8339680:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339685:	eb 2d                	jmp    83396b4 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x294>
 8339687:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833968a:	89 04 24             	mov    %eax,(%esp)
 833968d:	e8 be 62 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8339692:	bb 01 00 00 00       	mov    $0x1,%ebx
 8339697:	eb 1b                	jmp    83396b4 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii+0x294>
 8339699:	89 d3                	mov    %edx,%ebx
 833969b:	89 c6                	mov    %eax,%esi
 833969d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83396a0:	89 04 24             	mov    %eax,(%esp)
 83396a3:	e8 30 62 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 83396a8:	89 f0                	mov    %esi,%eax
 83396aa:	89 da                	mov    %ebx,%edx
 83396ac:	89 04 24             	mov    %eax,(%esp)
 83396af:	e8 9c a0 7a 00       	call   8ae3750 <_Unwind_Resume>
 83396b4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83396b7:	89 04 24             	mov    %eax,(%esp)
 83396ba:	e8 19 62 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 83396bf:	89 d8                	mov    %ebx,%eax
 83396c1:	83 c4 50             	add    $0x50,%esp
 83396c4:	5b                   	pop    %ebx
 83396c5:	5e                   	pop    %esi
 83396c6:	5d                   	pop    %ebp
 83396c7:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SwapCreature @ 0x8339420

/* user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int) */

bool __thiscall
user_creature::CCreatureMgr::SwapCreature
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  uint uVar2;
  CDBMsgSender local_3c [8];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  CCreatureItem *local_14;
  CCreature *local_10;
  
  local_14 = (CCreatureItem *)0x0;
  local_10 = (CCreature *)0x0;
  if ((param_1[1] == (Inven_Item)0x5) || (param_4[1] == (Inven_Item)0x5)) {
    Inven_Item::get_add_info(param_1);
    local_14 = (CCreatureItem *)FindCreatureItem((int)this);
    Inven_Item::get_add_info(param_4);
    local_10 = (CCreature *)FindCreatureItem((int)this);
    cVar1 = IsCreatureEquipmentScope(this,param_2);
    if (cVar1 != '\x01') {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_34,
                         "bool user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)"
                         ,0x9a5,5);
      cMyTrace::operator()
                (local_34,"IsCreatureEquipmentScope() uid(%d) slot_left(%d)\n",uVar2 & 0xffff,
                 param_2);
      return false;
    }
    cVar1 = IsCreatureEquipmentScope(this,param_5);
    if (cVar1 != '\x01') {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_24,
                         "bool user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)"
                         ,0x9ab,5);
      cMyTrace::operator()
                (local_24,"IsCreatureEquipmentScope() uid(%d) slot_right(%d)\n",uVar2 & 0xffff,
                 param_5);
      return false;
    }
    if ((param_2 == 0x16) && (param_3 == 0)) {
      cVar1 = EquipCreatureItem(this,(CCreature *)local_14,local_10);
      if (cVar1 != '\x01') {
        return false;
      }
    }
    else if ((param_5 == 0x16) &&
            ((param_6 == 0 &&
             (cVar1 = EquipCreatureItem(this,local_10,(CCreature *)local_14), cVar1 != '\x01')))) {
      return false;
    }
  }
  if (param_6 == 0) {
    param_5 = param_5 + 0xd8;
  }
  if (param_3 == 0) {
    param_2 = param_2 + 0xd8;
  }
  if (local_14 != (CCreatureItem *)0x0) {
    CCreatureItem::SetSlotNo(local_14,param_5);
  }
  if (local_10 != (CCreature *)0x0) {
    CCreatureItem::SetSlotNo((CCreatureItem *)local_10,param_2);
  }
  CDBMsgSender::CDBMsgSender(local_3c,0x8c,*(undefined4 *)(this + 0x1c));
                    /* try { // try from 08339674 to 08339691 has its CatchHandler @ 08339699 */
  cVar1 = CDBMsgSender::SwapCreatureItem
                    (local_3c,*(CUser **)(this + 0x1c),param_1,param_2,param_4,param_5);
  if (cVar1 == '\x01') {
    CDBMsgSender::Send(local_3c);
  }
  CDBMsgSender::~CDBMsgSender(local_3c);
  return cVar1 == '\x01';
}

```

---

## SwapCreatureItem

```asm
// === 083399fa user_creature::CCreatureMgr::SwapCreatureItem  [0x083399fa-0x8339acb] ===
 83399fa:	55                   	push   %ebp
 83399fb:	89 e5                	mov    %esp,%ebp
 83399fd:	83 ec 28             	sub    $0x28,%esp
 8339a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339a03:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8339a07:	3c 05                	cmp    $0x5,%al
 8339a09:	74 0b                	je     8339a16 <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0x1c>
 8339a0b:	8b 45 18             	mov    0x18(%ebp),%eax
 8339a0e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8339a12:	3c 05                	cmp    $0x5,%al
 8339a14:	75 43                	jne    8339a59 <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0x5f>
 8339a16:	8b 45 20             	mov    0x20(%ebp),%eax
 8339a19:	89 44 24 18          	mov    %eax,0x18(%esp)
 8339a1d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8339a20:	89 44 24 14          	mov    %eax,0x14(%esp)
 8339a24:	8b 45 18             	mov    0x18(%ebp),%eax
 8339a27:	89 44 24 10          	mov    %eax,0x10(%esp)
 8339a2b:	8b 45 14             	mov    0x14(%ebp),%eax
 8339a2e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8339a32:	8b 45 10             	mov    0x10(%ebp),%eax
 8339a35:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339a39:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339a3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339a40:	8b 45 08             	mov    0x8(%ebp),%eax
 8339a43:	89 04 24             	mov    %eax,(%esp)
 8339a46:	e8 d5 f9 ff ff       	call   8339420 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii>
 8339a4b:	83 f0 01             	xor    $0x1,%eax
 8339a4e:	84 c0                	test   %al,%al
 8339a50:	74 60                	je     8339ab2 <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0xb8>
 8339a52:	b8 00 00 00 00       	mov    $0x0,%eax
 8339a57:	eb 71                	jmp    8339aca <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0xd0>
 8339a59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339a5c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8339a60:	3c 06                	cmp    $0x6,%al
 8339a62:	74 0b                	je     8339a6f <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0x75>
 8339a64:	8b 45 18             	mov    0x18(%ebp),%eax
 8339a67:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8339a6b:	3c 06                	cmp    $0x6,%al
 8339a6d:	75 44                	jne    8339ab3 <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0xb9>
 8339a6f:	8b 45 20             	mov    0x20(%ebp),%eax
 8339a72:	89 44 24 18          	mov    %eax,0x18(%esp)
 8339a76:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8339a79:	89 44 24 14          	mov    %eax,0x14(%esp)
 8339a7d:	8b 45 18             	mov    0x18(%ebp),%eax
 8339a80:	89 44 24 10          	mov    %eax,0x10(%esp)
 8339a84:	8b 45 14             	mov    0x14(%ebp),%eax
 8339a87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8339a8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8339a8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339a92:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339a95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339a99:	8b 45 08             	mov    0x8(%ebp),%eax
 8339a9c:	89 04 24             	mov    %eax,(%esp)
 8339a9f:	e8 ae fc ff ff       	call   8339752 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii>
 8339aa4:	83 f0 01             	xor    $0x1,%eax
 8339aa7:	84 c0                	test   %al,%al
 8339aa9:	74 08                	je     8339ab3 <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0xb9>
 8339aab:	b8 00 00 00 00       	mov    $0x0,%eax
 8339ab0:	eb 18                	jmp    8339aca <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii+0xd0>
 8339ab2:	90                   	nop
 8339ab3:	8b 45 18             	mov    0x18(%ebp),%eax
 8339ab6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339aba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8339abd:	89 04 24             	mov    %eax,(%esp)
 8339ac0:	e8 71 8d 00 00       	call   8342836 <_ZSt4swapI10Inven_ItemEvRT_S2_>
 8339ac5:	b8 01 00 00 00       	mov    $0x1,%eax
 8339aca:	c9                   	leave
 8339acb:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::SwapCreatureItem @ 0x83399fa

/* user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SwapCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  
  if ((param_1[1] == (Inven_Item)0x5) || (param_4[1] == (Inven_Item)0x5)) {
    cVar1 = SwapCreature(this,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else if (((param_1[1] == (Inven_Item)0x6) || (param_4[1] == (Inven_Item)0x6)) &&
          (cVar1 = SwapArtifact(this,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar1 != '\x01')) {
    return 0;
  }
  std::swap<Inven_Item>(param_1,param_4);
  return 1;
}

```

---

## TurnStomach

```asm
// === 0833c28a user_creature::CCreatureMgr::TurnStomach  [0x0833c28a-0x833c319] ===
 833c28a:	55                   	push   %ebp
 833c28b:	89 e5                	mov    %esp,%ebp
 833c28d:	83 ec 28             	sub    $0x28,%esp
 833c290:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c293:	88 45 f4             	mov    %al,-0xc(%ebp)
 833c296:	8b 45 08             	mov    0x8(%ebp),%eax
 833c299:	8b 40 18             	mov    0x18(%eax),%eax
 833c29c:	85 c0                	test   %eax,%eax
 833c29e:	74 78                	je     833c318 <_ZN13user_creature12CCreatureMgr11TurnStomachEb+0x8e>
 833c2a0:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 833c2a4:	74 3a                	je     833c2e0 <_ZN13user_creature12CCreatureMgr11TurnStomachEb+0x56>
 833c2a6:	8b 45 08             	mov    0x8(%ebp),%eax
 833c2a9:	8b 40 18             	mov    0x18(%eax),%eax
 833c2ac:	89 04 24             	mov    %eax,(%esp)
 833c2af:	e8 b0 2d 00 00       	call   833f064 <_ZN13user_creature9CCreature8GetStateEv>
 833c2b4:	83 f8 03             	cmp    $0x3,%eax
 833c2b7:	0f 94 c0             	sete   %al
 833c2ba:	84 c0                	test   %al,%al
 833c2bc:	74 5a                	je     833c318 <_ZN13user_creature12CCreatureMgr11TurnStomachEb+0x8e>
 833c2be:	8b 45 08             	mov    0x8(%ebp),%eax
 833c2c1:	8b 50 1c             	mov    0x1c(%eax),%edx
 833c2c4:	8b 45 08             	mov    0x8(%ebp),%eax
 833c2c7:	8b 40 18             	mov    0x18(%eax),%eax
 833c2ca:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 833c2d1:	00 
 833c2d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c2d6:	89 04 24             	mov    %eax,(%esp)
 833c2d9:	e8 7c ae ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 833c2de:	eb 38                	jmp    833c318 <_ZN13user_creature12CCreatureMgr11TurnStomachEb+0x8e>
 833c2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 833c2e3:	8b 40 18             	mov    0x18(%eax),%eax
 833c2e6:	89 04 24             	mov    %eax,(%esp)
 833c2e9:	e8 76 2d 00 00       	call   833f064 <_ZN13user_creature9CCreature8GetStateEv>
 833c2ee:	83 f8 01             	cmp    $0x1,%eax
 833c2f1:	0f 94 c0             	sete   %al
 833c2f4:	84 c0                	test   %al,%al
 833c2f6:	74 20                	je     833c318 <_ZN13user_creature12CCreatureMgr11TurnStomachEb+0x8e>
 833c2f8:	8b 45 08             	mov    0x8(%ebp),%eax
 833c2fb:	8b 50 1c             	mov    0x1c(%eax),%edx
 833c2fe:	8b 45 08             	mov    0x8(%ebp),%eax
 833c301:	8b 40 18             	mov    0x18(%eax),%eax
 833c304:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 833c30b:	00 
 833c30c:	89 54 24 04          	mov    %edx,0x4(%esp)
 833c310:	89 04 24             	mov    %eax,(%esp)
 833c313:	e8 42 ae ff ff       	call   833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>
 833c318:	c9                   	leave
 833c319:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::TurnStomach @ 0x833c28a

/* user_creature::CCreatureMgr::TurnStomach(bool) */

void __thiscall user_creature::CCreatureMgr::TurnStomach(CCreatureMgr *this,bool param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    if (param_1) {
      iVar1 = CCreature::GetState(*(CCreature **)(this + 0x18));
      if (iVar1 == 3) {
        CCreature::SetState(*(CCreature **)(this + 0x18),*(undefined4 *)(this + 0x1c),1);
      }
    }
    else {
      iVar1 = CCreature::GetState(*(CCreature **)(this + 0x18));
      if (iVar1 == 1) {
        CCreature::SetState(*(CCreature **)(this + 0x18),*(undefined4 *)(this + 0x1c),3);
      }
    }
  }
  return;
}

```

---

## UnRegistTempPeriod

```asm
// === 0833d962 user_creature::CCreatureMgr::UnRegistTempPeriod  [0x0833d962-0x833d9d7] ===
 833d962:	55                   	push   %ebp
 833d963:	89 e5                	mov    %esp,%ebp
 833d965:	83 ec 28             	sub    $0x28,%esp
 833d968:	8b 45 08             	mov    0x8(%ebp),%eax
 833d96b:	8d 48 30             	lea    0x30(%eax),%ecx
 833d96e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d971:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d974:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d978:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d97c:	89 04 24             	mov    %eax,(%esp)
 833d97f:	e8 6a f9 d8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 833d984:	83 ec 04             	sub    $0x4,%esp
 833d987:	8b 45 08             	mov    0x8(%ebp),%eax
 833d98a:	8d 50 30             	lea    0x30(%eax),%edx
 833d98d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 833d990:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d994:	89 04 24             	mov    %eax,(%esp)
 833d997:	e8 7e f9 d8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833d99c:	83 ec 04             	sub    $0x4,%esp
 833d99f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 833d9a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d9a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d9a9:	89 04 24             	mov    %eax,(%esp)
 833d9ac:	e8 17 ca d9 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 833d9b1:	84 c0                	test   %al,%al
 833d9b3:	74 1c                	je     833d9d1 <_ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi+0x6f>
 833d9b5:	8b 45 08             	mov    0x8(%ebp),%eax
 833d9b8:	8d 50 30             	lea    0x30(%eax),%edx
 833d9bb:	8d 45 0c             	lea    0xc(%ebp),%eax
 833d9be:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d9c2:	89 14 24             	mov    %edx,(%esp)
 833d9c5:	e8 e6 cf fb ff       	call   82fa9b0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseERS3_>
 833d9ca:	b8 01 00 00 00       	mov    $0x1,%eax
 833d9cf:	eb 05                	jmp    833d9d6 <_ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi+0x74>
 833d9d1:	b8 00 00 00 00       	mov    $0x0,%eax
 833d9d6:	c9                   	leave
 833d9d7:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::UnRegistTempPeriod @ 0x833d962

/* user_creature::CCreatureMgr::UnRegistTempPeriod(int) */

bool user_creature::CCreatureMgr::UnRegistTempPeriod(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((int *)(param_1 + 0x30));
  }
  return cVar1 != '\0';
}

```

---

## UnregisterCreatureItem

```asm
// === 0833a854 user_creature::CCreatureMgr::UnregisterCreatureItem  [0x0833a854-0x833a941] ===
 833a854:	55                   	push   %ebp
 833a855:	89 e5                	mov    %esp,%ebp
 833a857:	56                   	push   %esi
 833a858:	53                   	push   %ebx
 833a859:	83 ec 30             	sub    $0x30,%esp
 833a85c:	8b 55 08             	mov    0x8(%ebp),%edx
 833a85f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833a862:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 833a865:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833a869:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a86d:	89 04 24             	mov    %eax,(%esp)
 833a870:	e8 0f 81 00 00       	call   8342984 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 833a875:	83 ec 04             	sub    $0x4,%esp
 833a878:	8b 55 08             	mov    0x8(%ebp),%edx
 833a87b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833a87e:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a882:	89 04 24             	mov    %eax,(%esp)
 833a885:	e8 26 81 00 00       	call   83429b0 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833a88a:	83 ec 04             	sub    $0x4,%esp
 833a88d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833a890:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a894:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833a897:	89 04 24             	mov    %eax,(%esp)
 833a89a:	e8 37 81 00 00       	call   83429d6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEeqERKS6_>
 833a89f:	84 c0                	test   %al,%al
 833a8a1:	74 59                	je     833a8fc <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi+0xa8>
 833a8a3:	8b 75 0c             	mov    0xc(%ebp),%esi
 833a8a6:	8b 45 08             	mov    0x8(%ebp),%eax
 833a8a9:	8b 40 1c             	mov    0x1c(%eax),%eax
 833a8ac:	89 04 24             	mov    %eax,(%esp)
 833a8af:	e8 c8 fa d9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 833a8b4:	0f b7 d8             	movzwl %ax,%ebx
 833a8b7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833a8be:	00 
 833a8bf:	c7 44 24 08 c1 0b 00 	movl   $0xbc1,0x8(%esp)
 833a8c6:	00 
 833a8c7:	c7 44 24 04 00 f1 c2 	movl   $0x8c2f100,0x4(%esp)
 833a8ce:	08 
 833a8cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833a8d2:	89 04 24             	mov    %eax,(%esp)
 833a8d5:	e8 3e 4e 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833a8da:	89 74 24 0c          	mov    %esi,0xc(%esp)
 833a8de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833a8e2:	c7 44 24 04 4c d9 c2 	movl   $0x8c2d94c,0x4(%esp)
 833a8e9:	08 
 833a8ea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833a8ed:	89 04 24             	mov    %eax,(%esp)
 833a8f0:	e8 93 4e 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833a8f5:	b8 00 00 00 00       	mov    $0x0,%eax
 833a8fa:	eb 3c                	jmp    833a938 <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi+0xe4>
 833a8fc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833a8ff:	89 04 24             	mov    %eax,(%esp)
 833a902:	e8 e3 80 00 00       	call   83429ea <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833a907:	8b 40 04             	mov    0x4(%eax),%eax
 833a90a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833a90d:	e8 03 4e 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 833a912:	8b 55 f4             	mov    -0xc(%ebp),%edx
 833a915:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a919:	89 04 24             	mov    %eax,(%esp)
 833a91c:	e8 f7 4c 00 00       	call   833f618 <_ZN13user_creature20CCreatureItemFactory16FreeCreatureItemEPNS_13CCreatureItemE>
 833a921:	8b 45 08             	mov    0x8(%ebp),%eax
 833a924:	8b 55 dc             	mov    -0x24(%ebp),%edx
 833a927:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a92b:	89 04 24             	mov    %eax,(%esp)
 833a92e:	e8 eb 81 00 00       	call   8342b1e <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5eraseESt17_Rb_tree_iteratorIS7_E>
 833a933:	b8 01 00 00 00       	mov    $0x1,%eax
 833a938:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833a93b:	83 c4 00             	add    $0x0,%esp
 833a93e:	5b                   	pop    %ebx
 833a93f:	5e                   	pop    %esi
 833a940:	5d                   	pop    %ebp
 833a941:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::UnregisterCreatureItem @ 0x833a854

/* user_creature::CCreatureMgr::UnregisterCreatureItem(int) */

bool __thiscall user_creature::CCreatureMgr::UnregisterCreatureItem(CCreatureMgr *this,int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  CCreatureItemFactory *this_00;
  int local_28;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  CCreatureItem *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::find(&local_28);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                     &local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
                       &local_28);
    local_10 = *(CCreatureItem **)(iVar3 + 4);
    this_00 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
    CCreatureItemFactory::FreeCreatureItem(this_00,local_10);
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::erase((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
             *)this,local_28);
  }
  else {
    uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_20,"bool user_creature::CCreatureMgr::UnregisterCreatureItem(int)",
                       0xbc1,5);
    cMyTrace::operator()
              (local_20,"UnregisterCreatureItem failed. uid(%d), key(%d)\n",uVar2 & 0xffff,param_1);
  }
  return cVar1 == '\0';
}

```

---

## UpdateCreatureItemResult

```asm
// === 0833b592 user_creature::CCreatureMgr::UpdateCreatureItemResult  [0x0833b592-0x833b605] ===
 833b592:	55                   	push   %ebp
 833b593:	89 e5                	mov    %esp,%ebp
 833b595:	83 ec 58             	sub    $0x58,%esp
 833b598:	8d 45 bb             	lea    -0x45(%ebp),%eax
 833b59b:	89 04 24             	mov    %eax,(%esp)
 833b59e:	e8 b1 02 d9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 833b5a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b5a6:	8d 50 04             	lea    0x4(%eax),%edx
 833b5a9:	8d 45 bb             	lea    -0x45(%ebp),%eax
 833b5ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b5b0:	89 14 24             	mov    %edx,(%esp)
 833b5b3:	e8 60 3e 00 00       	call   833f418 <_ZN21Inven_Item_Compatible13makeInvenItemER10Inven_Item>
 833b5b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b5bb:	83 c0 2c             	add    $0x2c,%eax
 833b5be:	89 44 24 08          	mov    %eax,0x8(%esp)
 833b5c2:	8d 45 bb             	lea    -0x45(%ebp),%eax
 833b5c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b5c9:	8b 45 08             	mov    0x8(%ebp),%eax
 833b5cc:	89 04 24             	mov    %eax,(%esp)
 833b5cf:	e8 b8 00 00 00       	call   833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>
 833b5d4:	83 f0 01             	xor    $0x1,%eax
 833b5d7:	84 c0                	test   %al,%al
 833b5d9:	74 07                	je     833b5e2 <_ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM+0x50>
 833b5db:	b8 00 00 00 00       	mov    $0x0,%eax
 833b5e0:	eb 22                	jmp    833b604 <_ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM+0x72>
 833b5e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b5e5:	8b 40 64             	mov    0x64(%eax),%eax
 833b5e8:	83 f8 04             	cmp    $0x4,%eax
 833b5eb:	75 12                	jne    833b5ff <_ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM+0x6d>
 833b5ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 833b5f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 833b5f4:	8b 45 08             	mov    0x8(%ebp),%eax
 833b5f7:	89 04 24             	mov    %eax,(%esp)
 833b5fa:	e8 99 fe ff ff       	call   833b498 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM>
 833b5ff:	b8 01 00 00 00       	mov    $0x1,%eax
 833b604:	c9                   	leave
 833b605:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::UpdateCreatureItemResult @ 0x833b592

/* user_creature::CCreatureMgr::UpdateCreatureItemResult(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::UpdateCreatureItemResult(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Inven_Item local_49 [69];
  
  Inven_Item::Inven_Item(local_49);
  Inven_Item_Compatible::makeInvenItem((Inven_Item_Compatible *)(param_1 + 4),local_49);
  cVar1 = LoadCreatureItem(this,local_49,(SIG_CREATURE_ITEM_DETAIL_INFO *)(param_1 + 0x2c));
  if (cVar1 == '\x01') {
    if (*(int *)(param_1 + 100) == 4) {
      SendCreatureItemInfo(this,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## UseFeed

```asm
// === 08339dba user_creature::CCreatureMgr::UseFeed  [0x08339dba-0x8339edf] ===
 8339dba:	55                   	push   %ebp
 8339dbb:	89 e5                	mov    %esp,%ebp
 8339dbd:	56                   	push   %esi
 8339dbe:	53                   	push   %ebx
 8339dbf:	83 ec 30             	sub    $0x30,%esp
 8339dc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8339dc5:	8b 40 18             	mov    0x18(%eax),%eax
 8339dc8:	85 c0                	test   %eax,%eax
 8339dca:	0f 84 02 01 00 00    	je     8339ed2 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0x118>
 8339dd0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8339dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8339dda:	8b 50 1c             	mov    0x1c(%eax),%edx
 8339ddd:	8b 45 08             	mov    0x8(%ebp),%eax
 8339de0:	8b 40 18             	mov    0x18(%eax),%eax
 8339de3:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8339de6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8339dea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8339dee:	89 04 24             	mov    %eax,(%esp)
 8339df1:	e8 de d5 ff ff       	call   83373d4 <_ZN13user_creature9CCreature7UseFeedEP5CUserRi>
 8339df6:	84 c0                	test   %al,%al
 8339df8:	0f 84 d4 00 00 00    	je     8339ed2 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0x118>
 8339dfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8339e01:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339e04:	89 44 24 08          	mov    %eax,0x8(%esp)
 8339e08:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8339e0f:	00 
 8339e10:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339e13:	89 04 24             	mov    %eax,(%esp)
 8339e16:	e8 93 5a 00 00       	call   833f8ae <_ZN13user_creature12CDBMsgSenderC1E19ENUM_INTERNALPACKETP5CUser>
 8339e1b:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8339e1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8339e21:	8b 40 18             	mov    0x18(%eax),%eax
 8339e24:	89 04 24             	mov    %eax,(%esp)
 8339e27:	e8 92 51 00 00       	call   833efbe <_ZN13user_creature13CCreatureItem6GetUidEv>
 8339e2c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339e30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8339e34:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339e37:	89 04 24             	mov    %eax,(%esp)
 8339e3a:	e8 1b 5e 00 00       	call   833fc5a <_ZN13user_creature12CDBMsgSender15UseFeedCreatureEii>
 8339e3f:	83 f0 01             	xor    $0x1,%eax
 8339e42:	84 c0                	test   %al,%al
 8339e44:	74 52                	je     8339e98 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0xde>
 8339e46:	8b 45 08             	mov    0x8(%ebp),%eax
 8339e49:	8b 40 1c             	mov    0x1c(%eax),%eax
 8339e4c:	89 04 24             	mov    %eax,(%esp)
 8339e4f:	e8 28 05 da ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8339e54:	0f b7 d8             	movzwl %ax,%ebx
 8339e57:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8339e5e:	00 
 8339e5f:	c7 44 24 08 b5 0a 00 	movl   $0xab5,0x8(%esp)
 8339e66:	00 
 8339e67:	c7 44 24 04 20 f2 c2 	movl   $0x8c2f220,0x4(%esp)
 8339e6e:	08 
 8339e6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8339e72:	89 04 24             	mov    %eax,(%esp)
 8339e75:	e8 9e 58 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8339e7a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8339e7e:	c7 44 24 04 27 d8 c2 	movl   $0x8c2d827,0x4(%esp)
 8339e85:	08 
 8339e86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8339e89:	89 04 24             	mov    %eax,(%esp)
 8339e8c:	e8 f7 58 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8339e91:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339e96:	eb 2d                	jmp    8339ec5 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0x10b>
 8339e98:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339e9b:	89 04 24             	mov    %eax,(%esp)
 8339e9e:	e8 ad 5a 00 00       	call   833f950 <_ZN13user_creature12CDBMsgSender4SendEv>
 8339ea3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8339ea8:	eb 1b                	jmp    8339ec5 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0x10b>
 8339eaa:	89 d3                	mov    %edx,%ebx
 8339eac:	89 c6                	mov    %eax,%esi
 8339eae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339eb1:	89 04 24             	mov    %eax,(%esp)
 8339eb4:	e8 1f 5a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8339eb9:	89 f0                	mov    %esi,%eax
 8339ebb:	89 da                	mov    %ebx,%edx
 8339ebd:	89 04 24             	mov    %eax,(%esp)
 8339ec0:	e8 8b 98 7a 00       	call   8ae3750 <_Unwind_Resume>
 8339ec5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8339ec8:	89 04 24             	mov    %eax,(%esp)
 8339ecb:	e8 08 5a 00 00       	call   833f8d8 <_ZN13user_creature12CDBMsgSenderD1Ev>
 8339ed0:	eb 05                	jmp    8339ed7 <_ZN13user_creature12CCreatureMgr7UseFeedEv+0x11d>
 8339ed2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8339ed7:	89 d8                	mov    %ebx,%eax
 8339ed9:	83 c4 30             	add    $0x30,%esp
 8339edc:	5b                   	pop    %ebx
 8339edd:	5e                   	pop    %esi
 8339ede:	5d                   	pop    %ebp
 8339edf:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::UseFeed @ 0x8339dba

/* user_creature::CCreatureMgr::UseFeed() */

bool __thiscall user_creature::CCreatureMgr::UseFeed(CCreatureMgr *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CDBMsgSender local_28 [8];
  int local_20;
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x18) != 0) {
    local_20 = 0;
    cVar2 = CCreature::UseFeed(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),&local_20);
    if (cVar2 != '\0') {
      CDBMsgSender::CDBMsgSender(local_28,0x8a,*(undefined4 *)(this + 0x1c));
      iVar1 = local_20;
      iVar3 = CCreatureItem::GetUid(*(CCreatureItem **)(this + 0x18));
                    /* try { // try from 08339e3a to 08339ea2 has its CatchHandler @ 08339eaa */
      cVar2 = CDBMsgSender::UseFeedCreature(local_28,iVar3,iVar1);
      if (cVar2 == '\x01') {
        CDBMsgSender::Send(local_28);
      }
      else {
        uVar4 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
        cMyTrace::cMyTrace(local_1c,"bool user_creature::CCreatureMgr::UseFeed()",0xab5,5);
        cMyTrace::operator()(local_1c,"cannot write db uid(%d)\n",uVar4 & 0xffff);
      }
      CDBMsgSender::~CDBMsgSender(local_28);
      return cVar2 == '\x01';
    }
  }
  return false;
}

```

---

## UseItem

```asm
// === 0833a5bc user_creature::CCreatureMgr::UseItem  [0x0833a5bc-0x833a637] ===
 833a5bc:	55                   	push   %ebp
 833a5bd:	89 e5                	mov    %esp,%ebp
 833a5bf:	83 ec 18             	sub    $0x18,%esp
 833a5c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 833a5c5:	8b 40 02             	mov    0x2(%eax),%eax
 833a5c8:	83 f8 18             	cmp    $0x18,%eax
 833a5cb:	75 19                	jne    833a5e6 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x2a>
 833a5cd:	8b 45 08             	mov    0x8(%ebp),%eax
 833a5d0:	89 04 24             	mov    %eax,(%esp)
 833a5d3:	e8 e2 f7 ff ff       	call   8339dba <_ZN13user_creature12CCreatureMgr7UseFeedEv>
 833a5d8:	83 f0 01             	xor    $0x1,%eax
 833a5db:	84 c0                	test   %al,%al
 833a5dd:	74 07                	je     833a5e6 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x2a>
 833a5df:	b8 85 00 00 00       	mov    $0x85,%eax
 833a5e4:	eb 50                	jmp    833a636 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x7a>
 833a5e6:	8b 45 08             	mov    0x8(%ebp),%eax
 833a5e9:	8b 40 18             	mov    0x18(%eax),%eax
 833a5ec:	85 c0                	test   %eax,%eax
 833a5ee:	74 41                	je     833a631 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x75>
 833a5f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 833a5f3:	8b 40 02             	mov    0x2(%eax),%eax
 833a5f6:	89 c2                	mov    %eax,%edx
 833a5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 833a5fb:	8b 40 18             	mov    0x18(%eax),%eax
 833a5fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 833a602:	89 04 24             	mov    %eax,(%esp)
 833a605:	e8 a0 d2 ff ff       	call   83378aa <_ZN13user_creature9CCreature12vaildItemExpEi>
 833a60a:	84 c0                	test   %al,%al
 833a60c:	74 23                	je     833a631 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x75>
 833a60e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833a611:	8b 40 02             	mov    0x2(%eax),%eax
 833a614:	89 44 24 04          	mov    %eax,0x4(%esp)
 833a618:	8b 45 08             	mov    0x8(%ebp),%eax
 833a61b:	89 04 24             	mov    %eax,(%esp)
 833a61e:	e8 e3 f4 ff ff       	call   8339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>
 833a623:	83 f0 01             	xor    $0x1,%eax
 833a626:	84 c0                	test   %al,%al
 833a628:	74 07                	je     833a631 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x75>
 833a62a:	b8 11 00 00 00       	mov    $0x11,%eax
 833a62f:	eb 05                	jmp    833a636 <_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi+0x7a>
 833a631:	b8 00 00 00 00       	mov    $0x0,%eax
 833a636:	c9                   	leave
 833a637:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::UseItem @ 0x833a5bc

/* user_creature::CCreatureMgr::UseItem(Inven_Item*, int) */

undefined4 user_creature::CCreatureMgr::UseItem(Inven_Item *param_1,int param_2)

{
  char cVar1;
  
  if ((*(int *)(param_2 + 2) == 0x18) && (cVar1 = UseFeed((CCreatureMgr *)param_1), cVar1 != '\x01')
     ) {
    return 0x85;
  }
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (cVar1 = CCreature::vaildItemExp(*(CCreature **)(param_1 + 0x18),*(int *)(param_2 + 2)),
      cVar1 != '\0')) &&
     (cVar1 = GainExp((CCreatureMgr *)param_1,*(int *)(param_2 + 2)), cVar1 != '\x01')) {
    return 0x11;
  }
  return 0;
}

```

---

## VerifyEquipedCreatureQuest

```asm
// === 0833d6fa user_creature::CCreatureMgr::VerifyEquipedCreatureQuest  [0x0833d6fa-0x833d757] ===
 833d6fa:	55                   	push   %ebp
 833d6fb:	89 e5                	mov    %esp,%ebp
 833d6fd:	83 ec 18             	sub    $0x18,%esp
 833d700:	8b 45 08             	mov    0x8(%ebp),%eax
 833d703:	8b 40 18             	mov    0x18(%eax),%eax
 833d706:	85 c0                	test   %eax,%eax
 833d708:	74 46                	je     833d750 <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv+0x56>
 833d70a:	8b 45 08             	mov    0x8(%ebp),%eax
 833d70d:	8b 40 18             	mov    0x18(%eax),%eax
 833d710:	89 04 24             	mov    %eax,(%esp)
 833d713:	e8 b2 19 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 833d718:	84 c0                	test   %al,%al
 833d71a:	74 1a                	je     833d736 <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv+0x3c>
 833d71c:	8b 45 08             	mov    0x8(%ebp),%eax
 833d71f:	8b 50 1c             	mov    0x1c(%eax),%edx
 833d722:	8b 45 08             	mov    0x8(%ebp),%eax
 833d725:	8b 40 18             	mov    0x18(%eax),%eax
 833d728:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d72c:	89 04 24             	mov    %eax,(%esp)
 833d72f:	e8 24 a6 ff ff       	call   8337d58 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser>
 833d734:	eb 1f                	jmp    833d755 <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv+0x5b>
 833d736:	8b 45 08             	mov    0x8(%ebp),%eax
 833d739:	8b 50 1c             	mov    0x1c(%eax),%edx
 833d73c:	8b 45 08             	mov    0x8(%ebp),%eax
 833d73f:	8b 40 18             	mov    0x18(%eax),%eax
 833d742:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d746:	89 04 24             	mov    %eax,(%esp)
 833d749:	e8 ae a9 ff ff       	call   83380fc <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser>
 833d74e:	eb 05                	jmp    833d755 <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv+0x5b>
 833d750:	b8 00 00 00 00       	mov    $0x0,%eax
 833d755:	c9                   	leave
 833d756:	c3                   	ret
 833d757:	90                   	nop

```

```c
// user_creature::CCreatureMgr::VerifyEquipedCreatureQuest @ 0x833d6fa

/* user_creature::CCreatureMgr::VerifyEquipedCreatureQuest() const */

undefined4 __thiscall user_creature::CCreatureMgr::VerifyEquipedCreatureQuest(CCreatureMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 == '\0') {
      uVar2 = CCreature::IsAbleEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
    }
    else {
      uVar2 = CCreature::IsAbleSelectEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
    }
  }
  return uVar2;
}

```

---

## checkMaxCreatureLevel

```asm
// === 0833baee user_creature::CCreatureMgr::checkMaxCreatureLevel  [0x0833baee-0x833bbb1] ===
 833baee:	55                   	push   %ebp
 833baef:	89 e5                	mov    %esp,%ebp
 833baf1:	83 ec 38             	sub    $0x38,%esp
 833baf4:	8b 45 10             	mov    0x10(%ebp),%eax
 833baf7:	88 45 e4             	mov    %al,-0x1c(%ebp)
 833bafa:	8b 55 08             	mov    0x8(%ebp),%edx
 833bafd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bb00:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bb04:	89 04 24             	mov    %eax,(%esp)
 833bb07:	e8 d8 6b 00 00       	call   83426e4 <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833bb0c:	83 ec 04             	sub    $0x4,%esp
 833bb0f:	eb 6b                	jmp    833bb7c <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0x8e>
 833bb11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bb14:	89 04 24             	mov    %eax,(%esp)
 833bb17:	e8 66 6c 00 00       	call   8342782 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEptEv>
 833bb1c:	8b 40 04             	mov    0x4(%eax),%eax
 833bb1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833bb22:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833bb26:	74 37                	je     833bb5f <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0x71>
 833bb28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bb2b:	89 04 24             	mov    %eax,(%esp)
 833bb2e:	e8 71 34 00 00       	call   833efa4 <_ZN13user_creature13CCreatureItem9GetItemIdEv>
 833bb33:	3b 45 0c             	cmp    0xc(%ebp),%eax
 833bb36:	0f 94 c0             	sete   %al
 833bb39:	84 c0                	test   %al,%al
 833bb3b:	74 22                	je     833bb5f <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0x71>
 833bb3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bb40:	89 04 24             	mov    %eax,(%esp)
 833bb43:	e8 82 35 00 00       	call   833f0ca <_ZN13user_creature9CCreature14IsGrowCreatureEv>
 833bb48:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 833bb4b:	0f 94 c0             	sete   %al
 833bb4e:	84 c0                	test   %al,%al
 833bb50:	74 0d                	je     833bb5f <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0x71>
 833bb52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833bb55:	89 04 24             	mov    %eax,(%esp)
 833bb58:	e8 11 ba ff ff       	call   833756e <_ZN13user_creature9CCreature10isMaxLevelEv>
 833bb5d:	eb 51                	jmp    833bbb0 <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0xc2>
 833bb5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833bb62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833bb69:	00 
 833bb6a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 833bb6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bb71:	89 04 24             	mov    %eax,(%esp)
 833bb74:	e8 cb 6b 00 00       	call   8342744 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEppEi>
 833bb79:	83 ec 04             	sub    $0x4,%esp
 833bb7c:	8b 55 08             	mov    0x8(%ebp),%edx
 833bb7f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833bb82:	89 54 24 04          	mov    %edx,0x4(%esp)
 833bb86:	89 04 24             	mov    %eax,(%esp)
 833bb89:	e8 7c 6b 00 00       	call   834270a <_ZNKSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833bb8e:	83 ec 04             	sub    $0x4,%esp
 833bb91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833bb94:	89 44 24 04          	mov    %eax,0x4(%esp)
 833bb98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833bb9b:	89 04 24             	mov    %eax,(%esp)
 833bb9e:	e8 8d 6b 00 00       	call   8342730 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13user_creature13CCreatureItemEEEneERKS6_>
 833bba3:	84 c0                	test   %al,%al
 833bba5:	0f 85 66 ff ff ff    	jne    833bb11 <_ZNK13user_creature12CCreatureMgr21checkMaxCreatureLevelEib+0x23>
 833bbab:	b8 00 00 00 00       	mov    $0x0,%eax
 833bbb0:	c9                   	leave
 833bbb1:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::checkMaxCreatureLevel @ 0x833baee

/* user_creature::CCreatureMgr::checkMaxCreatureLevel(int, bool) const */

undefined4 __thiscall
user_creature::CCreatureMgr::checkMaxCreatureLevel(CCreatureMgr *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_1c [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> local_14 [4];
  CCreature *local_10;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_1c);
    local_10 = *(CCreature **)(iVar2 + 4);
    if (((local_10 != (CCreature *)0x0) &&
        (iVar2 = CCreatureItem::GetItemId((CCreatureItem *)local_10), iVar2 == param_1)) &&
       (cVar1 = CCreature::IsGrowCreature(local_10), (bool)cVar1 == param_2)) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              (local_14,(int)local_1c);
  }
  uVar3 = CCreature::isMaxLevel(local_10);
  return uVar3;
}

```

---

## getExpireDate

```asm
// === 0833d758 user_creature::CCreatureMgr::getExpireDate  [0x0833d758-0x833d78d] ===
 833d758:	55                   	push   %ebp
 833d759:	89 e5                	mov    %esp,%ebp
 833d75b:	83 ec 28             	sub    $0x28,%esp
 833d75e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d761:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d765:	8b 45 08             	mov    0x8(%ebp),%eax
 833d768:	89 04 24             	mov    %eax,(%esp)
 833d76b:	e8 22 bb ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833d770:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833d773:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833d777:	75 07                	jne    833d780 <_ZNK13user_creature12CCreatureMgr13getExpireDateEi+0x28>
 833d779:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 833d77e:	eb 0b                	jmp    833d78b <_ZNK13user_creature12CCreatureMgr13getExpireDateEi+0x33>
 833d780:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833d783:	89 04 24             	mov    %eax,(%esp)
 833d786:	e8 7f 18 00 00       	call   833f00a <_ZNK13user_creature13CCreatureItem13getExpireTimeEv>
 833d78b:	c9                   	leave
 833d78c:	c3                   	ret
 833d78d:	90                   	nop

```

```c
// user_creature::CCreatureMgr::getExpireDate @ 0x833d758

/* user_creature::CCreatureMgr::getExpireDate(int) const */

undefined4 user_creature::CCreatureMgr::getExpireDate(int param_1)

{
  CCreatureItem *this;
  undefined4 uVar1;
  
  this = (CCreatureItem *)FindCreatureItem(param_1);
  if (this == (CCreatureItem *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureItem::getExpireTime(this);
  }
  return uVar1;
}

```

---

## getRemainTempPeriod

```asm
// === 0833d88c user_creature::CCreatureMgr::getRemainTempPeriod  [0x0833d88c-0x833d961] ===
 833d88c:	55                   	push   %ebp
 833d88d:	89 e5                	mov    %esp,%ebp
 833d88f:	83 ec 28             	sub    $0x28,%esp
 833d892:	8b 45 08             	mov    0x8(%ebp),%eax
 833d895:	8d 48 30             	lea    0x30(%eax),%ecx
 833d898:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d89b:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d89e:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d8a2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d8a6:	89 04 24             	mov    %eax,(%esp)
 833d8a9:	e8 fc 95 d8 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 833d8ae:	83 ec 04             	sub    $0x4,%esp
 833d8b1:	8b 45 08             	mov    0x8(%ebp),%eax
 833d8b4:	8d 50 30             	lea    0x30(%eax),%edx
 833d8b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833d8ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d8be:	89 04 24             	mov    %eax,(%esp)
 833d8c1:	e8 10 96 d8 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833d8c6:	83 ec 04             	sub    $0x4,%esp
 833d8c9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833d8cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d8d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d8d3:	89 04 24             	mov    %eax,(%esp)
 833d8d6:	e8 21 96 d8 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 833d8db:	84 c0                	test   %al,%al
 833d8dd:	74 4d                	je     833d92c <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xa0>
 833d8df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d8e2:	89 04 24             	mov    %eax,(%esp)
 833d8e5:	e8 26 96 d8 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 833d8ea:	8b 40 04             	mov    0x4(%eax),%eax
 833d8ed:	85 c0                	test   %eax,%eax
 833d8ef:	0f 9f c0             	setg   %al
 833d8f2:	84 c0                	test   %al,%al
 833d8f4:	74 26                	je     833d91c <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0x90>
 833d8f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d8f9:	89 04 24             	mov    %eax,(%esp)
 833d8fc:	e8 0f 96 d8 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 833d901:	8b 40 04             	mov    0x4(%eax),%eax
 833d904:	2b 45 10             	sub    0x10(%ebp),%eax
 833d907:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833d90a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833d90e:	75 07                	jne    833d917 <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0x8b>
 833d910:	b8 01 00 00 00       	mov    $0x1,%eax
 833d915:	eb 49                	jmp    833d960 <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xd4>
 833d917:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833d91a:	eb 44                	jmp    833d960 <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xd4>
 833d91c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d91f:	89 04 24             	mov    %eax,(%esp)
 833d922:	e8 e9 95 d8 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 833d927:	8b 40 04             	mov    0x4(%eax),%eax
 833d92a:	eb 34                	jmp    833d960 <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xd4>
 833d92c:	8b 45 0c             	mov    0xc(%ebp),%eax
 833d92f:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d933:	8b 45 08             	mov    0x8(%ebp),%eax
 833d936:	89 04 24             	mov    %eax,(%esp)
 833d939:	e8 54 b9 ff ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 833d93e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833d941:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 833d945:	75 07                	jne    833d94e <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xc2>
 833d947:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 833d94c:	eb 12                	jmp    833d960 <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii+0xd4>
 833d94e:	8b 45 10             	mov    0x10(%ebp),%eax
 833d951:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d955:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833d958:	89 04 24             	mov    %eax,(%esp)
 833d95b:	e8 b6 16 00 00       	call   833f016 <_ZNK13user_creature13CCreatureItem13GetRemainDateEi>
 833d960:	c9                   	leave
 833d961:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::getRemainTempPeriod @ 0x833d88c

/* user_creature::CCreatureMgr::getRemainTempPeriod(int, int) const */

int __thiscall
user_creature::CCreatureMgr::getRemainTempPeriod(CCreatureMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CCreatureItem *local_14;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_1c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    (local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    local_14 = (CCreatureItem *)FindCreatureItem((int)this);
    if (local_14 == (CCreatureItem *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = CCreatureItem::GetRemainDate(local_14,param_2);
    }
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
    if (*(int *)(iVar2 + 4) < 1) {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
      iVar2 = *(int *)(iVar2 + 4) - param_2;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

```

---

## isGrowCreatureMaxLevel

```asm
// === 0833bbb2 user_creature::CCreatureMgr::isGrowCreatureMaxLevel  [0x0833bbb2-0x833bbbd] ===
 833bbb2:	55                   	push   %ebp
 833bbb3:	89 e5                	mov    %esp,%ebp
 833bbb5:	8b 45 08             	mov    0x8(%ebp),%eax
 833bbb8:	0f b6 40 48          	movzbl 0x48(%eax),%eax
 833bbbc:	5d                   	pop    %ebp
 833bbbd:	c3                   	ret

```

```c
// user_creature::CCreatureMgr::isGrowCreatureMaxLevel @ 0x833bbb2

/* user_creature::CCreatureMgr::isGrowCreatureMaxLevel() const */

CCreatureMgr __thiscall user_creature::CCreatureMgr::isGrowCreatureMaxLevel(CCreatureMgr *this)

{
  return this[0x48];
}

```

---

## ~CCreatureMgr

```asm
// === 08339226 user_creature::CCreatureMgr::~CCreatureMgr  [0x08339226-0x833926b] ===
 8339226:	55                   	push   %ebp
 8339227:	89 e5                	mov    %esp,%ebp
 8339229:	56                   	push   %esi
 833922a:	53                   	push   %ebx
 833922b:	83 ec 10             	sub    $0x10,%esp
 833922e:	8b 45 08             	mov    0x8(%ebp),%eax
 8339231:	83 c0 30             	add    $0x30,%eax
 8339234:	89 04 24             	mov    %eax,(%esp)
 8339237:	e8 8a d8 d8 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 833923c:	eb 1b                	jmp    8339259 <_ZN13user_creature12CCreatureMgrD1Ev+0x33>
 833923e:	89 d3                	mov    %edx,%ebx
 8339240:	89 c6                	mov    %eax,%esi
 8339242:	8b 45 08             	mov    0x8(%ebp),%eax
 8339245:	89 04 24             	mov    %eax,(%esp)
 8339248:	e8 43 7a 00 00       	call   8340c90 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 833924d:	89 f0                	mov    %esi,%eax
 833924f:	89 da                	mov    %ebx,%edx
 8339251:	89 04 24             	mov    %eax,(%esp)
 8339254:	e8 f7 a4 7a 00       	call   8ae3750 <_Unwind_Resume>
 8339259:	8b 45 08             	mov    0x8(%ebp),%eax
 833925c:	89 04 24             	mov    %eax,(%esp)
 833925f:	e8 2c 7a 00 00       	call   8340c90 <_ZNSt3mapIiPN13user_creature13CCreatureItemESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8339264:	83 c4 10             	add    $0x10,%esp
 8339267:	5b                   	pop    %ebx
 8339268:	5e                   	pop    %esi
 8339269:	5d                   	pop    %ebp
 833926a:	c3                   	ret
 833926b:	90                   	nop

```

```c
// user_creature::CCreatureMgr::~CCreatureMgr @ 0x8339226

/* user_creature::CCreatureMgr::~CCreatureMgr() */

void __thiscall user_creature::CCreatureMgr::~CCreatureMgr(CCreatureMgr *this)

{
                    /* try { // try from 08339237 to 0833923b has its CatchHandler @ 0833923e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::~map((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          *)this);
  return;
}

```

