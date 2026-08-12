# _ZN18CMemoryCashManager20ProcessCashDataPrintEv

`CMemoryCashManager::ProcessCashDataPrint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a0acc` | `0xc4` | `0x8097806` | `0xc1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x34(%eax),%eax
-lea    -0x1(%eax),%edx
+sub    $0x1,%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x34(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x34(%eax),%eax
 test   %al,%al
-setle  %al
-test   %al,%al
-je     <T> <_ZN18CMemoryCashManager20ProcessCashDataPrintEv+0xbc>
+jg     <T> <_ZN18CMemoryCashManager20ProcessCashDataPrintEv+0xb9>
 mov    0x8(%ebp),%eax
 mov    0x40(%eax),%eax
 mov    %eax,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%eax
 mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%edi
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%esi
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%ebx
 movl   $0x4e,0x8(%esp)
 movl   $&_ZZN18CMemoryCashManager20ProcessCashDataPrintEvE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x34(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"buddy(%d/%d)  member(%d/%d)  black(%d/%d)",0x8(%esp)
 movl   $"./log/cashmem",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager12resetCashCntEv>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::ProcessCashDataPrint() */

void __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager20ProcessCashDataPrintEv(CMemoryCashManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CMyFileLog local_24 [20];
  
  this[0x34] = (CMemoryCashManager)((char)this[0x34] + -1);
  if ((char)this[0x34] < '\x01') {
    uVar1 = *(undefined4 *)(this + 0x40);
    uVar2 = *(undefined4 *)(this + 0x4c);
    uVar3 = *(undefined4 *)(this + 0x3c);
    uVar4 = *(undefined4 *)(this + 0x48);
    uVar5 = *(undefined4 *)(this + 0x38);
    uVar6 = *(undefined4 *)(this + 0x44);
    CMyFileLog::CMyFileLog(local_24,"ProcessCashDataPrint",0x4e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/cashmem","buddy(%d/%d)  member(%d/%d)  black(%d/%d)",uVar6,uVar5,
               uVar4,uVar3,uVar2,uVar1);
    resetCashCnt(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp](source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp)（约第 74 行）：

```cpp
void CMemoryCashManager::ProcessCashDataPrint()
{
    m_cashCnt34 = m_cashCnt34 - 1;
    if (m_cashCnt34 <= 0)
    {
        DNF_LOG_SCOPE_LINE(0x4e, "./log/cashmem",
            "buddy(%d/%d)  member(%d/%d)  black(%d/%d)",
            m_field44, m_buddyCashCnt, m_field48, m_memberCashCnt, m_field4c,
            m_blackListCashCnt);
        resetCashCnt();
    }
}
```
