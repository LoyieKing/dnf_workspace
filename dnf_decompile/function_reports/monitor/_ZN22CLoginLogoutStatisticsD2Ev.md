# _ZN22CLoginLogoutStatisticsD2Ev

`CLoginLogoutStatistics::~CLoginLogoutStatistics()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a637c` | `0xaf` | `0x80963c6` | `0xaf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x30>
 mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEE5clearEv>
+call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x6,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x12>
 jmp    <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x7a>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x6e>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 lea    0xa8(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 cmp    %eax,%ebx
 je     <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x6e>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 jmp    <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x57>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN22CLoginLogoutStatisticsD1Ev+0xa7>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 lea    0xa8(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 cmp    %eax,%ebx
 je     <T> <_ZN22CLoginLogoutStatisticsD1Ev+0xa7>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEED1Ev>
 jmp    <T> <_ZN22CLoginLogoutStatisticsD1Ev+0x90>
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CLoginLogoutStatistics::~CLoginLogoutStatistics() */

void __thiscall
CLoginLogoutStatistics::_ZN22CLoginLogoutStatisticsD2Ev(CLoginLogoutStatistics *this)

{
  map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
  *this_00;
  int local_20;
  
  for (local_20 = 0; local_20 < 7; local_20 = local_20 + 1) {
                    /* try { // try from 080a63a3 to 080a63a7 has its CatchHandler @ 080a63b9 */
    std::
    map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
    ::clear((map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
             *)(this + local_20 * 0x18 + 4));
  }
  if (this != (CLoginLogoutStatistics *)0xfffffffc) {
    this_00 = (map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
               *)(this + 0xac);
    while (this_00 !=
           (map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
            *)(this + 4)) {
      this_00 = this_00 + -0x18;
      std::
      map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
      ::~map(this_00);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 43 行）：

```cpp
CLoginLogoutStatistics::~CLoginLogoutStatistics()
{
    for (int i = 0; i < 7; i++)
    {
        m_maps[i].~map();
    }
}
```
