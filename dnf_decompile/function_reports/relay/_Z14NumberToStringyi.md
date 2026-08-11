# _Z14NumberToStringyi

`NumberToString(unsigned long long, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a677` | `0x62` | `0x804e90c` | `0x60` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x8(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x4(%ebp)
 mov    0x10(%ebp),%eax
+shl    $0x6,%eax
 mov    %eax,%edx
-shl    $0x6,%edx
 mov    %gs:0x0,%eax
-lea    -0x208(%eax),%eax
-lea    (%edx,%eax,1),%eax
-mov    %eax,%ecx
-mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
+lea    -0x408(%eax),%eax
+lea    (%edx,%eax,1),%ecx
+mov    -0x8(%ebp),%eax
+mov    -0x4(%ebp),%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 movl   $"%qu",0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <sprintf>
 mov    0x10(%ebp),%eax
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

/* NumberToString(unsigned long long, int) */

int NumberToString(ulonglong param_1,int param_2)

{
  int *in_GS_OFFSET;
  
  sprintf((char *)(param_2 * 0x40 + *in_GS_OFFSET + -0x208),"%qu",(undefined4)param_1,param_1._4_4_)
  ;
  return param_2 * 0x40 + *in_GS_OFFSET + -0x208;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.cpp](source/DNFServer/GameServer/Relay/Helper.cpp)（约第 78 行）：

```cpp
char* NumberToString(unsigned long long value, int index)
{
    sprintf(g_num_buf + index * 0x40, "%qu", value);
    return g_num_buf + index * 0x40;
}
```
