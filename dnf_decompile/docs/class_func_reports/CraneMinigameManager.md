# CraneMinigameManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CraneMinigameManager

```asm
// === 080ebc40 CraneMinigameManager::CraneMinigameManager  [0x080ebc40-0x80ebc59] ===
 80ebc40:	55                   	push   %ebp
 80ebc41:	89 e5                	mov    %esp,%ebp
 80ebc43:	83 ec 18             	sub    $0x18,%esp
 80ebc46:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebc49:	89 04 24             	mov    %eax,(%esp)
 80ebc4c:	e8 e5 7a 7f 00       	call   88e3736 <_ZN19CraneMinigameScriptC1Ev>
 80ebc51:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebc54:	c6 40 68 00          	movb   $0x0,0x68(%eax)
 80ebc58:	c9                   	leave
 80ebc59:	c3                   	ret

```

```c
// CraneMinigameManager::CraneMinigameManager @ 0x80ebc40

/* CraneMinigameManager::CraneMinigameManager() */

void __thiscall CraneMinigameManager::CraneMinigameManager(CraneMinigameManager *this)

{
  CraneMinigameScript::CraneMinigameScript((CraneMinigameScript *)this);
  this[0x68] = (CraneMinigameManager)0x0;
  return;
}

```

---

## SendCraneItemNeedMaterial

```asm
// === 080ebf2e CraneMinigameManager::SendCraneItemNeedMaterial  [0x080ebf2e-0x80ebfc8] ===
 80ebf2e:	55                   	push   %ebp
 80ebf2f:	89 e5                	mov    %esp,%ebp
 80ebf31:	56                   	push   %esi
 80ebf32:	53                   	push   %ebx
 80ebf33:	83 ec 20             	sub    $0x20,%esp
 80ebf36:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebf39:	89 04 24             	mov    %eax,(%esp)
 80ebf3c:	e8 0b 1e 4a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80ebf41:	c7 44 24 08 a7 01 00 	movl   $0x1a7,0x8(%esp)
 80ebf48:	00 
 80ebf49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ebf50:	00 
 80ebf51:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebf54:	89 04 24             	mov    %eax,(%esp)
 80ebf57:	e8 a0 f9 fd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80ebf5c:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebf5f:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 80ebf63:	0f b6 c0             	movzbl %al,%eax
 80ebf66:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebf6a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebf6d:	89 04 24             	mov    %eax,(%esp)
 80ebf70:	e8 ab f9 fd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80ebf75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ebf7c:	00 
 80ebf7d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebf80:	89 04 24             	mov    %eax,(%esp)
 80ebf83:	e8 d0 f9 fd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80ebf88:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebf8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebf8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebf92:	89 04 24             	mov    %eax,(%esp)
 80ebf95:	e8 20 c6 55 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80ebf9a:	eb 1b                	jmp    80ebfb7 <_ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser+0x89>
 80ebf9c:	89 d3                	mov    %edx,%ebx
 80ebf9e:	89 c6                	mov    %eax,%esi
 80ebfa0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebfa3:	89 04 24             	mov    %eax,(%esp)
 80ebfa6:	e8 d5 1e 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80ebfab:	89 f0                	mov    %esi,%eax
 80ebfad:	89 da                	mov    %ebx,%edx
 80ebfaf:	89 04 24             	mov    %eax,(%esp)
 80ebfb2:	e8 99 77 9f 00       	call   8ae3750 <_Unwind_Resume>
 80ebfb7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ebfba:	89 04 24             	mov    %eax,(%esp)
 80ebfbd:	e8 be 1e 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80ebfc2:	83 c4 20             	add    $0x20,%esp
 80ebfc5:	5b                   	pop    %ebx
 80ebfc6:	5e                   	pop    %esi
 80ebfc7:	5d                   	pop    %ebp
 80ebfc8:	c3                   	ret

```

```c
// CraneMinigameManager::SendCraneItemNeedMaterial @ 0x80ebf2e

/* CraneMinigameManager::SendCraneItemNeedMaterial(CUser*) */

void __thiscall
CraneMinigameManager::SendCraneItemNeedMaterial(CraneMinigameManager *this,CUser *param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080ebf57 to 080ebf99 has its CatchHandler @ 080ebf9c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1a7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)this[0x68]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## getItemCnt

```asm
// === 080ebd44 CraneMinigameManager::getItemCnt  [0x080ebd44-0x80ebd79] ===
 80ebd44:	55                   	push   %ebp
 80ebd45:	89 e5                	mov    %esp,%ebp
 80ebd47:	83 ec 28             	sub    $0x28,%esp
 80ebd4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebd4d:	0f bf d0             	movswl %ax,%edx
 80ebd50:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebd53:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ebd57:	89 04 24             	mov    %eax,(%esp)
 80ebd5a:	e8 77 7b 7f 00       	call   88e38d6 <_ZN19CraneMinigameScript7getItemEs>
 80ebd5f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ebd62:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80ebd66:	74 0a                	je     80ebd72 <_ZN20CraneMinigameManager10getItemCntEi+0x2e>
 80ebd68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ebd6b:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 80ebd6f:	98                   	cwtl
 80ebd70:	eb 05                	jmp    80ebd77 <_ZN20CraneMinigameManager10getItemCntEi+0x33>
 80ebd72:	b8 00 00 00 00       	mov    $0x0,%eax
 80ebd77:	c9                   	leave
 80ebd78:	c3                   	ret
 80ebd79:	90                   	nop

```

```c
// CraneMinigameManager::getItemCnt @ 0x80ebd44

/* CraneMinigameManager::getItemCnt(int) */

int __thiscall CraneMinigameManager::getItemCnt(CraneMinigameManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = CraneMinigameScript::getItem((CraneMinigameScript *)this,(short)param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(iVar1 + 8);
  }
  return iVar1;
}

```

---

## init

```asm
// === 080ebc6e CraneMinigameManager::init  [0x080ebc6e-0x80ebcdf] ===
 80ebc6e:	55                   	push   %ebp
 80ebc6f:	89 e5                	mov    %esp,%ebp
 80ebc71:	83 ec 28             	sub    $0x28,%esp
 80ebc74:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebc77:	83 c0 18             	add    $0x18,%eax
 80ebc7a:	89 04 24             	mov    %eax,(%esp)
 80ebc7d:	e8 a4 03 00 00       	call   80ec026 <_ZN15Action_SendMail5resetEv>
 80ebc82:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebc85:	c7 44 24 04 20 31 b3 	movl   $0x8b33120,0x4(%esp)
 80ebc8c:	08 
 80ebc8d:	89 04 24             	mov    %eax,(%esp)
 80ebc90:	e8 8f 7c 7f 00       	call   88e3924 <_Z25importCraneMinigameScriptP19CraneMinigameScriptPKc>
 80ebc95:	83 f0 01             	xor    $0x1,%eax
 80ebc98:	84 c0                	test   %al,%al
 80ebc9a:	74 3d                	je     80ebcd9 <_ZN20CraneMinigameManager4initEv+0x6b>
 80ebc9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ebca3:	00 
 80ebca4:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 80ebcab:	00 
 80ebcac:	c7 44 24 04 80 3d b3 	movl   $0x8b33d80,0x4(%esp)
 80ebcb3:	08 
 80ebcb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ebcb7:	89 04 24             	mov    %eax,(%esp)
 80ebcba:	e8 59 3a 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80ebcbf:	c7 44 24 04 3c 31 b3 	movl   $0x8b3313c,0x4(%esp)
 80ebcc6:	08 
 80ebcc7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ebcca:	89 04 24             	mov    %eax,(%esp)
 80ebccd:	e8 b6 3a 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80ebcd2:	b8 00 00 00 00       	mov    $0x0,%eax
 80ebcd7:	eb 05                	jmp    80ebcde <_ZN20CraneMinigameManager4initEv+0x70>
 80ebcd9:	b8 01 00 00 00       	mov    $0x1,%eax
 80ebcde:	c9                   	leave
 80ebcdf:	c3                   	ret

```

```c
// CraneMinigameManager::init @ 0x80ebc6e

/* CraneMinigameManager::init() */

bool __thiscall CraneMinigameManager::init(CraneMinigameManager *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  Action_SendMail::reset((Action_SendMail *)(this + 0x18));
  cVar1 = importCraneMinigameScript((CraneMinigameScript *)this,"Etc/craneMinigameItem.etc");
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_1c,"bool CraneMinigameManager::init()",0x1d,0);
    cMyTrace::operator()(local_1c,"Error : craneMinigameItem.etc load failed!!");
  }
  return cVar1 == '\x01';
}

```

---

## isPickSuccess

```asm
// === 080ebce0 CraneMinigameManager::isPickSuccess  [0x080ebce0-0x80ebd43] ===
 80ebce0:	55                   	push   %ebp
 80ebce1:	89 e5                	mov    %esp,%ebp
 80ebce3:	83 ec 38             	sub    $0x38,%esp
 80ebce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebce9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 80ebced:	0f bf 55 e4          	movswl -0x1c(%ebp),%edx
 80ebcf1:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebcf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ebcf8:	89 04 24             	mov    %eax,(%esp)
 80ebcfb:	e8 d6 7b 7f 00       	call   88e38d6 <_ZN19CraneMinigameScript7getItemEs>
 80ebd00:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ebd03:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80ebd07:	74 33                	je     80ebd3c <_ZN20CraneMinigameManager13isPickSuccessEsi+0x5c>
 80ebd09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ebd0c:	8b 40 04             	mov    0x4(%eax),%eax
 80ebd0f:	3b 45 10             	cmp    0x10(%ebp),%eax
 80ebd12:	74 07                	je     80ebd1b <_ZN20CraneMinigameManager13isPickSuccessEsi+0x3b>
 80ebd14:	b8 00 00 00 00       	mov    $0x0,%eax
 80ebd19:	eb 26                	jmp    80ebd41 <_ZN20CraneMinigameManager13isPickSuccessEsi+0x61>
 80ebd1b:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 80ebd22:	e8 60 5e 5c 00       	call   86b1b87 <_Z12get_rand_inti>
 80ebd27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ebd2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ebd2d:	8b 40 10             	mov    0x10(%eax),%eax
 80ebd30:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80ebd33:	7c 07                	jl     80ebd3c <_ZN20CraneMinigameManager13isPickSuccessEsi+0x5c>
 80ebd35:	b8 01 00 00 00       	mov    $0x1,%eax
 80ebd3a:	eb 05                	jmp    80ebd41 <_ZN20CraneMinigameManager13isPickSuccessEsi+0x61>
 80ebd3c:	b8 00 00 00 00       	mov    $0x0,%eax
 80ebd41:	c9                   	leave
 80ebd42:	c3                   	ret
 80ebd43:	90                   	nop

```

```c
// CraneMinigameManager::isPickSuccess @ 0x80ebce0

/* CraneMinigameManager::isPickSuccess(short, int) */

undefined4 __thiscall
CraneMinigameManager::isPickSuccess(CraneMinigameManager *this,short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CraneMinigameScript::getItem((CraneMinigameScript *)this,param_1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != param_2) {
      return 0;
    }
    iVar2 = get_rand_int(100);
    if (iVar2 <= *(int *)(iVar1 + 0x10)) {
      return 1;
    }
  }
  return 0;
}

```

---

## sendItem

```asm
// === 080ebd7a CraneMinigameManager::sendItem  [0x080ebd7a-0x80ebe05] ===
 80ebd7a:	55                   	push   %ebp
 80ebd7b:	89 e5                	mov    %esp,%ebp
 80ebd7d:	83 ec 28             	sub    $0x28,%esp
 80ebd80:	8b 45 10             	mov    0x10(%ebp),%eax
 80ebd83:	0f bf d0             	movswl %ax,%edx
 80ebd86:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebd89:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ebd8d:	89 04 24             	mov    %eax,(%esp)
 80ebd90:	e8 41 7b 7f 00       	call   88e38d6 <_ZN19CraneMinigameScript7getItemEs>
 80ebd95:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ebd98:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80ebd9c:	74 60                	je     80ebdfe <_ZN20CraneMinigameManager8sendItemEP5CUseri+0x84>
 80ebd9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ebda1:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 80ebda5:	66 83 f8 ff          	cmp    $0xffff,%ax
 80ebda9:	75 07                	jne    80ebdb2 <_ZN20CraneMinigameManager8sendItemEP5CUseri+0x38>
 80ebdab:	b8 15 00 00 00       	mov    $0x15,%eax
 80ebdb0:	eb 51                	jmp    80ebe03 <_ZN20CraneMinigameManager8sendItemEP5CUseri+0x89>
 80ebdb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ebdb5:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 80ebdb9:	0f bf d0             	movswl %ax,%edx
 80ebdbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ebdbf:	8b 40 04             	mov    0x4(%eax),%eax
 80ebdc2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80ebdc5:	83 c1 18             	add    $0x18,%ecx
 80ebdc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ebdcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebdd0:	89 0c 24             	mov    %ecx,(%esp)
 80ebdd3:	e8 b4 02 00 00       	call   80ec08c <_ZN15Action_SendMail8set_itemEii>
 80ebdd8:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebddb:	83 c0 18             	add    $0x18,%eax
 80ebdde:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80ebde5:	00 
 80ebde6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ebdea:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebded:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebdf1:	8d 45 f3             	lea    -0xd(%ebp),%eax
 80ebdf4:	89 04 24             	mov    %eax,(%esp)
 80ebdf7:	e8 36 11 02 00       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 80ebdfc:	eb 05                	jmp    80ebe03 <_ZN20CraneMinigameManager8sendItemEP5CUseri+0x89>
 80ebdfe:	b8 15 00 00 00       	mov    $0x15,%eax
 80ebe03:	c9                   	leave
 80ebe04:	c3                   	ret
 80ebe05:	90                   	nop

```

```c
// CraneMinigameManager::sendItem @ 0x80ebd7a

/* CraneMinigameManager::sendItem(CUser*, int) */

undefined4 __thiscall
CraneMinigameManager::sendItem(CraneMinigameManager *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  CEventActionMng local_11;
  int local_10;
  
  local_10 = CraneMinigameScript::getItem((CraneMinigameScript *)this,(short)param_2);
  if (local_10 == 0) {
    uVar1 = 0x15;
  }
  else if (*(short *)(local_10 + 8) == -1) {
    uVar1 = 0x15;
  }
  else {
    Action_SendMail::set_item
              ((Action_SendMail *)(this + 0x18),*(int *)(local_10 + 4),(int)*(short *)(local_10 + 8)
              );
    uVar1 = EventClassify::CEventActionMng::process_action_send_mail
                      (&local_11,param_1,(Action_SendMail *)(this + 0x18),true);
  }
  return uVar1;
}

```

---

## startUseMaterial

```asm
// === 080ebe06 CraneMinigameManager::startUseMaterial  [0x080ebe06-0x80ebebb] ===
 80ebe06:	55                   	push   %ebp
 80ebe07:	89 e5                	mov    %esp,%ebp
 80ebe09:	53                   	push   %ebx
 80ebe0a:	83 ec 64             	sub    $0x64,%esp
 80ebe0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebe10:	89 04 24             	mov    %eax,(%esp)
 80ebe13:	e8 66 e4 fe ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 80ebe18:	8d 55 bb             	lea    -0x45(%ebp),%edx
 80ebe1b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80ebe1e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80ebe22:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80ebe29:	00 
 80ebe2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebe2e:	89 14 24             	mov    %edx,(%esp)
 80ebe31:	e8 e2 fa 40 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 80ebe36:	83 ec 04             	sub    $0x4,%esp
 80ebe39:	8b 55 bd             	mov    -0x43(%ebp),%edx
 80ebe3c:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebe3f:	8b 40 10             	mov    0x10(%eax),%eax
 80ebe42:	39 c2                	cmp    %eax,%edx
 80ebe44:	74 07                	je     80ebe4d <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0x47>
 80ebe46:	b8 11 00 00 00       	mov    $0x11,%eax
 80ebe4b:	eb 69                	jmp    80ebeb6 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0xb0>
 80ebe4d:	8b 55 c2             	mov    -0x3e(%ebp),%edx
 80ebe50:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebe53:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 80ebe57:	98                   	cwtl
 80ebe58:	39 c2                	cmp    %eax,%edx
 80ebe5a:	7d 07                	jge    80ebe63 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0x5d>
 80ebe5c:	b8 16 00 00 00       	mov    $0x16,%eax
 80ebe61:	eb 53                	jmp    80ebeb6 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0xb0>
 80ebe63:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebe66:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 80ebe6a:	0f bf d8             	movswl %ax,%ebx
 80ebe6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ebe70:	89 04 24             	mov    %eax,(%esp)
 80ebe73:	e8 16 e4 fe ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80ebe78:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 80ebe7f:	00 
 80ebe80:	c7 44 24 10 34 00 00 	movl   $0x34,0x10(%esp)
 80ebe87:	00 
 80ebe88:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80ebe8c:	8b 55 10             	mov    0x10(%ebp),%edx
 80ebe8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ebe93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ebe9a:	00 
 80ebe9b:	89 04 24             	mov    %eax,(%esp)
 80ebe9e:	e8 69 81 41 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 80ebea3:	83 f0 01             	xor    $0x1,%eax
 80ebea6:	84 c0                	test   %al,%al
 80ebea8:	74 07                	je     80ebeb1 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0xab>
 80ebeaa:	b8 16 00 00 00       	mov    $0x16,%eax
 80ebeaf:	eb 05                	jmp    80ebeb6 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri+0xb0>
 80ebeb1:	b8 00 00 00 00       	mov    $0x0,%eax
 80ebeb6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80ebeb9:	c9                   	leave
 80ebeba:	c3                   	ret
 80ebebb:	90                   	nop

```

```c
// CraneMinigameManager::startUseMaterial @ 0x80ebe06

/* CraneMinigameManager::startUseMaterial(CUser*, int) */

undefined4 __thiscall
CraneMinigameManager::startUseMaterial(CraneMinigameManager *this,CUser *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined1 local_49 [2];
  int local_47;
  int local_42;
  
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_49,iVar3);
  if (local_47 == *(int *)(this + 0x10)) {
    if (local_42 < *(short *)(this + 0x14)) {
      uVar4 = 0x16;
    }
    else {
      sVar1 = *(short *)(this + 0x14);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar5,1,param_2,(int)sVar1,0x34,1);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x16;
      }
    }
  }
  else {
    uVar4 = 0x11;
  }
  return uVar4;
}

```

---

## updateCraneItemNeedMaterial

```asm
// === 080ebebc CraneMinigameManager::updateCraneItemNeedMaterial  [0x080ebebc-0x80ebf2d] ===
 80ebebc:	55                   	push   %ebp
 80ebebd:	89 e5                	mov    %esp,%ebp
 80ebebf:	56                   	push   %esi
 80ebec0:	53                   	push   %ebx
 80ebec1:	83 ec 20             	sub    $0x20,%esp
 80ebec4:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80ebec7:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebeca:	83 c0 5c             	add    $0x5c,%eax
 80ebecd:	89 04 24             	mov    %eax,(%esp)
 80ebed0:	e8 3f 19 ff ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 80ebed5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ebed8:	89 d8                	mov    %ebx,%eax
 80ebeda:	ba 00 00 00 00       	mov    $0x0,%edx
 80ebedf:	f7 75 f4             	divl   -0xc(%ebp)
 80ebee2:	89 d1                	mov    %edx,%ecx
 80ebee4:	89 c8                	mov    %ecx,%eax
 80ebee6:	89 c2                	mov    %eax,%edx
 80ebee8:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebeeb:	88 50 68             	mov    %dl,0x68(%eax)
 80ebeee:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebef1:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 80ebef5:	0f b6 c0             	movzbl %al,%eax
 80ebef8:	8b 55 08             	mov    0x8(%ebp),%edx
 80ebefb:	83 c2 5c             	add    $0x5c,%edx
 80ebefe:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ebf02:	89 14 24             	mov    %edx,(%esp)
 80ebf05:	e8 ae 01 00 00       	call   80ec0b8 <_ZNSt6vectorISt4pairIiiESaIS1_EE2atEj>
 80ebf0a:	89 c3                	mov    %eax,%ebx
 80ebf0c:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebf0f:	8b 70 10             	mov    0x10(%eax),%esi
 80ebf12:	e8 9b 9b 0c 00       	call   81b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>
 80ebf17:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80ebf1b:	89 74 24 04          	mov    %esi,0x4(%esp)
 80ebf1f:	89 04 24             	mov    %eax,(%esp)
 80ebf22:	e8 1f 9c 0c 00       	call   81b5b46 <_ZN23NeedMaterialDataManager19setNeedMaterialInfoEiRKSt4pairIiiE>
 80ebf27:	83 c4 20             	add    $0x20,%esp
 80ebf2a:	5b                   	pop    %ebx
 80ebf2b:	5e                   	pop    %esi
 80ebf2c:	5d                   	pop    %ebp
 80ebf2d:	c3                   	ret

```

```c
// CraneMinigameManager::updateCraneItemNeedMaterial @ 0x80ebebc

/* CraneMinigameManager::updateCraneItemNeedMaterial(int) */

void __thiscall
CraneMinigameManager::updateCraneItemNeedMaterial(CraneMinigameManager *this,int param_1)

{
  int iVar1;
  uint uVar2;
  pair *ppVar3;
  NeedMaterialDataManager *this_00;
  
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c))
  ;
  this[0x68] = SUB41((uint)param_1 % uVar2,0);
  ppVar3 = (pair *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (this + 0x5c),(uint)(byte)this[0x68]);
  iVar1 = *(int *)(this + 0x10);
  this_00 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
  NeedMaterialDataManager::setNeedMaterialInfo(this_00,iVar1,ppVar3);
  return;
}

```

---

## ~CraneMinigameManager

```asm
// === 080ebc5a CraneMinigameManager::~CraneMinigameManager  [0x080ebc5a-0x80ebc6d] ===
 80ebc5a:	55                   	push   %ebp
 80ebc5b:	89 e5                	mov    %esp,%ebp
 80ebc5d:	83 ec 18             	sub    $0x18,%esp
 80ebc60:	8b 45 08             	mov    0x8(%ebp),%eax
 80ebc63:	89 04 24             	mov    %eax,(%esp)
 80ebc66:	e8 3d 7b 7f 00       	call   88e37a8 <_ZN19CraneMinigameScriptD1Ev>
 80ebc6b:	c9                   	leave
 80ebc6c:	c3                   	ret
 80ebc6d:	90                   	nop

```

```c
// CraneMinigameManager::~CraneMinigameManager @ 0x80ebc5a

/* CraneMinigameManager::~CraneMinigameManager() */

void __thiscall CraneMinigameManager::~CraneMinigameManager(CraneMinigameManager *this)

{
  CraneMinigameScript::~CraneMinigameScript((CraneMinigameScript *)this);
  return;
}

```

