# _ZN22CLoginLogoutStatisticsC2ER12CApplication

`CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a62e4` | `0x98` | `0x809628a` | `0x13b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,109 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2c,%esp
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,(%eax)
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%esi
 mov    %esi,%edi
 mov    $0x6,%ebx
-jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x2e>
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x26>
 mov    %edi,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEEC1Ev>
 add    $0x18,%edi
 sub    $0x1,%ebx
 cmp    $0xffffffff,%ebx
 setne  %al
 test   %al,%al
-jne    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x20>
-jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x76>
+jne    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x18>
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x6e>
 mov    %edx,%edi
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x30(%ebp)
 test   %esi,%esi
-je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x69>
+je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x61>
 mov    $0x6,%eax
 sub    %ebx,%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 lea    (%esi,%eax,1),%ebx
 cmp    %esi,%ebx
-je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x69>
+je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x61>
 sub    $0x18,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEED1Ev>
-jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x58>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x50>
+mov    -0x30(%ebp),%eax
 mov    %edi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,(%eax)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0xdf>
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    0x8(%ebp),%eax
+lea    0x4(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x18,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0xdb>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEEC1Ev>
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0xdb>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %edx,%esi
+mov    %eax,%edi
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+test   %eax,%eax
+je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x12f>
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x10c>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x6,-0x1c(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x7f>
+mov    0x8(%ebp),%eax
 movl   $0x0,0xac(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb0(%eax)
-add    $0x2c,%esp
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+lea    0xa8(%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+cmp    %eax,%ebx
+je     <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x12f>
+sub    $0x18,%ebx
+mov    %ebx,(%esp)
+call   <T> <_ZNSt3mapIh13stLoginLogoutSt4lessIhESaISt4pairIKhS0_EEED1Ev>
+jmp    <T> <_ZN22CLoginLogoutStatisticsC1ER12CApplication+0x118>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication&) */

void __thiscall
CLoginLogoutStatistics::_ZN22CLoginLogoutStatisticsC2ER12CApplication
          (CLoginLogoutStatistics *this,CApplication *param_1)

{
  int iVar1;
  map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
  *this_00;
  
  *(CApplication **)this = param_1;
  this_00 = (map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
             *)(this + 4);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 080a6307 to 080a630b has its CatchHandler @ 080a631e */
    std::
    map<unsigned_char,stLoginLogout,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stLoginLogout>>>
    ::map(this_00);
    this_00 = this_00 + 0x18;
  }
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp](source/DNFServer/GameServer/Monitor/LoginLogoutStatistics.cpp)（约第 32 行）：

```cpp
CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app)
{
    m_app = &app;
    for (int i = 0; i < 7; i++)
    {
        new (&m_maps[i]) std::map<unsigned char, stLoginLogout>();
    }
    m_fieldac = 0;
    m_fieldb0 = 0;
}
```
