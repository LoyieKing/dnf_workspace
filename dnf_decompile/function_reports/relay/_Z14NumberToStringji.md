# _Z14NumberToStringji

`NumberToString(unsigned int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a62a` | `0x4d` | `0x804e96c` | `0x4c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
+shl    $0x6,%eax
 mov    %eax,%edx
-shl    $0x6,%edx
 mov    %gs:0x0,%eax
-lea    -0x208(%eax),%eax
-lea    (%edx,%eax,1),%eax
-mov    0x8(%ebp),%edx
-mov    %edx,0x8(%esp)
+lea    -0x408(%eax),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %eax,0x8(%esp)
 movl   $"%u",0x4(%esp)
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <sprintf>
 mov    0xc(%ebp),%eax
+shl    $0x6,%eax
 mov    %eax,%edx
-shl    $0x6,%edx
 mov    %gs:0x0,%eax
-lea    -0x208(%eax),%eax
+lea    -0x408(%eax),%eax
 lea    (%edx,%eax,1),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* NumberToString(unsigned int, int) */

int NumberToString(uint param_1,int param_2)

{
  int *in_GS_OFFSET;
  
  sprintf((char *)(param_2 * 0x40 + *in_GS_OFFSET + -0x208),"%u",param_1);
  return param_2 * 0x40 + *in_GS_OFFSET + -0x208;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.cpp](source/DNFServer/GameServer/Relay/Helper.cpp)（约第 72 行）：

```cpp
char* NumberToString(unsigned int value, int index)
{
    sprintf(g_num_buf + index * 0x40, "%u", value);
    return g_num_buf + index * 0x40;
}
```
