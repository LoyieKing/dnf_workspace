# getRemainTempPeriod

`_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii`

`user_creature::CCreatureMgr::getRemainTempPeriod(int, int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d88c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d88c  _ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii
#           user_creature::CCreatureMgr::getRemainTempPeriod(int, int) const
# range [0x0833d88c, 0x0833d961]
0833d88c +0x00:  push   %ebp
0833d88d +0x01:  mov    %esp,%ebp
0833d88f +0x03:  sub    $0x28,%esp
0833d892 +0x06:  mov    0x8(%ebp),%eax
0833d895 +0x09:  lea    0x30(%eax),%ecx
0833d898 +0x0c:  lea    -0x18(%ebp),%eax
0833d89b +0x0f:  lea    0xc(%ebp),%edx
0833d89e +0x12:  mov    %edx,0x8(%esp)
0833d8a2 +0x16:  mov    %ecx,0x4(%esp)
0833d8a6 +0x1a:  mov    %eax,(%esp)
0833d8a9 +0x1d:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
0833d8ae +0x22:  sub    $0x4,%esp
0833d8b1 +0x25:  mov    0x8(%ebp),%eax
0833d8b4 +0x28:  lea    0x30(%eax),%edx
0833d8b7 +0x2b:  lea    -0x14(%ebp),%eax
0833d8ba +0x2e:  mov    %edx,0x4(%esp)
0833d8be +0x32:  mov    %eax,(%esp)
0833d8c1 +0x35:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
0833d8c6 +0x3a:  sub    $0x4,%esp
0833d8c9 +0x3d:  lea    -0x14(%ebp),%eax
0833d8cc +0x40:  mov    %eax,0x4(%esp)
0833d8d0 +0x44:  lea    -0x18(%ebp),%eax
0833d8d3 +0x47:  mov    %eax,(%esp)
0833d8d6 +0x4a:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
0833d8db +0x4f:  test   %al,%al
0833d8dd +0x51:  je     0833d92c <+0xa0>
0833d8df +0x53:  lea    -0x18(%ebp),%eax
0833d8e2 +0x56:  mov    %eax,(%esp)
0833d8e5 +0x59:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0833d8ea +0x5e:  mov    0x4(%eax),%eax
0833d8ed +0x61:  test   %eax,%eax
0833d8ef +0x63:  setg   %al
0833d8f2 +0x66:  test   %al,%al
0833d8f4 +0x68:  je     0833d91c <+0x90>
0833d8f6 +0x6a:  lea    -0x18(%ebp),%eax
0833d8f9 +0x6d:  mov    %eax,(%esp)
0833d8fc +0x70:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0833d901 +0x75:  mov    0x4(%eax),%eax
0833d904 +0x78:  sub    0x10(%ebp),%eax
0833d907 +0x7b:  mov    %eax,-0xc(%ebp)
0833d90a +0x7e:  cmpl   $0x0,-0xc(%ebp)
0833d90e +0x82:  jne    0833d917 <+0x8b>
0833d910 +0x84:  mov    $0x1,%eax
0833d915 +0x89:  jmp    0833d960 <+0xd4>
0833d917 +0x8b:  mov    -0xc(%ebp),%eax
0833d91a +0x8e:  jmp    0833d960 <+0xd4>
0833d91c +0x90:  lea    -0x18(%ebp),%eax
0833d91f +0x93:  mov    %eax,(%esp)
0833d922 +0x96:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0833d927 +0x9b:  mov    0x4(%eax),%eax
0833d92a +0x9e:  jmp    0833d960 <+0xd4>
0833d92c +0xa0:  mov    0xc(%ebp),%eax
0833d92f +0xa3:  mov    %eax,0x4(%esp)
0833d933 +0xa7:  mov    0x8(%ebp),%eax
0833d936 +0xaa:  mov    %eax,(%esp)
0833d939 +0xad:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833d93e +0xb2:  mov    %eax,-0x10(%ebp)
0833d941 +0xb5:  cmpl   $0x0,-0x10(%ebp)
0833d945 +0xb9:  jne    0833d94e <+0xc2>
0833d947 +0xbb:  mov    $0xffffffff,%eax
0833d94c +0xc0:  jmp    0833d960 <+0xd4>
0833d94e +0xc2:  mov    0x10(%ebp),%eax
0833d951 +0xc5:  mov    %eax,0x4(%esp)
0833d955 +0xc9:  mov    -0x10(%ebp),%eax
0833d958 +0xcc:  mov    %eax,(%esp)
0833d95b +0xcf:  call   0833f016 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10e3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10e3
0833d960 +0xd4:  leave
0833d961 +0xd5:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::getRemainTempPeriod @ 0x833d88c

/* user_creature::CCreatureMgr::getRemainTempPeriod(int, int) const */

int __thiscall
user_creature::CCreatureMgr::getRemainTempPeriod(CCreatureMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CCreatureItem *local_14;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_1c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    (local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    local_14 = (CCreatureItem *)FindCreatureItem((int)this);
    if (local_14 == (CCreatureItem *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = CCreatureItem::GetRemainDate(local_14,param_2);
    }
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
    if (*(int *)(iVar2 + 4) < 1) {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_1c);
      iVar2 = *(int *)(iVar2 + 4) - param_2;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}
```
