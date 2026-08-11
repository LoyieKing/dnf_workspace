# _ZN17CSourceVersionMgrC1Ev

`CSourceVersionMgr::CSourceVersionMgr()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805aae8` | `0x88` | `0x808e260` | `0x6d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EEC1Ev>
 movl   $0x19daa,0x8(%esp)
 movl   $".",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
 movl   $0x19daa,0x8(%esp)
 movl   $"../ServerCommon",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
-movl   $0x19daa,0x8(%esp)
-movl   $"../../DNFShared",0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CSourceVersionMgr19InsertSourceVersionEPci>
-jmp    <T> <_ZN17CSourceVersionMgrC1Ev+0x81>
+jmp    <T> <_ZN17CSourceVersionMgrC1Ev+0x66>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSourceVersionMgr::CSourceVersionMgr() */

void __thiscall CSourceVersionMgr::_ZN17CSourceVersionMgrC1Ev(CSourceVersionMgr *this)

{
  std::vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>::
  vector((vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>
          *)this);
                    /* try { // try from 0805ab11 to 0805ab4b has its CatchHandler @ 0805ab4e */
  InsertSourceVersion(this,".",0x19daa);
  InsertSourceVersion(this,"../ServerCommon",0x19daa);
  InsertSourceVersion(this,"../../DNFShared",0x19daa);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFVersion.cpp](source/DNFServer/GameServer/COServer/DNFVersion.cpp)（约第 14 行）：

```cpp
CSourceVersionMgr::CSourceVersionMgr()
    : source_version_list_()
{
    InsertSourceVersion(".svn/all-wcprops", 0x2c00);
    InsertSourceVersion("DNFServerCommon/.svn/all-wcprops", 0x2c01);
}
```
