# __cxxabiv1____class_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## __do_catch

```asm
// === 08724a00 __cxxabiv1::__class_type_info::__do_catch  [0x08724a00-0x8724a8f] ===
 8724a00:	55                   	push   %ebp
 8724a01:	89 e5                	mov    %esp,%ebp
 8724a03:	83 ec 28             	sub    $0x28,%esp
 8724a06:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8724a09:	8b 75 0c             	mov    0xc(%ebp),%esi
 8724a0c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8724a0f:	8b 7d 08             	mov    0x8(%ebp),%edi
 8724a12:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8724a15:	e8 de e3 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724a1a:	81 c3 7e 81 c4 00    	add    $0xc4817e,%ebx
 8724a20:	8b 56 04             	mov    0x4(%esi),%edx
 8724a23:	8b 47 04             	mov    0x4(%edi),%eax
 8724a26:	39 d0                	cmp    %edx,%eax
 8724a28:	74 2e                	je     8724a58 <_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj+0x58>
 8724a2a:	80 38 2a             	cmpb   $0x2a,(%eax)
 8724a2d:	74 10                	je     8724a3f <_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj+0x3f>
 8724a2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8724a33:	89 04 24             	mov    %eax,(%esp)
 8724a36:	e8 a5 9a 95 ff       	call   807e4e0 <strcmp@plt>
 8724a3b:	85 c0                	test   %eax,%eax
 8724a3d:	74 19                	je     8724a58 <_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj+0x58>
 8724a3f:	31 c0                	xor    %eax,%eax
 8724a41:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 8724a45:	76 29                	jbe    8724a70 <_ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj+0x70>
 8724a47:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724a4a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724a4d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724a50:	89 ec                	mov    %ebp,%esp
 8724a52:	5d                   	pop    %ebp
 8724a53:	c3                   	ret
 8724a54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8724a58:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724a5b:	b8 01 00 00 00       	mov    $0x1,%eax
 8724a60:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724a63:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724a66:	89 ec                	mov    %ebp,%esp
 8724a68:	5d                   	pop    %ebp
 8724a69:	c3                   	ret
 8724a6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8724a70:	8b 06                	mov    (%esi),%eax
 8724a72:	8b 55 10             	mov    0x10(%ebp),%edx
 8724a75:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8724a79:	89 34 24             	mov    %esi,(%esp)
 8724a7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8724a80:	ff 50 14             	call   *0x14(%eax)
 8724a83:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724a86:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724a89:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724a8c:	89 ec                	mov    %ebp,%esp
 8724a8e:	5d                   	pop    %ebp
 8724a8f:	c3                   	ret

```

```c
// __cxxabiv1::__class_type_info::__do_catch @ 0x8724a00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = *(char **)(this + 4);
  if (__s1 == *(char **)(param_1 + 4)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_1 + 4)), iVar1 == 0)) {
    return 1;
  }
  if (param_3 < 4) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1,this,param_2);
    return uVar2;
  }
  return 0;
}

```

---

## __do_dyncast

```asm
// === 08724b10 __cxxabiv1::__class_type_info::__do_dyncast  [0x08724b10-0x8724baf] ===
 8724b10:	55                   	push   %ebp
 8724b11:	89 e5                	mov    %esp,%ebp
 8724b13:	83 ec 28             	sub    $0x28,%esp
 8724b16:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8724b19:	8b 7d 18             	mov    0x18(%ebp),%edi
 8724b1c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8724b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8724b22:	e8 d1 e2 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724b27:	81 c3 71 80 c4 00    	add    $0xc48071,%ebx
 8724b2d:	3b 7d 20             	cmp    0x20(%ebp),%edi
 8724b30:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8724b33:	74 33                	je     8724b68 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x58>
 8724b35:	8b 70 04             	mov    0x4(%eax),%esi
 8724b38:	8b 45 14             	mov    0x14(%ebp),%eax
 8724b3b:	8b 40 04             	mov    0x4(%eax),%eax
 8724b3e:	39 c6                	cmp    %eax,%esi
 8724b40:	74 56                	je     8724b98 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x88>
 8724b42:	80 3e 2a             	cmpb   $0x2a,(%esi)
 8724b45:	74 10                	je     8724b57 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x47>
 8724b47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724b4b:	89 34 24             	mov    %esi,(%esp)
 8724b4e:	e8 8d 99 95 ff       	call   807e4e0 <strcmp@plt>
 8724b53:	85 c0                	test   %eax,%eax
 8724b55:	74 41                	je     8724b98 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x88>
 8724b57:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8724b5a:	31 c0                	xor    %eax,%eax
 8724b5c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8724b5f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8724b62:	89 ec                	mov    %ebp,%esp
 8724b64:	5d                   	pop    %ebp
 8724b65:	c3                   	ret
 8724b66:	66 90                	xchg   %ax,%ax
 8724b68:	8b 70 04             	mov    0x4(%eax),%esi
 8724b6b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8724b6e:	8b 40 04             	mov    0x4(%eax),%eax
 8724b71:	39 c6                	cmp    %eax,%esi
 8724b73:	74 15                	je     8724b8a <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x7a>
 8724b75:	80 3e 2a             	cmpb   $0x2a,(%esi)
 8724b78:	74 be                	je     8724b38 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x28>
 8724b7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8724b7e:	89 34 24             	mov    %esi,(%esp)
 8724b81:	e8 5a 99 95 ff       	call   807e4e0 <strcmp@plt>
 8724b86:	85 c0                	test   %eax,%eax
 8724b88:	75 ae                	jne    8724b38 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x28>
 8724b8a:	8b 55 10             	mov    0x10(%ebp),%edx
 8724b8d:	8b 45 24             	mov    0x24(%ebp),%eax
 8724b90:	89 50 08             	mov    %edx,0x8(%eax)
 8724b93:	eb c2                	jmp    8724b57 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x47>
 8724b95:	8d 76 00             	lea    0x0(%esi),%esi
 8724b98:	8b 45 24             	mov    0x24(%ebp),%eax
 8724b9b:	8b 55 10             	mov    0x10(%ebp),%edx
 8724b9e:	89 38                	mov    %edi,(%eax)
 8724ba0:	89 50 04             	mov    %edx,0x4(%eax)
 8724ba3:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8724baa:	eb ab                	jmp    8724b57 <_ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE+0x47>
 8724bac:	90                   	nop
 8724bad:	90                   	nop
 8724bae:	90                   	nop
 8724baf:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::__do_dyncast @ 0x8724b10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int *param_8)

{
  int iVar1;
  char *__s1;
  
  if (param_5 == param_7) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_6 + 4)) ||
       ((*__s1 != '*' && (iVar1 = strcmp(__s1,*(char **)(param_6 + 4)), iVar1 == 0)))) {
      param_8[2] = param_3;
      return 0;
    }
  }
  else {
    __s1 = *(char **)(this + 4);
  }
  if (__s1 != *(char **)(param_4 + 4)) {
    if (*__s1 == '*') {
      return 0;
    }
    iVar1 = strcmp(__s1,*(char **)(param_4 + 4));
    if (iVar1 != 0) {
      return 0;
    }
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  param_8[3] = 1;
  return 0;
}

```

---

## __do_find_public_src

```asm
// === 08724970 __cxxabiv1::__class_type_info::__do_find_public_src  [0x08724970-0x872498f] ===
 8724970:	55                   	push   %ebp
 8724971:	89 e5                	mov    %esp,%ebp
 8724973:	8b 45 18             	mov    0x18(%ebp),%eax
 8724976:	3b 45 10             	cmp    0x10(%ebp),%eax
 8724979:	5d                   	pop    %ebp
 872497a:	0f 94 c0             	sete   %al
 872497d:	0f b6 c0             	movzbl %al,%eax
 8724980:	8d 44 80 01          	lea    0x1(%eax,%eax,4),%eax
 8724984:	c3                   	ret
 8724985:	90                   	nop
 8724986:	90                   	nop
 8724987:	90                   	nop
 8724988:	90                   	nop
 8724989:	90                   	nop
 872498a:	90                   	nop
 872498b:	90                   	nop
 872498c:	90                   	nop
 872498d:	90                   	nop
 872498e:	90                   	nop
 872498f:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::__do_find_public_src @ 0x8724970

/* __cxxabiv1::__class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

char __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  return (param_4 == param_2) * '\x05' + '\x01';
}

```

---

## __do_upcast

```asm
// === 08724900 __cxxabiv1::__class_type_info::__do_upcast  [0x08724900-0x872496f] ===
 8724900:	55                   	push   %ebp
 8724901:	89 e5                	mov    %esp,%ebp
 8724903:	56                   	push   %esi
 8724904:	83 ec 24             	sub    $0x24,%esp
 8724907:	8b 45 08             	mov    0x8(%ebp),%eax
 872490a:	8b 75 10             	mov    0x10(%ebp),%esi
 872490d:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8724910:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8724917:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 872491e:	8b 10                	mov    (%eax),%edx
 8724920:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8724924:	8b 0e                	mov    (%esi),%ecx
 8724926:	c7 45 f0 10 00 00 00 	movl   $0x10,-0x10(%ebp)
 872492d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8724934:	89 04 24             	mov    %eax,(%esp)
 8724937:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 872493b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 872493e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8724942:	ff 52 18             	call   *0x18(%edx)
 8724945:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8724948:	31 c0                	xor    %eax,%eax
 872494a:	83 e2 06             	and    $0x6,%edx
 872494d:	83 fa 06             	cmp    $0x6,%edx
 8724950:	75 0a                	jne    872495c <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv+0x5c>
 8724952:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8724955:	89 06                	mov    %eax,(%esi)
 8724957:	b8 01 00 00 00       	mov    $0x1,%eax
 872495c:	83 c4 24             	add    $0x24,%esp
 872495f:	5e                   	pop    %esi
 8724960:	5d                   	pop    %ebp
 8724961:	c3                   	ret
 8724962:	90                   	nop
 8724963:	90                   	nop
 8724964:	90                   	nop
 8724965:	90                   	nop
 8724966:	90                   	nop
 8724967:	90                   	nop
 8724968:	90                   	nop
 8724969:	90                   	nop
 872496a:	90                   	nop
 872496b:	90                   	nop
 872496c:	90                   	nop
 872496d:	90                   	nop
 872496e:	90                   	nop
 872496f:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::__do_upcast @ 0x8724900

/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0x10;
  local_10 = 0;
  (**(code **)(*(int *)this + 0x18))(this,param_1,*param_2,&local_1c);
  bVar1 = (local_18 & 6) == 6;
  if (bVar1) {
    *param_2 = local_1c;
  }
  return bVar1;
}

```

---

## __do_upcast_08724a90

```asm
// === 08724a90 __cxxabiv1::__class_type_info::__do_upcast  [0x08724a90-0x8724b0f] ===
 8724a90:	55                   	push   %ebp
 8724a91:	89 e5                	mov    %esp,%ebp
 8724a93:	83 ec 18             	sub    $0x18,%esp
 8724a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8724a99:	8b 55 0c             	mov    0xc(%ebp),%edx
 8724a9c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8724a9f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8724aa2:	8b 75 14             	mov    0x14(%ebp),%esi
 8724aa5:	8b 40 04             	mov    0x4(%eax),%eax
 8724aa8:	8b 52 04             	mov    0x4(%edx),%edx
 8724aab:	e8 48 e3 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724ab0:	81 c3 e8 80 c4 00    	add    $0xc480e8,%ebx
 8724ab6:	39 d0                	cmp    %edx,%eax
 8724ab8:	74 26                	je     8724ae0 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE+0x50>
 8724aba:	80 38 2a             	cmpb   $0x2a,(%eax)
 8724abd:	74 10                	je     8724acf <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE+0x3f>
 8724abf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8724ac3:	89 04 24             	mov    %eax,(%esp)
 8724ac6:	e8 15 9a 95 ff       	call   807e4e0 <strcmp@plt>
 8724acb:	85 c0                	test   %eax,%eax
 8724acd:	74 11                	je     8724ae0 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE+0x50>
 8724acf:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8724ad2:	31 c0                	xor    %eax,%eax
 8724ad4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8724ad7:	89 ec                	mov    %ebp,%esp
 8724ad9:	5d                   	pop    %ebp
 8724ada:	c3                   	ret
 8724adb:	90                   	nop
 8724adc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8724ae0:	8b 45 10             	mov    0x10(%ebp),%eax
 8724ae3:	c7 46 0c 08 00 00 00 	movl   $0x8,0xc(%esi)
 8724aea:	c7 46 04 06 00 00 00 	movl   $0x6,0x4(%esi)
 8724af1:	89 06                	mov    %eax,(%esi)
 8724af3:	b8 01 00 00 00       	mov    $0x1,%eax
 8724af8:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8724afb:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8724afe:	89 ec                	mov    %ebp,%esp
 8724b00:	5d                   	pop    %ebp
 8724b01:	c3                   	ret
 8724b02:	90                   	nop
 8724b03:	90                   	nop
 8724b04:	90                   	nop
 8724b05:	90                   	nop
 8724b06:	90                   	nop
 8724b07:	90                   	nop
 8724b08:	90                   	nop
 8724b09:	90                   	nop
 8724b0a:	90                   	nop
 8724b0b:	90                   	nop
 8724b0c:	90                   	nop
 8724b0d:	90                   	nop
 8724b0e:	90                   	nop
 8724b0f:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::__do_upcast @ 0x8724a90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  char *__s1;
  int iVar1;
  
  __s1 = *(char **)(this + 4);
  if (__s1 != *(char **)(param_1 + 4)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 4));
      if (iVar1 == 0) goto LAB_08724ae0;
    }
    return 0;
  }
LAB_08724ae0:
  *(undefined4 *)(param_3 + 0xc) = 8;
  *(undefined4 *)(param_3 + 4) = 6;
  *(void **)param_3 = param_2;
  return 1;
}

```

---

## ~__class_type_info

```asm
// === 08724990 __cxxabiv1::__class_type_info::~__class_type_info  [0x08724990-0x87249bf] ===
 8724990:	55                   	push   %ebp
 8724991:	89 e5                	mov    %esp,%ebp
 8724993:	53                   	push   %ebx
 8724994:	e8 5f e4 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724999:	81 c3 ff 81 c4 00    	add    $0xc481ff,%ebx
 872499f:	83 ec 14             	sub    $0x14,%esp
 87249a2:	8b 45 08             	mov    0x8(%ebp),%eax
 87249a5:	8b 93 98 fb ff ff    	mov    -0x468(%ebx),%edx
 87249ab:	83 c2 08             	add    $0x8,%edx
 87249ae:	89 10                	mov    %edx,(%eax)
 87249b0:	89 04 24             	mov    %eax,(%esp)
 87249b3:	e8 48 fd ff ff       	call   8724700 <_ZNSt9type_infoD1Ev>
 87249b8:	83 c4 14             	add    $0x14,%esp
 87249bb:	5b                   	pop    %ebx
 87249bc:	5d                   	pop    %ebp
 87249bd:	c3                   	ret
 87249be:	90                   	nop
 87249bf:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::~__class_type_info @ 0x8724990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c730 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}

```

---

## ~__class_type_info_087249c0

```asm
// === 087249c0 __cxxabiv1::__class_type_info::~__class_type_info  [0x087249c0-0x87249ff] ===
 87249c0:	55                   	push   %ebp
 87249c1:	89 e5                	mov    %esp,%ebp
 87249c3:	83 ec 18             	sub    $0x18,%esp
 87249c6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87249c9:	e8 2a e4 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87249ce:	81 c3 ca 81 c4 00    	add    $0xc481ca,%ebx
 87249d4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87249d7:	8b 75 08             	mov    0x8(%ebp),%esi
 87249da:	89 34 24             	mov    %esi,(%esp)
 87249dd:	e8 ae ff ff ff       	call   8724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>
 87249e2:	89 34 24             	mov    %esi,(%esp)
 87249e5:	e8 06 fb ff ff       	call   87244f0 <_ZdlPv>
 87249ea:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87249ed:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87249f0:	89 ec                	mov    %ebp,%esp
 87249f2:	5d                   	pop    %ebp
 87249f3:	c3                   	ret
 87249f4:	90                   	nop
 87249f5:	90                   	nop
 87249f6:	90                   	nop
 87249f7:	90                   	nop
 87249f8:	90                   	nop
 87249f9:	90                   	nop
 87249fa:	90                   	nop
 87249fb:	90                   	nop
 87249fc:	90                   	nop
 87249fd:	90                   	nop
 87249fe:	90                   	nop
 87249ff:	90                   	nop

```

```c
// __cxxabiv1::__class_type_info::~__class_type_info @ 0x87249c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  operator_delete(this);
  return;
}

```

