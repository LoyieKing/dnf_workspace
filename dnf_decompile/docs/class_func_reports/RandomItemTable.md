# RandomItemTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetRandomItemIndex

```asm
// === 089bbb6c RandomItemTable::GetRandomItemIndex  [0x089bbb6c-0x89bbc04] ===
 89bbb6c:	55                   	push   %ebp
 89bbb6d:	89 e5                	mov    %esp,%ebp
 89bbb6f:	83 ec 28             	sub    $0x28,%esp
 89bbb72:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbb75:	8d 50 04             	lea    0x4(%eax),%edx
 89bbb78:	8d 45 ec             	lea    -0x14(%ebp),%eax
 89bbb7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbb7f:	89 04 24             	mov    %eax,(%esp)
 89bbb82:	e8 99 56 75 ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 89bbb87:	83 ec 04             	sub    $0x4,%esp
 89bbb8a:	eb 44                	jmp    89bbbd0 <_ZNK15RandomItemTable18GetRandomItemIndexEi+0x64>
 89bbb8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 89bbb8f:	89 04 24             	mov    %eax,(%esp)
 89bbb92:	e8 7b 7d 7d ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 89bbb97:	8b 40 04             	mov    0x4(%eax),%eax
 89bbb9a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 89bbb9d:	0f 9f c0             	setg   %al
 89bbba0:	84 c0                	test   %al,%al
 89bbba2:	74 0f                	je     89bbbb3 <_ZNK15RandomItemTable18GetRandomItemIndexEi+0x47>
 89bbba4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 89bbba7:	89 04 24             	mov    %eax,(%esp)
 89bbbaa:	e8 63 7d 7d ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 89bbbaf:	8b 00                	mov    (%eax),%eax
 89bbbb1:	eb 50                	jmp    89bbc03 <_ZNK15RandomItemTable18GetRandomItemIndexEi+0x97>
 89bbbb3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89bbbb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 89bbbbd:	00 
 89bbbbe:	8d 55 ec             	lea    -0x14(%ebp),%edx
 89bbbc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbbc5:	89 04 24             	mov    %eax,(%esp)
 89bbbc8:	e8 a5 78 7d ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 89bbbcd:	83 ec 04             	sub    $0x4,%esp
 89bbbd0:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbbd3:	8d 50 04             	lea    0x4(%eax),%edx
 89bbbd6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89bbbd9:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbbdd:	89 04 24             	mov    %eax,(%esp)
 89bbbe0:	e8 67 56 75 ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 89bbbe5:	83 ec 04             	sub    $0x4,%esp
 89bbbe8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89bbbeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 89bbbef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 89bbbf2:	89 04 24             	mov    %eax,(%esp)
 89bbbf5:	e8 eb 7c 7d ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 89bbbfa:	84 c0                	test   %al,%al
 89bbbfc:	75 8e                	jne    89bbb8c <_ZNK15RandomItemTable18GetRandomItemIndexEi+0x20>
 89bbbfe:	b8 00 00 00 00       	mov    $0x0,%eax
 89bbc03:	c9                   	leave
 89bbc04:	c3                   	ret

```

```c
// RandomItemTable::GetRandomItemIndex @ 0x89bbb6c

/* RandomItemTable::GetRandomItemIndex(int) const */

undefined4 __thiscall RandomItemTable::GetRandomItemIndex(RandomItemTable *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_18);
    if (param_1 < *(int *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_18);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
           ::operator->(local_18);
  return *puVar3;
}

```

---

## Set

```asm
// === 089bba40 RandomItemTable::Set  [0x089bba40-0x89bbb6b] ===
 89bba40:	55                   	push   %ebp
 89bba41:	89 e5                	mov    %esp,%ebp
 89bba43:	83 ec 38             	sub    $0x38,%esp
 89bba46:	8b 45 08             	mov    0x8(%ebp),%eax
 89bba49:	83 c0 04             	add    $0x4,%eax
 89bba4c:	89 04 24             	mov    %eax,(%esp)
 89bba4f:	e8 ee e8 7b ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 89bba54:	8b 45 08             	mov    0x8(%ebp),%eax
 89bba57:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 89bba5d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89bba60:	8b 55 0c             	mov    0xc(%ebp),%edx
 89bba63:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bba67:	89 04 24             	mov    %eax,(%esp)
 89bba6a:	e8 d9 27 6d ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 89bba6f:	83 ec 04             	sub    $0x4,%esp
 89bba72:	e9 c0 00 00 00       	jmp    89bbb37 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE+0xf7>
 89bba77:	8d 45 dc             	lea    -0x24(%ebp),%eax
 89bba7a:	89 04 24             	mov    %eax,(%esp)
 89bba7d:	e8 0c a2 7f ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 89bba82:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89bba85:	89 04 24             	mov    %eax,(%esp)
 89bba88:	e8 3f 2d 6d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 89bba8d:	8b 00                	mov    (%eax),%eax
 89bba8f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 89bba92:	8d 45 ec             	lea    -0x14(%ebp),%eax
 89bba95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 89bba9c:	00 
 89bba9d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 89bbaa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbaa4:	89 04 24             	mov    %eax,(%esp)
 89bbaa7:	e8 5a 5e 98 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 89bbaac:	83 ec 04             	sub    $0x4,%esp
 89bbaaf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89bbab2:	8b 55 0c             	mov    0xc(%ebp),%edx
 89bbab5:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbab9:	89 04 24             	mov    %eax,(%esp)
 89bbabc:	e8 ab 27 6d ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 89bbac1:	83 ec 04             	sub    $0x4,%esp
 89bbac4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89bbac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 89bbacb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89bbace:	89 04 24             	mov    %eax,(%esp)
 89bbad1:	e8 04 ce 8a ff       	call   82688da <_ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 89bbad6:	84 c0                	test   %al,%al
 89bbad8:	0f 85 8a 00 00 00    	jne    89bbb68 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE+0x128>
 89bbade:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89bbae1:	89 04 24             	mov    %eax,(%esp)
 89bbae4:	e8 e3 2c 6d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 89bbae9:	8b 00                	mov    (%eax),%eax
 89bbaeb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 89bbaee:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbaf1:	8b 10                	mov    (%eax),%edx
 89bbaf3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 89bbaf6:	01 c2                	add    %eax,%edx
 89bbaf8:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbafb:	89 10                	mov    %edx,(%eax)
 89bbafd:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbb00:	8b 00                	mov    (%eax),%eax
 89bbb02:	89 45 e0             	mov    %eax,-0x20(%ebp)
 89bbb05:	8b 45 08             	mov    0x8(%ebp),%eax
 89bbb08:	8d 50 04             	lea    0x4(%eax),%edx
 89bbb0b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 89bbb0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 89bbb12:	89 14 24             	mov    %edx,(%esp)
 89bbb15:	e8 56 3f 95 ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 89bbb1a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89bbb1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 89bbb24:	00 
 89bbb25:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 89bbb28:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbb2c:	89 04 24             	mov    %eax,(%esp)
 89bbb2f:	e8 d2 5d 98 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 89bbb34:	83 ec 04             	sub    $0x4,%esp
 89bbb37:	8d 45 e8             	lea    -0x18(%ebp),%eax
 89bbb3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 89bbb3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 89bbb41:	89 04 24             	mov    %eax,(%esp)
 89bbb44:	e8 23 27 6d ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 89bbb49:	83 ec 04             	sub    $0x4,%esp
 89bbb4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 89bbb4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 89bbb53:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 89bbb56:	89 04 24             	mov    %eax,(%esp)
 89bbb59:	e8 04 e9 72 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 89bbb5e:	84 c0                	test   %al,%al
 89bbb60:	0f 85 11 ff ff ff    	jne    89bba77 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE+0x37>
 89bbb66:	eb 01                	jmp    89bbb69 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE+0x129>
 89bbb68:	90                   	nop
 89bbb69:	c9                   	leave
 89bbb6a:	c3                   	ret
 89bbb6b:	90                   	nop

```

```c
// RandomItemTable::Set @ 0x89bba40

/* RandomItemTable::Set(std::vector<int, std::allocator<int> >*) */

void RandomItemTable::Set(vector *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(param_1 + 4));
  *(undefined4 *)param_1 = 0;
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
    if (!bVar1) {
      return;
    }
    std::pair<int,int>::pair((pair<int,int> *)&local_28);
    puVar2 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       (local_20);
    local_28 = *puVar2;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_20);
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator==(local_20,local_14);
    if (bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    *(int *)param_1 = *(int *)param_1 + *piVar3;
    local_24 = *(undefined4 *)param_1;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(param_1 + 4),
               (pair *)&local_28);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_10,(int)local_20);
  }
  return;
}

```

