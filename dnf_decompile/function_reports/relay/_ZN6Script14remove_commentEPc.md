# _ZN6Script14remove_commentEPc

`Script::remove_comment(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804aa56` | `0x9d` | `0x8056aca` | `0x95` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN6Script14remove_commentEPc+0x84>
+cmpl   $0x3fd,-0x14(%ebp)
+jle    <T> <_ZN6Script14remove_commentEPc+0x1d>
+mov    $0x0,%eax
+jmp    <T> <_ZN6Script14remove_commentEPc+0x93>
 movl   $0x0,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6Script14remove_commentEPc+0x44>
+jmp    <T> <_ZN6Script14remove_commentEPc+0x52>
 mov    -0xc(%ebp),%eax
 mov    -0x14(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%edx
 mov    -0xc(%ebp),%eax
 movzbl "//"(%eax),%eax
 cmp    %al,%dl
-jne    <T> <_ZN6Script14remove_commentEPc+0x40>
+jne    <T> <_ZN6Script14remove_commentEPc+0x4e>
 addl   $0x1,-0x10(%ebp)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x1,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN6Script14remove_commentEPc+0x1f>
+jne    <T> <_ZN6Script14remove_commentEPc+0x2d>
 cmpl   $0x2,-0x10(%ebp)
-jne    <T> <_ZN6Script14remove_commentEPc+0x80>
+je     <T> <_ZN6Script14remove_commentEPc+0x69>
+addl   $0x1,-0x14(%ebp)
+jmp    <T> <_ZN6Script14remove_commentEPc+0xd>
+nop
 mov    $0x400,%eax
 sub    -0x14(%ebp),%eax
 mov    %eax,%edx
 mov    -0x14(%ebp),%eax
 add    0xc(%ebp),%eax
 mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    $0x1,%eax
-jmp    <T> <_ZN6Script14remove_commentEPc+0x9b>
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x3fd,-0x14(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN6Script14remove_commentEPc+0xf>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::remove_comment(char*) */

undefined4 __thiscall Script::_ZN6Script14remove_commentEPc(Script *this,char *param_1)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  while( true ) {
    if (0x3fd < local_18) {
      return 0;
    }
    local_14 = 0;
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (param_1[local_18 + local_10] == (&DAT_080706a4)[local_10]) {
        local_14 = local_14 + 1;
      }
    }
    if (local_14 == 2) break;
    local_18 = local_18 + 1;
  }
  memset(param_1 + local_18,0,0x400 - local_18);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 81 行）：

```cpp
bool Script::remove_comment(char* line)
{
    int i = 0;
    while (i <= 0x3fd)
    {
        int n = 0;
        int j = 0;
        while (j <= 1)
        {
            if (line[i + j] == "//"[j])
            {
                n = n + 1;
            }
            j = j + 1;
        }
        if (n == 2)
        {
            memset(line + i, 0, 0x400 - i);
            return true;
        }
        i = i + 1;
    }
    return false;
}
```
