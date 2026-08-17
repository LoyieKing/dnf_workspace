# DB_AvatarItemInsert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DB_AvatarItemInsert

```asm
// === 083ffd50 DB_AvatarItemInsert::DB_AvatarItemInsert  [0x083ffd50-0x83ffd6b] ===
 83ffd50:	55                   	push   %ebp
 83ffd51:	89 e5                	mov    %esp,%ebp
 83ffd53:	83 ec 18             	sub    $0x18,%esp
 83ffd56:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd59:	89 04 24             	mov    %eax,(%esp)
 83ffd5c:	e8 45 da 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 83ffd61:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd64:	c7 00 d8 fc c5 08    	movl   $0x8c5fcd8,(%eax)
 83ffd6a:	c9                   	leave
 83ffd6b:	c3                   	ret

```

```c
// DB_AvatarItemInsert::DB_AvatarItemInsert @ 0x83ffd50

/* DB_AvatarItemInsert::DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcd8;
  return;
}

```

---

## InsertAvatarItem

```asm
// === 083ffe0e DB_AvatarItemInsert::InsertAvatarItem  [0x083ffe0e-0x84001fd] ===
 83ffe0e:	55                   	push   %ebp
 83ffe0f:	89 e5                	mov    %esp,%ebp
 83ffe11:	57                   	push   %edi
 83ffe12:	56                   	push   %esi
 83ffe13:	53                   	push   %ebx
 83ffe14:	81 ec ec c0 00 00    	sub    $0xc0ec,%esp
 83ffe1a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83ffe1f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83ffe26:	00 
 83ffe27:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83ffe2e:	00 
 83ffe2f:	89 04 24             	mov    %eax,(%esp)
 83ffe32:	e8 07 54 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83ffe37:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83ffe3a:	8d 85 6c 3f ff ff    	lea    -0xc094(%ebp),%eax
 83ffe40:	ba 00 c0 00 00       	mov    $0xc000,%edx
 83ffe45:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ffe49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83ffe50:	00 
 83ffe51:	89 04 24             	mov    %eax,(%esp)
 83ffe54:	e8 67 de c7 ff       	call   807dcc0 <memset@plt>
 83ffe59:	8d 95 6c 3f ff ff    	lea    -0xc094(%ebp),%edx
 83ffe5f:	b8 1c 69 c3 08       	mov    $0x8c3691c,%eax
 83ffe64:	b9 33 00 00 00       	mov    $0x33,%ecx
 83ffe69:	89 d7                	mov    %edx,%edi
 83ffe6b:	89 c6                	mov    %eax,%esi
 83ffe6d:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 83ffe6f:	89 f0                	mov    %esi,%eax
 83ffe71:	89 fa                	mov    %edi,%edx
 83ffe73:	0f b7 08             	movzwl (%eax),%ecx
 83ffe76:	66 89 0a             	mov    %cx,(%edx)
 83ffe79:	83 c2 02             	add    $0x2,%edx
 83ffe7c:	83 c0 02             	add    $0x2,%eax
 83ffe7f:	8d 85 3a 40 ff ff    	lea    -0xbfc6(%ebp),%eax
 83ffe85:	ba 32 5f 00 00       	mov    $0x5f32,%edx
 83ffe8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ffe8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83ffe95:	00 
 83ffe96:	89 04 24             	mov    %eax,(%esp)
 83ffe99:	e8 22 de c7 ff       	call   807dcc0 <memset@plt>
 83ffe9e:	8d 95 6c 9f ff ff    	lea    -0x6094(%ebp),%edx
 83ffea4:	b8 1c c9 c3 08       	mov    $0x8c3c91c,%eax
 83ffea9:	b9 37 00 00 00       	mov    $0x37,%ecx
 83ffeae:	89 d7                	mov    %edx,%edi
 83ffeb0:	89 c6                	mov    %eax,%esi
 83ffeb2:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 83ffeb4:	89 f0                	mov    %esi,%eax
 83ffeb6:	89 fa                	mov    %edi,%edx
 83ffeb8:	0f b6 08             	movzbl (%eax),%ecx
 83ffebb:	88 0a                	mov    %cl,(%edx)
 83ffebd:	83 c2 01             	add    $0x1,%edx
 83ffec0:	83 c0 01             	add    $0x1,%eax
 83ffec3:	8d 85 49 a0 ff ff    	lea    -0x5fb7(%ebp),%eax
 83ffec9:	ba 23 5f 00 00       	mov    $0x5f23,%edx
 83ffece:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ffed2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83ffed9:	00 
 83ffeda:	89 04 24             	mov    %eax,(%esp)
 83ffedd:	e8 de dd c7 ff       	call   807dcc0 <memset@plt>
 83ffee2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 83ffee9:	c7 85 6c ff ff ff 39 	movl   $0x39393939,-0x94(%ebp)
 83ffef0:	39 39 39 
 83ffef3:	c7 85 70 ff ff ff 2d 	movl   $0x2d32312d,-0x90(%ebp)
 83ffefa:	31 32 2d 
 83ffefd:	c7 85 74 ff ff ff 33 	movl   $0x32203133,-0x8c(%ebp)
 83fff04:	31 20 32 
 83fff07:	c7 85 78 ff ff ff 33 	movl   $0x39353a33,-0x88(%ebp)
 83fff0e:	3a 35 39 
 83fff11:	c7 85 7c ff ff ff 3a 	movl   $0x39353a,-0x84(%ebp)
 83fff18:	35 39 00 
 83fff1b:	8d 5d 80             	lea    -0x80(%ebp),%ebx
 83fff1e:	b8 00 00 00 00       	mov    $0x0,%eax
 83fff23:	ba 0b 00 00 00       	mov    $0xb,%edx
 83fff28:	89 df                	mov    %ebx,%edi
 83fff2a:	89 d1                	mov    %edx,%ecx
 83fff2c:	f3 ab                	rep stos %eax,%es:(%edi)
 83fff2e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fff31:	8b 40 0a             	mov    0xa(%eax),%eax
 83fff34:	85 c0                	test   %eax,%eax
 83fff36:	75 0e                	jne    83fff46 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x138>
 83fff38:	8d 85 6c 3f ff ff    	lea    -0xc094(%ebp),%eax
 83fff3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83fff41:	e9 5c 01 00 00       	jmp    84000a2 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x294>
 83fff46:	8d 85 6c 3f ff ff    	lea    -0xc094(%ebp),%eax
 83fff4c:	05 00 60 00 00       	add    $0x6000,%eax
 83fff51:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83fff54:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 83fff5b:	00 
 83fff5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fff63:	00 
 83fff64:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 83fff6a:	89 04 24             	mov    %eax,(%esp)
 83fff6d:	e8 4e dd c7 ff       	call   807dcc0 <memset@plt>
 83fff72:	8b 45 08             	mov    0x8(%ebp),%eax
 83fff75:	8b 58 0a             	mov    0xa(%eax),%ebx
 83fff78:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83fff7f:	00 
 83fff80:	c7 44 24 08 e1 0a 00 	movl   $0xae1,0x8(%esp)
 83fff87:	00 
 83fff88:	c7 44 24 04 00 da c5 	movl   $0x8c5da00,0x4(%esp)
 83fff8f:	08 
 83fff90:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83fff93:	89 04 24             	mov    %eax,(%esp)
 83fff96:	e8 7d f7 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fff9b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83fff9f:	c7 44 24 04 c0 68 c3 	movl   $0x8c368c0,0x4(%esp)
 83fffa6:	08 
 83fffa7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83fffaa:	89 04 24             	mov    %eax,(%esp)
 83fffad:	e8 d6 f7 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fffb2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fffb5:	8b 40 0a             	mov    0xa(%eax),%eax
 83fffb8:	83 f8 1e             	cmp    $0x1e,%eax
 83fffbb:	0f 8f 81 00 00 00    	jg     8400042 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x234>
 83fffc1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fffc4:	8b 40 0a             	mov    0xa(%eax),%eax
 83fffc7:	83 f8 06             	cmp    $0x6,%eax
 83fffca:	7e 76                	jle    8400042 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x234>
 83fffcc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 83fffd3:	e8 c6 bc cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 83fffd8:	8b 55 08             	mov    0x8(%ebp),%edx
 83fffdb:	8b 52 0a             	mov    0xa(%edx),%edx
 83fffde:	69 d2 80 51 01 00    	imul   $0x15180,%edx,%edx
 83fffe4:	01 d0                	add    %edx,%eax
 83fffe6:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fffea:	c7 44 24 04 ee 68 c3 	movl   $0x8c368ee,0x4(%esp)
 83ffff1:	08 
 83ffff2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 83ffff8:	89 04 24             	mov    %eax,(%esp)
 83ffffb:	e8 40 e4 c7 ff       	call   807e440 <sprintf@plt>
 8400000:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8400007:	00 
 8400008:	c7 44 24 08 e5 0a 00 	movl   $0xae5,0x8(%esp)
 840000f:	00 
 8400010:	c7 44 24 04 00 da c5 	movl   $0x8c5da00,0x4(%esp)
 8400017:	08 
 8400018:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840001b:	89 04 24             	mov    %eax,(%esp)
 840001e:	e8 f5 f6 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8400023:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8400029:	89 44 24 08          	mov    %eax,0x8(%esp)
 840002d:	c7 44 24 04 f4 68 c3 	movl   $0x8c368f4,0x4(%esp)
 8400034:	08 
 8400035:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8400038:	89 04 24             	mov    %eax,(%esp)
 840003b:	e8 48 f7 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8400040:	eb 60                	jmp    84000a2 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x294>
 8400042:	8b 45 08             	mov    0x8(%ebp),%eax
 8400045:	8b 40 0a             	mov    0xa(%eax),%eax
 8400048:	89 44 24 08          	mov    %eax,0x8(%esp)
 840004c:	c7 44 24 04 ee 68 c3 	movl   $0x8c368ee,0x4(%esp)
 8400053:	08 
 8400054:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 840005a:	89 04 24             	mov    %eax,(%esp)
 840005d:	e8 de e3 c7 ff       	call   807e440 <sprintf@plt>
 8400062:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8400069:	00 
 840006a:	c7 44 24 08 ea 0a 00 	movl   $0xaea,0x8(%esp)
 8400071:	00 
 8400072:	c7 44 24 04 00 da c5 	movl   $0x8c5da00,0x4(%esp)
 8400079:	08 
 840007a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840007d:	89 04 24             	mov    %eax,(%esp)
 8400080:	e8 93 f6 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8400085:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 840008b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840008f:	c7 44 24 04 f4 68 c3 	movl   $0x8c368f4,0x4(%esp)
 8400096:	08 
 8400097:	8d 45 cc             	lea    -0x34(%ebp),%eax
 840009a:	89 04 24             	mov    %eax,(%esp)
 840009d:	e8 e6 f6 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84000a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84000a5:	0f b7 40 51          	movzwl 0x51(%eax),%eax
 84000a9:	0f bf f8             	movswl %ax,%edi
 84000ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84000af:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 84000b3:	98                   	cwtl
 84000b4:	89 85 4c 3f ff ff    	mov    %eax,-0xc0b4(%ebp)
 84000ba:	8b 45 08             	mov    0x8(%ebp),%eax
 84000bd:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 84000c1:	0f b7 c0             	movzwl %ax,%eax
 84000c4:	89 85 50 3f ff ff    	mov    %eax,-0xc0b0(%ebp)
 84000ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84000cd:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 84000d1:	0f b7 c0             	movzwl %ax,%eax
 84000d4:	89 85 54 3f ff ff    	mov    %eax,-0xc0ac(%ebp)
 84000da:	8b 45 08             	mov    0x8(%ebp),%eax
 84000dd:	83 c0 2d             	add    $0x2d,%eax
 84000e0:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 84000e7:	00 
 84000e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84000ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84000f3:	00 
 84000f4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84000f7:	89 04 24             	mov    %eax,(%esp)
 84000fa:	e8 2b 44 ff ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84000ff:	89 85 58 3f ff ff    	mov    %eax,-0xc0a8(%ebp)
 8400105:	8b 45 08             	mov    0x8(%ebp),%eax
 8400108:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 840010c:	0f be c0             	movsbl %al,%eax
 840010f:	89 85 5c 3f ff ff    	mov    %eax,-0xc0a4(%ebp)
 8400115:	8b 45 08             	mov    0x8(%ebp),%eax
 8400118:	83 c0 0f             	add    $0xf,%eax
 840011b:	89 85 60 3f ff ff    	mov    %eax,-0xc0a0(%ebp)
 8400121:	8b 45 08             	mov    0x8(%ebp),%eax
 8400124:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8400128:	0f b6 c0             	movzbl %al,%eax
 840012b:	89 85 64 3f ff ff    	mov    %eax,-0xc09c(%ebp)
 8400131:	8b 45 08             	mov    0x8(%ebp),%eax
 8400134:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8400138:	0f b6 f0             	movzbl %al,%esi
 840013b:	8b 45 08             	mov    0x8(%ebp),%eax
 840013e:	8b 58 04             	mov    0x4(%eax),%ebx
 8400141:	8b 45 08             	mov    0x8(%ebp),%eax
 8400144:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8400148:	0f b6 c8             	movzbl %al,%ecx
 840014b:	8b 45 08             	mov    0x8(%ebp),%eax
 840014e:	8b 10                	mov    (%eax),%edx
 8400150:	89 7c 24 38          	mov    %edi,0x38(%esp)
 8400154:	8b 85 4c 3f ff ff    	mov    -0xc0b4(%ebp),%eax
 840015a:	89 44 24 34          	mov    %eax,0x34(%esp)
 840015e:	8b bd 50 3f ff ff    	mov    -0xc0b0(%ebp),%edi
 8400164:	89 7c 24 30          	mov    %edi,0x30(%esp)
 8400168:	8b 85 54 3f ff ff    	mov    -0xc0ac(%ebp),%eax
 840016e:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8400172:	8b bd 58 3f ff ff    	mov    -0xc0a8(%ebp),%edi
 8400178:	89 7c 24 28          	mov    %edi,0x28(%esp)
 840017c:	8b 85 5c 3f ff ff    	mov    -0xc0a4(%ebp),%eax
 8400182:	89 44 24 24          	mov    %eax,0x24(%esp)
 8400186:	8b bd 60 3f ff ff    	mov    -0xc0a0(%ebp),%edi
 840018c:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8400190:	8b 85 64 3f ff ff    	mov    -0xc09c(%ebp),%eax
 8400196:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 840019a:	89 74 24 18          	mov    %esi,0x18(%esp)
 840019e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84001a4:	89 44 24 14          	mov    %eax,0x14(%esp)
 84001a8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84001ac:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84001b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84001b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84001b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84001bb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84001be:	89 04 24             	mov    %eax,(%esp)
 84001c1:	e8 fa 3f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84001c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84001cd:	00 
 84001ce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84001d1:	89 04 24             	mov    %eax,(%esp)
 84001d4:	e8 4d 41 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84001d9:	88 45 e3             	mov    %al,-0x1d(%ebp)
 84001dc:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84001e0:	83 f0 01             	xor    $0x1,%eax
 84001e3:	84 c0                	test   %al,%al
 84001e5:	74 07                	je     84001ee <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x3e0>
 84001e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84001ec:	eb 05                	jmp    84001f3 <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT+0x3e5>
 84001ee:	b8 01 00 00 00       	mov    $0x1,%eax
 84001f3:	81 c4 ec c0 00 00    	add    $0xc0ec,%esp
 84001f9:	5b                   	pop    %ebx
 84001fa:	5e                   	pop    %esi
 84001fb:	5f                   	pop    %edi
 84001fc:	5d                   	pop    %ebp
 84001fd:	c3                   	ret

```

```c
// DB_AvatarItemInsert::InsertAvatarItem @ 0x83ffe0e

/* DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*) */

bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  char local_c098 [206];
  undefined1 local_bfca [24370];
  char local_6098 [221];
  undefined1 local_5fbb [24355];
  char local_98 [20];
  undefined4 local_84 [11];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char *local_20;
  
  bVar11 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  memset(local_c098,0,0xc000);
  pcVar8 = 
  "inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,\'%s\',%d,now(),%d,\'%s\',%d,\'%s\',%d,%d)"
  ;
  pcVar9 = local_c098;
  for (iVar7 = 0x33; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
  }
  *(undefined2 *)pcVar9 = *(undefined2 *)pcVar8;
  memset(local_bfca,0,0x5f32);
  pcVar8 = 
  "inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,from_unixtime(\'%s\'),%d,now(),%d,\'%s\',%d,\'%s\',%d,%d)"
  ;
  pcVar9 = local_6098;
  for (iVar7 = 0x37; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
  }
  *pcVar9 = *pcVar8;
  memset(local_5fbb,0,0x5f23);
  builtin_strncpy(local_98,"9999-12-31 23:59:59",0x14);
  puVar10 = local_84;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  if (*(int *)(param_1 + 10) == 0) {
    local_20 = local_c098;
  }
  else {
    local_20 = local_6098;
    memset(local_98,0,0x40);
    uVar6 = *(undefined4 *)(param_1 + 10);
    cMyTrace::cMyTrace(local_58,
                       "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",0xae1
                       ,0);
    cMyTrace::operator()(local_58,"[InsertAvatarItem] pContext->nExpireTime : %d",uVar6);
    if ((*(int *)(param_1 + 10) < 0x1f) && (6 < *(int *)(param_1 + 10))) {
      iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      sprintf(local_98,"%d",iVar7 + *(int *)(param_1 + 10) * 0x15180);
      cMyTrace::cMyTrace(local_48,
                         "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",
                         0xae5,0);
      cMyTrace::operator()(local_48,"[InsertAvatarItem] period value : %s",local_98);
    }
    else {
      sprintf(local_98,"%d",*(undefined4 *)(param_1 + 10));
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",
                         0xaea,0);
      cMyTrace::operator()(local_38,"[InsertAvatarItem] period value : %s",local_98);
    }
  }
  sVar1 = *(short *)(param_1 + 0x51);
  sVar2 = *(short *)(param_1 + 0x4f);
  uVar3 = *(ushort *)(param_1 + 0x2a);
  uVar4 = *(ushort *)(param_1 + 0x28);
  uVar6 = MySQL::blob_to_str(local_28,0,param_1 + 0x2d,0x1e);
  MySQL::set_query(local_28,local_20,*(undefined4 *)param_1,(uint)(byte)param_1[8],
                   *(undefined4 *)(param_1 + 4),local_98,(uint)(byte)param_1[0xe],
                   (uint)(byte)param_1[9],param_1 + 0xf,(int)(char)param_1[0x2c],uVar6,(uint)uVar4,
                   (uint)uVar3,(int)sVar2,(int)sVar1);
  cVar5 = MySQL::exec(local_28,true);
  return cVar5 == '\x01';
}

```

---

## _SendResult

```asm
// === 084001fe DB_AvatarItemInsert::_SendResult  [0x084001fe-0x840031d] ===
 84001fe:	55                   	push   %ebp
 84001ff:	89 e5                	mov    %esp,%ebp
 8400201:	56                   	push   %esi
 8400202:	53                   	push   %ebx
 8400203:	83 ec 20             	sub    $0x20,%esp
 8400206:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840020b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400212:	00 
 8400213:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840021a:	00 
 840021b:	89 04 24             	mov    %eax,(%esp)
 840021e:	e8 1b 50 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8400223:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8400226:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840022b:	c7 44 24 08 18 0b 00 	movl   $0xb18,0x8(%esp)
 8400232:	00 
 8400233:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840023a:	08 
 840023b:	89 04 24             	mov    %eax,(%esp)
 840023e:	e8 43 f8 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8400243:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840024a:	00 
 840024b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840024f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8400252:	89 04 24             	mov    %eax,(%esp)
 8400255:	e8 cc 89 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840025a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 840025d:	89 04 24             	mov    %eax,(%esp)
 8400260:	e8 e1 89 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8400265:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 840026c:	00 
 840026d:	89 04 24             	mov    %eax,(%esp)
 8400270:	e8 e1 89 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8400275:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8400278:	89 04 24             	mov    %eax,(%esp)
 840027b:	e8 c6 89 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8400280:	8b 55 10             	mov    0x10(%ebp),%edx
 8400283:	89 54 24 04          	mov    %edx,0x4(%esp)
 8400287:	89 04 24             	mov    %eax,(%esp)
 840028a:	e8 c7 89 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840028f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8400292:	89 04 24             	mov    %eax,(%esp)
 8400295:	e8 b4 89 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 840029a:	89 04 24             	mov    %eax,(%esp)
 840029d:	e8 0c 01 05 00       	call   84503ae <_ZN12CStreamGuard11GetInBufferI17SIG_AVATAR_INSERTEEPT_v>
 84002a2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84002a5:	c7 44 24 08 53 00 00 	movl   $0x53,0x8(%esp)
 84002ac:	00 
 84002ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84002b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84002b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84002b7:	89 04 24             	mov    %eax,(%esp)
 84002ba:	e8 e1 d5 c7 ff       	call   807d8a0 <memcpy@plt>
 84002bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84002c2:	89 04 24             	mov    %eax,(%esp)
 84002c5:	e8 0a 98 ff ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 84002ca:	89 c2                	mov    %eax,%edx
 84002cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84002cf:	89 50 4b             	mov    %edx,0x4b(%eax)
 84002d2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84002d7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84002da:	89 54 24 08          	mov    %edx,0x8(%esp)
 84002de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84002e5:	00 
 84002e6:	89 04 24             	mov    %eax,(%esp)
 84002e9:	e8 f0 0c 17 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84002ee:	eb 1b                	jmp    840030b <_ZN19DB_AvatarItemInsert11_SendResultEP17SIG_AVATAR_INSERTi+0x10d>
 84002f0:	89 d3                	mov    %edx,%ebx
 84002f2:	89 c6                	mov    %eax,%esi
 84002f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84002f7:	89 04 24             	mov    %eax,(%esp)
 84002fa:	e8 d3 c5 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84002ff:	89 f0                	mov    %esi,%eax
 8400301:	89 da                	mov    %ebx,%edx
 8400303:	89 04 24             	mov    %eax,(%esp)
 8400306:	e8 45 34 6e 00       	call   8ae3750 <_Unwind_Resume>
 840030b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 840030e:	89 04 24             	mov    %eax,(%esp)
 8400311:	e8 bc c5 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8400316:	83 c4 20             	add    $0x20,%esp
 8400319:	5b                   	pop    %ebx
 840031a:	5e                   	pop    %esi
 840031b:	5d                   	pop    %ebp
 840031c:	c3                   	ret
 840031d:	90                   	nop

```

```c
// DB_AvatarItemInsert::_SendResult @ 0x84001fe

/* DB_AvatarItemInsert::_SendResult(SIG_AVATAR_INSERT*, int) */

void __thiscall
DB_AvatarItemInsert::_SendResult(DB_AvatarItemInsert *this,SIG_AVATAR_INSERT *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_AVATAR_INSERT *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb18);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08400270 to 084002ed has its CatchHandler @ 084002f0 */
  CStreamGuard::operator<<(pCVar2,0x31);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_AVATAR_INSERT>(pCVar2);
  memcpy(local_10,param_1,0x53);
  uVar3 = WongWork::DBCommon::GetIdentity(local_14);
  *(undefined4 *)(local_10 + 0x4b) = uVar3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}

```

---

## dispatch

```asm
// === 083ffdba DB_AvatarItemInsert::dispatch  [0x083ffdba-0x83ffe0d] ===
 83ffdba:	55                   	push   %ebp
 83ffdbb:	89 e5                	mov    %esp,%ebp
 83ffdbd:	83 ec 28             	sub    $0x28,%esp
 83ffdc0:	8b 45 14             	mov    0x14(%ebp),%eax
 83ffdc3:	89 04 24             	mov    %eax,(%esp)
 83ffdc6:	e8 8f 05 05 00       	call   845035a <_ZN6Stream12GetOutBufferI17SIG_AVATAR_INSERTEEPT_v>
 83ffdcb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83ffdce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ffdd1:	89 04 24             	mov    %eax,(%esp)
 83ffdd4:	e8 35 00 00 00       	call   83ffe0e <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT>
 83ffdd9:	88 45 f3             	mov    %al,-0xd(%ebp)
 83ffddc:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83ffde0:	83 f0 01             	xor    $0x1,%eax
 83ffde3:	84 c0                	test   %al,%al
 83ffde5:	74 07                	je     83ffdee <_ZN19DB_AvatarItemInsert8dispatchEiiP6Stream+0x34>
 83ffde7:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffdec:	eb 1e                	jmp    83ffe0c <_ZN19DB_AvatarItemInsert8dispatchEiiP6Stream+0x52>
 83ffdee:	8b 45 10             	mov    0x10(%ebp),%eax
 83ffdf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83ffdf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ffdf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ffdfc:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffdff:	89 04 24             	mov    %eax,(%esp)
 83ffe02:	e8 f7 03 00 00       	call   84001fe <_ZN19DB_AvatarItemInsert11_SendResultEP17SIG_AVATAR_INSERTi>
 83ffe07:	b8 01 00 00 00       	mov    $0x1,%eax
 83ffe0c:	c9                   	leave
 83ffe0d:	c3                   	ret

```

```c
// DB_AvatarItemInsert::dispatch @ 0x83ffdba

/* DB_AvatarItemInsert::dispatch(int, int, Stream*) */

bool __thiscall
DB_AvatarItemInsert::dispatch(DB_AvatarItemInsert *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_INSERT *pSVar2;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_INSERT>(param_3);
  cVar1 = InsertAvatarItem(pSVar2);
  if (cVar1 == '\x01') {
    _SendResult(this,pSVar2,param_2);
  }
  return cVar1 == '\x01';
}

```

---

## ~DB_AvatarItemInsert

```asm
// === 083ffd6c DB_AvatarItemInsert::~DB_AvatarItemInsert  [0x083ffd6c-0x83ffd9b] ===
 83ffd6c:	55                   	push   %ebp
 83ffd6d:	89 e5                	mov    %esp,%ebp
 83ffd6f:	83 ec 18             	sub    $0x18,%esp
 83ffd72:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd75:	c7 00 d8 fc c5 08    	movl   $0x8c5fcd8,(%eax)
 83ffd7b:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd7e:	89 04 24             	mov    %eax,(%esp)
 83ffd81:	e8 f2 25 ce ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 83ffd86:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffd8b:	84 c0                	test   %al,%al
 83ffd8d:	74 0b                	je     83ffd9a <_ZN19DB_AvatarItemInsertD1Ev+0x2e>
 83ffd8f:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd92:	89 04 24             	mov    %eax,(%esp)
 83ffd95:	e8 56 47 32 00       	call   87244f0 <_ZdlPv>
 83ffd9a:	c9                   	leave
 83ffd9b:	c3                   	ret

```

```c
// DB_AvatarItemInsert::~DB_AvatarItemInsert @ 0x83ffd6c

/* WARNING: Removing unreachable block (ram,0x083ffd8f) */
/* DB_AvatarItemInsert::~DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::~DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcd8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_AvatarItemInsert_083ffd9c

```asm
// === 083ffd9c DB_AvatarItemInsert::~DB_AvatarItemInsert  [0x083ffd9c-0x83ffdb9] ===
 83ffd9c:	55                   	push   %ebp
 83ffd9d:	89 e5                	mov    %esp,%ebp
 83ffd9f:	83 ec 18             	sub    $0x18,%esp
 83ffda2:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffda5:	89 04 24             	mov    %eax,(%esp)
 83ffda8:	e8 bf ff ff ff       	call   83ffd6c <_ZN19DB_AvatarItemInsertD1Ev>
 83ffdad:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffdb0:	89 04 24             	mov    %eax,(%esp)
 83ffdb3:	e8 38 47 32 00       	call   87244f0 <_ZdlPv>
 83ffdb8:	c9                   	leave
 83ffdb9:	c3                   	ret

```

```c
// DB_AvatarItemInsert::~DB_AvatarItemInsert @ 0x83ffd9c

/* DB_AvatarItemInsert::~DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::~DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  ~DB_AvatarItemInsert(this);
  operator_delete(this);
  return;
}

```

