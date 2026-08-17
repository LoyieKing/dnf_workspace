# CPrePayInfoMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## FindPrePayInfo

```asm
// === 082151b8 CPrePayInfoMgr::FindPrePayInfo  [0x082151b8-0x821522d] ===
 82151b8:	55                   	push   %ebp
 82151b9:	89 e5                	mov    %esp,%ebp
 82151bb:	83 ec 38             	sub    $0x38,%esp
 82151be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82151c1:	89 04 24             	mov    %eax,(%esp)
 82151c4:	e8 e3 29 02 00       	call   8237bac <_ZNSt17_Rb_tree_iteratorISt4pairIKi10PrePayInfoEEC1Ev>
 82151c9:	8b 55 08             	mov    0x8(%ebp),%edx
 82151cc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82151cf:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82151d2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82151d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82151da:	89 04 24             	mov    %eax,(%esp)
 82151dd:	e8 d8 29 02 00       	call   8237bba <_ZNSt3mapIi10PrePayInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 82151e2:	83 ec 04             	sub    $0x4,%esp
 82151e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82151e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82151eb:	8b 55 08             	mov    0x8(%ebp),%edx
 82151ee:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82151f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82151f5:	89 04 24             	mov    %eax,(%esp)
 82151f8:	e8 e9 29 02 00       	call   8237be6 <_ZNSt3mapIi10PrePayInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 82151fd:	83 ec 04             	sub    $0x4,%esp
 8215200:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8215203:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215207:	8d 45 f0             	lea    -0x10(%ebp),%eax
 821520a:	89 04 24             	mov    %eax,(%esp)
 821520d:	e8 fa 29 02 00       	call   8237c0c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PrePayInfoEEneERKS4_>
 8215212:	84 c0                	test   %al,%al
 8215214:	74 10                	je     8215226 <_ZN14CPrePayInfoMgr14FindPrePayInfoEi+0x6e>
 8215216:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8215219:	89 04 24             	mov    %eax,(%esp)
 821521c:	e8 ff 29 02 00       	call   8237c20 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PrePayInfoEEptEv>
 8215221:	83 c0 04             	add    $0x4,%eax
 8215224:	eb 05                	jmp    821522b <_ZN14CPrePayInfoMgr14FindPrePayInfoEi+0x73>
 8215226:	b8 00 00 00 00       	mov    $0x0,%eax
 821522b:	c9                   	leave
 821522c:	c3                   	ret
 821522d:	90                   	nop

```

```c
// CPrePayInfoMgr::FindPrePayInfo @ 0x82151b8

/* CPrePayInfoMgr::FindPrePayInfo(int) */

int CPrePayInfoMgr::FindPrePayInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [3];
  int local_14;
  map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>> local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14);
  std::map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>>::find
            (local_20);
  local_14 = local_20[0];
  std::map<int,PrePayInfo,std::less<int>,std::allocator<std::pair<int_const,PrePayInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PrePayInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,PrePayInfo>> *)&local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}

```

