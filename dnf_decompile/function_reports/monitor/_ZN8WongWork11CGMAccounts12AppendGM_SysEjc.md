# _ZN8WongWork11CGMAccounts12AppendGM_SysEjc

`WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80acea0` | `0x8f` | `0x8093746` | `0x8f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
 movsbl -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE9push_backERKS2_>
 movl   $0x0,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0xcd,0x8(%esp)
 movl   $&_ZZN8WongWork11CGMAccounts12AppendGM_SysEjcE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"GM List Add mid:%s",0x8(%esp)
 movl   $"./log/Init",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WongWork::CGMAccounts::AppendGM_Sys(unsigned int, char) */

void __thiscall
WongWork::CGMAccounts::_ZN8WongWork11CGMAccounts12AppendGM_SysEjc
          (CGMAccounts *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  uint local_1c;
  int local_18;
  CMyFileLog local_14 [12];
  
  local_1c = param_1;
  local_18 = (int)param_2;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  push_back((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
             *)this,(stGMInfo_t *)&local_1c);
  uVar1 = NumberToString(param_1,0);
  CMyFileLog::CMyFileLog(local_14,"AppendGM_Sys",0xcd);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Init","GM List Add mid:%s",uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/GMAccounts.cpp](source/DNFServer/GameServer/Monitor/GMAccounts.cpp)（约第 65 行）：

```cpp
void CGMAccounts::AppendGM_Sys(unsigned int dbid, char level)
{
    stGMInfo_t info = {};
    info.m_dbid = dbid;
    info.m_field4 = (int)level;
    m_list.push_back(info);
    register char* mid = NumberToString(dbid, 0);
    CMyFileLog log(__FUNCTION__, 0xcd);
    log("./log/Init", "GM List Add mid:%s", mid);
}
```
