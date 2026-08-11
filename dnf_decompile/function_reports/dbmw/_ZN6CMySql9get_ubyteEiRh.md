# _ZN6CMySql9get_ubyteEiRh

`CMySql::get_ubyte(int, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808ded4` | `0x66` | `0x80757e8` | `0x63` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql9get_ubyteEiRh+0x29>
+je     <T> <_ZN6CMySql9get_ubyteEiRh+0x26>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql12is_valid_colEi>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql9get_ubyteEiRh+0x30>
+jne    <T> <_ZN6CMySql9get_ubyteEiRh+0x2d>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql9get_ubyteEiRh+0x35>
+jmp    <T> <_ZN6CMySql9get_ubyteEiRh+0x32>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN6CMySql9get_ubyteEiRh+0x40>
+test   %eax,%eax
+je     <T> <_ZN6CMySql9get_ubyteEiRh+0x3d>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql9get_ubyteEiRh+0x64>
+jmp    <T> <_ZN6CMySql9get_ubyteEiRh+0x61>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0xc(%ebp),%edx
 shl    $0x2,%edx
 add    %edx,%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %dl,(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::get_ubyte(int, unsigned char&) */

bool __thiscall CMySql::_ZN6CMySql9get_ubyteEiRh(CMySql *this,int param_1,uchar *param_2)

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
    *param_2 = (uchar)iVar3;
  }
  return !bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 338 行）：

```cpp
bool CMySql::get_ubyte(int col, unsigned char& v)
{
    switch ((m_row == 0) ? 1 : !is_valid_col(col))
    {
    default:
        return 0;
    case 0:
        v = (unsigned char)atoi(m_row[col]);
        return 1;
    }
}
```
