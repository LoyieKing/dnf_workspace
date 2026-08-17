# Inter_ApplyTempPowerSide

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dccde Inter_ApplyTempPowerSide::dispatch_sig  [0x084dccde-0x84dceeb] ===
 84dccde:	55                   	push   %ebp
 84dccdf:	89 e5                	mov    %esp,%ebp
 84dcce1:	56                   	push   %esi
 84dcce2:	53                   	push   %ebx
 84dcce3:	83 ec 50             	sub    $0x50,%esp
 84dcce6:	8b 45 10             	mov    0x10(%ebp),%eax
 84dcce9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84dccec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dccef:	8b 58 0e             	mov    0xe(%eax),%ebx
 84dccf2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dccf9:	ff 
 84dccfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dccfd:	89 04 24             	mov    %eax,(%esp)
 84dcd00:	e8 9b 12 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dcd05:	39 c3                	cmp    %eax,%ebx
 84dcd07:	0f 95 c0             	setne  %al
 84dcd0a:	84 c0                	test   %al,%al
 84dcd0c:	74 0a                	je     84dcd18 <_ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci+0x3a>
 84dcd0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dcd13:	e9 cb 01 00 00       	jmp    84dcee3 <_ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci+0x205>
 84dcd18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcd1b:	89 04 24             	mov    %eax,(%esp)
 84dcd1e:	e8 41 34 d5 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84dcd23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dcd26:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dcd29:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84dcd2d:	0f b6 c8             	movzbl %al,%ecx
 84dcd30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dcd33:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84dcd37:	0f b6 d0             	movzbl %al,%edx
 84dcd3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dcd3d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84dcd41:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dcd45:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dcd49:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 84dcd4c:	89 04 24             	mov    %eax,(%esp)
 84dcd4f:	e8 46 04 01 00       	call   84ed19a <_ZN12STGuildProxyC1EPKchh>
 84dcd54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcd57:	89 04 24             	mov    %eax,(%esp)
 84dcd5a:	e8 0d 27 d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84dcd5f:	89 c3                	mov    %eax,%ebx
 84dcd61:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcd64:	89 04 24             	mov    %eax,(%esp)
 84dcd67:	e8 24 ef be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84dcd6c:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84dcd72:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dcd76:	89 14 24             	mov    %edx,(%esp)
 84dcd79:	e8 3a 06 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84dcd7e:	8d 55 d6             	lea    -0x2a(%ebp),%edx
 84dcd81:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dcd85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dcd89:	89 04 24             	mov    %eax,(%esp)
 84dcd8c:	e8 cd 1b f9 ff       	call   846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>
 84dcd91:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcd94:	89 04 24             	mov    %eax,(%esp)
 84dcd97:	e8 b0 0f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dcd9c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84dcda3:	00 
 84dcda4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dcdab:	00 
 84dcdac:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcdaf:	89 04 24             	mov    %eax,(%esp)
 84dcdb2:	e8 45 eb be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dcdb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dcdbe:	00 
 84dcdbf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcdc2:	89 04 24             	mov    %eax,(%esp)
 84dcdc5:	e8 56 eb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dcdca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dcdd1:	00 
 84dcdd2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcdd5:	89 04 24             	mov    %eax,(%esp)
 84dcdd8:	e8 c7 d0 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dcddd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcde0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dcde7:	00 
 84dcde8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dcdec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcdef:	89 04 24             	mov    %eax,(%esp)
 84dcdf2:	e8 57 d6 17 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84dcdf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dcdfe:	00 
 84dcdff:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dce02:	89 04 24             	mov    %eax,(%esp)
 84dce05:	e8 4e eb be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dce0a:	e8 98 d5 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dce0f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dce12:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dce16:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84dce19:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dce1d:	89 04 24             	mov    %eax,(%esp)
 84dce20:	e8 37 7b c5 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 84dce25:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce28:	89 04 24             	mov    %eax,(%esp)
 84dce2b:	e8 1c 0f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dce30:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 84dce37:	00 
 84dce38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dce3f:	00 
 84dce40:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce43:	89 04 24             	mov    %eax,(%esp)
 84dce46:	e8 b1 ea be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dce4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dce52:	00 
 84dce53:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce56:	89 04 24             	mov    %eax,(%esp)
 84dce59:	e8 c2 ea be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dce5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dce65:	00 
 84dce66:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce69:	89 04 24             	mov    %eax,(%esp)
 84dce6c:	e8 af ea be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dce71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dce78:	00 
 84dce79:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce7c:	89 04 24             	mov    %eax,(%esp)
 84dce7f:	e8 d4 ea be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dce84:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce87:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dce8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dce8e:	89 04 24             	mov    %eax,(%esp)
 84dce91:	e8 24 b7 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dce96:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dce9b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dce9e:	89 04 24             	mov    %eax,(%esp)
 84dcea1:	e8 da 0f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dcea6:	eb 30                	jmp    84dced8 <_ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci+0x1fa>
 84dcea8:	89 d3                	mov    %edx,%ebx
 84dceaa:	89 c6                	mov    %eax,%esi
 84dceac:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84dceaf:	89 04 24             	mov    %eax,(%esp)
 84dceb2:	e8 c9 0f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dceb7:	89 f0                	mov    %esi,%eax
 84dceb9:	89 da                	mov    %ebx,%edx
 84dcebb:	eb 00                	jmp    84dcebd <_ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci+0x1df>
 84dcebd:	89 d3                	mov    %edx,%ebx
 84dcebf:	89 c6                	mov    %eax,%esi
 84dcec1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcec4:	89 04 24             	mov    %eax,(%esp)
 84dcec7:	e8 b4 0f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dcecc:	89 f0                	mov    %esi,%eax
 84dcece:	89 da                	mov    %ebx,%edx
 84dced0:	89 04 24             	mov    %eax,(%esp)
 84dced3:	e8 78 68 60 00       	call   8ae3750 <_Unwind_Resume>
 84dced8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84dcedb:	89 04 24             	mov    %eax,(%esp)
 84dcede:	e8 9d 0f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dcee3:	89 d8                	mov    %ebx,%eax
 84dcee5:	83 c4 50             	add    $0x50,%esp
 84dcee8:	5b                   	pop    %ebx
 84dcee9:	5e                   	pop    %esi
 84dceea:	5d                   	pop    %ebp
 84dceeb:	c3                   	ret

```

```c
// Inter_ApplyTempPowerSide::dispatch_sig @ 0x84dccde

/* Inter_ApplyTempPowerSide::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ApplyTempPowerSide::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  GameWorld *this_00;
  PacketGuard local_48 [12];
  PacketGuard local_3c [14];
  STGuildProxy local_2e [26];
  int local_14;
  char *local_10;
  
  local_14 = param_3;
  iVar1 = *(int *)(param_3 + 0xe);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    local_10 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
    STGuildProxy::STGuildProxy(local_2e,local_10,local_10[0x1b],*(uchar *)(local_14 + 0x16));
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::ModifyGuildInfoProxy(this,uVar3,local_2e);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084dcdb2 to 084dce2f has its CatchHandler @ 084dcebd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_3c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_3c,(CUser *)param_2);
    PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084dce46 to 084dce95 has its CatchHandler @ 084dcea8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xc3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send((CUser *)param_2,local_48);
                    /* try { // try from 084dcea1 to 084dcea5 has its CatchHandler @ 084dcebd */
    PacketGuard::~PacketGuard(local_48);
    PacketGuard::~PacketGuard(local_3c);
  }
  return 0;
}

```

