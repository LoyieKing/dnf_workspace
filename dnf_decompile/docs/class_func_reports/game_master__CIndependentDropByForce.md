# game_master__CIndependentDropByForce

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b1fda game_master::CIndependentDropByForce::execute  [0x084b1fda-0x84b210f] ===
 84b1fda:	55                   	push   %ebp
 84b1fdb:	89 e5                	mov    %esp,%ebp
 84b1fdd:	56                   	push   %esi
 84b1fde:	53                   	push   %ebx
 84b1fdf:	83 ec 40             	sub    $0x40,%esp
 84b1fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1fe5:	89 04 24             	mov    %eax,(%esp)
 84b1fe8:	e8 cd 1f 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b1fed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b1ff0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b1ff4:	0f 84 0d 01 00 00    	je     84b2107 <_ZN11game_master23CIndependentDropByForce7executeEv+0x12d>
 84b1ffa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b1ffd:	89 04 24             	mov    %eax,(%esp)
 84b2000:	e8 cb 45 25 00       	call   87065d0 <_ZNSsC1Ev>
 84b2005:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2008:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b200c:	84 c0                	test   %al,%al
 84b200e:	74 15                	je     84b2025 <_ZN11game_master23CIndependentDropByForce7executeEv+0x4b>
 84b2010:	c7 44 24 04 92 03 c8 	movl   $0x8c80392,0x4(%esp)
 84b2017:	08 
 84b2018:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b201b:	89 04 24             	mov    %eax,(%esp)
 84b201e:	e8 fd 66 25 00       	call   8708720 <_ZNSsaSEPKc>
 84b2023:	eb 13                	jmp    84b2038 <_ZN11game_master23CIndependentDropByForce7executeEv+0x5e>
 84b2025:	c7 44 24 04 b0 03 c8 	movl   $0x8c803b0,0x4(%esp)
 84b202c:	08 
 84b202d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b2030:	89 04 24             	mov    %eax,(%esp)
 84b2033:	e8 e8 66 25 00       	call   8708720 <_ZNSsaSEPKc>
 84b2038:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b203b:	89 04 24             	mov    %eax,(%esp)
 84b203e:	e8 09 bd 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b2043:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b2046:	89 04 24             	mov    %eax,(%esp)
 84b2049:	e8 22 46 25 00       	call   8706670 <_ZNKSs6lengthEv>
 84b204e:	89 c6                	mov    %eax,%esi
 84b2050:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b2053:	89 04 24             	mov    %eax,(%esp)
 84b2056:	e8 95 44 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b205b:	89 c3                	mov    %eax,%ebx
 84b205d:	e8 45 83 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b2062:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84b2069:	00 
 84b206a:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 84b2071:	00 
 84b2072:	89 74 24 10          	mov    %esi,0x10(%esp)
 84b2076:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b207a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b207d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2081:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84b2084:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2088:	89 04 24             	mov    %eax,(%esp)
 84b208b:	e8 bc 74 21 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 84b2090:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b2093:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2097:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b209a:	89 04 24             	mov    %eax,(%esp)
 84b209d:	e8 18 65 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b20a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b20a5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b20a9:	0f b6 c0             	movzbl %al,%eax
 84b20ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b20b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b20b3:	89 04 24             	mov    %eax,(%esp)
 84b20b6:	e8 3f d6 1d 00       	call   868f6fa <_ZN5CUser16setForceDropFlagEb>
 84b20bb:	eb 15                	jmp    84b20d2 <_ZN11game_master23CIndependentDropByForce7executeEv+0xf8>
 84b20bd:	89 d3                	mov    %edx,%ebx
 84b20bf:	89 c6                	mov    %eax,%esi
 84b20c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b20c4:	89 04 24             	mov    %eax,(%esp)
 84b20c7:	e8 b4 bd 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b20cc:	89 f0                	mov    %esi,%eax
 84b20ce:	89 da                	mov    %ebx,%edx
 84b20d0:	eb 0d                	jmp    84b20df <_ZN11game_master23CIndependentDropByForce7executeEv+0x105>
 84b20d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b20d5:	89 04 24             	mov    %eax,(%esp)
 84b20d8:	e8 a3 bd 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b20dd:	eb 1b                	jmp    84b20fa <_ZN11game_master23CIndependentDropByForce7executeEv+0x120>
 84b20df:	89 d3                	mov    %edx,%ebx
 84b20e1:	89 c6                	mov    %eax,%esi
 84b20e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b20e6:	89 04 24             	mov    %eax,(%esp)
 84b20e9:	e8 f2 5a 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b20ee:	89 f0                	mov    %esi,%eax
 84b20f0:	89 da                	mov    %ebx,%edx
 84b20f2:	89 04 24             	mov    %eax,(%esp)
 84b20f5:	e8 56 16 63 00       	call   8ae3750 <_Unwind_Resume>
 84b20fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b20fd:	89 04 24             	mov    %eax,(%esp)
 84b2100:	e8 db 5a 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2105:	eb 01                	jmp    84b2108 <_ZN11game_master23CIndependentDropByForce7executeEv+0x12e>
 84b2107:	90                   	nop
 84b2108:	83 c4 40             	add    $0x40,%esp
 84b210b:	5b                   	pop    %ebx
 84b210c:	5e                   	pop    %esi
 84b210d:	5d                   	pop    %ebp
 84b210e:	c3                   	ret
 84b210f:	90                   	nop

```

```c
// game_master::CIndependentDropByForce::execute @ 0x84b1fda

/* game_master::CIndependentDropByForce::execute() */

void __thiscall game_master::CIndependentDropByForce::execute(CIndependentDropByForce *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  GameWorld *pGVar3;
  PacketGuard local_20 [12];
  string local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    std::string::string(local_14);
    if (this[8] == (CIndependentDropByForce)0x0) {
      std::string::operator=(local_14,"independent drop item 100% off");
    }
    else {
                    /* try { // try from 084b201e to 084b2042 has its CatchHandler @ 084b20df */
      std::string::operator=(local_14,"independent drop item 100% on");
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084b2049 to 084b20ba has its CatchHandler @ 084b20bd */
    uVar1 = std::string::length(local_14);
    uVar2 = std::string::c_str(local_14);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::make_packet_chat_msg(pGVar3,local_20,local_10,uVar2,uVar1,2,0xc);
    CUser::Send(local_10,local_20);
    CUser::setForceDropFlag(local_10,(bool)this[8]);
                    /* try { // try from 084b20d8 to 084b20dc has its CatchHandler @ 084b20df */
    PacketGuard::~PacketGuard(local_20);
    std::string::~string(local_14);
  }
  return;
}

```

---

## parse

```asm
// === 084b1f8c game_master::CIndependentDropByForce::parse  [0x084b1f8c-0x84b1fd9] ===
 84b1f8c:	55                   	push   %ebp
 84b1f8d:	89 e5                	mov    %esp,%ebp
 84b1f8f:	83 ec 18             	sub    $0x18,%esp
 84b1f92:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1f95:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b1f99:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1f9c:	8b 40 04             	mov    0x4(%eax),%eax
 84b1f9f:	83 c0 0c             	add    $0xc,%eax
 84b1fa2:	89 04 24             	mov    %eax,(%esp)
 84b1fa5:	e8 be d0 de ff       	call   829f068 <_Z4trimRSs>
 84b1faa:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1fad:	8b 40 04             	mov    0x4(%eax),%eax
 84b1fb0:	83 c0 0c             	add    $0xc,%eax
 84b1fb3:	c7 44 24 04 8f 03 c8 	movl   $0x8c8038f,0x4(%esp)
 84b1fba:	08 
 84b1fbb:	89 04 24             	mov    %eax,(%esp)
 84b1fbe:	e8 de e9 bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b1fc3:	84 c0                	test   %al,%al
 84b1fc5:	74 09                	je     84b1fd0 <_ZN11game_master23CIndependentDropByForce5parseEv+0x44>
 84b1fc7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1fca:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 84b1fce:	eb 07                	jmp    84b1fd7 <_ZN11game_master23CIndependentDropByForce5parseEv+0x4b>
 84b1fd0:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1fd3:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b1fd7:	c9                   	leave
 84b1fd8:	c3                   	ret
 84b1fd9:	90                   	nop

```

```c
// game_master::CIndependentDropByForce::parse @ 0x84b1f8c

/* game_master::CIndependentDropByForce::parse() */

void __thiscall game_master::CIndependentDropByForce::parse(CIndependentDropByForce *this)

{
  bool bVar1;
  
  this[8] = (CIndependentDropByForce)0x0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"on");
  if (bVar1) {
    this[8] = (CIndependentDropByForce)0x1;
  }
  else {
    this[8] = (CIndependentDropByForce)0x0;
  }
  return;
}

```

