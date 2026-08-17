# ARAD__FnRewardLethe

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## make_data

```asm
// === 08195340 ARAD::FnRewardLethe::make_data  [0x08195340-0x819537b] ===
 8195340:	55                   	push   %ebp
 8195341:	89 e5                	mov    %esp,%ebp
 8195343:	53                   	push   %ebx
 8195344:	83 ec 14             	sub    $0x14,%esp
 8195347:	8b 5d 08             	mov    0x8(%ebp),%ebx
 819534a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819534d:	8b 00                	mov    (%eax),%eax
 819534f:	89 04 24             	mov    %eax,(%esp)
 8195352:	e8 17 50 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8195357:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819535e:	00 
 819535f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8195363:	8b 45 10             	mov    0x10(%ebp),%eax
 8195366:	89 44 24 04          	mov    %eax,0x4(%esp)
 819536a:	89 1c 24             	mov    %ebx,(%esp)
 819536d:	e8 22 0a 00 00       	call   8195d94 <_ZN4ARAD19EventRewardItemAradC1Eijj>
 8195372:	89 d8                	mov    %ebx,%eax
 8195374:	83 c4 14             	add    $0x14,%esp
 8195377:	5b                   	pop    %ebx
 8195378:	5d                   	pop    %ebp
 8195379:	c2 04 00             	ret    $0x4

```

```c
// ARAD::FnRewardLethe::make_data @ 0x8195340

/* ARAD::FnRewardLethe::make_data(int) */

int ARAD::FnRewardLethe::make_data(int param_1)

{
  uint uVar1;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = CUser::get_acc_id((CUser *)*in_stack_00000008);
  EventRewardItemArad::EventRewardItemArad((EventRewardItemArad *)param_1,in_stack_0000000c,uVar1,0)
  ;
  return param_1;
}

```

---

## operator

```asm
// === 08194ee2 ARAD::FnRewardLethe::operator  [0x08194ee2-0x819533f] ===
 8194ee2:	55                   	push   %ebp
 8194ee3:	89 e5                	mov    %esp,%ebp
 8194ee5:	57                   	push   %edi
 8194ee6:	56                   	push   %esi
 8194ee7:	53                   	push   %ebx
 8194ee8:	81 ec dc 01 00 00    	sub    $0x1dc,%esp
 8194eee:	8b 45 14             	mov    0x14(%ebp),%eax
 8194ef1:	66 89 85 54 fe ff ff 	mov    %ax,-0x1ac(%ebp)
 8194ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 8194efb:	8b 00                	mov    (%eax),%eax
 8194efd:	85 c0                	test   %eax,%eax
 8194eff:	74 19                	je     8194f1a <_ZN4ARAD13FnRewardLetheclEimsj+0x38>
 8194f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8194f04:	8b 00                	mov    (%eax),%eax
 8194f06:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8194f0d:	ff 
 8194f0e:	89 04 24             	mov    %eax,(%esp)
 8194f11:	e8 8a 90 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8194f16:	85 c0                	test   %eax,%eax
 8194f18:	75 07                	jne    8194f21 <_ZN4ARAD13FnRewardLetheclEimsj+0x3f>
 8194f1a:	b8 01 00 00 00       	mov    $0x1,%eax
 8194f1f:	eb 05                	jmp    8194f26 <_ZN4ARAD13FnRewardLetheclEimsj+0x44>
 8194f21:	b8 00 00 00 00       	mov    $0x0,%eax
 8194f26:	84 c0                	test   %al,%al
 8194f28:	74 0a                	je     8194f34 <_ZN4ARAD13FnRewardLetheclEimsj+0x52>
 8194f2a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194f2f:	e9 fe 03 00 00       	jmp    8195332 <_ZN4ARAD13FnRewardLetheclEimsj+0x450>
 8194f34:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8194f3a:	89 04 24             	mov    %eax,(%esp)
 8194f3d:	e8 12 69 f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8194f42:	0f bf 85 54 fe ff ff 	movswl -0x1ac(%ebp),%eax
 8194f49:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 8194f4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8194f53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194f57:	8b 45 10             	mov    0x10(%ebp),%eax
 8194f5a:	89 04 24             	mov    %eax,(%esp)
 8194f5d:	e8 13 24 00 00       	call   8197375 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item>
 8194f62:	83 f0 01             	xor    $0x1,%eax
 8194f65:	84 c0                	test   %al,%al
 8194f67:	74 0a                	je     8194f73 <_ZN4ARAD13FnRewardLetheclEimsj+0x91>
 8194f69:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194f6e:	e9 bf 03 00 00       	jmp    8195332 <_ZN4ARAD13FnRewardLetheclEimsj+0x450>
 8194f73:	8d 95 63 fe ff ff    	lea    -0x19d(%ebp),%edx
 8194f79:	bb 00 01 00 00       	mov    $0x100,%ebx
 8194f7e:	b8 00 00 00 00       	mov    $0x0,%eax
 8194f83:	89 d1                	mov    %edx,%ecx
 8194f85:	83 e1 01             	and    $0x1,%ecx
 8194f88:	85 c9                	test   %ecx,%ecx
 8194f8a:	74 08                	je     8194f94 <_ZN4ARAD13FnRewardLetheclEimsj+0xb2>
 8194f8c:	88 02                	mov    %al,(%edx)
 8194f8e:	83 c2 01             	add    $0x1,%edx
 8194f91:	83 eb 01             	sub    $0x1,%ebx
 8194f94:	89 d1                	mov    %edx,%ecx
 8194f96:	83 e1 02             	and    $0x2,%ecx
 8194f99:	85 c9                	test   %ecx,%ecx
 8194f9b:	74 09                	je     8194fa6 <_ZN4ARAD13FnRewardLetheclEimsj+0xc4>
 8194f9d:	66 89 02             	mov    %ax,(%edx)
 8194fa0:	83 c2 02             	add    $0x2,%edx
 8194fa3:	83 eb 02             	sub    $0x2,%ebx
 8194fa6:	89 d9                	mov    %ebx,%ecx
 8194fa8:	c1 e9 02             	shr    $0x2,%ecx
 8194fab:	89 d7                	mov    %edx,%edi
 8194fad:	f3 ab                	rep stos %eax,%es:(%edi)
 8194faf:	89 fa                	mov    %edi,%edx
 8194fb1:	89 d9                	mov    %ebx,%ecx
 8194fb3:	83 e1 02             	and    $0x2,%ecx
 8194fb6:	85 c9                	test   %ecx,%ecx
 8194fb8:	74 06                	je     8194fc0 <_ZN4ARAD13FnRewardLetheclEimsj+0xde>
 8194fba:	66 89 02             	mov    %ax,(%edx)
 8194fbd:	83 c2 02             	add    $0x2,%edx
 8194fc0:	89 d9                	mov    %ebx,%ecx
 8194fc2:	83 e1 01             	and    $0x1,%ecx
 8194fc5:	85 c9                	test   %ecx,%ecx
 8194fc7:	74 05                	je     8194fce <_ZN4ARAD13FnRewardLetheclEimsj+0xec>
 8194fc9:	88 02                	mov    %al,(%edx)
 8194fcb:	83 c2 01             	add    $0x1,%edx
 8194fce:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8194fd1:	ba 15 00 00 00       	mov    $0x15,%edx
 8194fd6:	b9 00 00 00 00       	mov    $0x0,%ecx
 8194fdb:	89 c3                	mov    %eax,%ebx
 8194fdd:	83 e3 01             	and    $0x1,%ebx
 8194fe0:	85 db                	test   %ebx,%ebx
 8194fe2:	74 08                	je     8194fec <_ZN4ARAD13FnRewardLetheclEimsj+0x10a>
 8194fe4:	88 08                	mov    %cl,(%eax)
 8194fe6:	83 c0 01             	add    $0x1,%eax
 8194fe9:	83 ea 01             	sub    $0x1,%edx
 8194fec:	89 c3                	mov    %eax,%ebx
 8194fee:	83 e3 02             	and    $0x2,%ebx
 8194ff1:	85 db                	test   %ebx,%ebx
 8194ff3:	74 09                	je     8194ffe <_ZN4ARAD13FnRewardLetheclEimsj+0x11c>
 8194ff5:	66 89 08             	mov    %cx,(%eax)
 8194ff8:	83 c0 02             	add    $0x2,%eax
 8194ffb:	83 ea 02             	sub    $0x2,%edx
 8194ffe:	89 d6                	mov    %edx,%esi
 8195000:	83 e6 fc             	and    $0xfffffffc,%esi
 8195003:	bb 00 00 00 00       	mov    $0x0,%ebx
 8195008:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 819500b:	83 c3 04             	add    $0x4,%ebx
 819500e:	39 f3                	cmp    %esi,%ebx
 8195010:	72 f6                	jb     8195008 <_ZN4ARAD13FnRewardLetheclEimsj+0x126>
 8195012:	01 d8                	add    %ebx,%eax
 8195014:	89 d3                	mov    %edx,%ebx
 8195016:	83 e3 02             	and    $0x2,%ebx
 8195019:	85 db                	test   %ebx,%ebx
 819501b:	74 06                	je     8195023 <_ZN4ARAD13FnRewardLetheclEimsj+0x141>
 819501d:	66 89 08             	mov    %cx,(%eax)
 8195020:	83 c0 02             	add    $0x2,%eax
 8195023:	83 e2 01             	and    $0x1,%edx
 8195026:	85 d2                	test   %edx,%edx
 8195028:	74 05                	je     819502f <_ZN4ARAD13FnRewardLetheclEimsj+0x14d>
 819502a:	88 08                	mov    %cl,(%eax)
 819502c:	83 c0 01             	add    $0x1,%eax
 819502f:	83 7d 0c 60          	cmpl   $0x60,0xc(%ebp)
 8195033:	75 7b                	jne    81950b0 <_ZN4ARAD13FnRewardLetheclEimsj+0x1ce>
 8195035:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819503c:	00 
 819503d:	c7 44 24 08 cf bb b9 	movl   $0x8b9bbcf,0x8(%esp)
 8195044:	08 
 8195045:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 819504c:	00 
 819504d:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8195054:	e8 a5 07 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8195059:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8195060:	00 
 8195061:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195065:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8195068:	89 04 24             	mov    %eax,(%esp)
 819506b:	e8 60 88 ee ff       	call   807d8d0 <strncpy@plt>
 8195070:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8195077:	00 
 8195078:	c7 44 24 08 eb bb b9 	movl   $0x8b9bbeb,0x8(%esp)
 819507f:	08 
 8195080:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8195087:	00 
 8195088:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819508f:	e8 6a 07 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8195094:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 819509b:	00 
 819509c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81950a0:	8d 85 63 fe ff ff    	lea    -0x19d(%ebp),%eax
 81950a6:	89 04 24             	mov    %eax,(%esp)
 81950a9:	e8 22 88 ee ff       	call   807d8d0 <strncpy@plt>
 81950ae:	eb 79                	jmp    8195129 <_ZN4ARAD13FnRewardLetheclEimsj+0x247>
 81950b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81950b7:	00 
 81950b8:	c7 44 24 08 06 bc b9 	movl   $0x8b9bc06,0x8(%esp)
 81950bf:	08 
 81950c0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81950c7:	00 
 81950c8:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81950cf:	e8 2a 07 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81950d4:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81950db:	00 
 81950dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81950e0:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81950e3:	89 04 24             	mov    %eax,(%esp)
 81950e6:	e8 e5 87 ee ff       	call   807d8d0 <strncpy@plt>
 81950eb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81950f2:	00 
 81950f3:	c7 44 24 08 24 bc b9 	movl   $0x8b9bc24,0x8(%esp)
 81950fa:	08 
 81950fb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8195102:	00 
 8195103:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819510a:	e8 ef 06 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 819510f:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8195116:	00 
 8195117:	89 44 24 04          	mov    %eax,0x4(%esp)
 819511b:	8d 85 63 fe ff ff    	lea    -0x19d(%ebp),%eax
 8195121:	89 04 24             	mov    %eax,(%esp)
 8195124:	e8 a7 87 ee ff       	call   807d8d0 <strncpy@plt>
 8195129:	8b 45 08             	mov    0x8(%ebp),%eax
 819512c:	8b 00                	mov    (%eax),%eax
 819512e:	89 04 24             	mov    %eax,(%esp)
 8195131:	e8 5a 6b f3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8195136:	89 c3                	mov    %eax,%ebx
 8195138:	8d 85 63 fe ff ff    	lea    -0x19d(%ebp),%eax
 819513e:	89 04 24             	mov    %eax,(%esp)
 8195141:	e8 6a 92 ee ff       	call   807e3b0 <strlen@plt>
 8195146:	89 c6                	mov    %eax,%esi
 8195148:	8b 45 08             	mov    0x8(%ebp),%eax
 819514b:	8b 00                	mov    (%eax),%eax
 819514d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8195154:	ff 
 8195155:	89 04 24             	mov    %eax,(%esp)
 8195158:	e8 43 8e 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 819515d:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8195164:	00 
 8195165:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 819516c:	00 
 819516d:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8195171:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 8195178:	00 
 8195179:	89 74 24 14          	mov    %esi,0x14(%esp)
 819517d:	8d 95 63 fe ff ff    	lea    -0x19d(%ebp),%edx
 8195183:	89 54 24 10          	mov    %edx,0x10(%esp)
 8195187:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819518b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8195192:	00 
 8195193:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8195199:	89 44 24 04          	mov    %eax,0x4(%esp)
 819519d:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81951a0:	89 04 24             	mov    %eax,(%esp)
 81951a3:	e8 40 04 3c 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81951a8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81951ab:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81951af:	74 61                	je     8195212 <_ZN4ARAD13FnRewardLetheclEimsj+0x330>
 81951b1:	0f bf 9d 54 fe ff ff 	movswl -0x1ac(%ebp),%ebx
 81951b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81951bb:	8b 00                	mov    (%eax),%eax
 81951bd:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81951c4:	ff 
 81951c5:	89 04 24             	mov    %eax,(%esp)
 81951c8:	e8 d3 8d 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81951cd:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81951d1:	8b 55 10             	mov    0x10(%ebp),%edx
 81951d4:	89 54 24 18          	mov    %edx,0x18(%esp)
 81951d8:	89 44 24 14          	mov    %eax,0x14(%esp)
 81951dc:	c7 44 24 10 44 bc b9 	movl   $0x8b9bc44,0x10(%esp)
 81951e3:	08 
 81951e4:	c7 44 24 0c 66 00 00 	movl   $0x66,0xc(%esp)
 81951eb:	00 
 81951ec:	c7 44 24 08 80 c9 b9 	movl   $0x8b9c980,0x8(%esp)
 81951f3:	08 
 81951f4:	c7 44 24 04 a4 bb b9 	movl   $0x8b9bba4,0x4(%esp)
 81951fb:	08 
 81951fc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8195203:	e8 02 ea 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8195208:	bb 00 00 00 00       	mov    $0x0,%ebx
 819520d:	e9 20 01 00 00       	jmp    8195332 <_ZN4ARAD13FnRewardLetheclEimsj+0x450>
 8195212:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8195215:	8b 55 0c             	mov    0xc(%ebp),%edx
 8195218:	89 54 24 08          	mov    %edx,0x8(%esp)
 819521c:	8b 55 08             	mov    0x8(%ebp),%edx
 819521f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8195223:	89 04 24             	mov    %eax,(%esp)
 8195226:	e8 15 01 00 00       	call   8195340 <_ZN4ARAD13FnRewardLethe9make_dataEi>
 819522b:	83 ec 04             	sub    $0x4,%esp
 819522e:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8195231:	89 04 24             	mov    %eax,(%esp)
 8195234:	e8 9b 0a 00 00       	call   8195cd4 <_ZN4arad22SigSaveRewardEventItemC1Ev>
 8195239:	0f bf 8d 54 fe ff ff 	movswl -0x1ac(%ebp),%ecx
 8195240:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8195243:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8195246:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8195249:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 819524d:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8195251:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8195254:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8195258:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819525c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8195260:	8b 45 0c             	mov    0xc(%ebp),%eax
 8195263:	89 44 24 04          	mov    %eax,0x4(%esp)
 8195267:	8d 45 aa             	lea    -0x56(%ebp),%eax
 819526a:	89 04 24             	mov    %eax,(%esp)
 819526d:	e8 ba 0a 00 00       	call   8195d2c <_ZN4arad22SigSaveRewardEventItem3setEijjmsj>
 8195272:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8195277:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 819527e:	00 
 819527f:	c7 44 24 04 a4 bb b9 	movl   $0x8b9bba4,0x4(%esp)
 8195286:	08 
 8195287:	89 04 24             	mov    %eax,(%esp)
 819528a:	e8 f7 a7 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 819528f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8195296:	00 
 8195297:	89 44 24 04          	mov    %eax,0x4(%esp)
 819529b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 819529e:	89 04 24             	mov    %eax,(%esp)
 81952a1:	e8 80 39 f3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81952a6:	8b 45 08             	mov    0x8(%ebp),%eax
 81952a9:	8b 00                	mov    (%eax),%eax
 81952ab:	89 04 24             	mov    %eax,(%esp)
 81952ae:	e8 e3 39 f3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81952b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81952b7:	c7 44 24 04 27 00 00 	movl   $0x27,0x4(%esp)
 81952be:	00 
 81952bf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81952c2:	89 04 24             	mov    %eax,(%esp)
 81952c5:	e8 ec 24 00 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 81952ca:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81952cd:	89 04 24             	mov    %eax,(%esp)
 81952d0:	e8 79 39 f3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81952d5:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81952dc:	00 
 81952dd:	8d 55 aa             	lea    -0x56(%ebp),%edx
 81952e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81952e4:	89 04 24             	mov    %eax,(%esp)
 81952e7:	e8 66 93 f4 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81952ec:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81952f1:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81952f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81952f8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81952ff:	00 
 8195300:	89 04 24             	mov    %eax,(%esp)
 8195303:	e8 d6 bc 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8195308:	89 c3                	mov    %eax,%ebx
 819530a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 819530d:	89 04 24             	mov    %eax,(%esp)
 8195310:	e8 bd 75 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8195315:	eb 1b                	jmp    8195332 <_ZN4ARAD13FnRewardLetheclEimsj+0x450>
 8195317:	89 d3                	mov    %edx,%ebx
 8195319:	89 c6                	mov    %eax,%esi
 819531b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 819531e:	89 04 24             	mov    %eax,(%esp)
 8195321:	e8 ac 75 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8195326:	89 f0                	mov    %esi,%eax
 8195328:	89 da                	mov    %ebx,%edx
 819532a:	89 04 24             	mov    %eax,(%esp)
 819532d:	e8 1e e4 94 00       	call   8ae3750 <_Unwind_Resume>
 8195332:	89 d8                	mov    %ebx,%eax
 8195334:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8195337:	83 c4 00             	add    $0x0,%esp
 819533a:	5b                   	pop    %ebx
 819533b:	5e                   	pop    %esi
 819533c:	5f                   	pop    %edi
 819533d:	5d                   	pop    %ebp
 819533e:	c3                   	ret
 819533f:	90                   	nop

```

```c
// ARAD::FnRewardLethe::operator @ 0x8194ee2

/* ARAD::FnRewardLethe::TEMPNAMEPLACEHOLDERVALUE(int, unsigned long, short, unsigned int) */

undefined4 __thiscall
ARAD::FnRewardLethe::operator()
          (FnRewardLethe *this,int param_1,ulong param_2,short param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_1a1;
  char local_1a0 [255];
  Inven_Item local_a1 [61];
  CStreamGuard local_64 [10];
  SigSaveRewardEventItem local_5a [22];
  undefined1 local_44 [4];
  uint local_40;
  uint local_3c;
  char local_35;
  char local_34 [20];
  int local_20;
  
  bVar12 = 0;
  if (*(int *)this != 0) {
    iVar3 = CUser::get_charac_no(*(CUser **)this,-1);
    if (iVar3 != 0) {
      bVar11 = false;
      goto LAB_08194f26;
    }
  }
  bVar11 = true;
LAB_08194f26:
  if (bVar11) {
    uVar9 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_a1);
    cVar2 = ARAD_ITEM::arad_make_item(param_2,(int)param_3,local_a1);
    if (cVar2 == '\x01') {
      pcVar8 = &local_1a1;
      uVar10 = 0x100;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_1a1 = '\0';
        pcVar8 = local_1a0;
        uVar10 = 0xff;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (bVar11) {
        *pcVar8 = '\0';
      }
      pcVar8 = &local_35;
      uVar10 = 0x15;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_35 = '\0';
        pcVar8 = local_34;
        uVar10 = 0x14;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      uVar7 = 0;
      do {
        pcVar1 = pcVar8 + uVar7;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar10 & 0xfffffffc));
      pcVar8 = pcVar8 + uVar7;
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (!bVar11) {
        *pcVar8 = '\0';
      }
      if (param_1 == 0x60) {
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "2012_soccer_goldmedal_title",(bool *)0x0);
        strncpy(&local_35,pcVar8,0x14);
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "2012_soccer_goldmedal_mail",(bool *)0x0);
        strncpy(&local_1a1,pcVar8,0xff);
      }
      else {
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "lethe_2012_summer_event_title",(bool *)0x0);
        strncpy(&local_35,pcVar8,0x14);
        pcVar8 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "lethe_2012_summer_event_mail",(bool *)0x0);
        strncpy(&local_1a1,pcVar8,0xff);
      }
      uVar9 = CUser::GetServerGroup(*(CUser **)this);
      sVar4 = strlen(&local_1a1);
      uVar5 = CUser::get_charac_no(*(CUser **)this,-1);
      local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                           (&local_35,local_a1,0,uVar5,&local_1a1,sVar4,0xc,uVar9,0,0);
      if (local_20 == 0) {
        make_data((int)local_44);
        arad::SigSaveRewardEventItem::SigSaveRewardEventItem(local_5a);
        arad::SigSaveRewardEventItem::set
                  (local_5a,param_1,local_40,local_3c,param_2,param_3,param_4);
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localjapan/Arad_EventPeriodDataManager.cpp",0x6d);
        CStreamGuard::CStreamGuard(local_64,pSVar6,true);
        uVar9 = CUser::GetUID(*(CUser **)this);
                    /* try { // try from 081952c5 to 08195307 has its CatchHandler @ 08195317 */
        DISPATCHER::make_internal_stream_jpn(local_64,0x27,uVar9);
        this_00 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(this_00,local_5a,0x16);
        uVar9 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar9 = CUser::get_charac_no(*(CUser **)this,-1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                   "bool ARAD::FnRewardLethe::operator()(int, itemindex_t, short int, arad_uint32)",
                   0x66,"[RewardLethe] send mail fail. (charac:%u, item:%u, cnt:%d)",uVar9,param_2,
                   (int)param_3);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}

```

