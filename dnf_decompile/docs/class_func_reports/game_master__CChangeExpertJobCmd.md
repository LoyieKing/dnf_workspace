# game_master__CChangeExpertJobCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a9900 game_master::CChangeExpertJobCmd::execute  [0x084a9900-0x84a9b97] ===
 84a9900:	55                   	push   %ebp
 84a9901:	89 e5                	mov    %esp,%ebp
 84a9903:	57                   	push   %edi
 84a9904:	56                   	push   %esi
 84a9905:	53                   	push   %ebx
 84a9906:	83 ec 4c             	sub    $0x4c,%esp
 84a9909:	8b 45 08             	mov    0x8(%ebp),%eax
 84a990c:	8b 58 08             	mov    0x8(%eax),%ebx
 84a990f:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9912:	89 04 24             	mov    %eax,(%esp)
 84a9915:	e8 a0 a6 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a991a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a991e:	89 04 24             	mov    %eax,(%esp)
 84a9921:	e8 18 5c ff ff       	call   849f53e <_ZN15CUserCharacInfo25SetCurCharacExpertJobTypeEi>
 84a9926:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9929:	8b 58 08             	mov    0x8(%eax),%ebx
 84a992c:	e8 6a 28 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9931:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9935:	89 04 24             	mov    %eax,(%esp)
 84a9938:	e8 b5 1c d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a993d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a9940:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84a9944:	0f 84 77 01 00 00    	je     84a9ac1 <_ZN11game_master19CChangeExpertJobCmd7executeEv+0x1c1>
 84a994a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84a9951:	e9 0a 01 00 00       	jmp    84a9a60 <_ZN11game_master19CChangeExpertJobCmd7executeEv+0x160>
 84a9956:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9959:	89 04 24             	mov    %eax,(%esp)
 84a995c:	e8 59 a6 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9961:	89 04 24             	mov    %eax,(%esp)
 84a9964:	e8 c9 6a c7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84a9969:	85 c0                	test   %eax,%eax
 84a996b:	0f 95 c0             	setne  %al
 84a996e:	84 c0                	test   %al,%al
 84a9970:	0f 84 e6 00 00 00    	je     84a9a5c <_ZN11game_master19CChangeExpertJobCmd7executeEv+0x15c>
 84a9976:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a9979:	8d 50 0c             	lea    0xc(%eax),%edx
 84a997c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a997f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9983:	89 14 24             	mov    %edx,(%esp)
 84a9986:	e8 19 0f c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a998b:	8b 78 04             	mov    0x4(%eax),%edi
 84a998e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a9991:	8d 50 0c             	lea    0xc(%eax),%edx
 84a9994:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9997:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a999b:	89 14 24             	mov    %edx,(%esp)
 84a999e:	e8 01 0f c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a99a3:	8b 30                	mov    (%eax),%esi
 84a99a5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a99a8:	89 04 24             	mov    %eax,(%esp)
 84a99ab:	e8 0a a6 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a99b0:	89 04 24             	mov    %eax,(%esp)
 84a99b3:	e8 68 45 c5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84a99b8:	89 c3                	mov    %eax,%ebx
 84a99ba:	8b 45 08             	mov    0x8(%ebp),%eax
 84a99bd:	89 04 24             	mov    %eax,(%esp)
 84a99c0:	e8 f5 a5 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a99c5:	89 04 24             	mov    %eax,(%esp)
 84a99c8:	e8 73 57 d8 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 84a99cd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84a99d4:	00 
 84a99d5:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84a99d9:	89 74 24 08          	mov    %esi,0x8(%esp)
 84a99dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a99e1:	89 04 24             	mov    %eax,(%esp)
 84a99e4:	e8 d3 a6 15 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 84a99e9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a99ec:	8d 50 0c             	lea    0xc(%eax),%edx
 84a99ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a99f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a99f6:	89 14 24             	mov    %edx,(%esp)
 84a99f9:	e8 a6 0e c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a99fe:	8b 78 04             	mov    0x4(%eax),%edi
 84a9a01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a9a04:	8d 50 0c             	lea    0xc(%eax),%edx
 84a9a07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9a0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9a0e:	89 14 24             	mov    %edx,(%esp)
 84a9a11:	e8 8e 0e c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 84a9a16:	8b 30                	mov    (%eax),%esi
 84a9a18:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9a1b:	89 04 24             	mov    %eax,(%esp)
 84a9a1e:	e8 97 a5 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9a23:	89 04 24             	mov    %eax,(%esp)
 84a9a26:	e8 f5 44 c5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84a9a2b:	89 c3                	mov    %eax,%ebx
 84a9a2d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9a30:	89 04 24             	mov    %eax,(%esp)
 84a9a33:	e8 82 a5 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9a38:	89 04 24             	mov    %eax,(%esp)
 84a9a3b:	e8 00 57 d8 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 84a9a40:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84a9a47:	00 
 84a9a48:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84a9a4c:	89 74 24 08          	mov    %esi,0x8(%esp)
 84a9a50:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9a54:	89 04 24             	mov    %eax,(%esp)
 84a9a57:	e8 60 a6 15 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 84a9a5c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84a9a60:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a9a63:	83 c0 0c             	add    $0xc,%eax
 84a9a66:	89 04 24             	mov    %eax,(%esp)
 84a9a69:	e8 a6 3d c3 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 84a9a6e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84a9a71:	0f 97 c0             	seta   %al
 84a9a74:	84 c0                	test   %al,%al
 84a9a76:	0f 85 da fe ff ff    	jne    84a9956 <_ZN11game_master19CChangeExpertJobCmd7executeEv+0x56>
 84a9a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9a7f:	89 04 24             	mov    %eax,(%esp)
 84a9a82:	e8 33 a5 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9a87:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9a8e:	00 
 84a9a8f:	89 04 24             	mov    %eax,(%esp)
 84a9a92:	e8 ed 3a c3 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84a9a97:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a9a9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a9a9e:	89 04 24             	mov    %eax,(%esp)
 84a9aa1:	e8 c6 18 e8 ff       	call   832b36c <_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript>
 84a9aa6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9aa9:	89 04 24             	mov    %eax,(%esp)
 84a9aac:	e8 09 a5 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9ab1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9ab8:	00 
 84a9ab9:	89 04 24             	mov    %eax,(%esp)
 84a9abc:	e8 a9 5a ff ff       	call   849f56a <_ZN15CUserCharacInfo24SetCurCharacExpertJobExpEi>
 84a9ac1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9ac4:	89 04 24             	mov    %eax,(%esp)
 84a9ac7:	e8 80 42 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a9acc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84a9ad3:	00 
 84a9ad4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9adb:	00 
 84a9adc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9adf:	89 04 24             	mov    %eax,(%esp)
 84a9ae2:	e8 15 1e c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a9ae7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9aee:	00 
 84a9aef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9af2:	89 04 24             	mov    %eax,(%esp)
 84a9af5:	e8 26 1e c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a9afa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a9b01:	00 
 84a9b02:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9b05:	89 04 24             	mov    %eax,(%esp)
 84a9b08:	e8 97 03 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a9b0d:	8d 5d d4             	lea    -0x2c(%ebp),%ebx
 84a9b10:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9b13:	89 04 24             	mov    %eax,(%esp)
 84a9b16:	e8 9f a4 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9b1b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a9b22:	00 
 84a9b23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9b27:	89 04 24             	mov    %eax,(%esp)
 84a9b2a:	e8 1f 09 1b 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84a9b2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a9b36:	00 
 84a9b37:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9b3a:	89 04 24             	mov    %eax,(%esp)
 84a9b3d:	e8 16 1e c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a9b42:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9b45:	89 04 24             	mov    %eax,(%esp)
 84a9b48:	e8 6d a4 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9b4d:	89 c3                	mov    %eax,%ebx
 84a9b4f:	e8 53 08 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a9b54:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a9b58:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84a9b5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a9b5f:	89 04 24             	mov    %eax,(%esp)
 84a9b62:	e8 f5 ad c8 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 84a9b67:	eb 1b                	jmp    84a9b84 <_ZN11game_master19CChangeExpertJobCmd7executeEv+0x284>
 84a9b69:	89 d3                	mov    %edx,%ebx
 84a9b6b:	89 c6                	mov    %eax,%esi
 84a9b6d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9b70:	89 04 24             	mov    %eax,(%esp)
 84a9b73:	e8 08 43 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a9b78:	89 f0                	mov    %esi,%eax
 84a9b7a:	89 da                	mov    %ebx,%edx
 84a9b7c:	89 04 24             	mov    %eax,(%esp)
 84a9b7f:	e8 cc 9b 63 00       	call   8ae3750 <_Unwind_Resume>
 84a9b84:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84a9b87:	89 04 24             	mov    %eax,(%esp)
 84a9b8a:	e8 f1 42 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a9b8f:	83 c4 4c             	add    $0x4c,%esp
 84a9b92:	5b                   	pop    %ebx
 84a9b93:	5e                   	pop    %esi
 84a9b94:	5f                   	pop    %edi
 84a9b95:	5d                   	pop    %ebp
 84a9b96:	c3                   	ret
 84a9b97:	90                   	nop

```

```c
// game_master::CChangeExpertJobCmd::execute @ 0x84a9900

/* game_master::CChangeExpertJobCmd::execute() */

void __thiscall game_master::CChangeExpertJobCmd::execute(CChangeExpertJobCmd *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CUserCharacInfo *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  SkillSlot *pSVar7;
  uint uVar8;
  CUser *pCVar9;
  CCharacExpertJob *this_00;
  GameWorld *this_01;
  PacketGuard local_30 [12];
  STExpertJobScript *local_24;
  uint local_20;
  
  iVar4 = *(int *)(this + 8);
  pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::SetCurCharacExpertJobType(pCVar3,iVar4);
  iVar4 = G_CDataManager();
  local_24 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar4);
  if (local_24 != (STExpertJobScript *)0x0) {
    local_20 = 0;
    while( true ) {
      uVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (local_24 + 0xc));
      if (uVar8 <= local_20) break;
      pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
      iVar4 = CUserCharacInfo::getCurCharacR(pCVar3);
      if (iVar4 != 0) {
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0xc),local_20);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        puVar5 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_24 + 0xc),local_20);
        uVar2 = *puVar5;
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::get_charac_job(pCVar3);
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(pCVar3);
        SkillSlot::growtype_skill(pSVar7,uVar6,uVar2,uVar1,0);
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0xc),local_20);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        puVar5 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_24 + 0xc),local_20);
        uVar2 = *puVar5;
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::get_charac_job(pCVar3);
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(pCVar3);
        SkillSlot::growtype_skill(pSVar7,uVar6,uVar2,uVar1,1);
      }
      local_20 = local_20 + 1;
    }
    pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
    this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar9,0);
    expert_job::CCharacExpertJob::InitScript(this_00,local_24);
    pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
    CUserCharacInfo::SetCurCharacExpertJobExp(pCVar3,0);
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084a9ae2 to 084a9b66 has its CatchHandler @ 084a9b69 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
  pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::make_basic_info(pCVar9,(char *)local_30,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_01 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_01,local_30,pCVar9);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

---

## parse

```asm
// === 084a98c8 game_master::CChangeExpertJobCmd::parse  [0x084a98c8-0x84a98ff] ===
 84a98c8:	55                   	push   %ebp
 84a98c9:	89 e5                	mov    %esp,%ebp
 84a98cb:	83 ec 18             	sub    $0x18,%esp
 84a98ce:	8b 45 08             	mov    0x8(%ebp),%eax
 84a98d1:	8b 40 04             	mov    0x4(%eax),%eax
 84a98d4:	83 c0 0c             	add    $0xc,%eax
 84a98d7:	89 04 24             	mov    %eax,(%esp)
 84a98da:	e8 89 57 df ff       	call   829f068 <_Z4trimRSs>
 84a98df:	8b 45 08             	mov    0x8(%ebp),%eax
 84a98e2:	8b 40 04             	mov    0x4(%eax),%eax
 84a98e5:	83 c0 0c             	add    $0xc,%eax
 84a98e8:	89 04 24             	mov    %eax,(%esp)
 84a98eb:	e8 00 cc 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a98f0:	89 04 24             	mov    %eax,(%esp)
 84a98f3:	e8 f8 4d bd ff       	call   807e6f0 <atoi@plt>
 84a98f8:	8b 55 08             	mov    0x8(%ebp),%edx
 84a98fb:	89 42 08             	mov    %eax,0x8(%edx)
 84a98fe:	c9                   	leave
 84a98ff:	c3                   	ret

```

```c
// game_master::CChangeExpertJobCmd::parse @ 0x84a98c8

/* game_master::CChangeExpertJobCmd::parse() */

void __thiscall game_master::CChangeExpertJobCmd::parse(CChangeExpertJobCmd *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

