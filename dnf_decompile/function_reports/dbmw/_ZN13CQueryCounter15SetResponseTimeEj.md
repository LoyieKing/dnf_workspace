# _ZN13CQueryCounter15SetResponseTimeEj

`CQueryCounter::SetResponseTime(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e328` | `0xc2` | `0x80ed6d4` | `0xc1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 cmpl   $0x4f60,0xc(%ebp)
-ja     <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xbf>
+ja     <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xbe>
 mov    0xc(%ebp),%eax
 sub    $0x4e20,%eax
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x1058(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1058(%eax),%eax
 mov    %eax,(%esp)
 call   *%edx
 fstpl  -0x10(%ebp)
 mov    -0x14(%ebp),%edx
 mov    -0x14(%ebp),%ecx
 mov    0x8(%ebp),%eax
 add    $0xc8,%ecx
 fldl   0xc(%eax,%ecx,8)
 faddl  -0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0xc8,%edx
 fstpl  0xc(%eax,%edx,8)
 fldl   -0x10(%ebp)
 fldl   &data#b6bdab5e(.rodata)
 fxch   %st(1)
-fucompp
-fnstsw %ax
-sahf
+fucomip %st(1),%st
+fstp   %st(0)
 seta   %al
 test   %al,%al
-je     <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xc0>
+je     <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xbf>
 movl   $0x5d,0x8(%esp)
 movl   $&_ZZN13CQueryCounter15SetResponseTimeEjE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 fldl   -0x10(%ebp)
 fstpl  0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"type(%d)interval(%d)",0x8(%esp)
 movl   $"./log/SlowQuery",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xc0>
+jmp    <T> <_ZN13CQueryCounter15SetResponseTimeEj+0xbf>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CQueryCounter::SetResponseTime(unsigned int) */

void __thiscall
CQueryCounter::_ZN13CQueryCounter15SetResponseTimeEj(CQueryCounter *this,uint param_1)

{
  longdouble lVar1;
  CMyFileLog local_20 [8];
  int local_18;
  double local_14;
  
  if (param_1 < 0x4f61) {
    local_18 = param_1 - 20000;
    lVar1 = (longdouble)(**(code **)(**(int **)(this + 0x1058) + 4))(*(undefined4 *)(this + 0x1058))
    ;
    local_14 = (double)lVar1;
    *(double *)(this + (local_18 + 200) * 8 + 0xc) =
         *(double *)(this + (local_18 + 200) * 8 + 0xc) + local_14;
    if (_DAT_081bab50 < local_14) {
      CMyFileLog::CMyFileLog(local_20,"SetResponseTime",0x5d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_20,"./log/SlowQuery","type(%d)interval(%d)",param_1,local_14);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 91 行）：

```cpp
void CQueryCounter::SetResponseTime(unsigned int ms)
{
    if (ms > 0x4f60)
        return;
    int i = ms - 0x4e20;
    double interval = m_timer->GetTimeInterval();
    m_responseTimes[i] = interval + m_responseTimes[i];
    if (interval > 500.0)
    {
        CMyFileLog log(__FUNCTION__, 0x5d);
        log("./log/SlowQuery", "type(%d)interval(%d)", ms, interval);
    }
}
```
