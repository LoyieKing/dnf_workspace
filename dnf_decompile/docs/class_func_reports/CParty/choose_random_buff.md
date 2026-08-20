# choose_random_buff

`_ZN6CParty18choose_random_buffEN10QuickParty17RandomBuffDungeonE`

`CParty::choose_random_buff(QuickParty::RandomBuffDungeon)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b814  _ZN6CParty18choose_random_buffEN10QuickParty17RandomBuffDungeonE
#           CParty::choose_random_buff(QuickParty::RandomBuffDungeon)
# range [0x0859b814, 0x0859b8f9]
0859b814 +0x00:  push   %ebp
0859b815 +0x01:  mov    %esp,%ebp
0859b817 +0x03:  push   %ebx
0859b818 +0x04:  sub    $0x24,%esp
0859b81b +0x07:  mov    0x8(%ebp),%eax
0859b81e +0x0a:  mov    %eax,(%esp)
0859b821 +0x0d:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0859b826 +0x12:  xor    $0x1,%eax
0859b829 +0x15:  test   %al,%al
0859b82b +0x17:  je     0859b837 <+0x23>
0859b82d +0x19:  mov    $0xb,%eax
0859b832 +0x1e:  jmp    0859b8f4 <+0xe0>
0859b837 +0x23:  mov    0xc(%ebp),%eax
0859b83a +0x26:  cmp    $0x6,%eax
0859b83d +0x29:  jle    0859b849 <+0x35>
0859b83f +0x2b:  mov    $0xb,%eax
0859b844 +0x30:  jmp    0859b8f4 <+0xe0>
0859b849 +0x35:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859b84e +0x3a:  mov    %eax,(%esp)
0859b851 +0x3d:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859b856 +0x42:  mov    0xc(%ebp),%edx
0859b859 +0x45:  mov    %edx,0x8(%esp)
0859b85d +0x49:  movl   $0xb,0x4(%esp)
0859b865 +0x51:  mov    %eax,(%esp)
0859b868 +0x54:  call   0826d860 <_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE>  ; QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType, QuickParty::RandomBuffDungeon)
0859b86d +0x59:  mov    %eax,-0x18(%ebp)
0859b870 +0x5c:  cmpl   $0x0,-0x18(%ebp)
0859b874 +0x60:  jne    0859b87d <+0x69>
0859b876 +0x62:  mov    $0xb,%eax
0859b87b +0x67:  jmp    0859b8f4 <+0xe0>
0859b87d +0x69:  mov    -0x18(%ebp),%eax
0859b880 +0x6c:  mov    %eax,(%esp)
0859b883 +0x6f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0859b888 +0x74:  mov    %eax,-0x14(%ebp)
0859b88b +0x77:  movl   $0x0,-0x10(%ebp)
0859b892 +0x7e:  movl   $0x0,-0xc(%ebp)
0859b899 +0x85:  jmp    0859b8e4 <+0xd0>
0859b89b +0x87:  mov    -0xc(%ebp),%ebx
0859b89e +0x8a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859b8a3 +0x8f:  mov    %eax,(%esp)
0859b8a6 +0x92:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859b8ab +0x97:  mov    0xc(%ebp),%edx
0859b8ae +0x9a:  mov    %edx,0x8(%esp)
0859b8b2 +0x9e:  mov    %ebx,0x4(%esp)
0859b8b6 +0xa2:  mov    %eax,(%esp)
0859b8b9 +0xa5:  call   0826d860 <_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE>  ; QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType, QuickParty::RandomBuffDungeon)
0859b8be +0xaa:  add    %eax,-0x10(%ebp)
0859b8c1 +0xad:  mov    -0x14(%ebp),%eax
0859b8c4 +0xb0:  cmp    -0x10(%ebp),%eax
0859b8c7 +0xb3:  jg     0859b8e0 <+0xcc>
0859b8c9 +0xb5:  mov    -0xc(%ebp),%edx
0859b8cc +0xb8:  mov    0x8(%ebp),%eax
0859b8cf +0xbb:  mov    %edx,0x1ae8(%eax)
0859b8d5 +0xc1:  mov    0x8(%ebp),%eax
0859b8d8 +0xc4:  mov    0x1ae8(%eax),%eax
0859b8de +0xca:  jmp    0859b8f4 <+0xe0>
0859b8e0 +0xcc:  addl   $0x1,-0xc(%ebp)
0859b8e4 +0xd0:  cmpl   $0xa,-0xc(%ebp)
0859b8e8 +0xd4:  setle  %al
0859b8eb +0xd7:  test   %al,%al
0859b8ed +0xd9:  jne    0859b89b <+0x87>
0859b8ef +0xdb:  mov    $0xb,%eax
0859b8f4 +0xe0:  add    $0x24,%esp
0859b8f7 +0xe3:  pop    %ebx
0859b8f8 +0xe4:  pop    %ebp
0859b8f9 +0xe5:  ret
```

## 反编译 C

```c
// CParty::choose_random_buff @ 0x859b814

/* CParty::choose_random_buff(QuickParty::RandomBuffDungeon) */

undefined4 __thiscall CParty::choose_random_buff(CParty *this,int param_2)

{
  char cVar1;
  CGameManager *pCVar2;
  CQuickPartyRewardManager *pCVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  
  cVar1 = is_quick_party(this);
  if ((cVar1 == '\x01') && (param_2 < 7)) {
    pCVar2 = (CGameManager *)G_CGameManager();
    pCVar3 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar2);
    iVar4 = QuickParty::CQuickPartyRewardManager::get_random_buff_prob(pCVar3,0xb,param_2);
    if (iVar4 != 0) {
      iVar4 = get_rand_int(iVar4);
      local_14 = 0;
      for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
        pCVar2 = (CGameManager *)G_CGameManager();
        pCVar3 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar2);
        iVar5 = QuickParty::CQuickPartyRewardManager::get_random_buff_prob(pCVar3,local_10,param_2);
        local_14 = local_14 + iVar5;
        if (iVar4 <= local_14) {
          *(int *)(this + 0x1ae8) = local_10;
          return *(undefined4 *)(this + 0x1ae8);
        }
      }
    }
  }
  return 0xb;
}
```
