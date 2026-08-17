# PvP_GuildWar_Log

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Clear

```asm
// === 085dda9a PvP_GuildWar_Log::Clear  [0x085dda9a-0x85ddacf] ===
 85dda9a:	55                   	push   %ebp
 85dda9b:	89 e5                	mov    %esp,%ebp
 85dda9d:	83 ec 18             	sub    $0x18,%esp
 85ddaa0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddaa3:	c6 00 00             	movb   $0x0,(%eax)
 85ddaa6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddaa9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85ddab0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddab3:	83 c0 08             	add    $0x8,%eax
 85ddab6:	c7 44 24 08 60 00 00 	movl   $0x60,0x8(%esp)
 85ddabd:	00 
 85ddabe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ddac5:	00 
 85ddac6:	89 04 24             	mov    %eax,(%esp)
 85ddac9:	e8 f2 01 aa ff       	call   807dcc0 <memset@plt>
 85ddace:	c9                   	leave
 85ddacf:	c3                   	ret

```

```c
// PvP_GuildWar_Log::Clear @ 0x85dda9a

/* PvP_GuildWar_Log::Clear() */

void __thiscall PvP_GuildWar_Log::Clear(PvP_GuildWar_Log *this)

{
  *this = (PvP_GuildWar_Log)0x0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 8,0,0x60);
  return;
}

```

---

## InsertPvPGuild

```asm
// === 085ddd80 PvP_GuildWar_Log::InsertPvPGuild  [0x085ddd80-0x85ddead] ===
 85ddd80:	55                   	push   %ebp
 85ddd81:	89 e5                	mov    %esp,%ebp
 85ddd83:	53                   	push   %ebx
 85ddd84:	83 ec 10             	sub    $0x10,%esp
 85ddd87:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85ddd8e:	e9 01 01 00 00       	jmp    85dde94 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0x114>
 85ddd93:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85ddd96:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85ddd99:	89 d0                	mov    %edx,%eax
 85ddd9b:	01 c0                	add    %eax,%eax
 85ddd9d:	01 d0                	add    %edx,%eax
 85ddd9f:	c1 e0 02             	shl    $0x2,%eax
 85ddda2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85ddda5:	83 c0 08             	add    $0x8,%eax
 85ddda8:	8b 00                	mov    (%eax),%eax
 85dddaa:	85 c0                	test   %eax,%eax
 85dddac:	0f 84 81 00 00 00    	je     85dde33 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0xb3>
 85dddb2:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dddb5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dddb8:	89 d0                	mov    %edx,%eax
 85dddba:	01 c0                	add    %eax,%eax
 85dddbc:	01 d0                	add    %edx,%eax
 85dddbe:	c1 e0 02             	shl    $0x2,%eax
 85dddc1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85dddc4:	83 c0 08             	add    $0x8,%eax
 85dddc7:	8b 00                	mov    (%eax),%eax
 85dddc9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dddcc:	0f 85 be 00 00 00    	jne    85dde90 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0x110>
 85dddd2:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dddd5:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 85dddd8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85ddddb:	89 c8                	mov    %ecx,%eax
 85ddddd:	01 c0                	add    %eax,%eax
 85ddddf:	01 c8                	add    %ecx,%eax
 85ddde1:	c1 e0 02             	shl    $0x2,%eax
 85ddde4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85ddde7:	83 c0 0c             	add    $0xc,%eax
 85dddea:	8b 00                	mov    (%eax),%eax
 85dddec:	89 c1                	mov    %eax,%ecx
 85dddee:	03 4d 10             	add    0x10(%ebp),%ecx
 85dddf1:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85dddf4:	89 d0                	mov    %edx,%eax
 85dddf6:	01 c0                	add    %eax,%eax
 85dddf8:	01 d0                	add    %edx,%eax
 85dddfa:	c1 e0 02             	shl    $0x2,%eax
 85dddfd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85dde00:	83 c0 0c             	add    $0xc,%eax
 85dde03:	89 08                	mov    %ecx,(%eax)
 85dde05:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dde08:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dde0b:	89 d0                	mov    %edx,%eax
 85dde0d:	01 c0                	add    %eax,%eax
 85dde0f:	01 d0                	add    %edx,%eax
 85dde11:	c1 e0 02             	shl    $0x2,%eax
 85dde14:	0f b6 44 08 10       	movzbl 0x10(%eax,%ecx,1),%eax
 85dde19:	8d 58 01             	lea    0x1(%eax),%ebx
 85dde1c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dde1f:	89 d0                	mov    %edx,%eax
 85dde21:	01 c0                	add    %eax,%eax
 85dde23:	01 d0                	add    %edx,%eax
 85dde25:	c1 e0 02             	shl    $0x2,%eax
 85dde28:	88 5c 08 10          	mov    %bl,0x10(%eax,%ecx,1)
 85dde2c:	b8 01 00 00 00       	mov    $0x1,%eax
 85dde31:	eb 75                	jmp    85ddea8 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0x128>
 85dde33:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dde36:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dde39:	89 d0                	mov    %edx,%eax
 85dde3b:	01 c0                	add    %eax,%eax
 85dde3d:	01 d0                	add    %edx,%eax
 85dde3f:	c1 e0 02             	shl    $0x2,%eax
 85dde42:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85dde45:	8d 50 08             	lea    0x8(%eax),%edx
 85dde48:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dde4b:	89 02                	mov    %eax,(%edx)
 85dde4d:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dde50:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dde53:	89 d0                	mov    %edx,%eax
 85dde55:	01 c0                	add    %eax,%eax
 85dde57:	01 d0                	add    %edx,%eax
 85dde59:	c1 e0 02             	shl    $0x2,%eax
 85dde5c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85dde5f:	8d 50 0c             	lea    0xc(%eax),%edx
 85dde62:	8b 45 10             	mov    0x10(%ebp),%eax
 85dde65:	89 02                	mov    %eax,(%edx)
 85dde67:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dde6a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dde6d:	89 d0                	mov    %edx,%eax
 85dde6f:	01 c0                	add    %eax,%eax
 85dde71:	01 d0                	add    %edx,%eax
 85dde73:	c1 e0 02             	shl    $0x2,%eax
 85dde76:	c6 44 08 10 01       	movb   $0x1,0x10(%eax,%ecx,1)
 85dde7b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dde7e:	0f b6 00             	movzbl (%eax),%eax
 85dde81:	8d 50 01             	lea    0x1(%eax),%edx
 85dde84:	8b 45 08             	mov    0x8(%ebp),%eax
 85dde87:	88 10                	mov    %dl,(%eax)
 85dde89:	b8 01 00 00 00       	mov    $0x1,%eax
 85dde8e:	eb 18                	jmp    85ddea8 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0x128>
 85dde90:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85dde94:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 85dde98:	0f 9e c0             	setle  %al
 85dde9b:	84 c0                	test   %al,%al
 85dde9d:	0f 85 f0 fe ff ff    	jne    85ddd93 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji+0x13>
 85ddea3:	b8 00 00 00 00       	mov    $0x0,%eax
 85ddea8:	83 c4 10             	add    $0x10,%esp
 85ddeab:	5b                   	pop    %ebx
 85ddeac:	5d                   	pop    %ebp
 85ddead:	c3                   	ret

```

```c
// PvP_GuildWar_Log::InsertPvPGuild @ 0x85ddd80

/* PvP_GuildWar_Log::InsertPvPGuild(unsigned int, int) */

undefined4 __thiscall
PvP_GuildWar_Log::InsertPvPGuild(PvP_GuildWar_Log *this,uint param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (7 < local_c) {
      return 0;
    }
    if (*(int *)(this + local_c * 0xc + 8) == 0) break;
    if (*(uint *)(this + local_c * 0xc + 8) == param_1) {
      *(int *)(this + local_c * 0xc + 0xc) = *(int *)(this + local_c * 0xc + 0xc) + param_2;
      this[local_c * 0xc + 0x10] = (PvP_GuildWar_Log)((char)this[local_c * 0xc + 0x10] + '\x01');
      return 1;
    }
    local_c = local_c + 1;
  }
  *(uint *)(this + local_c * 0xc + 8) = param_1;
  *(int *)(this + local_c * 0xc + 0xc) = param_2;
  this[local_c * 0xc + 0x10] = (PvP_GuildWar_Log)0x1;
  *this = (PvP_GuildWar_Log)((char)*this + '\x01');
  return 1;
}

```

---

## PvP_GuildWar_Log

```asm
// === 085dda46 PvP_GuildWar_Log::PvP_GuildWar_Log  [0x085dda46-0x85dda85] ===
 85dda46:	55                   	push   %ebp
 85dda47:	89 e5                	mov    %esp,%ebp
 85dda49:	56                   	push   %esi
 85dda4a:	53                   	push   %ebx
 85dda4b:	83 ec 10             	sub    $0x10,%esp
 85dda4e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda51:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85dda58:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda5b:	83 c0 08             	add    $0x8,%eax
 85dda5e:	89 c3                	mov    %eax,%ebx
 85dda60:	be 07 00 00 00       	mov    $0x7,%esi
 85dda65:	eb 0e                	jmp    85dda75 <_ZN16PvP_GuildWar_LogC1Ev+0x2f>
 85dda67:	89 1c 24             	mov    %ebx,(%esp)
 85dda6a:	e8 61 1d 00 00       	call   85df7d0 <_ZN10STPvPGuildC1Ev>
 85dda6f:	83 c3 0c             	add    $0xc,%ebx
 85dda72:	83 ee 01             	sub    $0x1,%esi
 85dda75:	83 fe ff             	cmp    $0xffffffff,%esi
 85dda78:	0f 95 c0             	setne  %al
 85dda7b:	84 c0                	test   %al,%al
 85dda7d:	75 e8                	jne    85dda67 <_ZN16PvP_GuildWar_LogC1Ev+0x21>
 85dda7f:	83 c4 10             	add    $0x10,%esp
 85dda82:	5b                   	pop    %ebx
 85dda83:	5e                   	pop    %esi
 85dda84:	5d                   	pop    %ebp
 85dda85:	c3                   	ret

```

```c
// PvP_GuildWar_Log::PvP_GuildWar_Log @ 0x85dda46

/* PvP_GuildWar_Log::PvP_GuildWar_Log() */

void __thiscall PvP_GuildWar_Log::PvP_GuildWar_Log(PvP_GuildWar_Log *this)

{
  STPvPGuild *this_00;
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = (STPvPGuild *)(this + 8);
  for (iVar1 = 7; iVar1 != -1; iVar1 = iVar1 + -1) {
    STPvPGuild::STPvPGuild(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}

```

---

## WriteGuildWarPvPLog

```asm
// === 085ddad0 PvP_GuildWar_Log::WriteGuildWarPvPLog  [0x085ddad0-0x85ddd7f] ===
 85ddad0:	55                   	push   %ebp
 85ddad1:	89 e5                	mov    %esp,%ebp
 85ddad3:	57                   	push   %edi
 85ddad4:	56                   	push   %esi
 85ddad5:	53                   	push   %ebx
 85ddad6:	81 ec 5c 09 00 00    	sub    $0x95c,%esp
 85ddadc:	8b 45 10             	mov    0x10(%ebp),%eax
 85ddadf:	88 85 c4 f6 ff ff    	mov    %al,-0x93c(%ebp)
 85ddae5:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85ddaec:	eb 4e                	jmp    85ddb3c <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x6c>
 85ddaee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85ddaf1:	c1 e0 02             	shl    $0x2,%eax
 85ddaf4:	03 45 14             	add    0x14(%ebp),%eax
 85ddaf7:	8b 00                	mov    (%eax),%eax
 85ddaf9:	85 c0                	test   %eax,%eax
 85ddafb:	74 3b                	je     85ddb38 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x68>
 85ddafd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85ddb00:	c1 e0 02             	shl    $0x2,%eax
 85ddb03:	03 45 14             	add    0x14(%ebp),%eax
 85ddb06:	8b 00                	mov    (%eax),%eax
 85ddb08:	89 04 24             	mov    %eax,(%esp)
 85ddb0b:	e8 46 1f 00 00       	call   85dfa56 <_ZN5CUser30get_guildwar_point_per_pvpplayEv>
 85ddb10:	89 c3                	mov    %eax,%ebx
 85ddb12:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85ddb15:	c1 e0 02             	shl    $0x2,%eax
 85ddb18:	03 45 14             	add    0x14(%ebp),%eax
 85ddb1b:	8b 00                	mov    (%eax),%eax
 85ddb1d:	89 04 24             	mov    %eax,(%esp)
 85ddb20:	e8 47 19 c5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 85ddb25:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85ddb29:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ddb2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddb30:	89 04 24             	mov    %eax,(%esp)
 85ddb33:	e8 48 02 00 00       	call   85ddd80 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji>
 85ddb38:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85ddb3c:	83 7d dc 07          	cmpl   $0x7,-0x24(%ebp)
 85ddb40:	0f 9e c0             	setle  %al
 85ddb43:	84 c0                	test   %al,%al
 85ddb45:	75 a7                	jne    85ddaee <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x1e>
 85ddb47:	8d 9d d4 f6 ff ff    	lea    -0x92c(%ebp),%ebx
 85ddb4d:	b8 00 00 00 00       	mov    $0x0,%eax
 85ddb52:	ba 00 02 00 00       	mov    $0x200,%edx
 85ddb57:	89 df                	mov    %ebx,%edi
 85ddb59:	89 d1                	mov    %edx,%ecx
 85ddb5b:	f3 ab                	rep stos %eax,%es:(%edi)
 85ddb5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddb60:	0f b6 00             	movzbl (%eax),%eax
 85ddb63:	0f b6 d8             	movzbl %al,%ebx
 85ddb66:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85ddb6d:	e8 2c e1 ae ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85ddb72:	8b 55 08             	mov    0x8(%ebp),%edx
 85ddb75:	8b 52 04             	mov    0x4(%edx),%edx
 85ddb78:	89 c1                	mov    %eax,%ecx
 85ddb7a:	29 d1                	sub    %edx,%ecx
 85ddb7c:	89 ca                	mov    %ecx,%edx
 85ddb7e:	0f be 85 c4 f6 ff ff 	movsbl -0x93c(%ebp),%eax
 85ddb85:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 85ddb89:	89 54 24 10          	mov    %edx,0x10(%esp)
 85ddb8d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ddb91:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ddb94:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ddb98:	c7 44 24 04 20 13 cc 	movl   $0x8cc1320,0x4(%esp)
 85ddb9f:	08 
 85ddba0:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 85ddba6:	89 04 24             	mov    %eax,(%esp)
 85ddba9:	e8 92 08 aa ff       	call   807e440 <sprintf@plt>
 85ddbae:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddbb1:	0f b6 00             	movzbl (%eax),%eax
 85ddbb4:	3c 08                	cmp    $0x8,%al
 85ddbb6:	76 3e                	jbe    85ddbf6 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x126>
 85ddbb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddbbb:	0f b6 00             	movzbl (%eax),%eax
 85ddbbe:	0f b6 c0             	movzbl %al,%eax
 85ddbc1:	89 44 24 14          	mov    %eax,0x14(%esp)
 85ddbc5:	c7 44 24 10 50 13 cc 	movl   $0x8cc1350,0x10(%esp)
 85ddbcc:	08 
 85ddbcd:	c7 44 24 0c cc 12 00 	movl   $0x12cc,0xc(%esp)
 85ddbd4:	00 
 85ddbd5:	c7 44 24 08 a0 22 cc 	movl   $0x8cc22a0,0x8(%esp)
 85ddbdc:	08 
 85ddbdd:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85ddbe4:	08 
 85ddbe5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85ddbec:	e8 19 60 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85ddbf1:	e9 7f 01 00 00       	jmp    85ddd75 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x2a5>
 85ddbf6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85ddbfd:	e9 90 00 00 00       	jmp    85ddc92 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x1c2>
 85ddc02:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85ddc05:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85ddc08:	89 d0                	mov    %edx,%eax
 85ddc0a:	01 c0                	add    %eax,%eax
 85ddc0c:	01 d0                	add    %edx,%eax
 85ddc0e:	c1 e0 02             	shl    $0x2,%eax
 85ddc11:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85ddc14:	83 c0 08             	add    $0x8,%eax
 85ddc17:	8b 00                	mov    (%eax),%eax
 85ddc19:	85 c0                	test   %eax,%eax
 85ddc1b:	74 71                	je     85ddc8e <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x1be>
 85ddc1d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85ddc20:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85ddc23:	89 d0                	mov    %edx,%eax
 85ddc25:	01 c0                	add    %eax,%eax
 85ddc27:	01 d0                	add    %edx,%eax
 85ddc29:	c1 e0 02             	shl    $0x2,%eax
 85ddc2c:	0f b6 44 08 10       	movzbl 0x10(%eax,%ecx,1),%eax
 85ddc31:	0f b6 d8             	movzbl %al,%ebx
 85ddc34:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85ddc37:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85ddc3a:	89 d0                	mov    %edx,%eax
 85ddc3c:	01 c0                	add    %eax,%eax
 85ddc3e:	01 d0                	add    %edx,%eax
 85ddc40:	c1 e0 02             	shl    $0x2,%eax
 85ddc43:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85ddc46:	83 c0 0c             	add    $0xc,%eax
 85ddc49:	8b 08                	mov    (%eax),%ecx
 85ddc4b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85ddc4e:	8b 75 08             	mov    0x8(%ebp),%esi
 85ddc51:	89 d0                	mov    %edx,%eax
 85ddc53:	01 c0                	add    %eax,%eax
 85ddc55:	01 d0                	add    %edx,%eax
 85ddc57:	c1 e0 02             	shl    $0x2,%eax
 85ddc5a:	8d 04 06             	lea    (%esi,%eax,1),%eax
 85ddc5d:	83 c0 08             	add    $0x8,%eax
 85ddc60:	8b 00                	mov    (%eax),%eax
 85ddc62:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 85ddc66:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85ddc6a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ddc6e:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 85ddc74:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ddc78:	c7 44 24 04 9c 13 cc 	movl   $0x8cc139c,0x4(%esp)
 85ddc7f:	08 
 85ddc80:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 85ddc86:	89 04 24             	mov    %eax,(%esp)
 85ddc89:	e8 b2 07 aa ff       	call   807e440 <sprintf@plt>
 85ddc8e:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85ddc92:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddc95:	0f b6 00             	movzbl (%eax),%eax
 85ddc98:	0f b6 c0             	movzbl %al,%eax
 85ddc9b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85ddc9e:	0f 9f c0             	setg   %al
 85ddca1:	84 c0                	test   %al,%al
 85ddca3:	0f 85 59 ff ff ff    	jne    85ddc02 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x132>
 85ddca9:	8d 9d d4 fe ff ff    	lea    -0x12c(%ebp),%ebx
 85ddcaf:	b8 00 00 00 00       	mov    $0x0,%eax
 85ddcb4:	ba 40 00 00 00       	mov    $0x40,%edx
 85ddcb9:	89 df                	mov    %ebx,%edi
 85ddcbb:	89 d1                	mov    %edx,%ecx
 85ddcbd:	f3 ab                	rep stos %eax,%es:(%edi)
 85ddcbf:	e8 bd e4 ae ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85ddcc4:	89 04 24             	mov    %eax,(%esp)
 85ddcc7:	e8 ce c6 af ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 85ddccc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ddcd0:	c7 44 24 04 be 13 cc 	movl   $0x8cc13be,0x4(%esp)
 85ddcd7:	08 
 85ddcd8:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 85ddcde:	89 04 24             	mov    %eax,(%esp)
 85ddce1:	e8 5a 07 aa ff       	call   807e440 <sprintf@plt>
 85ddce6:	c7 44 24 08 dc 12 00 	movl   $0x12dc,0x8(%esp)
 85ddced:	00 
 85ddcee:	c7 44 24 04 a0 22 cc 	movl   $0x8cc22a0,0x4(%esp)
 85ddcf5:	08 
 85ddcf6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ddcf9:	89 04 24             	mov    %eax,(%esp)
 85ddcfc:	e8 6b 9b b2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 85ddd01:	8d 85 d4 f6 ff ff    	lea    -0x92c(%ebp),%eax
 85ddd07:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ddd0b:	c7 44 24 08 d6 13 cc 	movl   $0x8cc13d6,0x8(%esp)
 85ddd12:	08 
 85ddd13:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 85ddd19:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ddd1d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ddd20:	89 04 24             	mov    %eax,(%esp)
 85ddd23:	e8 70 9b b2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 85ddd28:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddd2b:	89 04 24             	mov    %eax,(%esp)
 85ddd2e:	e8 67 fd ff ff       	call   85dda9a <_ZN16PvP_GuildWar_Log5ClearEv>
 85ddd33:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85ddd3a:	eb 2e                	jmp    85ddd6a <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x29a>
 85ddd3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85ddd3f:	c1 e0 02             	shl    $0x2,%eax
 85ddd42:	03 45 14             	add    0x14(%ebp),%eax
 85ddd45:	8b 00                	mov    (%eax),%eax
 85ddd47:	85 c0                	test   %eax,%eax
 85ddd49:	74 1b                	je     85ddd66 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x296>
 85ddd4b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85ddd4e:	c1 e0 02             	shl    $0x2,%eax
 85ddd51:	03 45 14             	add    0x14(%ebp),%eax
 85ddd54:	8b 00                	mov    (%eax),%eax
 85ddd56:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ddd5d:	00 
 85ddd5e:	89 04 24             	mov    %eax,(%esp)
 85ddd61:	e8 fe 1c 00 00       	call   85dfa64 <_ZN5CUser30set_guildwar_point_per_pvpplayEi>
 85ddd66:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85ddd6a:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 85ddd6e:	0f 9e c0             	setle  %al
 85ddd71:	84 c0                	test   %al,%al
 85ddd73:	75 c7                	jne    85ddd3c <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser+0x26c>
 85ddd75:	81 c4 5c 09 00 00    	add    $0x95c,%esp
 85ddd7b:	5b                   	pop    %ebx
 85ddd7c:	5e                   	pop    %esi
 85ddd7d:	5f                   	pop    %edi
 85ddd7e:	5d                   	pop    %ebp
 85ddd7f:	c3                   	ret

```

```c
// PvP_GuildWar_Log::WriteGuildWarPvPLog @ 0x85ddad0

/* PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**) */

void __thiscall
PvP_GuildWar_Log::WriteGuildWarPvPLog
          (PvP_GuildWar_Log *this,int param_1,char param_2,CUser **param_3)

{
  PvP_GuildWar_Log PVar1;
  uint uVar2;
  CEnvironment *this_00;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_930 [2048];
  char local_130 [256];
  CMyFileLog local_30 [8];
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    if (param_3[local_28] != (CUser *)0x0) {
      iVar4 = CUser::get_guildwar_point_per_pvpplay(param_3[local_28]);
      uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_3[local_28]);
      InsertPvPGuild(this,uVar2,iVar4);
    }
  }
  pcVar5 = local_930;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  PVar1 = *this;
  iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  sprintf(local_930,"Room_Idx:%d\tPvP_Mode:%d\tElasp_Time:%d\tG_Cnt:%d\n",param_1,(int)param_2,
          iVar4 - *(int *)(this + 4),(uint)(byte)PVar1);
  if ((byte)*this < 9) {
    for (local_24 = 0; local_24 < (int)(uint)(byte)*this; local_24 = local_24 + 1) {
      if (*(int *)(this + local_24 * 0xc + 8) != 0) {
        sprintf(local_930,"%s->\t\tG_Key:%d\tPoint:%d\tM_Cnt:%d\n",local_930,
                *(undefined4 *)(this + local_24 * 0xc + 8),
                *(undefined4 *)(this + local_24 * 0xc + 0xc),(uint)(byte)this[local_24 * 0xc + 0x10]
               );
      }
    }
    pcVar5 = local_130;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar3 = CEnvironment::get_file_name(this_00);
    sprintf(local_130,"./log/%s/GuildWarResult",uVar3);
    CMyFileLog::CMyFileLog
              (local_30,"void PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)",0x12dc);
    CMyFileLog::operator()(local_30,local_130,"%s",local_930);
    Clear(this);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (param_3[local_20] != (CUser *)0x0) {
        CUser::set_guildwar_point_per_pvpplay(param_3[local_20],0);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"pvp.cpp","void PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)",0x12cc,
               "PvP_GuildWar_Log::WriteGuildWarPvPLog() m_guildCnt(%d) > MAX_PVP_PLAYER(8) ",
               (uint)(byte)*this);
  }
  return;
}

```

---

## ~PvP_GuildWar_Log

```asm
// === 085dda86 PvP_GuildWar_Log::~PvP_GuildWar_Log  [0x085dda86-0x85dda99] ===
 85dda86:	55                   	push   %ebp
 85dda87:	89 e5                	mov    %esp,%ebp
 85dda89:	83 ec 18             	sub    $0x18,%esp
 85dda8c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda8f:	89 04 24             	mov    %eax,(%esp)
 85dda92:	e8 03 00 00 00       	call   85dda9a <_ZN16PvP_GuildWar_Log5ClearEv>
 85dda97:	c9                   	leave
 85dda98:	c3                   	ret
 85dda99:	90                   	nop

```

```c
// PvP_GuildWar_Log::~PvP_GuildWar_Log @ 0x85dda86

/* PvP_GuildWar_Log::~PvP_GuildWar_Log() */

void __thiscall PvP_GuildWar_Log::~PvP_GuildWar_Log(PvP_GuildWar_Log *this)

{
  Clear(this);
  return;
}

```

