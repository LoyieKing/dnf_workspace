# _ZN13CDNFExceptionD1Ev

`CDNFException::~CDNFException()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804c776` | `0x73` | `0x8084112` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CDNFException+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CDNFExceptionD1Ev+0x3b>
+jmp    <T> <_ZN13CDNFExceptionD1Ev+0x3c>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt9exceptionD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-cmp    $0xffffffff,%edx
-je     <T> <_ZN13CDNFExceptionD1Ev+0x64>
-jmp    <T> <_ZN13CDNFExceptionD1Ev+0x5c>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt9exceptionD1Ev>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CDNFExceptionD1Ev+0x6c>
+je     <T> <_ZN13CDNFExceptionD1Ev+0x5b>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-jmp    <T> <_ZN13CDNFExceptionD1Ev+0x6c>
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    %eax,(%esp)
-call   <T> <__cxa_call_unexpected>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804c7c5) */
/* CDNFException::~CDNFException() */

void __thiscall CDNFException::_ZN13CDNFExceptionD1Ev(CDNFException *this)

{
  *(undefined ***)this = &PTR__ZN13CDNFExceptionD1Ev_08112be8;
                    /* try { // try from 0804c790 to 0804c794 has its CatchHandler @ 0804c797 */
  std::string::~string((string *)(this + 4));
  std::exception::~exception((exception *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTableBase.cpp](source/DNFServer/GameServer/Monitor/DNFTableBase.cpp)（约第 31 行）：

```cpp
CDNFException::~CDNFException() throw() {}
```
