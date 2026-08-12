# _ZN10CTowerRank5resetEv

`CTowerRank::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a3562` | `0x39` | `0x8086f0e` | `0x37` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN10CTowerRank5resetEv+0x2a>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE5clearEv>
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x3,%eax
+cmpl   $0x3,-0xc(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN10CTowerRank5resetEv+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTowerRank::reset() */

void __thiscall CTowerRank::_ZN10CTowerRank5resetEv(CTowerRank *this)

{
  uint local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::
    multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
    ::clear((multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
             *)(this + local_10 * 0x18));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp](source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp)（约第 102 行）：

```cpp
void CTowerRank::reset()
{
    unsigned int i = 0;
    while (i <= 3)
    {
        m_ranks[i].clear();
        i++;
    }
}
```
