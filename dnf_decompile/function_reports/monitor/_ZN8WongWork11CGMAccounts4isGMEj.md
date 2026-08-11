# _ZN8WongWork11CGMAccounts4isGMEj

`WongWork::CGMAccounts::isGM(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80accc2` | `0xa7` | `0x809308e` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x3,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+sub    $0x28,%esp
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN8WongWork11CGMAccounts4isGMEj+0x46>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEptEv>
+mov    (%eax),%eax
+cmp    0xc(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN8WongWork11CGMAccounts4isGMEj+0x3b>
+mov    $0x1,%eax
+jmp    <T> <_ZN8WongWork11CGMAccounts4isGMEj+0x76>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEppEv>
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
-sub    $0x4,%esp
-mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-lea    -0x20(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    -0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt4findISt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEES3_ET_S5_S5_RKT0_>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 test   %al,%al
-je     <T> <_ZN8WongWork11CGMAccounts4isGMEj+0xa0>
-mov    $0x1,%eax
-jmp    <T> <_ZN8WongWork11CGMAccounts4isGMEj+0xa5>
+jne    <T> <_ZN8WongWork11CGMAccounts4isGMEj+0x1d>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::isGM(unsigned int) */

bool __thiscall
WongWork::CGMAccounts::_ZN8WongWork11CGMAccounts4isGMEj(CGMAccounts *this,uint param_1)

{
  char cVar1;
  uint local_24 [2];
  _List_iterator local_1c [4];
  _List_iterator<WongWork::CGMAccounts::stGMInfo_t> local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  local_24[1] = 3;
  local_24[0] = param_1;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_18,local_10,local_14,local_24);
  cVar1 = std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=(local_18,local_1c);
  return cVar1 != '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/GMAccounts.cpp](source/DNFServer/GameServer/Monitor/GMAccounts.cpp)（约第 35 行）：

```cpp
bool CGMAccounts::isGM(unsigned int dbid)
{
    for (std::list<stGMInfo_t>::iterator it = m_list.begin(); it != m_list.end(); ++it)
    {
        if (it->m_dbid == dbid)
        {
            return true;
        }
    }
    return false;
}
```
