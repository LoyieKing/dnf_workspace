# __cxxabiv1____si_class_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## __do_dyncast

```asm
// === 08724da0 __cxxabiv1::__si_class_type_info::__do_dyncast  [0x08724da0-0x8724ecf] ===
 8724da0:	55                   	push   %ebp
 8724da1:	89 e5                	mov    %esp,%ebp
 8724da3:	83 ec 58             	sub    $0x58,%esp
 8724da6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8724da9:	8b 55 08             	mov    0x8(%ebp),%edx
 8724dac:	8b 7d 14             	mov    0x14(%ebp),%edi
 8724daf:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8724db2:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8724db5:	8b 72 04             	mov    0x4(%edx),%esi
 8724db8:	8b 47 04             	mov    0x4(%edi),%eax
 8724dbb:	e8 38 e0 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724dc0:	81 c3 d8 7d c4 00    	add    $0xc47dd8,%ebx
 8724dc6:	39 c6                	cmp    %eax,%esi
 8724dc8:	74 25                	je     8724def <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4f>
 8724dca:	0f b6 0e             	movzbl (%esi),%ecx
 8724dcd:	80 f9 2a             	cmp    $0x2a,%cl
 8724dd0:	74 5e                	je     8724e30 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x90>
 8724dd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724dd6:	89 34 24             	mov    %esi,(%esp)
 8724dd9:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8724ddc:	88 4d e0             	mov    %cl,-0x20(%ebp)
 8724ddf:	e8 fc 96 95 ff       	call   807e4e0 <strcmp@plt>
 8724de4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8724de7:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
 8724deb:	85 c0                	test   %eax,%eax
 8724ded:	75 41                	jne    8724e30 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x90>
 8724def:	8b 45 24             	mov    0x24(%ebp),%eax
 8724df2:	8b 55 18             	mov    0x18(%ebp),%edx
 8724df5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8724df8:	89 10                	mov    %edx,(%eax)
 8724dfa:	89 48 04             	mov    %ecx,0x4(%eax)
 8724dfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8724e00:	85 c0                	test   %eax,%eax
 8724e02:	0f 88 b0 00 00 00    	js     8724eb8 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x118>
 8724e08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8724e0b:	01 d0                	add    %edx,%eax
 8724e0d:	8b 55 24             	mov    0x24(%ebp),%edx
 8724e10:	39 45 20             	cmp    %eax,0x20(%ebp)
 8724e13:	0f 94 c0             	sete   %al
 8724e16:	0f b6 c0             	movzbl %al,%eax
 8724e19:	8d 44 80 01          	lea    0x1(%eax,%eax,4),%eax
 8724e1d:	89 42 0c             	mov    %eax,0xc(%edx)
 8724e20:	31 c0                	xor    %eax,%eax
 8724e22:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724e25:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724e28:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724e2b:	89 ec                	mov    %ebp,%esp
 8724e2d:	5d                   	pop    %ebp
 8724e2e:	c3                   	ret
 8724e2f:	90                   	nop
 8724e30:	8b 45 20             	mov    0x20(%ebp),%eax
 8724e33:	39 45 18             	cmp    %eax,0x18(%ebp)
 8724e36:	74 48                	je     8724e80 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0xe0>
 8724e38:	8b 42 08             	mov    0x8(%edx),%eax
 8724e3b:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8724e3e:	8b 10                	mov    (%eax),%edx
 8724e40:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8724e44:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8724e47:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8724e4b:	89 04 24             	mov    %eax,(%esp)
 8724e4e:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8724e52:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8724e55:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8724e59:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8724e5c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8724e60:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8724e63:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8724e67:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8724e6a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8724e6e:	ff 52 1c             	call   *0x1c(%edx)
 8724e71:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724e74:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724e77:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724e7a:	89 ec                	mov    %ebp,%esp
 8724e7c:	5d                   	pop    %ebp
 8724e7d:	c3                   	ret
 8724e7e:	66 90                	xchg   %ax,%ax
 8724e80:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8724e83:	8b 40 04             	mov    0x4(%eax),%eax
 8724e86:	39 c6                	cmp    %eax,%esi
 8724e88:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8724e8b:	74 1b                	je     8724ea8 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x108>
 8724e8d:	80 f9 2a             	cmp    $0x2a,%cl
 8724e90:	74 a6                	je     8724e38 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 8724e92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724e96:	89 34 24             	mov    %esi,(%esp)
 8724e99:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8724e9c:	e8 3f 96 95 ff       	call   807e4e0 <strcmp@plt>
 8724ea1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8724ea4:	85 c0                	test   %eax,%eax
 8724ea6:	75 90                	jne    8724e38 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 8724ea8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8724eab:	31 c0                	xor    %eax,%eax
 8724ead:	8b 55 24             	mov    0x24(%ebp),%edx
 8724eb0:	89 4a 08             	mov    %ecx,0x8(%edx)
 8724eb3:	eb bc                	jmp    8724e71 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0xd1>
 8724eb5:	8d 76 00             	lea    0x0(%esi),%esi
 8724eb8:	31 c0                	xor    %eax,%eax
 8724eba:	83 7d 0c fe          	cmpl   $0xfffffffe,0xc(%ebp)
 8724ebe:	75 b1                	jne    8724e71 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0xd1>
 8724ec0:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8724ec3:	c7 41 0c 01 00 00 00 	movl   $0x1,0xc(%ecx)
 8724eca:	eb a5                	jmp    8724e71 <_ZNK10__cxxabiv120__si_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0xd1>
 8724ecc:	90                   	nop
 8724ecd:	90                   	nop
 8724ece:	90                   	nop
 8724ecf:	90                   	nop

```

```c
// __cxxabiv1::__si_class_type_info::__do_dyncast @ 0x8724da0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,int param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int *param_8)

{
  char cVar1;
  char *__s1;
  int iVar2;
  undefined4 uVar3;
  
  __s1 = *(char **)(this + 4);
  if ((__s1 != *(char **)(param_4 + 4)) &&
     ((cVar1 = *__s1, cVar1 == '*' || (iVar2 = strcmp(__s1,*(char **)(param_4 + 4)), iVar2 != 0))))
  {
    if ((param_5 == param_7) &&
       ((__s1 == *(char **)(param_6 + 4) ||
        ((cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_6 + 4)), iVar2 == 0)))))) {
      param_8[2] = param_3;
      return 0;
    }
    uVar3 = (**(code **)(**(int **)(this + 8) + 0x1c))
                      (*(int **)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  if (-1 < param_1) {
    param_8[3] = (uint)(param_7 == param_1 + param_5) * 5 + 1;
    return 0;
  }
  if (param_1 != -2) {
    return 0;
  }
  param_8[3] = 1;
  return 0;
}

```

---

## __do_find_public_src

```asm
// === 08724ed0 __cxxabiv1::__si_class_type_info::__do_find_public_src  [0x08724ed0-0x8724f6f] ===
 8724ed0:	55                   	push   %ebp
 8724ed1:	89 e5                	mov    %esp,%ebp
 8724ed3:	83 ec 58             	sub    $0x58,%esp
 8724ed6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8724ed9:	8b 75 10             	mov    0x10(%ebp),%esi
 8724edc:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8724edf:	8b 7d 18             	mov    0x18(%ebp),%edi
 8724ee2:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8724ee5:	8b 55 08             	mov    0x8(%ebp),%edx
 8724ee8:	e8 0b df ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724eed:	81 c3 ab 7c c4 00    	add    $0xc47cab,%ebx
 8724ef3:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8724ef6:	39 f7                	cmp    %esi,%edi
 8724ef8:	74 2e                	je     8724f28 <_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x58>
 8724efa:	8b 42 08             	mov    0x8(%edx),%eax
 8724efd:	8b 10                	mov    (%eax),%edx
 8724eff:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8724f03:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8724f06:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8724f0a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8724f0e:	89 04 24             	mov    %eax,(%esp)
 8724f11:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8724f15:	ff 52 20             	call   *0x20(%edx)
 8724f18:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724f1b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724f1e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724f21:	89 ec                	mov    %ebp,%esp
 8724f23:	5d                   	pop    %ebp
 8724f24:	c3                   	ret
 8724f25:	8d 76 00             	lea    0x0(%esi),%esi
 8724f28:	8b 42 04             	mov    0x4(%edx),%eax
 8724f2b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8724f2e:	8b 41 04             	mov    0x4(%ecx),%eax
 8724f31:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 8724f34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8724f37:	74 2a                	je     8724f63 <_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x93>
 8724f39:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8724f3c:	80 38 2a             	cmpb   $0x2a,(%eax)
 8724f3f:	74 b9                	je     8724efa <_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x2a>
 8724f41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8724f44:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8724f47:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8724f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724f4e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8724f51:	89 04 24             	mov    %eax,(%esp)
 8724f54:	e8 87 95 95 ff       	call   807e4e0 <strcmp@plt>
 8724f59:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8724f5c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8724f5f:	85 c0                	test   %eax,%eax
 8724f61:	75 97                	jne    8724efa <_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x2a>
 8724f63:	b8 06 00 00 00       	mov    $0x6,%eax
 8724f68:	eb ae                	jmp    8724f18 <_ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x48>
 8724f6a:	90                   	nop
 8724f6b:	90                   	nop
 8724f6c:	90                   	nop
 8724f6d:	90                   	nop
 8724f6e:	90                   	nop
 8724f6f:	90                   	nop

```

```c
// __cxxabiv1::__si_class_type_info::__do_find_public_src @ 0x8724ed0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  char *__s1;
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_3 + 4)) ||
       ((*__s1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_3 + 4)), iVar2 == 0)))) {
      return 6;
    }
  }
  uVar1 = (**(code **)(**(int **)(this + 8) + 0x20))
                    (*(int **)(this + 8),param_1,param_2,param_3,param_4);
  return uVar1;
}

```

---

## __do_upcast

```asm
// === 08724d30 __cxxabiv1::__si_class_type_info::__do_upcast  [0x08724d30-0x8724d9f] ===
 8724d30:	55                   	push   %ebp
 8724d31:	89 e5                	mov    %esp,%ebp
 8724d33:	83 ec 28             	sub    $0x28,%esp
 8724d36:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8724d39:	8b 55 08             	mov    0x8(%ebp),%edx
 8724d3c:	e8 b7 e0 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724d41:	81 c3 57 7e c4 00    	add    $0xc47e57,%ebx
 8724d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8724d4a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8724d4d:	8b 75 10             	mov    0x10(%ebp),%esi
 8724d50:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8724d53:	8b 7d 14             	mov    0x14(%ebp),%edi
 8724d56:	89 14 24             	mov    %edx,(%esp)
 8724d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724d5d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8724d61:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8724d65:	e8 26 fd ff ff       	call   8724a90 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE>
 8724d6a:	89 c2                	mov    %eax,%edx
 8724d6c:	b8 01 00 00 00       	mov    $0x1,%eax
 8724d71:	84 d2                	test   %dl,%dl
 8724d73:	75 1d                	jne    8724d92 <_ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x62>
 8724d75:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8724d78:	8b 41 08             	mov    0x8(%ecx),%eax
 8724d7b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8724d7e:	8b 10                	mov    (%eax),%edx
 8724d80:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8724d84:	89 74 24 08          	mov    %esi,0x8(%esp)
 8724d88:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8724d8c:	89 04 24             	mov    %eax,(%esp)
 8724d8f:	ff 52 18             	call   *0x18(%edx)
 8724d92:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724d95:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724d98:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724d9b:	89 ec                	mov    %ebp,%esp
 8724d9d:	5d                   	pop    %ebp
 8724d9e:	c3                   	ret
 8724d9f:	90                   	nop

```

```c
// __cxxabiv1::__si_class_type_info::__do_upcast @ 0x8724d30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(int **)(this + 8) + 0x18))(*(int **)(this + 8),param_1,param_2,param_3);
  }
  return uVar2;
}

```

---

## ~__si_class_type_info

```asm
// === 08724f70 __cxxabiv1::__si_class_type_info::~__si_class_type_info  [0x08724f70-0x8724f9f] ===
 8724f70:	55                   	push   %ebp
 8724f71:	89 e5                	mov    %esp,%ebp
 8724f73:	53                   	push   %ebx
 8724f74:	e8 7f de ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724f79:	81 c3 1f 7c c4 00    	add    $0xc47c1f,%ebx
 8724f7f:	83 ec 14             	sub    $0x14,%esp
 8724f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8724f85:	8b 93 04 fb ff ff    	mov    -0x4fc(%ebx),%edx
 8724f8b:	83 c2 08             	add    $0x8,%edx
 8724f8e:	89 10                	mov    %edx,(%eax)
 8724f90:	89 04 24             	mov    %eax,(%esp)
 8724f93:	e8 f8 f9 ff ff       	call   8724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>
 8724f98:	83 c4 14             	add    $0x14,%esp
 8724f9b:	5b                   	pop    %ebx
 8724f9c:	5d                   	pop    %ebp
 8724f9d:	c3                   	ret
 8724f9e:	90                   	nop
 8724f9f:	90                   	nop

```

```c
// __cxxabiv1::__si_class_type_info::~__si_class_type_info @ 0x8724f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c69c + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}

```

---

## ~__si_class_type_info_08724fa0

```asm
// === 08724fa0 __cxxabiv1::__si_class_type_info::~__si_class_type_info  [0x08724fa0-0x8724fdf] ===
 8724fa0:	55                   	push   %ebp
 8724fa1:	89 e5                	mov    %esp,%ebp
 8724fa3:	83 ec 18             	sub    $0x18,%esp
 8724fa6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8724fa9:	e8 4a de ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724fae:	81 c3 ea 7b c4 00    	add    $0xc47bea,%ebx
 8724fb4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8724fb7:	8b 75 08             	mov    0x8(%ebp),%esi
 8724fba:	89 34 24             	mov    %esi,(%esp)
 8724fbd:	e8 ae ff ff ff       	call   8724f70 <_ZN10__cxxabiv120__si_class_type_infoD1Ev>
 8724fc2:	89 34 24             	mov    %esi,(%esp)
 8724fc5:	e8 26 f5 ff ff       	call   87244f0 <_ZdlPv>
 8724fca:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8724fcd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8724fd0:	89 ec                	mov    %ebp,%esp
 8724fd2:	5d                   	pop    %ebp
 8724fd3:	c3                   	ret
 8724fd4:	90                   	nop
 8724fd5:	90                   	nop
 8724fd6:	90                   	nop
 8724fd7:	90                   	nop
 8724fd8:	90                   	nop
 8724fd9:	90                   	nop
 8724fda:	90                   	nop
 8724fdb:	90                   	nop
 8724fdc:	90                   	nop
 8724fdd:	90                   	nop
 8724fde:	90                   	nop
 8724fdf:	90                   	nop

```

```c
// __cxxabiv1::__si_class_type_info::~__si_class_type_info @ 0x8724fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  ~__si_class_type_info(this);
  operator_delete(this);
  return;
}

```

