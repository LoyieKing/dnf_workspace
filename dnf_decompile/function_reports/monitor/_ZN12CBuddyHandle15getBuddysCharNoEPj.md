# _ZN12CBuddyHandle15getBuddysCharNoEPj

`CBuddyHandle::getBuddysCharNo(unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809ee38` | `0x10b` | `0x8057ddc` | `0x10d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x106>
+jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x108>
 movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%edx
+jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0xd6>
 lea    -0x20(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0xe9>
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x88>
+je     <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x75>
 mov    -0x10(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0xc(%ebp),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 mov    %eax,(%ebx)
 addl   $0x1,-0x10(%ebp)
 cmpl   $0x20,-0x10(%ebp)
-jle    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0xde>
+jle    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0xcb>
 movl   $0x135,0x8(%esp)
 movl   $&_ZZN12CBuddyHandle15getBuddysCharNoEPjE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x20,0x10(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x20,%eax
-jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x106>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x108>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEppEv>
+mov    0x8(%ebp),%edx
+lea    -0x1c(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x56>
+jne    <T> <_ZN12CBuddyHandle15getBuddysCharNoEPj+0x41>
 mov    -0x10(%ebp),%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::getBuddysCharNo(unsigned int*) */

int __thiscall CBuddyHandle::_ZN12CBuddyHandle15getBuddysCharNoEPj(CBuddyHandle *this,uint *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_24 [4];
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_20 [4];
  CMyFileLog local_1c [8];
  int local_14;
  CBuddy *local_10;
  
  cVar1 = std::
          map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
          ::empty((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                   *)this);
  if (cVar1 == '\0') {
    local_14 = 0;
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::begin(local_20);
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::end(local_24);
    while (cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                             ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_20,
                              (_Rb_tree_iterator *)local_24), cVar1 != '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_20);
      local_10 = *(CBuddy **)(iVar2 + 4);
      if (local_10 != (CBuddy *)0x0) {
        puVar3 = param_1 + local_14;
        iVar2 = CBuddy::getBuddyDBInfo(local_10);
        *puVar3 = *(uint *)(iVar2 + 0x22);
      }
      local_14 = local_14 + 1;
      if (0x20 < local_14) {
        CMyFileLog::CMyFileLog(local_1c,"getBuddysCharNo",0x135);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_1c,"./log/buddy",
                   "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",local_14,0x20);
        return 0x20;
      }
      std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator++
                ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_20);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 135 行）：

```cpp
int CBuddyHandle::getBuddysCharNo(unsigned int* out)
{
    if (m_buddies.empty())
    {
        return 0;
    }
    int count = 0;
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        CBuddy* b = it->second;
        if (b != 0)
        {
            out[count] = *(unsigned int*)((char*)b->getBuddyDBInfo() + 0x22);
        }
        count++;
        if (0x20 < count)
        {
            DNF_LOG_SCOPE_LINE(0x135,"./log/buddy", "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",
                count, 0x20);
            return 0x20;
        }
    }
    return count;
}
```
