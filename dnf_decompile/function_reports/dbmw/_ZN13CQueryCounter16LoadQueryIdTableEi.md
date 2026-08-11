# _ZN13CQueryCounter16LoadQueryIdTableEi

`CQueryCounter::LoadQueryIdTable(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e75e` | `0x3c` | `0x80ed700` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 cmpl   $0x4e20,0xc(%ebp)
-jle    <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x18>
+jle    <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x35>
 cmpl   $0x4f60,0xc(%ebp)
-jle    <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x3a>
+jg     <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x35>
 mov    0xc(%ebp),%eax
 sub    $0x4e20,%eax
 mov    %eax,-0x4(%ebp)
 mov    -0x4(%ebp),%eax
 mov    0x8(%ebp),%edx
 movb   $0x1,0x4(%edx,%eax,1)
 mov    $0x1,%eax
+jmp    <T> <_ZN13CQueryCounter16LoadQueryIdTableEi+0x3a>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CQueryCounter::LoadQueryIdTable(int) */

undefined4 __thiscall
CQueryCounter::_ZN13CQueryCounter16LoadQueryIdTableEi(CQueryCounter *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x4e21) || (0x4f60 < param_1)) {
    uVar1 = 0;
  }
  else {
    this[param_1 + -0x4e1c] = (CQueryCounter)0x1;
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/QueryCounter.cpp](source/DNFServer/GameServer/DBMW/QueryCounter.cpp)（约第 104 行）：

```cpp
int CQueryCounter::LoadQueryIdTable(int queryId)
{
    if (queryId > 0x4e20 && queryId <= 0x4f60)
    {
        int i = queryId - 0x4e20;
        m_used[i] = 1;
        return 1;
    }
    return 0;
}
```
