# processDungeonDrop

`_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE`

`game_master::CMonsterDropTest::processDungeonDrop(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ad8dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ad8dc  _ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE
#           game_master::CMonsterDropTest::processDungeonDrop(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
# range [0x084ad8dc, 0x084ad939]
084ad8dc +0x00:  push   %ebp
084ad8dd +0x01:  mov    %esp,%ebp
084ad8df +0x03:  sub    $0x18,%esp
084ad8e2 +0x06:  mov    0x8(%ebp),%eax
084ad8e5 +0x09:  mov    0x8(%eax),%eax
084ad8e8 +0x0c:  test   %eax,%eax
084ad8ea +0x0e:  je     084ad8f6 <+0x1a>
084ad8ec +0x10:  sub    $0x2,%eax
084ad8ef +0x13:  cmp    $0x1,%eax
084ad8f2 +0x16:  ja     084ad938 <+0x5c>
084ad8f4 +0x18:  jmp    084ad918 <+0x3c>
084ad8f6 +0x1a:  mov    0x14(%ebp),%eax
084ad8f9 +0x1d:  mov    %eax,0xc(%esp)
084ad8fd +0x21:  mov    0x10(%ebp),%eax
084ad900 +0x24:  mov    %eax,0x8(%esp)
084ad904 +0x28:  mov    0xc(%ebp),%eax
084ad907 +0x2b:  mov    %eax,0x4(%esp)
084ad90b +0x2f:  mov    0x8(%ebp),%eax
084ad90e +0x32:  mov    %eax,(%esp)
084ad911 +0x35:  call   084ad93a <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>  ; game_master::CMonsterDropTest::singleMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084ad916 +0x3a:  jmp    084ad938 <+0x5c>
084ad918 +0x3c:  mov    0x14(%ebp),%eax
084ad91b +0x3f:  mov    %eax,0xc(%esp)
084ad91f +0x43:  mov    0x10(%ebp),%eax
084ad922 +0x46:  mov    %eax,0x8(%esp)
084ad926 +0x4a:  mov    0xc(%ebp),%eax
084ad929 +0x4d:  mov    %eax,0x4(%esp)
084ad92d +0x51:  mov    0x8(%ebp),%eax
084ad930 +0x54:  mov    %eax,(%esp)
084ad933 +0x57:  call   084adaf8 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>  ; game_master::CMonsterDropTest::passedMapMonsterKill(CParty*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&)
084ad938 +0x5c:  leave
084ad939 +0x5d:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::processDungeonDrop @ 0x84ad8dc

/* game_master::CMonsterDropTest::processDungeonDrop(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::processDungeonDrop(CParty *param_1,map *param_2,map *param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    singleMapMonsterKill(param_1,param_2,param_3);
  }
  else if (*(int *)(param_1 + 8) - 2U < 2) {
    passedMapMonsterKill(param_1,param_2,param_3);
  }
  return;
}
```
