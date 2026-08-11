# _ZN6Script20get_aradauth_sectionEv

`Script::get_aradauth_section()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804af5a` | `0x140` | `0x8056fac` | `0x13d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"udp_port_to_monitor",0x8(%esp)
 movl   $"[aradauth]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN6Script20get_aradauth_sectionEv+0x72>
+jne    <T> <_ZN6Script20get_aradauth_sectionEv+0x3e>
+mov    $0x0,%eax
+jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x137>
 call   <T> <_Z12G_ScriptDatav>
 mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %ax,0x1c(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"monitor_ip",0x8(%esp)
 movl   $"[aradauth]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script20get_aradauth_sectionEv+0x7c>
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0xcc>
+jne    <T> <_ZN6Script20get_aradauth_sectionEv+0x84>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x13a>
+jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x137>
 call   <T> <_Z12G_ScriptDatav>
 add    $0x1e,%eax
 movl   $0x10,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 call   <T> <_Z12G_ScriptDatav>
 movb   $0x0,0x2e(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"monitor_port",0x8(%esp)
 movl   $"[aradauth]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script20get_aradauth_sectionEv+0xd3>
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x111>
+jne    <T> <_ZN6Script20get_aradauth_sectionEv+0xd9>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x13a>
+jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x137>
 call   <T> <_Z12G_ScriptDatav>
 mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %ax,0x30(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"relay_index",0x8(%esp)
 movl   $"[aradauth]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script20get_aradauth_sectionEv+0x118>
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x135>
+jne    <T> <_ZN6Script20get_aradauth_sectionEv+0x11c>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x13a>
+jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x137>
 call   <T> <_Z12G_ScriptDatav>
 mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %ax,0x32(%ebx)
 mov    $0x1,%eax
-jmp    <T> <_ZN6Script20get_aradauth_sectionEv+0x13a>
-mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::get_aradauth_section() */

undefined4 __thiscall Script::_ZN6Script20get_aradauth_sectionEv(Script *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)ScriptRawData::get_data
                             (*(ScriptRawData **)this,"[aradauth]","udp_port_to_monitor");
  if (pcVar1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar2 = G_ScriptData();
    iVar3 = atoi(pcVar1);
    *(short *)(iVar2 + 0x1c) = (short)iVar3;
    pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[aradauth]","monitor_ip");
    if (pcVar1 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar2 = G_ScriptData();
      strncpy((char *)(iVar2 + 0x1e),pcVar1,0x10);
      iVar2 = G_ScriptData();
      *(undefined1 *)(iVar2 + 0x2e) = 0;
      pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[aradauth]","monitor_port");
      if (pcVar1 == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        iVar2 = G_ScriptData();
        iVar3 = atoi(pcVar1);
        *(short *)(iVar2 + 0x30) = (short)iVar3;
        pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[aradauth]","relay_index")
        ;
        if (pcVar1 == (char *)0x0) {
          uVar4 = 0;
        }
        else {
          iVar2 = G_ScriptData();
          iVar3 = atoi(pcVar1);
          *(short *)(iVar2 + 0x32) = (short)iVar3;
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Script.cpp](source/DNFServer/GameServer/Relay/Script.cpp)（约第 204 行）：

```cpp
bool Script::get_aradauth_section()
{
    // 语义还原（2026-08-11 用户规矩：不允许硬套 asm）。
    char* v = 0;
    v = data->get_data("[aradauth]", "udp_port_to_monitor");
    if (v == 0)
    {
        return 0;
    }
    G_ScriptData()->mReservedB = (unsigned short)atoi(v);
    v = data->get_data("[aradauth]", "monitor_ip");
    if (v == 0)
    {
        return 0;
    }
    strncpy(G_ScriptData()->mServerIpB, v, 0x10);
    G_ScriptData()->mServerIpB[16] = 0;
    v = data->get_data("[aradauth]", "monitor_port");
    if (v == 0)
    {
        return 0;
    }
    G_ScriptData()->mReservedC = (unsigned short)atoi(v);
    v = data->get_data("[aradauth]", "relay_index");
    if (v == 0)
    {
        return 0;
    }
    G_ScriptData()->mReservedD = (unsigned short)atoi(v);
    return 1;
}
```
