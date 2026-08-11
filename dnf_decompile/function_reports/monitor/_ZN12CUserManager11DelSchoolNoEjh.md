# _ZN12CUserManager11DelSchoolNoEjh

`CUserManager::DelSchoolNo(unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8072324` | `0x1a1` | `0x808ce4e` | `0x194` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,124 +1,118 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x60,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEneERKSA_>
 test   %al,%al
-je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x196>
-lea    -0x30(%ebp),%eax
+je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x18a>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt3mapIhjSt4lessIhESaIS0_IKhjEEEEEptEv>
 add    $0x4,%eax
-mov    %eax,-0x1c(%ebp)
-lea    -0x34(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x2c(%ebp),%eax
 lea    -0x3c(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4findERS3_>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+lea    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEneERKS3_>
 test   %al,%al
-je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x196>
-lea    -0x34(%ebp),%eax
+je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x18a>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
-mov    %eax,%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
-mov    0x4(%eax),%eax
-sub    $0x1,%eax
-mov    %eax,0x4(%ebx)
-lea    -0x34(%ebp),%eax
+mov    0x4(%eax),%edx
+sub    $0x1,%edx
+mov    %edx,0x4(%eax)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhjEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x126>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x118>
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhjSt4lessIhESaISt4pairIKhjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4sizeEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x126>
+je     <T> <_ZN12CUserManager11DelSchoolNoEjh+0x118>
 mov    0x8(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE5eraseESt17_Rb_tree_iteratorIS9_E>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjS_IhjSt4lessIhESaISt4pairIKhjEEES1_IS0_ESaIS3_IS0_S7_EEE4sizeEv>
-mov    %eax,%esi
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIhjSt4lessIhESaISt4pairIKhjEEE4sizeEv>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movzbl -0x3c(%ebp),%eax
-movzbl %al,%eax
-mov    %eax,-0x40(%ebp)
-mov    0xc(%ebp),%edi
+movzbl %al,%esi
+mov    0xc(%ebp),%ebx
 movl   $0x40f,0x8(%esp)
 movl   $&_ZZN12CUserManager11DelSchoolNoEjhE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"DelSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",0x8(%esp)
 movl   $"./log/School",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0xc(%ebp),%esp
+lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DelSchoolNo(unsigned int, unsigned char) */

void __thiscall
CUserManager::_ZN12CUserManager11DelSchoolNoEjh(CUserManager *this,uint param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  uint local_34;
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  local_30 [4];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  local_2c [4];
  CMyFileLog local_28 [8];
  map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
  *local_20;
  
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::find(&local_34);
  std::
  map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
  ::end(local_30);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
                        *)&local_34,(_Rb_tree_iterator *)local_30);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
            ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>
                          *)&local_34);
    local_20 = (map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
                *)(iVar2 + 4);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::find((uchar *)&local_38);
    std::
    map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)&local_38,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)&local_38
                        );
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)&local_38
                        );
      *(int *)(iVar2 + 4) = *(int *)(iVar3 + 4) + -1;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_int>> *)&local_38
                        );
      if (*(int *)(iVar2 + 4) == 0) {
        std::
        map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
        ::erase(local_20,local_38);
        iVar2 = std::
                map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
                ::size(local_20);
        if (iVar2 == 0) {
          std::
          map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
          ::erase((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
                   *)this,local_34);
        }
      }
      uVar4 = std::
              map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
              ::size((map<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>>>>
                      *)this);
      uVar5 = std::
              map<unsigned_char,unsigned_int,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_int>>>
              ::size(local_20);
      CMyFileLog::CMyFileLog(local_28,"DelSchoolNo",0x40f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/School",
                 "DelSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",param_1,
                 (uint)param_2,uVar5,uVar4);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 691 行）：

```cpp
void CUserManager::DelSchoolNo(unsigned int schoolNo, unsigned char channel)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(schoolNo);
    if (it != m_mapSchools.end())
    {
        std::map<unsigned char, unsigned int>* inner = &it->second;
        std::map<unsigned char, unsigned int>::iterator c = inner->find(channel);
        if (c != inner->end())
        {
            c->second--;
            if (c->second == 0)
            {
                inner->erase(c);
                if (inner->size() == 0)
                {
                    m_mapSchools.erase(it);
                }
            }
            unsigned int outerSize = m_mapSchools.size();
            unsigned int innerSize = inner->size();
            DNF_LOG_SCOPE_LINE(0x40f,"./log/School",
                "DelSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, innerSize, outerSize);
        }
    }
}
```
