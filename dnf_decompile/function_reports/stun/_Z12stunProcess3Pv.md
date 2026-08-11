# _Z12stunProcess3Pv

`stunProcess3(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x401674` | `0xad` | `0x402582` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %rbp
 mov    %rsp,%rbp
 sub    $0x610,%rsp
 mov    %rdi,-0x608(%rbp)
-mov    0x202920(%rip),%esi        # 603fac <socketPortResctric_>
+mov    0x3e62(%rip),%esi        # 4063fc <socketPortResctric_>
 mov    $"Create Thread3 MTU_CHECKER Socket: %d\n",%edi
 mov    $0x0,%eax
 call   <T> <printf>
 jmp    <T> <_Z12stunProcess3Pv+0x29>
 movl   $0x5dc,-0x4(%rbp)
 lea    -0x10(%rbp),%rax
 movq   $0x0,(%rax)
 lea    -0x600(%rbp),%rax
 mov    %rax,%rdi
 mov    $0x5dc,%edx
 mov    $0x0,%esi
 call   <T> <memset>
-mov    0x2028de(%rip),%edi        # 603fac <socketPortResctric_>
+mov    0x3e20(%rip),%edi        # 4063fc <socketPortResctric_>
 lea    -0x10(%rbp),%rdx
 lea    -0x10(%rbp),%rax
 lea    0x4(%rax),%rcx
 lea    -0x4(%rbp),%rax
 lea    -0x600(%rbp),%rsi
 mov    %rdx,%r8
 mov    %rax,%rdx
 call   <T> <_Z10getMessageiPcPiPjPt>
 test   %al,%al
 je     <T> <_Z12stunProcess3Pv+0x29>
 mov    -0x4(%rbp),%eax
 mov    %ax,-0x20(%rbp)
 movzwl -0x10(%rbp),%eax
 movzwl %ax,%eax
 mov    -0xc(%rbp),%ecx
 lea    -0x20(%rbp),%rsi
-mov    0x20289d(%rip),%edi        # 603fac <socketPortResctric_>
+mov    0x3ddf(%rip),%edi        # 4063fc <socketPortResctric_>
 mov    %eax,%r8d
 mov    $0x2,%edx
 call   <T> <_Z11sendMessageiPcijt>
 jmp    <T> <_Z12stunProcess3Pv+0x29>
```
## 2. Ghidra 反编译 C

```c

void * stunProcess3(void *param_1)

{
  bool bVar1;
  char local_608 [1504];
  undefined2 local_28 [8];
  ushort local_18 [2];
  uint auStack_14 [2];
  int local_c;
  
                    /* Unresolved local var: char[1500] recv_buf@[???]
                       Unresolved local var: int recv_byte@[???]
                       Unresolved local var: anon_struct.dwarf_5c50 source@[???] */
  printf("Create Thread3 MTU_CHECKER Socket: %d\n",(ulong)(uint)::::socketPortResctric_);
  do {
    do {
      local_c = 0x5dc;
      _local_18 = 0;
      memset(local_608,0,0x5dc);
      bVar1 = getMessage(::::socketPortResctric_,local_608,&local_c,(uint *)(local_18 + 2),local_18)
      ;
    } while (!bVar1);
                    /* Unresolved local var: MSG_MTU_ECHO pck@[???] */
    local_28[0] = (undefined2)local_c;
    sendMessage(::::socketPortResctric_,(char *)local_28,2,auStack_14[0],local_18[0]);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/stun.cpp](source/DNFServer/StunServer/stun_server/stun.cpp)（约第 54 行）：

```cpp
void* stunProcess3(void* param)
{
    char recv_buf[1500];
    int recv_byte;
    Address source;

    printf("Create Thread3 MTU_CHECKER Socket: %d\n", socketPortResctric_);

    while (true)
    {
        recv_byte = 1500;
        memset(&source, 0, sizeof(source));
        memset(recv_buf, 0, 1500);

        if (getMessage(socketPortResctric_, recv_buf, &recv_byte, &source.ip, &source.port))
        {
            MSG_MTU_ECHO pck;
            pck.recv_len = recv_byte;
            sendMessage(socketPortResctric_, (char*)&pck, 2, source.ip, source.port);
        }
    }
}
```
