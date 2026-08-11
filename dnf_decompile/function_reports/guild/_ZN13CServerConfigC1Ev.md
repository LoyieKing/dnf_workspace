# _ZN13CServerConfigC1Ev

`CServerConfig::CServerConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8065374` | `0x9d` | `0x8080b0c` | `0x142` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2c,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CServerConfig+0x8,(%eax)
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%esi
 mov    %esi,%edi
 mov    $0xfe,%ebx
 jmp    <T> <_ZN13CServerConfigC1Ev+0x3a>
 mov    %edi,(%esp)
 call   <T> <_ZN13ST_ServerInfoC1Ev>
 add    $0xc,%edi
 sub    $0x1,%ebx
 cmp    $0xffffffff,%ebx
 setne  %al
 test   %al,%al
 jne    <T> <_ZN13CServerConfigC1Ev+0x2c>
-jmp    <T> <_ZN13CServerConfigC1Ev+0x95>
+jmp    <T> <_ZN13CServerConfigC1Ev+0x7f>
 mov    %edx,%edi
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x30(%ebp)
 test   %esi,%esi
 je     <T> <_ZN13CServerConfigC1Ev+0x75>
 mov    $0xfe,%eax
 sub    %ebx,%eax
 mov    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%esi,%eax,1),%ebx
 cmp    %esi,%ebx
 je     <T> <_ZN13CServerConfigC1Ev+0x75>
 sub    $0xc,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN13ST_ServerInfoD1Ev>
 jmp    <T> <_ZN13CServerConfigC1Ev+0x64>
-mov    -0x1c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %edi,%edx
+jmp    <T> <_ZN13CServerConfigC1Ev+0x11f>
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN13CServerConfigC1Ev+0xe8>
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    0x8(%ebp),%eax
+lea    0x4(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0xc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN13CServerConfigC1Ev+0xe4>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13ST_ServerInfoC1Ev>
+jmp    <T> <_ZN13CServerConfigC1Ev+0xe4>
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
+je     <T> <_ZN13CServerConfigC1Ev+0x11b>
+jmp    <T> <_ZN13CServerConfigC1Ev+0xf8>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0xfe,-0x1c(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN13CServerConfigC1Ev+0x88>
+jmp    <T> <_ZN13CServerConfigC1Ev+0x13a>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+lea    0xbf4(%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+cmp    %eax,%ebx
+je     <T> <_ZN13CServerConfigC1Ev+0x11b>
+sub    $0xc,%ebx
+mov    %ebx,(%esp)
+call   <T> <_ZN13ST_ServerInfoD1Ev>
+jmp    <T> <_ZN13CServerConfigC1Ev+0x104>
+mov    %edi,%eax
+mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x2c,%esp
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerConfig::CServerConfig() */

void __thiscall CServerConfig::_ZN13CServerConfigC1Ev(CServerConfig *this)

{
  int iVar1;
  ST_ServerInfo *this_00;
  
  CTableBase::_ZN10CTableBaseC2Ev((CTableBase *)this);
  *(undefined ***)this = &PTR__CServerConfig_0811beb8;
  this_00 = (ST_ServerInfo *)(this + 4);
  for (iVar1 = 0xfe; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 080653a3 to 080653a7 has its CatchHandler @ 080653ba */
    ST_ServerInfo::ST_ServerInfo(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerConfig.cpp](source/DNFServer/GameServer/Guild/DNFServerConfig.cpp)（约第 120 行）：

```cpp
CServerConfig::CServerConfig()
{
    for (int i = 0; i < 255; i++)
    {
        new ((void*)&m_info[i]) ST_ServerInfo;
    }
}
```
