# _ZN6Script20parse_channel_scriptEv

`Script::parse_channel_script()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804ad24` | `0x72` | `0x805708c` | `0x6c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script18get_server_sectionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%eax
+sete   %al
 test   %al,%al
-je     <T> <_ZN6Script20parse_channel_scriptEv+0x32>
-movl   $"Script interpret error in Channel-[Server]",(%esp)
-call   <T> <puts>
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script20parse_channel_scriptEv+0x70>
+je     <T> <_ZN6Script20parse_channel_scriptEv+0x59>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script20get_aradauth_sectionEv>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN6Script20parse_channel_scriptEv+0x60>
+je     <T> <_ZN6Script20parse_channel_scriptEv+0x47>
 movl   $"[!] Scirpt Doesn't use in [aradauth] - Not Use Monitor Auth",(%esp)
 call   <T> <puts>
 call   <T> <_Z12G_ScriptDatav>
-movb   $0x0,0x34(%eax)
+add    $0x34,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script18destroy_raw_scriptEv>
 mov    $0x1,%eax
+jmp    <T> <_ZN6Script20parse_channel_scriptEv+0x6a>
+movl   $"Script interpret error in Channel-[Server]",(%esp)
+call   <T> <puts>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::parse_channel_script() */

undefined4 __thiscall Script::_ZN6Script20parse_channel_scriptEv(Script *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = _ZN6Script18get_server_sectionEv(this);
  if (cVar1 == '\x01') {
    cVar1 = _ZN6Script20get_aradauth_sectionEv(this);
    if (cVar1 != '\x01') {
      puts("[!] Scirpt Doesn\'t use in [aradauth] - Not Use Monitor Auth");
      iVar3 = G_ScriptData();
      *(undefined1 *)(iVar3 + 0x34) = 0;
    }
    _ZN6Script18destroy_raw_scriptEv(this);
    uVar2 = 1;
  }
  else {
    puts("Script interpret error in Channel-[Server]");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 233 行）：

```cpp
bool Script::parse_channel_script()
{
    bool ret = get_server_section();
    if (ret == false)
    {
        puts("Script interpret error in Channel-[Server]");
        return false;
    }
    ret = get_db_section();
    if (ret == false)
    {
        puts("Script interpret error in Channel-[DB]");
        return false;
    }
    destroy_raw_script();
    return true;
}
```
