# _ZNK10CharString7getHashEv

`CharString::getHash() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8097ce0` | `0x72` | `0x80a1bc6` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString7isEmptyEv>
 test   %al,%al
 je     <T> <_ZNK10CharString7getHashEv+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZNK10CharString7getHashEv+0x70>
+jmp    <T> <_ZNK10CharString7getHashEv+0x71>
 movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 mov    %al,-0x9(%ebp)
 addl   $0x1,-0x10(%ebp)
 cmpb   $0x0,-0x9(%ebp)
 je     <T> <_ZNK10CharString7getHashEv+0x60>
 mov    -0x14(%ebp),%eax
 mov    %eax,%edx
 shl    $0x6,%edx
 mov    -0x14(%ebp),%eax
 shl    $0x10,%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,%edx
 sub    -0x14(%ebp),%edx
 movsbl -0x9(%ebp),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,-0x14(%ebp)
 jmp    <T> <_ZNK10CharString7getHashEv+0x2b>
+nop
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZNK10CharString7getHashEv+0x6d>
+jne    <T> <_ZNK10CharString7getHashEv+0x6e>
 movl   $0x1,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: uint32 getHash(CharString * this) */

uint32 __thiscall CharString::_ZNK10CharString7getHashEv(CharString *this)

{
  char cVar1;
  bool bVar2;
  uint32 local_18;
  char *local_14;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: char * str@[???] */
  bVar2 = isEmpty(this);
  if (bVar2) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    local_14 = this->buffer_;
    while( true ) {
                    /* Unresolved local var: char c@[???] */
      cVar1 = *local_14;
      local_14 = local_14 + 1;
      if (cVar1 == '\0') break;
      local_18 = local_18 * 0x1003f + (int)cVar1;
    }
    if (local_18 == 0) {
      local_18 = 1;
    }
  }
  return local_18;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 232 行）：

```cpp
uint32 CharString::getHash() const
{
    if (isEmpty())
    {
        return 0;
    }
    uint32 value = 0;
    const char* str = buffer_;
    while (true)
    {
        char c = *str;
        str = str + 1;
        if (c == '\0')
        {
            break;
        }
        value = (value << 6) + (value << 16) - value + (int)c;
    }
    if (value == 0)
    {
        value = 1;
    }
    return value;
}
```
