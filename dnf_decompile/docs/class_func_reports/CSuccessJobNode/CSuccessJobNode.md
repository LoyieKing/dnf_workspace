# CSuccessJobNode

`_ZN15CSuccessJobNodeC1Ev`

`CSuccessJobNode::CSuccessJobNode()`

| 类 | 地址 |
|---|---|
| `CSuccessJobNode` | `0x08484c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484c30  _ZN15CSuccessJobNodeC1Ev
#           CSuccessJobNode::CSuccessJobNode()
# range [0x08484c30, 0x08484d4b]
08484c30 +0x000:  push   %ebp
08484c31 +0x001:  mov    %esp,%ebp
08484c33 +0x003:  push   %esi
08484c34 +0x004:  push   %ebx
08484c35 +0x005:  sub    $0x40,%esp
08484c38 +0x008:  mov    0x8(%ebp),%eax
08484c3b +0x00b:  mov    %eax,(%esp)
08484c3e +0x00e:  call   084871c4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbfe>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbfe
08484c43 +0x013:  mov    0x8(%ebp),%eax
08484c46 +0x016:  add    $0x18,%eax
08484c49 +0x019:  mov    %eax,(%esp)
08484c4c +0x01c:  call   0848683c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x276>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x276
08484c51 +0x021:  movl   $0x2,-0x30(%ebp)
08484c58 +0x028:  jmp    08484cfe <+0xce>
08484c5d +0x02d:  mov    0x8(%ebp),%edx
08484c60 +0x030:  lea    -0x2c(%ebp),%eax
08484c63 +0x033:  mov    %edx,0x4(%esp)
08484c67 +0x037:  mov    %eax,(%esp)
08484c6a +0x03a:  call   0848726a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xca4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xca4
08484c6f +0x03f:  sub    $0x4,%esp
08484c72 +0x042:  mov    0x8(%ebp),%edx
08484c75 +0x045:  lea    -0x28(%ebp),%eax
08484c78 +0x048:  lea    -0x30(%ebp),%ecx
08484c7b +0x04b:  mov    %ecx,0x8(%esp)
08484c7f +0x04f:  mov    %edx,0x4(%esp)
08484c83 +0x053:  mov    %eax,(%esp)
08484c86 +0x056:  call   0848723e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xc78>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xc78
08484c8b +0x05b:  sub    $0x4,%esp
08484c8e +0x05e:  lea    -0x2c(%ebp),%eax
08484c91 +0x061:  mov    %eax,0x4(%esp)
08484c95 +0x065:  lea    -0x28(%ebp),%eax
08484c98 +0x068:  mov    %eax,(%esp)
08484c9b +0x06b:  call   08487290 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xcca>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xcca
08484ca0 +0x070:  lea    -0xc(%ebp),%eax
08484ca3 +0x073:  mov    %eax,(%esp)
08484ca6 +0x076:  call   08486a32 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x46c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x46c
08484cab +0x07b:  lea    -0x14(%ebp),%eax
08484cae +0x07e:  lea    -0xc(%ebp),%edx
08484cb1 +0x081:  mov    %edx,0x8(%esp)
08484cb5 +0x085:  lea    -0x30(%ebp),%edx
08484cb8 +0x088:  mov    %edx,0x4(%esp)
08484cbc +0x08c:  mov    %eax,(%esp)
08484cbf +0x08f:  call   084872a4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xcde>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xcde
08484cc4 +0x094:  sub    $0x4,%esp
08484cc7 +0x097:  lea    -0x14(%ebp),%eax
08484cca +0x09a:  mov    %eax,0x4(%esp)
08484cce +0x09e:  lea    -0x1c(%ebp),%eax
08484cd1 +0x0a1:  mov    %eax,(%esp)
08484cd4 +0x0a4:  call   084872e2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd1c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd1c
08484cd9 +0x0a9:  mov    0x8(%ebp),%edx
08484cdc +0x0ac:  lea    -0x24(%ebp),%eax
08484cdf +0x0af:  lea    -0x1c(%ebp),%ecx
08484ce2 +0x0b2:  mov    %ecx,0x8(%esp)
08484ce6 +0x0b6:  mov    %edx,0x4(%esp)
08484cea +0x0ba:  mov    %eax,(%esp)
08484ced +0x0bd:  call   08487312 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd4c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd4c
08484cf2 +0x0c2:  sub    $0x4,%esp
08484cf5 +0x0c5:  mov    -0x30(%ebp),%eax
08484cf8 +0x0c8:  add    $0x1,%eax
08484cfb +0x0cb:  mov    %eax,-0x30(%ebp)
08484cfe +0x0ce:  mov    -0x30(%ebp),%eax
08484d01 +0x0d1:  cmp    $0x4,%eax
08484d04 +0x0d4:  setle  %al
08484d07 +0x0d7:  test   %al,%al
08484d09 +0x0d9:  jne    08484c5d <+0x2d>
08484d0f +0x0df:  jmp    08484d42 <+0x112>
08484d11 +0x0e1:  mov    %edx,%ebx
08484d13 +0x0e3:  mov    %eax,%esi
08484d15 +0x0e5:  mov    0x8(%ebp),%eax
08484d18 +0x0e8:  add    $0x18,%eax
08484d1b +0x0eb:  mov    %eax,(%esp)
08484d1e +0x0ee:  call   08486866 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x2a0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x2a0
08484d23 +0x0f3:  mov    %esi,%eax
08484d25 +0x0f5:  mov    %ebx,%edx
08484d27 +0x0f7:  mov    %edx,%ebx
08484d29 +0x0f9:  mov    %eax,%esi
08484d2b +0x0fb:  mov    0x8(%ebp),%eax
08484d2e +0x0fe:  mov    %eax,(%esp)
08484d31 +0x101:  call   08486c1a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x654>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x654
08484d36 +0x106:  mov    %esi,%eax
08484d38 +0x108:  mov    %ebx,%edx
08484d3a +0x10a:  mov    %eax,(%esp)
08484d3d +0x10d:  call   08ae3750 <_Unwind_Resume>
08484d42 +0x112:  lea    -0x8(%ebp),%esp
08484d45 +0x115:  add    $0x0,%esp
08484d48 +0x118:  pop    %ebx
08484d49 +0x119:  pop    %esi
08484d4a +0x11a:  pop    %ebp
08484d4b +0x11b:  ret
```

## 反编译 C

```c
// CSuccessJobNode::CSuccessJobNode @ 0x8484c30

/* CSuccessJobNode::CSuccessJobNode() */

void __thiscall CSuccessJobNode::CSuccessJobNode(CSuccessJobNode *this)

{
  int local_34;
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_30 [4];
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_2c [4];
  pair local_28 [8];
  pair<int_const,JobParty> local_20 [8];
  int local_18 [2];
  JobParty local_10 [4];
  
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::map
            ((map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> *)this)
  ;
  Character::Character((Character *)(this + 0x18));
  for (local_34 = 2; local_34 < 5; local_34 = local_34 + 1) {
                    /* try { // try from 08484c6a to 08484cf1 has its CatchHandler @ 08484d11 */
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end
              (local_30);
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::find
              ((int *)local_2c);
    std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
              (local_2c,(_Rb_tree_iterator *)local_30);
    JobParty::JobParty(local_10);
    std::make_pair<int&,JobParty>(local_18,(JobParty *)&local_34);
    std::pair<int_const,JobParty>::pair<int,JobParty>(local_20,(pair *)local_18);
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::insert
              (local_28);
  }
  return;
}
```
