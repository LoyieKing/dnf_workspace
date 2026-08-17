# DB_ReloadAutoPunishRuleBackIP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842cdf6 DB_ReloadAutoPunishRuleBackIP::dispatch  [0x0842cdf6-0x842d0ad] ===
 842cdf6:	55                   	push   %ebp
 842cdf7:	89 e5                	mov    %esp,%ebp
 842cdf9:	56                   	push   %esi
 842cdfa:	53                   	push   %ebx
 842cdfb:	83 ec 50             	sub    $0x50,%esp
 842cdfe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842ce03:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ce0a:	00 
 842ce0b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842ce12:	00 
 842ce13:	89 04 24             	mov    %eax,(%esp)
 842ce16:	e8 23 84 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ce1b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842ce1e:	c7 44 24 08 d0 07 00 	movl   $0x7d0,0x8(%esp)
 842ce25:	00 
 842ce26:	c7 44 24 04 78 06 c5 	movl   $0x8c50678,0x4(%esp)
 842ce2d:	08 
 842ce2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ce31:	89 04 24             	mov    %eax,(%esp)
 842ce34:	e8 87 73 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ce39:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ce40:	00 
 842ce41:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ce44:	89 04 24             	mov    %eax,(%esp)
 842ce47:	e8 da 74 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842ce4c:	83 f0 01             	xor    $0x1,%eax
 842ce4f:	84 c0                	test   %al,%al
 842ce51:	74 0a                	je     842ce5d <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x67>
 842ce53:	bb 00 00 00 00       	mov    $0x0,%ebx
 842ce58:	e9 48 02 00 00       	jmp    842d0a5 <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2af>
 842ce5d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842ce62:	c7 44 24 08 59 70 00 	movl   $0x7059,0x8(%esp)
 842ce69:	00 
 842ce6a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842ce71:	08 
 842ce72:	89 04 24             	mov    %eax,(%esp)
 842ce75:	e8 0c 2c e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842ce7a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842ce81:	00 
 842ce82:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ce86:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842ce89:	89 04 24             	mov    %eax,(%esp)
 842ce8c:	e8 95 bd c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ce91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842ce94:	89 04 24             	mov    %eax,(%esp)
 842ce97:	e8 aa bd c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ce9c:	c7 44 24 04 08 01 00 	movl   $0x108,0x4(%esp)
 842cea3:	00 
 842cea4:	89 04 24             	mov    %eax,(%esp)
 842cea7:	e8 aa bd c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ceac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842ceaf:	89 04 24             	mov    %eax,(%esp)
 842ceb2:	e8 8f bd c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ceb7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842cebe:	ff 
 842cebf:	89 04 24             	mov    %eax,(%esp)
 842cec2:	e8 8f bd c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842cec7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842ceca:	89 04 24             	mov    %eax,(%esp)
 842cecd:	e8 7c bd c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842ced2:	89 04 24             	mov    %eax,(%esp)
 842ced5:	e8 ec 58 02 00       	call   84527c6 <_ZN12CStreamGuard11GetInBufferI29SIG_AUTO_PUNISH_RULE_BLACK_IPEEPT_v>
 842ceda:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842cedd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cee0:	89 04 24             	mov    %eax,(%esp)
 842cee3:	e8 84 54 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842cee8:	89 c2                	mov    %eax,%edx
 842ceea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842ceed:	66 89 10             	mov    %dx,(%eax)
 842cef0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 842cef7:	e9 47 01 00 00       	jmp    842d043 <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x24d>
 842cefc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842ceff:	89 04 24             	mov    %eax,(%esp)
 842cf02:	e8 b5 75 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842cf07:	83 f0 01             	xor    $0x1,%eax
 842cf0a:	84 c0                	test   %al,%al
 842cf0c:	74 0a                	je     842cf18 <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x122>
 842cf0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 842cf13:	e9 82 01 00 00       	jmp    842d09a <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2a4>
 842cf18:	c7 45 d5 00 00 00 00 	movl   $0x0,-0x2b(%ebp)
 842cf1f:	c7 45 d9 00 00 00 00 	movl   $0x0,-0x27(%ebp)
 842cf26:	c7 45 dd 00 00 00 00 	movl   $0x0,-0x23(%ebp)
 842cf2d:	66 c7 45 e1 00 00    	movw   $0x0,-0x1f(%ebp)
 842cf33:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 842cf37:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842cf3e:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842cf45:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 842cf4c:	00 
 842cf4d:	8d 45 d5             	lea    -0x2b(%ebp),%eax
 842cf50:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cf54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842cf5b:	00 
 842cf5c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cf5f:	89 04 24             	mov    %eax,(%esp)
 842cf62:	e8 83 fe cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 842cf67:	83 f0 01             	xor    $0x1,%eax
 842cf6a:	84 c0                	test   %al,%al
 842cf6c:	74 0a                	je     842cf78 <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x182>
 842cf6e:	bb 00 00 00 00       	mov    $0x0,%ebx
 842cf73:	e9 22 01 00 00       	jmp    842d09a <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2a4>
 842cf78:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842cf7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cf7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842cf86:	00 
 842cf87:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cf8a:	89 04 24             	mov    %eax,(%esp)
 842cf8d:	e8 60 53 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842cf92:	83 f0 01             	xor    $0x1,%eax
 842cf95:	84 c0                	test   %al,%al
 842cf97:	74 0a                	je     842cfa3 <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x1ad>
 842cf99:	bb 00 00 00 00       	mov    $0x0,%ebx
 842cf9e:	e9 f7 00 00 00       	jmp    842d09a <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2a4>
 842cfa3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842cfa6:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cfaa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842cfb1:	00 
 842cfb2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cfb5:	89 04 24             	mov    %eax,(%esp)
 842cfb8:	e8 35 53 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842cfbd:	83 f0 01             	xor    $0x1,%eax
 842cfc0:	84 c0                	test   %al,%al
 842cfc2:	74 0a                	je     842cfce <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x1d8>
 842cfc4:	bb 00 00 00 00       	mov    $0x0,%ebx
 842cfc9:	e9 cc 00 00 00       	jmp    842d09a <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2a4>
 842cfce:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 842cfd5:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 842cfdc:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 842cfe3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 842cfea:	8d 45 d5             	lea    -0x2b(%ebp),%eax
 842cfed:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842cff1:	c7 44 24 08 cc 06 c5 	movl   $0x8c506cc,0x8(%esp)
 842cff8:	08 
 842cff9:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 842d000:	00 
 842d001:	8d 45 bc             	lea    -0x44(%ebp),%eax
 842d004:	89 04 24             	mov    %eax,(%esp)
 842d007:	e8 10 f8 15 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 842d00c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 842d00f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 842d012:	89 04 24             	mov    %eax,(%esp)
 842d015:	e8 16 15 c5 ff       	call   807e530 <inet_addr@plt>
 842d01a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 842d01d:	89 44 da 04          	mov    %eax,0x4(%edx,%ebx,8)
 842d021:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842d024:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d027:	89 c1                	mov    %eax,%ecx
 842d029:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d02c:	88 4c d0 08          	mov    %cl,0x8(%eax,%edx,8)
 842d030:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842d033:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842d036:	89 c1                	mov    %eax,%ecx
 842d038:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d03b:	88 4c d0 09          	mov    %cl,0x9(%eax,%edx,8)
 842d03f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842d043:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d046:	89 04 24             	mov    %eax,(%esp)
 842d049:	e8 1e 53 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842d04e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 842d051:	0f 97 c0             	seta   %al
 842d054:	84 c0                	test   %al,%al
 842d056:	0f 85 a0 fe ff ff    	jne    842cefc <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x106>
 842d05c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842d061:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 842d064:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d068:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d06f:	00 
 842d070:	89 04 24             	mov    %eax,(%esp)
 842d073:	e8 66 3f 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842d078:	bb 01 00 00 00       	mov    $0x1,%ebx
 842d07d:	eb 1b                	jmp    842d09a <_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream+0x2a4>
 842d07f:	89 d3                	mov    %edx,%ebx
 842d081:	89 c6                	mov    %eax,%esi
 842d083:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842d086:	89 04 24             	mov    %eax,(%esp)
 842d089:	e8 44 f8 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d08e:	89 f0                	mov    %esi,%eax
 842d090:	89 da                	mov    %ebx,%edx
 842d092:	89 04 24             	mov    %eax,(%esp)
 842d095:	e8 b6 66 6b 00       	call   8ae3750 <_Unwind_Resume>
 842d09a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842d09d:	89 04 24             	mov    %eax,(%esp)
 842d0a0:	e8 2d f8 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d0a5:	89 d8                	mov    %ebx,%eax
 842d0a7:	83 c4 50             	add    $0x50,%esp
 842d0aa:	5b                   	pop    %ebx
 842d0ab:	5e                   	pop    %esi
 842d0ac:	5d                   	pop    %ebp
 842d0ad:	c3                   	ret

```

```c
// DB_ReloadAutoPunishRuleBackIP::dispatch @ 0x842cdf6

/* DB_ReloadAutoPunishRuleBackIP::dispatch(int, int, Stream*) */

undefined4 DB_ReloadAutoPunishRuleBackIP::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined2 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  in_addr_t iVar5;
  uint uVar6;
  undefined4 uVar7;
  char local_48 [16];
  uint local_38 [2];
  char local_2f [15];
  CStreamGuard local_20 [8];
  MySQL *local_18;
  SIG_AUTO_PUNISH_RULE_BLACK_IP *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,
                   "seLect ip,start_ip,end_ip from auto_punish_blackip_info where apply_flag=1 limit %d"
                   ,2000);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7059);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0842cea7 to 0842d077 has its CatchHandler @ 0842d07f */
    CStreamGuard::operator<<(pCVar4,0x108);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,-1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_PUNISH_RULE_BLACK_IP>(pCVar4);
    uVar2 = MySQL::get_n_rows(local_18);
    *(undefined2 *)local_14 = uVar2;
    local_10 = 0;
    while( true ) {
      uVar6 = MySQL::get_n_rows(local_18);
      if (uVar6 <= local_10) break;
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      local_2f[0] = '\0';
      local_2f[1] = '\0';
      local_2f[2] = '\0';
      local_2f[3] = '\0';
      local_2f[4] = '\0';
      local_2f[5] = '\0';
      local_2f[6] = '\0';
      local_2f[7] = '\0';
      local_2f[8] = '\0';
      local_2f[9] = '\0';
      local_2f[10] = '\0';
      local_2f[0xb] = '\0';
      local_2f[0xc] = '\0';
      local_2f[0xd] = '\0';
      local_2f[0xe] = 0;
      local_38[1] = 0;
      local_38[0] = 0;
      cVar1 = MySQL::get_str(local_18,0,local_2f,0xc);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      cVar1 = MySQL::get_uint(local_18,1,local_38 + 1);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      cVar1 = MySQL::get_uint(local_18,2,local_38);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      OS_API::snprintf(local_48,0x10,"%s.0",local_2f);
      uVar6 = local_10;
      iVar5 = inet_addr(local_48);
      *(in_addr_t *)(local_14 + uVar6 * 8 + 4) = iVar5;
      local_14[local_10 * 8 + 8] = SUB41(local_38[1],0);
      local_14[local_10 * 8 + 9] = SUB41(local_38[0],0);
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
    uVar7 = 1;
LAB_0842d09a:
    CStreamGuard::~CStreamGuard(local_20);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## makeRequest

```asm
// === 0842d0ae DB_ReloadAutoPunishRuleBackIP::makeRequest  [0x0842d0ae-0x842d16b] ===
 842d0ae:	55                   	push   %ebp
 842d0af:	89 e5                	mov    %esp,%ebp
 842d0b1:	56                   	push   %esi
 842d0b2:	53                   	push   %ebx
 842d0b3:	83 ec 20             	sub    $0x20,%esp
 842d0b6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842d0bb:	c7 44 24 08 77 70 00 	movl   $0x7077,0x8(%esp)
 842d0c2:	00 
 842d0c3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842d0ca:	08 
 842d0cb:	89 04 24             	mov    %eax,(%esp)
 842d0ce:	e8 b3 29 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842d0d3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842d0da:	00 
 842d0db:	89 44 24 04          	mov    %eax,0x4(%esp)
 842d0df:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d0e2:	89 04 24             	mov    %eax,(%esp)
 842d0e5:	e8 3c bb c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842d0ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d0ed:	89 04 24             	mov    %eax,(%esp)
 842d0f0:	e8 51 bb c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d0f5:	c7 44 24 04 08 01 00 	movl   $0x108,0x4(%esp)
 842d0fc:	00 
 842d0fd:	89 04 24             	mov    %eax,(%esp)
 842d100:	e8 51 bb c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d105:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d108:	89 04 24             	mov    %eax,(%esp)
 842d10b:	e8 36 bb c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d110:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842d117:	ff 
 842d118:	89 04 24             	mov    %eax,(%esp)
 842d11b:	e8 36 bb c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d120:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842d125:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842d128:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d12c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842d133:	00 
 842d134:	89 04 24             	mov    %eax,(%esp)
 842d137:	e8 a2 3e 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842d13c:	eb 1b                	jmp    842d159 <_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv+0xab>
 842d13e:	89 d3                	mov    %edx,%ebx
 842d140:	89 c6                	mov    %eax,%esi
 842d142:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d145:	89 04 24             	mov    %eax,(%esp)
 842d148:	e8 85 f7 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d14d:	89 f0                	mov    %esi,%eax
 842d14f:	89 da                	mov    %ebx,%edx
 842d151:	89 04 24             	mov    %eax,(%esp)
 842d154:	e8 f7 65 6b 00       	call   8ae3750 <_Unwind_Resume>
 842d159:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d15c:	89 04 24             	mov    %eax,(%esp)
 842d15f:	e8 6e f7 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d164:	83 c4 20             	add    $0x20,%esp
 842d167:	5b                   	pop    %ebx
 842d168:	5e                   	pop    %esi
 842d169:	5d                   	pop    %ebp
 842d16a:	c3                   	ret
 842d16b:	90                   	nop

```

```c
// DB_ReloadAutoPunishRuleBackIP::makeRequest @ 0x842d0ae

/* DB_ReloadAutoPunishRuleBackIP::makeRequest() */

void DB_ReloadAutoPunishRuleBackIP::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7077);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842d100 to 0842d13b has its CatchHandler @ 0842d13e */
  CStreamGuard::operator<<(pCVar2,0x108);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

