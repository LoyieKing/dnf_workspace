# _ZN6CMySql10get_binaryEiPvi

`CMySql::get_binary(int, void*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808da70` | `0xa0` | `0x80c8fc0` | `0x9f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql10get_binaryEiPvi+0x2f>
+je     <T> <_ZN6CMySql10get_binaryEiPvi+0x2c>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySql12is_valid_colEi>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CMySql10get_binaryEiPvi+0x2f>
+je     <T> <_ZN6CMySql10get_binaryEiPvi+0x2c>
 cmpl   $0x0,0x14(%ebp)
-jg     <T> <_ZN6CMySql10get_binaryEiPvi+0x36>
+jg     <T> <_ZN6CMySql10get_binaryEiPvi+0x33>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x3b>
+jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x38>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CMySql10get_binaryEiPvi+0x46>
-mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x9e>
+jne    <T> <_ZN6CMySql10get_binaryEiPvi+0x98>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    0xc(%ebp),%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+cmp    %eax,%edx
+jae    <T> <_ZN6CMySql10get_binaryEiPvi+0x65>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    0xc(%ebp),%edx
 shl    $0x2,%edx
 add    %edx,%eax
 mov    (%eax),%eax
-cmp    0x14(%ebp),%eax
-jge    <T> <_ZN6CMySql10get_binaryEiPvi+0x6d>
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    0xc(%ebp),%edx
-shl    $0x2,%edx
-add    %edx,%eax
-mov    (%eax),%eax
-jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x70>
+jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x68>
 mov    0x14(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0xc(%ebp),%ecx
 shl    $0x2,%ecx
 add    %ecx,%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    $0x1,%eax
+jmp    <T> <_ZN6CMySql10get_binaryEiPvi+0x9d>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::get_binary(int, void*, int) */

undefined4 __thiscall
CMySql::_ZN6CMySql10get_binaryEiPvi(CMySql *this,int param_1,void *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (((*(int *)(this + 0xc) == 0) || (cVar2 = is_valid_col(this,param_1), cVar2 != '\x01')) ||
     (param_3 < 1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(int *)(this + 0x10) + param_1 * 4) < param_3) {
      param_3 = *(size_t *)(*(int *)(this + 0x10) + param_1 * 4);
    }
    memcpy(param_2,*(void **)(*(int *)(this + 0xc) + param_1 * 4),param_3);
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 371 行）：

```cpp
bool CMySql::get_binary(int col, void* buf, int len)
{
    if ((m_row == 0) || !is_valid_col(col) || len <= 0)
    {
    }
    else
    {
        int copyLen = m_lengths[col] < (unsigned int)len ? m_lengths[col] : len;
        memcpy(buf, m_row[col], copyLen);
        return 1;
    }
    return 0;
}
```
