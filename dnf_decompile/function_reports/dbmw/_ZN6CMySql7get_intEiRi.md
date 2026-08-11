# _ZN6CMySql7get_intEiRi

`CMySql::get_int(int, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808db10` | `0x64` | `0x80754b6` | `0x61` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql7get_intEiRi+0x29>
+je     <T> <_ZN6CMySql7get_intEiRi+0x26>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql12is_valid_colEi>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql7get_intEiRi+0x30>
+jne    <T> <_ZN6CMySql7get_intEiRi+0x2d>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql7get_intEiRi+0x35>
+jmp    <T> <_ZN6CMySql7get_intEiRi+0x32>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN6CMySql7get_intEiRi+0x40>
+test   %eax,%eax
+je     <T> <_ZN6CMySql7get_intEiRi+0x3d>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql7get_intEiRi+0x62>
+jmp    <T> <_ZN6CMySql7get_intEiRi+0x5f>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0xc(%ebp),%edx
 shl    $0x2,%edx
 add    %edx,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    0x10(%ebp),%edx
 mov    %eax,(%edx)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::get_int(int, int&) */

bool __thiscall CMySql::_ZN6CMySql7get_intEiRi(CMySql *this,int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if ((*(int *)(this + 0xc) == 0) ||
     (cVar2 = _ZN6CMySql12is_valid_colEi(this,param_1), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar3 = atoi(*(char **)(*(int *)(this + 0xc) + param_1 * 4));
    *param_2 = iVar3;
  }
  return !bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 96 行）：

```cpp
bool CMySql::get_int(int col, unsigned int& v)
{
    return get_uint(col, v);
}
```
