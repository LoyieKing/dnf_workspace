# yaSSL__Errors

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Add

```asm
// === 08753550 yaSSL::Errors::Add  [0x08753550-0x87535cf] ===
 8753550:	55                   	push   %ebp
 8753551:	89 e5                	mov    %esp,%ebp
 8753553:	83 ec 28             	sub    $0x28,%esp
 8753556:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8753559:	e8 9a f8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875355e:	81 c3 3a 96 c1 00    	add    $0xc1963a,%ebx
 8753564:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8753567:	8b 75 08             	mov    0x8(%ebp),%esi
 875356a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875356d:	e8 3e c2 ff ff       	call   874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>
 8753572:	89 34 24             	mov    %esi,(%esp)
 8753575:	89 c7                	mov    %eax,%edi
 8753577:	e8 f4 fe ff ff       	call   8753470 <_ZN5yaSSL6Errors6RemoveEv>
 875357c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753581:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8753588:	e8 c3 ed ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 875358d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8753593:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 875359a:	8b 55 0c             	mov    0xc(%ebp),%edx
 875359d:	89 78 08             	mov    %edi,0x8(%eax)
 87535a0:	89 50 0c             	mov    %edx,0xc(%eax)
 87535a3:	8b 56 04             	mov    0x4(%esi),%edx
 87535a6:	85 d2                	test   %edx,%edx
 87535a8:	74 1e                	je     87535c8 <_ZN5yaSSL6Errors3AddEi+0x78>
 87535aa:	89 42 04             	mov    %eax,0x4(%edx)
 87535ad:	8b 56 04             	mov    0x4(%esi),%edx
 87535b0:	89 10                	mov    %edx,(%eax)
 87535b2:	83 46 08 01          	addl   $0x1,0x8(%esi)
 87535b6:	89 46 04             	mov    %eax,0x4(%esi)
 87535b9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87535bc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87535bf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87535c2:	89 ec                	mov    %ebp,%esp
 87535c4:	5d                   	pop    %ebp
 87535c5:	c3                   	ret
 87535c6:	66 90                	xchg   %ax,%ax
 87535c8:	89 06                	mov    %eax,(%esi)
 87535ca:	eb e6                	jmp    87535b2 <_ZN5yaSSL6Errors3AddEi+0x62>
 87535cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Errors::Add @ 0x8753550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Add(int) */

void __thiscall yaSSL::Errors::Add(Errors *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = yassl_int_cpp_local2::GetSelf();
  Remove(this);
  puVar2 = operator_new__(0x10,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar1;
  puVar2[3] = param_1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 **)this = puVar2;
  }
  else {
    *(undefined4 **)(*(int *)(this + 4) + 4) = puVar2;
    *puVar2 = *(undefined4 *)(this + 4);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}

```

---

## Lookup

```asm
// === 08750920 yaSSL::Errors::Lookup  [0x08750920-0x8750a2f] ===
 8750920:	55                   	push   %ebp
 8750921:	89 e5                	mov    %esp,%ebp
 8750923:	57                   	push   %edi
 8750924:	56                   	push   %esi
 8750925:	53                   	push   %ebx
 8750926:	e8 cd 24 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875092b:	81 c3 6d c2 c1 00    	add    $0xc1c26d,%ebx
 8750931:	83 ec 3c             	sub    $0x3c,%esp
 8750934:	8b 7d 08             	mov    0x8(%ebp),%edi
 8750937:	0f b6 75 0c          	movzbl 0xc(%ebp),%esi
 875093b:	e8 70 ee ff ff       	call   874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>
 8750940:	8b 0f                	mov    (%edi),%ecx
 8750942:	85 c9                	test   %ecx,%ecx
 8750944:	0f 84 d9 00 00 00    	je     8750a23 <_ZN5yaSSL6Errors6LookupEb+0x103>
 875094a:	3b 41 08             	cmp    0x8(%ecx),%eax
 875094d:	89 ca                	mov    %ecx,%edx
 875094f:	74 67                	je     87509b8 <_ZN5yaSSL6Errors6LookupEb+0x98>
 8750951:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8750958:	8b 52 04             	mov    0x4(%edx),%edx
 875095b:	85 d2                	test   %edx,%edx
 875095d:	0f 84 c0 00 00 00    	je     8750a23 <_ZN5yaSSL6Errors6LookupEb+0x103>
 8750963:	3b 42 08             	cmp    0x8(%edx),%eax
 8750966:	75 f0                	jne    8750958 <_ZN5yaSSL6Errors6LookupEb+0x38>
 8750968:	8b 42 0c             	mov    0xc(%edx),%eax
 875096b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875096e:	89 f0                	mov    %esi,%eax
 8750970:	84 c0                	test   %al,%al
 8750972:	74 0c                	je     8750980 <_ZN5yaSSL6Errors6LookupEb+0x60>
 8750974:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8750977:	83 c4 3c             	add    $0x3c,%esp
 875097a:	5b                   	pop    %ebx
 875097b:	5e                   	pop    %esi
 875097c:	5f                   	pop    %edi
 875097d:	5d                   	pop    %ebp
 875097e:	c3                   	ret
 875097f:	90                   	nop
 8750980:	39 d1                	cmp    %edx,%ecx
 8750982:	74 38                	je     87509bc <_ZN5yaSSL6Errors6LookupEb+0x9c>
 8750984:	8b 77 04             	mov    0x4(%edi),%esi
 8750987:	39 d6                	cmp    %edx,%esi
 8750989:	74 54                	je     87509df <_ZN5yaSSL6Errors6LookupEb+0xbf>
 875098b:	8b 0a                	mov    (%edx),%ecx
 875098d:	8b 72 04             	mov    0x4(%edx),%esi
 8750990:	89 71 04             	mov    %esi,0x4(%ecx)
 8750993:	8b 72 04             	mov    0x4(%edx),%esi
 8750996:	89 0e                	mov    %ecx,(%esi)
 8750998:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875099d:	89 14 24             	mov    %edx,(%esp)
 87509a0:	e8 4b ff ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87509a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87509a8:	83 6f 08 01          	subl   $0x1,0x8(%edi)
 87509ac:	83 c4 3c             	add    $0x3c,%esp
 87509af:	5b                   	pop    %ebx
 87509b0:	5e                   	pop    %esi
 87509b1:	5f                   	pop    %edi
 87509b2:	5d                   	pop    %ebp
 87509b3:	c3                   	ret
 87509b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87509b8:	89 ca                	mov    %ecx,%edx
 87509ba:	eb ac                	jmp    8750968 <_ZN5yaSSL6Errors6LookupEb+0x48>
 87509bc:	3b 4f 04             	cmp    0x4(%edi),%ecx
 87509bf:	74 44                	je     8750a05 <_ZN5yaSSL6Errors6LookupEb+0xe5>
 87509c1:	8b 51 04             	mov    0x4(%ecx),%edx
 87509c4:	89 17                	mov    %edx,(%edi)
 87509c6:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 87509cc:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87509d1:	89 0c 24             	mov    %ecx,(%esp)
 87509d4:	e8 17 ff ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87509d9:	83 6f 08 01          	subl   $0x1,0x8(%edi)
 87509dd:	eb 95                	jmp    8750974 <_ZN5yaSSL6Errors6LookupEb+0x54>
 87509df:	39 d1                	cmp    %edx,%ecx
 87509e1:	74 31                	je     8750a14 <_ZN5yaSSL6Errors6LookupEb+0xf4>
 87509e3:	8b 12                	mov    (%edx),%edx
 87509e5:	89 57 04             	mov    %edx,0x4(%edi)
 87509e8:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 87509ef:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87509f4:	89 34 24             	mov    %esi,(%esp)
 87509f7:	e8 f4 fe ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87509fc:	83 6f 08 01          	subl   $0x1,0x8(%edi)
 8750a00:	e9 6f ff ff ff       	jmp    8750974 <_ZN5yaSSL6Errors6LookupEb+0x54>
 8750a05:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%edi)
 8750a0c:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 8750a12:	eb b8                	jmp    87509cc <_ZN5yaSSL6Errors6LookupEb+0xac>
 8750a14:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 8750a1a:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%edi)
 8750a21:	eb cc                	jmp    87509ef <_ZN5yaSSL6Errors6LookupEb+0xcf>
 8750a23:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8750a2a:	e9 45 ff ff ff       	jmp    8750974 <_ZN5yaSSL6Errors6LookupEb+0x54>
 8750a2f:	90                   	nop

```

```c
// yaSSL::Errors::Lookup @ 0x8750920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Lookup(bool) */

int __thiscall yaSSL::Errors::Lookup(Errors *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_30;
  
  iVar6 = yassl_int_cpp_local2::GetSelf();
  piVar2 = *(int **)this;
  if (piVar2 == (int *)0x0) {
LAB_08750a23:
    local_30 = 0;
  }
  else {
    iVar1 = piVar2[2];
    piVar3 = piVar2;
    while (iVar6 != iVar1) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) goto LAB_08750a23;
      iVar1 = piVar3[2];
    }
    local_30 = piVar3[3];
    if (!param_1) {
      if (piVar2 == piVar3) {
        if (piVar2 == *(int **)(this + 4)) {
          *(undefined4 *)(this + 4) = 0;
          *(undefined4 *)this = 0;
        }
        else {
          puVar5 = (undefined4 *)piVar2[1];
          *(undefined4 **)this = puVar5;
          *puVar5 = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
      else {
        piVar4 = *(int **)(this + 4);
        if (piVar4 != piVar3) {
          iVar6 = *piVar3;
          *(int *)(iVar6 + 4) = piVar3[1];
          *(int *)piVar3[1] = iVar6;
          operator_delete__(piVar3,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return local_30;
        }
        if (piVar2 == piVar3) {
          *(undefined4 *)this = 0;
          *(undefined4 *)(this + 4) = 0;
        }
        else {
          iVar6 = *piVar3;
          *(int *)(this + 4) = iVar6;
          *(undefined4 *)(iVar6 + 4) = 0;
        }
        operator_delete__(piVar4,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
      }
    }
  }
  return local_30;
}

```

---

## Remove

```asm
// === 08753470 yaSSL::Errors::Remove  [0x08753470-0x875354f] ===
 8753470:	55                   	push   %ebp
 8753471:	89 e5                	mov    %esp,%ebp
 8753473:	56                   	push   %esi
 8753474:	53                   	push   %ebx
 8753475:	e8 7e f9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875347a:	81 c3 1e 97 c1 00    	add    $0xc1971e,%ebx
 8753480:	83 ec 10             	sub    $0x10,%esp
 8753483:	8b 75 08             	mov    0x8(%ebp),%esi
 8753486:	e8 25 c3 ff ff       	call   874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>
 875348b:	8b 0e                	mov    (%esi),%ecx
 875348d:	85 c9                	test   %ecx,%ecx
 875348f:	74 3c                	je     87534cd <_ZN5yaSSL6Errors6RemoveEv+0x5d>
 8753491:	3b 41 08             	cmp    0x8(%ecx),%eax
 8753494:	89 ca                	mov    %ecx,%edx
 8753496:	74 40                	je     87534d8 <_ZN5yaSSL6Errors6RemoveEv+0x68>
 8753498:	8b 52 04             	mov    0x4(%edx),%edx
 875349b:	85 d2                	test   %edx,%edx
 875349d:	74 2e                	je     87534cd <_ZN5yaSSL6Errors6RemoveEv+0x5d>
 875349f:	3b 42 08             	cmp    0x8(%edx),%eax
 87534a2:	75 f4                	jne    8753498 <_ZN5yaSSL6Errors6RemoveEv+0x28>
 87534a4:	39 d1                	cmp    %edx,%ecx
 87534a6:	74 30                	je     87534d8 <_ZN5yaSSL6Errors6RemoveEv+0x68>
 87534a8:	8b 46 04             	mov    0x4(%esi),%eax
 87534ab:	39 d0                	cmp    %edx,%eax
 87534ad:	74 51                	je     8753500 <_ZN5yaSSL6Errors6RemoveEv+0x90>
 87534af:	8b 02                	mov    (%edx),%eax
 87534b1:	8b 4a 04             	mov    0x4(%edx),%ecx
 87534b4:	89 48 04             	mov    %ecx,0x4(%eax)
 87534b7:	8b 4a 04             	mov    0x4(%edx),%ecx
 87534ba:	89 01                	mov    %eax,(%ecx)
 87534bc:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87534c1:	89 14 24             	mov    %edx,(%esp)
 87534c4:	e8 27 d4 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87534c9:	83 6e 08 01          	subl   $0x1,0x8(%esi)
 87534cd:	83 c4 10             	add    $0x10,%esp
 87534d0:	5b                   	pop    %ebx
 87534d1:	5e                   	pop    %esi
 87534d2:	5d                   	pop    %ebp
 87534d3:	c3                   	ret
 87534d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87534d8:	3b 4e 04             	cmp    0x4(%esi),%ecx
 87534db:	74 46                	je     8753523 <_ZN5yaSSL6Errors6RemoveEv+0xb3>
 87534dd:	8b 41 04             	mov    0x4(%ecx),%eax
 87534e0:	89 06                	mov    %eax,(%esi)
 87534e2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87534e8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87534ed:	89 0c 24             	mov    %ecx,(%esp)
 87534f0:	e8 fb d3 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 87534f5:	83 6e 08 01          	subl   $0x1,0x8(%esi)
 87534f9:	eb d2                	jmp    87534cd <_ZN5yaSSL6Errors6RemoveEv+0x5d>
 87534fb:	90                   	nop
 87534fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753500:	39 d1                	cmp    %edx,%ecx
 8753502:	74 2e                	je     8753532 <_ZN5yaSSL6Errors6RemoveEv+0xc2>
 8753504:	8b 12                	mov    (%edx),%edx
 8753506:	89 56 04             	mov    %edx,0x4(%esi)
 8753509:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 8753510:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753515:	89 04 24             	mov    %eax,(%esp)
 8753518:	e8 d3 d3 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 875351d:	83 6e 08 01          	subl   $0x1,0x8(%esi)
 8753521:	eb aa                	jmp    87534cd <_ZN5yaSSL6Errors6RemoveEv+0x5d>
 8753523:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 875352a:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8753530:	eb b6                	jmp    87534e8 <_ZN5yaSSL6Errors6RemoveEv+0x78>
 8753532:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8753538:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 875353f:	eb cf                	jmp    8753510 <_ZN5yaSSL6Errors6RemoveEv+0xa0>
 8753541:	90                   	nop
 8753542:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753549:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Errors::Remove @ 0x8753470

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Remove() */

void __thiscall yaSSL::Errors::Remove(Errors *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = yassl_int_cpp_local2::GetSelf();
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1;
    if (iVar4 != piVar1[2]) {
      do {
        piVar5 = (int *)piVar5[1];
        if (piVar5 == (int *)0x0) {
          return;
        }
      } while (iVar4 != piVar5[2]);
      if (piVar1 != piVar5) {
        piVar2 = *(int **)(this + 4);
        if (piVar2 != piVar5) {
          iVar4 = *piVar5;
          *(int *)(iVar4 + 4) = piVar5[1];
          *(int *)piVar5[1] = iVar4;
          operator_delete__(piVar5,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return;
        }
        if (piVar1 == piVar5) {
          *(undefined4 *)this = 0;
          *(undefined4 *)(this + 4) = 0;
        }
        else {
          iVar4 = *piVar5;
          *(int *)(this + 4) = iVar4;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        return;
      }
    }
    if (piVar1 == *(int **)(this + 4)) {
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
    }
    else {
      puVar3 = (undefined4 *)piVar1[1];
      *(undefined4 **)this = puVar3;
      *puVar3 = 0;
    }
    operator_delete__(piVar1,0);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
  }
  return;
}

```

