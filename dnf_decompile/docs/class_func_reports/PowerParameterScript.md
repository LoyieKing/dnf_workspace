# PowerParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetBreakBonus

```asm
// === 08a59d58 PowerParameterScript::GetBreakBonus  [0x08a59d58-0x8a59db3] ===
 8a59d58:	55                   	push   %ebp
 8a59d59:	89 e5                	mov    %esp,%ebp
 8a59d5b:	83 ec 28             	sub    $0x28,%esp
 8a59d5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a59d61:	05 c8 00 00 00       	add    $0xc8,%eax
 8a59d66:	89 04 24             	mov    %eax,(%esp)
 8a59d69:	e8 52 44 63 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8a59d6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a59d71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59d74:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a59d77:	7c 1f                	jl     8a59d98 <_ZN20PowerParameterScript13GetBreakBonusEi+0x40>
 8a59d79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a59d7c:	83 e8 01             	sub    $0x1,%eax
 8a59d7f:	8b 55 08             	mov    0x8(%ebp),%edx
 8a59d82:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 8a59d88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a59d8c:	89 14 24             	mov    %edx,(%esp)
 8a59d8f:	e8 48 44 63 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8a59d94:	8b 00                	mov    (%eax),%eax
 8a59d96:	eb 1a                	jmp    8a59db2 <_ZN20PowerParameterScript13GetBreakBonusEi+0x5a>
 8a59d98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59d9b:	8b 55 08             	mov    0x8(%ebp),%edx
 8a59d9e:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 8a59da4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a59da8:	89 14 24             	mov    %edx,(%esp)
 8a59dab:	e8 2c 44 63 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8a59db0:	8b 00                	mov    (%eax),%eax
 8a59db2:	c9                   	leave
 8a59db3:	c3                   	ret

```

```c
// PowerParameterScript::GetBreakBonus @ 0x8a59d58

/* PowerParameterScript::GetBreakBonus(int) */

undefined4 __thiscall PowerParameterScript::GetBreakBonus(PowerParameterScript *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 200));
  if (param_1 < iVar1) {
    puVar2 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 200),param_1);
    uVar3 = *puVar2;
  }
  else {
    puVar2 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 200),iVar1 - 1);
    uVar3 = *puVar2;
  }
  return uVar3;
}

```

---

## GetPenalty

```asm
// === 08a59c6e PowerParameterScript::GetPenalty  [0x08a59c6e-0x8a59d57] ===
 8a59c6e:	55                   	push   %ebp
 8a59c6f:	89 e5                	mov    %esp,%ebp
 8a59c71:	53                   	push   %ebx
 8a59c72:	83 ec 34             	sub    $0x34,%esp
 8a59c75:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8a59c78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59c7b:	8d 90 bc 00 00 00    	lea    0xbc(%eax),%edx
 8a59c81:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a59c84:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a59c88:	89 04 24             	mov    %eax,(%esp)
 8a59c8b:	e8 92 02 00 00       	call   8a59f22 <_ZNSt6vectorI16stVictoryPenaltySaIS0_EE5beginEv>
 8a59c90:	83 ec 04             	sub    $0x4,%esp
 8a59c93:	eb 4e                	jmp    8a59ce3 <_ZN20PowerParameterScript10GetPenaltyEi+0x75>
 8a59c95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a59c98:	89 04 24             	mov    %eax,(%esp)
 8a59c9b:	e8 0e 03 00 00       	call   8a59fae <_ZNK9__gnu_cxx17__normal_iteratorIP16stVictoryPenaltySt6vectorIS1_SaIS1_EEEdeEv>
 8a59ca0:	8b 10                	mov    (%eax),%edx
 8a59ca2:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8a59ca5:	8b 50 04             	mov    0x4(%eax),%edx
 8a59ca8:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8a59cab:	8b 50 08             	mov    0x8(%eax),%edx
 8a59cae:	89 55 e8             	mov    %edx,-0x18(%ebp)
 8a59cb1:	8b 40 0c             	mov    0xc(%eax),%eax
 8a59cb4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a59cb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a59cba:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a59cbd:	7c 19                	jl     8a59cd8 <_ZN20PowerParameterScript10GetPenaltyEi+0x6a>
 8a59cbf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a59cc2:	89 03                	mov    %eax,(%ebx)
 8a59cc4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a59cc7:	89 43 04             	mov    %eax,0x4(%ebx)
 8a59cca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8a59ccd:	89 43 08             	mov    %eax,0x8(%ebx)
 8a59cd0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8a59cd3:	89 43 0c             	mov    %eax,0xc(%ebx)
 8a59cd6:	eb 77                	jmp    8a59d4f <_ZN20PowerParameterScript10GetPenaltyEi+0xe1>
 8a59cd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a59cdb:	89 04 24             	mov    %eax,(%esp)
 8a59cde:	e8 b5 02 00 00       	call   8a59f98 <_ZN9__gnu_cxx17__normal_iteratorIP16stVictoryPenaltySt6vectorIS1_SaIS1_EEEppEv>
 8a59ce3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59ce6:	8d 90 bc 00 00 00    	lea    0xbc(%eax),%edx
 8a59cec:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a59cef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a59cf3:	89 04 24             	mov    %eax,(%esp)
 8a59cf6:	e8 4b 02 00 00       	call   8a59f46 <_ZNSt6vectorI16stVictoryPenaltySaIS0_EE3endEv>
 8a59cfb:	83 ec 04             	sub    $0x4,%esp
 8a59cfe:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a59d01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a59d05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a59d08:	89 04 24             	mov    %eax,(%esp)
 8a59d0b:	e8 5c 02 00 00       	call   8a59f6c <_ZN9__gnu_cxxneIP16stVictoryPenaltySt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a59d10:	84 c0                	test   %al,%al
 8a59d12:	75 81                	jne    8a59c95 <_ZN20PowerParameterScript10GetPenaltyEi+0x27>
 8a59d14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59d17:	05 bc 00 00 00       	add    $0xbc,%eax
 8a59d1c:	89 04 24             	mov    %eax,(%esp)
 8a59d1f:	e8 94 02 00 00       	call   8a59fb8 <_ZNKSt6vectorI16stVictoryPenaltySaIS0_EE4sizeEv>
 8a59d24:	8d 50 ff             	lea    -0x1(%eax),%edx
 8a59d27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a59d2a:	05 bc 00 00 00       	add    $0xbc,%eax
 8a59d2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a59d33:	89 04 24             	mov    %eax,(%esp)
 8a59d36:	e8 99 02 00 00       	call   8a59fd4 <_ZNSt6vectorI16stVictoryPenaltySaIS0_EEixEj>
 8a59d3b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8a59d42:	00 
 8a59d43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a59d47:	89 1c 24             	mov    %ebx,(%esp)
 8a59d4a:	e8 31 3b 62 ff       	call   807d880 <memmove@plt>
 8a59d4f:	89 d8                	mov    %ebx,%eax
 8a59d51:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8a59d54:	c9                   	leave
 8a59d55:	c2 04 00             	ret    $0x4

```

```c
// PowerParameterScript::GetPenalty @ 0x8a59c6e

/* PowerParameterScript::GetPenalty(int) */

int PowerParameterScript::GetPenalty(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  void *__src;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
  local_14 [4];
  __normal_iterator local_10 [8];
  
  std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::begin();
  while( true ) {
    std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::end();
    bVar3 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar3) {
      iVar5 = std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::size
                        ((vector<stVictoryPenalty,std::allocator<stVictoryPenalty>> *)
                         (in_stack_00000008 + 0xbc));
      __src = (void *)std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::operator[]
                                ((vector<stVictoryPenalty,std::allocator<stVictoryPenalty>> *)
                                 (in_stack_00000008 + 0xbc),iVar5 - 1);
      memmove((void *)param_1,__src,0x10);
      return param_1;
    }
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
             ::operator*(local_14);
    iVar5 = puVar4[1];
    uVar1 = puVar4[2];
    uVar2 = puVar4[3];
    if (in_stack_0000000c <= iVar5) break;
    __gnu_cxx::
    __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
    ::operator++(local_14);
  }
  *(undefined4 *)param_1 = *puVar4;
  *(int *)(param_1 + 4) = iVar5;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return param_1;
}

```

---

## checkPowerWarServer

```asm
// === 08a59db4 PowerParameterScript::checkPowerWarServer  [0x08a59db4-0x8a59e51] ===
 8a59db4:	55                   	push   %ebp
 8a59db5:	89 e5                	mov    %esp,%ebp
 8a59db7:	83 ec 28             	sub    $0x28,%esp
 8a59dba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a59dbd:	89 04 24             	mov    %eax,(%esp)
 8a59dc0:	e8 c9 be 75 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a59dc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a59dc8:	8d 90 9c 00 00 00    	lea    0x9c(%eax),%edx
 8a59dce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a59dd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a59dd5:	89 04 24             	mov    %eax,(%esp)
 8a59dd8:	e8 d5 37 68 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8a59ddd:	83 ec 04             	sub    $0x4,%esp
 8a59de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a59de3:	8d 90 9c 00 00 00    	lea    0x9c(%eax),%edx
 8a59de9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a59dec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a59df0:	89 04 24             	mov    %eax,(%esp)
 8a59df3:	e8 de 37 68 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8a59df8:	83 ec 04             	sub    $0x4,%esp
 8a59dfb:	eb 38                	jmp    8a59e35 <_ZN20PowerParameterScript19checkPowerWarServerEii+0x81>
 8a59dfd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a59e00:	89 04 24             	mov    %eax,(%esp)
 8a59e03:	e8 f4 37 68 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8a59e08:	8b 50 04             	mov    0x4(%eax),%edx
 8a59e0b:	8b 00                	mov    (%eax),%eax
 8a59e0d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a59e10:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8a59e13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a59e16:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a59e19:	75 0f                	jne    8a59e2a <_ZN20PowerParameterScript19checkPowerWarServerEii+0x76>
 8a59e1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a59e1e:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a59e21:	75 07                	jne    8a59e2a <_ZN20PowerParameterScript19checkPowerWarServerEii+0x76>
 8a59e23:	b8 01 00 00 00       	mov    $0x1,%eax
 8a59e28:	eb 26                	jmp    8a59e50 <_ZN20PowerParameterScript19checkPowerWarServerEii+0x9c>
 8a59e2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a59e2d:	89 04 24             	mov    %eax,(%esp)
 8a59e30:	e8 d5 73 6b ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8a59e35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a59e38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a59e3c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a59e3f:	89 04 24             	mov    %eax,(%esp)
 8a59e42:	e8 97 73 6b ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8a59e47:	84 c0                	test   %al,%al
 8a59e49:	75 b2                	jne    8a59dfd <_ZN20PowerParameterScript19checkPowerWarServerEii+0x49>
 8a59e4b:	b8 00 00 00 00       	mov    $0x0,%eax
 8a59e50:	c9                   	leave
 8a59e51:	c3                   	ret

```

```c
// PowerParameterScript::checkPowerWarServer @ 0x8a59db4

/* PowerParameterScript::checkPowerWarServer(int, int) */

undefined4 __thiscall
PowerParameterScript::checkPowerWarServer(PowerParameterScript *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_14);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_18);
    local_10 = piVar2[1];
    local_14 = *piVar2;
    if ((local_14 == param_1) && (local_10 == param_2)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return 1;
}

```

