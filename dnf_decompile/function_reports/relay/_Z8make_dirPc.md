# _Z8make_dirPc

`make_dir(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804d185` | `0x3c` | `0x804e85a` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <opendir>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x4(%ebp)
+cmpl   $0x0,-0x4(%ebp)
 jne    <T> <_Z8make_dirPc+0x2f>
 movl   $0x1ff,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mkdir>
 jmp    <T> <_Z8make_dirPc+0x3a>
-mov    -0xc(%ebp),%eax
+mov    -0x4(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <closedir>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* make_dir(char*) */

void make_dir(char *param_1)

{
  DIR *__dirp;
  
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    mkdir(param_1,0x1ff);
  }
  else {
    closedir(__dirp);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.cpp](source/DNFServer/GameServer/Relay/Helper.cpp)（约第 91 行）：

```cpp
void make_dir(char* path)
{
    DIR* d = opendir(path);
    if (d == 0)
    {
        mkdir(path, 0x1ff);
    }
    else
    {
        closedir(d);
    }
}
```
