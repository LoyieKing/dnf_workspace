# _ZN6CMySql13get_ulonglongEiRy

`CMySql::get_ulonglong(int, unsigned long long&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808e000` | `0x77` | `0x8074f0a` | `0x74` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql13get_ulonglongEiRy+0x29>
+je     <T> <_ZN6CMySql13get_ulonglongEiRy+0x26>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql12is_valid_colEi>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql13get_ulonglongEiRy+0x30>
+jne    <T> <_ZN6CMySql13get_ulonglongEiRy+0x2d>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql13get_ulonglongEiRy+0x35>
+jmp    <T> <_ZN6CMySql13get_ulonglongEiRy+0x32>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN6CMySql13get_ulonglongEiRy+0x40>
+test   %eax,%eax
+je     <T> <_ZN6CMySql13get_ulonglongEiRy+0x3d>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql13get_ulonglongEiRy+0x75>
+jmp    <T> <_ZN6CMySql13get_ulonglongEiRy+0x72>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0xc(%ebp),%edx
 shl    $0x2,%edx
 add    %edx,%eax
 mov    (%eax),%eax
 movl   $0xa,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strtoull>
 mov    0x10(%ebp),%ecx
 mov    %eax,(%ecx)
 mov    %edx,0x4(%ecx)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::get_ulonglong(int, unsigned long long&) */

bool __thiscall CMySql::_ZN6CMySql13get_ulonglongEiRy(CMySql *this,int param_1,ulonglong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((*(int *)(this + 0xc) == 0) ||
     (cVar2 = _ZN6CMySql12is_valid_colEi(this,param_1), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar3 = strtoull(*(char **)(*(int *)(this + 0xc) + param_1 * 4),(char **)0x0,10);
    *param_2 = uVar3;
  }
  return !bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 108 行）：

```cpp
bool CMySql::get_ulonglong(int col, unsigned long long& v)
{
    switch ((m_row == 0) ? 1 : !is_valid_col(col))
    {
    default:
        return 0;
    case 0:
        v = strtoull(m_row[col], 0, 10);
        return 1;
    }
}
```
