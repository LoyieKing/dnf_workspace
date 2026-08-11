# _ZN12CBuddyHandle9getBuddysEPP6CBuddy

`CBuddyHandle::getBuddys(CBuddy**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809ef44` | `0xf1` | `0x8057e0a` | `0xf1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0x20>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xec>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xcf>
+jmp    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xba>
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0xc(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%ebx)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x20,-0xc(%ebp)
-jle    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xc4>
+jle    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xaf>
 movl   $0x153,0x8(%esp)
 movl   $&_ZZN12CBuddyHandle9getBuddysEPP6CBuddyE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x20,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x20,%eax
 jmp    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0xec>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEppEv>
+mov    0x8(%ebp),%edx
+lea    -0x18(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0x53>
+jne    <T> <_ZN12CBuddyHandle9getBuddysEPP6CBuddy+0x3e>
 mov    -0xc(%ebp),%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::getBuddys(CBuddy**) */

int __thiscall
CBuddyHandle::_ZN12CBuddyHandle9getBuddysEPP6CBuddy(CBuddyHandle *this,CBuddy **param_1)

{
  char cVar1;
  int iVar2;
  CBuddy **ppCVar3;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_20 [4];
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_1c [4];
  CMyFileLog local_18 [8];
  int local_10;
  
  cVar1 = std::
          map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
          ::empty((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                   *)this);
  if (cVar1 == '\0') {
    local_10 = 0;
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::begin(local_1c);
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::end(local_20);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                             ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c,
                              (_Rb_tree_iterator *)local_20), cVar1 != '\0') {
      ppCVar3 = param_1 + local_10;
      iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c);
      *ppCVar3 = *(CBuddy **)(iVar2 + 4);
      local_10 = local_10 + 1;
      if (0x20 < local_10) {
        CMyFileLog::CMyFileLog(local_18,"getBuddys",0x153);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_18,"./log/buddy",
                   "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",local_10,0x20);
        return 0x20;
      }
      std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator++
                ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c);
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 161 行）：

```cpp
int CBuddyHandle::getBuddys(CBuddy** out)
{
    if (m_buddies.empty())
    {
        return 0;
    }
    int count = 0;
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        out[count] = it->second;
        count++;
        if (0x20 < count)
        {
            DNF_LOG_SCOPE_LINE(0x153,"./log/buddy", "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",
                count, 0x20);
            return 0x20;
        }
    }
    return count;
}
```
