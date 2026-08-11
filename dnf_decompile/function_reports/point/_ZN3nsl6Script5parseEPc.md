# _ZN3nsl6Script5parseEPc

`nsl::Script::parse(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80a704e` | `0x50` | `0x8084e2e` | `0x50` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script14remove_commentEPc>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script11get_key_valEPc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl6Script5parseEPc+0x49>
-movl   $&data#eae4847b(.rodata),(%esp)
+movl   $&data#4ed18361(.rodata),(%esp)
 call   <T> <puts>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool parse(Script * this, char * line) */

bool __thiscall nsl::Script::_ZN3nsl6Script5parseEPc(Script *this,char *line)

{
  bool bVar1;
  
  _ZN3nsl6Script14remove_commentEPc(this,line);
  bVar1 = get_key_val(this,line);
  if (!bVar1) {
    puts(&DAT_0815fca8);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 47 行）：

```cpp
bool Script::parse(char* line)
{
    remove_comment(line);
    get_key_val(line);
    return true;
}
```
