# _ZN8WongWork11CGMAccounts4isGMEj

`WongWork::CGMAccounts::isGM(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a2bd2` | `0xa7` | `0x808ee10` | `0xa7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
-movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x3,-0x1c(%ebp)
+movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+movl   $0x3,-0x14(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt4findISt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEES3_ET_S5_S5_RKT0_>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14_List_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 test   %al,%al
 je     <T> <_ZN8WongWork11CGMAccounts4isGMEj+0xa0>
 mov    $0x1,%eax
 jmp    <T> <_ZN8WongWork11CGMAccounts4isGMEj+0xa5>
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

定义于 [source/DNFServer/GameServer/Guild/GMAccounts.cpp](source/DNFServer/GameServer/Guild/GMAccounts.cpp)（约第 115 行）：

```cpp
int CGMAccounts::isGM(unsigned int id)
{
    std::list<stGMInfo_t>::iterator it;
    std::list<stGMInfo_t>::iterator end;
    stGMInfo_t key = {};
    key.m_field1 = 3;
    key.m_field0 = id;
    end = m_list.end();
    it = std::find(m_list.begin(), m_list.end(), key);
    if (it != end) return 1;
    return 0;
}
```
