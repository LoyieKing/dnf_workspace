# _ZN5CUser12GetBlackListERhP17STBlackUserDBType

`CUser::GetBlackList(unsigned char&, STBlackUserDBType*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80671b8` | `0x13d` | `0x808987e` | `0x141` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,104 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x134>
+je     <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x13c>
 mov    0x8(%ebp),%eax
 lea    0x64(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x100>
-lea    -0x10(%ebp),%eax
+jmp    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x107>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUser7GetNameEv>
 mov    %eax,%ecx
+mov    0x10(%ebp),%ebx
+mov    0xc(%ebp),%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    %eax,%eax
+add    $0x1,%eax
+shl    $0x2,%eax
+lea    (%ebx,%eax,1),%eax
+movl   $0x1d,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    0x10(%ebp),%ecx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-add    0x10(%ebp),%eax
-add    $0x4,%eax
-movl   $0x1d,0x8(%esp)
-mov    %ecx,0x4(%esp)
+add    $0x24,%eax
+lea    (%ecx,%eax,1),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <memcpy>
+call   <T> <_ZN10CBlackUser12GetOccurTimeEv>
+mov    %eax,(%ebx)
+mov    0x10(%ebp),%ecx
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    %eax,%ebx
-add    0x10(%ebp),%ebx
-lea    -0x10(%ebp),%eax
+lea    (%ecx,%eax,1),%ebx
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CBlackUser12GetOccurTimeEv>
-mov    %eax,0x24(%ebx)
-mov    0xc(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-mov    %eax,%ebx
-add    0x10(%ebp),%ebx
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    (%eax),%eax
 mov    %eax,(%ebx)
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x9,%al
-ja     <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x137>
-lea    -0x10(%ebp),%eax
+ja     <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x13b>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x64(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x40>
-jmp    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x138>
-nop
-jmp    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x138>
+jne    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x43>
+jmp    <T> <_ZN5CUser12GetBlackListERhP17STBlackUserDBType+0x13c>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetBlackList(unsigned char&, STBlackUserDBType*) */

void __thiscall
CUser::_ZN5CUser12GetBlackListERhP17STBlackUserDBType
          (CUser *this,uchar *param_1,STBlackUserDBType *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  void *__src;
  undefined4 uVar4;
  undefined4 *puVar5;
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_14 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_10 [8];
  
  *param_1 = '\0';
  cVar2 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(this + 100));
  if (cVar2 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
      ::end(local_10);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14,
                         (_Rb_tree_iterator *)local_10);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator*
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
      __src = (void *)CBlackUser::GetName(*(CBlackUser **)(iVar3 + 4));
      memcpy(param_2 + (uint)*param_1 * 0x28 + 4,__src,0x1d);
      bVar1 = *param_1;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator*
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
      uVar4 = CBlackUser::GetOccurTime(*(CBlackUser **)(iVar3 + 4));
      *(undefined4 *)(param_2 + (uint)bVar1 * 0x28 + 0x24) = uVar4;
      bVar1 = *param_1;
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator*
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
      *(undefined4 *)(param_2 + (uint)bVar1 * 0x28) = *puVar5;
      *param_1 = *param_1 + '\x01';
      if (9 < *param_1) {
        return;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 378 行）：

```cpp
void CUser::GetBlackList(unsigned char& count, STBlackUserDBType* list)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end(); ++it)
        {
            CBlackUser* bu = it->second;
            memcpy((char*)list + (unsigned int)count * 0x28 + 4, bu->GetName(), 0x1d);
            *(unsigned int*)((char*)list + (unsigned int)count * 0x28 + 0x24) =
                bu->GetOccurTime();
            *(unsigned int*)((char*)list + (unsigned int)count * 0x28) = it->first;
            count = (unsigned char)(count + 1);
            if (9 < count)
            {
                return;
            }
        }
    }
}
```
