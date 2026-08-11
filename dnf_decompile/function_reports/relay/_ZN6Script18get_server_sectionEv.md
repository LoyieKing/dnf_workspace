# _ZN6Script18get_server_sectionEv

`Script::get_server_section()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804adce` | `0x18c` | `0x8056dd0` | `0x184` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
-movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"max_client",0x8(%esp)
 movl   $"[server]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN6Script18get_server_sectionEv+0x70>
+jne    <T> <_ZN6Script18get_server_sectionEv+0x37>
+mov    $0x0,%eax
+jmp    <T> <_ZN6Script18get_server_sectionEv+0x17e>
 call   <T> <_Z12G_ScriptDatav>
 mov    %eax,%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"this_ip",0x8(%esp)
 movl   $"[server]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script18get_server_sectionEv+0x7a>
-jmp    <T> <_ZN6Script18get_server_sectionEv+0xca>
+jne    <T> <_ZN6Script18get_server_sectionEv+0x7b>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x186>
+jmp    <T> <_ZN6Script18get_server_sectionEv+0x17e>
 call   <T> <_Z12G_ScriptDatav>
-add    $0x8,%eax
+lea    0x8(%eax),%edx
 movl   $0x10,0x8(%esp)
-mov    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <strncpy>
 call   <T> <_Z12G_ScriptDatav>
-movb   $0x0,0x18(%eax)
+add    $0x18,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"this_tcp_port",0x8(%esp)
 movl   $"[server]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script18get_server_sectionEv+0xd4>
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x112>
+jne    <T> <_ZN6Script18get_server_sectionEv+0xd5>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x186>
+jmp    <T> <_ZN6Script18get_server_sectionEv+0x17e>
 call   <T> <_Z12G_ScriptDatav>
-mov    %eax,%ebx
+lea    0x4(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %ax,0x4(%ebx)
+mov    %ax,(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"this_udp_port",0x8(%esp)
 movl   $"[server]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script18get_server_sectionEv+0x119>
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x157>
+jne    <T> <_ZN6Script18get_server_sectionEv+0x118>
 mov    $0x0,%eax
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x186>
+jmp    <T> <_ZN6Script18get_server_sectionEv+0x17e>
 call   <T> <_Z12G_ScriptDatav>
-mov    %eax,%ebx
+lea    0x6(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %ax,0x6(%ebx)
+mov    %ax,(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $"this_pvp_channel",0x8(%esp)
 movl   $"[server]",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13ScriptRawData8get_dataEPcS0_>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6Script18get_server_sectionEv+0x15e>
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x176>
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x186>
+jne    <T> <_ZN6Script18get_server_sectionEv+0x163>
 call   <T> <_Z12G_ScriptDatav>
-mov    %eax,%ebx
+add    $0x1a,%eax
+movw   $0x0,(%eax)
+jmp    <T> <_ZN6Script18get_server_sectionEv+0x179>
+call   <T> <_Z12G_ScriptDatav>
+lea    0x1a(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %ax,0x1a(%ebx)
-jmp    <T> <_ZN6Script18get_server_sectionEv+0x181>
-call   <T> <_Z12G_ScriptDatav>
-movw   $0x0,0x1a(%eax)
+mov    %ax,(%ebx)
 mov    $0x1,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::get_server_section() */

undefined4 __thiscall Script::_ZN6Script18get_server_sectionEv(Script *this)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[server]","max_client");
  if (pcVar1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    piVar2 = (int *)G_ScriptData();
    iVar3 = atoi(pcVar1);
    *piVar2 = iVar3;
    pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[server]","this_ip");
    if (pcVar1 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar3 = G_ScriptData();
      strncpy((char *)(iVar3 + 8),pcVar1,0x10);
      iVar3 = G_ScriptData();
      *(undefined1 *)(iVar3 + 0x18) = 0;
      pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[server]","this_tcp_port");
      if (pcVar1 == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        iVar3 = G_ScriptData();
        iVar5 = atoi(pcVar1);
        *(short *)(iVar3 + 4) = (short)iVar5;
        pcVar1 = (char *)ScriptRawData::get_data(*(ScriptRawData **)this,"[server]","this_udp_port")
        ;
        if (pcVar1 == (char *)0x0) {
          uVar4 = 0;
        }
        else {
          iVar3 = G_ScriptData();
          iVar5 = atoi(pcVar1);
          *(short *)(iVar3 + 6) = (short)iVar5;
          pcVar1 = (char *)ScriptRawData::get_data
                                     (*(ScriptRawData **)this,"[server]","this_pvp_channel");
          if (pcVar1 == (char *)0x0) {
            iVar3 = G_ScriptData();
            *(undefined2 *)(iVar3 + 0x1a) = 0;
          }
          else {
            iVar3 = G_ScriptData();
            iVar5 = atoi(pcVar1);
            *(short *)(iVar3 + 0x1a) = (short)iVar5;
          }
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 149 行）：

```cpp
bool Script::get_server_section()
{
    char* val = NULL;
    val = data->get_data("[server]", "max_client");
    if (val != 0)
    {
        G_ScriptData()->max_client = atoi(val);
    }
    else
    {
        return false;
    }
    val = data->get_data("[server]", "this_ip");
    if (val != 0)
    {
        strncpy(G_ScriptData()->ip, val, 0x11);
    }
    else
    {
        return false;
    }
    val = data->get_data("[server]", "this_tcp_port");
    if (val != 0)
    {
        G_ScriptData()->tcp_port = (unsigned short)atoi(val);
    }
    else
    {
        return false;
    }
    val = data->get_data("[server]", "this_udp_port");
    if (val != 0)
    {
        G_ScriptData()->udp_port = (unsigned short)atoi(val);
    }
    else
    {
        return false;
    }
    return true;
}
```
