# TaoCrypt__AbstractGroup

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Accumulate

```asm
// === 087a3e10 TaoCrypt::AbstractGroup::Accumulate  [0x087a3e10-0x87a3e5f] ===
 87a3e10:	55                   	push   %ebp
 87a3e11:	89 e5                	mov    %esp,%ebp
 87a3e13:	83 ec 18             	sub    $0x18,%esp
 87a3e16:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3e19:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a3e1c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a3e1f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a3e22:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a3e25:	e8 ce ef f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3e2a:	81 c3 6e 8d bc 00    	add    $0xbc8d6e,%ebx
 87a3e30:	8b 10                	mov    (%eax),%edx
 87a3e32:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3e36:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a3e3a:	89 04 24             	mov    %eax,(%esp)
 87a3e3d:	ff 52 10             	call   *0x10(%edx)
 87a3e40:	89 34 24             	mov    %esi,(%esp)
 87a3e43:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3e47:	e8 14 c6 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a3e4c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a3e4f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a3e52:	89 ec                	mov    %ebp,%esp
 87a3e54:	5d                   	pop    %ebp
 87a3e55:	c3                   	ret
 87a3e56:	8d 76 00             	lea    0x0(%esi),%esi
 87a3e59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::AbstractGroup::Accumulate @ 0x87a3e10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

void __thiscall
TaoCrypt::AbstractGroup::Accumulate(AbstractGroup *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(int *)this + 0x10))(this,param_1,param_2);
  Integer::operator=(param_1,pIVar1);
  return;
}

```

---

## CascadeScalarMultiply

```asm
// === 087a40d0 TaoCrypt::AbstractGroup::CascadeScalarMultiply  [0x087a40d0-0x87a483f] ===
 87a40d0:	55                   	push   %ebp
 87a40d1:	89 e5                	mov    %esp,%ebp
 87a40d3:	57                   	push   %edi
 87a40d4:	56                   	push   %esi
 87a40d5:	53                   	push   %ebx
 87a40d6:	e8 1d ed f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a40db:	81 c3 bd 8a bc 00    	add    $0xbc8abd,%ebx
 87a40e1:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 87a40e7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 87a40ea:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a40ed:	89 04 24             	mov    %eax,(%esp)
 87a40f0:	e8 eb aa fb ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 87a40f5:	8b 55 14             	mov    0x14(%ebp),%edx
 87a40f8:	89 14 24             	mov    %edx,(%esp)
 87a40fb:	89 c7                	mov    %eax,%edi
 87a40fd:	e8 de aa fb ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 87a4102:	39 f8                	cmp    %edi,%eax
 87a4104:	0f 43 f8             	cmovae %eax,%edi
 87a4107:	85 ff                	test   %edi,%edi
 87a4109:	89 7d 90             	mov    %edi,-0x70(%ebp)
 87a410c:	0f 84 fa 06 00 00    	je     87a480c <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x73c>
 87a4112:	83 7d 90 2e          	cmpl   $0x2e,-0x70(%ebp)
 87a4116:	0f 87 65 05 00 00    	ja     87a4681 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x5b1>
 87a411c:	b8 40 00 00 00       	mov    $0x40,%eax
 87a4121:	c7 45 bc 20 00 00 00 	movl   $0x20,-0x44(%ebp)
 87a4128:	c7 45 b8 04 00 00 00 	movl   $0x4,-0x48(%ebp)
 87a412f:	c7 45 b4 02 00 00 00 	movl   $0x2,-0x4c(%ebp)
 87a4136:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
 87a413d:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
 87a4144:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4149:	89 04 24             	mov    %eax,(%esp)
 87a414c:	e8 3f 36 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a4151:	8d 4d c8             	lea    -0x38(%ebp),%ecx
 87a4154:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87a4157:	89 0c 24             	mov    %ecx,(%esp)
 87a415a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a415d:	e8 2e b4 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a4162:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a4165:	8b 7d c0             	mov    -0x40(%ebp),%edi
 87a4168:	89 75 a4             	mov    %esi,-0x5c(%ebp)
 87a416b:	89 c6                	mov    %eax,%esi
 87a416d:	8d 76 00             	lea    0x0(%esi),%esi
 87a4170:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a4173:	89 3c 24             	mov    %edi,(%esp)
 87a4176:	83 c7 10             	add    $0x10,%edi
 87a4179:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a417d:	e8 ee b0 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4182:	83 ee 01             	sub    $0x1,%esi
 87a4185:	75 e9                	jne    87a4170 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0xa0>
 87a4187:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a418a:	8b 7d cc             	mov    -0x34(%ebp),%edi
 87a418d:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 87a4190:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4197:	00 
 87a4198:	c1 e0 04             	shl    $0x4,%eax
 87a419b:	03 45 c0             	add    -0x40(%ebp),%eax
 87a419e:	89 3c 24             	mov    %edi,(%esp)
 87a41a1:	89 45 98             	mov    %eax,-0x68(%ebp)
 87a41a4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a41a7:	c1 e0 02             	shl    $0x2,%eax
 87a41aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a41ae:	e8 0d 9b 8d ff       	call   807dcc0 <memset@plt>
 87a41b3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a41b8:	89 3c 24             	mov    %edi,(%esp)
 87a41bb:	e8 60 35 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a41c0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a41c3:	8b 55 10             	mov    0x10(%ebp),%edx
 87a41c6:	83 c0 10             	add    $0x10,%eax
 87a41c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a41cd:	89 04 24             	mov    %eax,(%esp)
 87a41d0:	e8 8b c2 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a41d5:	8b 4d 18             	mov    0x18(%ebp),%ecx
 87a41d8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a41db:	03 45 bc             	add    -0x44(%ebp),%eax
 87a41de:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a41e2:	89 04 24             	mov    %eax,(%esp)
 87a41e5:	e8 76 c2 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a41ea:	83 7d a8 01          	cmpl   $0x1,-0x58(%ebp)
 87a41ee:	0f 84 eb 05 00 00    	je     87a47df <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x70f>
 87a41f4:	8b 55 10             	mov    0x10(%ebp),%edx
 87a41f7:	8b 06                	mov    (%esi),%eax
 87a41f9:	89 34 24             	mov    %esi,(%esp)
 87a41fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4200:	ff 50 1c             	call   *0x1c(%eax)
 87a4203:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a4206:	83 c1 20             	add    $0x20,%ecx
 87a4209:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87a420c:	89 0c 24             	mov    %ecx,(%esp)
 87a420f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4213:	e8 48 c2 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4218:	8b 06                	mov    (%esi),%eax
 87a421a:	8b 55 18             	mov    0x18(%ebp),%edx
 87a421d:	89 34 24             	mov    %esi,(%esp)
 87a4220:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4224:	ff 50 1c             	call   *0x1c(%eax)
 87a4227:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a422a:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 87a422d:	01 c9                	add    %ecx,%ecx
 87a422f:	89 4d a8             	mov    %ecx,-0x58(%ebp)
 87a4232:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a4235:	c1 e2 05             	shl    $0x5,%edx
 87a4238:	89 55 9c             	mov    %edx,-0x64(%ebp)
 87a423b:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a423f:	01 d1                	add    %edx,%ecx
 87a4241:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 87a4244:	89 0c 24             	mov    %ecx,(%esp)
 87a4247:	e8 14 c2 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a424c:	83 7d b4 03          	cmpl   $0x3,-0x4c(%ebp)
 87a4250:	76 55                	jbe    87a42a7 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x1d7>
 87a4252:	ba 10 00 00 00       	mov    $0x10,%edx
 87a4257:	89 f0                	mov    %esi,%eax
 87a4259:	bf 03 00 00 00       	mov    $0x3,%edi
 87a425e:	89 d6                	mov    %edx,%esi
 87a4260:	89 c2                	mov    %eax,%edx
 87a4262:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a4268:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a426b:	8b 0a                	mov    (%edx),%ecx
 87a426d:	89 55 88             	mov    %edx,-0x78(%ebp)
 87a4270:	89 14 24             	mov    %edx,(%esp)
 87a4273:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4277:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a427a:	01 f0                	add    %esi,%eax
 87a427c:	83 c6 20             	add    $0x20,%esi
 87a427f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4283:	ff 51 10             	call   *0x10(%ecx)
 87a4286:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a428a:	89 f8                	mov    %edi,%eax
 87a428c:	83 c7 02             	add    $0x2,%edi
 87a428f:	c1 e0 04             	shl    $0x4,%eax
 87a4292:	03 45 c0             	add    -0x40(%ebp),%eax
 87a4295:	89 04 24             	mov    %eax,(%esp)
 87a4298:	e8 c3 c1 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a429d:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a42a0:	3b 7d b4             	cmp    -0x4c(%ebp),%edi
 87a42a3:	72 c3                	jb     87a4268 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x198>
 87a42a5:	89 d6                	mov    %edx,%esi
 87a42a7:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 87a42aa:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a42ad:	c7 45 a4 01 00 00 00 	movl   $0x1,-0x5c(%ebp)
 87a42b4:	83 c2 01             	add    $0x1,%edx
 87a42b7:	c1 e2 04             	shl    $0x4,%edx
 87a42ba:	c1 e1 04             	shl    $0x4,%ecx
 87a42bd:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87a42c0:	89 f2                	mov    %esi,%edx
 87a42c2:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87a42c5:	8d 76 00             	lea    0x0(%esi),%esi
 87a42c8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a42cb:	03 45 b4             	add    -0x4c(%ebp),%eax
 87a42ce:	39 45 b8             	cmp    %eax,-0x48(%ebp)
 87a42d1:	76 5b                	jbe    87a432e <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x25e>
 87a42d3:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 87a42d6:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 87a42d9:	03 4d a4             	add    -0x5c(%ebp),%ecx
 87a42dc:	8b 7d a0             	mov    -0x60(%ebp),%edi
 87a42df:	c1 e6 04             	shl    $0x4,%esi
 87a42e2:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 87a42e5:	8d 76 00             	lea    0x0(%esi),%esi
 87a42e8:	8b 45 18             	mov    0x18(%ebp),%eax
 87a42eb:	89 14 24             	mov    %edx,(%esp)
 87a42ee:	89 55 88             	mov    %edx,-0x78(%ebp)
 87a42f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a42f5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a42f8:	01 f0                	add    %esi,%eax
 87a42fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a42fe:	8b 0a                	mov    (%edx),%ecx
 87a4300:	ff 51 10             	call   *0x10(%ecx)
 87a4303:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4307:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a430a:	01 f8                	add    %edi,%eax
 87a430c:	89 04 24             	mov    %eax,(%esp)
 87a430f:	e8 4c c1 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4314:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a4317:	01 45 bc             	add    %eax,-0x44(%ebp)
 87a431a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a431d:	03 75 c4             	add    -0x3c(%ebp),%esi
 87a4320:	03 7d c4             	add    -0x3c(%ebp),%edi
 87a4323:	2b 45 b4             	sub    -0x4c(%ebp),%eax
 87a4326:	39 45 b8             	cmp    %eax,-0x48(%ebp)
 87a4329:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a432c:	77 ba                	ja     87a42e8 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x218>
 87a432e:	83 45 a4 02          	addl   $0x2,-0x5c(%ebp)
 87a4332:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87a4335:	83 45 a0 20          	addl   $0x20,-0x60(%ebp)
 87a4339:	39 4d a4             	cmp    %ecx,-0x5c(%ebp)
 87a433c:	72 8a                	jb     87a42c8 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x1f8>
 87a433e:	8d 04 49             	lea    (%ecx,%ecx,2),%eax
 87a4341:	89 d6                	mov    %edx,%esi
 87a4343:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 87a4346:	73 68                	jae    87a43b0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x2e0>
 87a4348:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87a434b:	89 c7                	mov    %eax,%edi
 87a434d:	2b 7d a8             	sub    -0x58(%ebp),%edi
 87a4350:	8d 14 10             	lea    (%eax,%edx,1),%edx
 87a4353:	c1 e0 04             	shl    $0x4,%eax
 87a4356:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a4359:	89 f0                	mov    %esi,%eax
 87a435b:	89 d6                	mov    %edx,%esi
 87a435d:	c1 e7 04             	shl    $0x4,%edi
 87a4360:	89 c2                	mov    %eax,%edx
 87a4362:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a4368:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a436b:	8b 0a                	mov    (%edx),%ecx
 87a436d:	89 55 88             	mov    %edx,-0x78(%ebp)
 87a4370:	89 14 24             	mov    %edx,(%esp)
 87a4373:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4377:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a437a:	01 f8                	add    %edi,%eax
 87a437c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4380:	ff 51 10             	call   *0x10(%ecx)
 87a4383:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4387:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a438a:	03 45 c4             	add    -0x3c(%ebp),%eax
 87a438d:	89 04 24             	mov    %eax,(%esp)
 87a4390:	e8 cb c0 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4395:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a4398:	03 75 a8             	add    -0x58(%ebp),%esi
 87a439b:	03 7d 9c             	add    -0x64(%ebp),%edi
 87a439e:	01 4d c4             	add    %ecx,-0x3c(%ebp)
 87a43a1:	89 f0                	mov    %esi,%eax
 87a43a3:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a43a6:	2b 45 a8             	sub    -0x58(%ebp),%eax
 87a43a9:	39 45 b8             	cmp    %eax,-0x48(%ebp)
 87a43ac:	77 ba                	ja     87a4368 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x298>
 87a43ae:	89 d6                	mov    %edx,%esi
 87a43b0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a43b3:	39 45 b8             	cmp    %eax,-0x48(%ebp)
 87a43b6:	0f 86 8f 00 00 00    	jbe    87a444b <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x37b>
 87a43bc:	8b 55 a8             	mov    -0x58(%ebp),%edx
 87a43bf:	89 c1                	mov    %eax,%ecx
 87a43c1:	01 c9                	add    %ecx,%ecx
 87a43c3:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87a43c6:	01 c2                	add    %eax,%edx
 87a43c8:	83 c0 02             	add    $0x2,%eax
 87a43cb:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a43ce:	c1 e0 04             	shl    $0x4,%eax
 87a43d1:	83 e8 10             	sub    $0x10,%eax
 87a43d4:	89 55 b0             	mov    %edx,-0x50(%ebp)
 87a43d7:	89 f2                	mov    %esi,%edx
 87a43d9:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a43dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a43e0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a43e3:	39 45 bc             	cmp    %eax,-0x44(%ebp)
 87a43e6:	73 44                	jae    87a442c <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x35c>
 87a43e8:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 87a43eb:	8b 75 bc             	mov    -0x44(%ebp),%esi
 87a43ee:	66 90                	xchg   %ax,%ax
 87a43f0:	8b 45 10             	mov    0x10(%ebp),%eax
 87a43f3:	83 c6 02             	add    $0x2,%esi
 87a43f6:	8b 0a                	mov    (%edx),%ecx
 87a43f8:	89 55 88             	mov    %edx,-0x78(%ebp)
 87a43fb:	89 14 24             	mov    %edx,(%esp)
 87a43fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4402:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a4405:	01 f8                	add    %edi,%eax
 87a4407:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a440b:	ff 51 10             	call   *0x10(%ecx)
 87a440e:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a4411:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4415:	8d 44 39 10          	lea    0x10(%ecx,%edi,1),%eax
 87a4419:	83 c7 20             	add    $0x20,%edi
 87a441c:	89 04 24             	mov    %eax,(%esp)
 87a441f:	e8 3c c0 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4424:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a4427:	3b 75 c4             	cmp    -0x3c(%ebp),%esi
 87a442a:	72 c4                	jb     87a43f0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x320>
 87a442c:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87a442f:	01 45 b0             	add    %eax,-0x50(%ebp)
 87a4432:	01 45 bc             	add    %eax,-0x44(%ebp)
 87a4435:	01 45 c4             	add    %eax,-0x3c(%ebp)
 87a4438:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a443b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87a443e:	01 4d a4             	add    %ecx,-0x5c(%ebp)
 87a4441:	2b 45 a8             	sub    -0x58(%ebp),%eax
 87a4444:	39 45 b8             	cmp    %eax,-0x48(%ebp)
 87a4447:	77 97                	ja     87a43e0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x310>
 87a4449:	89 d6                	mov    %edx,%esi
 87a444b:	8d 7d d8             	lea    -0x28(%ebp),%edi
 87a444e:	89 3c 24             	mov    %edi,(%esp)
 87a4451:	e8 3a b1 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a4456:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87a4459:	83 e9 01             	sub    $0x1,%ecx
 87a445c:	85 c9                	test   %ecx,%ecx
 87a445e:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 87a4461:	0f 88 80 01 00 00    	js     87a45e7 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x517>
 87a4467:	c6 45 9c 01          	movb   $0x1,-0x64(%ebp)
 87a446b:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 87a4472:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 87a4479:	eb 30                	jmp    87a44ab <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x3db>
 87a447b:	90                   	nop
 87a447c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4480:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a4483:	01 c0                	add    %eax,%eax
 87a4485:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 87a4488:	73 7b                	jae    87a4505 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x435>
 87a448a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a448d:	01 c0                	add    %eax,%eax
 87a448f:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 87a4492:	73 71                	jae    87a4505 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x435>
 87a4494:	83 6d ac 01          	subl   $0x1,-0x54(%ebp)
 87a4498:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 87a449b:	0f 88 46 01 00 00    	js     87a45e7 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x517>
 87a44a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a44a8:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87a44ab:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a44ae:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a44b1:	89 4d 88             	mov    %ecx,-0x78(%ebp)
 87a44b4:	01 c0                	add    %eax,%eax
 87a44b6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a44b9:	8b 45 14             	mov    0x14(%ebp),%eax
 87a44bc:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87a44bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a44c3:	89 04 24             	mov    %eax,(%esp)
 87a44c6:	e8 b5 8b fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a44cb:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a44ce:	01 d2                	add    %edx,%edx
 87a44d0:	0f b6 c0             	movzbl %al,%eax
 87a44d3:	03 45 c4             	add    -0x3c(%ebp),%eax
 87a44d6:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 87a44d9:	8b 55 1c             	mov    0x1c(%ebp),%edx
 87a44dc:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a44df:	8b 45 ac             	mov    -0x54(%ebp),%eax
 87a44e2:	89 14 24             	mov    %edx,(%esp)
 87a44e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a44e9:	e8 92 8b fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a44ee:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 87a44f1:	0f b6 c0             	movzbl %al,%eax
 87a44f4:	03 45 c4             	add    -0x3c(%ebp),%eax
 87a44f7:	89 45 b8             	mov    %eax,-0x48(%ebp)
 87a44fa:	8b 45 ac             	mov    -0x54(%ebp),%eax
 87a44fd:	85 c0                	test   %eax,%eax
 87a44ff:	0f 85 7b ff ff ff    	jne    87a4480 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x3b0>
 87a4505:	2b 4d ac             	sub    -0x54(%ebp),%ecx
 87a4508:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 87a450b:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 87a450e:	0b 4d bc             	or     -0x44(%ebp),%ecx
 87a4511:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 87a4514:	0f 85 ce 01 00 00    	jne    87a46e8 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x618>
 87a451a:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
 87a4521:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 87a4528:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 87a452f:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 87a4536:	66 90                	xchg   %ax,%ax
 87a4538:	80 7d 9c 00          	cmpb   $0x0,-0x64(%ebp)
 87a453c:	0f 85 c6 01 00 00    	jne    87a4708 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x638>
 87a4542:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87a4545:	85 c9                	test   %ecx,%ecx
 87a4547:	74 37                	je     87a4580 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x4b0>
 87a4549:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a454c:	89 f7                	mov    %esi,%edi
 87a454e:	8b 75 94             	mov    -0x6c(%ebp),%esi
 87a4551:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a4558:	8b 07                	mov    (%edi),%eax
 87a455a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a455d:	89 3c 24             	mov    %edi,(%esp)
 87a4560:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4564:	ff 50 1c             	call   *0x1c(%eax)
 87a4567:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a456a:	89 0c 24             	mov    %ecx,(%esp)
 87a456d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4571:	e8 ea be fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4576:	83 ee 01             	sub    $0x1,%esi
 87a4579:	75 dd                	jne    87a4558 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x488>
 87a457b:	89 fe                	mov    %edi,%esi
 87a457d:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87a4580:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87a4583:	85 d2                	test   %edx,%edx
 87a4585:	0f 85 2d 02 00 00    	jne    87a47b8 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x6e8>
 87a458b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87a458e:	85 c0                	test   %eax,%eax
 87a4590:	74 39                	je     87a45cb <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x4fb>
 87a4592:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a4595:	89 f7                	mov    %esi,%edi
 87a4597:	8b 75 a8             	mov    -0x58(%ebp),%esi
 87a459a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a45a0:	8b 07                	mov    (%edi),%eax
 87a45a2:	83 ee 01             	sub    $0x1,%esi
 87a45a5:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87a45a8:	89 3c 24             	mov    %edi,(%esp)
 87a45ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a45af:	ff 50 1c             	call   *0x1c(%eax)
 87a45b2:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87a45b5:	89 0c 24             	mov    %ecx,(%esp)
 87a45b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a45bc:	e8 9f be fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a45c1:	83 fe ff             	cmp    $0xffffffff,%esi
 87a45c4:	75 da                	jne    87a45a0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x4d0>
 87a45c6:	89 fe                	mov    %edi,%esi
 87a45c8:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87a45cb:	83 6d ac 01          	subl   $0x1,-0x54(%ebp)
 87a45cf:	c6 45 9c 00          	movb   $0x0,-0x64(%ebp)
 87a45d3:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 87a45da:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 87a45e1:	0f 89 c1 fe ff ff    	jns    87a44a8 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x3d8>
 87a45e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a45ea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a45ee:	89 04 24             	mov    %eax,(%esp)
 87a45f1:	e8 7a ac fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a45f6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a45f9:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a45fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4603:	00 
 87a4604:	c1 e0 02             	shl    $0x2,%eax
 87a4607:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a460b:	89 34 24             	mov    %esi,(%esp)
 87a460e:	e8 ad 96 8d ff       	call   807dcc0 <memset@plt>
 87a4613:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4618:	89 34 24             	mov    %esi,(%esp)
 87a461b:	e8 00 31 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4620:	8b 55 98             	mov    -0x68(%ebp),%edx
 87a4623:	39 55 c0             	cmp    %edx,-0x40(%ebp)
 87a4626:	74 39                	je     87a4661 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x591>
 87a4628:	8b 75 c0             	mov    -0x40(%ebp),%esi
 87a462b:	90                   	nop
 87a462c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4630:	8b 06                	mov    (%esi),%eax
 87a4632:	8b 7e 04             	mov    0x4(%esi),%edi
 87a4635:	83 c6 10             	add    $0x10,%esi
 87a4638:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a463f:	00 
 87a4640:	c1 e0 02             	shl    $0x2,%eax
 87a4643:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4647:	89 3c 24             	mov    %edi,(%esp)
 87a464a:	e8 71 96 8d ff       	call   807dcc0 <memset@plt>
 87a464f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4654:	89 3c 24             	mov    %edi,(%esp)
 87a4657:	e8 c4 30 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a465c:	3b 75 98             	cmp    -0x68(%ebp),%esi
 87a465f:	75 cf                	jne    87a4630 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x560>
 87a4661:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a4664:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4669:	89 0c 24             	mov    %ecx,(%esp)
 87a466c:	e8 af 30 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4671:	8b 45 08             	mov    0x8(%ebp),%eax
 87a4674:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a467a:	5b                   	pop    %ebx
 87a467b:	5e                   	pop    %esi
 87a467c:	5f                   	pop    %edi
 87a467d:	5d                   	pop    %ebp
 87a467e:	c2 04 00             	ret    $0x4
 87a4681:	81 7d 90 05 01 00 00 	cmpl   $0x105,-0x70(%ebp)
 87a4688:	19 c0                	sbb    %eax,%eax
 87a468a:	25 00 fd ff ff       	and    $0xfffffd00,%eax
 87a468f:	05 00 04 00 00       	add    $0x400,%eax
 87a4694:	81 7d 90 05 01 00 00 	cmpl   $0x105,-0x70(%ebp)
 87a469b:	19 d2                	sbb    %edx,%edx
 87a469d:	83 e2 c0             	and    $0xffffffc0,%edx
 87a46a0:	83 ea 80             	sub    $0xffffff80,%edx
 87a46a3:	81 7d 90 05 01 00 00 	cmpl   $0x105,-0x70(%ebp)
 87a46aa:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87a46ad:	19 c9                	sbb    %ecx,%ecx
 87a46af:	83 e1 d0             	and    $0xffffffd0,%ecx
 87a46b2:	83 c1 40             	add    $0x40,%ecx
 87a46b5:	81 7d 90 05 01 00 00 	cmpl   $0x105,-0x70(%ebp)
 87a46bc:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 87a46bf:	19 d2                	sbb    %edx,%edx
 87a46c1:	83 e2 fc             	and    $0xfffffffc,%edx
 87a46c4:	83 c2 08             	add    $0x8,%edx
 87a46c7:	81 7d 90 05 01 00 00 	cmpl   $0x105,-0x70(%ebp)
 87a46ce:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 87a46d1:	19 c9                	sbb    %ecx,%ecx
 87a46d3:	83 c1 03             	add    $0x3,%ecx
 87a46d6:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 87a46d9:	89 4d a8             	mov    %ecx,-0x58(%ebp)
 87a46dc:	e9 63 fa ff ff       	jmp    87a4144 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x74>
 87a46e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a46e8:	f6 45 bc 01          	testb  $0x1,-0x44(%ebp)
 87a46ec:	74 42                	je     87a4730 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x660>
 87a46ee:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
 87a46f5:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 87a46fc:	e9 37 fe ff ff       	jmp    87a4538 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x468>
 87a4701:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a4708:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a470b:	0f b6 4d 8c          	movzbl -0x74(%ebp),%ecx
 87a470f:	89 3c 24             	mov    %edi,(%esp)
 87a4712:	d3 e0                	shl    %cl,%eax
 87a4714:	03 45 bc             	add    -0x44(%ebp),%eax
 87a4717:	c1 e0 04             	shl    $0x4,%eax
 87a471a:	03 45 c0             	add    -0x40(%ebp),%eax
 87a471d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4721:	e8 3a bd fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4726:	e9 60 fe ff ff       	jmp    87a458b <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x4bb>
 87a472b:	90                   	nop
 87a472c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4730:	f6 45 b8 01          	testb  $0x1,-0x48(%ebp)
 87a4734:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 87a473b:	75 b1                	jne    87a46ee <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x61e>
 87a473d:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a4740:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a4743:	90                   	nop
 87a4744:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4748:	d1 ea                	shr    $1,%edx
 87a474a:	d1 e8                	shr    $1,%eax
 87a474c:	89 d1                	mov    %edx,%ecx
 87a474e:	83 6d 94 01          	subl   $0x1,-0x6c(%ebp)
 87a4752:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 87a4756:	09 c1                	or     %eax,%ecx
 87a4758:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 87a475b:	75 23                	jne    87a4780 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x6b0>
 87a475d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87a4760:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 87a4767:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 87a476e:	83 e8 01             	sub    $0x1,%eax
 87a4771:	89 45 a8             	mov    %eax,-0x58(%ebp)
 87a4774:	e9 bf fd ff ff       	jmp    87a4538 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x468>
 87a4779:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a4780:	a8 01                	test   $0x1,%al
 87a4782:	74 14                	je     87a4798 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x6c8>
 87a4784:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a4787:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87a478a:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a478d:	83 e8 01             	sub    $0x1,%eax
 87a4790:	89 45 a8             	mov    %eax,-0x58(%ebp)
 87a4793:	e9 a0 fd ff ff       	jmp    87a4538 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x468>
 87a4798:	f6 c2 01             	test   $0x1,%dl
 87a479b:	74 ab                	je     87a4748 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x678>
 87a479d:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a47a0:	8b 55 b0             	mov    -0x50(%ebp),%edx
 87a47a3:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a47a6:	83 ea 01             	sub    $0x1,%edx
 87a47a9:	89 55 a8             	mov    %edx,-0x58(%ebp)
 87a47ac:	e9 87 fd ff ff       	jmp    87a4538 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x468>
 87a47b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a47b8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a47bb:	0f b6 4d 8c          	movzbl -0x74(%ebp),%ecx
 87a47bf:	8b 16                	mov    (%esi),%edx
 87a47c1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a47c5:	89 34 24             	mov    %esi,(%esp)
 87a47c8:	d3 e0                	shl    %cl,%eax
 87a47ca:	03 45 bc             	add    -0x44(%ebp),%eax
 87a47cd:	c1 e0 04             	shl    $0x4,%eax
 87a47d0:	03 45 c0             	add    -0x40(%ebp),%eax
 87a47d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a47d7:	ff 52 24             	call   *0x24(%edx)
 87a47da:	e9 ac fd ff ff       	jmp    87a458b <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x4bb>
 87a47df:	8b 06                	mov    (%esi),%eax
 87a47e1:	8b 55 18             	mov    0x18(%ebp),%edx
 87a47e4:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a47e7:	89 34 24             	mov    %esi,(%esp)
 87a47ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a47ee:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a47f2:	ff 50 10             	call   *0x10(%eax)
 87a47f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a47f9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a47fc:	83 c0 30             	add    $0x30,%eax
 87a47ff:	89 04 24             	mov    %eax,(%esp)
 87a4802:	e8 59 bc fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4807:	e9 3f fc ff ff       	jmp    87a444b <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_+0x37b>
 87a480c:	8b 06                	mov    (%esi),%eax
 87a480e:	89 34 24             	mov    %esi,(%esp)
 87a4811:	ff 50 0c             	call   *0xc(%eax)
 87a4814:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a4817:	89 0c 24             	mov    %ecx,(%esp)
 87a481a:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a481e:	e8 4d aa fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4823:	8b 45 08             	mov    0x8(%ebp),%eax
 87a4826:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 87a482c:	5b                   	pop    %ebx
 87a482d:	5e                   	pop    %esi
 87a482e:	5f                   	pop    %edi
 87a482f:	5d                   	pop    %ebp
 87a4830:	c2 04 00             	ret    $0x4
 87a4833:	90                   	nop
 87a4834:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a483a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::AbstractGroup::CascadeScalarMultiply @ 0x87a40d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::CascadeScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractGroup::CascadeScalarMultiply
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  int iVar1;
  void *__s;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Integer *pIVar7;
  Integer *pIVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  Integer *in_stack_00000014;
  Integer *in_stack_00000018;
  uint in_stack_ffffff68;
  byte local_78;
  int local_70;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a40db;
  uVar4 = Integer::BitCount(in_stack_00000018);
  uVar5 = Integer::BitCount(param_4);
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0xc))(param_2);
    Integer::Integer(param_1,pIVar8);
    return param_1;
  }
  if (uVar4 < 0x2f) {
    iVar6 = 0x40;
    local_48 = 0x20;
    local_4c = 4;
    local_50 = 2;
    local_5c = 1;
  }
  else {
    iVar6 = (-(uint)(uVar4 < 0x105) & 0xfffffd00) + 0x400;
    local_48 = (-(uint)(uVar4 < 0x105) & 0xffffffc0) + 0x80;
    local_4c = (-(uint)(uVar4 < 0x105) & 0xffffffd0) + 0x40;
    local_50 = (-(uint)(uVar4 < 0x105) & 0xfffffffc) + 8;
    local_5c = 3 - (uint)(uVar4 < 0x105);
  }
  iVar3 = local_5c;
  pIVar7 = operator_new__(iVar6,in_stack_ffffff68 & 0xffffff00);
  Integer::Integer((Integer *)&local_3c);
  uVar5 = local_4c;
  pIVar8 = pIVar7;
  do {
    Integer::Integer(pIVar8,(Integer *)&local_3c);
    uVar5 = uVar5 - 1;
    pIVar8 = pIVar8 + 0x10;
  } while (uVar5 != 0);
  uVar5 = 0;
  iVar6 = local_4c * 0x10;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  Integer::operator=(pIVar7 + 0x10,param_3);
  Integer::operator=(pIVar7 + local_48,in_stack_00000014);
  if (local_5c == 1) {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,param_3,in_stack_00000014);
    Integer::operator=(pIVar7 + 0x30,pIVar8);
  }
  else {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,param_3);
    Integer::operator=(pIVar7 + 0x20,pIVar8);
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,in_stack_00000014);
    iVar1 = local_50 * 2;
    iVar9 = local_50 * 0x20;
    Integer::operator=(pIVar7 + iVar9,pIVar8);
    if (3 < local_50) {
      iVar10 = 0x10;
      uVar5 = 3;
      do {
        pIVar8 = pIVar7 + iVar10;
        iVar10 = iVar10 + 0x20;
        pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar8,pIVar7 + 0x20);
        uVar12 = uVar5 + 2;
        Integer::operator=(pIVar7 + uVar5 * 0x10,pIVar8);
        uVar5 = uVar12;
      } while (uVar12 < local_50);
    }
    local_60 = 1;
    local_64 = (local_50 + 1) * 0x10;
    do {
      if (local_60 + local_50 < local_4c) {
        local_48 = iVar1 + local_60;
        iVar11 = local_60 << 4;
        iVar10 = local_64;
        do {
          pIVar8 = (Integer *)
                   (**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar11,in_stack_00000014);
          Integer::operator=(pIVar7 + iVar10,pIVar8);
          local_48 = local_48 + local_50;
          iVar11 = iVar11 + local_50 * 0x10;
          iVar10 = iVar10 + local_50 * 0x10;
        } while (local_48 - local_50 < local_4c);
      }
      local_60 = local_60 + 2;
      local_64 = local_64 + 0x20;
    } while (local_60 < local_50);
    if (local_50 * 3 < local_4c) {
      iVar10 = local_50 * 5;
      local_40 = local_50 * 0x30;
      iVar11 = local_50 * 0x10;
      do {
        pIVar8 = (Integer *)
                 (**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar11,pIVar7 + iVar9);
        Integer::operator=(pIVar7 + local_40,pIVar8);
        iVar10 = iVar10 + iVar1;
        iVar11 = iVar11 + iVar9;
        local_40 = local_40 + iVar9;
      } while (iVar10 + local_50 * -2 < local_4c);
    }
    if (local_50 < local_4c) {
      local_40 = local_50 * 2;
      local_54 = local_50 * 3;
      uVar5 = local_50 + 2;
      iVar10 = uVar5 * 0x10 + -0x10;
      local_48 = uVar5;
      local_60 = iVar10;
      do {
        for (; uVar5 < local_40; uVar5 = uVar5 + 2) {
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar10,param_3)
          ;
          iVar11 = iVar10 + 0x10;
          iVar10 = iVar10 + 0x20;
          Integer::operator=(pIVar7 + iVar11,pIVar8);
        }
        local_54 = local_54 + iVar1;
        uVar5 = local_48 + iVar1;
        local_40 = local_40 + iVar1;
        iVar10 = local_60 + iVar9;
        local_48 = uVar5;
        local_60 = iVar10;
      } while (local_54 + local_50 * -2 < local_4c);
    }
  }
  Integer::Integer((Integer *)&local_2c);
  uVar4 = uVar4 - 1;
  if ((int)uVar4 < 0) {
LAB_087a45e7:
    Integer::Integer(param_1,(Integer *)&local_2c);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    uVar4 = uVar4 & 0xffffff00;
    operator_delete__(local_28,uVar4);
    for (pIVar8 = pIVar7; pIVar8 != pIVar7 + iVar6; pIVar8 = pIVar8 + 0x10) {
      __s = *(void **)(pIVar8 + 4);
      uVar4 = 0;
      memset(__s,0,*(int *)pIVar8 << 2);
      uVar4 = uVar4 & 0xffffff00;
      operator_delete__(__s,uVar4);
    }
    operator_delete__(pIVar7,uVar4 & 0xffffff00);
    return param_1;
  }
  bVar2 = true;
  local_4c = 0;
  local_48 = 0;
  local_58 = uVar4;
  do {
    uVar5 = Integer::GetBit(param_4,local_58);
    uVar5 = (uVar5 & 0xff) + local_48 * 2;
    uVar12 = Integer::GetBit(in_stack_00000018,local_58);
    uVar12 = (uVar12 & 0xff) + local_4c * 2;
    local_4c = uVar12;
    local_48 = uVar5;
    if (((local_58 == 0) || (local_50 <= uVar5 * 2)) || (local_50 <= uVar12 * 2)) {
      local_70 = uVar4 - local_58;
      local_60 = uVar12 | uVar5;
      if (local_60 == 0) {
        local_5c = -1;
        local_54 = 0;
        local_4c = 0;
        local_48 = 0;
      }
      else if (((uVar5 & 1) == 0) && (local_54 = 0, iVar1 = local_54, (uVar12 & 1) == 0)) {
        do {
          local_54 = iVar1;
          local_4c = uVar12 >> 1;
          local_48 = uVar5 >> 1;
          local_70 = local_70 + -1;
          iVar1 = local_54 + 1;
          local_60 = (uVar12 | uVar5) >> 1;
          if (local_60 == 0) {
            local_4c = 0;
            local_48 = 0;
            local_5c = local_54;
            local_54 = iVar1;
            goto LAB_087a4538;
          }
          if ((local_48 & 1) != 0) {
            local_5c = local_54;
            local_54 = iVar1;
            goto LAB_087a4538;
          }
          uVar5 = local_48;
          uVar12 = local_4c;
        } while ((local_4c & 1) == 0);
        local_5c = local_54;
        local_54 = iVar1;
      }
      else {
        local_5c = -1;
        local_54 = 0;
      }
LAB_087a4538:
      local_78 = (byte)iVar3;
      if (bVar2) {
        Integer::operator=((Integer *)&local_2c,
                           pIVar7 + ((local_4c << (local_78 & 0x1f)) + local_48) * 0x10);
      }
      else {
        for (; local_70 != 0; local_70 = local_70 + -1) {
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,(Integer *)&local_2c);
          Integer::operator=((Integer *)&local_2c,pIVar8);
        }
        if (local_60 != 0) {
          (**(code **)(*(int *)param_2 + 0x24))
                    (param_2,(Integer *)&local_2c,
                     pIVar7 + ((local_4c << (local_78 & 0x1f)) + local_48) * 0x10);
        }
      }
      if (local_54 != 0) {
        do {
          local_5c = local_5c + -1;
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,(Integer *)&local_2c);
          Integer::operator=((Integer *)&local_2c,pIVar8);
        } while (local_5c != -1);
      }
      bVar2 = false;
      local_4c = 0;
      local_48 = 0;
      uVar4 = local_58;
    }
    if ((int)(local_58 - 1) < 0) goto LAB_087a45e7;
    local_58 = local_58 - 1;
  } while( true );
}

```

---

## Double

```asm
// === 087a3d40 TaoCrypt::AbstractGroup::Double  [0x087a3d40-0x87a3d5f] ===
 87a3d40:	55                   	push   %ebp
 87a3d41:	89 e5                	mov    %esp,%ebp
 87a3d43:	83 ec 18             	sub    $0x18,%esp
 87a3d46:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3d49:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a3d4c:	8b 08                	mov    (%eax),%ecx
 87a3d4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a3d52:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3d56:	89 04 24             	mov    %eax,(%esp)
 87a3d59:	ff 51 10             	call   *0x10(%ecx)
 87a3d5c:	c9                   	leave
 87a3d5d:	c3                   	ret
 87a3d5e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::AbstractGroup::Double @ 0x87a3d40

/* TaoCrypt::AbstractGroup::Double(TaoCrypt::Integer const&) const */

void __thiscall TaoCrypt::AbstractGroup::Double(AbstractGroup *this,Integer *param_1)

{
  (**(code **)(*(int *)this + 0x10))(this,param_1,param_1);
  return;
}

```

---

## Reduce

```asm
// === 087a3dc0 TaoCrypt::AbstractGroup::Reduce  [0x087a3dc0-0x87a3e0f] ===
 87a3dc0:	55                   	push   %ebp
 87a3dc1:	89 e5                	mov    %esp,%ebp
 87a3dc3:	83 ec 18             	sub    $0x18,%esp
 87a3dc6:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3dc9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a3dcc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a3dcf:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a3dd2:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a3dd5:	e8 1e f0 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3dda:	81 c3 be 8d bc 00    	add    $0xbc8dbe,%ebx
 87a3de0:	8b 10                	mov    (%eax),%edx
 87a3de2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a3de6:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a3dea:	89 04 24             	mov    %eax,(%esp)
 87a3ded:	ff 52 20             	call   *0x20(%edx)
 87a3df0:	89 34 24             	mov    %esi,(%esp)
 87a3df3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3df7:	e8 64 c6 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a3dfc:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a3dff:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a3e02:	89 ec                	mov    %ebp,%esp
 87a3e04:	5d                   	pop    %ebp
 87a3e05:	c3                   	ret
 87a3e06:	8d 76 00             	lea    0x0(%esi),%esi
 87a3e09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::AbstractGroup::Reduce @ 0x87a3dc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::Reduce(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

void __thiscall
TaoCrypt::AbstractGroup::Reduce(AbstractGroup *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(int *)this + 0x20))(this,param_1,param_2);
  Integer::operator=(param_1,pIVar1);
  return;
}

```

---

## ScalarMultiply

```asm
// === 087a3ec0 TaoCrypt::AbstractGroup::ScalarMultiply  [0x087a3ec0-0x87a3f1f] ===
 87a3ec0:	55                   	push   %ebp
 87a3ec1:	89 e5                	mov    %esp,%ebp
 87a3ec3:	83 ec 38             	sub    $0x38,%esp
 87a3ec6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a3ec9:	e8 2a ef f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3ece:	81 c3 ca 8c bc 00    	add    $0xbc8cca,%ebx
 87a3ed4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a3ed7:	8b 75 08             	mov    0x8(%ebp),%esi
 87a3eda:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a3edd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a3ee0:	89 34 24             	mov    %esi,(%esp)
 87a3ee3:	e8 a8 b6 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a3ee8:	8b 55 14             	mov    0x14(%ebp),%edx
 87a3eeb:	8b 07                	mov    (%edi),%eax
 87a3eed:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a3ef1:	89 3c 24             	mov    %edi,(%esp)
 87a3ef4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a3ef8:	8b 55 10             	mov    0x10(%ebp),%edx
 87a3efb:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 87a3f02:	00 
 87a3f03:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a3f07:	ff 50 34             	call   *0x34(%eax)
 87a3f0a:	89 f0                	mov    %esi,%eax
 87a3f0c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a3f0f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a3f12:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a3f15:	89 ec                	mov    %ebp,%esp
 87a3f17:	5d                   	pop    %ebp
 87a3f18:	c2 04 00             	ret    $0x4
 87a3f1b:	90                   	nop
 87a3f1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AbstractGroup::ScalarMultiply @ 0x87a3ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::ScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

Integer * TaoCrypt::AbstractGroup::ScalarMultiply(Integer *param_1,Integer *param_2)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  Integer::Integer(param_1);
  (**(code **)(*(int *)param_2 + 0x34))(param_2,param_1,in_stack_0000000c,in_stack_00000010,1);
  return param_1;
}

```

---

## SimultaneousMultiply

```asm
// === 087a48a0 TaoCrypt::AbstractGroup::SimultaneousMultiply  [0x087a48a0-0x87a548f] ===
 87a48a0:	55                   	push   %ebp
 87a48a1:	89 e5                	mov    %esp,%ebp
 87a48a3:	57                   	push   %edi
 87a48a4:	56                   	push   %esi
 87a48a5:	53                   	push   %ebx
 87a48a6:	81 ec ac 00 00 00    	sub    $0xac,%esp
 87a48ac:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a48af:	e8 44 e5 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a48b4:	81 c3 e4 82 bc 00    	add    $0xbc82e4,%ebx
 87a48ba:	8b 55 18             	mov    0x18(%ebp),%edx
 87a48bd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a48c2:	8d 04 52             	lea    (%edx,%edx,2),%eax
 87a48c5:	c1 e0 02             	shl    $0x2,%eax
 87a48c8:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a48cb:	89 04 24             	mov    %eax,(%esp)
 87a48ce:	e8 bd 2e fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a48d3:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 87a48d9:	8b 45 18             	mov    0x18(%ebp),%eax
 87a48dc:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 87a48e2:	85 c0                	test   %eax,%eax
 87a48e4:	89 b5 5c ff ff ff    	mov    %esi,-0xa4(%ebp)
 87a48ea:	74 3f                	je     87a492b <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x8b>
 87a48ec:	89 7d 94             	mov    %edi,-0x6c(%ebp)
 87a48ef:	89 c7                	mov    %eax,%edi
 87a48f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a48f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a48fd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a4904:	e8 87 2e fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a4909:	89 06                	mov    %eax,(%esi)
 87a490b:	89 46 08             	mov    %eax,0x8(%esi)
 87a490e:	89 46 04             	mov    %eax,0x4(%esi)
 87a4911:	83 c6 0c             	add    $0xc,%esi
 87a4914:	83 ef 01             	sub    $0x1,%edi
 87a4917:	75 df                	jne    87a48f8 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x58>
 87a4919:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 87a491f:	03 4d a4             	add    -0x5c(%ebp),%ecx
 87a4922:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 87a4925:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 87a492b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4930:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a4937:	e8 e4 2d fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a493c:	8b 75 18             	mov    0x18(%ebp),%esi
 87a493f:	85 f6                	test   %esi,%esi
 87a4941:	0f 85 76 04 00 00    	jne    87a4dbd <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x51d>
 87a4947:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 87a494e:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 87a4955:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 87a495c:	8b 45 10             	mov    0x10(%ebp),%eax
 87a495f:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 87a4962:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 87a4965:	89 0c 24             	mov    %ecx,(%esp)
 87a4968:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a496c:	e8 ff a8 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4971:	8b 4d 18             	mov    0x18(%ebp),%ecx
 87a4974:	85 c9                	test   %ecx,%ecx
 87a4976:	0f 84 ff 02 00 00    	je     87a4c7b <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x3db>
 87a497c:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 87a4983:	89 7d 90             	mov    %edi,-0x70(%ebp)
 87a4986:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 87a498d:	c6 45 98 00          	movb   $0x0,-0x68(%ebp)
 87a4991:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 87a4998:	eb 2b                	jmp    87a49c5 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x125>
 87a499a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a49a0:	80 7d 98 00          	cmpb   $0x0,-0x68(%ebp)
 87a49a4:	75 0b                	jne    87a49b1 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x111>
 87a49a6:	0f b6 4e 2f          	movzbl 0x2f(%esi),%ecx
 87a49aa:	88 4d 98             	mov    %cl,-0x68(%ebp)
 87a49ad:	80 75 98 01          	xorb   $0x1,-0x68(%ebp)
 87a49b1:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 87a49b5:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a49b8:	83 45 a0 0c          	addl   $0xc,-0x60(%ebp)
 87a49bc:	39 45 18             	cmp    %eax,0x18(%ebp)
 87a49bf:	0f 86 0b 01 00 00    	jbe    87a4ad0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x230>
 87a49c5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87a49c8:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a49cb:	8d 34 82             	lea    (%edx,%eax,4),%esi
 87a49ce:	80 7e 2f 00          	cmpb   $0x0,0x2f(%esi)
 87a49d2:	75 cc                	jne    87a49a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x100>
 87a49d4:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 87a49d7:	39 4e 24             	cmp    %ecx,0x24(%esi)
 87a49da:	75 c4                	jne    87a49a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x100>
 87a49dc:	8b 7e 28             	mov    0x28(%esi),%edi
 87a49df:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 87a49e5:	d1 ef                	shr    $1,%edi
 87a49e7:	c1 e7 04             	shl    $0x4,%edi
 87a49ea:	03 3c 02             	add    (%edx,%eax,1),%edi
 87a49ed:	80 7e 2d 00          	cmpb   $0x0,0x2d(%esi)
 87a49f1:	0f 84 a9 00 00 00    	je     87a4aa0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x200>
 87a49f7:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87a49fa:	8b 01                	mov    (%ecx),%eax
 87a49fc:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a49ff:	8b 50 24             	mov    0x24(%eax),%edx
 87a4a02:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a4a06:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87a4a09:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a4a0c:	89 14 24             	mov    %edx,(%esp)
 87a4a0f:	ff 50 14             	call   *0x14(%eax)
 87a4a12:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87a4a15:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4a19:	89 0c 24             	mov    %ecx,(%esp)
 87a4a1c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4a20:	ff 55 a4             	call   *-0x5c(%ebp)
 87a4a23:	89 34 24             	mov    %esi,(%esp)
 87a4a26:	31 ff                	xor    %edi,%edi
 87a4a28:	e8 03 87 fb ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 87a4a2d:	c1 e0 05             	shl    $0x5,%eax
 87a4a30:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a4a33:	80 7e 2e 00          	cmpb   $0x0,0x2e(%esi)
 87a4a37:	75 03                	jne    87a4a3c <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x19c>
 87a4a39:	8b 7e 20             	mov    0x20(%esi),%edi
 87a4a3c:	c6 46 2e 00          	movb   $0x0,0x2e(%esi)
 87a4a40:	eb 0e                	jmp    87a4a50 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x1b0>
 87a4a42:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a4a48:	39 7d a4             	cmp    %edi,-0x5c(%ebp)
 87a4a4b:	76 73                	jbe    87a4ac0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x220>
 87a4a4d:	83 c7 01             	add    $0x1,%edi
 87a4a50:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4a54:	89 34 24             	mov    %esi,(%esp)
 87a4a57:	e8 24 86 fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a4a5c:	84 c0                	test   %al,%al
 87a4a5e:	74 e8                	je     87a4a48 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x1a8>
 87a4a60:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4a64:	89 34 24             	mov    %esi,(%esp)
 87a4a67:	e8 b4 bd fb ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 87a4a6c:	8b 4e 20             	mov    0x20(%esi),%ecx
 87a4a6f:	b8 01 00 00 00       	mov    $0x1,%eax
 87a4a74:	01 7e 24             	add    %edi,0x24(%esi)
 87a4a77:	89 34 24             	mov    %esi,(%esp)
 87a4a7a:	d3 e0                	shl    %cl,%eax
 87a4a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4a80:	e8 3b 8b fb ff       	call   875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>
 87a4a85:	80 7e 2c 00          	cmpb   $0x0,0x2c(%esi)
 87a4a89:	89 46 28             	mov    %eax,0x28(%esi)
 87a4a8c:	0f 85 7e 01 00 00    	jne    87a4c10 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x370>
 87a4a92:	c6 46 2d 00          	movb   $0x0,0x2d(%esi)
 87a4a96:	e9 05 ff ff ff       	jmp    87a49a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x100>
 87a4a9b:	90                   	nop
 87a4a9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4aa0:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a4aa3:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a4aa6:	8b 02                	mov    (%edx),%eax
 87a4aa8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a4aac:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4ab0:	89 14 24             	mov    %edx,(%esp)
 87a4ab3:	ff 50 24             	call   *0x24(%eax)
 87a4ab6:	e9 68 ff ff ff       	jmp    87a4a23 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x183>
 87a4abb:	90                   	nop
 87a4abc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4ac0:	c6 46 2f 01          	movb   $0x1,0x2f(%esi)
 87a4ac4:	e9 d7 fe ff ff       	jmp    87a49a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x100>
 87a4ac9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a4ad0:	80 7d 98 00          	cmpb   $0x0,-0x68(%ebp)
 87a4ad4:	0f 85 77 01 00 00    	jne    87a4c51 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x3b1>
 87a4ada:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a4add:	8b 7d 90             	mov    -0x70(%ebp),%edi
 87a4ae0:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 87a4ae7:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 87a4aee:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 87a4af4:	83 c2 10             	add    $0x10,%edx
 87a4af7:	03 4d 90             	add    -0x70(%ebp),%ecx
 87a4afa:	89 55 8c             	mov    %edx,-0x74(%ebp)
 87a4afd:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 87a4b00:	8b 11                	mov    (%ecx),%edx
 87a4b02:	8b 41 04             	mov    0x4(%ecx),%eax
 87a4b05:	29 d0                	sub    %edx,%eax
 87a4b07:	83 e0 f0             	and    $0xfffffff0,%eax
 87a4b0a:	8d 44 02 f0          	lea    -0x10(%edx,%eax,1),%eax
 87a4b0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4b12:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a4b15:	89 04 24             	mov    %eax,(%esp)
 87a4b18:	e8 43 b9 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4b1d:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a4b20:	8b 0a                	mov    (%edx),%ecx
 87a4b22:	8b 72 04             	mov    0x4(%edx),%esi
 87a4b25:	29 ce                	sub    %ecx,%esi
 87a4b27:	c1 fe 04             	sar    $0x4,%esi
 87a4b2a:	83 fe 01             	cmp    $0x1,%esi
 87a4b2d:	0f 86 bd 00 00 00    	jbe    87a4bf0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x350>
 87a4b33:	8d 46 fe             	lea    -0x2(%esi),%eax
 87a4b36:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a4b39:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87a4b3c:	89 c8                	mov    %ecx,%eax
 87a4b3e:	85 d2                	test   %edx,%edx
 87a4b40:	7e 64                	jle    87a4ba6 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x306>
 87a4b42:	8d 56 ff             	lea    -0x1(%esi),%edx
 87a4b45:	c1 e6 04             	shl    $0x4,%esi
 87a4b48:	c1 e2 04             	shl    $0x4,%edx
 87a4b4b:	83 ee 20             	sub    $0x20,%esi
 87a4b4e:	eb 05                	jmp    87a4b55 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x2b5>
 87a4b50:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87a4b53:	8b 01                	mov    (%ecx),%eax
 87a4b55:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 87a4b58:	01 f0                	add    %esi,%eax
 87a4b5a:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 87a4b60:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a4b64:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4b68:	89 3c 24             	mov    %edi,(%esp)
 87a4b6b:	8b 0f                	mov    (%edi),%ecx
 87a4b6d:	ff 51 24             	call   *0x24(%ecx)
 87a4b70:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87a4b73:	89 f0                	mov    %esi,%eax
 87a4b75:	83 ee 10             	sub    $0x10,%esi
 87a4b78:	03 01                	add    (%ecx),%eax
 87a4b7a:	89 3c 24             	mov    %edi,(%esp)
 87a4b7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4b81:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a4b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4b88:	8b 0f                	mov    (%edi),%ecx
 87a4b8a:	ff 51 24             	call   *0x24(%ecx)
 87a4b8d:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 87a4b93:	83 6d a4 01          	subl   $0x1,-0x5c(%ebp)
 87a4b97:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a4b9a:	83 ea 10             	sub    $0x10,%edx
 87a4b9d:	85 c9                	test   %ecx,%ecx
 87a4b9f:	7f af                	jg     87a4b50 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x2b0>
 87a4ba1:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a4ba4:	8b 02                	mov    (%edx),%eax
 87a4ba6:	8b 0f                	mov    (%edi),%ecx
 87a4ba8:	8d 50 10             	lea    0x10(%eax),%edx
 87a4bab:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a4baf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4bb3:	89 3c 24             	mov    %edi,(%esp)
 87a4bb6:	ff 51 24             	call   *0x24(%ecx)
 87a4bb9:	8b 07                	mov    (%edi),%eax
 87a4bbb:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a4bbe:	8b 48 10             	mov    0x10(%eax),%ecx
 87a4bc1:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 87a4bc4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a4bc7:	8b 32                	mov    (%edx),%esi
 87a4bc9:	89 3c 24             	mov    %edi,(%esp)
 87a4bcc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a4bd0:	ff 50 1c             	call   *0x1c(%eax)
 87a4bd3:	89 74 24 08          	mov    %esi,0x8(%esp)
 87a4bd7:	89 3c 24             	mov    %edi,(%esp)
 87a4bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4bde:	ff 55 a4             	call   *-0x5c(%ebp)
 87a4be1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4be5:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a4be8:	89 04 24             	mov    %eax,(%esp)
 87a4beb:	e8 70 b8 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4bf0:	83 45 98 01          	addl   $0x1,-0x68(%ebp)
 87a4bf4:	8b 55 98             	mov    -0x68(%ebp),%edx
 87a4bf7:	83 45 90 0c          	addl   $0xc,-0x70(%ebp)
 87a4bfb:	39 55 18             	cmp    %edx,0x18(%ebp)
 87a4bfe:	76 7b                	jbe    87a4c7b <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x3db>
 87a4c00:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a4c03:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87a4c06:	89 ca                	mov    %ecx,%edx
 87a4c08:	e9 e1 fe ff ff       	jmp    87a4aee <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x24e>
 87a4c0d:	8d 76 00             	lea    0x0(%esi),%esi
 87a4c10:	8b 46 20             	mov    0x20(%esi),%eax
 87a4c13:	89 34 24             	mov    %esi,(%esp)
 87a4c16:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4c1a:	e8 61 84 fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a4c1f:	84 c0                	test   %al,%al
 87a4c21:	0f 84 6b fe ff ff    	je     87a4a92 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x1f2>
 87a4c27:	8b 4e 20             	mov    0x20(%esi),%ecx
 87a4c2a:	ba 01 00 00 00       	mov    $0x1,%edx
 87a4c2f:	c6 46 2d 01          	movb   $0x1,0x2d(%esi)
 87a4c33:	8d 46 10             	lea    0x10(%esi),%eax
 87a4c36:	d3 e2                	shl    %cl,%edx
 87a4c38:	89 d1                	mov    %edx,%ecx
 87a4c3a:	2b 4e 28             	sub    0x28(%esi),%ecx
 87a4c3d:	89 4e 28             	mov    %ecx,0x28(%esi)
 87a4c40:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4c44:	89 34 24             	mov    %esi,(%esp)
 87a4c47:	e8 94 b1 fb ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 87a4c4c:	e9 4f fd ff ff       	jmp    87a49a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x100>
 87a4c51:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a4c54:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87a4c57:	8b 02                	mov    (%edx),%eax
 87a4c59:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a4c5d:	89 14 24             	mov    %edx,(%esp)
 87a4c60:	ff 50 1c             	call   *0x1c(%eax)
 87a4c63:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4c67:	8b 45 8c             	mov    -0x74(%ebp),%eax
 87a4c6a:	89 04 24             	mov    %eax,(%esp)
 87a4c6d:	e8 ee b7 fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a4c72:	83 45 84 01          	addl   $0x1,-0x7c(%ebp)
 87a4c76:	e9 0b fd ff ff       	jmp    87a4986 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xe6>
 87a4c7b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a4c7e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a4c81:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4c88:	00 
 87a4c89:	c1 e0 02             	shl    $0x2,%eax
 87a4c8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4c90:	89 34 24             	mov    %esi,(%esp)
 87a4c93:	e8 28 90 8d ff       	call   807dcc0 <memset@plt>
 87a4c98:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4c9d:	89 34 24             	mov    %esi,(%esp)
 87a4ca0:	e8 7b 2a fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4ca5:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a4ca8:	39 45 88             	cmp    %eax,-0x78(%ebp)
 87a4cab:	74 5e                	je     87a4d0b <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x46b>
 87a4cad:	8b 75 88             	mov    -0x78(%ebp),%esi
 87a4cb0:	8b 46 10             	mov    0x10(%esi),%eax
 87a4cb3:	8b 7e 14             	mov    0x14(%esi),%edi
 87a4cb6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4cbd:	00 
 87a4cbe:	c1 e0 02             	shl    $0x2,%eax
 87a4cc1:	89 3c 24             	mov    %edi,(%esp)
 87a4cc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4cc8:	e8 f3 8f 8d ff       	call   807dcc0 <memset@plt>
 87a4ccd:	89 3c 24             	mov    %edi,(%esp)
 87a4cd0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4cd5:	e8 46 2a fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4cda:	8b 06                	mov    (%esi),%eax
 87a4cdc:	8b 7e 04             	mov    0x4(%esi),%edi
 87a4cdf:	83 c6 30             	add    $0x30,%esi
 87a4ce2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4ce9:	00 
 87a4cea:	c1 e0 02             	shl    $0x2,%eax
 87a4ced:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4cf1:	89 3c 24             	mov    %edi,(%esp)
 87a4cf4:	e8 c7 8f 8d ff       	call   807dcc0 <memset@plt>
 87a4cf9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4cfe:	89 3c 24             	mov    %edi,(%esp)
 87a4d01:	e8 1a 2a fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4d06:	39 75 94             	cmp    %esi,-0x6c(%ebp)
 87a4d09:	75 a5                	jne    87a4cb0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x410>
 87a4d0b:	8b 55 80             	mov    -0x80(%ebp),%edx
 87a4d0e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4d13:	89 14 24             	mov    %edx,(%esp)
 87a4d16:	e8 05 2a fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4d1b:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 87a4d21:	39 8d 70 ff ff ff    	cmp    %ecx,-0x90(%ebp)
 87a4d27:	74 76                	je     87a4d9f <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x4ff>
 87a4d29:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 87a4d2f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87a4d32:	89 c1                	mov    %eax,%ecx
 87a4d34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4d38:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87a4d3b:	8b 52 04             	mov    0x4(%edx),%edx
 87a4d3e:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87a4d41:	8b 31                	mov    (%ecx),%esi
 87a4d43:	39 f2                	cmp    %esi,%edx
 87a4d45:	74 3c                	je     87a4d83 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x4e3>
 87a4d47:	90                   	nop
 87a4d48:	8b 06                	mov    (%esi),%eax
 87a4d4a:	8b 7e 04             	mov    0x4(%esi),%edi
 87a4d4d:	83 c6 10             	add    $0x10,%esi
 87a4d50:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4d57:	00 
 87a4d58:	c1 e0 02             	shl    $0x2,%eax
 87a4d5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4d5f:	89 3c 24             	mov    %edi,(%esp)
 87a4d62:	e8 59 8f 8d ff       	call   807dcc0 <memset@plt>
 87a4d67:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4d6c:	89 3c 24             	mov    %edi,(%esp)
 87a4d6f:	e8 ac 29 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4d74:	39 75 a4             	cmp    %esi,-0x5c(%ebp)
 87a4d77:	75 cf                	jne    87a4d48 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x4a8>
 87a4d79:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a4d7c:	8b 00                	mov    (%eax),%eax
 87a4d7e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a4d81:	89 c2                	mov    %eax,%edx
 87a4d83:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4d88:	89 14 24             	mov    %edx,(%esp)
 87a4d8b:	e8 90 29 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4d90:	83 45 94 0c          	addl   $0xc,-0x6c(%ebp)
 87a4d94:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87a4d97:	39 8d 5c ff ff ff    	cmp    %ecx,-0xa4(%ebp)
 87a4d9d:	75 99                	jne    87a4d38 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x498>
 87a4d9f:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 87a4da5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4daa:	89 04 24             	mov    %eax,(%esp)
 87a4dad:	e8 6e 29 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4db2:	81 c4 ac 00 00 00    	add    $0xac,%esp
 87a4db8:	5b                   	pop    %ebx
 87a4db9:	5e                   	pop    %esi
 87a4dba:	5f                   	pop    %edi
 87a4dbb:	5d                   	pop    %ebp
 87a4dbc:	c3                   	ret
 87a4dbd:	6b 75 18 30          	imul   $0x30,0x18(%ebp),%esi
 87a4dc1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4dc6:	89 34 24             	mov    %esi,(%esp)
 87a4dc9:	e8 c2 29 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a4dce:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4dd3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87a4dda:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 87a4de0:	e8 3b 29 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4de5:	8b 55 14             	mov    0x14(%ebp),%edx
 87a4de8:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 87a4dee:	83 7a 0c 01          	cmpl   $0x1,0xc(%edx)
 87a4df2:	0f 84 38 06 00 00    	je     87a5430 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xb90>
 87a4df8:	8d 55 a8             	lea    -0x58(%ebp),%edx
 87a4dfb:	01 c6                	add    %eax,%esi
 87a4dfd:	8d 4d b8             	lea    -0x48(%ebp),%ecx
 87a4e00:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 87a4e06:	89 fa                	mov    %edi,%edx
 87a4e08:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a4e0b:	89 75 84             	mov    %esi,-0x7c(%ebp)
 87a4e0e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87a4e11:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 87a4e18:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 87a4e1f:	00 00 00 
 87a4e22:	89 8d 78 ff ff ff    	mov    %ecx,-0x88(%ebp)
 87a4e28:	89 7d 90             	mov    %edi,-0x70(%ebp)
 87a4e2b:	90                   	nop
 87a4e2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4e30:	8b 02                	mov    (%edx),%eax
 87a4e32:	89 14 24             	mov    %edx,(%esp)
 87a4e35:	ff 50 18             	call   *0x18(%eax)
 87a4e38:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a4e3b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a4e3f:	89 c6                	mov    %eax,%esi
 87a4e41:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 87a4e47:	89 04 24             	mov    %eax,(%esp)
 87a4e4a:	e8 21 a4 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4e4f:	e8 ac a3 fb ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 87a4e54:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 87a4e5a:	89 14 24             	mov    %edx,(%esp)
 87a4e5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4e61:	e8 0a a4 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4e66:	8b 45 14             	mov    0x14(%ebp),%eax
 87a4e69:	89 f1                	mov    %esi,%ecx
 87a4e6b:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 87a4e72:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 87a4e79:	88 4d d4             	mov    %cl,-0x2c(%ebp)
 87a4e7c:	c6 45 d6 01          	movb   $0x1,-0x2a(%ebp)
 87a4e80:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 87a4e84:	89 04 24             	mov    %eax,(%esp)
 87a4e87:	e8 54 9d fb ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 87a4e8c:	ba 01 00 00 00       	mov    $0x1,%edx
 87a4e91:	83 f8 11             	cmp    $0x11,%eax
 87a4e94:	76 2a                	jbe    87a4ec0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x620>
 87a4e96:	83 f8 18             	cmp    $0x18,%eax
 87a4e99:	b2 02                	mov    $0x2,%dl
 87a4e9b:	76 23                	jbe    87a4ec0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x620>
 87a4e9d:	83 f8 46             	cmp    $0x46,%eax
 87a4ea0:	b2 03                	mov    $0x3,%dl
 87a4ea2:	76 1c                	jbe    87a4ec0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x620>
 87a4ea4:	3d c5 00 00 00       	cmp    $0xc5,%eax
 87a4ea9:	b2 04                	mov    $0x4,%dl
 87a4eab:	76 13                	jbe    87a4ec0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x620>
 87a4ead:	3d 1b 02 00 00       	cmp    $0x21b,%eax
 87a4eb2:	b2 05                	mov    $0x5,%dl
 87a4eb4:	76 0a                	jbe    87a4ec0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x620>
 87a4eb6:	3d 9b 05 00 00       	cmp    $0x59b,%eax
 87a4ebb:	19 d2                	sbb    %edx,%edx
 87a4ebd:	83 c2 07             	add    $0x7,%edx
 87a4ec0:	89 55 c8             	mov    %edx,-0x38(%ebp)
 87a4ec3:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4ec7:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 87a4ecd:	89 14 24             	mov    %edx,(%esp)
 87a4ed0:	e8 cb 9e fb ff       	call   875eda0 <_ZN8TaoCrypt7IntegerlSEj>
 87a4ed5:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87a4ed8:	39 4d 84             	cmp    %ecx,-0x7c(%ebp)
 87a4edb:	0f 84 bc 03 00 00    	je     87a529d <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x9fd>
 87a4ee1:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 87a4ee7:	89 0c 24             	mov    %ecx,(%esp)
 87a4eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4eee:	e8 7d a3 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4ef3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a4ef6:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 87a4efc:	83 c0 10             	add    $0x10,%eax
 87a4eff:	89 04 24             	mov    %eax,(%esp)
 87a4f02:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4f06:	e8 65 a3 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a4f0b:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87a4f0e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a4f11:	89 41 20             	mov    %eax,0x20(%ecx)
 87a4f14:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a4f17:	89 41 24             	mov    %eax,0x24(%ecx)
 87a4f1a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a4f1d:	89 41 28             	mov    %eax,0x28(%ecx)
 87a4f20:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 87a4f24:	88 41 2c             	mov    %al,0x2c(%ecx)
 87a4f27:	0f b6 45 d5          	movzbl -0x2b(%ebp),%eax
 87a4f2b:	88 41 2d             	mov    %al,0x2d(%ecx)
 87a4f2e:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 87a4f32:	88 41 2e             	mov    %al,0x2e(%ecx)
 87a4f35:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 87a4f39:	88 41 2f             	mov    %al,0x2f(%ecx)
 87a4f3c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a4f3f:	83 c1 30             	add    $0x30,%ecx
 87a4f42:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 87a4f45:	89 45 88             	mov    %eax,-0x78(%ebp)
 87a4f48:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a4f4b:	31 ff                	xor    %edi,%edi
 87a4f4d:	8b 75 bc             	mov    -0x44(%ebp),%esi
 87a4f50:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4f57:	00 
 87a4f58:	c1 e0 02             	shl    $0x2,%eax
 87a4f5b:	89 34 24             	mov    %esi,(%esp)
 87a4f5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4f62:	e8 59 8d 8d ff       	call   807dcc0 <memset@plt>
 87a4f67:	89 34 24             	mov    %esi,(%esp)
 87a4f6a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4f6f:	e8 ac 27 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4f74:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87a4f77:	8b 75 ac             	mov    -0x54(%ebp),%esi
 87a4f7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a4f81:	00 
 87a4f82:	c1 e0 02             	shl    $0x2,%eax
 87a4f85:	89 34 24             	mov    %esi,(%esp)
 87a4f88:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a4f8c:	e8 2f 8d 8d ff       	call   807dcc0 <memset@plt>
 87a4f91:	89 34 24             	mov    %esi,(%esp)
 87a4f94:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4f99:	e8 82 27 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a4f9e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 87a4fa1:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a4fa4:	8d 34 82             	lea    (%edx,%eax,4),%esi
 87a4fa7:	89 34 24             	mov    %esi,(%esp)
 87a4faa:	e8 81 81 fb ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 87a4faf:	c1 e0 05             	shl    $0x5,%eax
 87a4fb2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a4fb5:	80 7e 2e 00          	cmpb   $0x0,0x2e(%esi)
 87a4fb9:	75 03                	jne    87a4fbe <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x71e>
 87a4fbb:	8b 7e 20             	mov    0x20(%esi),%edi
 87a4fbe:	c6 46 2e 00          	movb   $0x0,0x2e(%esi)
 87a4fc2:	eb 10                	jmp    87a4fd4 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x734>
 87a4fc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a4fc8:	39 7d a4             	cmp    %edi,-0x5c(%ebp)
 87a4fcb:	0f 86 2f 01 00 00    	jbe    87a5100 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x860>
 87a4fd1:	83 c7 01             	add    $0x1,%edi
 87a4fd4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4fd8:	89 34 24             	mov    %esi,(%esp)
 87a4fdb:	e8 a0 80 fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a4fe0:	84 c0                	test   %al,%al
 87a4fe2:	74 e4                	je     87a4fc8 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x728>
 87a4fe4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4fe8:	89 34 24             	mov    %esi,(%esp)
 87a4feb:	e8 30 b8 fb ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 87a4ff0:	8b 4e 20             	mov    0x20(%esi),%ecx
 87a4ff3:	01 7e 24             	add    %edi,0x24(%esi)
 87a4ff6:	bf 01 00 00 00       	mov    $0x1,%edi
 87a4ffb:	89 f8                	mov    %edi,%eax
 87a4ffd:	89 34 24             	mov    %esi,(%esp)
 87a5000:	d3 e0                	shl    %cl,%eax
 87a5002:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5006:	e8 b5 85 fb ff       	call   875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>
 87a500b:	80 7e 2c 00          	cmpb   $0x0,0x2c(%esi)
 87a500f:	89 46 28             	mov    %eax,0x28(%esi)
 87a5012:	0f 85 49 02 00 00    	jne    87a5261 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x9c1>
 87a5018:	c6 46 2d 00          	movb   $0x0,0x2d(%esi)
 87a501c:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87a501f:	8b 01                	mov    (%ecx),%eax
 87a5021:	89 0c 24             	mov    %ecx,(%esp)
 87a5024:	ff 50 0c             	call   *0xc(%eax)
 87a5027:	89 45 80             	mov    %eax,-0x80(%ebp)
 87a502a:	8b 4e 20             	mov    0x20(%esi),%ecx
 87a502d:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 87a5033:	03 45 8c             	add    -0x74(%ebp),%eax
 87a5036:	c7 45 a0 01 00 00 00 	movl   $0x1,-0x60(%ebp)
 87a503d:	83 e9 01             	sub    $0x1,%ecx
 87a5040:	d3 65 a0             	shll   %cl,-0x60(%ebp)
 87a5043:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87a5046:	8b 50 04             	mov    0x4(%eax),%edx
 87a5049:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87a504c:	8b 10                	mov    (%eax),%edx
 87a504e:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a5051:	29 d0                	sub    %edx,%eax
 87a5053:	c1 f8 04             	sar    $0x4,%eax
 87a5056:	39 45 a0             	cmp    %eax,-0x60(%ebp)
 87a5059:	74 68                	je     87a50c3 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x823>
 87a505b:	0f 83 af 00 00 00    	jae    87a5110 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x870>
 87a5061:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87a5064:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a5067:	c1 e0 04             	shl    $0x4,%eax
 87a506a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 87a506d:	39 c1                	cmp    %eax,%ecx
 87a506f:	89 c6                	mov    %eax,%esi
 87a5071:	89 45 a0             	mov    %eax,-0x60(%ebp)
 87a5074:	74 3c                	je     87a50b2 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x812>
 87a5076:	66 90                	xchg   %ax,%ax
 87a5078:	8b 06                	mov    (%esi),%eax
 87a507a:	8b 7e 04             	mov    0x4(%esi),%edi
 87a507d:	83 c6 10             	add    $0x10,%esi
 87a5080:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5087:	00 
 87a5088:	c1 e0 02             	shl    $0x2,%eax
 87a508b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a508f:	89 3c 24             	mov    %edi,(%esp)
 87a5092:	e8 29 8c 8d ff       	call   807dcc0 <memset@plt>
 87a5097:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a509c:	89 3c 24             	mov    %edi,(%esp)
 87a509f:	e8 7c 26 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a50a4:	39 75 a4             	cmp    %esi,-0x5c(%ebp)
 87a50a7:	75 cf                	jne    87a5078 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x7d8>
 87a50a9:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a50ac:	8b 49 04             	mov    0x4(%ecx),%ecx
 87a50af:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 87a50b2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 87a50b5:	2b 45 a0             	sub    -0x60(%ebp),%eax
 87a50b8:	83 e0 f0             	and    $0xfffffff0,%eax
 87a50bb:	29 c1                	sub    %eax,%ecx
 87a50bd:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a50c0:	89 48 04             	mov    %ecx,0x4(%eax)
 87a50c3:	83 85 7c ff ff ff 01 	addl   $0x1,-0x84(%ebp)
 87a50ca:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 87a50d0:	39 45 18             	cmp    %eax,0x18(%ebp)
 87a50d3:	0f 86 49 03 00 00    	jbe    87a5422 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xb82>
 87a50d9:	83 45 14 10          	addl   $0x10,0x14(%ebp)
 87a50dd:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87a50e0:	83 45 8c 0c          	addl   $0xc,-0x74(%ebp)
 87a50e4:	83 79 0c 01          	cmpl   $0x1,0xc(%ecx)
 87a50e8:	0f 84 42 03 00 00    	je     87a5430 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xb90>
 87a50ee:	8b 45 88             	mov    -0x78(%ebp),%eax
 87a50f1:	8b 55 90             	mov    -0x70(%ebp),%edx
 87a50f4:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87a50f7:	e9 34 fd ff ff       	jmp    87a4e30 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x590>
 87a50fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a5100:	c6 46 2f 01          	movb   $0x1,0x2f(%esi)
 87a5104:	e9 13 ff ff ff       	jmp    87a501c <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x77c>
 87a5109:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a5110:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a5113:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a5118:	c1 e2 04             	shl    $0x4,%edx
 87a511b:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 87a5121:	89 14 24             	mov    %edx,(%esp)
 87a5124:	e8 67 26 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a5129:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a512c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 87a5132:	8b 79 04             	mov    0x4(%ecx),%edi
 87a5135:	89 bd 68 ff ff ff    	mov    %edi,-0x98(%ebp)
 87a513b:	8b 31                	mov    (%ecx),%esi
 87a513d:	89 f8                	mov    %edi,%eax
 87a513f:	29 f0                	sub    %esi,%eax
 87a5141:	c1 f8 04             	sar    $0x4,%eax
 87a5144:	39 45 a0             	cmp    %eax,-0x60(%ebp)
 87a5147:	0f 86 37 03 00 00    	jbe    87a5484 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xbe4>
 87a514d:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87a5153:	39 f7                	cmp    %esi,%edi
 87a5155:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 87a515b:	74 40                	je     87a519d <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x8fd>
 87a515d:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 87a5160:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 87a5166:	66 90                	xchg   %ax,%ax
 87a5168:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a516c:	83 c6 10             	add    $0x10,%esi
 87a516f:	89 3c 24             	mov    %edi,(%esp)
 87a5172:	83 c7 10             	add    $0x10,%edi
 87a5175:	e8 f6 a0 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a517a:	39 75 a4             	cmp    %esi,-0x5c(%ebp)
 87a517d:	75 e9                	jne    87a5168 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x8c8>
 87a517f:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a5182:	89 bd 6c ff ff ff    	mov    %edi,-0x94(%ebp)
 87a5188:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a518b:	8b 09                	mov    (%ecx),%ecx
 87a518d:	89 8d 68 ff ff ff    	mov    %ecx,-0x98(%ebp)
 87a5193:	8b 78 04             	mov    0x4(%eax),%edi
 87a5196:	89 f8                	mov    %edi,%eax
 87a5198:	29 c8                	sub    %ecx,%eax
 87a519a:	c1 f8 04             	sar    $0x4,%eax
 87a519d:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a51a0:	29 c2                	sub    %eax,%edx
 87a51a2:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87a51a5:	74 3d                	je     87a51e4 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x944>
 87a51a7:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 87a51ad:	89 d7                	mov    %edx,%edi
 87a51af:	90                   	nop
 87a51b0:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 87a51b3:	89 34 24             	mov    %esi,(%esp)
 87a51b6:	83 c6 10             	add    $0x10,%esi
 87a51b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a51bd:	e8 ae a0 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a51c2:	83 ef 01             	sub    $0x1,%edi
 87a51c5:	75 e9                	jne    87a51b0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x910>
 87a51c7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87a51ca:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87a51cd:	c1 e0 04             	shl    $0x4,%eax
 87a51d0:	01 85 6c ff ff ff    	add    %eax,-0x94(%ebp)
 87a51d6:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87a51d9:	8b 00                	mov    (%eax),%eax
 87a51db:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 87a51e1:	8b 7a 04             	mov    0x4(%edx),%edi
 87a51e4:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a51ea:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 87a51ed:	89 01                	mov    %eax,(%ecx)
 87a51ef:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 87a51f5:	89 51 04             	mov    %edx,0x4(%ecx)
 87a51f8:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 87a51fe:	03 85 60 ff ff ff    	add    -0xa0(%ebp),%eax
 87a5204:	89 41 08             	mov    %eax,0x8(%ecx)
 87a5207:	3b bd 68 ff ff ff    	cmp    -0x98(%ebp),%edi
 87a520d:	74 3a                	je     87a5249 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x9a9>
 87a520f:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 87a5215:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 87a5218:	8b 06                	mov    (%esi),%eax
 87a521a:	8b 7e 04             	mov    0x4(%esi),%edi
 87a521d:	83 c6 10             	add    $0x10,%esi
 87a5220:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5227:	00 
 87a5228:	c1 e0 02             	shl    $0x2,%eax
 87a522b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a522f:	89 3c 24             	mov    %edi,(%esp)
 87a5232:	e8 89 8a 8d ff       	call   807dcc0 <memset@plt>
 87a5237:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a523c:	89 3c 24             	mov    %edi,(%esp)
 87a523f:	e8 dc 24 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a5244:	39 75 a4             	cmp    %esi,-0x5c(%ebp)
 87a5247:	75 cf                	jne    87a5218 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x978>
 87a5249:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 87a524f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a5254:	89 0c 24             	mov    %ecx,(%esp)
 87a5257:	e8 c4 24 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a525c:	e9 62 fe ff ff       	jmp    87a50c3 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x823>
 87a5261:	8b 46 20             	mov    0x20(%esi),%eax
 87a5264:	89 34 24             	mov    %esi,(%esp)
 87a5267:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a526b:	e8 10 7e fb ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 87a5270:	84 c0                	test   %al,%al
 87a5272:	0f 84 a0 fd ff ff    	je     87a5018 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x778>
 87a5278:	8b 4e 20             	mov    0x20(%esi),%ecx
 87a527b:	8d 46 10             	lea    0x10(%esi),%eax
 87a527e:	c6 46 2d 01          	movb   $0x1,0x2d(%esi)
 87a5282:	d3 e7                	shl    %cl,%edi
 87a5284:	89 f9                	mov    %edi,%ecx
 87a5286:	2b 4e 28             	sub    0x28(%esi),%ecx
 87a5289:	89 4e 28             	mov    %ecx,0x28(%esi)
 87a528c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5290:	89 34 24             	mov    %esi,(%esp)
 87a5293:	e8 48 ab fb ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 87a5298:	e9 7f fd ff ff       	jmp    87a501c <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x77c>
 87a529d:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 87a52a0:	2b 7d a4             	sub    -0x5c(%ebp),%edi
 87a52a3:	c1 ff 04             	sar    $0x4,%edi
 87a52a6:	69 ff ab aa aa aa    	imul   $0xaaaaaaab,%edi,%edi
 87a52ac:	8d 74 3f 01          	lea    0x1(%edi,%edi,1),%esi
 87a52b0:	8d 14 76             	lea    (%esi,%esi,2),%edx
 87a52b3:	c1 e2 04             	shl    $0x4,%edx
 87a52b6:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87a52b9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a52be:	89 14 24             	mov    %edx,(%esp)
 87a52c1:	e8 ca 24 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a52c6:	39 f7                	cmp    %esi,%edi
 87a52c8:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87a52cb:	0f 83 89 01 00 00    	jae    87a545a <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xbba>
 87a52d1:	89 45 88             	mov    %eax,-0x78(%ebp)
 87a52d4:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 87a52d7:	89 c6                	mov    %eax,%esi
 87a52d9:	8b 45 84             	mov    -0x7c(%ebp),%eax
 87a52dc:	39 c7                	cmp    %eax,%edi
 87a52de:	74 57                	je     87a5337 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xa97>
 87a52e0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a52e4:	89 34 24             	mov    %esi,(%esp)
 87a52e7:	e8 84 9f fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a52ec:	8d 47 10             	lea    0x10(%edi),%eax
 87a52ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a52f3:	8d 46 10             	lea    0x10(%esi),%eax
 87a52f6:	89 04 24             	mov    %eax,(%esp)
 87a52f9:	e8 72 9f fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a52fe:	8b 47 20             	mov    0x20(%edi),%eax
 87a5301:	89 46 20             	mov    %eax,0x20(%esi)
 87a5304:	8b 47 24             	mov    0x24(%edi),%eax
 87a5307:	89 46 24             	mov    %eax,0x24(%esi)
 87a530a:	8b 47 28             	mov    0x28(%edi),%eax
 87a530d:	89 46 28             	mov    %eax,0x28(%esi)
 87a5310:	0f b6 47 2c          	movzbl 0x2c(%edi),%eax
 87a5314:	88 46 2c             	mov    %al,0x2c(%esi)
 87a5317:	0f b6 47 2d          	movzbl 0x2d(%edi),%eax
 87a531b:	88 46 2d             	mov    %al,0x2d(%esi)
 87a531e:	0f b6 47 2e          	movzbl 0x2e(%edi),%eax
 87a5322:	88 46 2e             	mov    %al,0x2e(%esi)
 87a5325:	0f b6 47 2f          	movzbl 0x2f(%edi),%eax
 87a5329:	83 c7 30             	add    $0x30,%edi
 87a532c:	88 46 2f             	mov    %al,0x2f(%esi)
 87a532f:	83 c6 30             	add    $0x30,%esi
 87a5332:	39 7d 84             	cmp    %edi,-0x7c(%ebp)
 87a5335:	75 a9                	jne    87a52e0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xa40>
 87a5337:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 87a533d:	89 34 24             	mov    %esi,(%esp)
 87a5340:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a5344:	e8 27 9f fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a5349:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 87a534f:	8d 46 10             	lea    0x10(%esi),%eax
 87a5352:	89 04 24             	mov    %eax,(%esp)
 87a5355:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a5359:	e8 12 9f fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a535e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a5361:	89 46 20             	mov    %eax,0x20(%esi)
 87a5364:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a5367:	89 46 24             	mov    %eax,0x24(%esi)
 87a536a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a536d:	89 46 28             	mov    %eax,0x28(%esi)
 87a5370:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 87a5374:	88 46 2c             	mov    %al,0x2c(%esi)
 87a5377:	0f b6 45 d5          	movzbl -0x2b(%ebp),%eax
 87a537b:	88 46 2d             	mov    %al,0x2d(%esi)
 87a537e:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 87a5382:	88 46 2e             	mov    %al,0x2e(%esi)
 87a5385:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 87a5389:	88 46 2f             	mov    %al,0x2f(%esi)
 87a538c:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a538f:	39 45 a4             	cmp    %eax,-0x5c(%ebp)
 87a5392:	74 6a                	je     87a53fe <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xb5e>
 87a5394:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 87a5397:	89 75 94             	mov    %esi,-0x6c(%ebp)
 87a539a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a53a0:	8b 47 10             	mov    0x10(%edi),%eax
 87a53a3:	8b 77 14             	mov    0x14(%edi),%esi
 87a53a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a53ad:	00 
 87a53ae:	c1 e0 02             	shl    $0x2,%eax
 87a53b1:	89 34 24             	mov    %esi,(%esp)
 87a53b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a53b8:	e8 03 89 8d ff       	call   807dcc0 <memset@plt>
 87a53bd:	89 34 24             	mov    %esi,(%esp)
 87a53c0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a53c5:	e8 56 23 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a53ca:	8b 07                	mov    (%edi),%eax
 87a53cc:	8b 77 04             	mov    0x4(%edi),%esi
 87a53cf:	83 c7 30             	add    $0x30,%edi
 87a53d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a53d9:	00 
 87a53da:	c1 e0 02             	shl    $0x2,%eax
 87a53dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a53e1:	89 34 24             	mov    %esi,(%esp)
 87a53e4:	e8 d7 88 8d ff       	call   807dcc0 <memset@plt>
 87a53e9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a53ee:	89 34 24             	mov    %esi,(%esp)
 87a53f1:	e8 2a 23 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a53f6:	39 7d 84             	cmp    %edi,-0x7c(%ebp)
 87a53f9:	75 a5                	jne    87a53a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xb00>
 87a53fb:	8b 75 94             	mov    -0x6c(%ebp),%esi
 87a53fe:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87a5401:	83 c6 30             	add    $0x30,%esi
 87a5404:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87a5407:	03 55 a0             	add    -0x60(%ebp),%edx
 87a540a:	89 75 94             	mov    %esi,-0x6c(%ebp)
 87a540d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a5412:	89 55 84             	mov    %edx,-0x7c(%ebp)
 87a5415:	89 0c 24             	mov    %ecx,(%esp)
 87a5418:	e8 03 23 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a541d:	e9 26 fb ff ff       	jmp    87a4f48 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0x6a8>
 87a5422:	8b 55 88             	mov    -0x78(%ebp),%edx
 87a5425:	8b 7d 90             	mov    -0x70(%ebp),%edi
 87a5428:	89 55 80             	mov    %edx,-0x80(%ebp)
 87a542b:	e9 2c f5 ff ff       	jmp    87a495c <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xbc>
 87a5430:	8d 83 e8 33 9a ff    	lea    -0x65cc18(%ebx),%eax
 87a5436:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a543a:	8d 83 90 32 9a ff    	lea    -0x65cd70(%ebx),%eax
 87a5440:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5444:	8d 83 5e 33 9a ff    	lea    -0x65cca2(%ebx),%eax
 87a544a:	c7 44 24 08 fa 00 00 	movl   $0xfa,0x8(%esp)
 87a5451:	00 
 87a5452:	89 04 24             	mov    %eax,(%esp)
 87a5455:	e8 f6 87 8d ff       	call   807dc50 <__assert_fail@plt>
 87a545a:	8d 83 88 34 9a ff    	lea    -0x65cb78(%ebx),%eax
 87a5460:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a5464:	8d 83 f8 32 9a ff    	lea    -0x65cd08(%ebx),%eax
 87a546a:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a546e:	8d 83 76 33 9a ff    	lea    -0x65cc8a(%ebx),%eax
 87a5474:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 87a547b:	00 
 87a547c:	89 04 24             	mov    %eax,(%esp)
 87a547f:	e8 cc 87 8d ff       	call   807dc50 <__assert_fail@plt>
 87a5484:	8d 83 e8 34 9a ff    	lea    -0x65cb18(%ebx),%eax
 87a548a:	eb d4                	jmp    87a5460 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j+0xbc0>
 87a548c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AbstractGroup::SimultaneousMultiply @ 0x87a48a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, TaoCrypt::Integer const&,
   TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::AbstractGroup::SimultaneousMultiply
          (AbstractGroup *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  Integer IVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  Integer *pIVar8;
  Integer *pIVar9;
  int *piVar10;
  Integer *pIVar11;
  char *__function;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  Integer *pIVar18;
  uint uVar19;
  int iVar20;
  Integer *pIVar21;
  Integer *this_00;
  Integer *pIVar22;
  uint in_stack_ffffff48;
  int *local_a8;
  Integer *local_9c;
  Integer *local_98;
  uint local_88;
  Integer *local_80;
  Integer *local_7c;
  int local_78;
  int local_74;
  Integer *local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  Integer *local_60;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  Integer local_30;
  Integer local_2f;
  Integer local_2e;
  Integer local_2d;
  int local_2c;
  void *local_28;
  
  uVar14 = in_stack_ffffff48 & 0xffffff00;
  piVar5 = operator_new__(param_4 * 0xc,uVar14);
  piVar12 = piVar5;
  uVar19 = param_4;
  local_a8 = piVar5;
  if (param_4 != 0) {
    do {
      uVar14 = uVar14 & 0xffffff00;
      pvVar6 = operator_new__(0,uVar14);
      *piVar12 = (int)pvVar6;
      piVar12[2] = (int)pvVar6;
      piVar12[1] = (int)pvVar6;
      uVar19 = uVar19 - 1;
      piVar12 = piVar12 + 3;
    } while (uVar19 != 0);
    local_a8 = piVar5 + param_4 * 3;
  }
  uVar14 = uVar14 & 0xffffff00;
  operator_delete__(0,uVar14);
  if (param_4 != 0) {
    uVar14 = uVar14 & 0xffffff00;
    local_70 = operator_new__(param_4 * 0x30,uVar14);
    operator_delete__(0,uVar14 & 0xffffff00);
    if (*(int *)(param_3 + 0xc) == 1) {
LAB_087a5430:
                    /* WARNING: Subroutine does not return */
      __assert_fail("expBegin->NotNegative()",
                    "/media/sf_First/Library3rd/MySQL/Build/mysql-connector-c-6.0.2/extlib/yassl/taocrypt/src/algebra.cpp"
                    ,0xfa,
                    "virtual void TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, const TaoCrypt::Integer&, const TaoCrypt::Integer*, unsigned int) const"
                   );
    }
    local_80 = local_70 + param_4 * 0x30;
    local_78 = 0;
    local_88 = 0;
    local_60 = local_70;
    do {
      IVar4 = (Integer)(**(code **)(*(int *)this + 0x18))(this);
      Integer::Integer((Integer *)&local_5c,param_3);
      pIVar8 = (Integer *)Integer::One();
      Integer::Integer((Integer *)&local_4c,pIVar8);
      local_3c = 0;
      local_38 = 0;
      local_2e = (Integer)0x1;
      local_2d = (Integer)0x0;
      local_30 = IVar4;
      uVar19 = Integer::BitCount(param_3);
      uVar14 = 1;
      if ((((0x11 < uVar19) && (uVar14 = 2, 0x18 < uVar19)) && (uVar14 = 3, 0x46 < uVar19)) &&
         ((uVar14 = 4, 0xc5 < uVar19 && (uVar14 = 5, 0x21b < uVar19)))) {
        uVar14 = 7 - (uVar19 < 0x59b);
      }
      local_3c = uVar14;
      Integer::operator<<=((Integer *)&local_4c,uVar14);
      if (local_80 == local_70) {
        iVar15 = (int)local_80 - (int)local_60 >> 4;
        uVar19 = iVar15 * 0x55555556 + 1;
        iVar20 = uVar19 * 0x30;
        local_7c = operator_new__(iVar20,uVar14 & 0xffffff00);
        pIVar8 = local_7c;
        pIVar21 = local_60;
        if (uVar19 <= (uint)(iVar15 * -0x55555555)) {
          __function = 
          "mySTL::vector<T>::vector(size_t, const mySTL::vector<T>&) [with T = TaoCrypt::WindowSlider]"
          ;
          goto LAB_087a5460;
        }
        for (; pIVar21 != local_80; pIVar21 = pIVar21 + 0x30) {
          Integer::Integer(pIVar8,pIVar21);
          Integer::Integer(pIVar8 + 0x10,pIVar21 + 0x10);
          *(undefined4 *)(pIVar8 + 0x20) = *(undefined4 *)(pIVar21 + 0x20);
          *(undefined4 *)(pIVar8 + 0x24) = *(undefined4 *)(pIVar21 + 0x24);
          *(undefined4 *)(pIVar8 + 0x28) = *(undefined4 *)(pIVar21 + 0x28);
          pIVar8[0x2c] = pIVar21[0x2c];
          pIVar8[0x2d] = pIVar21[0x2d];
          pIVar8[0x2e] = pIVar21[0x2e];
          pIVar8[0x2f] = pIVar21[0x2f];
          pIVar8 = pIVar8 + 0x30;
        }
        Integer::Integer(pIVar8,(Integer *)&local_5c);
        pIVar9 = (Integer *)&local_4c;
        Integer::Integer(pIVar8 + 0x10,(Integer *)&local_4c);
        *(uint *)(pIVar8 + 0x20) = local_3c;
        *(undefined4 *)(pIVar8 + 0x24) = local_38;
        *(undefined4 *)(pIVar8 + 0x28) = local_34;
        pIVar8[0x2c] = local_30;
        pIVar8[0x2d] = local_2f;
        pIVar8[0x2e] = local_2e;
        pIVar8[0x2f] = local_2d;
        pIVar21 = local_60;
        if (local_60 != local_70) {
          do {
            pvVar6 = *(void **)(pIVar21 + 0x14);
            uVar19 = 0;
            memset(pvVar6,0,*(int *)(pIVar21 + 0x10) << 2);
            operator_delete__(pvVar6,uVar19 & 0xffffff00);
            pvVar6 = *(void **)(pIVar21 + 4);
            pIVar22 = pIVar21 + 0x30;
            uVar19 = 0;
            memset(pvVar6,0,*(int *)pIVar21 << 2);
            pIVar9 = (Integer *)(uVar19 & 0xffffff00);
            operator_delete__(pvVar6,pIVar9);
            pIVar21 = pIVar22;
          } while (local_80 != pIVar22);
        }
        local_80 = local_7c + iVar20;
        operator_delete__(local_60,(uint)pIVar9 & 0xffffff00);
      }
      else {
        Integer::Integer(local_70,(Integer *)&local_5c);
        Integer::Integer(local_70 + 0x10,(Integer *)&local_4c);
        *(uint *)(local_70 + 0x20) = local_3c;
        *(undefined4 *)(local_70 + 0x24) = local_38;
        *(undefined4 *)(local_70 + 0x28) = local_34;
        local_70[0x2c] = local_30;
        local_70[0x2d] = local_2f;
        local_70[0x2e] = local_2e;
        local_70[0x2f] = local_2d;
        local_7c = local_60;
        pIVar8 = local_70;
      }
      pvVar6 = local_48;
      local_70 = pIVar8 + 0x30;
      pIVar21 = (Integer *)0x0;
      uVar19 = 0;
      memset(local_48,0,local_4c << 2);
      operator_delete__(pvVar6,uVar19 & 0xffffff00);
      pvVar6 = local_58;
      uVar19 = 0;
      memset(local_58,0,local_5c << 2);
      operator_delete__(pvVar6,uVar19 & 0xffffff00);
      pIVar8 = local_7c + local_78 * 4;
      iVar20 = Integer::WordCount(pIVar8);
      if (pIVar8[0x2e] == (Integer)0x0) {
        pIVar21 = *(Integer **)(pIVar8 + 0x20);
      }
      pIVar8[0x2e] = (Integer)0x0;
      while (pIVar9 = pIVar21, cVar3 = Integer::GetBit(pIVar8,(uint)pIVar21), cVar3 == '\0') {
        if ((Integer *)(iVar20 << 5) <= pIVar21) {
          pIVar8[0x2f] = (Integer)0x1;
          goto LAB_087a501c;
        }
        pIVar21 = pIVar21 + 1;
      }
      Integer::operator>>=(pIVar8,(uint)pIVar21);
      *(Integer **)(pIVar8 + 0x24) = pIVar21 + *(int *)(pIVar8 + 0x24);
      pIVar9 = (Integer *)(1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f));
      uVar7 = Integer::Modulo(pIVar8,(uint)pIVar9);
      *(undefined4 *)(pIVar8 + 0x28) = uVar7;
      if (pIVar8[0x2c] == (Integer)0x0) {
LAB_087a5018:
        pIVar8[0x2d] = (Integer)0x0;
      }
      else {
        pIVar9 = *(Integer **)(pIVar8 + 0x20);
        cVar3 = Integer::GetBit(pIVar8,(uint)pIVar9);
        if (cVar3 == '\0') goto LAB_087a5018;
        pIVar9 = pIVar8 + 0x10;
        pIVar8[0x2d] = (Integer)0x1;
        *(int *)(pIVar8 + 0x28) =
             (1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f)) - *(int *)(pIVar8 + 0x28);
        Integer::operator+=(pIVar8,pIVar9);
      }
LAB_087a501c:
      pIVar21 = (Integer *)(**(code **)(*(int *)this + 0xc))(this);
      piVar10 = (int *)((int)piVar5 + local_78);
      uVar19 = 1 << ((char)*(undefined4 *)(pIVar8 + 0x20) - 1U & 0x1f);
      piVar12 = (int *)piVar10[1];
      uVar14 = (int)piVar12 - *piVar10 >> 4;
      if (uVar19 != uVar14) {
        if (uVar19 < uVar14) {
          piVar16 = (int *)(*piVar10 + uVar19 * 0x10);
          piVar17 = piVar16;
          if (piVar12 != piVar16) {
            do {
              iVar20 = *piVar17;
              pvVar6 = (void *)piVar17[1];
              piVar17 = piVar17 + 4;
              uVar19 = 0;
              memset(pvVar6,0,iVar20 << 2);
              operator_delete__(pvVar6,uVar19 & 0xffffff00);
            } while (piVar12 != piVar17);
            piVar12 = (int *)piVar10[1];
          }
          piVar10[1] = (int)piVar12 - ((int)piVar12 - (int)piVar16 & 0xfffffff0U);
        }
        else {
          pIVar9 = (Integer *)((uint)pIVar9 & 0xffffff00);
          pIVar11 = operator_new__(uVar19 * 0x10,pIVar9);
          pIVar22 = (Integer *)piVar10[1];
          pIVar8 = (Integer *)*piVar10;
          uVar14 = (int)pIVar22 - (int)pIVar8 >> 4;
          if (uVar19 <= uVar14) {
            __function = 
            "mySTL::vector<T>::vector(size_t, const mySTL::vector<T>&) [with T = TaoCrypt::Integer]"
            ;
LAB_087a5460:
                    /* WARNING: Subroutine does not return */
            __assert_fail("n > other.size()",
                          "/media/sf_First/Library3rd/MySQL/Build/mysql-connector-c-6.0.2/extlib/yassl/taocrypt/mySTL/vector.hpp"
                          ,0x90,__function);
          }
          this_00 = pIVar11;
          local_9c = pIVar22;
          local_98 = pIVar11;
          if (pIVar22 != pIVar8) {
            do {
              pIVar18 = pIVar8 + 0x10;
              local_98 = this_00 + 0x10;
              pIVar9 = pIVar8;
              Integer::Integer(this_00,pIVar8);
              pIVar8 = pIVar18;
              this_00 = local_98;
            } while (pIVar22 != pIVar18);
            local_9c = (Integer *)*piVar10;
            pIVar22 = (Integer *)piVar10[1];
            uVar14 = (int)pIVar22 - (int)local_9c >> 4;
          }
          iVar15 = uVar19 - uVar14;
          pIVar8 = local_98;
          iVar20 = iVar15;
          if (iVar15 != 0) {
            do {
              pIVar9 = pIVar21;
              Integer::Integer(pIVar8,pIVar21);
              iVar20 = iVar20 + -1;
              pIVar8 = pIVar8 + 0x10;
            } while (iVar20 != 0);
            local_98 = local_98 + iVar15 * 0x10;
            local_9c = (Integer *)*piVar10;
            pIVar22 = (Integer *)piVar10[1];
          }
          *piVar10 = (int)pIVar11;
          piVar10[1] = (int)local_98;
          piVar10[2] = (int)(pIVar11 + uVar19 * 0x10);
          for (pIVar8 = local_9c; pIVar22 != pIVar8; pIVar8 = pIVar8 + 0x10) {
            pvVar6 = *(void **)(pIVar8 + 4);
            uVar19 = 0;
            memset(pvVar6,0,*(int *)pIVar8 << 2);
            pIVar9 = (Integer *)(uVar19 & 0xffffff00);
            operator_delete__(pvVar6,pIVar9);
          }
          operator_delete__(local_9c,(uint)pIVar9 & 0xffffff00);
        }
      }
      local_88 = local_88 + 1;
      if (param_4 <= local_88) goto LAB_087a495c;
      local_78 = local_78 + 0xc;
      if (*(int *)(param_3 + 0x1c) == 1) goto LAB_087a5430;
      local_60 = local_7c;
      param_3 = param_3 + 0x10;
    } while( true );
  }
  local_7c = (Integer *)0x0;
  local_70 = (Integer *)0x0;
LAB_087a495c:
  Integer::Integer((Integer *)&local_2c,param_2);
  if (param_4 != 0) {
    local_80 = (Integer *)0x0;
    do {
      local_64 = 0;
      bVar2 = 0;
      local_68 = 0;
      do {
        pIVar8 = local_7c + local_64 * 4;
        if ((pIVar8[0x2f] == (Integer)0x0) && ((Integer *)*(int *)(pIVar8 + 0x24) == local_80)) {
          iVar20 = (*(uint *)(pIVar8 + 0x28) >> 1) * 0x10 + *(int *)((int)piVar5 + local_64);
          if (pIVar8[0x2d] == (Integer)0x0) {
            (**(code **)(*(int *)this + 0x24))(this,iVar20,(Integer *)&local_2c);
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x24);
            uVar7 = (**(code **)(*(int *)this + 0x14))(this,(Integer *)&local_2c);
            (*pcVar1)(this,iVar20,uVar7);
          }
          uVar19 = 0;
          iVar20 = Integer::WordCount(pIVar8);
          if (pIVar8[0x2e] == (Integer)0x0) {
            uVar19 = *(uint *)(pIVar8 + 0x20);
          }
          pIVar8[0x2e] = (Integer)0x0;
          while (cVar3 = Integer::GetBit(pIVar8,uVar19), cVar3 == '\0') {
            if ((uint)(iVar20 << 5) <= uVar19) {
              pIVar8[0x2f] = (Integer)0x1;
              goto LAB_087a49a0;
            }
            uVar19 = uVar19 + 1;
          }
          Integer::operator>>=(pIVar8,uVar19);
          *(uint *)(pIVar8 + 0x24) = *(int *)(pIVar8 + 0x24) + uVar19;
          uVar7 = Integer::Modulo(pIVar8,1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f));
          *(undefined4 *)(pIVar8 + 0x28) = uVar7;
          if ((pIVar8[0x2c] == (Integer)0x0) ||
             (cVar3 = Integer::GetBit(pIVar8,*(uint *)(pIVar8 + 0x20)), cVar3 == '\0')) {
            pIVar8[0x2d] = (Integer)0x0;
          }
          else {
            pIVar8[0x2d] = (Integer)0x1;
            *(int *)(pIVar8 + 0x28) =
                 (1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f)) - *(int *)(pIVar8 + 0x28);
            Integer::operator+=(pIVar8,pIVar8 + 0x10);
          }
        }
LAB_087a49a0:
        if (bVar2 == 0) {
          bVar2 = (byte)pIVar8[0x2f] ^ 1;
        }
        local_68 = local_68 + 1;
        local_64 = local_64 + 0xc;
      } while (local_68 < param_4);
      if (bVar2 == 0) goto code_r0x087a4ada;
      pIVar8 = (Integer *)(**(code **)(*(int *)this + 0x1c))(this,(Integer *)&local_2c);
      Integer::operator=((Integer *)&local_2c,pIVar8);
      local_80 = (Integer *)((int)local_80 + 1);
    } while( true );
  }
LAB_087a4c7b:
  uVar19 = 0;
  memset(local_28,0,local_2c << 2);
  uVar19 = uVar19 & 0xffffff00;
  operator_delete__(local_28,uVar19);
  for (pIVar8 = local_7c; pIVar8 != local_70; pIVar8 = pIVar8 + 0x30) {
    pvVar6 = *(void **)(pIVar8 + 0x14);
    uVar19 = 0;
    memset(pvVar6,0,*(int *)(pIVar8 + 0x10) << 2);
    operator_delete__(pvVar6,uVar19 & 0xffffff00);
    pvVar6 = *(void **)(pIVar8 + 4);
    uVar19 = 0;
    memset(pvVar6,0,*(int *)pIVar8 << 2);
    uVar19 = uVar19 & 0xffffff00;
    operator_delete__(pvVar6,uVar19);
  }
  uVar19 = uVar19 & 0xffffff00;
  operator_delete__(local_7c,uVar19);
  for (piVar12 = piVar5; piVar12 != local_a8; piVar12 = piVar12 + 3) {
    piVar10 = (int *)piVar12[1];
    piVar16 = (int *)*piVar12;
    if (piVar10 != piVar16) {
      do {
        iVar20 = *piVar16;
        pvVar6 = (void *)piVar16[1];
        piVar16 = piVar16 + 4;
        uVar19 = 0;
        memset(pvVar6,0,iVar20 << 2);
        uVar19 = uVar19 & 0xffffff00;
        operator_delete__(pvVar6,uVar19);
      } while (piVar10 != piVar16);
      piVar10 = (int *)*piVar12;
    }
    uVar19 = uVar19 & 0xffffff00;
    operator_delete__(piVar10,uVar19);
  }
  operator_delete__(piVar5,uVar19 & 0xffffff00);
  return;
code_r0x087a4ada:
  local_6c = 0;
  local_74 = 0;
  do {
    piVar12 = (int *)((int)piVar5 + local_74);
    Integer::operator=(param_1,(Integer *)(*piVar12 + -0x10 + (piVar12[1] - *piVar12 & 0xfffffff0U))
                      );
    iVar20 = *piVar12;
    uVar19 = piVar12[1] - iVar20 >> 4;
    if (1 < uVar19) {
      local_60 = (Integer *)(uVar19 - 2);
      if (0 < (int)local_60) {
        iVar13 = (uVar19 - 1) * 0x10;
        iVar15 = uVar19 * 0x10 + -0x20;
        while( true ) {
          (**(code **)(*(int *)this + 0x24))(this,iVar20 + iVar15,iVar20 + iVar13);
          (**(code **)(*(int *)this + 0x24))(this,param_1,iVar15 + *piVar12);
          local_60 = (Integer *)((int)local_60 + -1);
          iVar13 = iVar13 + -0x10;
          if ((int)local_60 < 1) break;
          iVar20 = *piVar12;
          iVar15 = iVar15 + -0x10;
        }
        iVar20 = *piVar12;
      }
      (**(code **)(*(int *)this + 0x24))(this,iVar20,iVar20 + 0x10);
      pcVar1 = *(code **)(*(int *)this + 0x10);
      iVar20 = *piVar12;
      uVar7 = (**(code **)(*(int *)this + 0x1c))(this,param_1);
      pIVar8 = (Integer *)(*pcVar1)(this,uVar7,iVar20);
      Integer::operator=(param_1,pIVar8);
    }
    local_6c = local_6c + 1;
    local_74 = local_74 + 0xc;
    param_1 = param_1 + 0x10;
  } while (local_6c < param_4);
  goto LAB_087a4c7b;
}

```

---

## Subtract

```asm
// === 087a4040 TaoCrypt::AbstractGroup::Subtract  [0x087a4040-0x87a40cf] ===
 87a4040:	55                   	push   %ebp
 87a4041:	89 e5                	mov    %esp,%ebp
 87a4043:	83 ec 48             	sub    $0x48,%esp
 87a4046:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a4049:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a404c:	e8 a7 ed f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a4051:	81 c3 47 8b bc 00    	add    $0xbc8b47,%ebx
 87a4057:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a405a:	8b 75 08             	mov    0x8(%ebp),%esi
 87a405d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a4060:	8d 7d d8             	lea    -0x28(%ebp),%edi
 87a4063:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4067:	89 3c 24             	mov    %edi,(%esp)
 87a406a:	e8 01 b2 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a406f:	8b 06                	mov    (%esi),%eax
 87a4071:	8b 50 10             	mov    0x10(%eax),%edx
 87a4074:	89 34 24             	mov    %esi,(%esp)
 87a4077:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87a407a:	8b 55 10             	mov    0x10(%ebp),%edx
 87a407d:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a4081:	ff 50 14             	call   *0x14(%eax)
 87a4084:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a4088:	89 34 24             	mov    %esi,(%esp)
 87a408b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a408f:	ff 55 d4             	call   *-0x2c(%ebp)
 87a4092:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a4095:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a409c:	00 
 87a409d:	89 34 24             	mov    %esi,(%esp)
 87a40a0:	89 c7                	mov    %eax,%edi
 87a40a2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a40a5:	c1 e0 02             	shl    $0x2,%eax
 87a40a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a40ac:	e8 0f 9c 8d ff       	call   807dcc0 <memset@plt>
 87a40b1:	89 34 24             	mov    %esi,(%esp)
 87a40b4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a40b9:	e8 62 36 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a40be:	89 f8                	mov    %edi,%eax
 87a40c0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a40c3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a40c6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a40c9:	89 ec                	mov    %ebp,%esp
 87a40cb:	5d                   	pop    %ebp
 87a40cc:	c3                   	ret
 87a40cd:	90                   	nop
 87a40ce:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::AbstractGroup::Subtract @ 0x87a4040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

undefined4 __thiscall
TaoCrypt::AbstractGroup::Subtract(AbstractGroup *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c,param_1);
  pcVar1 = *(code **)(*(int *)this + 0x10);
  uVar2 = (**(code **)(*(int *)this + 0x14))(this,param_2);
  uVar2 = (*pcVar1)(this,(Integer *)&local_2c,uVar2);
  uVar3 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar3 & 0xffffff00);
  return uVar2;
}

```

