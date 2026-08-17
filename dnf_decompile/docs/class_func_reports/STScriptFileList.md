# STScriptFileList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Clear

```asm
// === 088bad3a STScriptFileList::Clear  [0x088bad3a-0x88bad4d] ===
 88bad3a:	55                   	push   %ebp
 88bad3b:	89 e5                	mov    %esp,%ebp
 88bad3d:	83 ec 18             	sub    $0x18,%esp
 88bad40:	8b 45 08             	mov    0x8(%ebp),%eax
 88bad43:	89 04 24             	mov    %eax,(%esp)
 88bad46:	e8 8b be 80 ff       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 88bad4b:	c9                   	leave
 88bad4c:	c3                   	ret
 88bad4d:	90                   	nop

```

```c
// STScriptFileList::Clear @ 0x88bad3a

/* STScriptFileList::Clear() */

void __thiscall STScriptFileList::Clear(STScriptFileList *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  return;
}

```

---

## FindIndexByFullScan

```asm
// === 088bae56 STScriptFileList::FindIndexByFullScan  [0x088bae56-0x88baef1] ===
 88bae56:	55                   	push   %ebp
 88bae57:	89 e5                	mov    %esp,%ebp
 88bae59:	83 ec 28             	sub    $0x28,%esp
 88bae5c:	8b 55 08             	mov    0x8(%ebp),%edx
 88bae5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bae62:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bae66:	89 04 24             	mov    %eax,(%esp)
 88bae69:	e8 76 94 00 00       	call   88c42e4 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 88bae6e:	83 ec 04             	sub    $0x4,%esp
 88bae71:	8b 55 08             	mov    0x8(%ebp),%edx
 88bae74:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88bae77:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bae7b:	89 04 24             	mov    %eax,(%esp)
 88bae7e:	e8 d1 bf 80 ff       	call   80c6e54 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88bae83:	83 ec 04             	sub    $0x4,%esp
 88bae86:	eb 4d                	jmp    88baed5 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc+0x7f>
 88bae88:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bae8b:	89 04 24             	mov    %eax,(%esp)
 88bae8e:	e8 fb bf 80 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 88bae93:	8d 50 04             	lea    0x4(%eax),%edx
 88bae96:	8b 45 0c             	mov    0xc(%ebp),%eax
 88bae99:	89 44 24 04          	mov    %eax,0x4(%esp)
 88bae9d:	89 14 24             	mov    %edx,(%esp)
 88baea0:	e8 fc 5a 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88baea5:	84 c0                	test   %al,%al
 88baea7:	74 0f                	je     88baeb8 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc+0x62>
 88baea9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88baeac:	89 04 24             	mov    %eax,(%esp)
 88baeaf:	e8 da bf 80 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 88baeb4:	8b 00                	mov    (%eax),%eax
 88baeb6:	eb 38                	jmp    88baef0 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc+0x9a>
 88baeb8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88baebb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88baec2:	00 
 88baec3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 88baec6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88baeca:	89 04 24             	mov    %eax,(%esp)
 88baecd:	e8 38 94 00 00       	call   88c430a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEppEi>
 88baed2:	83 ec 04             	sub    $0x4,%esp
 88baed5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88baed8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88baedc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88baedf:	89 04 24             	mov    %eax,(%esp)
 88baee2:	e8 93 bf 80 ff       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 88baee7:	84 c0                	test   %al,%al
 88baee9:	75 9d                	jne    88bae88 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc+0x32>
 88baeeb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88baef0:	c9                   	leave
 88baef1:	c3                   	ret

```

```c
// STScriptFileList::FindIndexByFullScan @ 0x88bae56

/* STScriptFileList::FindIndexByFullScan(char const*) const */

undefined4 __thiscall STScriptFileList::FindIndexByFullScan(STScriptFileList *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_10 [12];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_18);
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14,
                       (_Rb_tree_const_iterator *)local_18);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14);
    bVar1 = std::operator==((string *)(iVar3 + 4),param_1);
    if (bVar1) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator++
              (local_10,(int)local_14);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                     ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)local_14);
  return *puVar4;
}

```

---

## GetFileName

```asm
// === 088bad4e STScriptFileList::GetFileName  [0x088bad4e-0x88badb9] ===
 88bad4e:	55                   	push   %ebp
 88bad4f:	89 e5                	mov    %esp,%ebp
 88bad51:	83 ec 28             	sub    $0x28,%esp
 88bad54:	8b 55 08             	mov    0x8(%ebp),%edx
 88bad57:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bad5a:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 88bad5d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88bad61:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bad65:	89 04 24             	mov    %eax,(%esp)
 88bad68:	e8 bb c0 80 ff       	call   80c6e28 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 88bad6d:	83 ec 04             	sub    $0x4,%esp
 88bad70:	8b 55 08             	mov    0x8(%ebp),%edx
 88bad73:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88bad76:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bad7a:	89 04 24             	mov    %eax,(%esp)
 88bad7d:	e8 d2 c0 80 ff       	call   80c6e54 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88bad82:	83 ec 04             	sub    $0x4,%esp
 88bad85:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88bad88:	89 44 24 04          	mov    %eax,0x4(%esp)
 88bad8c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bad8f:	89 04 24             	mov    %eax,(%esp)
 88bad92:	e8 e7 ce 80 ff       	call   80c7c7e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEeqERKS3_>
 88bad97:	84 c0                	test   %al,%al
 88bad99:	74 07                	je     88bada2 <_ZNK16STScriptFileList11GetFileNameEi+0x54>
 88bad9b:	b8 00 00 00 00       	mov    $0x0,%eax
 88bada0:	eb 16                	jmp    88badb8 <_ZNK16STScriptFileList11GetFileNameEi+0x6a>
 88bada2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bada5:	89 04 24             	mov    %eax,(%esp)
 88bada8:	e8 e1 c0 80 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 88badad:	83 c0 04             	add    $0x4,%eax
 88badb0:	89 04 24             	mov    %eax,(%esp)
 88badb3:	e8 38 b7 e4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88badb8:	c9                   	leave
 88badb9:	c3                   	ret

```

```c
// STScriptFileList::GetFileName @ 0x88bad4e

/* STScriptFileList::GetFileName(int) const */

undefined4 STScriptFileList::GetFileName(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [12]
  ;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_14);
    uVar2 = std::string::c_str((string *)(iVar3 + 4));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetIndex

```asm
// === 088badba STScriptFileList::GetIndex  [0x088badba-0x88bae55] ===
 88badba:	55                   	push   %ebp
 88badbb:	89 e5                	mov    %esp,%ebp
 88badbd:	83 ec 28             	sub    $0x28,%esp
 88badc0:	8b 55 08             	mov    0x8(%ebp),%edx
 88badc3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88badc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88badca:	89 04 24             	mov    %eax,(%esp)
 88badcd:	e8 20 b3 82 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 88badd2:	83 ec 04             	sub    $0x4,%esp
 88badd5:	eb 4d                	jmp    88bae24 <_ZN16STScriptFileList8GetIndexEPKc+0x6a>
 88badd7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88badda:	89 04 24             	mov    %eax,(%esp)
 88baddd:	e8 82 fc 9e ff       	call   82aaa64 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEdeEv>
 88bade2:	8d 50 04             	lea    0x4(%eax),%edx
 88bade5:	8b 45 0c             	mov    0xc(%ebp),%eax
 88bade8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88badec:	89 14 24             	mov    %edx,(%esp)
 88badef:	e8 ad 5b 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88badf4:	84 c0                	test   %al,%al
 88badf6:	74 0f                	je     88bae07 <_ZN16STScriptFileList8GetIndexEPKc+0x4d>
 88badf8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88badfb:	89 04 24             	mov    %eax,(%esp)
 88badfe:	e8 61 fc 9e ff       	call   82aaa64 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEdeEv>
 88bae03:	8b 00                	mov    (%eax),%eax
 88bae05:	eb 4d                	jmp    88bae54 <_ZN16STScriptFileList8GetIndexEPKc+0x9a>
 88bae07:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88bae0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88bae11:	00 
 88bae12:	8d 55 ec             	lea    -0x14(%ebp),%edx
 88bae15:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bae19:	89 04 24             	mov    %eax,(%esp)
 88bae1c:	e8 c3 68 a8 ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 88bae21:	83 ec 04             	sub    $0x4,%esp
 88bae24:	8b 55 08             	mov    0x8(%ebp),%edx
 88bae27:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bae2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 88bae2e:	89 04 24             	mov    %eax,(%esp)
 88bae31:	e8 e2 b2 82 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88bae36:	83 ec 04             	sub    $0x4,%esp
 88bae39:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88bae3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88bae40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88bae43:	89 04 24             	mov    %eax,(%esp)
 88bae46:	e8 f3 b2 82 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 88bae4b:	84 c0                	test   %al,%al
 88bae4d:	75 88                	jne    88badd7 <_ZN16STScriptFileList8GetIndexEPKc+0x1d>
 88bae4f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88bae54:	c9                   	leave
 88bae55:	c3                   	ret

```

```c
// STScriptFileList::GetIndex @ 0x88badba

/* STScriptFileList::GetIndex(char const*) */

undefined4 __thiscall STScriptFileList::GetIndex(STScriptFileList *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_10 [12];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_18);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18);
    bVar1 = std::operator==((string *)(iVar3 + 4),param_1);
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_10,(int)local_18);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator*
                     ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18);
  return *puVar4;
}

```

---

## STScriptFileList

```asm
// === 088bacf8 STScriptFileList::STScriptFileList  [0x088bacf8-0x88bad39] ===
 88bacf8:	55                   	push   %ebp
 88bacf9:	89 e5                	mov    %esp,%ebp
 88bacfb:	56                   	push   %esi
 88bacfc:	53                   	push   %ebx
 88bacfd:	83 ec 10             	sub    $0x10,%esp
 88bad00:	8b 45 08             	mov    0x8(%ebp),%eax
 88bad03:	89 04 24             	mov    %eax,(%esp)
 88bad06:	e8 df be 80 ff       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 88bad0b:	8b 45 08             	mov    0x8(%ebp),%eax
 88bad0e:	89 04 24             	mov    %eax,(%esp)
 88bad11:	e8 24 00 00 00       	call   88bad3a <_ZN16STScriptFileList5ClearEv>
 88bad16:	eb 1b                	jmp    88bad33 <_ZN16STScriptFileListC1Ev+0x3b>
 88bad18:	89 d3                	mov    %edx,%ebx
 88bad1a:	89 c6                	mov    %eax,%esi
 88bad1c:	8b 45 08             	mov    0x8(%ebp),%eax
 88bad1f:	89 04 24             	mov    %eax,(%esp)
 88bad22:	e8 8b bd 80 ff       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 88bad27:	89 f0                	mov    %esi,%eax
 88bad29:	89 da                	mov    %ebx,%edx
 88bad2b:	89 04 24             	mov    %eax,(%esp)
 88bad2e:	e8 1d 8a 22 00       	call   8ae3750 <_Unwind_Resume>
 88bad33:	83 c4 10             	add    $0x10,%esp
 88bad36:	5b                   	pop    %ebx
 88bad37:	5e                   	pop    %esi
 88bad38:	5d                   	pop    %ebp
 88bad39:	c3                   	ret

```

```c
// STScriptFileList::STScriptFileList @ 0x88bacf8

/* STScriptFileList::STScriptFileList() */

void __thiscall STScriptFileList::STScriptFileList(STScriptFileList *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
                    /* try { // try from 088bad11 to 088bad15 has its CatchHandler @ 088bad18 */
  Clear(this);
  return;
}

```

