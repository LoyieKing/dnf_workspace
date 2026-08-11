# _Z12stunProcess1Pv

`stunProcess1(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x4017a4` | `0x81` | `0x4026b2` | `0x81` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %rbp
 mov    %rsp,%rbp
 sub    $0x30,%rsp
 mov    %rdi,-0x28(%rbp)
-mov    0x2027ee(%rip),%esi        # 603fa4 <socketRealIp_>
+mov    0x3d30(%rip),%esi        # 4063f4 <socketRealIp_>
 mov    $"Create Thread1 RealIP Socket: %d\n",%edi
 mov    $0x0,%eax
 call   <T> <printf>
 jmp    <T> <_Z12stunProcess1Pv+0x23>
 movl   $0x8,-0x14(%rbp)
 lea    -0x20(%rbp),%rax
 movq   $0x0,(%rax)
 lea    -0x10(%rbp),%rax
 movq   $0x0,(%rax)
-mov    0x2027ba(%rip),%edi        # 603fa4 <socketRealIp_>
+mov    0x3cfc(%rip),%edi        # 4063f4 <socketRealIp_>
 lea    -0x20(%rbp),%rdx
 lea    -0x20(%rbp),%rax
 lea    0x4(%rax),%rcx
 lea    -0x14(%rbp),%rax
 lea    -0x10(%rbp),%rsi
 mov    %rdx,%r8
 mov    %rax,%rdx
 call   <T> <_Z10getMessageiPcPiPjPt>
 test   %al,%al
 je     <T> <_Z12stunProcess1Pv+0x23>
 mov    -0x14(%rbp),%edx
-mov    0x20278e(%rip),%edi        # 603fa4 <socketRealIp_>
+mov    0x3cd0(%rip),%edi        # 4063f4 <socketRealIp_>
 lea    -0x20(%rbp),%rcx
 lea    -0x10(%rbp),%rsi
 call   <T> <_Z10msgProcessiPciR7Address>
 jmp    <T> <_Z12stunProcess1Pv+0x23>
```
## 2. Ghidra 反编译 C

```c

void * stunProcess1(void *param_1)

{
  bool bVar1;
  anon_struct_dwarf_5c50 local_28;
  int local_1c;
  char local_18 [16];
  
                    /* Unresolved local var: char[8] recv_buf@[???]
                       Unresolved local var: int recv_byte@[???]
                       Unresolved local var: anon_struct.dwarf_5c50 source@[???] */
  printf("Create Thread1 RealIP Socket: %d\n",(ulong)(uint)::::socketRealIp_);
  do {
    do {
      local_1c = 8;
      local_28.port = 0;
      local_28._2_2_ = 0;
      local_28.ip = 0;
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      local_18[6] = '\0';
      local_18[7] = '\0';
      bVar1 = getMessage(::::socketRealIp_,local_18,&local_1c,&local_28.ip,&local_28.port);
    } while (!bVar1);
    msgProcess(::::socketRealIp_,local_18,local_1c,&local_28);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/stun.cpp](source/DNFServer/StunServer/stun_server/stun.cpp)（约第 12 行）：

```cpp
void* stunProcess1(void* param)
{
    char recv_buf[8];
    int recv_byte;
    Address source;

    printf("Create Thread1 RealIP Socket: %d\n", socketRealIp_);

    while (true)
    {
        recv_byte = 8;
        memset(&source, 0, sizeof(source));
        memset(recv_buf, 0, sizeof(recv_buf));

        if (getMessage(socketRealIp_, recv_buf, &recv_byte, &source.ip, &source.port))
        {
            msgProcess(socketRealIp_, recv_buf, recv_byte, source);
        }
    }
}
```
