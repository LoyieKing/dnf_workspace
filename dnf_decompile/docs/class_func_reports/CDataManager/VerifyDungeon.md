# VerifyDungeon

`_ZNK12CDataManager13VerifyDungeonERK8CDungeon`

`CDataManager::VerifyDungeon(CDungeon const&) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08362b44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08362b44  _ZNK12CDataManager13VerifyDungeonERK8CDungeon
#           CDataManager::VerifyDungeon(CDungeon const&) const
# range [0x08362b44, 0x08362be5]
08362b44 +0x00:  push   %ebp
08362b45 +0x01:  mov    %esp,%ebp
08362b47 +0x03:  sub    $0x28,%esp
08362b4a +0x06:  mov    0xc(%ebp),%eax
08362b4d +0x09:  lea    0x1c(%eax),%edx
08362b50 +0x0c:  lea    -0x18(%ebp),%eax
08362b53 +0x0f:  mov    %edx,0x4(%esp)
08362b57 +0x13:  mov    %eax,(%esp)
08362b5a +0x16:  call   083418cc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3999>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3999
08362b5f +0x1b:  sub    $0x4,%esp
08362b62 +0x1e:  jmp    08362ba6 <+0x62>
08362b64 +0x20:  lea    -0x18(%ebp),%eax
08362b67 +0x23:  mov    %eax,(%esp)
08362b6a +0x26:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08362b6f +0x2b:  mov    0x4(%eax),%eax
08362b72 +0x2e:  mov    %eax,-0xc(%ebp)
08362b75 +0x31:  mov    -0xc(%ebp),%eax
08362b78 +0x34:  mov    %eax,0x4(%esp)
08362b7c +0x38:  mov    0x8(%ebp),%eax
08362b7f +0x3b:  mov    %eax,(%esp)
08362b82 +0x3e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08362b87 +0x43:  test   %eax,%eax
08362b89 +0x45:  lea    -0x10(%ebp),%eax
08362b8c +0x48:  movl   $0x0,0x8(%esp)
08362b94 +0x50:  lea    -0x18(%ebp),%edx
08362b97 +0x53:  mov    %edx,0x4(%esp)
08362b9b +0x57:  mov    %eax,(%esp)
08362b9e +0x5a:  call   08342b56 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c23>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c23
08362ba3 +0x5f:  sub    $0x4,%esp
08362ba6 +0x62:  mov    0xc(%ebp),%eax
08362ba9 +0x65:  lea    0x1c(%eax),%edx
08362bac +0x68:  lea    -0x14(%ebp),%eax
08362baf +0x6b:  mov    %edx,0x4(%esp)
08362bb3 +0x6f:  mov    %eax,(%esp)
08362bb6 +0x72:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
08362bbb +0x77:  sub    $0x4,%esp
08362bbe +0x7a:  lea    -0x14(%ebp),%eax
08362bc1 +0x7d:  mov    %eax,0x4(%esp)
08362bc5 +0x81:  lea    -0x18(%ebp),%eax
08362bc8 +0x84:  mov    %eax,(%esp)
08362bcb +0x87:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08362bd0 +0x8c:  test   %al,%al
08362bd2 +0x8e:  jne    08362b64 <+0x20>
08362bd4 +0x90:  mov    0xc(%ebp),%eax
08362bd7 +0x93:  mov    %eax,(%esp)
08362bda +0x96:  call   0834c9f0 <_ZNK8CDungeon10VerifyMazeEv>  ; CDungeon::VerifyMaze() const
08362bdf +0x9b:  mov    $0x1,%eax
08362be4 +0xa0:  leave
08362be5 +0xa1:  ret
```

## 反编译 C

```c
// CDataManager::VerifyDungeon @ 0x8362b44

/* CDataManager::VerifyDungeon(CDungeon const&) const */

undefined4 __thiscall CDataManager::VerifyDungeon(CDataManager *this,CDungeon *param_1)

{
  char cVar1;
  int iVar2;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_14 [4];
  int local_10;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_1c);
    local_10 = *(int *)(iVar2 + 4);
    find_item(this,local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_14,(int)local_1c);
  }
  CDungeon::VerifyMaze(param_1);
  return 1;
}
```
