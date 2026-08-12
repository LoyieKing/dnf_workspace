# _ZN21CBuddyRegisterManager18printBuddyRegisterEPcj

`CBuddyRegisterManager::printBuddyRegister(char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809d57c` | `0xba` | `0x804baae` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x44,%esp
+mov    0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
-lea    0x10(%ebp),%ecx
+lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
 sub    $0x4,%esp
-jmp    <T> <_ZN21CBuddyRegisterManager18printBuddyRegisterEPcj+0x7f>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN21CBuddyRegisterManager18printBuddyRegisterEPcj+0x87>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 mov    0x4(%eax),%ebx
 movl   $0x68,0x8(%esp)
 movl   $&_ZZN21CBuddyRegisterManager18printBuddyRegisterEPcjE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
-mov    0xc(%ebp),%eax
+mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[%s] rcharNo(%d)",0x8(%esp)
 movl   $"./log/buddyRegister",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjjEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
-lea    0x10(%ebp),%ecx
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11upper_boundERS3_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 test   %al,%al
-jne    <T> <_ZN21CBuddyRegisterManager18printBuddyRegisterEPcj+0x25>
+jne    <T> <_ZN21CBuddyRegisterManager18printBuddyRegisterEPcj+0x2d>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyRegisterManager::printBuddyRegister(char*, unsigned int) */

void CBuddyRegisterManager::_ZN21CBuddyRegisterManager18printBuddyRegisterEPcj
               (char *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_1c [4];
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  std::
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::lower_bound(local_1c,(uint *)param_1);
  while( true ) {
    std::
    multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::upper_bound(local_18,(uint *)param_1);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_1c);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    CMyFileLog::CMyFileLog(local_14,"printBuddyRegister",0x68);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/buddyRegister","[%s] rcharNo(%d)",param_2,uVar1);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_1c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp](source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp)（约第 80 行）：

```cpp
void CBuddyRegisterManager::printBuddyRegister(char* name, unsigned int flag)
{
    unsigned int key = *(unsigned int*)name;
    for (std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
         it != m_map.upper_bound(key); ++it)
    {
        DNF_LOG_SCOPE_LINE(0x68, "./log/buddyRegister", "[%s] rcharNo(%d)", flag, it->second);
    }
}
```
