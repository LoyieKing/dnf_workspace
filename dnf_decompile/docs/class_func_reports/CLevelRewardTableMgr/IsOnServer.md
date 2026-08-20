# IsOnServer

`_ZN20CLevelRewardTableMgr10IsOnServerEi`

`CLevelRewardTableMgr::IsOnServer(int)`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687d6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687d6c  _ZN20CLevelRewardTableMgr10IsOnServerEi
#           CLevelRewardTableMgr::IsOnServer(int)
# range [0x08687d6c, 0x08687e61]
08687d6c +0x00:  push   %ebp
08687d6d +0x01:  mov    %esp,%ebp
08687d6f +0x03:  sub    $0x28,%esp
08687d72 +0x06:  mov    0x8(%ebp),%eax
08687d75 +0x09:  add    $0x8,%eax
08687d78 +0x0c:  mov    %eax,(%esp)
08687d7b +0x0f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08687d80 +0x14:  cmp    $0x1,%eax
08687d83 +0x17:  je     08687da1 <+0x35>
08687d85 +0x19:  mov    0x8(%ebp),%eax
08687d88 +0x1c:  add    $0x8,%eax
08687d8b +0x1f:  movl   $0x0,0x4(%esp)
08687d93 +0x27:  mov    %eax,(%esp)
08687d96 +0x2a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08687d9b +0x2f:  mov    (%eax),%eax
08687d9d +0x31:  test   %eax,%eax
08687d9f +0x33:  jne    08687da8 <+0x3c>
08687da1 +0x35:  mov    $0x1,%eax
08687da6 +0x3a:  jmp    08687dad <+0x41>
08687da8 +0x3c:  mov    $0x0,%eax
08687dad +0x41:  test   %al,%al
08687daf +0x43:  je     08687dbb <+0x4f>
08687db1 +0x45:  mov    $0x1,%eax
08687db6 +0x4a:  jmp    08687e5f <+0xf3>
08687dbb +0x4f:  mov    0x8(%ebp),%eax
08687dbe +0x52:  add    $0x8,%eax
08687dc1 +0x55:  mov    %eax,(%esp)
08687dc4 +0x58:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08687dc9 +0x5d:  test   %al,%al
08687dcb +0x5f:  je     08687dd7 <+0x6b>
08687dcd +0x61:  mov    $0x0,%eax
08687dd2 +0x66:  jmp    08687e5f <+0xf3>
08687dd7 +0x6b:  mov    0x8(%ebp),%eax
08687dda +0x6e:  lea    0x8(%eax),%edx
08687ddd +0x71:  lea    -0x14(%ebp),%eax
08687de0 +0x74:  mov    %edx,0x4(%esp)
08687de4 +0x78:  mov    %eax,(%esp)
08687de7 +0x7b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08687dec +0x80:  sub    $0x4,%esp
08687def +0x83:  jmp    08687e2c <+0xc0>
08687df1 +0x85:  lea    -0x14(%ebp),%eax
08687df4 +0x88:  mov    %eax,(%esp)
08687df7 +0x8b:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08687dfc +0x90:  mov    (%eax),%eax
08687dfe +0x92:  cmp    0xc(%ebp),%eax
08687e01 +0x95:  sete   %al
08687e04 +0x98:  test   %al,%al
08687e06 +0x9a:  je     08687e0f <+0xa3>
08687e08 +0x9c:  mov    $0x1,%eax
08687e0d +0xa1:  jmp    08687e5f <+0xf3>
08687e0f +0xa3:  lea    -0xc(%ebp),%eax
08687e12 +0xa6:  movl   $0x0,0x8(%esp)
08687e1a +0xae:  lea    -0x14(%ebp),%edx
08687e1d +0xb1:  mov    %edx,0x4(%esp)
08687e21 +0xb5:  mov    %eax,(%esp)
08687e24 +0xb8:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08687e29 +0xbd:  sub    $0x4,%esp
08687e2c +0xc0:  mov    0x8(%ebp),%eax
08687e2f +0xc3:  lea    0x8(%eax),%edx
08687e32 +0xc6:  lea    -0x10(%ebp),%eax
08687e35 +0xc9:  mov    %edx,0x4(%esp)
08687e39 +0xcd:  mov    %eax,(%esp)
08687e3c +0xd0:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08687e41 +0xd5:  sub    $0x4,%esp
08687e44 +0xd8:  lea    -0x10(%ebp),%eax
08687e47 +0xdb:  mov    %eax,0x4(%esp)
08687e4b +0xdf:  lea    -0x14(%ebp),%eax
08687e4e +0xe2:  mov    %eax,(%esp)
08687e51 +0xe5:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08687e56 +0xea:  test   %al,%al
08687e58 +0xec:  jne    08687df1 <+0x85>
08687e5a +0xee:  mov    $0x0,%eax
08687e5f +0xf3:  leave
08687e60 +0xf4:  ret
08687e61 +0xf5:  nop
```

## 反编译 C

```c
// CLevelRewardTableMgr::IsOnServer @ 0x8687d6c

/* CLevelRewardTableMgr::IsOnServer(int) */

undefined4 __thiscall CLevelRewardTableMgr::IsOnServer(CLevelRewardTableMgr *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)(this + 8));
  if ((iVar3 == 1) ||
     (piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 8),0), *piVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = 1;
  }
  else {
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_18,local_14);
        if (!bVar2) break;
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_18);
        if (*piVar4 == param_1) {
          return 1;
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_10,(int)local_18);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
