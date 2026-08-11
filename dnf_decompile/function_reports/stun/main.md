# main

`main`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x401f64` | `0x1f8` | `0x403754` | `0x1f8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,111 +1,111 @@
 push   %rbp
 mov    %rsp,%rbp
 sub    $0x30,%rsp
 mov    %edi,-0x14(%rbp)
 mov    %rsi,-0x20(%rbp)
 mov    $&data#07155045(.rodata),%edi
 call   <T> <puts>
 mov    $"**             STUN Server v1.4.0.0                **",%edi
 call   <T> <puts>
 mov    $"**                                                 **",%edi
 call   <T> <puts>
 mov    $"**                                                 **",%edi
 call   <T> <puts>
 mov    $"**                            CopyRight 2010~2015. **",%edi
 call   <T> <puts>
 mov    $"**                       Young-san, Kim in Neople. **",%edi
 call   <T> <puts>
 mov    $"*****************************************************",%edi
 call   <T> <puts>
 mov    $"./pid/",%edi
 call   <T> <_Z8make_dirPKc>
 mov    $"./log/",%edi
 call   <T> <_Z8make_dirPKc>
 call   <T> <_Z14regist_signalsv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <main+0x8b>
 mov    $"Fail to Regist Signals, Server Process is Terminated.",%edi
 call   <T> <puts>
 movl   $0x0,-0x24(%rbp)
 jmp    <T> <main+0x1f3>
 mov    -0x20(%rbp),%rsi
 mov    -0x14(%rbp),%edi
 call   <T> <_Z10check_argviPPc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <main+0xaa>
 movl   $0x0,-0x24(%rbp)
 jmp    <T> <main+0x1f3>
 mov    $0x908,%edx
 mov    $0x907,%esi
 mov    $&data#5e82eb58(.rodata),%edi
 mov    $0x0,%eax
 call   <T> <printf>
 mov    $0x0,%esi
 mov    $0x907,%edi
 call   <T> <_Z8openPorttj>
-mov    %eax,0x201f68(%rip)        # 603fa4 <socketRealIp_>
-mov    0x201f62(%rip),%eax        # 603fa4 <socketRealIp_>
+mov    %eax,0x2bc8(%rip)        # 4063f4 <socketRealIp_>
+mov    0x2bc2(%rip),%eax        # 4063f4 <socketRealIp_>
 cmp    $0xffffffff,%eax
 jne    <T> <main+0x103>
 mov    $0x907,%esi
 mov    $"[ERROR] Fail to Create Socket PORT(%d)\n",%edi
 mov    $0x0,%eax
 call   <T> <printf>
 movl   $0x0,-0x24(%rbp)
 jmp    <T> <main+0x1f3>
 mov    $0x0,%esi
 mov    $0x908,%edi
 call   <T> <_Z8openPorttj>
-mov    %eax,0x201f2c(%rip)        # 603fa8 <socketNat_>
-mov    0x201f26(%rip),%eax        # 603fa8 <socketNat_>
+mov    %eax,0x2b8c(%rip)        # 4063f8 <socketNat_>
+mov    0x2b86(%rip),%eax        # 4063f8 <socketNat_>
 cmp    $0xffffffff,%eax
 jne    <T> <main+0x143>
 mov    $0x908,%esi
 mov    $"[ERROR] Fail to Create Socket PORT(%d)\n",%edi
 mov    $0x0,%eax
 call   <T> <printf>
 movl   $0x0,-0x24(%rbp)
 jmp    <T> <main+0x1f3>
 mov    $0x0,%esi
 mov    $0x909,%edi
 call   <T> <_Z8openPorttj>
-mov    %eax,0x201ef0(%rip)        # 603fac <socketPortResctric_>
-mov    0x201eea(%rip),%eax        # 603fac <socketPortResctric_>
+mov    %eax,0x2b50(%rip)        # 4063fc <socketPortResctric_>
+mov    0x2b4a(%rip),%eax        # 4063fc <socketPortResctric_>
 cmp    $0xffffffff,%eax
 jne    <T> <main+0x180>
 mov    $0x909,%esi
 mov    $"[ERROR] Fail to Create Socket PORT(%d)\n",%edi
 mov    $0x0,%eax
 call   <T> <printf>
 movl   $0x0,-0x24(%rbp)
 jmp    <T> <main+0x1f3>
 mov    $0x0,%esi
 mov    $"[[[[[ Start Udp Draft ]]]]]] v1.3.6.0",%edi
 call   <T> <_Z9write_logPKci>
 movl   $0x0,-0x4(%rbp)
 lea    -0x10(%rbp),%rdi
 mov    $0x0,%ecx
 mov    $&_Z12stunProcess1Pv,%edx
 mov    $0x0,%esi
 call   <T> <pthread_create>
 mov    %eax,-0x4(%rbp)
 lea    -0x10(%rbp),%rdi
 mov    $0x0,%ecx
 mov    $&_Z12stunProcess2Pv,%edx
 mov    $0x0,%esi
 call   <T> <pthread_create>
 mov    %eax,-0x4(%rbp)
 lea    -0x10(%rbp),%rdi
 mov    $0x0,%ecx
 mov    $&_Z12stunProcess3Pv,%edx
 mov    $0x0,%esi
 call   <T> <pthread_create>
 mov    %eax,-0x4(%rbp)
 mov    $0x186a0,%edi
 call   <T> <usleep>
 jmp    <T> <main+0x1e7>
 mov    -0x24(%rbp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

int main(int argc,char **argv)

{
  bool bVar1;
  pthread_t local_18;
  int local_c;
  
                    /* Unresolved local var: pthread_t thread_id@[???]
                       Unresolved local var: int ret@[???] */
  puts("\n*****************************************************");
  puts("**             STUN Server v1.4.0.0                **");
  puts("**                                                 **");
  puts("**                                                 **");
  puts("**                            CopyRight 2010~2015. **");
  puts("**                       Young-san, Kim in Neople. **");
  puts("*****************************************************");
  make_dir("./pid/");
  make_dir("./log/");
  bVar1 = regist_signals();
  if (bVar1) {
    bVar1 = check_argv(argc,argv);
    if (bVar1) {
      printf("\nRealIP Port: %d, NAT Port: %d\n",0x907,0x908);
      ::::socketRealIp_ = openPort(0x907,0);
      if (::::socketRealIp_ == -1) {
        printf("[ERROR] Fail to Create Socket PORT(%d)\n",0x907);
      }
      else {
        ::::socketNat_ = openPort(0x908,0);
        if (::::socketNat_ == -1) {
          printf("[ERROR] Fail to Create Socket PORT(%d)\n",0x908);
        }
        else {
          ::::socketPortResctric_ = openPort(0x909,0);
          if (::::socketPortResctric_ != -1) {
            write_log("[[[[[ Start Udp Draft ]]]]]] v1.3.6.0",0);
            local_c = 0;
            local_c = pthread_create(&local_18,(pthread_attr_t *)0x0,stunProcess1,(void *)0x0);
            local_c = pthread_create(&local_18,(pthread_attr_t *)0x0,stunProcess2,(void *)0x0);
            local_c = pthread_create(&local_18,(pthread_attr_t *)0x0,stunProcess3,(void *)0x0);
            do {
              usleep(100000);
            } while( true );
          }
          printf("[ERROR] Fail to Create Socket PORT(%d)\n",0x909);
        }
      }
    }
  }
  else {
    puts("Fail to Regist Signals, Server Process is Terminated.");
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/server.cpp](source/DNFServer/StunServer/stun_server/server.cpp)（约第 15 行）：

```cpp
int main(int argc, char* argv[])
{
    pthread_t thread_id;
    int ret;

    puts("\n*****************************************************");
    puts("**             STUN Server v1.4.0.0                **");
    puts("**                                                 **");
    puts("**                                                 **");
    puts("**                            CopyRight 2010~2015. **");
    puts("**                       Young-san, Kim in Neople. **");
    puts("*****************************************************");

    make_dir("./pid/");
    make_dir("./log/");

    if (!regist_signals())
    {
        puts("Fail to Regist Signals, Server Process is Terminated.");
        return 0;
    }
    else if (!check_argv(argc, argv))
    {
        return 0;
    }
    else
    {
        printf("\nRealIP Port: %d, NAT Port: %d\n", 0x907, 0x908);

        socketRealIp_ = openPort(0x907, 0);
        if (socketRealIp_ == -1)
        {
            printf("[ERROR] Fail to Create Socket PORT(%d)\n", 0x907);
            return 0;
        }
        socketNat_ = openPort(0x908, 0);
        if (socketNat_ == -1)
        {
            printf("[ERROR] Fail to Create Socket PORT(%d)\n", 0x908);
            return 0;
        }
        socketPortResctric_ = openPort(0x909, 0);
        if (socketPortResctric_ == -1)
        {
            printf("[ERROR] Fail to Create Socket PORT(%d)\n", 0x909);
            return 0;
        }
        write_log("[[[[[ Start Udp Draft ]]]]]] v1.3.6.0", 0);

        ret = 0;
        ret = pthread_create(&thread_id, NULL, stunProcess1, NULL);
        ret = pthread_create(&thread_id, NULL, stunProcess2, NULL);
        ret = pthread_create(&thread_id, NULL, stunProcess3, NULL);

        while (true)
        {
            usleep(100000);
        }
    }
    return 0;
}
```
