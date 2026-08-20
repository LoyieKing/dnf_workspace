# get_levelrandom_mob

`_ZN15CMonsterManager19get_levelrandom_mobEi`

`CMonsterManager::get_levelrandom_mob(int)`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834ff20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ff20  _ZN15CMonsterManager19get_levelrandom_mobEi
#           CMonsterManager::get_levelrandom_mob(int)
# range [0x0834ff20, 0x0834ffc9]
0834ff20 +0x00:  push   %ebp
0834ff21 +0x01:  mov    %esp,%ebp
0834ff23 +0x03:  sub    $0x48,%esp
0834ff26 +0x06:  mov    0x8(%ebp),%edx
0834ff29 +0x09:  lea    -0x24(%ebp),%eax
0834ff2c +0x0c:  lea    0xc(%ebp),%ecx
0834ff2f +0x0f:  mov    %ecx,0x8(%esp)
0834ff33 +0x13:  mov    %edx,0x4(%esp)
0834ff37 +0x17:  mov    %eax,(%esp)
0834ff3a +0x1a:  call   0838f3c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ee68>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ee68
0834ff3f +0x1f:  sub    $0x4,%esp
0834ff42 +0x22:  lea    -0x24(%ebp),%eax
0834ff45 +0x25:  mov    %eax,0x4(%esp)
0834ff49 +0x29:  lea    -0x2c(%ebp),%eax
0834ff4c +0x2c:  mov    %eax,(%esp)
0834ff4f +0x2f:  call   0838f3f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ee94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ee94
0834ff54 +0x34:  mov    0x8(%ebp),%eax
0834ff57 +0x37:  lea    0xc(%ebp),%edx
0834ff5a +0x3a:  mov    %edx,0x4(%esp)
0834ff5e +0x3e:  mov    %eax,(%esp)
0834ff61 +0x41:  call   0838f436 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1eed6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1eed6
0834ff66 +0x46:  mov    %eax,-0x18(%ebp)
0834ff69 +0x49:  mov    -0x18(%ebp),%eax
0834ff6c +0x4c:  mov    %eax,(%esp)
0834ff6f +0x4f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834ff74 +0x54:  mov    %eax,-0x14(%ebp)
0834ff77 +0x57:  mov    -0x2c(%ebp),%eax
0834ff7a +0x5a:  mov    %eax,-0x30(%ebp)
0834ff7d +0x5d:  movl   $0x0,-0xc(%ebp)
0834ff84 +0x64:  jmp    0834ffa7 <+0x87>
0834ff86 +0x66:  lea    -0x1c(%ebp),%eax
0834ff89 +0x69:  movl   $0x0,0x8(%esp)
0834ff91 +0x71:  lea    -0x30(%ebp),%edx
0834ff94 +0x74:  mov    %edx,0x4(%esp)
0834ff98 +0x78:  mov    %eax,(%esp)
0834ff9b +0x7b:  call   08342b56 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c23>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c23
0834ffa0 +0x80:  sub    $0x4,%esp
0834ffa3 +0x83:  addl   $0x1,-0xc(%ebp)
0834ffa7 +0x87:  mov    -0xc(%ebp),%eax
0834ffaa +0x8a:  cmp    -0x14(%ebp),%eax
0834ffad +0x8d:  setl   %al
0834ffb0 +0x90:  test   %al,%al
0834ffb2 +0x92:  jne    0834ff86 <+0x66>
0834ffb4 +0x94:  lea    -0x30(%ebp),%eax
0834ffb7 +0x97:  mov    %eax,(%esp)
0834ffba +0x9a:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0834ffbf +0x9f:  mov    0x4(%eax),%eax
0834ffc2 +0xa2:  mov    %eax,-0x10(%ebp)
0834ffc5 +0xa5:  mov    -0x10(%ebp),%eax
0834ffc8 +0xa8:  leave
0834ffc9 +0xa9:  ret
```

## 反编译 C

```c
// CMonsterManager::get_levelrandom_mob @ 0x834ff20

/* CMonsterManager::get_levelrandom_mob(int) */

undefined4 CMonsterManager::get_levelrandom_mob(int param_1)

{
  int iVar1;
  undefined4 local_34;
  undefined4 local_30 [2];
  int local_28 [2];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_20 [4];
  int local_1c;
  int local_18;
  int local_10;
  
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
            (local_28);
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::
  pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,std::_Rb_tree_iterator<std::pair<int_const,int>>>
            ((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
              *)local_30,(pair *)local_28);
  local_1c = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::count
                       ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                        )param_1,(int *)&stack0x00000008);
  local_18 = get_rand_int(local_1c);
  local_34 = local_30[0];
  for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_20,(int)&local_34);
  }
  iVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
  return *(undefined4 *)(iVar1 + 4);
}
```
