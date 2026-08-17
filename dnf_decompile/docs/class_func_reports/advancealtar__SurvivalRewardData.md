# advancealtar__SurvivalRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## getRoundRewardData

```asm
// === 0889aebe advancealtar::SurvivalRewardData::getRoundRewardData  [0x0889aebe-0x889af73] ===
 889aebe:	55                   	push   %ebp
 889aebf:	89 e5                	mov    %esp,%ebp
 889aec1:	83 ec 28             	sub    $0x28,%esp
 889aec4:	8b 55 08             	mov    0x8(%ebp),%edx
 889aec7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889aeca:	89 54 24 04          	mov    %edx,0x4(%esp)
 889aece:	89 04 24             	mov    %eax,(%esp)
 889aed1:	e8 78 a1 b0 ff       	call   83a504e <_ZNKSt6vectorIN12advancealtar15RoundRewardDataESaIS1_EE5beginEv>
 889aed6:	83 ec 04             	sub    $0x4,%esp
 889aed9:	eb 62                	jmp    889af3d <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x7f>
 889aedb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889aede:	89 04 24             	mov    %eax,(%esp)
 889aee1:	e8 2a 15 00 00       	call   889c410 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar15RoundRewardDataESt6vectorIS2_SaIS2_EEEptEv>
 889aee6:	8b 00                	mov    (%eax),%eax
 889aee8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 889aeeb:	7f 1a                	jg     889af07 <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x49>
 889aeed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889aef0:	89 04 24             	mov    %eax,(%esp)
 889aef3:	e8 18 15 00 00       	call   889c410 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar15RoundRewardDataESt6vectorIS2_SaIS2_EEEptEv>
 889aef8:	8b 40 04             	mov    0x4(%eax),%eax
 889aefb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 889aefe:	7c 07                	jl     889af07 <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x49>
 889af00:	b8 01 00 00 00       	mov    $0x1,%eax
 889af05:	eb 05                	jmp    889af0c <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x4e>
 889af07:	b8 00 00 00 00       	mov    $0x0,%eax
 889af0c:	84 c0                	test   %al,%al
 889af0e:	74 10                	je     889af20 <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x62>
 889af10:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889af13:	89 04 24             	mov    %eax,(%esp)
 889af16:	e8 f5 14 00 00       	call   889c410 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar15RoundRewardDataESt6vectorIS2_SaIS2_EEEptEv>
 889af1b:	83 c0 08             	add    $0x8,%eax
 889af1e:	eb 51                	jmp    889af71 <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0xb3>
 889af20:	8d 45 f4             	lea    -0xc(%ebp),%eax
 889af23:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 889af2a:	00 
 889af2b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 889af2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 889af32:	89 04 24             	mov    %eax,(%esp)
 889af35:	e8 a2 14 00 00       	call   889c3dc <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar15RoundRewardDataESt6vectorIS2_SaIS2_EEEppEi>
 889af3a:	83 ec 04             	sub    $0x4,%esp
 889af3d:	8b 55 08             	mov    0x8(%ebp),%edx
 889af40:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889af43:	89 54 24 04          	mov    %edx,0x4(%esp)
 889af47:	89 04 24             	mov    %eax,(%esp)
 889af4a:	e8 2b a1 b0 ff       	call   83a507a <_ZNKSt6vectorIN12advancealtar15RoundRewardDataESaIS1_EE3endEv>
 889af4f:	83 ec 04             	sub    $0x4,%esp
 889af52:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889af55:	89 44 24 04          	mov    %eax,0x4(%esp)
 889af59:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889af5c:	89 04 24             	mov    %eax,(%esp)
 889af5f:	e8 4d e4 b4 ff       	call   83e93b1 <_ZN9__gnu_cxxneIPKN12advancealtar15RoundRewardDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 889af64:	84 c0                	test   %al,%al
 889af66:	0f 85 6f ff ff ff    	jne    889aedb <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi+0x1d>
 889af6c:	b8 00 00 00 00       	mov    $0x0,%eax
 889af71:	c9                   	leave
 889af72:	c3                   	ret
 889af73:	90                   	nop

```

```c
// advancealtar::SurvivalRewardData::getRoundRewardData @ 0x889aebe

/* advancealtar::SurvivalRewardData::getRoundRewardData(int) const */

int __thiscall
advancealtar::SurvivalRewardData::getRoundRewardData(SurvivalRewardData *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
  local_10 [12];
  
  std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>::begin();
  while( true ) {
    std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
                    ::operator->(local_18);
    if ((param_1 < *piVar2) ||
       (iVar3 = __gnu_cxx::
                __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
                ::operator->(local_18), *(int *)(iVar3 + 4) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
    ::operator++(local_10,(int)local_18);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
          ::operator->(local_18);
  return iVar3 + 8;
}

```

