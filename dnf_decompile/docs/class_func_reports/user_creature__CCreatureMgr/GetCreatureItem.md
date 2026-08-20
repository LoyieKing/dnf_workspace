# GetCreatureItem

`_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY`

`user_creature::CCreatureMgr::GetCreatureItem(SIG_LOAD_INVENTORY*) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b80c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b80c  _ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY
#           user_creature::CCreatureMgr::GetCreatureItem(SIG_LOAD_INVENTORY*) const
# range [0x0833b80c, 0x0833ba2f]
0833b80c +0x000:  push   %ebp
0833b80d +0x001:  mov    %esp,%ebp
0833b80f +0x003:  push   %esi
0833b810 +0x004:  push   %ebx
0833b811 +0x005:  sub    $0x70,%esp
0833b814 +0x008:  mov    0xc(%ebp),%eax
0833b817 +0x00b:  add    $&_ZL14gUnicodeBuffer+0x8354,%eax
0833b81c +0x010:  movl   $0x1ed8,0x8(%esp)
0833b824 +0x018:  movl   $0x0,0x4(%esp)
0833b82c +0x020:  mov    %eax,(%esp)
0833b82f +0x023:  call   0807dcc0 <_init+0x5b8>
0833b834 +0x028:  lea    -0x61(%ebp),%eax
0833b837 +0x02b:  mov    %eax,(%esp)
0833b83a +0x02e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0833b83f +0x033:  mov    0x8(%ebp),%edx
0833b842 +0x036:  lea    -0x1c(%ebp),%eax
0833b845 +0x039:  mov    %edx,0x4(%esp)
0833b849 +0x03d:  mov    %eax,(%esp)
0833b84c +0x040:  call   083426e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47b1
0833b851 +0x045:  sub    $0x4,%esp
0833b854 +0x048:  mov    0x8(%ebp),%edx
0833b857 +0x04b:  lea    -0x20(%ebp),%eax
0833b85a +0x04e:  mov    %edx,0x4(%esp)
0833b85e +0x052:  mov    %eax,(%esp)
0833b861 +0x055:  call   0834270a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47d7
0833b866 +0x05a:  sub    $0x4,%esp
0833b869 +0x05d:  movl   $0x0,-0x10(%ebp)
0833b870 +0x064:  movl   $0x0,-0x10(%ebp)
0833b877 +0x06b:  jmp    0833b911 <+0x105>
0833b87c +0x070:  lea    -0x1c(%ebp),%eax
0833b87f +0x073:  mov    %eax,(%esp)
0833b882 +0x076:  call   08342782 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x484f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x484f
0833b887 +0x07b:  mov    0x4(%eax),%eax
0833b88a +0x07e:  mov    %eax,-0xc(%ebp)
0833b88d +0x081:  mov    -0xc(%ebp),%eax
0833b890 +0x084:  mov    (%eax),%eax
0833b892 +0x086:  add    $0xc,%eax
0833b895 +0x089:  mov    (%eax),%ebx
0833b897 +0x08b:  mov    0x8(%ebp),%eax
0833b89a +0x08e:  mov    0x1c(%eax),%ecx
0833b89d +0x091:  mov    -0x10(%ebp),%eax
0833b8a0 +0x094:  shl    $0x3,%eax
0833b8a3 +0x097:  lea    0x0(,%eax,8),%edx
0833b8aa +0x09e:  sub    %eax,%edx
0833b8ac +0x0a0:  lea    &_ZL14gUnicodeBuffer+0x8354(%edx),%eax
0833b8b2 +0x0a6:  add    0xc(%ebp),%eax
0833b8b5 +0x0a9:  mov    %ecx,0xc(%esp)
0833b8b9 +0x0ad:  mov    %eax,0x8(%esp)
0833b8bd +0x0b1:  lea    -0x61(%ebp),%eax
0833b8c0 +0x0b4:  mov    %eax,0x4(%esp)
0833b8c4 +0x0b8:  mov    -0xc(%ebp),%eax
0833b8c7 +0x0bb:  mov    %eax,(%esp)
0833b8ca +0x0be:  call   *%ebx
0833b8cc +0x0c0:  mov    -0x10(%ebp),%esi
0833b8cf +0x0c3:  lea    -0x1c(%ebp),%eax
0833b8d2 +0x0c6:  mov    %eax,(%esp)
0833b8d5 +0x0c9:  call   08342782 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x484f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x484f
0833b8da +0x0ce:  mov    0x4(%eax),%eax
0833b8dd +0x0d1:  mov    %eax,(%esp)
0833b8e0 +0x0d4:  call   0833f00a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10d7
0833b8e5 +0x0d9:  mov    %eax,%ecx
0833b8e7 +0x0db:  mov    0xc(%ebp),%ebx
0833b8ea +0x0de:  mov    %esi,%eax
0833b8ec +0x0e0:  shl    $0x3,%eax
0833b8ef +0x0e3:  lea    0x0(,%eax,8),%edx
0833b8f6 +0x0ea:  sub    %eax,%edx
0833b8f8 +0x0ec:  lea    (%ebx,%edx,1),%eax
0833b8fb +0x0ef:  add    $&_ZL14gUnicodeBuffer+0x837c,%eax
0833b900 +0x0f4:  mov    %ecx,(%eax)
0833b902 +0x0f6:  lea    -0x1c(%ebp),%eax
0833b905 +0x0f9:  mov    %eax,(%esp)
0833b908 +0x0fc:  call   08342b38 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c05>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c05
0833b90d +0x101:  addl   $0x1,-0x10(%ebp)
0833b911 +0x105:  lea    -0x20(%ebp),%eax
0833b914 +0x108:  mov    %eax,0x4(%esp)
0833b918 +0x10c:  lea    -0x1c(%ebp),%eax
0833b91b +0x10f:  mov    %eax,(%esp)
0833b91e +0x112:  call   08342730 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x47fd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x47fd
0833b923 +0x117:  test   %al,%al
0833b925 +0x119:  je     0833b937 <+0x12b>
0833b927 +0x11b:  cmpl   $0x8c,-0x10(%ebp)
0833b92e +0x122:  jg     0833b937 <+0x12b>
0833b930 +0x124:  mov    $0x1,%eax
0833b935 +0x129:  jmp    0833b93c <+0x130>
0833b937 +0x12b:  mov    $0x0,%eax
0833b93c +0x130:  test   %al,%al
0833b93e +0x132:  jne    0833b87c <+0x70>
0833b944 +0x138:  mov    0xc(%ebp),%eax
0833b947 +0x13b:  mov    -0x10(%ebp),%edx
0833b94a +0x13e:  mov    %edx,&_ZL14gUnicodeBuffer+0x8350(%eax)
0833b950 +0x144:  movl   $0x0,-0x10(%ebp)
0833b957 +0x14b:  mov    0x8(%ebp),%eax
0833b95a +0x14e:  lea    0x30(%eax),%edx
0833b95d +0x151:  lea    -0x24(%ebp),%eax
0833b960 +0x154:  mov    %edx,0x4(%esp)
0833b964 +0x158:  mov    %eax,(%esp)
0833b967 +0x15b:  call   083418cc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3999>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3999
0833b96c +0x160:  sub    $0x4,%esp
0833b96f +0x163:  jmp    0833b9cd <+0x1c1>
0833b971 +0x165:  mov    -0x10(%ebp),%ebx
0833b974 +0x168:  lea    -0x24(%ebp),%eax
0833b977 +0x16b:  mov    %eax,(%esp)
0833b97a +0x16e:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0833b97f +0x173:  mov    (%eax),%edx
0833b981 +0x175:  mov    0xc(%ebp),%eax
0833b984 +0x178:  lea    0x2a68(%ebx),%ecx
0833b98a +0x17e:  mov    %edx,0x4(%eax,%ecx,8)
0833b98e +0x182:  mov    -0x10(%ebp),%ebx
0833b991 +0x185:  lea    -0x24(%ebp),%eax
0833b994 +0x188:  mov    %eax,(%esp)
0833b997 +0x18b:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0833b99c +0x190:  mov    0x4(%eax),%edx
0833b99f +0x193:  mov    0xc(%ebp),%eax
0833b9a2 +0x196:  lea    0x2a68(%ebx),%ecx
0833b9a8 +0x19c:  mov    %edx,0x8(%eax,%ecx,8)
0833b9ac +0x1a0:  lea    -0x14(%ebp),%eax
0833b9af +0x1a3:  movl   $0x0,0x8(%esp)
0833b9b7 +0x1ab:  lea    -0x24(%ebp),%edx
0833b9ba +0x1ae:  mov    %edx,0x4(%esp)
0833b9be +0x1b2:  mov    %eax,(%esp)
0833b9c1 +0x1b5:  call   08342b56 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4c23>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4c23
0833b9c6 +0x1ba:  sub    $0x4,%esp
0833b9c9 +0x1bd:  addl   $0x1,-0x10(%ebp)
0833b9cd +0x1c1:  mov    0x8(%ebp),%eax
0833b9d0 +0x1c4:  lea    0x30(%eax),%edx
0833b9d3 +0x1c7:  lea    -0x18(%ebp),%eax
0833b9d6 +0x1ca:  mov    %edx,0x4(%esp)
0833b9da +0x1ce:  mov    %eax,(%esp)
0833b9dd +0x1d1:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
0833b9e2 +0x1d6:  sub    $0x4,%esp
0833b9e5 +0x1d9:  lea    -0x18(%ebp),%eax
0833b9e8 +0x1dc:  mov    %eax,0x4(%esp)
0833b9ec +0x1e0:  lea    -0x24(%ebp),%eax
0833b9ef +0x1e3:  mov    %eax,(%esp)
0833b9f2 +0x1e6:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
0833b9f7 +0x1eb:  test   %al,%al
0833b9f9 +0x1ed:  je     0833ba08 <+0x1fc>
0833b9fb +0x1ef:  cmpl   $0x13,-0x10(%ebp)
0833b9ff +0x1f3:  jg     0833ba08 <+0x1fc>
0833ba01 +0x1f5:  mov    $0x1,%eax
0833ba06 +0x1fa:  jmp    0833ba0d <+0x201>
0833ba08 +0x1fc:  mov    $0x0,%eax
0833ba0d +0x201:  test   %al,%al
0833ba0f +0x203:  jne    0833b971 <+0x165>
0833ba15 +0x209:  mov    0xc(%ebp),%eax
0833ba18 +0x20c:  mov    -0x10(%ebp),%edx
0833ba1b +0x20f:  mov    %edx,&_ZL14gUnicodeBuffer+0xae14(%eax)
0833ba21 +0x215:  mov    $0x1,%eax
0833ba26 +0x21a:  lea    -0x8(%ebp),%esp
0833ba29 +0x21d:  add    $0x0,%esp
0833ba2c +0x220:  pop    %ebx
0833ba2d +0x221:  pop    %esi
0833ba2e +0x222:  pop    %ebp
0833ba2f +0x223:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetCreatureItem @ 0x833b80c

/* user_creature::CCreatureMgr::GetCreatureItem(SIG_LOAD_INVENTORY*) const */

undefined4 __thiscall
user_creature::CCreatureMgr::GetCreatureItem(CCreatureMgr *this,SIG_LOAD_INVENTORY *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  Inven_Item local_65 [61];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_24 [4];
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_18 [4];
  int local_14;
  int *local_10;
  
  memset(param_1 + 0x12880,0,0x1ed8);
  Inven_Item::Inven_Item(local_65);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::begin(local_20);
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::end(local_24);
  local_14 = 0;
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20,(_Rb_tree_const_iterator *)local_24);
    if ((cVar2 == '\0') || (0x8c < local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20);
    local_10 = *(int **)(iVar6 + 4);
    (**(code **)(*local_10 + 0xc))
              (local_10,local_65,param_1 + local_14 * 0x38 + 0x12880,*(undefined4 *)(this + 0x1c));
    iVar6 = local_14;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>
                        *)local_20);
    uVar4 = CCreatureItem::getExpireTime(*(CCreatureItem **)(iVar3 + 4));
    *(undefined4 *)(param_1 + iVar6 * 0x38 + 0x128a8) = uVar4;
    std::_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,user_creature::CCreatureItem*>> *)
               local_20);
    local_14 = local_14 + 1;
  }
  *(int *)(param_1 + 0x1287c) = local_14;
  local_14 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_28);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28,
                       (_Rb_tree_const_iterator *)local_1c);
    iVar6 = local_14;
    if ((cVar2 == '\0') || (0x13 < local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar5 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28);
    iVar3 = local_14;
    *(undefined4 *)(param_1 + (iVar6 + 0x2a68) * 8 + 4) = *puVar5;
    iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28);
    *(undefined4 *)(param_1 + (iVar3 + 0x2a68) * 8 + 8) = *(undefined4 *)(iVar6 + 4);
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_18,(int)local_28);
    local_14 = local_14 + 1;
  }
  *(int *)(param_1 + 0x15340) = local_14;
  return 1;
}
```
