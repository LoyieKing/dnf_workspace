# _ZNK8WongWork11CGMAccounts9getGMInfoEj

`WongWork::CGMAccounts::getGMInfo(unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80acd86` | `0xe0` | `0x80931e0` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%ebx
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,(%ebx)
+movl   $0x3,0x4(%ebx)
+mov    0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 movl   $0x3,-0x18(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-movl   $0x3,-0x20(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,-0x24(%ebp)
 mov    0xc(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 sub    $0x4,%esp
 mov    0xc(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-lea    -0x24(%ebp),%edx
+lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt4findISt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEES3_ET_S5_S5_RKT0_>
 sub    $0x4,%esp
 mov    0xc(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 test   %al,%al
-je     <T> <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xcc>
-lea    -0x28(%ebp),%eax
+je     <T> <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xbd>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEdeEv>
 movl   $0x8,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <memmove>
-jmp    <T> <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xd7>
-mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%edx
-mov    %eax,(%ebx)
-mov    %edx,0x4(%ebx)
+jmp    <T> <_ZNK8WongWork11CGMAccounts9getGMInfoEj+0xbe>
+nop
 mov    %ebx,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::getGMInfo(unsigned int) const */

uint WongWork::CGMAccounts::_ZNK8WongWork11CGMAccounts9getGMInfoEj(uint param_1)

{
  char cVar1;
  void *__src;
  _List_const_iterator<WongWork::CGMAccounts::stGMInfo_t> local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  _List_const_iterator local_10 [8];
  
  local_20 = 0;
  local_1c = 3;
  local_24 = 3;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_2c,local_14,local_18,local_28);
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  cVar1 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=
                    (local_2c,local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = local_20;
    *(undefined4 *)(param_1 + 4) = local_1c;
  }
  else {
    __src = (void *)std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator*
                              (local_2c);
    memmove((void *)param_1,__src,8);
  }
  return param_1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/GMAccounts.cpp](source/DNFServer/GameServer/Monitor/GMAccounts.cpp)（约第 48 行）：

```cpp
CGMAccounts::stGMInfo_t CGMAccounts::getGMInfo(unsigned int dbid) const
{
    stGMInfo_t out;
    out.m_dbid = 0;
    out.m_field4 = 3;
    stGMInfo_t key;
    key.m_dbid = dbid;
    key.m_field4 = 3;
    std::list<stGMInfo_t>::const_iterator it =
        std::find(m_list.begin(), m_list.end(), key);
    if (it != m_list.end())
    {
        out = *it;
    }
    return out;
}
```
