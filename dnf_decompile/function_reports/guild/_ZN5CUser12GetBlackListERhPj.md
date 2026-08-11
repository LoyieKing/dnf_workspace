# _ZN5CUser12GetBlackListERhPj

`CUser::GetBlackList(unsigned char&, unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80672f6` | `0xb9` | `0x80899c0` | `0xca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,66 @@
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
-jne    <T> <_ZN5CUser12GetBlackListERhPj+0xb0>
+je     <T> <_ZN5CUser12GetBlackListERhPj+0xc5>
 mov    0x8(%ebp),%eax
 lea    0x64(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN5CUser12GetBlackListERhPj+0x80>
+jmp    <T> <_ZN5CUser12GetBlackListERhPj+0x79>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0x10(%ebp),%ebx
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEdeEv>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    (%eax),%eax
 mov    %eax,(%ebx)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEppEv>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
-mov    0xc(%ebp),%eax
-movzbl (%eax),%eax
-cmp    $0x9,%al
-ja     <T> <_ZN5CUser12GetBlackListERhPj+0xb3>
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x64(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN5CUser12GetBlackListERhPj+0x3d>
-jmp    <T> <_ZN5CUser12GetBlackListERhPj+0xb4>
-nop
-jmp    <T> <_ZN5CUser12GetBlackListERhPj+0xb4>
-nop
+je     <T> <_ZN5CUser12GetBlackListERhPj+0xb8>
+mov    0xc(%ebp),%eax
+movzbl (%eax),%eax
+cmp    $0xff,%al
+je     <T> <_ZN5CUser12GetBlackListERhPj+0xb8>
+mov    $0x1,%eax
+jmp    <T> <_ZN5CUser12GetBlackListERhPj+0xbd>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN5CUser12GetBlackListERhPj+0x40>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetBlackList(unsigned char&, unsigned int*) */

void __thiscall CUser::_ZN5CUser12GetBlackListERhPj(CUser *this,uchar *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
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
      bVar1 = *param_1;
      puVar3 = (uint *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator*
                                 ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)
                                  local_14);
      param_2[bVar1] = *puVar3;
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

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 400 行）：

```cpp
void CUser::GetBlackList(unsigned char& count, unsigned int* list)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end() && count < 0xff; ++it, count++)
        {
            list[count] = it->first;
        }
    }
}
```
