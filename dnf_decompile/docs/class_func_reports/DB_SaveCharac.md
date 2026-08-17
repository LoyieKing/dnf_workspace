# DB_SaveCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## DB_SaveCharac

```asm
// === 08415c2e DB_SaveCharac::DB_SaveCharac  [0x08415c2e-0x8415c49] ===
 8415c2e:	55                   	push   %ebp
 8415c2f:	89 e5                	mov    %esp,%ebp
 8415c31:	83 ec 18             	sub    $0x18,%esp
 8415c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c37:	89 04 24             	mov    %eax,(%esp)
 8415c3a:	e8 67 7b 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8415c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c42:	c7 00 f8 fa c5 08    	movl   $0x8c5faf8,(%eax)
 8415c48:	c9                   	leave
 8415c49:	c3                   	ret

```

```c
// DB_SaveCharac::DB_SaveCharac @ 0x8415c2e

/* DB_SaveCharac::DB_SaveCharac() */

void __thiscall DB_SaveCharac::DB_SaveCharac(DB_SaveCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5faf8;
  return;
}

```

---

## SendResult

```asm
// === 08416904 DB_SaveCharac::SendResult  [0x08416904-0x841690d] ===
 8416904:	55                   	push   %ebp
 8416905:	89 e5                	mov    %esp,%ebp
 8416907:	b8 01 00 00 00       	mov    $0x1,%eax
 841690c:	5d                   	pop    %ebp
 841690d:	c3                   	ret

```

```c
// DB_SaveCharac::SendResult @ 0x8416904

/* DB_SaveCharac::SendResult(int, int, SIG_SAVE_CHARAC*) */

undefined4 DB_SaveCharac::SendResult(int param_1,int param_2,SIG_SAVE_CHARAC *param_3)

{
  return 1;
}

```

---

## _SaveCharacInfo

```asm
// === 08415eda DB_SaveCharac::_SaveCharacInfo  [0x08415eda-0x84163f1] ===
 8415eda:	55                   	push   %ebp
 8415edb:	89 e5                	mov    %esp,%ebp
 8415edd:	57                   	push   %edi
 8415ede:	56                   	push   %esi
 8415edf:	53                   	push   %ebx
 8415ee0:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 8415ee6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8415eeb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8415ef2:	00 
 8415ef3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8415efa:	00 
 8415efb:	89 04 24             	mov    %eax,(%esp)
 8415efe:	e8 3b f3 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8415f03:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8415f06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f09:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8415f0d:	84 c0                	test   %al,%al
 8415f0f:	0f 84 70 02 00 00    	je     8416185 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x2ab>
 8415f15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f18:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8415f1c:	84 c0                	test   %al,%al
 8415f1e:	0f 84 61 02 00 00    	je     8416185 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x2ab>
 8415f24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f27:	8b 00                	mov    (%eax),%eax
 8415f29:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8415f2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f32:	0f b6 80 dd 00 00 00 	movzbl 0xdd(%eax),%eax
 8415f39:	0f be c0             	movsbl %al,%eax
 8415f3c:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8415f42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f45:	0f b6 80 fd 00 00 00 	movzbl 0xfd(%eax),%eax
 8415f4c:	0f be c0             	movsbl %al,%eax
 8415f4f:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8415f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f58:	0f b6 40 5d          	movzbl 0x5d(%eax),%eax
 8415f5c:	0f be c0             	movsbl %al,%eax
 8415f5f:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8415f65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f68:	0f b6 80 da 00 00 00 	movzbl 0xda(%eax),%eax
 8415f6f:	0f b6 c0             	movzbl %al,%eax
 8415f72:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8415f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f7b:	0f b7 80 db 00 00 00 	movzwl 0xdb(%eax),%eax
 8415f82:	0f b7 c0             	movzwl %ax,%eax
 8415f85:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8415f8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415f8e:	83 c0 23             	add    $0x23,%eax
 8415f91:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 8415f98:	00 
 8415f99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415f9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415fa4:	00 
 8415fa5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415fa8:	89 04 24             	mov    %eax,(%esp)
 8415fab:	e8 7a e5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8415fb0:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8415fb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415fb9:	83 c0 1b             	add    $0x1b,%eax
 8415fbc:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 8415fc3:	00 
 8415fc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415fc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8415fcf:	00 
 8415fd0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415fd3:	89 04 24             	mov    %eax,(%esp)
 8415fd6:	e8 4f e5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8415fdb:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8415fe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415fe4:	8b 40 59             	mov    0x59(%eax),%eax
 8415fe7:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8415fed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415ff0:	0f b7 40 57          	movzwl 0x57(%eax),%eax
 8415ff4:	98                   	cwtl
 8415ff5:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8415ffb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415ffe:	0f b7 40 55          	movzwl 0x55(%eax),%eax
 8416002:	98                   	cwtl
 8416003:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8416009:	8b 45 0c             	mov    0xc(%ebp),%eax
 841600c:	0f b7 40 53          	movzwl 0x53(%eax),%eax
 8416010:	0f b7 c0             	movzwl %ax,%eax
 8416013:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8416019:	8b 45 0c             	mov    0xc(%ebp),%eax
 841601c:	0f b7 40 51          	movzwl 0x51(%eax),%eax
 8416020:	0f b7 c0             	movzwl %ax,%eax
 8416023:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8416029:	8b 45 0c             	mov    0xc(%ebp),%eax
 841602c:	8b 40 4d             	mov    0x4d(%eax),%eax
 841602f:	89 45 80             	mov    %eax,-0x80(%ebp)
 8416032:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416035:	0f b7 40 4b          	movzwl 0x4b(%eax),%eax
 8416039:	98                   	cwtl
 841603a:	89 45 84             	mov    %eax,-0x7c(%ebp)
 841603d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416040:	0f b7 40 49          	movzwl 0x49(%eax),%eax
 8416044:	98                   	cwtl
 8416045:	89 45 88             	mov    %eax,-0x78(%ebp)
 8416048:	8b 45 0c             	mov    0xc(%ebp),%eax
 841604b:	8b 40 45             	mov    0x45(%eax),%eax
 841604e:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8416051:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416054:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 8416058:	0f b7 c0             	movzwl %ax,%eax
 841605b:	89 45 90             	mov    %eax,-0x70(%ebp)
 841605e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416061:	0f b7 40 17          	movzwl 0x17(%eax),%eax
 8416065:	0f b7 c0             	movzwl %ax,%eax
 8416068:	89 45 94             	mov    %eax,-0x6c(%ebp)
 841606b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841606e:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 8416072:	0f b7 f8             	movzwl %ax,%edi
 8416075:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416078:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 841607c:	0f b7 f0             	movzwl %ax,%esi
 841607f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416082:	8b 58 0f             	mov    0xf(%eax),%ebx
 8416085:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416088:	8b 48 0b             	mov    0xb(%eax),%ecx
 841608b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841608e:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8416092:	0f be d0             	movsbl %al,%edx
 8416095:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416098:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 841609c:	98                   	cwtl
 841609d:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 84160a3:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84160a9:	89 44 24 68          	mov    %eax,0x68(%esp)
 84160ad:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 84160b3:	89 44 24 64          	mov    %eax,0x64(%esp)
 84160b7:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 84160bd:	89 44 24 60          	mov    %eax,0x60(%esp)
 84160c1:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 84160c7:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 84160cb:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 84160d1:	89 44 24 58          	mov    %eax,0x58(%esp)
 84160d5:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 84160db:	89 44 24 54          	mov    %eax,0x54(%esp)
 84160df:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 84160e5:	89 44 24 50          	mov    %eax,0x50(%esp)
 84160e9:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 84160ef:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 84160f3:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84160f9:	89 44 24 48          	mov    %eax,0x48(%esp)
 84160fd:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8416103:	89 44 24 44          	mov    %eax,0x44(%esp)
 8416107:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 841610d:	89 44 24 40          	mov    %eax,0x40(%esp)
 8416111:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8416117:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 841611b:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8416121:	89 44 24 38          	mov    %eax,0x38(%esp)
 8416125:	8b 45 80             	mov    -0x80(%ebp),%eax
 8416128:	89 44 24 34          	mov    %eax,0x34(%esp)
 841612c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 841612f:	89 44 24 30          	mov    %eax,0x30(%esp)
 8416133:	8b 45 88             	mov    -0x78(%ebp),%eax
 8416136:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 841613a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 841613d:	89 44 24 28          	mov    %eax,0x28(%esp)
 8416141:	8b 45 90             	mov    -0x70(%ebp),%eax
 8416144:	89 44 24 24          	mov    %eax,0x24(%esp)
 8416148:	8b 45 94             	mov    -0x6c(%ebp),%eax
 841614b:	89 44 24 20          	mov    %eax,0x20(%esp)
 841614f:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8416153:	89 74 24 18          	mov    %esi,0x18(%esp)
 8416157:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841615b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841615f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8416163:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8416169:	89 44 24 08          	mov    %eax,0x8(%esp)
 841616d:	c7 44 24 04 68 8d c4 	movl   $0x8c48d68,0x4(%esp)
 8416174:	08 
 8416175:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416178:	89 04 24             	mov    %eax,(%esp)
 841617b:	e8 40 e0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8416180:	e9 34 02 00 00       	jmp    84163b9 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x4df>
 8416185:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416188:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 841618c:	84 c0                	test   %al,%al
 841618e:	0f 84 cb 01 00 00    	je     841635f <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x485>
 8416194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416197:	8b 00                	mov    (%eax),%eax
 8416199:	89 45 98             	mov    %eax,-0x68(%ebp)
 841619c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841619f:	0f b6 80 fd 00 00 00 	movzbl 0xfd(%eax),%eax
 84161a6:	0f be c0             	movsbl %al,%eax
 84161a9:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84161ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84161af:	0f b6 40 5d          	movzbl 0x5d(%eax),%eax
 84161b3:	0f be c0             	movsbl %al,%eax
 84161b6:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84161b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84161bc:	83 c0 23             	add    $0x23,%eax
 84161bf:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 84161c6:	00 
 84161c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84161cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84161d2:	00 
 84161d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84161d6:	89 04 24             	mov    %eax,(%esp)
 84161d9:	e8 4c e3 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84161de:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84161e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84161e4:	83 c0 1b             	add    $0x1b,%eax
 84161e7:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 84161ee:	00 
 84161ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 84161f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84161fa:	00 
 84161fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84161fe:	89 04 24             	mov    %eax,(%esp)
 8416201:	e8 24 e3 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416206:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8416209:	8b 45 0c             	mov    0xc(%ebp),%eax
 841620c:	8b 40 59             	mov    0x59(%eax),%eax
 841620f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8416212:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416215:	0f b7 40 57          	movzwl 0x57(%eax),%eax
 8416219:	98                   	cwtl
 841621a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 841621d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416220:	0f b7 40 55          	movzwl 0x55(%eax),%eax
 8416224:	98                   	cwtl
 8416225:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8416228:	8b 45 0c             	mov    0xc(%ebp),%eax
 841622b:	0f b7 40 53          	movzwl 0x53(%eax),%eax
 841622f:	0f b7 c0             	movzwl %ax,%eax
 8416232:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8416235:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416238:	0f b7 40 51          	movzwl 0x51(%eax),%eax
 841623c:	0f b7 c0             	movzwl %ax,%eax
 841623f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8416242:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416245:	8b 40 4d             	mov    0x4d(%eax),%eax
 8416248:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841624b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841624e:	0f b7 40 4b          	movzwl 0x4b(%eax),%eax
 8416252:	98                   	cwtl
 8416253:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8416256:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416259:	0f b7 40 49          	movzwl 0x49(%eax),%eax
 841625d:	98                   	cwtl
 841625e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8416261:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416264:	8b 40 45             	mov    0x45(%eax),%eax
 8416267:	89 45 cc             	mov    %eax,-0x34(%ebp)
 841626a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841626d:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 8416271:	0f b7 c0             	movzwl %ax,%eax
 8416274:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8416277:	8b 45 0c             	mov    0xc(%ebp),%eax
 841627a:	0f b7 40 17          	movzwl 0x17(%eax),%eax
 841627e:	0f b7 c0             	movzwl %ax,%eax
 8416281:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8416284:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416287:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 841628b:	0f b7 f8             	movzwl %ax,%edi
 841628e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416291:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 8416295:	0f b7 f0             	movzwl %ax,%esi
 8416298:	8b 45 0c             	mov    0xc(%ebp),%eax
 841629b:	8b 58 0f             	mov    0xf(%eax),%ebx
 841629e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84162a1:	8b 48 0b             	mov    0xb(%eax),%ecx
 84162a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84162a7:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84162ab:	0f be d0             	movsbl %al,%edx
 84162ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84162b1:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84162b5:	98                   	cwtl
 84162b6:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 84162bc:	8b 45 98             	mov    -0x68(%ebp),%eax
 84162bf:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 84162c3:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84162c6:	89 44 24 58          	mov    %eax,0x58(%esp)
 84162ca:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84162cd:	89 44 24 54          	mov    %eax,0x54(%esp)
 84162d1:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84162d4:	89 44 24 50          	mov    %eax,0x50(%esp)
 84162d8:	8b 45 a8             	mov    -0x58(%ebp),%eax
 84162db:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 84162df:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84162e2:	89 44 24 48          	mov    %eax,0x48(%esp)
 84162e6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84162e9:	89 44 24 44          	mov    %eax,0x44(%esp)
 84162ed:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84162f0:	89 44 24 40          	mov    %eax,0x40(%esp)
 84162f4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84162f7:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84162fb:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84162fe:	89 44 24 38          	mov    %eax,0x38(%esp)
 8416302:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8416305:	89 44 24 34          	mov    %eax,0x34(%esp)
 8416309:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841630c:	89 44 24 30          	mov    %eax,0x30(%esp)
 8416310:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8416313:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8416317:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841631a:	89 44 24 28          	mov    %eax,0x28(%esp)
 841631e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8416321:	89 44 24 24          	mov    %eax,0x24(%esp)
 8416325:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8416328:	89 44 24 20          	mov    %eax,0x20(%esp)
 841632c:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8416330:	89 74 24 18          	mov    %esi,0x18(%esp)
 8416334:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8416338:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841633c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8416340:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8416346:	89 44 24 08          	mov    %eax,0x8(%esp)
 841634a:	c7 44 24 04 f8 8e c4 	movl   $0x8c48ef8,0x4(%esp)
 8416351:	08 
 8416352:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416355:	89 04 24             	mov    %eax,(%esp)
 8416358:	e8 63 de fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841635d:	eb 5a                	jmp    84163b9 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x4df>
 841635f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416362:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8416366:	84 c0                	test   %al,%al
 8416368:	74 4f                	je     84163b9 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x4df>
 841636a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841636d:	8b 18                	mov    (%eax),%ebx
 841636f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416372:	0f b6 80 dd 00 00 00 	movzbl 0xdd(%eax),%eax
 8416379:	0f be c8             	movsbl %al,%ecx
 841637c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841637f:	0f b6 80 da 00 00 00 	movzbl 0xda(%eax),%eax
 8416386:	0f b6 d0             	movzbl %al,%edx
 8416389:	8b 45 0c             	mov    0xc(%ebp),%eax
 841638c:	0f b7 80 db 00 00 00 	movzwl 0xdb(%eax),%eax
 8416393:	0f b7 c0             	movzwl %ax,%eax
 8416396:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841639a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841639e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84163a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84163a6:	c7 44 24 04 4c 90 c4 	movl   $0x8c4904c,0x4(%esp)
 84163ad:	08 
 84163ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84163b1:	89 04 24             	mov    %eax,(%esp)
 84163b4:	e8 07 de fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84163b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84163c0:	00 
 84163c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84163c4:	89 04 24             	mov    %eax,(%esp)
 84163c7:	e8 5a df fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84163cc:	88 45 e3             	mov    %al,-0x1d(%ebp)
 84163cf:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84163d3:	83 f0 01             	xor    $0x1,%eax
 84163d6:	84 c0                	test   %al,%al
 84163d8:	74 07                	je     84163e1 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x507>
 84163da:	b8 00 00 00 00       	mov    $0x0,%eax
 84163df:	eb 05                	jmp    84163e6 <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC+0x50c>
 84163e1:	b8 01 00 00 00       	mov    $0x1,%eax
 84163e6:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 84163ec:	5b                   	pop    %ebx
 84163ed:	5e                   	pop    %esi
 84163ee:	5f                   	pop    %edi
 84163ef:	5d                   	pop    %ebp
 84163f0:	c3                   	ret
 84163f1:	90                   	nop

```

```c
// DB_SaveCharac::_SaveCharacInfo @ 0x8415eda

/* DB_SaveCharac::_SaveCharacInfo(SIG_SAVE_CHARAC*) */

bool __thiscall DB_SaveCharac::_SaveCharacInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  SIG_SAVE_CHARAC SVar1;
  SIG_SAVE_CHARAC SVar2;
  SIG_SAVE_CHARAC SVar3;
  SIG_SAVE_CHARAC SVar4;
  ushort uVar5;
  undefined4 uVar6;
  char cVar7;
  MySQL *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if ((param_1[4] == (SIG_SAVE_CHARAC)0x0) || (param_1[6] == (SIG_SAVE_CHARAC)0x0)) {
    if (param_1[4] == (SIG_SAVE_CHARAC)0x0) {
      if (param_1[6] != (SIG_SAVE_CHARAC)0x0) {
        MySQL::set_query(this_00,
                         "upDate charac_info set max_premium_fatigue=%d,guild_right=%d,event_charac_level=%d where charac_no = %u"
                         ,(uint)*(ushort *)(param_1 + 0xdb),(uint)(byte)param_1[0xda],
                         (int)(char)param_1[0xdd],*(undefined4 *)param_1);
      }
    }
    else {
      uVar6 = *(undefined4 *)param_1;
      SVar1 = param_1[0xfd];
      SVar2 = param_1[0x5d];
      uVar8 = MySQL::blob_to_str(this_00,1,param_1 + 0x23,0x22);
      uVar9 = MySQL::blob_to_str(this_00,0,param_1 + 0x1b,8);
      MySQL::set_query(this_00,
                       "upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist=\'%s\',spec_property=\'%s\', expert_job=%d, skill_tree_index=%d where charac_no = %u"
                       ,(int)*(short *)(param_1 + 8),(int)(char)param_1[10],
                       *(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
                       (uint)*(ushort *)(param_1 + 0x13),(uint)*(ushort *)(param_1 + 0x15),
                       (uint)*(ushort *)(param_1 + 0x17),(uint)*(ushort *)(param_1 + 0x19),
                       *(undefined4 *)(param_1 + 0x45),(int)*(short *)(param_1 + 0x49),
                       (int)*(short *)(param_1 + 0x4b),*(undefined4 *)(param_1 + 0x4d),
                       (uint)*(ushort *)(param_1 + 0x51),(uint)*(ushort *)(param_1 + 0x53),
                       (int)*(short *)(param_1 + 0x55),(int)*(short *)(param_1 + 0x57),
                       *(undefined4 *)(param_1 + 0x59),uVar9,uVar8,(int)(char)SVar2,(int)(char)SVar1
                       ,uVar6);
    }
  }
  else {
    uVar6 = *(undefined4 *)param_1;
    SVar1 = param_1[0xdd];
    SVar2 = param_1[0xfd];
    SVar3 = param_1[0x5d];
    SVar4 = param_1[0xda];
    uVar5 = *(ushort *)(param_1 + 0xdb);
    uVar8 = MySQL::blob_to_str(this_00,1,param_1 + 0x23,0x22);
    uVar9 = MySQL::blob_to_str(this_00,0,param_1 + 0x1b,8);
    MySQL::set_query(this_00,
                     "upDate charac_info set lev=%d,grow_type=%d,maxHP=%d,maxMP=%d,phy_attack=%d,phy_defense=%d,mag_attack=%d,mag_defense=%d,inven_weight=%d,hp_regen=%d,mp_regen=%d,move_speed=%d,attack_speed=%d,cast_speed=%d,hit_recovery=%d,jump=%d,charac_weight=%d,element_resist=\'%s\',spec_property=\'%s\',max_premium_fatigue=%d,guild_right=%d,expert_job=%d,skill_tree_index=%d, event_charac_level=%d where charac_no = %u"
                     ,(int)*(short *)(param_1 + 8),(int)(char)param_1[10],
                     *(undefined4 *)(param_1 + 0xb),*(undefined4 *)(param_1 + 0xf),
                     (uint)*(ushort *)(param_1 + 0x13),(uint)*(ushort *)(param_1 + 0x15),
                     (uint)*(ushort *)(param_1 + 0x17),(uint)*(ushort *)(param_1 + 0x19),
                     *(undefined4 *)(param_1 + 0x45),(int)*(short *)(param_1 + 0x49),
                     (int)*(short *)(param_1 + 0x4b),*(undefined4 *)(param_1 + 0x4d),
                     (uint)*(ushort *)(param_1 + 0x51),(uint)*(ushort *)(param_1 + 0x53),
                     (int)*(short *)(param_1 + 0x55),(int)*(short *)(param_1 + 0x57),
                     *(undefined4 *)(param_1 + 0x59),uVar9,uVar8,(uint)uVar5,(uint)(byte)SVar4,
                     (int)(char)SVar3,(int)(char)SVar2,(int)(char)SVar1,uVar6);
  }
  cVar7 = MySQL::exec(this_00,true);
  return cVar7 == '\x01';
}

```

---

## _SaveCharacManageInfo

```asm
// === 0841690e DB_SaveCharac::_SaveCharacManageInfo  [0x0841690e-0x8416a41] ===
 841690e:	55                   	push   %ebp
 841690f:	89 e5                	mov    %esp,%ebp
 8416911:	53                   	push   %ebx
 8416912:	83 ec 34             	sub    $0x34,%esp
 8416915:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841691a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416921:	00 
 8416922:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8416929:	00 
 841692a:	89 04 24             	mov    %eax,(%esp)
 841692d:	e8 0c e9 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8416932:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8416935:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416938:	0f b7 80 08 01 00 00 	movzwl 0x108(%eax),%eax
 841693f:	0f b7 d8             	movzwl %ax,%ebx
 8416942:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416945:	0f b6 80 03 01 00 00 	movzbl 0x103(%eax),%eax
 841694c:	0f b6 c8             	movzbl %al,%ecx
 841694f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416952:	8b 90 04 01 00 00    	mov    0x104(%eax),%edx
 8416958:	8b 45 0c             	mov    0xc(%ebp),%eax
 841695b:	8b 00                	mov    (%eax),%eax
 841695d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8416961:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8416965:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8416969:	89 44 24 08          	mov    %eax,0x8(%esp)
 841696d:	c7 44 24 04 b0 94 c4 	movl   $0x8c494b0,0x4(%esp)
 8416974:	08 
 8416975:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8416978:	89 04 24             	mov    %eax,(%esp)
 841697b:	e8 40 d8 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8416980:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416987:	00 
 8416988:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841698b:	89 04 24             	mov    %eax,(%esp)
 841698e:	e8 93 d9 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8416993:	88 45 f7             	mov    %al,-0x9(%ebp)
 8416996:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841699a:	83 f0 01             	xor    $0x1,%eax
 841699d:	84 c0                	test   %al,%al
 841699f:	0f 84 91 00 00 00    	je     8416a36 <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC+0x128>
 84169a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84169a8:	89 04 24             	mov    %eax,(%esp)
 84169ab:	e8 ca 4f d0 ff       	call   811b97a <_ZN5MySQL10getDBErrorEv>
 84169b0:	3d 26 04 00 00       	cmp    $0x426,%eax
 84169b5:	0f 94 c0             	sete   %al
 84169b8:	84 c0                	test   %al,%al
 84169ba:	74 73                	je     8416a2f <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC+0x121>
 84169bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84169bf:	8b 18                	mov    (%eax),%ebx
 84169c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84169c4:	0f b7 80 08 01 00 00 	movzwl 0x108(%eax),%eax
 84169cb:	0f b7 c8             	movzwl %ax,%ecx
 84169ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84169d1:	0f b6 80 03 01 00 00 	movzbl 0x103(%eax),%eax
 84169d8:	0f b6 d0             	movzbl %al,%edx
 84169db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84169de:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 84169e4:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84169e8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84169ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84169f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84169f4:	c7 44 24 04 24 95 c4 	movl   $0x8c49524,0x4(%esp)
 84169fb:	08 
 84169fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84169ff:	89 04 24             	mov    %eax,(%esp)
 8416a02:	e8 b9 d7 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8416a07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416a0e:	00 
 8416a0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8416a12:	89 04 24             	mov    %eax,(%esp)
 8416a15:	e8 0c d9 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8416a1a:	88 45 f7             	mov    %al,-0x9(%ebp)
 8416a1d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8416a21:	83 f0 01             	xor    $0x1,%eax
 8416a24:	84 c0                	test   %al,%al
 8416a26:	74 0e                	je     8416a36 <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC+0x128>
 8416a28:	b8 00 00 00 00       	mov    $0x0,%eax
 8416a2d:	eb 0c                	jmp    8416a3b <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC+0x12d>
 8416a2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8416a34:	eb 05                	jmp    8416a3b <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC+0x12d>
 8416a36:	b8 01 00 00 00       	mov    $0x1,%eax
 8416a3b:	83 c4 34             	add    $0x34,%esp
 8416a3e:	5b                   	pop    %ebx
 8416a3f:	5d                   	pop    %ebp
 8416a40:	c3                   	ret
 8416a41:	90                   	nop

```

```c
// DB_SaveCharac::_SaveCharacManageInfo @ 0x841690e

/* DB_SaveCharac::_SaveCharacManageInfo(SIG_SAVE_CHARAC*) */

undefined4 __thiscall
DB_SaveCharac::_SaveCharacManageInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  int iVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "inSert into charac_manage_info(charac_no, tag_charac_no, striker_skill_index, max_equip_level) values(%u,%u,%u,%u)"
                   ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x104),
                   (uint)(byte)param_1[0x103],(uint)*(ushort *)(param_1 + 0x108));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    iVar2 = MySQL::getDBError(this_00);
    if (iVar2 != 0x426) {
      return 0;
    }
    MySQL::set_query(this_00,
                     "upDate charac_manage_info set tag_charac_no=%u, striker_skill_index=%u, max_equip_level=%u where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 0x104),(uint)(byte)param_1[0x103],
                     (uint)*(ushort *)(param_1 + 0x108),*(undefined4 *)param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## _SaveCharacStat

```asm
// === 084163f2 DB_SaveCharac::_SaveCharacStat  [0x084163f2-0x8416903] ===
 84163f2:	55                   	push   %ebp
 84163f3:	89 e5                	mov    %esp,%ebp
 84163f5:	57                   	push   %edi
 84163f6:	56                   	push   %esi
 84163f7:	53                   	push   %ebx
 84163f8:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 84163fe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8416403:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841640a:	00 
 841640b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8416412:	00 
 8416413:	89 04 24             	mov    %eax,(%esp)
 8416416:	e8 23 ee fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841641b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841641e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416421:	8b 00                	mov    (%eax),%eax
 8416423:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8416429:	8b 45 0c             	mov    0xc(%ebp),%eax
 841642c:	8b 80 d6 00 00 00    	mov    0xd6(%eax),%eax
 8416432:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8416438:	8b 45 0c             	mov    0xc(%ebp),%eax
 841643b:	0f b6 80 d5 00 00 00 	movzbl 0xd5(%eax),%eax
 8416442:	0f b6 c0             	movzbl %al,%eax
 8416445:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 841644b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841644e:	0f b6 80 02 01 00 00 	movzbl 0x102(%eax),%eax
 8416455:	0f be c0             	movsbl %al,%eax
 8416458:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 841645e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416461:	0f b6 80 01 01 00 00 	movzbl 0x101(%eax),%eax
 8416468:	0f be c0             	movsbl %al,%eax
 841646b:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8416471:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416474:	0f b6 80 00 01 00 00 	movzbl 0x100(%eax),%eax
 841647b:	0f be c0             	movsbl %al,%eax
 841647e:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8416484:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416487:	0f b6 80 ff 00 00 00 	movzbl 0xff(%eax),%eax
 841648e:	0f be c0             	movsbl %al,%eax
 8416491:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8416497:	8b 45 0c             	mov    0xc(%ebp),%eax
 841649a:	8b 80 d1 00 00 00    	mov    0xd1(%eax),%eax
 84164a0:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 84164a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84164a9:	0f b7 80 cf 00 00 00 	movzwl 0xcf(%eax),%eax
 84164b0:	98                   	cwtl
 84164b1:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84164b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84164ba:	0f b6 80 ce 00 00 00 	movzbl 0xce(%eax),%eax
 84164c1:	0f b6 c0             	movzbl %al,%eax
 84164c4:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 84164ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84164cd:	0f b6 80 fe 00 00 00 	movzbl 0xfe(%eax),%eax
 84164d4:	0f be c0             	movsbl %al,%eax
 84164d7:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 84164dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84164e0:	0f b7 80 fb 00 00 00 	movzwl 0xfb(%eax),%eax
 84164e7:	98                   	cwtl
 84164e8:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 84164ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84164f1:	0f b7 80 cc 00 00 00 	movzwl 0xcc(%eax),%eax
 84164f8:	0f b7 c0             	movzwl %ax,%eax
 84164fb:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8416501:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416504:	8b 80 e2 00 00 00    	mov    0xe2(%eax),%eax
 841650a:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8416510:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416513:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
 8416519:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 841651f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416522:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8416528:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 841652e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416531:	0f b6 80 c3 00 00 00 	movzbl 0xc3(%eax),%eax
 8416538:	0f be c0             	movsbl %al,%eax
 841653b:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8416541:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416544:	0f b7 80 c1 00 00 00 	movzwl 0xc1(%eax),%eax
 841654b:	98                   	cwtl
 841654c:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8416552:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416555:	83 c0 6e             	add    $0x6e,%eax
 8416558:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 841655f:	00 
 8416560:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416564:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841656b:	00 
 841656c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841656f:	89 04 24             	mov    %eax,(%esp)
 8416572:	e8 b3 df fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416577:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 841657d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416580:	0f b7 80 bf 00 00 00 	movzwl 0xbf(%eax),%eax
 8416587:	98                   	cwtl
 8416588:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 841658e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416591:	0f b6 80 aa 00 00 00 	movzbl 0xaa(%eax),%eax
 8416598:	0f be c0             	movsbl %al,%eax
 841659b:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84165a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165a4:	8b 80 bb 00 00 00    	mov    0xbb(%eax),%eax
 84165aa:	89 45 80             	mov    %eax,-0x80(%ebp)
 84165ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165b0:	8b 80 af 00 00 00    	mov    0xaf(%eax),%eax
 84165b6:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84165b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165bc:	8b 80 b7 00 00 00    	mov    0xb7(%eax),%eax
 84165c2:	89 45 88             	mov    %eax,-0x78(%ebp)
 84165c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165c8:	8b 80 b3 00 00 00    	mov    0xb3(%eax),%eax
 84165ce:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84165d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165d4:	8b 80 ab 00 00 00    	mov    0xab(%eax),%eax
 84165da:	89 45 90             	mov    %eax,-0x70(%ebp)
 84165dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165e0:	8b 80 a6 00 00 00    	mov    0xa6(%eax),%eax
 84165e6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84165e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165ec:	8b 80 a2 00 00 00    	mov    0xa2(%eax),%eax
 84165f2:	89 45 98             	mov    %eax,-0x68(%ebp)
 84165f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84165f8:	8b 80 9e 00 00 00    	mov    0x9e(%eax),%eax
 84165fe:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8416601:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416604:	8b 80 9a 00 00 00    	mov    0x9a(%eax),%eax
 841660a:	89 45 a0             	mov    %eax,-0x60(%ebp)
 841660d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416610:	8b 80 96 00 00 00    	mov    0x96(%eax),%eax
 8416616:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8416619:	8b 45 0c             	mov    0xc(%ebp),%eax
 841661c:	8b 80 92 00 00 00    	mov    0x92(%eax),%eax
 8416622:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8416625:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416628:	8b 80 8e 00 00 00    	mov    0x8e(%eax),%eax
 841662e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8416631:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416634:	8b 80 8a 00 00 00    	mov    0x8a(%eax),%eax
 841663a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 841663d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416640:	8b 80 86 00 00 00    	mov    0x86(%eax),%eax
 8416646:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8416649:	8b 45 0c             	mov    0xc(%ebp),%eax
 841664c:	8b 80 82 00 00 00    	mov    0x82(%eax),%eax
 8416652:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8416655:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416658:	8b 40 7e             	mov    0x7e(%eax),%eax
 841665b:	89 45 bc             	mov    %eax,-0x44(%ebp)
 841665e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416661:	8b 40 6a             	mov    0x6a(%eax),%eax
 8416664:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8416667:	8b 45 0c             	mov    0xc(%ebp),%eax
 841666a:	0f b7 40 68          	movzwl 0x68(%eax),%eax
 841666e:	0f b7 c0             	movzwl %ax,%eax
 8416671:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8416674:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416677:	8b b8 de 00 00 00    	mov    0xde(%eax),%edi
 841667d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416680:	0f b7 40 65          	movzwl 0x65(%eax),%eax
 8416684:	0f b7 f0             	movzwl %ax,%esi
 8416687:	8b 45 0c             	mov    0xc(%ebp),%eax
 841668a:	0f b7 40 63          	movzwl 0x63(%eax),%eax
 841668e:	0f bf d8             	movswl %ax,%ebx
 8416691:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416694:	0f b6 40 67          	movzbl 0x67(%eax),%eax
 8416698:	0f b6 c8             	movzbl %al,%ecx
 841669b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841669e:	8b 50 5e             	mov    0x5e(%eax),%edx
 84166a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84166a4:	0f b6 40 62          	movzbl 0x62(%eax),%eax
 84166a8:	0f be c0             	movsbl %al,%eax
 84166ab:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 84166b1:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 84166b7:	89 84 24 b8 00 00 00 	mov    %eax,0xb8(%esp)
 84166be:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 84166c4:	89 84 24 b4 00 00 00 	mov    %eax,0xb4(%esp)
 84166cb:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 84166d1:	89 84 24 b0 00 00 00 	mov    %eax,0xb0(%esp)
 84166d8:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 84166de:	89 84 24 ac 00 00 00 	mov    %eax,0xac(%esp)
 84166e5:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 84166eb:	89 84 24 a8 00 00 00 	mov    %eax,0xa8(%esp)
 84166f2:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 84166f8:	89 84 24 a4 00 00 00 	mov    %eax,0xa4(%esp)
 84166ff:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8416705:	89 84 24 a0 00 00 00 	mov    %eax,0xa0(%esp)
 841670c:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8416712:	89 84 24 9c 00 00 00 	mov    %eax,0x9c(%esp)
 8416719:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 841671f:	89 84 24 98 00 00 00 	mov    %eax,0x98(%esp)
 8416726:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 841672c:	89 84 24 94 00 00 00 	mov    %eax,0x94(%esp)
 8416733:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8416739:	89 84 24 90 00 00 00 	mov    %eax,0x90(%esp)
 8416740:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8416746:	89 84 24 8c 00 00 00 	mov    %eax,0x8c(%esp)
 841674d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8416753:	89 84 24 88 00 00 00 	mov    %eax,0x88(%esp)
 841675a:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8416760:	89 84 24 84 00 00 00 	mov    %eax,0x84(%esp)
 8416767:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 841676d:	89 84 24 80 00 00 00 	mov    %eax,0x80(%esp)
 8416774:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 841677a:	89 44 24 7c          	mov    %eax,0x7c(%esp)
 841677e:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8416784:	89 44 24 78          	mov    %eax,0x78(%esp)
 8416788:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 841678e:	89 44 24 74          	mov    %eax,0x74(%esp)
 8416792:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8416798:	89 44 24 70          	mov    %eax,0x70(%esp)
 841679c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 84167a2:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 84167a6:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84167ac:	89 44 24 68          	mov    %eax,0x68(%esp)
 84167b0:	8b 45 80             	mov    -0x80(%ebp),%eax
 84167b3:	89 44 24 64          	mov    %eax,0x64(%esp)
 84167b7:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84167ba:	89 44 24 60          	mov    %eax,0x60(%esp)
 84167be:	8b 45 88             	mov    -0x78(%ebp),%eax
 84167c1:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 84167c5:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84167c8:	89 44 24 58          	mov    %eax,0x58(%esp)
 84167cc:	8b 45 90             	mov    -0x70(%ebp),%eax
 84167cf:	89 44 24 54          	mov    %eax,0x54(%esp)
 84167d3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84167d6:	89 44 24 50          	mov    %eax,0x50(%esp)
 84167da:	8b 45 98             	mov    -0x68(%ebp),%eax
 84167dd:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 84167e1:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84167e4:	89 44 24 48          	mov    %eax,0x48(%esp)
 84167e8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84167eb:	89 44 24 44          	mov    %eax,0x44(%esp)
 84167ef:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84167f2:	89 44 24 40          	mov    %eax,0x40(%esp)
 84167f6:	8b 45 a8             	mov    -0x58(%ebp),%eax
 84167f9:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84167fd:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8416800:	89 44 24 38          	mov    %eax,0x38(%esp)
 8416804:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8416807:	89 44 24 34          	mov    %eax,0x34(%esp)
 841680b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841680e:	89 44 24 30          	mov    %eax,0x30(%esp)
 8416812:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8416815:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8416819:	8b 45 bc             	mov    -0x44(%ebp),%eax
 841681c:	89 44 24 28          	mov    %eax,0x28(%esp)
 8416820:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8416823:	89 44 24 24          	mov    %eax,0x24(%esp)
 8416827:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841682a:	89 44 24 20          	mov    %eax,0x20(%esp)
 841682e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8416832:	89 74 24 18          	mov    %esi,0x18(%esp)
 8416836:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841683a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841683e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8416842:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8416848:	89 44 24 08          	mov    %eax,0x8(%esp)
 841684c:	c7 44 24 04 b4 90 c4 	movl   $0x8c490b4,0x4(%esp)
 8416853:	08 
 8416854:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416857:	89 04 24             	mov    %eax,(%esp)
 841685a:	e8 61 d9 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841685f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416866:	00 
 8416867:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841686a:	89 04 24             	mov    %eax,(%esp)
 841686d:	e8 b4 da fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8416872:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8416875:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8416879:	83 f0 01             	xor    $0x1,%eax
 841687c:	84 c0                	test   %al,%al
 841687e:	74 07                	je     8416887 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC+0x495>
 8416880:	b8 00 00 00 00       	mov    $0x0,%eax
 8416885:	eb 71                	jmp    84168f8 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC+0x506>
 8416887:	8b 45 0c             	mov    0xc(%ebp),%eax
 841688a:	8b 80 ea 00 00 00    	mov    0xea(%eax),%eax
 8416890:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8416893:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416896:	8b 80 ee 00 00 00    	mov    0xee(%eax),%eax
 841689c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 841689f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84168a2:	8b 80 f6 00 00 00    	mov    0xf6(%eax),%eax
 84168a8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84168ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84168ae:	0f b6 80 fa 00 00 00 	movzbl 0xfa(%eax),%eax
 84168b5:	88 45 dc             	mov    %al,-0x24(%ebp)
 84168b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84168bb:	8b 80 f2 00 00 00    	mov    0xf2(%eax),%eax
 84168c1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84168c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84168c7:	8b 90 e6 00 00 00    	mov    0xe6(%eax),%edx
 84168cd:	a1 08 f7 41 09       	mov    0x941f708,%eax
 84168d2:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 84168d5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84168d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84168dd:	89 04 24             	mov    %eax,(%esp)
 84168e0:	e8 21 c0 1e 00       	call   8602906 <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE>
 84168e5:	83 f0 01             	xor    $0x1,%eax
 84168e8:	84 c0                	test   %al,%al
 84168ea:	74 07                	je     84168f3 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC+0x501>
 84168ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84168f1:	eb 05                	jmp    84168f8 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC+0x506>
 84168f3:	b8 01 00 00 00       	mov    $0x1,%eax
 84168f8:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 84168fe:	5b                   	pop    %ebx
 84168ff:	5e                   	pop    %esi
 8416900:	5f                   	pop    %edi
 8416901:	5d                   	pop    %ebp
 8416902:	c3                   	ret
 8416903:	90                   	nop

```

```c
// DB_SaveCharac::_SaveCharacStat @ 0x84163f2

/* DB_SaveCharac::_SaveCharacStat(SIG_SAVE_CHARAC*) */

undefined4 __thiscall DB_SaveCharac::_SaveCharacStat(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  SIG_SAVE_CHARAC SVar1;
  SIG_SAVE_CHARAC SVar2;
  SIG_SAVE_CHARAC SVar3;
  SIG_SAVE_CHARAC SVar4;
  SIG_SAVE_CHARAC SVar5;
  SIG_SAVE_CHARAC SVar6;
  SIG_SAVE_CHARAC SVar7;
  SIG_SAVE_CHARAC SVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  SIG_SAVE_CHARAC local_28;
  char local_21;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar20 = *(undefined4 *)param_1;
  uVar13 = *(undefined4 *)(param_1 + 0xd6);
  SVar1 = param_1[0xd5];
  SVar2 = param_1[0x102];
  SVar3 = param_1[0x101];
  SVar4 = param_1[0x100];
  SVar5 = param_1[0xff];
  uVar14 = *(undefined4 *)(param_1 + 0xd1);
  sVar9 = *(short *)(param_1 + 0xcf);
  SVar6 = param_1[0xce];
  SVar7 = param_1[0xfe];
  sVar10 = *(short *)(param_1 + 0xfb);
  uVar11 = *(ushort *)(param_1 + 0xcc);
  uVar15 = *(undefined4 *)(param_1 + 0xe2);
  uVar16 = *(undefined4 *)(param_1 + 200);
  uVar17 = *(undefined4 *)(param_1 + 0xc4);
  SVar8 = param_1[0xc3];
  sVar12 = *(short *)(param_1 + 0xc1);
  uVar19 = MySQL::blob_to_str(local_20,0,param_1 + 0x6e,0x10);
  MySQL::set_query(local_20,
                   "upDate charac_stat set village=%d,exp=%d,HP=%d,fatigue=%d,premium_fatigue=%d,last_play_time=from_unixtime(%d),used_fatigue=%d,tutorial_flag=%d,trade_gold_total=%d,trade_gold_total_billion=trade_gold_total_billion+%d,trade_gold_daily=%d,help_abuse_ratio=%d,help_abuse_exp=%d,chaos_point=%d,chaos_exp=%d,chaos_mode_count=%d,chaos_kill_count=%d,chaos_die_count=%d,chaos_die_time=from_unixtime(%d),assault_count=%d,luck_point=%d,dungeon_play_count=%d,chaos_kill_time=from_unixtime(%d),expert_job_exp=%d,open_flag=%d,fatigue_battery_charging=%d,escalade_tutorial_flag=\'%s\',power_war_point=%d,village_prev=%d,power_war_assault_count=%d,power_war_assault_victory_count=%d,last_play_time_powerwar=from_unixtime(%d),fatigue_grownup_buff=%d, emotion=%d, add_slot_flag=%d, member_dungeon_flag=%d, member_bonus_fatigue=%d, last_play_dungeon_index=%u, add_equipslot_flag=%d, channel_equipslot_switch=%d, expand_equipslot_switch=%d, visible_flags=%d, growth_power_reward=%d, chaos_respon_time=from_unixtime(%d) where charac_no = %u"
                   ,(int)(char)param_1[0x62],*(undefined4 *)(param_1 + 0x5e),
                   (uint)(byte)param_1[0x67],(int)*(short *)(param_1 + 99),
                   (uint)*(ushort *)(param_1 + 0x65),*(undefined4 *)(param_1 + 0xde),
                   (uint)*(ushort *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6a),
                   *(undefined4 *)(param_1 + 0x7e),*(undefined4 *)(param_1 + 0x82),
                   *(undefined4 *)(param_1 + 0x86),*(undefined4 *)(param_1 + 0x8a),
                   *(undefined4 *)(param_1 + 0x8e),*(undefined4 *)(param_1 + 0x92),
                   *(undefined4 *)(param_1 + 0x96),*(undefined4 *)(param_1 + 0x9a),
                   *(undefined4 *)(param_1 + 0x9e),*(undefined4 *)(param_1 + 0xa2),
                   *(undefined4 *)(param_1 + 0xa6),*(undefined4 *)(param_1 + 0xab),
                   *(undefined4 *)(param_1 + 0xb3),*(undefined4 *)(param_1 + 0xb7),
                   *(undefined4 *)(param_1 + 0xaf),*(undefined4 *)(param_1 + 0xbb),
                   (int)(char)param_1[0xaa],(int)*(short *)(param_1 + 0xbf),uVar19,(int)sVar12,
                   (int)(char)SVar8,uVar17,uVar16,uVar15,(uint)uVar11,(int)sVar10,(int)(char)SVar7,
                   (uint)(byte)SVar6,(int)sVar9,uVar14,(int)(char)SVar5,(int)(char)SVar4,
                   (int)(char)SVar3,(int)(char)SVar2,(uint)(byte)SVar1,uVar13,uVar20);
  local_21 = MySQL::exec(local_20,true);
  if (local_21 == '\x01') {
    local_38 = *(undefined4 *)(param_1 + 0xea);
    local_34 = *(undefined4 *)(param_1 + 0xee);
    local_2c = *(undefined4 *)(param_1 + 0xf6);
    local_28 = param_1[0xfa];
    local_30 = *(undefined4 *)(param_1 + 0xf2);
    cVar18 = WongWork::CSimpleSSO::updateSSOExpireTime
                       (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xe6),
                        (stUpdateSSOExpireTime_t *)&local_38);
    if (cVar18 == '\x01') {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
  }
  else {
    uVar20 = 0;
  }
  return uVar20;
}

```

---

## _SaveContractOfCubePremiumInfo

```asm
// === 08415dbe DB_SaveCharac::_SaveContractOfCubePremiumInfo  [0x08415dbe-0x8415ed9] ===
 8415dbe:	55                   	push   %ebp
 8415dbf:	89 e5                	mov    %esp,%ebp
 8415dc1:	83 ec 38             	sub    $0x38,%esp
 8415dc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415dc7:	0f b6 80 0a 01 00 00 	movzbl 0x10a(%eax),%eax
 8415dce:	83 f0 01             	xor    $0x1,%eax
 8415dd1:	84 c0                	test   %al,%al
 8415dd3:	74 0a                	je     8415ddf <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x21>
 8415dd5:	b8 01 00 00 00       	mov    $0x1,%eax
 8415dda:	e9 f9 00 00 00       	jmp    8415ed8 <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x11a>
 8415ddf:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8415de4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8415deb:	00 
 8415dec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8415df3:	00 
 8415df4:	89 04 24             	mov    %eax,(%esp)
 8415df7:	e8 42 f4 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8415dfc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8415dff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e02:	8b 08                	mov    (%eax),%ecx
 8415e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e07:	0f b6 80 0c 01 00 00 	movzbl 0x10c(%eax),%eax
 8415e0e:	0f b6 d0             	movzbl %al,%edx
 8415e11:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e14:	0f b6 80 0b 01 00 00 	movzbl 0x10b(%eax),%eax
 8415e1b:	0f b6 c0             	movzbl %al,%eax
 8415e1e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8415e22:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8415e26:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415e2a:	c7 44 24 04 d4 8c c4 	movl   $0x8c48cd4,0x4(%esp)
 8415e31:	08 
 8415e32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415e35:	89 04 24             	mov    %eax,(%esp)
 8415e38:	e8 83 e3 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8415e3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415e44:	00 
 8415e45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415e48:	89 04 24             	mov    %eax,(%esp)
 8415e4b:	e8 d6 e4 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415e50:	83 f0 01             	xor    $0x1,%eax
 8415e53:	84 c0                	test   %al,%al
 8415e55:	74 07                	je     8415e5e <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0xa0>
 8415e57:	b8 00 00 00 00       	mov    $0x0,%eax
 8415e5c:	eb 7a                	jmp    8415ed8 <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x11a>
 8415e5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415e61:	89 04 24             	mov    %eax,(%esp)
 8415e64:	e8 a7 e4 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8415e69:	09 d0                	or     %edx,%eax
 8415e6b:	85 c0                	test   %eax,%eax
 8415e6d:	0f 94 c0             	sete   %al
 8415e70:	84 c0                	test   %al,%al
 8415e72:	74 5f                	je     8415ed3 <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x115>
 8415e74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e77:	0f b6 80 0c 01 00 00 	movzbl 0x10c(%eax),%eax
 8415e7e:	0f b6 c8             	movzbl %al,%ecx
 8415e81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e84:	0f b6 80 0b 01 00 00 	movzbl 0x10b(%eax),%eax
 8415e8b:	0f b6 d0             	movzbl %al,%edx
 8415e8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415e91:	8b 00                	mov    (%eax),%eax
 8415e93:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8415e97:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8415e9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415e9f:	c7 44 24 04 1c 8d c4 	movl   $0x8c48d1c,0x4(%esp)
 8415ea6:	08 
 8415ea7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415eaa:	89 04 24             	mov    %eax,(%esp)
 8415ead:	e8 0e e3 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8415eb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415eb9:	00 
 8415eba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415ebd:	89 04 24             	mov    %eax,(%esp)
 8415ec0:	e8 61 e4 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415ec5:	83 f0 01             	xor    $0x1,%eax
 8415ec8:	84 c0                	test   %al,%al
 8415eca:	74 07                	je     8415ed3 <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x115>
 8415ecc:	b8 00 00 00 00       	mov    $0x0,%eax
 8415ed1:	eb 05                	jmp    8415ed8 <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC+0x11a>
 8415ed3:	b8 01 00 00 00       	mov    $0x1,%eax
 8415ed8:	c9                   	leave
 8415ed9:	c3                   	ret

```

```c
// DB_SaveCharac::_SaveContractOfCubePremiumInfo @ 0x8415dbe

/* DB_SaveCharac::_SaveContractOfCubePremiumInfo(SIG_SAVE_CHARAC const&) */

undefined4 __thiscall
DB_SaveCharac::_SaveContractOfCubePremiumInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  longlong lVar3;
  
  if (param_1[0x10a] == (SIG_SAVE_CHARAC)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"upDate cube_premium set selected=%u, cube_type=%u where charac_no=%u",
                     (uint)(byte)param_1[0x10b],(uint)(byte)param_1[0x10c],*(undefined4 *)param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        MySQL::set_query(this_00,
                         "inSert into cube_premium(charac_no, selected, cube_type) values(%u,%u,%u)"
                         ,*(undefined4 *)param_1,(uint)(byte)param_1[0x10b],
                         (uint)(byte)param_1[0x10c]);
        cVar1 = MySQL::exec(this_00,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 08415c98 DB_SaveCharac::dispatch  [0x08415c98-0x8415dbd] ===
 8415c98:	55                   	push   %ebp
 8415c99:	89 e5                	mov    %esp,%ebp
 8415c9b:	83 ec 38             	sub    $0x38,%esp
 8415c9e:	8b 45 14             	mov    0x14(%ebp),%eax
 8415ca1:	89 04 24             	mov    %eax,(%esp)
 8415ca4:	e8 8b ad 03 00       	call   8450a34 <_ZN6Stream12GetOutBufferI15SIG_SAVE_CHARACEEPT_v>
 8415ca9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8415cac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8415cb0:	75 0a                	jne    8415cbc <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x24>
 8415cb2:	b8 00 00 00 00       	mov    $0x0,%eax
 8415cb7:	e9 00 01 00 00       	jmp    8415dbc <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x124>
 8415cbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415cbf:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8415cc3:	84 c0                	test   %al,%al
 8415cc5:	75 0b                	jne    8415cd2 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x3a>
 8415cc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415cca:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8415cce:	84 c0                	test   %al,%al
 8415cd0:	74 23                	je     8415cf5 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x5d>
 8415cd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415cd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8415cd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8415cdc:	89 04 24             	mov    %eax,(%esp)
 8415cdf:	e8 f6 01 00 00       	call   8415eda <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC>
 8415ce4:	83 f0 01             	xor    $0x1,%eax
 8415ce7:	84 c0                	test   %al,%al
 8415ce9:	74 0a                	je     8415cf5 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x5d>
 8415ceb:	b8 00 00 00 00       	mov    $0x0,%eax
 8415cf0:	e9 c7 00 00 00       	jmp    8415dbc <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x124>
 8415cf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415cf8:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 8415cfc:	84 c0                	test   %al,%al
 8415cfe:	74 6c                	je     8415d6c <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0xd4>
 8415d00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8415d07:	8b 45 08             	mov    0x8(%ebp),%eax
 8415d0a:	89 04 24             	mov    %eax,(%esp)
 8415d0d:	e8 fc 0b 00 00       	call   841690e <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC>
 8415d12:	83 f0 01             	xor    $0x1,%eax
 8415d15:	84 c0                	test   %al,%al
 8415d17:	74 53                	je     8415d6c <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0xd4>
 8415d19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d1c:	0f b6 80 03 01 00 00 	movzbl 0x103(%eax),%eax
 8415d23:	0f b6 c8             	movzbl %al,%ecx
 8415d26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d29:	8b 90 04 01 00 00    	mov    0x104(%eax),%edx
 8415d2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d32:	8b 00                	mov    (%eax),%eax
 8415d34:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8415d38:	89 54 24 18          	mov    %edx,0x18(%esp)
 8415d3c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8415d40:	c7 44 24 10 84 8c c4 	movl   $0x8c48c84,0x10(%esp)
 8415d47:	08 
 8415d48:	c7 44 24 0c 7d 3f 00 	movl   $0x3f7d,0xc(%esp)
 8415d4f:	00 
 8415d50:	c7 44 24 08 60 cd c5 	movl   $0x8c5cd60,0x8(%esp)
 8415d57:	08 
 8415d58:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8415d5f:	08 
 8415d60:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8415d67:	e8 9e de 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8415d6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d6f:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8415d73:	84 c0                	test   %al,%al
 8415d75:	74 20                	je     8415d97 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0xff>
 8415d77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8415d7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8415d81:	89 04 24             	mov    %eax,(%esp)
 8415d84:	e8 69 06 00 00       	call   84163f2 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC>
 8415d89:	83 f0 01             	xor    $0x1,%eax
 8415d8c:	84 c0                	test   %al,%al
 8415d8e:	74 07                	je     8415d97 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0xff>
 8415d90:	b8 00 00 00 00       	mov    $0x0,%eax
 8415d95:	eb 25                	jmp    8415dbc <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x124>
 8415d97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415d9a:	0f b6 80 0a 01 00 00 	movzbl 0x10a(%eax),%eax
 8415da1:	84 c0                	test   %al,%al
 8415da3:	74 12                	je     8415db7 <_ZN13DB_SaveCharac8dispatchEiiP6Stream+0x11f>
 8415da5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415da8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8415dac:	8b 45 08             	mov    0x8(%ebp),%eax
 8415daf:	89 04 24             	mov    %eax,(%esp)
 8415db2:	e8 07 00 00 00       	call   8415dbe <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC>
 8415db7:	b8 01 00 00 00       	mov    $0x1,%eax
 8415dbc:	c9                   	leave
 8415dbd:	c3                   	ret

```

```c
// DB_SaveCharac::dispatch @ 0x8415c98

/* DB_SaveCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveCharac::dispatch(DB_SaveCharac *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_CHARAC *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CHARAC>(param_3);
  if (pSVar2 == (SIG_SAVE_CHARAC *)0x0) {
    uVar3 = 0;
  }
  else {
    if (((pSVar2[4] != (SIG_SAVE_CHARAC)0x0) || (pSVar2[6] != (SIG_SAVE_CHARAC)0x0)) &&
       (cVar1 = _SaveCharacInfo(this,pSVar2), cVar1 != '\x01')) {
      return 0;
    }
    if ((pSVar2[7] != (SIG_SAVE_CHARAC)0x0) &&
       (cVar1 = _SaveCharacManageInfo(this,pSVar2), cVar1 != '\x01')) {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SaveCharac::dispatch(int, int, Stream*)",0x3f7d,
                 "[SAVE CHARAC MANAGE INFO ERROR] characNo(%u), tagCharacNo(%u), skillIndex(%u)",
                 *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 0x104),(uint)(byte)pSVar2[0x103]);
    }
    if ((pSVar2[5] != (SIG_SAVE_CHARAC)0x0) &&
       (cVar1 = _SaveCharacStat(this,pSVar2), cVar1 != '\x01')) {
      return 0;
    }
    if (pSVar2[0x10a] != (SIG_SAVE_CHARAC)0x0) {
      _SaveContractOfCubePremiumInfo(this,pSVar2);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## ~DB_SaveCharac

```asm
// === 08415c4a DB_SaveCharac::~DB_SaveCharac  [0x08415c4a-0x8415c79] ===
 8415c4a:	55                   	push   %ebp
 8415c4b:	89 e5                	mov    %esp,%ebp
 8415c4d:	83 ec 18             	sub    $0x18,%esp
 8415c50:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c53:	c7 00 f8 fa c5 08    	movl   $0x8c5faf8,(%eax)
 8415c59:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c5c:	89 04 24             	mov    %eax,(%esp)
 8415c5f:	e8 14 c7 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8415c64:	b8 00 00 00 00       	mov    $0x0,%eax
 8415c69:	84 c0                	test   %al,%al
 8415c6b:	74 0b                	je     8415c78 <_ZN13DB_SaveCharacD1Ev+0x2e>
 8415c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c70:	89 04 24             	mov    %eax,(%esp)
 8415c73:	e8 78 e8 30 00       	call   87244f0 <_ZdlPv>
 8415c78:	c9                   	leave
 8415c79:	c3                   	ret

```

```c
// DB_SaveCharac::~DB_SaveCharac @ 0x8415c4a

/* WARNING: Removing unreachable block (ram,0x08415c6d) */
/* DB_SaveCharac::~DB_SaveCharac() */

void __thiscall DB_SaveCharac::~DB_SaveCharac(DB_SaveCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5faf8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_SaveCharac_08415c7a

```asm
// === 08415c7a DB_SaveCharac::~DB_SaveCharac  [0x08415c7a-0x8415c97] ===
 8415c7a:	55                   	push   %ebp
 8415c7b:	89 e5                	mov    %esp,%ebp
 8415c7d:	83 ec 18             	sub    $0x18,%esp
 8415c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c83:	89 04 24             	mov    %eax,(%esp)
 8415c86:	e8 bf ff ff ff       	call   8415c4a <_ZN13DB_SaveCharacD1Ev>
 8415c8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8415c8e:	89 04 24             	mov    %eax,(%esp)
 8415c91:	e8 5a e8 30 00       	call   87244f0 <_ZdlPv>
 8415c96:	c9                   	leave
 8415c97:	c3                   	ret

```

```c
// DB_SaveCharac::~DB_SaveCharac @ 0x8415c7a

/* DB_SaveCharac::~DB_SaveCharac() */

void __thiscall DB_SaveCharac::~DB_SaveCharac(DB_SaveCharac *this)

{
  ~DB_SaveCharac(this);
  operator_delete(this);
  return;
}

```

