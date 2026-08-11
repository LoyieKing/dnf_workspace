# _ZN12CUserManager15ProcessByMinuteEv

`CUserManager::ProcessByMinute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80698ca` | `0xa1` | `0x808be36` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-mov    0x8(%ebp),%eax
-lea    0x18(%eax),%edx
-lea    -0x18(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x5f>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x54>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser18GuildInviteProcessEv>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEppEv>
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x58>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CUserManager15ProcessByMinuteEv+0x4d>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser18GuildInviteProcessEv>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x32>
+jne    <T> <_ZN12CUserManager15ProcessByMinuteEv+0x20>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::ProcessByMinute() */

void CUserManager::_ZN12CUserManager15ProcessByMinuteEv(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_18 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_1c);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
            (local_20,(_Rb_tree_iterator *)local_1c);
  while( true ) {
    std::
    map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_14);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
              (local_18,(_Rb_tree_iterator *)local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->(local_20)
    ;
    local_10 = *(CUser **)(iVar2 + 4);
    if (local_10 != (CUser *)0x0) {
      CUser::GuildInviteProcess(local_10);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_20);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 373 行）：

```cpp
void CUserManager::ProcessByMinute()
{
    for (std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
         it != m_charNoUsers.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->GuildInviteProcess();
        }
    }
}
```
