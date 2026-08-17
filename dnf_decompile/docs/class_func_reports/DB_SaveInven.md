# DB_SaveInven

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DB_SaveInven

```asm
// === 08416a42 DB_SaveInven::DB_SaveInven  [0x08416a42-0x8416a5d] ===
 8416a42:	55                   	push   %ebp
 8416a43:	89 e5                	mov    %esp,%ebp
 8416a45:	83 ec 18             	sub    $0x18,%esp
 8416a48:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a4b:	89 04 24             	mov    %eax,(%esp)
 8416a4e:	e8 53 6d 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8416a53:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a56:	c7 00 e0 fa c5 08    	movl   $0x8c5fae0,(%eax)
 8416a5c:	c9                   	leave
 8416a5d:	c3                   	ret

```

```c
// DB_SaveInven::DB_SaveInven @ 0x8416a42

/* DB_SaveInven::DB_SaveInven() */

void __thiscall DB_SaveInven::DB_SaveInven(DB_SaveInven *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fae0;
  return;
}

```

---

## SaveInven

```asm
// === 08416cfa DB_SaveInven::SaveInven  [0x08416cfa-0x8417203] ===
 8416cfa:	55                   	push   %ebp
 8416cfb:	89 e5                	mov    %esp,%ebp
 8416cfd:	57                   	push   %edi
 8416cfe:	56                   	push   %esi
 8416cff:	53                   	push   %ebx
 8416d00:	81 ec 6c 68 00 00    	sub    $0x686c,%esp
 8416d06:	8d 95 46 fc ff ff    	lea    -0x3ba(%ebp),%edx
 8416d0c:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 8416d11:	b8 00 00 00 00       	mov    $0x0,%eax
 8416d16:	89 d1                	mov    %edx,%ecx
 8416d18:	83 e1 02             	and    $0x2,%ecx
 8416d1b:	85 c9                	test   %ecx,%ecx
 8416d1d:	74 09                	je     8416d28 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x2e>
 8416d1f:	66 89 02             	mov    %ax,(%edx)
 8416d22:	83 c2 02             	add    $0x2,%edx
 8416d25:	83 eb 02             	sub    $0x2,%ebx
 8416d28:	89 d9                	mov    %ebx,%ecx
 8416d2a:	c1 e9 02             	shr    $0x2,%ecx
 8416d2d:	89 d7                	mov    %edx,%edi
 8416d2f:	f3 ab                	rep stos %eax,%es:(%edi)
 8416d31:	89 fa                	mov    %edi,%edx
 8416d33:	89 d9                	mov    %ebx,%ecx
 8416d35:	83 e1 02             	and    $0x2,%ecx
 8416d38:	85 c9                	test   %ecx,%ecx
 8416d3a:	74 06                	je     8416d42 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x48>
 8416d3c:	66 89 02             	mov    %ax,(%edx)
 8416d3f:	83 c2 02             	add    $0x2,%edx
 8416d42:	89 d9                	mov    %ebx,%ecx
 8416d44:	83 e1 01             	and    $0x1,%ecx
 8416d47:	85 c9                	test   %ecx,%ecx
 8416d49:	74 05                	je     8416d50 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x56>
 8416d4b:	88 02                	mov    %al,(%edx)
 8416d4d:	83 c2 01             	add    $0x1,%edx
 8416d50:	8d 85 d2 97 ff ff    	lea    -0x682e(%ebp),%eax
 8416d56:	ba 3e 47 00 00       	mov    $0x473e,%edx
 8416d5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8416d5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8416d66:	00 
 8416d67:	89 04 24             	mov    %eax,(%esp)
 8416d6a:	e8 51 6f c6 ff       	call   807dcc0 <memset@plt>
 8416d6f:	8d 95 10 df ff ff    	lea    -0x20f0(%ebp),%edx
 8416d75:	b8 00 00 00 00       	mov    $0x0,%eax
 8416d7a:	b9 4d 07 00 00       	mov    $0x74d,%ecx
 8416d7f:	89 d7                	mov    %edx,%edi
 8416d81:	f3 ab                	rep stos %eax,%es:(%edi)
 8416d83:	89 fa                	mov    %edi,%edx
 8416d85:	66 89 02             	mov    %ax,(%edx)
 8416d88:	83 c2 02             	add    $0x2,%edx
 8416d8b:	c7 45 c8 7a 03 00 00 	movl   $0x37a,-0x38(%ebp)
 8416d92:	c7 45 c4 3e 47 00 00 	movl   $0x473e,-0x3c(%ebp)
 8416d99:	c7 45 c0 36 1d 00 00 	movl   $0x1d36,-0x40(%ebp)
 8416da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416da3:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8416da7:	84 c0                	test   %al,%al
 8416da9:	74 0f                	je     8416dba <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0xc0>
 8416dab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416dae:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8416db2:	3c 02                	cmp    $0x2,%al
 8416db4:	0f 85 9b 01 00 00    	jne    8416f55 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x25b>
 8416dba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416dbd:	83 c0 19             	add    $0x19,%eax
 8416dc0:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 8416dc7:	00 
 8416dc8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416dcc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8416dcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416dd3:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 8416dd9:	89 04 24             	mov    %eax,(%esp)
 8416ddc:	e8 3e b2 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8416de1:	83 f0 01             	xor    $0x1,%eax
 8416de4:	84 c0                	test   %al,%al
 8416de6:	74 2c                	je     8416e14 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x11a>
 8416de8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8416def:	e8 0c ea 30 00       	call   8725800 <__cxa_allocate_exception>
 8416df4:	89 c2                	mov    %eax,%edx
 8416df6:	c7 02 27 44 00 00    	movl   $0x4427,(%edx)
 8416dfc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416e03:	00 
 8416e04:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 8416e0b:	09 
 8416e0c:	89 04 24             	mov    %eax,(%esp)
 8416e0f:	e8 3c de 30 00       	call   8724c50 <__cxa_throw>
 8416e14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416e17:	05 57 05 00 00       	add    $0x557,%eax
 8416e1c:	c7 44 24 0c 55 3b 00 	movl   $0x3b55,0xc(%esp)
 8416e23:	00 
 8416e24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416e28:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8416e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416e2f:	8d 85 d2 97 ff ff    	lea    -0x682e(%ebp),%eax
 8416e35:	89 04 24             	mov    %eax,(%esp)
 8416e38:	e8 e2 b1 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8416e3d:	83 f0 01             	xor    $0x1,%eax
 8416e40:	84 c0                	test   %al,%al
 8416e42:	74 2c                	je     8416e70 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x176>
 8416e44:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8416e4b:	e8 b0 e9 30 00       	call   8725800 <__cxa_allocate_exception>
 8416e50:	89 c2                	mov    %eax,%edx
 8416e52:	c7 02 29 44 00 00    	movl   $0x4429,(%edx)
 8416e58:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416e5f:	00 
 8416e60:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 8416e67:	09 
 8416e68:	89 04 24             	mov    %eax,(%esp)
 8416e6b:	e8 e0 dd 30 00       	call   8724c50 <__cxa_throw>
 8416e70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416e73:	05 0b 71 00 00       	add    $0x710b,%eax
 8416e78:	c7 44 24 0c 4e 18 00 	movl   $0x184e,0xc(%esp)
 8416e7f:	00 
 8416e80:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416e84:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8416e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416e8b:	8d 85 10 df ff ff    	lea    -0x20f0(%ebp),%eax
 8416e91:	89 04 24             	mov    %eax,(%esp)
 8416e94:	e8 86 b1 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8416e99:	83 f0 01             	xor    $0x1,%eax
 8416e9c:	84 c0                	test   %al,%al
 8416e9e:	0f 84 b1 00 00 00    	je     8416f55 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x25b>
 8416ea4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8416eab:	e8 50 e9 30 00       	call   8725800 <__cxa_allocate_exception>
 8416eb0:	89 c2                	mov    %eax,%edx
 8416eb2:	c7 02 30 44 00 00    	movl   $0x4430,(%edx)
 8416eb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416ebf:	00 
 8416ec0:	c7 44 24 04 b8 b1 36 	movl   $0x936b1b8,0x4(%esp)
 8416ec7:	09 
 8416ec8:	89 04 24             	mov    %eax,(%esp)
 8416ecb:	e8 80 dd 30 00       	call   8724c50 <__cxa_throw>
 8416ed0:	83 fa 01             	cmp    $0x1,%edx
 8416ed3:	74 08                	je     8416edd <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x1e3>
 8416ed5:	89 04 24             	mov    %eax,(%esp)
 8416ed8:	e8 73 c8 6c 00       	call   8ae3750 <_Unwind_Resume>
 8416edd:	89 04 24             	mov    %eax,(%esp)
 8416ee0:	e8 fb ed 30 00       	call   8725ce0 <__cxa_begin_catch>
 8416ee5:	8b 00                	mov    (%eax),%eax
 8416ee7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8416eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416eed:	8b 58 04             	mov    0x4(%eax),%ebx
 8416ef0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8416ef7:	00 
 8416ef8:	c7 44 24 08 38 44 00 	movl   $0x4438,0x8(%esp)
 8416eff:	00 
 8416f00:	c7 44 24 04 20 cd c5 	movl   $0x8c5cd20,0x4(%esp)
 8416f07:	08 
 8416f08:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8416f0b:	89 04 24             	mov    %eax,(%esp)
 8416f0e:	e8 05 88 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8416f13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416f16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416f1a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8416f1e:	c7 44 24 04 f0 95 c4 	movl   $0x8c495f0,0x4(%esp)
 8416f25:	08 
 8416f26:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8416f29:	89 04 24             	mov    %eax,(%esp)
 8416f2c:	e8 57 88 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8416f31:	bb 00 00 00 00       	mov    $0x0,%ebx
 8416f36:	e8 f5 ec 30 00       	call   8725c30 <__cxa_end_catch>
 8416f3b:	e9 b7 02 00 00       	jmp    84171f7 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x4fd>
 8416f40:	89 d3                	mov    %edx,%ebx
 8416f42:	89 c6                	mov    %eax,%esi
 8416f44:	e8 e7 ec 30 00       	call   8725c30 <__cxa_end_catch>
 8416f49:	89 f0                	mov    %esi,%eax
 8416f4b:	89 da                	mov    %ebx,%edx
 8416f4d:	89 04 24             	mov    %eax,(%esp)
 8416f50:	e8 fb c7 6c 00       	call   8ae3750 <_Unwind_Resume>
 8416f55:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8416f5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416f61:	00 
 8416f62:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8416f69:	00 
 8416f6a:	89 04 24             	mov    %eax,(%esp)
 8416f6d:	e8 cc e2 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8416f72:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8416f75:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416f78:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8416f7c:	84 c0                	test   %al,%al
 8416f7e:	0f 85 e0 00 00 00    	jne    8417064 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x36a>
 8416f84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416f87:	8b 58 04             	mov    0x4(%eax),%ebx
 8416f8a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8416f8d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416f91:	8d 85 10 df ff ff    	lea    -0x20f0(%ebp),%eax
 8416f97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416f9b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8416fa2:	00 
 8416fa3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8416fa6:	89 04 24             	mov    %eax,(%esp)
 8416fa9:	e8 7c d5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416fae:	89 c7                	mov    %eax,%edi
 8416fb0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8416fb3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416fb7:	8d 85 d2 97 ff ff    	lea    -0x682e(%ebp),%eax
 8416fbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416fc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416fc8:	00 
 8416fc9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8416fcc:	89 04 24             	mov    %eax,(%esp)
 8416fcf:	e8 56 d5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416fd4:	89 c6                	mov    %eax,%esi
 8416fd6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8416fd9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416fdd:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 8416fe3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416fe7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8416fee:	00 
 8416fef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8416ff2:	89 04 24             	mov    %eax,(%esp)
 8416ff5:	e8 30 d5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416ffa:	89 c1                	mov    %eax,%ecx
 8416ffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416fff:	8b 40 15             	mov    0x15(%eax),%eax
 8417002:	89 85 c0 97 ff ff    	mov    %eax,-0x6840(%ebp)
 8417008:	8b 45 0c             	mov    0xc(%ebp),%eax
 841700b:	8b 40 11             	mov    0x11(%eax),%eax
 841700e:	89 85 c4 97 ff ff    	mov    %eax,-0x683c(%ebp)
 8417014:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417017:	8b 50 0d             	mov    0xd(%eax),%edx
 841701a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841701d:	8b 40 09             	mov    0x9(%eax),%eax
 8417020:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 8417024:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8417028:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 841702c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8417030:	8b 8d c0 97 ff ff    	mov    -0x6840(%ebp),%ecx
 8417036:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 841703a:	8b bd c4 97 ff ff    	mov    -0x683c(%ebp),%edi
 8417040:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8417044:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417048:	89 44 24 08          	mov    %eax,0x8(%esp)
 841704c:	c7 44 24 04 14 96 c4 	movl   $0x8c49614,0x4(%esp)
 8417053:	08 
 8417054:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417057:	89 04 24             	mov    %eax,(%esp)
 841705a:	e8 61 d1 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841705f:	e9 f8 00 00 00       	jmp    841715c <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x462>
 8417064:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417067:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 841706b:	3c 01                	cmp    $0x1,%al
 841706d:	75 4a                	jne    84170b9 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x3bf>
 841706f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417072:	8b 70 04             	mov    0x4(%eax),%esi
 8417075:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417078:	8b 58 15             	mov    0x15(%eax),%ebx
 841707b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841707e:	8b 48 11             	mov    0x11(%eax),%ecx
 8417081:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417084:	8b 50 0d             	mov    0xd(%eax),%edx
 8417087:	8b 45 0c             	mov    0xc(%ebp),%eax
 841708a:	8b 40 09             	mov    0x9(%eax),%eax
 841708d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8417091:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8417095:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8417099:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841709d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84170a1:	c7 44 24 04 94 96 c4 	movl   $0x8c49694,0x4(%esp)
 84170a8:	08 
 84170a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84170ac:	89 04 24             	mov    %eax,(%esp)
 84170af:	e8 0c d1 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84170b4:	e9 a3 00 00 00       	jmp    841715c <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x462>
 84170b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84170bc:	8b 78 04             	mov    0x4(%eax),%edi
 84170bf:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84170c2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84170c6:	8d 85 10 df ff ff    	lea    -0x20f0(%ebp),%eax
 84170cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84170d0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84170d7:	00 
 84170d8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84170db:	89 04 24             	mov    %eax,(%esp)
 84170de:	e8 47 d4 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84170e3:	89 c6                	mov    %eax,%esi
 84170e5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84170e8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84170ec:	8d 85 d2 97 ff ff    	lea    -0x682e(%ebp),%eax
 84170f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84170f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84170fd:	00 
 84170fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417101:	89 04 24             	mov    %eax,(%esp)
 8417104:	e8 21 d4 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8417109:	89 c3                	mov    %eax,%ebx
 841710b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841710e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8417112:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 8417118:	89 44 24 08          	mov    %eax,0x8(%esp)
 841711c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8417123:	00 
 8417124:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417127:	89 04 24             	mov    %eax,(%esp)
 841712a:	e8 fb d3 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 841712f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417132:	8b 52 09             	mov    0x9(%edx),%edx
 8417135:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8417139:	89 74 24 14          	mov    %esi,0x14(%esp)
 841713d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8417141:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8417145:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417149:	c7 44 24 04 e8 96 c4 	movl   $0x8c496e8,0x4(%esp)
 8417150:	08 
 8417151:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417154:	89 04 24             	mov    %eax,(%esp)
 8417157:	e8 64 d0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841715c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8417163:	00 
 8417164:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8417167:	89 04 24             	mov    %eax,(%esp)
 841716a:	e8 b7 d1 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841716f:	88 45 df             	mov    %al,-0x21(%ebp)
 8417172:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8417176:	83 f0 01             	xor    $0x1,%eax
 8417179:	84 c0                	test   %al,%al
 841717b:	74 07                	je     8417184 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x48a>
 841717d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8417182:	eb 73                	jmp    84171f7 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x4fd>
 8417184:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417187:	8b b0 95 ad 00 00    	mov    0xad95(%eax),%esi
 841718d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417190:	8b 98 95 ad 00 00    	mov    0xad95(%eax),%ebx
 8417196:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417199:	8b 00                	mov    (%eax),%eax
 841719b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84171a2:	00 
 84171a3:	89 04 24             	mov    %eax,(%esp)
 84171a6:	e8 a0 1e cf ff       	call   810904b <_Z14NumberToStringji>
 84171ab:	89 74 24 10          	mov    %esi,0x10(%esp)
 84171af:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84171b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84171b7:	c7 44 24 04 48 97 c4 	movl   $0x8c49748,0x4(%esp)
 84171be:	08 
 84171bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84171c2:	89 04 24             	mov    %eax,(%esp)
 84171c5:	e8 f6 cf fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84171ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84171d1:	00 
 84171d2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84171d5:	89 04 24             	mov    %eax,(%esp)
 84171d8:	e8 49 d1 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84171dd:	88 45 df             	mov    %al,-0x21(%ebp)
 84171e0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84171e4:	83 f0 01             	xor    $0x1,%eax
 84171e7:	84 c0                	test   %al,%al
 84171e9:	74 07                	je     84171f2 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x4f8>
 84171eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84171f0:	eb 05                	jmp    84171f7 <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY+0x4fd>
 84171f2:	bb 01 00 00 00       	mov    $0x1,%ebx
 84171f7:	89 d8                	mov    %ebx,%eax
 84171f9:	81 c4 6c 68 00 00    	add    $0x686c,%esp
 84171ff:	5b                   	pop    %ebx
 8417200:	5e                   	pop    %esi
 8417201:	5f                   	pop    %edi
 8417202:	5d                   	pop    %ebp
 8417203:	c3                   	ret

```

```c
// DB_SaveInven::SaveInven @ 0x8416cfa

/* WARNING: Removing unreachable block (ram,0x08416d4b) */
/* DB_SaveInven::SaveInven(SIG_SAVE_INVENTORY*) */

undefined4 __thiscall DB_SaveInven::SaveInven(DB_SaveInven *this,SIG_SAVE_INVENTORY *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  byte bVar12;
  char local_6832 [18238];
  char local_20f4 [7478];
  char local_3be [890];
  uint local_44;
  uint local_40;
  uint local_3c [5];
  char local_25;
  MySQL *local_24;
  
  bVar12 = 0;
  pcVar8 = local_3be;
  uVar9 = 0x37a;
  bVar11 = ((uint)pcVar8 & 2) != 0;
  if (bVar11) {
    local_3be[0] = '\0';
    local_3be[1] = '\0';
    pcVar8 = local_3be + 2;
    uVar9 = 0x378;
  }
  for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  if (!bVar11) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
  }
  memset(local_6832,0,0x473e);
  pcVar8 = local_20f4;
  for (iVar7 = 0x74d; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  local_3c[0] = 0x37a;
  local_40 = 0x473e;
  local_44 = 0x1d36;
  if ((param_1[8] == (SIG_SAVE_INVENTORY)0x0) || (param_1[8] == (SIG_SAVE_INVENTORY)0x2)) {
                    /* try { // try from 08416ddc to 08416ecf has its CatchHandler @ 08416ed0 */
    cVar1 = compress_zip(local_3be,local_3c,(char *)(param_1 + 0x19),0x2dc);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4427;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
    cVar1 = compress_zip(local_6832,&local_40,(char *)(param_1 + 0x557),0x3b55);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4429;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
    cVar1 = compress_zip(local_20f4,&local_44,(char *)(param_1 + 0x710b),0x184e);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x4430;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
    }
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_1[8] == (SIG_SAVE_INVENTORY)0x0) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    uVar3 = MySQL::blob_to_str(local_24,2,local_20f4,local_44);
    uVar4 = MySQL::blob_to_str(local_24,1,local_6832,local_40);
    uVar5 = MySQL::blob_to_str(local_24,0,local_3be,local_3c[0]);
    uVar10 = *(undefined4 *)(param_1 + 0x15);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d,equipslot=\'%s\',inventory=\'%s\',creature=\'%s\' where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
                     *(undefined4 *)(param_1 + 0x11),uVar10,uVar5,uVar4,uVar3,uVar6);
  }
  else if (param_1[8] == (SIG_SAVE_INVENTORY)0x1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = *(undefined4 *)(param_1 + 0x15);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,coin=%d,pay_coin=%d,event_coin=%d  where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
                     *(undefined4 *)(param_1 + 0x11),uVar10,uVar5);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = MySQL::blob_to_str(local_24,2,local_20f4,local_44);
    uVar6 = MySQL::blob_to_str(local_24,1,local_6832,local_40);
    uVar3 = MySQL::blob_to_str(local_24,0,local_3be,local_3c[0]);
    MySQL::set_query(local_24,
                     "upDate inventory set money=%u,equipslot=\'%s\',inventory=\'%s\',creature=\'%s\' where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 9),uVar3,uVar6,uVar10,uVar5);
  }
  local_25 = MySQL::exec(local_24,true);
  if (local_25 == '\x01') {
    uVar6 = *(undefined4 *)(param_1 + 0xad95);
    uVar3 = *(undefined4 *)(param_1 + 0xad95);
    uVar4 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_24,
                     "inSert into member_avatar_coin (m_id , avatar_coin ) values (%s , %u) on duplicate key upDate avatar_coin = %u "
                     ,uVar4,uVar3,uVar6,uVar10,uVar5);
    cVar1 = MySQL::exec(local_24,true);
    if (cVar1 == '\x01') {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

```

---

## SendResult

```asm
// === 08417204 DB_SaveInven::SendResult  [0x08417204-0x841720d] ===
 8417204:	55                   	push   %ebp
 8417205:	89 e5                	mov    %esp,%ebp
 8417207:	b8 01 00 00 00       	mov    $0x1,%eax
 841720c:	5d                   	pop    %ebp
 841720d:	c3                   	ret

```

```c
// DB_SaveInven::SendResult @ 0x8417204

/* DB_SaveInven::SendResult(int, int, SIG_SAVE_INVENTORY*) */

undefined4 DB_SaveInven::SendResult(int param_1,int param_2,SIG_SAVE_INVENTORY *param_3)

{
  return 1;
}

```

---

## _saveCharacInvenExpand

```asm
// === 08416b38 DB_SaveInven::_saveCharacInvenExpand  [0x08416b38-0x8416cf9] ===
 8416b38:	55                   	push   %ebp
 8416b39:	89 e5                	mov    %esp,%ebp
 8416b3b:	57                   	push   %edi
 8416b3c:	56                   	push   %esi
 8416b3d:	53                   	push   %ebx
 8416b3e:	81 ec cc 3d 00 00    	sub    $0x3dcc,%esp
 8416b44:	8d 85 4b c2 ff ff    	lea    -0x3db5(%ebp),%eax
 8416b4a:	ba 82 2b 00 00       	mov    $0x2b82,%edx
 8416b4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8416b53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8416b5a:	00 
 8416b5b:	89 04 24             	mov    %eax,(%esp)
 8416b5e:	e8 5d 71 c6 ff       	call   807dcc0 <memset@plt>
 8416b63:	c7 45 e0 82 2b 00 00 	movl   $0x2b82,-0x20(%ebp)
 8416b6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416b6d:	05 5d 89 00 00       	add    $0x895d,%eax
 8416b72:	c7 44 24 0c 38 24 00 	movl   $0x2438,0xc(%esp)
 8416b79:	00 
 8416b7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416b7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8416b81:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416b85:	8d 85 4b c2 ff ff    	lea    -0x3db5(%ebp),%eax
 8416b8b:	89 04 24             	mov    %eax,(%esp)
 8416b8e:	e8 8c b4 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8416b93:	83 f0 01             	xor    $0x1,%eax
 8416b96:	84 c0                	test   %al,%al
 8416b98:	74 0a                	je     8416ba4 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x6c>
 8416b9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8416b9f:	e9 4b 01 00 00       	jmp    8416cef <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x1b7>
 8416ba4:	8d 95 cd ed ff ff    	lea    -0x1233(%ebp),%edx
 8416baa:	bb 0f 12 00 00       	mov    $0x120f,%ebx
 8416baf:	b8 00 00 00 00       	mov    $0x0,%eax
 8416bb4:	89 d1                	mov    %edx,%ecx
 8416bb6:	83 e1 01             	and    $0x1,%ecx
 8416bb9:	85 c9                	test   %ecx,%ecx
 8416bbb:	74 08                	je     8416bc5 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x8d>
 8416bbd:	88 02                	mov    %al,(%edx)
 8416bbf:	83 c2 01             	add    $0x1,%edx
 8416bc2:	83 eb 01             	sub    $0x1,%ebx
 8416bc5:	89 d1                	mov    %edx,%ecx
 8416bc7:	83 e1 02             	and    $0x2,%ecx
 8416bca:	85 c9                	test   %ecx,%ecx
 8416bcc:	74 09                	je     8416bd7 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x9f>
 8416bce:	66 89 02             	mov    %ax,(%edx)
 8416bd1:	83 c2 02             	add    $0x2,%edx
 8416bd4:	83 eb 02             	sub    $0x2,%ebx
 8416bd7:	89 d9                	mov    %ebx,%ecx
 8416bd9:	c1 e9 02             	shr    $0x2,%ecx
 8416bdc:	89 d7                	mov    %edx,%edi
 8416bde:	f3 ab                	rep stos %eax,%es:(%edi)
 8416be0:	89 fa                	mov    %edi,%edx
 8416be2:	89 d9                	mov    %ebx,%ecx
 8416be4:	83 e1 02             	and    $0x2,%ecx
 8416be7:	85 c9                	test   %ecx,%ecx
 8416be9:	74 06                	je     8416bf1 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0xb9>
 8416beb:	66 89 02             	mov    %ax,(%edx)
 8416bee:	83 c2 02             	add    $0x2,%edx
 8416bf1:	89 d9                	mov    %ebx,%ecx
 8416bf3:	83 e1 01             	and    $0x1,%ecx
 8416bf6:	85 c9                	test   %ecx,%ecx
 8416bf8:	74 05                	je     8416bff <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0xc7>
 8416bfa:	88 02                	mov    %al,(%edx)
 8416bfc:	83 c2 01             	add    $0x1,%edx
 8416bff:	c7 45 dc 0f 12 00 00 	movl   $0x120f,-0x24(%ebp)
 8416c06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416c09:	05 ac 40 00 00       	add    $0x40ac,%eax
 8416c0e:	c7 44 24 0c 03 0f 00 	movl   $0xf03,0xc(%esp)
 8416c15:	00 
 8416c16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416c1a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8416c1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416c21:	8d 85 cd ed ff ff    	lea    -0x1233(%ebp),%eax
 8416c27:	89 04 24             	mov    %eax,(%esp)
 8416c2a:	e8 f0 b3 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8416c2f:	83 f0 01             	xor    $0x1,%eax
 8416c32:	84 c0                	test   %al,%al
 8416c34:	74 0a                	je     8416c40 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x108>
 8416c36:	b8 00 00 00 00       	mov    $0x0,%eax
 8416c3b:	e9 af 00 00 00       	jmp    8416cef <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY+0x1b7>
 8416c40:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8416c45:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8416c4c:	00 
 8416c4d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8416c54:	00 
 8416c55:	89 04 24             	mov    %eax,(%esp)
 8416c58:	e8 e1 e5 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8416c5d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8416c60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8416c63:	8b 70 04             	mov    0x4(%eax),%esi
 8416c66:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8416c69:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416c6d:	8d 85 cd ed ff ff    	lea    -0x1233(%ebp),%eax
 8416c73:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416c77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416c7e:	00 
 8416c7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416c82:	89 04 24             	mov    %eax,(%esp)
 8416c85:	e8 a0 d8 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416c8a:	89 c3                	mov    %eax,%ebx
 8416c8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8416c8f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416c93:	8d 85 4b c2 ff ff    	lea    -0x3db5(%ebp),%eax
 8416c99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8416c9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8416ca4:	00 
 8416ca5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416ca8:	89 04 24             	mov    %eax,(%esp)
 8416cab:	e8 7a d8 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8416cb0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8416cb3:	8b 92 59 89 00 00    	mov    0x8959(%edx),%edx
 8416cb9:	89 74 24 14          	mov    %esi,0x14(%esp)
 8416cbd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8416cc1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8416cc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8416cc9:	c7 44 24 04 94 95 c4 	movl   $0x8c49594,0x4(%esp)
 8416cd0:	08 
 8416cd1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416cd4:	89 04 24             	mov    %eax,(%esp)
 8416cd7:	e8 e4 d4 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8416cdc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8416ce3:	00 
 8416ce4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8416ce7:	89 04 24             	mov    %eax,(%esp)
 8416cea:	e8 37 d6 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8416cef:	81 c4 cc 3d 00 00    	add    $0x3dcc,%esp
 8416cf5:	5b                   	pop    %ebx
 8416cf6:	5e                   	pop    %esi
 8416cf7:	5f                   	pop    %edi
 8416cf8:	5d                   	pop    %ebp
 8416cf9:	c3                   	ret

```

```c
// DB_SaveInven::_saveCharacInvenExpand @ 0x8416b38

/* DB_SaveInven::_saveCharacInvenExpand(SIG_SAVE_INVENTORY*) const */

undefined4 __thiscall
DB_SaveInven::_saveCharacInvenExpand(DB_SaveInven *this,SIG_SAVE_INVENTORY *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_3db9 [11138];
  char local_1237;
  char local_1236 [4622];
  uint local_28;
  uint local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  memset(local_3db9,0,0x2b82);
  local_24 = 0x2b82;
  cVar1 = compress_zip(local_3db9,&local_24,(char *)(param_1 + 0x895d),0x2438);
  if (cVar1 == '\x01') {
    pcVar6 = &local_1237;
    uVar7 = 0x120f;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_1237 = '\0';
      pcVar6 = local_1236;
      uVar7 = 0x120e;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    local_28 = 0x120f;
    cVar1 = compress_zip(&local_1237,&local_28,(char *)(param_1 + 0x40ac),0xf03);
    if (cVar1 == '\x01') {
      local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = MySQL::blob_to_str(local_20,1,&local_1237,local_28);
      uVar4 = MySQL::blob_to_str(local_20,0,local_3db9,local_24);
      MySQL::set_query(local_20,
                       "upDate charac_inven_expand set cargo_capacity=%d,cargo=\'%s\',jewel=\'%s\' where charac_no=%u"
                       ,*(undefined4 *)(param_1 + 0x8959),uVar4,uVar3,uVar2);
      uVar2 = MySQL::exec(local_20,true);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 08416aac DB_SaveInven::dispatch  [0x08416aac-0x8416b37] ===
 8416aac:	55                   	push   %ebp
 8416aad:	89 e5                	mov    %esp,%ebp
 8416aaf:	83 ec 28             	sub    $0x28,%esp
 8416ab2:	8b 45 14             	mov    0x14(%ebp),%eax
 8416ab5:	89 04 24             	mov    %eax,(%esp)
 8416ab8:	e8 cb 9f 03 00       	call   8450a88 <_ZN6Stream12GetOutBufferI18SIG_SAVE_INVENTORYEEPT_v>
 8416abd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8416ac0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8416ac4:	75 07                	jne    8416acd <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x21>
 8416ac6:	b8 00 00 00 00       	mov    $0x0,%eax
 8416acb:	eb 69                	jmp    8416b36 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x8a>
 8416acd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8416ad0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416ad4:	8b 45 08             	mov    0x8(%ebp),%eax
 8416ad7:	89 04 24             	mov    %eax,(%esp)
 8416ada:	e8 1b 02 00 00       	call   8416cfa <_ZN12DB_SaveInven9SaveInvenEP18SIG_SAVE_INVENTORY>
 8416adf:	88 45 f3             	mov    %al,-0xd(%ebp)
 8416ae2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8416ae6:	83 f0 01             	xor    $0x1,%eax
 8416ae9:	84 c0                	test   %al,%al
 8416aeb:	74 07                	je     8416af4 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x48>
 8416aed:	b8 00 00 00 00       	mov    $0x0,%eax
 8416af2:	eb 42                	jmp    8416b36 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x8a>
 8416af4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8416af7:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8416afb:	84 c0                	test   %al,%al
 8416afd:	74 0b                	je     8416b0a <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x5e>
 8416aff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8416b02:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8416b06:	3c 02                	cmp    $0x2,%al
 8416b08:	75 27                	jne    8416b31 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x85>
 8416b0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8416b0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8416b11:	8b 45 08             	mov    0x8(%ebp),%eax
 8416b14:	89 04 24             	mov    %eax,(%esp)
 8416b17:	e8 1c 00 00 00       	call   8416b38 <_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY>
 8416b1c:	88 45 f3             	mov    %al,-0xd(%ebp)
 8416b1f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8416b23:	83 f0 01             	xor    $0x1,%eax
 8416b26:	84 c0                	test   %al,%al
 8416b28:	74 07                	je     8416b31 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x85>
 8416b2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8416b2f:	eb 05                	jmp    8416b36 <_ZN12DB_SaveInven8dispatchEiiP6Stream+0x8a>
 8416b31:	b8 01 00 00 00       	mov    $0x1,%eax
 8416b36:	c9                   	leave
 8416b37:	c3                   	ret

```

```c
// DB_SaveInven::dispatch @ 0x8416aac

/* DB_SaveInven::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveInven::dispatch(DB_SaveInven *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_INVENTORY *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_INVENTORY>(param_3);
  if (pSVar2 == (SIG_SAVE_INVENTORY *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveInven(this,pSVar2);
    if (cVar1 == '\x01') {
      if (((pSVar2[8] == (SIG_SAVE_INVENTORY)0x0) || (pSVar2[8] == (SIG_SAVE_INVENTORY)0x2)) &&
         (cVar1 = _saveCharacInvenExpand(this,pSVar2), cVar1 != '\x01')) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ~DB_SaveInven

```asm
// === 08416a5e DB_SaveInven::~DB_SaveInven  [0x08416a5e-0x8416a8d] ===
 8416a5e:	55                   	push   %ebp
 8416a5f:	89 e5                	mov    %esp,%ebp
 8416a61:	83 ec 18             	sub    $0x18,%esp
 8416a64:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a67:	c7 00 e0 fa c5 08    	movl   $0x8c5fae0,(%eax)
 8416a6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a70:	89 04 24             	mov    %eax,(%esp)
 8416a73:	e8 00 b9 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8416a78:	b8 00 00 00 00       	mov    $0x0,%eax
 8416a7d:	84 c0                	test   %al,%al
 8416a7f:	74 0b                	je     8416a8c <_ZN12DB_SaveInvenD1Ev+0x2e>
 8416a81:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a84:	89 04 24             	mov    %eax,(%esp)
 8416a87:	e8 64 da 30 00       	call   87244f0 <_ZdlPv>
 8416a8c:	c9                   	leave
 8416a8d:	c3                   	ret

```

```c
// DB_SaveInven::~DB_SaveInven @ 0x8416a5e

/* WARNING: Removing unreachable block (ram,0x08416a81) */
/* DB_SaveInven::~DB_SaveInven() */

void __thiscall DB_SaveInven::~DB_SaveInven(DB_SaveInven *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fae0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_SaveInven_08416a8e

```asm
// === 08416a8e DB_SaveInven::~DB_SaveInven  [0x08416a8e-0x8416aab] ===
 8416a8e:	55                   	push   %ebp
 8416a8f:	89 e5                	mov    %esp,%ebp
 8416a91:	83 ec 18             	sub    $0x18,%esp
 8416a94:	8b 45 08             	mov    0x8(%ebp),%eax
 8416a97:	89 04 24             	mov    %eax,(%esp)
 8416a9a:	e8 bf ff ff ff       	call   8416a5e <_ZN12DB_SaveInvenD1Ev>
 8416a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8416aa2:	89 04 24             	mov    %eax,(%esp)
 8416aa5:	e8 46 da 30 00       	call   87244f0 <_ZdlPv>
 8416aaa:	c9                   	leave
 8416aab:	c3                   	ret

```

```c
// DB_SaveInven::~DB_SaveInven @ 0x8416a8e

/* DB_SaveInven::~DB_SaveInven() */

void __thiscall DB_SaveInven::~DB_SaveInven(DB_SaveInven *this)

{
  ~DB_SaveInven(this);
  operator_delete(this);
  return;
}

```

