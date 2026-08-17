# Dispatcher_SeriaRoom_Ani_Deco_Event

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e8b20 Dispatcher_SeriaRoom_Ani_Deco_Event::check_error  [0x081e8b20-0x81e8b63] ===
 81e8b20:	55                   	push   %ebp
 81e8b21:	89 e5                	mov    %esp,%ebp
 81e8b23:	83 ec 18             	sub    $0x18,%esp
 81e8b26:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8b2b:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 81e8b32:	00 
 81e8b33:	89 04 24             	mov    %eax,(%esp)
 81e8b36:	e8 5d ce f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8b3b:	8b 10                	mov    (%eax),%edx
 81e8b3d:	83 c2 34             	add    $0x34,%edx
 81e8b40:	8b 12                	mov    (%edx),%edx
 81e8b42:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8b49:	00 
 81e8b4a:	89 04 24             	mov    %eax,(%esp)
 81e8b4d:	ff d2                	call   *%edx
 81e8b4f:	83 f0 01             	xor    $0x1,%eax
 81e8b52:	84 c0                	test   %al,%al
 81e8b54:	74 07                	je     81e8b5d <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x3d>
 81e8b56:	b8 01 00 00 00       	mov    $0x1,%eax
 81e8b5b:	eb 05                	jmp    81e8b62 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x42>
 81e8b5d:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8b62:	c9                   	leave
 81e8b63:	c3                   	ret

```

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::check_error @ 0x81e8b20

/* Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser*, MSG_BASE&) */

bool Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 != '\x01';
}

```

---

## process

```asm
// === 081e886a Dispatcher_SeriaRoom_Ani_Deco_Event::process  [0x081e886a-0x81e8b1f] ===
 81e886a:	55                   	push   %ebp
 81e886b:	89 e5                	mov    %esp,%ebp
 81e886d:	57                   	push   %edi
 81e886e:	56                   	push   %esi
 81e886f:	53                   	push   %ebx
 81e8870:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 81e8876:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8879:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e887c:	8b 45 14             	mov    0x14(%ebp),%eax
 81e887f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e8882:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8885:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e8889:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e888c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8890:	8b 45 08             	mov    0x8(%ebp),%eax
 81e8893:	89 04 24             	mov    %eax,(%esp)
 81e8896:	e8 85 02 00 00       	call   81e8b20 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE>
 81e889b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81e889e:	89 42 04             	mov    %eax,0x4(%edx)
 81e88a1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e88a4:	8b 40 04             	mov    0x4(%eax),%eax
 81e88a7:	85 c0                	test   %eax,%eax
 81e88a9:	7e 0a                	jle    81e88b5 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81e88ab:	b8 00 00 00 00       	mov    $0x0,%eax
 81e88b0:	e9 5f 02 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e88b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e88b8:	8b 40 04             	mov    0x4(%eax),%eax
 81e88bb:	85 c0                	test   %eax,%eax
 81e88bd:	79 2b                	jns    81e88ea <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x80>
 81e88bf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e88c2:	8b 40 04             	mov    0x4(%eax),%eax
 81e88c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e88cc:	00 
 81e88cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e88d1:	c7 44 24 04 a0 08 bd 	movl   $0x8bd08a0,0x4(%esp)
 81e88d8:	08 
 81e88d9:	c7 04 24 51 65 00 00 	movl   $0x6551,(%esp)
 81e88e0:	e8 f2 7f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e88e5:	e9 2a 02 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e88ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e88ed:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e88f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e88f4:	89 04 24             	mov    %eax,(%esp)
 81e88f7:	e8 9a 72 04 00       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 81e88fc:	83 ec 04             	sub    $0x4,%esp
 81e88ff:	0f b7 5d d2          	movzwl -0x2e(%ebp),%ebx
 81e8903:	e8 93 38 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e8908:	89 04 24             	mov    %eax,(%esp)
 81e890b:	e8 fe d3 17 00       	call   8365d0e <_ZN12CDataManager14maxAniDecoItemEv>
 81e8910:	66 39 c3             	cmp    %ax,%bx
 81e8913:	0f 9d c0             	setge  %al
 81e8916:	84 c0                	test   %al,%al
 81e8918:	74 14                	je     81e892e <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0xc4>
 81e891a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e891d:	c7 40 04 14 00 00 00 	movl   $0x14,0x4(%eax)
 81e8924:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8929:	e9 e6 01 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e892e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e8931:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e8935:	0f b7 d8             	movzwl %ax,%ebx
 81e8938:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e893b:	89 04 24             	mov    %eax,(%esp)
 81e893e:	e8 3b 19 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e8943:	8d 55 93             	lea    -0x6d(%ebp),%edx
 81e8946:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e894a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e8951:	00 
 81e8952:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8956:	89 14 24             	mov    %edx,(%esp)
 81e8959:	e8 ba 2f 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e895e:	83 ec 04             	sub    $0x4,%esp
 81e8961:	8b 45 95             	mov    -0x6b(%ebp),%eax
 81e8964:	89 c3                	mov    %eax,%ebx
 81e8966:	e8 30 38 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e896b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e896f:	89 04 24             	mov    %eax,(%esp)
 81e8972:	e8 bb 70 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e8977:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e897a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81e897e:	75 14                	jne    81e8994 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x12a>
 81e8980:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e8983:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81e898a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e898f:	e9 80 01 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e8994:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 81e8998:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 81e899c:	66 83 7d e2 ff       	cmpw   $0xffff,-0x1e(%ebp)
 81e89a1:	75 14                	jne    81e89b7 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x14d>
 81e89a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e89a6:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81e89ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81e89b2:	e9 5d 01 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e89b7:	8b 45 95             	mov    -0x6b(%ebp),%eax
 81e89ba:	89 c6                	mov    %eax,%esi
 81e89bc:	0f bf 5d e2          	movswl -0x1e(%ebp),%ebx
 81e89c0:	e8 d6 37 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e89c5:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e89c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e89cd:	89 04 24             	mov    %eax,(%esp)
 81e89d0:	e8 b1 d2 17 00       	call   8365c86 <_ZN12CDataManager18invalidAniDecoItemEii>
 81e89d5:	83 f0 01             	xor    $0x1,%eax
 81e89d8:	84 c0                	test   %al,%al
 81e89da:	74 14                	je     81e89f0 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x186>
 81e89dc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e89df:	c7 40 04 17 00 00 00 	movl   $0x17,0x4(%eax)
 81e89e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e89eb:	e9 24 01 00 00       	jmp    81e8b14 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2aa>
 81e89f0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e89f3:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81e89f7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e89fa:	66 89 50 08          	mov    %dx,0x8(%eax)
 81e89fe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e8a01:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e8a05:	0f b7 d8             	movzwl %ax,%ebx
 81e8a08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8a0b:	89 04 24             	mov    %eax,(%esp)
 81e8a0e:	e8 7b 18 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e8a13:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e8a1a:	00 
 81e8a1b:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e8a22:	00 
 81e8a23:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e8a2a:	00 
 81e8a2b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e8a2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8a36:	00 
 81e8a37:	89 04 24             	mov    %eax,(%esp)
 81e8a3a:	e8 cd b5 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e8a3f:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 81e8a43:	83 c0 01             	add    $0x1,%eax
 81e8a46:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 81e8a4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8a4d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81e8a50:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e8a54:	89 04 24             	mov    %eax,(%esp)
 81e8a57:	e8 1c 71 04 00       	call   822fb78 <_ZN15CUserCharacInfo23setSeriaRoomAniDecoInfoE17seriaRoom_AniDeco>
 81e8a5c:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 81e8a60:	98                   	cwtl
 81e8a61:	89 45 84             	mov    %eax,-0x7c(%ebp)
 81e8a64:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 81e8a68:	0f bf f8             	movswl %ax,%edi
 81e8a6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8a6e:	89 04 24             	mov    %eax,(%esp)
 81e8a71:	e8 d8 31 ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81e8a76:	89 c6                	mov    %eax,%esi
 81e8a78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8a7b:	89 04 24             	mov    %eax,(%esp)
 81e8a7e:	e8 f9 1e 46 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81e8a83:	0f bf d8             	movswl %ax,%ebx
 81e8a86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8a89:	89 04 24             	mov    %eax,(%esp)
 81e8a8c:	e8 dd 18 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e8a91:	8b 55 84             	mov    -0x7c(%ebp),%edx
 81e8a94:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e8a98:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81e8a9c:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e8aa0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e8aa4:	89 04 24             	mov    %eax,(%esp)
 81e8aa7:	e8 c8 24 26 00       	call   844af74 <_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss>
 81e8aac:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8ab1:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 81e8ab8:	00 
 81e8ab9:	89 04 24             	mov    %eax,(%esp)
 81e8abc:	e8 d7 ce f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8ac1:	8b 10                	mov    (%eax),%edx
 81e8ac3:	83 c2 34             	add    $0x34,%edx
 81e8ac6:	8b 12                	mov    (%edx),%edx
 81e8ac8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8acf:	00 
 81e8ad0:	89 04 24             	mov    %eax,(%esp)
 81e8ad3:	ff d2                	call   *%edx
 81e8ad5:	84 c0                	test   %al,%al
 81e8ad7:	74 36                	je     81e8b0f <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2a5>
 81e8ad9:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8ade:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 81e8ae5:	00 
 81e8ae6:	89 04 24             	mov    %eax,(%esp)
 81e8ae9:	e8 aa ce f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8aee:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e8af1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81e8af5:	74 18                	je     81e8b0f <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x2a5>
 81e8af7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8afa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8afe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e8b01:	89 04 24             	mov    %eax,(%esp)
 81e8b04:	e8 49 2f 09 00       	call   827ba52 <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser>
 81e8b09:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81e8b0c:	89 42 04             	mov    %eax,0x4(%edx)
 81e8b0f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8b14:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81e8b17:	83 c4 00             	add    $0x0,%esp
 81e8b1a:	5b                   	pop    %ebx
 81e8b1b:	5e                   	pop    %esi
 81e8b1c:	5f                   	pop    %edi
 81e8b1d:	5d                   	pop    %ebp
 81e8b1e:	c3                   	ret
 81e8b1f:	90                   	nop

```

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::process @ 0x81e886a

/* Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::process
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  CDataManager *pCVar7;
  int iVar8;
  CInventory *pCVar9;
  uint uVar10;
  int *piVar11;
  undefined1 local_71 [2];
  int local_6f;
  undefined4 local_34;
  MSG_BASE *local_30;
  ParamBase *local_2c;
  int local_28;
  short local_22;
  SeriaRoomAniDecoEvent *local_20;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar6 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_2c + 4) = uVar6;
  if (*(int *)(local_2c + 4) < 1) {
    if (*(int *)(local_2c + 4) < 0) {
      uVar6 = LineFunc(0x6551,
                       "virtual int Dispatcher_SeriaRoom_Ani_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_2c + 4),0);
    }
    else {
      CUserCharacInfo::getSeriaRoomAniDecoInfo();
      sVar2 = local_34._2_2_;
      pCVar7 = (CDataManager *)G_CDataManager();
      sVar4 = CDataManager::maxAniDecoItem(pCVar7);
      if (sVar2 < sVar4) {
        iVar8 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_71,iVar8);
        iVar8 = local_6f;
        pCVar7 = (CDataManager *)G_CDataManager();
        local_28 = CDataManager::find_item(pCVar7,iVar8);
        if (local_28 == 0) {
          *(undefined4 *)(local_2c + 4) = 1;
          uVar6 = 0;
        }
        else {
          local_22 = local_34._2_2_;
          if (local_34._2_2_ == -1) {
            *(undefined4 *)(local_2c + 4) = 1;
            uVar6 = 0;
          }
          else {
            iVar8 = (int)local_34._2_2_;
            pCVar7 = (CDataManager *)G_CDataManager();
            cVar3 = CDataManager::invalidAniDecoItem(pCVar7,iVar8,local_6f);
            if (cVar3 == '\x01') {
              *(undefined2 *)(local_2c + 8) = *(undefined2 *)(local_30 + 0xe);
              uVar1 = *(undefined2 *)(local_30 + 0xe);
              pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::delete_item(pCVar9,1,uVar1,1,3,1);
              local_34 = CONCAT22(local_34._2_2_ + 1,(short)local_34);
              CUserCharacInfo::setSeriaRoomAniDecoInfo((CUserCharacInfo *)param_1,local_34);
              sVar4 = local_34._2_2_;
              sVar2 = (short)local_34;
              iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              sVar5 = CUser::GetServerGroupToPvP(param_1);
              uVar10 = CUser::get_acc_id(param_1);
              DB_UpdateSeriaRoomAnimationDeco::makeRequest(uVar10,sVar5,iVar8,sVar2,sVar4);
              piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
              cVar3 = (**(code **)(*piVar11 + 0x34))(piVar11,0);
              if (cVar3 != '\0') {
                local_20 = (SeriaRoomAniDecoEvent *)
                           CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
                if (local_20 != (SeriaRoomAniDecoEvent *)0x0) {
                  uVar6 = SeriaRoomAniDecoEvent::processEvent(local_20,param_1);
                  *(undefined4 *)(local_2c + 4) = uVar6;
                }
              }
              uVar6 = 0;
            }
            else {
              *(undefined4 *)(local_2c + 4) = 0x17;
              uVar6 = 0;
            }
          }
        }
      }
      else {
        *(undefined4 *)(local_2c + 4) = 0x14;
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## read

```asm
// === 081e8814 Dispatcher_SeriaRoom_Ani_Deco_Event::read  [0x081e8814-0x81e8869] ===
 81e8814:	55                   	push   %ebp
 81e8815:	89 e5                	mov    %esp,%ebp
 81e8817:	83 ec 28             	sub    $0x28,%esp
 81e881a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e881d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8820:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8823:	83 c0 0e             	add    $0xe,%eax
 81e8826:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e882a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e882d:	89 04 24             	mov    %eax,(%esp)
 81e8830:	e8 7b 48 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e8835:	83 f0 01             	xor    $0x1,%eax
 81e8838:	84 c0                	test   %al,%al
 81e883a:	74 26                	je     81e8862 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4readER9PacketBufR8MSG_BASE+0x4e>
 81e883c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8843:	00 
 81e8844:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e884b:	00 
 81e884c:	c7 44 24 04 00 09 bd 	movl   $0x8bd0900,0x4(%esp)
 81e8853:	08 
 81e8854:	c7 04 24 40 65 00 00 	movl   $0x6540,(%esp)
 81e885b:	e8 77 80 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8860:	eb 05                	jmp    81e8867 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4readER9PacketBufR8MSG_BASE+0x53>
 81e8862:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8867:	c9                   	leave
 81e8868:	c3                   	ret
 81e8869:	90                   	nop

```

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::read @ 0x81e8814

/* Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::read
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x6540,
                     "virtual int Dispatcher_SeriaRoom_Ani_Deco_Event::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e8b64 Dispatcher_SeriaRoom_Ani_Deco_Event::send  [0x081e8b64-0x81e8c77] ===
 81e8b64:	55                   	push   %ebp
 81e8b65:	89 e5                	mov    %esp,%ebp
 81e8b67:	56                   	push   %esi
 81e8b68:	53                   	push   %ebx
 81e8b69:	83 ec 30             	sub    $0x30,%esp
 81e8b6c:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8b6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8b72:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8b75:	89 04 24             	mov    %eax,(%esp)
 81e8b78:	e8 cf 51 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e8b7d:	c7 44 24 08 01 02 00 	movl   $0x201,0x8(%esp)
 81e8b84:	00 
 81e8b85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8b8c:	00 
 81e8b8d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8b90:	89 04 24             	mov    %eax,(%esp)
 81e8b93:	e8 64 2d ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e8b98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8b9b:	8b 40 04             	mov    0x4(%eax),%eax
 81e8b9e:	85 c0                	test   %eax,%eax
 81e8ba0:	75 57                	jne    81e8bf9 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4sendEP5CUserR9ParamBase+0x95>
 81e8ba2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8ba9:	00 
 81e8baa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8bad:	89 04 24             	mov    %eax,(%esp)
 81e8bb0:	e8 6b 2d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8bb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8bb8:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81e8bbc:	0f b7 c0             	movzwl %ax,%eax
 81e8bbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8bc3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8bc6:	89 04 24             	mov    %eax,(%esp)
 81e8bc9:	e8 d6 12 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e8bce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e8bd1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81e8bd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e8bd8:	89 04 24             	mov    %eax,(%esp)
 81e8bdb:	e8 b6 6f 04 00       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 81e8be0:	83 ec 04             	sub    $0x4,%esp
 81e8be3:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 81e8be7:	98                   	cwtl
 81e8be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8bec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8bef:	89 04 24             	mov    %eax,(%esp)
 81e8bf2:	e8 ad 12 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e8bf7:	eb 28                	jmp    81e8c21 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4sendEP5CUserR9ParamBase+0xbd>
 81e8bf9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8c00:	00 
 81e8c01:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c04:	89 04 24             	mov    %eax,(%esp)
 81e8c07:	e8 14 2d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8c0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8c0f:	8b 40 04             	mov    0x4(%eax),%eax
 81e8c12:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8c16:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c19:	89 04 24             	mov    %eax,(%esp)
 81e8c1c:	e8 ff 2c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8c21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8c28:	00 
 81e8c29:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c2c:	89 04 24             	mov    %eax,(%esp)
 81e8c2f:	e8 24 2d ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e8c34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c37:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8c3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8c3e:	89 04 24             	mov    %eax,(%esp)
 81e8c41:	e8 74 f9 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e8c46:	eb 1b                	jmp    81e8c63 <_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4sendEP5CUserR9ParamBase+0xff>
 81e8c48:	89 d3                	mov    %edx,%ebx
 81e8c4a:	89 c6                	mov    %eax,%esi
 81e8c4c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c4f:	89 04 24             	mov    %eax,(%esp)
 81e8c52:	e8 29 52 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8c57:	89 f0                	mov    %esi,%eax
 81e8c59:	89 da                	mov    %ebx,%edx
 81e8c5b:	89 04 24             	mov    %eax,(%esp)
 81e8c5e:	e8 ed aa 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e8c63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e8c66:	89 04 24             	mov    %eax,(%esp)
 81e8c69:	e8 12 52 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8c6e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e8c71:	83 c4 00             	add    $0x0,%esp
 81e8c74:	5b                   	pop    %ebx
 81e8c75:	5e                   	pop    %esi
 81e8c76:	5d                   	pop    %ebp
 81e8c77:	c3                   	ret

```

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::send @ 0x81e8b64

/* Dispatcher_SeriaRoom_Ani_Deco_Event::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::send
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [14];
  short local_12;
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081e8b93 to 081e8c45 has its CatchHandler @ 081e8c48 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x201);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_10 + 8));
    CUserCharacInfo::getSeriaRoomAniDecoInfo();
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(int)local_12);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

