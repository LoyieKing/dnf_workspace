# TaoCrypt__AbstractRing

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CascadeExponentiate

```asm
// === 087a4840 TaoCrypt::AbstractRing::CascadeExponentiate  [0x087a4840-0x87a489f] ===
 87a4840:	55                   	push   %ebp
 87a4841:	89 e5                	mov    %esp,%ebp
 87a4843:	83 ec 28             	sub    $0x28,%esp
 87a4846:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a4849:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a484c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a484f:	8b 75 08             	mov    0x8(%ebp),%esi
 87a4852:	e8 a1 e5 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a4857:	81 c3 41 83 bc 00    	add    $0xbc8341,%ebx
 87a485d:	8b 10                	mov    (%eax),%edx
 87a485f:	89 04 24             	mov    %eax,(%esp)
 87a4862:	ff 52 5c             	call   *0x5c(%edx)
 87a4865:	8b 55 1c             	mov    0x1c(%ebp),%edx
 87a4868:	89 34 24             	mov    %esi,(%esp)
 87a486b:	89 54 24 14          	mov    %edx,0x14(%esp)
 87a486f:	8b 55 18             	mov    0x18(%ebp),%edx
 87a4872:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a4876:	89 54 24 10          	mov    %edx,0x10(%esp)
 87a487a:	8b 55 14             	mov    0x14(%ebp),%edx
 87a487d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a4881:	8b 55 10             	mov    0x10(%ebp),%edx
 87a4884:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a4888:	e8 43 f8 ff ff       	call   87a40d0 <_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_>
 87a488d:	89 f0                	mov    %esi,%eax
 87a488f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a4892:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a4895:	83 ec 04             	sub    $0x4,%esp
 87a4898:	89 ec                	mov    %ebp,%esp
 87a489a:	5d                   	pop    %ebp
 87a489b:	c2 04 00             	ret    $0x4
 87a489e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::AbstractRing::CascadeExponentiate @ 0x87a4840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractRing::CascadeExponentiate
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(int *)param_2 + 0x5c))(param_2);
  AbstractGroup::CascadeScalarMultiply(param_1,pIVar1,param_3,param_4);
  return param_1;
}

```

---

## Divide

```asm
// === 087a3fb0 TaoCrypt::AbstractRing::Divide  [0x087a3fb0-0x87a403f] ===
 87a3fb0:	55                   	push   %ebp
 87a3fb1:	89 e5                	mov    %esp,%ebp
 87a3fb3:	83 ec 48             	sub    $0x48,%esp
 87a3fb6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a3fb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a3fbc:	e8 37 ee f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3fc1:	81 c3 d7 8b bc 00    	add    $0xbc8bd7,%ebx
 87a3fc7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a3fca:	8b 75 08             	mov    0x8(%ebp),%esi
 87a3fcd:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a3fd0:	8d 7d d8             	lea    -0x28(%ebp),%edi
 87a3fd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a3fd7:	89 3c 24             	mov    %edi,(%esp)
 87a3fda:	e8 91 b2 fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a3fdf:	8b 06                	mov    (%esi),%eax
 87a3fe1:	8b 50 40             	mov    0x40(%eax),%edx
 87a3fe4:	89 34 24             	mov    %esi,(%esp)
 87a3fe7:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87a3fea:	8b 55 10             	mov    0x10(%ebp),%edx
 87a3fed:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3ff1:	ff 50 44             	call   *0x44(%eax)
 87a3ff4:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a3ff8:	89 34 24             	mov    %esi,(%esp)
 87a3ffb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3fff:	ff 55 d4             	call   *-0x2c(%ebp)
 87a4002:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a4005:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a400c:	00 
 87a400d:	89 34 24             	mov    %esi,(%esp)
 87a4010:	89 c7                	mov    %eax,%edi
 87a4012:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a4015:	c1 e0 02             	shl    $0x2,%eax
 87a4018:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a401c:	e8 9f 9c 8d ff       	call   807dcc0 <memset@plt>
 87a4021:	89 34 24             	mov    %esi,(%esp)
 87a4024:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a4029:	e8 f2 36 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a402e:	89 f8                	mov    %edi,%eax
 87a4030:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a4033:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a4036:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a4039:	89 ec                	mov    %ebp,%esp
 87a403b:	5d                   	pop    %ebp
 87a403c:	c3                   	ret
 87a403d:	90                   	nop
 87a403e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::AbstractRing::Divide @ 0x87a3fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::Divide(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

undefined4 __thiscall
TaoCrypt::AbstractRing::Divide(AbstractRing *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c,param_1);
  pcVar1 = *(code **)(*(int *)this + 0x40);
  uVar2 = (**(code **)(*(int *)this + 0x44))(this,param_2);
  uVar2 = (*pcVar1)(this,(Integer *)&local_2c,uVar2);
  uVar3 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar3 & 0xffffff00);
  return uVar2;
}

```

---

## Exponentiate

```asm
// === 087a3e60 TaoCrypt::AbstractRing::Exponentiate  [0x087a3e60-0x87a3ebf] ===
 87a3e60:	55                   	push   %ebp
 87a3e61:	89 e5                	mov    %esp,%ebp
 87a3e63:	83 ec 38             	sub    $0x38,%esp
 87a3e66:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a3e69:	e8 8a ef f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3e6e:	81 c3 2a 8d bc 00    	add    $0xbc8d2a,%ebx
 87a3e74:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a3e77:	8b 75 08             	mov    0x8(%ebp),%esi
 87a3e7a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a3e7d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a3e80:	89 34 24             	mov    %esi,(%esp)
 87a3e83:	e8 08 b7 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a3e88:	8b 55 14             	mov    0x14(%ebp),%edx
 87a3e8b:	8b 07                	mov    (%edi),%eax
 87a3e8d:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a3e91:	89 3c 24             	mov    %edi,(%esp)
 87a3e94:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a3e98:	8b 55 10             	mov    0x10(%ebp),%edx
 87a3e9b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 87a3ea2:	00 
 87a3ea3:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a3ea7:	ff 50 58             	call   *0x58(%eax)
 87a3eaa:	89 f0                	mov    %esi,%eax
 87a3eac:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a3eaf:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a3eb2:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a3eb5:	89 ec                	mov    %ebp,%esp
 87a3eb7:	5d                   	pop    %ebp
 87a3eb8:	c2 04 00             	ret    $0x4
 87a3ebb:	90                   	nop
 87a3ebc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AbstractRing::Exponentiate @ 0x87a3e60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractRing::Exponentiate(Integer *param_1,Integer *param_2)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  Integer::Integer(param_1);
  (**(code **)(*(int *)param_2 + 0x58))(param_2,param_1,in_stack_0000000c,in_stack_00000010,1);
  return param_1;
}

```

---

## SimultaneousExponentiate

```asm
// === 087a5490 TaoCrypt::AbstractRing::SimultaneousExponentiate  [0x087a5490-0x87a54df] ===
 87a5490:	55                   	push   %ebp
 87a5491:	89 e5                	mov    %esp,%ebp
 87a5493:	53                   	push   %ebx
 87a5494:	83 ec 24             	sub    $0x24,%esp
 87a5497:	8b 45 08             	mov    0x8(%ebp),%eax
 87a549a:	e8 59 d9 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a549f:	81 c3 f9 76 bc 00    	add    $0xbc76f9,%ebx
 87a54a5:	8b 10                	mov    (%eax),%edx
 87a54a7:	89 04 24             	mov    %eax,(%esp)
 87a54aa:	ff 52 5c             	call   *0x5c(%edx)
 87a54ad:	8b 55 18             	mov    0x18(%ebp),%edx
 87a54b0:	89 54 24 10          	mov    %edx,0x10(%esp)
 87a54b4:	8b 55 14             	mov    0x14(%ebp),%edx
 87a54b7:	89 04 24             	mov    %eax,(%esp)
 87a54ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87a54be:	8b 55 10             	mov    0x10(%ebp),%edx
 87a54c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a54c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a54c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a54cc:	e8 cf f3 ff ff       	call   87a48a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j>
 87a54d1:	83 c4 24             	add    $0x24,%esp
 87a54d4:	5b                   	pop    %ebx
 87a54d5:	5d                   	pop    %ebp
 87a54d6:	c3                   	ret
 87a54d7:	90                   	nop
 87a54d8:	90                   	nop
 87a54d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AbstractRing::SimultaneousExponentiate @ 0x87a5490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&,
   TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::AbstractRing::SimultaneousExponentiate
          (AbstractRing *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  AbstractGroup *this_00;
  
  this_00 = (AbstractGroup *)(**(code **)(*(int *)this + 0x5c))(this);
  AbstractGroup::SimultaneousMultiply(this_00,param_1,param_2,param_3,param_4);
  return;
}

```

---

## Square

```asm
// === 087a3d60 TaoCrypt::AbstractRing::Square  [0x087a3d60-0x87a3d7f] ===
 87a3d60:	55                   	push   %ebp
 87a3d61:	89 e5                	mov    %esp,%ebp
 87a3d63:	83 ec 18             	sub    $0x18,%esp
 87a3d66:	8b 45 08             	mov    0x8(%ebp),%eax
 87a3d69:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a3d6c:	8b 08                	mov    (%eax),%ecx
 87a3d6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a3d72:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a3d76:	89 04 24             	mov    %eax,(%esp)
 87a3d79:	ff 51 40             	call   *0x40(%ecx)
 87a3d7c:	c9                   	leave
 87a3d7d:	c3                   	ret
 87a3d7e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::AbstractRing::Square @ 0x87a3d60

/* TaoCrypt::AbstractRing::Square(TaoCrypt::Integer const&) const */

void __thiscall TaoCrypt::AbstractRing::Square(AbstractRing *this,Integer *param_1)

{
  (**(code **)(*(int *)this + 0x40))(this,param_1,param_1);
  return;
}

```

