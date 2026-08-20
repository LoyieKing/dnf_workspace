# UpdateCreatureItemResult

`_ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM`

`user_creature::CCreatureMgr::UpdateCreatureItemResult(SIG_CREATURE_ITEM*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b592` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b592  _ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM
#           user_creature::CCreatureMgr::UpdateCreatureItemResult(SIG_CREATURE_ITEM*)
# range [0x0833b592, 0x0833b605]
0833b592 +0x00:  push   %ebp
0833b593 +0x01:  mov    %esp,%ebp
0833b595 +0x03:  sub    $0x58,%esp
0833b598 +0x06:  lea    -0x45(%ebp),%eax
0833b59b +0x09:  mov    %eax,(%esp)
0833b59e +0x0c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0833b5a3 +0x11:  mov    0xc(%ebp),%eax
0833b5a6 +0x14:  lea    0x4(%eax),%edx
0833b5a9 +0x17:  lea    -0x45(%ebp),%eax
0833b5ac +0x1a:  mov    %eax,0x4(%esp)
0833b5b0 +0x1e:  mov    %edx,(%esp)
0833b5b3 +0x21:  call   0833f418 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x14e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x14e5
0833b5b8 +0x26:  mov    0xc(%ebp),%eax
0833b5bb +0x29:  add    $0x2c,%eax
0833b5be +0x2c:  mov    %eax,0x8(%esp)
0833b5c2 +0x30:  lea    -0x45(%ebp),%eax
0833b5c5 +0x33:  mov    %eax,0x4(%esp)
0833b5c9 +0x37:  mov    0x8(%ebp),%eax
0833b5cc +0x3a:  mov    %eax,(%esp)
0833b5cf +0x3d:  call   0833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>  ; user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)
0833b5d4 +0x42:  xor    $0x1,%eax
0833b5d7 +0x45:  test   %al,%al
0833b5d9 +0x47:  je     0833b5e2 <+0x50>
0833b5db +0x49:  mov    $0x0,%eax
0833b5e0 +0x4e:  jmp    0833b604 <+0x72>
0833b5e2 +0x50:  mov    0xc(%ebp),%eax
0833b5e5 +0x53:  mov    0x64(%eax),%eax
0833b5e8 +0x56:  cmp    $0x4,%eax
0833b5eb +0x59:  jne    0833b5ff <+0x6d>
0833b5ed +0x5b:  mov    0xc(%ebp),%eax
0833b5f0 +0x5e:  mov    %eax,0x4(%esp)
0833b5f4 +0x62:  mov    0x8(%ebp),%eax
0833b5f7 +0x65:  mov    %eax,(%esp)
0833b5fa +0x68:  call   0833b498 <_ZN13user_creature12CCreatureMgr20SendCreatureItemInfoEP17SIG_CREATURE_ITEM>  ; user_creature::CCreatureMgr::SendCreatureItemInfo(SIG_CREATURE_ITEM*)
0833b5ff +0x6d:  mov    $0x1,%eax
0833b604 +0x72:  leave
0833b605 +0x73:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::UpdateCreatureItemResult @ 0x833b592

/* user_creature::CCreatureMgr::UpdateCreatureItemResult(SIG_CREATURE_ITEM*) */

undefined4 __thiscall
user_creature::CCreatureMgr::UpdateCreatureItemResult(CCreatureMgr *this,SIG_CREATURE_ITEM *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Inven_Item local_49 [69];
  
  Inven_Item::Inven_Item(local_49);
  Inven_Item_Compatible::makeInvenItem((Inven_Item_Compatible *)(param_1 + 4),local_49);
  cVar1 = LoadCreatureItem(this,local_49,(SIG_CREATURE_ITEM_DETAIL_INFO *)(param_1 + 0x2c));
  if (cVar1 == '\x01') {
    if (*(int *)(param_1 + 100) == 4) {
      SendCreatureItemInfo(this,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
