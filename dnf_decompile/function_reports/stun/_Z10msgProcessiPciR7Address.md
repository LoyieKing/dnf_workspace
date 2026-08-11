# _Z10msgProcessiPciR7Address

`msgProcess(int, char*, int, Address&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x401584` | `0xef` | `0x402492` | `0xef` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,67 @@
 push   %rbp
 mov    %rsp,%rbp
 sub    $0x50,%rsp
 mov    %edi,-0x24(%rbp)
 mov    %rsi,-0x30(%rbp)
 mov    %edx,-0x34(%rbp)
 mov    %rcx,-0x40(%rbp)
 mov    -0x30(%rbp),%rax
 movzbl (%rax),%eax
 mov    %al,-0x45(%rbp)
 cmpb   $0x1,-0x45(%rbp)
 je     <T> <_Z10msgProcessiPciR7Address+0x3b>
 cmpb   $0x5,-0x45(%rbp)
 je     <T> <_Z10msgProcessiPciR7Address+0x89>
 cmpb   $0x0,-0x45(%rbp)
 je     <T> <_Z10msgProcessiPciR7Address+0xe3>
 jmp    <T> <_Z10msgProcessiPciR7Address+0xda>
 movb   $0x2,-0x10(%rbp)
 mov    -0x40(%rbp),%rax
 mov    0x4(%rax),%eax
 mov    %eax,-0xf(%rbp)
 mov    -0x40(%rbp),%rax
 movzwl (%rax),%eax
 mov    %ax,-0xb(%rbp)
 mov    -0x40(%rbp),%rax
 movzwl (%rax),%eax
 movzwl %ax,%edx
 mov    -0x40(%rbp),%rax
 mov    0x4(%rax),%ecx
 lea    -0x10(%rbp),%rsi
 mov    -0x24(%rbp),%edi
 mov    %edx,%r8d
 mov    $0x7,%edx
 call   <T> <_Z11sendMessageiPcijt>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_Z10msgProcessiPciR7Address+0xe3>
 movl   $0x0,-0x44(%rbp)
 jmp    <T> <_Z10msgProcessiPciR7Address+0xea>
 movb   $0x2,-0x20(%rbp)
 mov    -0x40(%rbp),%rax
 mov    0x4(%rax),%eax
 mov    %eax,-0x1f(%rbp)
 mov    -0x40(%rbp),%rax
 movzwl (%rax),%eax
 mov    %ax,-0x1b(%rbp)
 mov    -0x40(%rbp),%rax
 movzwl (%rax),%eax
 movzwl %ax,%edx
 mov    -0x40(%rbp),%rax
 mov    0x4(%rax),%ecx
 lea    -0x20(%rbp),%rsi
-mov    0x20296b(%rip),%edi        # 603fac <socketPortResctric_>
+mov    0x3ead(%rip),%edi        # 4063fc <socketPortResctric_>
 mov    %edx,%r8d
 mov    $0x7,%edx
 call   <T> <_Z11sendMessageiPcijt>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_Z10msgProcessiPciR7Address+0xe3>
 movl   $0x0,-0x44(%rbp)
 jmp    <T> <_Z10msgProcessiPciR7Address+0xea>
 movl   $0x0,-0x44(%rbp)
 jmp    <T> <_Z10msgProcessiPciR7Address+0xea>
 movl   $0x1,-0x44(%rbp)
 mov    -0x44(%rbp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

bool msgProcess(int socket,char *recv,int len,anon_struct_dwarf_5c50 *info)

{
  char cVar1;
  bool bVar2;
  char local_28;
  uint local_27;
  ushort local_23;
  char local_18;
  uint local_17;
  ushort local_13;
  
  cVar1 = *recv;
  if (cVar1 == '\x01') {
                    /* Unresolved local var: MSG_BINDING_RESPONSE pk_send@[???] */
    local_18 = '\x02';
    local_17 = info->ip;
    local_13 = info->port;
    bVar2 = sendMessage(socket,&local_18,7,info->ip,info->port);
    if (!bVar2) {
      return false;
    }
  }
  else if (cVar1 == '\x05') {
                    /* Unresolved local var: MSG_BINDING_RESPONSE pk_send@[???] */
    local_28 = '\x02';
    local_27 = info->ip;
    local_23 = info->port;
    bVar2 = sendMessage(::::socketPortResctric_,&local_28,7,info->ip,info->port);
    if (!bVar2) {
      return false;
    }
  }
  else if (cVar1 != '\0') {
    return false;
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/stun.cpp](source/DNFServer/StunServer/stun_server/stun.cpp)（约第 77 行）：

```cpp
bool msgProcess(int socket, char* recv, int len, Address& info)
{
    switch (recv[0])
    {
    case 1:
        {
            MSG_BINDING_RESPONSE pk_send;
            pk_send.type = 2;
            pk_send.ip = info.ip;
            pk_send.port = info.port;
            if (!sendMessage(socket, (char*)&pk_send, 7, info.ip, info.port))
            {
                return false;
            }
        }
        break;
    case 5:
        {
            MSG_BINDING_RESPONSE pk_send;
            pk_send.type = 2;
            pk_send.ip = info.ip;
            pk_send.port = info.port;
            if (!sendMessage(socketPortResctric_, (char*)&pk_send, 7, info.ip, info.port))
            {
                return false;
            }
        }
        break;
    case 0:
        break;
    default:
        return false;
    }
    return true;
}
```
