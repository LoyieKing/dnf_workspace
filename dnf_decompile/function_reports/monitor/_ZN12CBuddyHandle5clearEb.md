# _ZN12CBuddyHandle5clearEb

`CBuddyHandle::clear(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809e51c` | `0xc3` | `0x8058314` | `0xc3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle5clearEb+0xbd>
+je     <T> <_ZN12CBuddyHandle5clearEb+0xbe>
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN12CBuddyHandle5clearEb+0xb0>
+je     <T> <_ZN12CBuddyHandle5clearEb+0xb3>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CBuddyHandle5clearEb+0x85>
+jmp    <T> <_ZN12CBuddyHandle5clearEb+0x88>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12CBuddyHandle5clearEb+0x7a>
+je     <T> <_ZN12CBuddyHandle5clearEb+0x7d>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CBuddyHandle5clearEb+0x7a>
+je     <T> <_ZN12CBuddyHandle5clearEb+0x7d>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CBuddyD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CBuddydlEPv>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle5clearEb+0x41>
+jne    <T> <_ZN12CBuddyHandle5clearEb+0x44>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5clearEv>
-jmp    <T> <_ZN12CBuddyHandle5clearEb+0xbe>
-nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::clear(bool) */

void __thiscall CBuddyHandle::_ZN12CBuddyHandle5clearEb(CBuddyHandle *this,bool param_1)

{
  CBuddy *this_00;
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_14 [4];
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_10 [8];
  
  cVar1 = std::
          map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
          ::empty((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                   *)this);
  if (cVar1 == '\0') {
    if (param_1) {
      std::
      map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
      ::begin(local_14);
      while( true ) {
        std::
        map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
        ::end(local_10);
        p_Var3 = (_Rb_tree_iterator *)local_10;
        cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_14,
                           p_Var3);
        if (cVar1 == '\0') break;
        iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                          ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_14);
        if (*(int *)(iVar2 + 4) != 0) {
          iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                            ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_14);
          this_00 = *(CBuddy **)(iVar2 + 4);
          if (this_00 != (CBuddy *)0x0) {
            CBuddy::~CBuddy(this_00);
            CBuddy::operator_delete(this_00,p_Var3);
          }
        }
        std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator++
                  ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_14);
      }
    }
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::clear((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
             *)this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 286 行）：

```cpp
void CBuddyHandle::clear(bool flag)
{
    if (!m_buddies.empty())
    {
        if (flag)
        {
            for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
                 it != m_buddies.end(); ++it)
            {
                if (it->second != 0)
                {
                    delete it->second;
                }
            }
        }
        m_buddies.clear();
    }
}
```
