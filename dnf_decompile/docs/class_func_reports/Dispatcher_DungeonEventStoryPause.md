# Dispatcher_DungeonEventStoryPause

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08216dcc Dispatcher_DungeonEventStoryPause::dispatch_sig  [0x08216dcc-0x8217019] ===
 8216dcc:	55                   	push   %ebp
 8216dcd:	89 e5                	mov    %esp,%ebp
 8216dcf:	56                   	push   %esi
 8216dd0:	53                   	push   %ebx
 8216dd1:	83 ec 30             	sub    $0x30,%esp
 8216dd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216dd7:	89 04 24             	mov    %eax,(%esp)
 8216dda:	e8 ad 35 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8216ddf:	83 f8 05             	cmp    $0x5,%eax
 8216de2:	0f 95 c0             	setne  %al
 8216de5:	84 c0                	test   %al,%al
 8216de7:	74 0a                	je     8216df3 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8216de9:	b8 00 00 00 00       	mov    $0x0,%eax
 8216dee:	e9 20 02 00 00       	jmp    8217013 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x247>
 8216df3:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8216df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216dfa:	8b 45 10             	mov    0x10(%ebp),%eax
 8216dfd:	89 04 24             	mov    %eax,(%esp)
 8216e00:	e8 1d 61 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8216e05:	83 f0 01             	xor    $0x1,%eax
 8216e08:	84 c0                	test   %al,%al
 8216e0a:	74 29                	je     8216e35 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x69>
 8216e0c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216e13:	00 
 8216e14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216e1b:	00 
 8216e1c:	c7 44 24 04 a0 da bc 	movl   $0x8bcdaa0,0x4(%esp)
 8216e23:	08 
 8216e24:	c7 04 24 86 c8 00 00 	movl   $0xc886,(%esp)
 8216e2b:	e8 a7 9a 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216e30:	e9 de 01 00 00       	jmp    8217013 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x247>
 8216e35:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8216e38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216e3c:	8b 45 10             	mov    0x10(%ebp),%eax
 8216e3f:	89 04 24             	mov    %eax,(%esp)
 8216e42:	e8 db 60 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8216e47:	83 f0 01             	xor    $0x1,%eax
 8216e4a:	84 c0                	test   %al,%al
 8216e4c:	74 29                	je     8216e77 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0xab>
 8216e4e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216e55:	00 
 8216e56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216e5d:	00 
 8216e5e:	c7 44 24 04 a0 da bc 	movl   $0x8bcdaa0,0x4(%esp)
 8216e65:	08 
 8216e66:	c7 04 24 8b c8 00 00 	movl   $0xc88b,(%esp)
 8216e6d:	e8 65 9a 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216e72:	e9 9c 01 00 00       	jmp    8217013 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x247>
 8216e77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216e7a:	89 04 24             	mov    %eax,(%esp)
 8216e7d:	e8 b0 95 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8216e82:	85 c0                	test   %eax,%eax
 8216e84:	0f 95 c0             	setne  %al
 8216e87:	84 c0                	test   %al,%al
 8216e89:	0f 84 7f 01 00 00    	je     821700e <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x242>
 8216e8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216e92:	89 04 24             	mov    %eax,(%esp)
 8216e95:	e8 b2 e2 43 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8216e9a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8216e9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216ea0:	89 04 24             	mov    %eax,(%esp)
 8216ea3:	e8 fe 39 f8 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8216ea8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8216eab:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8216eaf:	75 0a                	jne    8216ebb <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0xef>
 8216eb1:	b8 00 00 00 00       	mov    $0x0,%eax
 8216eb6:	e9 58 01 00 00       	jmp    8217013 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x247>
 8216ebb:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8216ebf:	75 0a                	jne    8216ecb <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8216ec1:	b8 00 00 00 00       	mov    $0x0,%eax
 8216ec6:	e9 48 01 00 00       	jmp    8217013 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x247>
 8216ecb:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8216ecf:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 8216ed3:	0f be c0             	movsbl %al,%eax
 8216ed6:	85 c0                	test   %eax,%eax
 8216ed8:	74 07                	je     8216ee1 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x115>
 8216eda:	83 f8 01             	cmp    $0x1,%eax
 8216edd:	74 5f                	je     8216f3e <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x172>
 8216edf:	eb 67                	jmp    8216f48 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 8216ee1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8216ee4:	05 24 0b 00 00       	add    $0xb24,%eax
 8216ee9:	89 04 24             	mov    %eax,(%esp)
 8216eec:	e8 61 61 01 00       	call   822d052 <_ZN13CBattle_Field7getMazeEv>
 8216ef1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8216ef4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8216ef8:	74 4a                	je     8216f44 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x178>
 8216efa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8216efd:	8b 70 50             	mov    0x50(%eax),%esi
 8216f00:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8216f03:	05 24 0b 00 00       	add    $0xb24,%eax
 8216f08:	89 04 24             	mov    %eax,(%esp)
 8216f0b:	e8 4e 61 01 00       	call   822d05e <_ZN13CBattle_Field18GetCurrentMapIndexEv>
 8216f10:	89 c3                	mov    %eax,%ebx
 8216f12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216f15:	89 04 24             	mov    %eax,(%esp)
 8216f18:	e8 65 5c 46 00       	call   867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>
 8216f1d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8216f21:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8216f25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216f29:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8216f2c:	89 04 24             	mov    %eax,(%esp)
 8216f2f:	e8 20 61 49 00       	call   86ad054 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii>
 8216f34:	84 c0                	test   %al,%al
 8216f36:	74 0f                	je     8216f47 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x17b>
 8216f38:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8216f3c:	eb 0a                	jmp    8216f48 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 8216f3e:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8216f42:	eb 04                	jmp    8216f48 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 8216f44:	90                   	nop
 8216f45:	eb 01                	jmp    8216f48 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 8216f47:	90                   	nop
 8216f48:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8216f4c:	0f 84 bc 00 00 00    	je     821700e <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x242>
 8216f52:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216f55:	89 04 24             	mov    %eax,(%esp)
 8216f58:	e8 ef 6d 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8216f5d:	c7 44 24 08 aa 00 00 	movl   $0xaa,0x8(%esp)
 8216f64:	00 
 8216f65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8216f6c:	00 
 8216f6d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216f70:	89 04 24             	mov    %eax,(%esp)
 8216f73:	e8 84 49 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8216f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216f7b:	89 04 24             	mov    %eax,(%esp)
 8216f7e:	e8 f9 33 ec ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8216f83:	0f b7 c0             	movzwl %ax,%eax
 8216f86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216f8a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216f8d:	89 04 24             	mov    %eax,(%esp)
 8216f90:	e8 0f 2f ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8216f95:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8216f99:	0f be c0             	movsbl %al,%eax
 8216f9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216fa0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216fa3:	89 04 24             	mov    %eax,(%esp)
 8216fa6:	e8 75 49 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8216fab:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 8216faf:	0f be c0             	movsbl %al,%eax
 8216fb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216fb6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216fb9:	89 04 24             	mov    %eax,(%esp)
 8216fbc:	e8 5f 49 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8216fc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8216fc8:	00 
 8216fc9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216fcc:	89 04 24             	mov    %eax,(%esp)
 8216fcf:	e8 84 49 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8216fd4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216fd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216fdb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8216fde:	89 04 24             	mov    %eax,(%esp)
 8216fe1:	e8 68 61 38 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8216fe6:	eb 1b                	jmp    8217003 <_ZN33Dispatcher_DungeonEventStoryPause12dispatch_sigEP5CUserR9PacketBuf+0x237>
 8216fe8:	89 d3                	mov    %edx,%ebx
 8216fea:	89 c6                	mov    %eax,%esi
 8216fec:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8216fef:	89 04 24             	mov    %eax,(%esp)
 8216ff2:	e8 89 6e 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8216ff7:	89 f0                	mov    %esi,%eax
 8216ff9:	89 da                	mov    %ebx,%edx
 8216ffb:	89 04 24             	mov    %eax,(%esp)
 8216ffe:	e8 4d c7 8c 00       	call   8ae3750 <_Unwind_Resume>
 8217003:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8217006:	89 04 24             	mov    %eax,(%esp)
 8217009:	e8 72 6e 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821700e:	b8 00 00 00 00       	mov    $0x0,%eax
 8217013:	83 c4 30             	add    $0x30,%esp
 8217016:	5b                   	pop    %ebx
 8217017:	5e                   	pop    %esi
 8217018:	5d                   	pop    %ebp
 8217019:	c3                   	ret

```

```c
// Dispatcher_DungeonEventStoryPause::dispatch_sig @ 0x8216dcc

/* Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DungeonEventStoryPause::dispatch_sig
          (Dispatcher_DungeonEventStoryPause *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  PacketGuard local_2c [14];
  char local_1e;
  char local_1d;
  CParty *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 5) {
    cVar1 = PacketBuf::get_byte(param_2,&local_1d);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,&local_1e);
      if (cVar1 == '\x01') {
        iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar2 != 0) {
          local_1c = (CParty *)CUser::GetParty(param_1);
          local_18 = CUser::getCurCharacQuestR(param_1);
          if (local_18 == 0) {
            return 0;
          }
          if (local_1c == (CParty *)0x0) {
            return 0;
          }
          local_11 = '\0';
          if (local_1e == '\0') {
            local_10 = CBattle_Field::getMaze((CBattle_Field *)(local_1c + 0xb24));
            if (local_10 != 0) {
              iVar2 = CBattle_Field::GetCurrentMapIndex((CBattle_Field *)(local_1c + 0xb24));
              iVar4 = CUser::getPlayingDungeonIndex(param_1);
              cVar1 = UserQuest::CheckDungeonEventStoryPause(local_18,iVar4,iVar2);
              if (cVar1 != '\0') {
                local_11 = '\x01';
              }
            }
          }
          else if (local_1e == '\x01') {
            local_11 = '\x01';
          }
          if (local_11 != '\0') {
            PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08216f73 to 08216fe5 has its CatchHandler @ 08216fe8 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xaa);
            uVar5 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar5 & 0xffff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)local_1d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)local_1e);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            CParty::send_to_party(local_1c,local_2c);
            PacketGuard::~PacketGuard(local_2c);
          }
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc88b,
                         "virtual int Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xc886,
                       "virtual int Dispatcher_DungeonEventStoryPause::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

