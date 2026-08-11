# _ZNK13CDNFException4whatEv

`CDNFException::what() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804c5ac` | `0x7a` | `0x808558c` | `0x5e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSs5c_strEv>
-mov    %eax,%ebx
+sub    $0x28,%esp
 movl   $0x1a,0x8(%esp)
 movl   $"what",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSs5c_strEv>
+mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
-cmp    $0xffffffff,%edx
-je     <T> <_ZNK13CDNFException4whatEv+0x72>
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    %eax,(%esp)
-call   <T> <__cxa_call_unexpected>
```
## 2. Ghidra 反编译 C

```c

/* CDNFException::what() const */

void __thiscall CDNFException::_ZNK13CDNFException4whatEv(CDNFException *this)

{
  undefined4 uVar1;
  CMyFileLog local_14 [12];
  
                    /* try { // try from 0804c5bc to 0804c60a has its CatchHandler @ 0804c611 */
  uVar1 = std::string::c_str((string *)(this + 4));
  CMyFileLog::CMyFileLog(local_14,"what",0x1a);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Except","%s",uVar1);
  std::string::c_str((string *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFTableBase.cpp](source/DNFServer/GameServer/COServer/DNFTableBase.cpp)（约第 55 行）：

```cpp
const char* CDNFException::what() const throw()
{
    register const char* msg = m_msg.c_str();
    DNF_LOG_SCOPE_LINE(0x1a, "./log/Except", "%s", msg);
    return m_msg.c_str();
}
```
