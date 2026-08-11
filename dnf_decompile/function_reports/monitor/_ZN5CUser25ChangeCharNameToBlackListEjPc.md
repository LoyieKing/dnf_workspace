# _ZN5CUser25ChangeCharNameToBlackListEjPc

`CUser::ChangeCharNameToBlackList(unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d904` | `0x9d` | `0x8088d1a` | `0x93` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x9b>
+je     <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x8c>
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%ecx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x96>
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x8c>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUser14ChangeCharNameEPc>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x9b>
+jmp    <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc+0x91>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ChangeCharNameToBlackList(unsigned int, char*) */

undefined4 __thiscall
CUser::_ZN5CUser25ChangeCharNameToBlackListEjPc(CUser *this,uint param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> local_18 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_14 [4];
  CBlackUser *local_10;
  
  cVar1 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(this + 0x50));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::find((uint *)local_18);
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                      (local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator->
                        (local_18);
      local_10 = *(CBlackUser **)(iVar3 + 4);
      CBlackUser::_ZN10CBlackUser14ChangeCharNameEPc(local_10,param_2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 215 行）：

```cpp
int CUser::ChangeCharNameToBlackList(unsigned int dbid, char* name)
{
    if (!m_blackList.empty())
    {
        std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.find(dbid);
        if (it != m_blackList.end())
        {
            it->second->ChangeCharName(name);
            return 1;
        }
    }
    return 0;
}
```
