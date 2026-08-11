# _ZN3App11load_scriptEv

`App::load_script()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x8049fa4` | `0xc3` | `0x804dcca` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x128,%esp
 mov    0x8(%ebp),%eax
 add    $0x404,%eax
 mov    %eax,0xc(%esp)
 movl   $"./cfg/%s.cfg",0x8(%esp)
 movl   $0x100,0x4(%esp)
 lea    -0x109(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    0x8(%ebp),%eax
 lea    0x404(%eax),%edx
 lea    -0x109(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 movl   $"[!] Server environment(%s) script loading : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <_Z8G_Scriptv>
 lea    -0x109(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6Script4loadEPc>
 mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN3App11load_scriptEv+0x9a>
+cmpb   $0x0,-0x9(%ebp)
+jne    <T> <_ZN3App11load_scriptEv+0x95>
 mov    0x8(%ebp),%eax
 add    $0x404,%eax
 mov    %eax,0x4(%esp)
 movl   $"Can't open script file : %s",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
-jmp    <T> <_ZN3App11load_scriptEv+0xc1>
+jmp    <T> <_ZN3App11load_scriptEv+0xb7>
 call   <T> <_Z8G_Scriptv>
 mov    %eax,(%esp)
 call   <T> <_ZN6Script20parse_channel_scriptEv>
 mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN3App11load_scriptEv+0xbc>
+cmpb   $0x0,-0x9(%ebp)
+jne    <T> <_ZN3App11load_scriptEv+0xb2>
 mov    $0x0,%eax
-jmp    <T> <_ZN3App11load_scriptEv+0xc1>
+jmp    <T> <_ZN3App11load_scriptEv+0xb7>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* App::load_script() */

undefined4 __thiscall App::_ZN3App11load_scriptEv(App *this)

{
  char cVar1;
  Script *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_10d [256];
  char local_d;
  
  snprintf(local_10d,0x100,"./cfg/%s.cfg",this + 0x404);
  pcVar4 = local_10d;
  printf("[!] Server environment(%s) script loading : %s\n",this + 0x404,pcVar4);
  pSVar2 = (Script *)G_Script();
  local_d = Script::load(pSVar2,local_10d);
  if (local_d == '\x01') {
    pSVar2 = (Script *)G_Script();
    cVar1 = Script::parse_channel_script(pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    printf("Can\'t open script file : %s",this + 0x404,pcVar4);
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/DNFRelayServer.cpp](source/DNFServer/GameServer/Relay/DNFRelayServer.cpp)（约第 73 行）：

```cpp
bool App::load_script()
{
    char path[0x100];
    snprintf(path, 0x100, "./cfg/%s.cfg", (char*)this + 0x404);
    printf("[!] Server environment(%s) script loading : %s\n", (char*)this + 0x404, path);
    char loaded = G_Script()->load(path);
    if (!loaded)
    {
        printf("Can't open script file : %s", (char*)this + 0x404);
        return false;
    }
    loaded = G_Script()->parse_channel_script();
    if (!loaded)
    {
        return false;
    }
    return true;
}
```
