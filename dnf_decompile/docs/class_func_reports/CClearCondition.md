# CClearCondition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ClearCondition

```asm
// === 082fefce CClearCondition::ClearCondition  [0x082fefce-0x82ff127] ===
 82fefce:	55                   	push   %ebp
 82fefcf:	89 e5                	mov    %esp,%ebp
 82fefd1:	83 ec 38             	sub    $0x38,%esp
 82fefd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fefd7:	85 c0                	test   %eax,%eax
 82fefd9:	78 08                	js     82fefe3 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x15>
 82fefdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fefde:	83 f8 04             	cmp    $0x4,%eax
 82fefe1:	7e 0a                	jle    82fefed <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x1f>
 82fefe3:	b8 00 00 00 00       	mov    $0x0,%eax
 82fefe8:	e9 39 01 00 00       	jmp    82ff126 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x158>
 82fefed:	8b 45 08             	mov    0x8(%ebp),%eax
 82feff0:	8b 50 14             	mov    0x14(%eax),%edx
 82feff3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82feff6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82feffa:	89 04 24             	mov    %eax,(%esp)
 82feffd:	e8 34 08 01 00       	call   830f836 <_ZNSt6vectorI21DungeonClearConditionSaIS0_EE5beginEv>
 82ff002:	83 ec 04             	sub    $0x4,%esp
 82ff005:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff008:	8b 50 14             	mov    0x14(%eax),%edx
 82ff00b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ff00e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ff012:	89 04 24             	mov    %eax,(%esp)
 82ff015:	e8 40 08 01 00       	call   830f85a <_ZNSt6vectorI21DungeonClearConditionSaIS0_EE3endEv>
 82ff01a:	83 ec 04             	sub    $0x4,%esp
 82ff01d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff020:	8d 50 08             	lea    0x8(%eax),%edx
 82ff023:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ff026:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ff02a:	89 04 24             	mov    %eax,(%esp)
 82ff02d:	e8 16 f2 d8 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 82ff032:	83 ec 04             	sub    $0x4,%esp
 82ff035:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff038:	8d 50 08             	lea    0x8(%eax),%edx
 82ff03b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82ff03e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ff042:	89 04 24             	mov    %eax,(%esp)
 82ff045:	e8 22 f2 d8 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 82ff04a:	83 ec 04             	sub    $0x4,%esp
 82ff04d:	eb 7c                	jmp    82ff0cb <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0xfd>
 82ff04f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ff052:	89 04 24             	mov    %eax,(%esp)
 82ff055:	e8 68 08 01 00       	call   830f8c2 <_ZNK9__gnu_cxx17__normal_iteratorIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEdeEv>
 82ff05a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ff05d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ff060:	89 04 24             	mov    %eax,(%esp)
 82ff063:	e8 64 f7 d8 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 82ff068:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ff06b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ff06e:	8b 00                	mov    (%eax),%eax
 82ff070:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82ff073:	75 40                	jne    82ff0b5 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0xe7>
 82ff075:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ff078:	8b 40 04             	mov    0x4(%eax),%eax
 82ff07b:	3b 45 10             	cmp    0x10(%ebp),%eax
 82ff07e:	75 35                	jne    82ff0b5 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0xe7>
 82ff080:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ff083:	8b 50 08             	mov    0x8(%eax),%edx
 82ff086:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ff089:	8b 00                	mov    (%eax),%eax
 82ff08b:	39 c2                	cmp    %eax,%edx
 82ff08d:	7f 0a                	jg     82ff099 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0xcb>
 82ff08f:	b8 00 00 00 00       	mov    $0x0,%eax
 82ff094:	e9 8d 00 00 00       	jmp    82ff126 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x158>
 82ff099:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ff09c:	8b 00                	mov    (%eax),%eax
 82ff09e:	8d 50 01             	lea    0x1(%eax),%edx
 82ff0a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ff0a4:	89 10                	mov    %edx,(%eax)
 82ff0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff0a9:	8b 40 04             	mov    0x4(%eax),%eax
 82ff0ac:	8d 50 01             	lea    0x1(%eax),%edx
 82ff0af:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff0b2:	89 50 04             	mov    %edx,0x4(%eax)
 82ff0b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ff0b8:	89 04 24             	mov    %eax,(%esp)
 82ff0bb:	e8 ec 07 01 00       	call   830f8ac <_ZN9__gnu_cxx17__normal_iteratorIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEppEv>
 82ff0c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ff0c3:	89 04 24             	mov    %eax,(%esp)
 82ff0c6:	e8 c1 b8 de ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 82ff0cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ff0ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ff0d2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ff0d5:	89 04 24             	mov    %eax,(%esp)
 82ff0d8:	e8 a3 07 01 00       	call   830f880 <_ZN9__gnu_cxxneIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 82ff0dd:	84 c0                	test   %al,%al
 82ff0df:	74 1d                	je     82ff0fe <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x130>
 82ff0e1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82ff0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ff0e8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ff0eb:	89 04 24             	mov    %eax,(%esp)
 82ff0ee:	e8 6f b3 de ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 82ff0f3:	84 c0                	test   %al,%al
 82ff0f5:	74 07                	je     82ff0fe <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x130>
 82ff0f7:	b8 01 00 00 00       	mov    $0x1,%eax
 82ff0fc:	eb 05                	jmp    82ff103 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x135>
 82ff0fe:	b8 00 00 00 00       	mov    $0x0,%eax
 82ff103:	84 c0                	test   %al,%al
 82ff105:	0f 85 44 ff ff ff    	jne    82ff04f <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x81>
 82ff10b:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff10e:	8b 10                	mov    (%eax),%edx
 82ff110:	8b 45 08             	mov    0x8(%ebp),%eax
 82ff113:	8b 40 04             	mov    0x4(%eax),%eax
 82ff116:	39 c2                	cmp    %eax,%edx
 82ff118:	7f 07                	jg     82ff121 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x153>
 82ff11a:	b8 01 00 00 00       	mov    $0x1,%eax
 82ff11f:	eb 05                	jmp    82ff126 <_ZN15CClearCondition14ClearConditionE33ENUM_DUNGEON_CLEAR_CONDITION_TYPEi+0x158>
 82ff121:	b8 00 00 00 00       	mov    $0x0,%eax
 82ff126:	c9                   	leave
 82ff127:	c3                   	ret

```

```c
// CClearCondition::ClearCondition @ 0x82fefce

/* CClearCondition::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int) */

undefined4 __thiscall CClearCondition::ClearCondition(CClearCondition *this,int param_2,int param_3)

{
  bool bVar1;
  __normal_iterator local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
  local_18 [4];
  int *local_14;
  int *local_10;
  
  if ((-1 < param_2) && (param_2 < 5)) {
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::begin();
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
      if ((bVar1) && (bVar1 = __gnu_cxx::operator!=(local_20,local_24), bVar1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      local_14 = (int *)__gnu_cxx::
                        __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
                        ::operator*(local_18);
      local_10 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_20);
      if ((*local_14 == param_2) && (local_14[1] == param_3)) {
        if (local_14[2] <= *local_10) {
          return 0;
        }
        *local_10 = *local_10 + 1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
      }
      __gnu_cxx::
      __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
      ::operator++(local_18);
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_20);
    }
    if (*(int *)this <= *(int *)(this + 4)) {
      return 1;
    }
    return 0;
  }
  return 0;
}

```

---

## SetDungeonClearConditionVector

```asm
// === 082fef12 CClearCondition::SetDungeonClearConditionVector  [0x082fef12-0x82fefcd] ===
 82fef12:	55                   	push   %ebp
 82fef13:	89 e5                	mov    %esp,%ebp
 82fef15:	83 ec 28             	sub    $0x28,%esp
 82fef18:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef1b:	89 04 24             	mov    %eax,(%esp)
 82fef1e:	e8 67 54 fa ff       	call   82a438a <_ZN15CClearCondition5ClearEv>
 82fef23:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fef26:	89 04 24             	mov    %eax,(%esp)
 82fef29:	e8 c4 08 01 00       	call   830f7f2 <_ZNKSt6vectorI21DungeonClearConditionSaIS0_EE5emptyEv>
 82fef2e:	83 f0 01             	xor    $0x1,%eax
 82fef31:	84 c0                	test   %al,%al
 82fef33:	0f 84 92 00 00 00    	je     82fefcb <_ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE+0xb9>
 82fef39:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef3c:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fef3f:	89 50 14             	mov    %edx,0x14(%eax)
 82fef42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fef45:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fef48:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fef4c:	89 04 24             	mov    %eax,(%esp)
 82fef4f:	e8 e2 08 01 00       	call   830f836 <_ZNSt6vectorI21DungeonClearConditionSaIS0_EE5beginEv>
 82fef54:	83 ec 04             	sub    $0x4,%esp
 82fef57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fef5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 82fef5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fef61:	89 04 24             	mov    %eax,(%esp)
 82fef64:	e8 f1 08 01 00       	call   830f85a <_ZNSt6vectorI21DungeonClearConditionSaIS0_EE3endEv>
 82fef69:	83 ec 04             	sub    $0x4,%esp
 82fef6c:	eb 47                	jmp    82fefb5 <_ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE+0xa3>
 82fef6e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fef71:	89 04 24             	mov    %eax,(%esp)
 82fef74:	e8 49 09 01 00       	call   830f8c2 <_ZNK9__gnu_cxx17__normal_iteratorIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEdeEv>
 82fef79:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82fef7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef7f:	8b 10                	mov    (%eax),%edx
 82fef81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82fef84:	8b 40 08             	mov    0x8(%eax),%eax
 82fef87:	01 c2                	add    %eax,%edx
 82fef89:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef8c:	89 10                	mov    %edx,(%eax)
 82fef8e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82fef95:	8b 45 08             	mov    0x8(%ebp),%eax
 82fef98:	8d 50 08             	lea    0x8(%eax),%edx
 82fef9b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fef9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fefa2:	89 14 24             	mov    %edx,(%esp)
 82fefa5:	e8 44 f2 d8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 82fefaa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fefad:	89 04 24             	mov    %eax,(%esp)
 82fefb0:	e8 f7 08 01 00       	call   830f8ac <_ZN9__gnu_cxx17__normal_iteratorIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEppEv>
 82fefb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fefb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fefbc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82fefbf:	89 04 24             	mov    %eax,(%esp)
 82fefc2:	e8 b9 08 01 00       	call   830f880 <_ZN9__gnu_cxxneIP21DungeonClearConditionSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 82fefc7:	84 c0                	test   %al,%al
 82fefc9:	75 a3                	jne    82fef6e <_ZN15CClearCondition30SetDungeonClearConditionVectorERSt6vectorI21DungeonClearConditionSaIS1_EE+0x5c>
 82fefcb:	c9                   	leave
 82fefcc:	c3                   	ret
 82fefcd:	90                   	nop

```

```c
// CClearCondition::SetDungeonClearConditionVector @ 0x82fef12

/* CClearCondition::SetDungeonClearConditionVector(std::vector<DungeonClearCondition,
   std::allocator<DungeonClearCondition> >&) */

void __thiscall
CClearCondition::SetDungeonClearConditionVector(CClearCondition *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_1c [4];
  __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  Clear(this);
  cVar1 = std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::empty();
  if (cVar1 != '\x01') {
    *(vector **)(this + 0x14) = param_1;
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::begin();
    std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_18,local_1c);
      if (!bVar2) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
                 ::operator*(local_18);
      *(int *)this = *(int *)this + *(int *)(local_10 + 8);
      local_14 = 0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 8),&local_14);
      __gnu_cxx::
      __normal_iterator<DungeonClearCondition*,std::vector<DungeonClearCondition,std::allocator<DungeonClearCondition>>>
      ::operator++(local_18);
    }
  }
  return;
}

```

