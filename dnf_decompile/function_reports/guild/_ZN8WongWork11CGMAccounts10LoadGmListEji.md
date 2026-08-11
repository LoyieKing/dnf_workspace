# _ZN8WongWork11CGMAccounts10LoadGmListEji

`WongWork::CGMAccounts::LoadGmList(unsigned int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a2d76` | `0x26` | `0x808efca` | `0x26` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE9push_backERKS2_>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::LoadGmList(unsigned int, int) */

void __thiscall
WongWork::CGMAccounts::_ZN8WongWork11CGMAccounts10LoadGmListEji
          (CGMAccounts *this,uint param_1,int param_2)

{
  uint local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GMAccounts.cpp](source/DNFServer/GameServer/DBMW/GMAccounts.cpp)（约第 73 行）：

```cpp
void WongWork::CGMAccounts::LoadGmList(unsigned int idx, int flag)
{
    stGMInfo_t info;
    info.m_field0 = (int)idx;
    info.m_field1 = flag;
    m_list.push_back(info);
}
```
