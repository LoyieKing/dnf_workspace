# _ZN17CConfigFileReader4TrimEPc

`CConfigFileReader::Trim(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804ce82` | `0x105` | `0x804d828` | `0xf6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,88 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x428,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x51>
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    (%edx,%eax,1),%eax
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x4b>
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x10(%ebp),%eax
+add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x20,%al
-jg     <T> <_ZN17CConfigFileReader4TrimEPc+0x60>
-mov    -0x14(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    (%edx,%eax,1),%eax
+jg     <T> <_ZN17CConfigFileReader4TrimEPc+0x5a>
+mov    -0x10(%ebp),%eax
+add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-js     <T> <_ZN17CConfigFileReader4TrimEPc+0x63>
-addl   $0x1,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+js     <T> <_ZN17CConfigFileReader4TrimEPc+0x5d>
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 cmp    -0x18(%ebp),%eax
 setb   %al
 test   %al,%al
 jne    <T> <_ZN17CConfigFileReader4TrimEPc+0x27>
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x64>
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x5e>
 nop
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x64>
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x5e>
 nop
 mov    -0x18(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x18(%ebp),%eax
 sub    $0x1,%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x9d>
-mov    -0x14(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    (%edx,%eax,1),%eax
+mov    %eax,-0x10(%ebp)
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0x91>
+mov    -0x10(%ebp),%eax
+add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x20,%al
-jg     <T> <_ZN17CConfigFileReader4TrimEPc+0xac>
-mov    -0x14(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    (%edx,%eax,1),%eax
+jg     <T> <_ZN17CConfigFileReader4TrimEPc+0xa0>
+mov    -0x10(%ebp),%eax
+add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-js     <T> <_ZN17CConfigFileReader4TrimEPc+0xaf>
+js     <T> <_ZN17CConfigFileReader4TrimEPc+0xa3>
 subl   $0x1,-0xc(%ebp)
-subl   $0x1,-0x14(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-seta   %al
+subl   $0x1,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
+cmp    -0xc(%ebp),%eax
+setb   %al
 test   %al,%al
-jne    <T> <_ZN17CConfigFileReader4TrimEPc+0x75>
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0xb0>
+jne    <T> <_ZN17CConfigFileReader4TrimEPc+0x6f>
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0xa4>
 nop
-jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0xb0>
+jmp    <T> <_ZN17CConfigFileReader4TrimEPc+0xa4>
 nop
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 movb   $0x0,-0x418(%ebp,%eax,1)
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    -0xc(%ebp),%edx
 sub    %eax,%edx
-mov    -0x10(%ebp),%eax
-mov    0xc(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+mov    -0x14(%ebp),%eax
+add    0xc(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x418(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x418(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcpy>
 mov    0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CConfigFileReader::Trim(char*) */

char * __thiscall
CConfigFileReader::_ZN17CConfigFileReader4TrimEPc(CConfigFileReader *this,char *param_1)

{
  size_t sVar1;
  char local_41c [1024];
  size_t local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_1c = strlen(param_1);
  local_14 = 0;
  for (local_18 = 0;
      ((local_10 = local_1c, sVar1 = local_1c, local_18 < local_1c &&
       (local_14 = local_18, param_1[local_18] < '!')) && (-1 < param_1[local_18]));
      local_18 = local_18 + 1) {
  }
  while (((local_18 = sVar1 - 1, local_14 < local_10 && (param_1[local_18] < '!')) &&
         (-1 < param_1[local_18]))) {
    local_10 = local_10 - 1;
    sVar1 = local_18;
  }
  local_41c[local_10 - local_14] = '\0';
  memcpy(local_41c,param_1 + local_14,local_10 - local_14);
  strcpy(param_1,local_41c);
  return param_1;
}
```

## 3. 我们的源码函数

定义于 [source/Community/ConfigFileReader.cpp](source/Community/ConfigFileReader.cpp)（约第 137 行）：

```cpp
char *CConfigFileReader::Trim(char *str) {
    size_t len = strlen(str);
    // 原始：while + break 结构（end = i 在循环顶；>0x20 或 <0 停止；setb/seta 无符号物化）
    int end = 0;
    int i = 0;
    while (i < len) {
        end = i;
        if (str[i] > ' ') {
            break;
        }
        if (str[i] < 0) {
            break;
        }
        i++;
    }
    size_t end2 = len;  // 原始：无符号比较（seta）
    i = len - 1;
    while (end2 > end) {
        if (str[i] > ' ') {
            break;
        }
        if (str[i] < 0) {
            break;
        }
        end2--;
        i--;
    }
    char tmp_buffer[1024];
    tmp_buffer[end2 - end] = '\0';
    memcpy(tmp_buffer, str + end, end2 - end);
    strcpy(str, tmp_buffer);
    return str;
}
```
