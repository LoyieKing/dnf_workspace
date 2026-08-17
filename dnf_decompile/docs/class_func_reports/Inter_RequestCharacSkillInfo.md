# Inter_RequestCharacSkillInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _PutSkillInfoToCharac

```asm
// === 084e7820 Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac  [0x084e7820-0x84e7883] ===
 84e7820:	55                   	push   %ebp
 84e7821:	89 e5                	mov    %esp,%ebp
 84e7823:	83 ec 38             	sub    $0x38,%esp
 84e7826:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7829:	88 45 e4             	mov    %al,-0x1c(%ebp)
 84e782c:	c7 45 f4 98 01 00 00 	movl   $0x198,-0xc(%ebp)
 84e7833:	80 7d e4 ff          	cmpb   $0xff,-0x1c(%ebp)
 84e7837:	74 06                	je     84e783f <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot+0x1f>
 84e7839:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 84e783d:	75 1e                	jne    84e785d <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot+0x3d>
 84e783f:	8b 45 14             	mov    0x14(%ebp),%eax
 84e7842:	8d 50 46             	lea    0x46(%eax),%edx
 84e7845:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7848:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e784c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e784f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7853:	89 14 24             	mov    %edx,(%esp)
 84e7856:	e8 45 60 b9 ff       	call   807d8a0 <memcpy@plt>
 84e785b:	eb 25                	jmp    84e7882 <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot+0x62>
 84e785d:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 84e7861:	75 1f                	jne    84e7882 <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot+0x62>
 84e7863:	8b 45 14             	mov    0x14(%ebp),%eax
 84e7866:	8d 90 de 01 00 00    	lea    0x1de(%eax),%edx
 84e786c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e786f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e7873:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7876:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e787a:	89 14 24             	mov    %edx,(%esp)
 84e787d:	e8 1e 60 b9 ff       	call   807d8a0 <memcpy@plt>
 84e7882:	c9                   	leave
 84e7883:	c3                   	ret

```

```c
// Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac @ 0x84e7820

/* Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac(char, _Mastered_skill const*, SkillSlot*) */

void __thiscall
Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac
          (Inter_RequestCharacSkillInfo *this,char param_1,_Mastered_skill *param_2,
          SkillSlot *param_3)

{
  if ((param_1 == -1) || (param_1 == '\0')) {
    memcpy(param_3 + 0x46,param_2,0x198);
  }
  else if (param_1 == '\x01') {
    memcpy(param_3 + 0x1de,param_2,0x198);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 084e7884 Inter_RequestCharacSkillInfo::dispatch_sig  [0x084e7884-0x84e79f1] ===
 84e7884:	55                   	push   %ebp
 84e7885:	89 e5                	mov    %esp,%ebp
 84e7887:	53                   	push   %ebx
 84e7888:	83 ec 24             	sub    $0x24,%esp
 84e788b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e788e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e7891:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e7895:	75 0a                	jne    84e78a1 <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x1d>
 84e7897:	b8 00 00 00 00       	mov    $0x0,%eax
 84e789c:	e9 4b 01 00 00       	jmp    84e79ec <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x168>
 84e78a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e78a4:	89 04 24             	mov    %eax,(%esp)
 84e78a7:	e8 e0 2a bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e78ac:	83 f8 02             	cmp    $0x2,%eax
 84e78af:	0f 9e c0             	setle  %al
 84e78b2:	84 c0                	test   %al,%al
 84e78b4:	74 0a                	je     84e78c0 <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x3c>
 84e78b6:	b8 00 00 00 00       	mov    $0x0,%eax
 84e78bb:	e9 2c 01 00 00       	jmp    84e79ec <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x168>
 84e78c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e78c3:	8b 00                	mov    (%eax),%eax
 84e78c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e78c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e78cc:	89 04 24             	mov    %eax,(%esp)
 84e78cf:	e8 3e 66 16 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84e78d4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e78d7:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 84e78db:	75 0a                	jne    84e78e7 <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x63>
 84e78dd:	b8 00 00 00 00       	mov    $0x0,%eax
 84e78e2:	e9 05 01 00 00       	jmp    84e79ec <_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci+0x168>
 84e78e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e78ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e78ed:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e78f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e78f7:	89 14 24             	mov    %edx,(%esp)
 84e78fa:	e8 b9 92 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e78ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84e7902:	0f b6 92 9c 01 00 00 	movzbl 0x19c(%edx),%edx
 84e7909:	88 90 39 12 00 00    	mov    %dl,0x1239(%eax)
 84e790f:	0f b6 80 39 12 00 00 	movzbl 0x1239(%eax),%eax
 84e7916:	88 45 f7             	mov    %al,-0x9(%ebp)
 84e7919:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e791c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e791f:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e7925:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7929:	89 14 24             	mov    %edx,(%esp)
 84e792c:	e8 87 92 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e7931:	8d 90 92 08 00 00    	lea    0x892(%eax),%edx
 84e7937:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e793a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e793e:	89 14 24             	mov    %edx,(%esp)
 84e7941:	e8 e8 74 d4 ff       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 84e7946:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7949:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e794c:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e7952:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7956:	89 14 24             	mov    %edx,(%esp)
 84e7959:	e8 5a 92 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e795e:	8d 88 92 08 00 00    	lea    0x892(%eax),%ecx
 84e7964:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e7967:	8d 50 04             	lea    0x4(%eax),%edx
 84e796a:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 84e796e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e7972:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e7976:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e797a:	8b 45 08             	mov    0x8(%ebp),%eax
 84e797d:	89 04 24             	mov    %eax,(%esp)
 84e7980:	e8 9b fe ff ff       	call   84e7820 <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot>
 84e7985:	0f be 5d f7          	movsbl -0x9(%ebp),%ebx
 84e7989:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e798c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e798f:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e7995:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7999:	89 14 24             	mov    %edx,(%esp)
 84e799c:	e8 17 92 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e79a1:	8d 90 92 08 00 00    	lea    0x892(%eax),%edx
 84e79a7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e79ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e79ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e79b2:	89 14 24             	mov    %edx,(%esp)
 84e79b5:	e8 14 0d 12 00       	call   86086ce <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND>
 84e79ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e79bd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e79c0:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84e79c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e79ca:	89 14 24             	mov    %edx,(%esp)
 84e79cd:	e8 e6 91 cb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84e79d2:	05 92 08 00 00       	add    $0x892,%eax
 84e79d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e79de:	00 
 84e79df:	89 04 24             	mov    %eax,(%esp)
 84e79e2:	e8 cf 0c 12 00       	call   86086b6 <_ZN9SkillSlot19SetLoadStrikerSkillEb>
 84e79e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84e79ec:	83 c4 24             	add    $0x24,%esp
 84e79ef:	5b                   	pop    %ebx
 84e79f0:	5d                   	pop    %ebp
 84e79f1:	c3                   	ret

```

```c
// Inter_RequestCharacSkillInfo::dispatch_sig @ 0x84e7884

/* Inter_RequestCharacSkillInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestCharacSkillInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 != (char *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), 2 < iVar2)) &&
     (uVar3 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3), uVar3 != 0xffffffff)) {
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    *(undefined1 *)(iVar2 + 0x1239) = *(undefined1 *)(param_3 + 0x19c);
    cVar1 = *(char *)(iVar2 + 0x1239);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::set_parent((SkillSlot *)(iVar2 + 0x892),(CUser *)param_2);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    _PutSkillInfoToCharac
              ((Inter_RequestCharacSkillInfo *)param_1,cVar1,(_Mastered_skill *)(param_3 + 4),
               (SkillSlot *)(iVar2 + 0x892));
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::SendSkillInfo((SkillSlot *)(iVar2 + 0x892),uVar3,(int)cVar1);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::SetLoadStrikerSkill((SkillSlot *)(iVar2 + 0x892),true);
  }
  return 0;
}

```

