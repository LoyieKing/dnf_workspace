# _ZN17CSourceVersionMgr19InsertSourceVersionEPci

`CSourceVersionMgr::InsertSourceVersion(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a7486` | `0x62` | `0x80b5b48` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSourceVersionMgr13SourceVersionC1EPci>
 mov    0x8(%ebp),%eax
 lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EE9push_backEOS1_>
+call   <T> <_ZNSt6vectorIN17CSourceVersionMgr13SourceVersionESaIS1_EE9push_backERKS1_>
 jmp    <T> <_ZN17CSourceVersionMgr19InsertSourceVersionEPci+0x50>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSourceVersionMgr13SourceVersionD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSourceVersionMgr13SourceVersionD1Ev>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSourceVersionMgr::InsertSourceVersion(char*, int) */

void __thiscall
CSourceVersionMgr::_ZN17CSourceVersionMgr19InsertSourceVersionEPci
          (CSourceVersionMgr *this,char *param_1,int param_2)

{
  SourceVersion local_14 [8];
  
  SourceVersion::SourceVersion(local_14,param_1,param_2);
                    /* try { // try from 080a74b4 to 080a74b8 has its CatchHandler @ 080a74bb */
  std::vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>::
  push_back((vector<CSourceVersionMgr::SourceVersion,std::allocator<CSourceVersionMgr::SourceVersion>>
             *)this,local_14);
  SourceVersion::~SourceVersion(local_14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/version.cpp](source/DNFServer/GameServer/DBMW/version.cpp)（约第 50 行）：

```cpp
void CSourceVersionMgr::InsertSourceVersion(char* name, int version)
{
    m_versions.push_back(SourceVersion(name, version));
}
```
