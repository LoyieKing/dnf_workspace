# _ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t

`CItemLimitEditionMgr::registItem(stItemLimitEditionItemInfo_t const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809345c` | `0x17f` | `0x8093f10` | `0x191` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x54,%esp
+sub    $0x44,%esp
+movb   $0x0,-0x9(%ebp)
 mov    0xc(%ebp),%ecx
 mov    0x8(%ebp),%edx
-lea    -0x3c(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
-sub    $0x4,%esp
-mov    0x8(%ebp),%edx
-lea    -0x30(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEeqERKS5_>
-test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x65>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
-cmp    $0x1b,%eax
-jbe    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x65>
-mov    $0x1,%eax
-jmp    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x6a>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x179>
-movl   $0x4c,(%esp)
-call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t>
-mov    %ebx,%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK17CItemLimitEdition8getIPGNOEv>
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%edx
-lea    -0x38(%ebp),%eax
-lea    -0x2c(%ebp),%ecx
+lea    -0x2c(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEeqERKS5_>
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x69>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
+cmp    $0x1b,%eax
+jbe    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x69>
+mov    $0x1,%eax
+jmp    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x6e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x76>
+movb   $0x1,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x18c>
+movl   $0x4c,(%esp)
+call   <T> <_Znwj>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t>
+mov    %ebx,%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK17CItemLimitEdition8getIPGNOEv>
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%edx
+lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
+sub    $0x4,%esp
+mov    0x8(%ebp),%edx
+lea    -0x24(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x11f>
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x149>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
+mov    0x4(%eax),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x137>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
 mov    0x4(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x10d>
+je     <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x137>
 mov    %ebx,(%esp)
 call   <T> <_ZN17CItemLimitEditionD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 mov    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition8getIPGNOEv>
-mov    %eax,-0xc(%ebp)
-lea    -0x14(%ebp),%eax
-lea    -0x34(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+lea    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIjRP17CItemLimitEditionESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP17CItemLimitEditionEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP17CItemLimitEditionEC1IjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%edx
-lea    -0x24(%ebp),%eax
-lea    -0x1c(%ebp),%ecx
+lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-jmp    <T> <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t+0x17a>
-nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::registItem(stItemLimitEditionItemInfo_t const&) */

void __thiscall
CItemLimitEditionMgr::_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t
          (CItemLimitEditionMgr *this,stItemLimitEditionItemInfo_t *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CItemLimitEdition *pCVar4;
  int iVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_40 [4];
  uint local_3c;
  CItemLimitEdition *local_38;
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_34 [4];
  undefined4 local_30;
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_2c [4];
  pair local_28 [8];
  pair<unsigned_int_const,CItemLimitEdition*> local_20 [8];
  uint local_18 [2];
  CItemLimitEdition *local_10 [2];
  
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::find((uint *)local_40);
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::end(local_34);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator==
                    (local_40,(_Rb_tree_iterator *)local_34);
  if (cVar2 != '\0') {
    uVar3 = std::
            map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
            ::size((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
                    *)this);
    if (0x1b < uVar3) {
      bVar1 = true;
      goto LAB_080934c6;
    }
  }
  bVar1 = false;
LAB_080934c6:
  if (!bVar1) {
    pCVar4 = operator_new(0x4c);
    CItemLimitEdition::_ZN17CItemLimitEditionC2ERK28stItemLimitEditionItemInfo_t(pCVar4,param_1);
    local_38 = pCVar4;
    local_30 = CItemLimitEdition::getIPGNO(pCVar4);
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::find(&local_3c);
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       &local_3c,(_Rb_tree_iterator *)local_2c);
    if (cVar2 != '\0') {
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                         &local_3c);
      pCVar4 = *(CItemLimitEdition **)(iVar5 + 4);
      if (pCVar4 != (CItemLimitEdition *)0x0) {
        CItemLimitEdition::~CItemLimitEdition(pCVar4);
        ::operator_delete(pCVar4);
      }
      std::
      map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
      ::erase((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
               *)this,local_3c);
    }
    local_10[0] = (CItemLimitEdition *)CItemLimitEdition::getIPGNO(local_38);
    std::make_pair<unsigned_int,CItemLimitEdition*&>(local_18,local_10);
    std::pair<unsigned_int_const,CItemLimitEdition*>::pair<unsigned_int,CItemLimitEdition*>
              (local_20,(pair *)local_18);
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::insert(local_28);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 66 行）：

```cpp
void CItemLimitEditionMgr::registItem(const stItemLimitEditionItemInfo_t& info)
{
    bool error = false;
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(*(unsigned int*)&info);
    if (it == m_items.end() && 0x1b < m_items.size())
    {
        error = true;
    }
    if (!error)
    {
        CItemLimitEdition* item = new CItemLimitEdition(info);
        unsigned int ipgno = item->getIPGNO();
        std::map<unsigned int, CItemLimitEdition*>::iterator it2 = m_items.find(ipgno);
        if (it2 != m_items.end())
        {
            if (it2->second != 0)
            {
                delete it2->second;
            }
            m_items.erase(it2);
        }
        m_items.insert(std::pair<const unsigned int, CItemLimitEdition*>(item->getIPGNO(), item));
    }
}
```
