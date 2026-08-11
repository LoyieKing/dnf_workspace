# _Z11sendMessageiPcijt

`sendMessage(int, char*, int, unsigned int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x40189a` | `0x225` | `0x4027a6` | `0x225` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,142 +1,142 @@
 push   %rbp
 mov    %rsp,%rbp
 push   %rbx
 sub    $0x58,%rsp
 mov    %edi,-0x34(%rbp)
 mov    %rsi,-0x40(%rbp)
 mov    %edx,-0x44(%rbp)
 mov    %ecx,-0x48(%rbp)
 mov    %r8d,%eax
 mov    %ax,-0x4c(%rbp)
 cmpl   $0xffffffff,-0x34(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x4f>
 mov    -0x34(%rbp),%esi
 mov    $"sendMessage() Fail, fd = INVALID_SOCKET",%edi
 call   <T> <_Z9write_logPKci>
 cmpl   $0xffffffff,-0x34(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x4f>
 mov    $"bool sendMessage(Socket, char*, int, unsigned int, short unsigned int)",%ecx
-mov    $0xa2,%edx
-mov    $"udp.cpp",%esi
+mov    $0x75,%edx
+mov    $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/StunServer/stun_server/udp.cpp",%esi
 mov    $"fd != INVALID_SOCKET",%edi
 call   <T> <__assert_fail>
 cmpw   $0x0,-0x4c(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x62>
 movl   $0x0,-0x50(%rbp)
 jmp    <T> <_Z11sendMessageiPcijt+0x21b>
 cmpl   $0x0,-0x48(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x74>
 movl   $0x0,-0x50(%rbp)
 jmp    <T> <_Z11sendMessageiPcijt+0x21b>
 movl   $0x10,-0x18(%rbp)
 mov    -0x18(%rbp),%eax
 movslq %eax,%rdx
 lea    -0x30(%rbp),%rax
 mov    %rax,%rdi
 cld
 mov    %rdx,%rcx
 mov    $0x0,%eax
 rep stos %al,%es:(%rdi)
 movw   $0x2,-0x30(%rbp)
 movzwl -0x4c(%rbp),%edi
 call   <T> <htons>
 mov    %ax,-0x2e(%rbp)
 mov    -0x48(%rbp),%edi
 call   <T> <htonl>
 mov    %eax,-0x2c(%rbp)
 mov    -0x18(%rbp),%edx
 lea    -0x30(%rbp),%rcx
 mov    -0x44(%rbp),%eax
 cltq
 mov    -0x40(%rbp),%rsi
 mov    -0x34(%rbp),%edi
 mov    %edx,%r9d
 mov    %rcx,%r8
 mov    $0x0,%ecx
 mov    %rax,%rdx
 call   <T> <sendto>
 mov    %eax,-0x1c(%rbp)
 cmpl   $0xffffffff,-0x1c(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x18c>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x14(%rbp)
 mov    -0x14(%rbp),%eax
 mov    %eax,-0x54(%rbp)
 cmpl   $0x61,-0x54(%rbp)
 je     <T> <_Z11sendMessageiPcijt+0x10b>
 cmpl   $0x61,-0x54(%rbp)
 jl     <T> <_Z11sendMessageiPcijt+0x129>
 mov    -0x54(%rbp),%eax
 sub    $0x6f,%eax
 cmp    $0x2,%eax
 ja     <T> <_Z11sendMessageiPcijt+0x129>
 jmp    <T> <_Z11sendMessageiPcijt+0x180>
 mov    $"err EAFNOSUPPORT in send",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 jmp    <T> <_Z11sendMessageiPcijt+0x180>
 mov    -0x14(%rbp),%edi
 call   <T> <strerror>
 mov    %rax,%rbx
 mov    $"err ",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x14(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
 mov    $" ",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    %rbx,%rsi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    $" in send",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0x0,-0x50(%rbp)
 jmp    <T> <_Z11sendMessageiPcijt+0x21b>
 cmpl   $0x0,-0x1c(%rbp)
 jne    <T> <_Z11sendMessageiPcijt+0x1b7>
 mov    $"no data sent in send",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0x0,-0x50(%rbp)
 jmp    <T> <_Z11sendMessageiPcijt+0x21b>
 mov    -0x1c(%rbp),%eax
 cmp    -0x44(%rbp),%eax
 je     <T> <_Z11sendMessageiPcijt+0x214>
 mov    $"only ",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x1c(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
 mov    $" out of ",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x44(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
 mov    $" bytes sent",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0x0,-0x50(%rbp)
 jmp    <T> <_Z11sendMessageiPcijt+0x21b>
 movl   $0x1,-0x50(%rbp)
 mov    -0x50(%rbp),%eax
 add    $0x58,%rsp
 pop    %rbx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

bool sendMessage(Socket fd,char *buf,int l,uint dstIp,ushort dstPort)

{
  bool bVar1;
  ssize_t sVar2;
  char *pcVar3;
  ostream *poVar4;
  long lVar5;
  sockaddr *psVar6;
  sockaddr local_38;
  int local_24;
  socklen_t local_20;
  int local_1c;
  
                    /* Unresolved local var: int s@[???] */
  if (fd == -1) {
    write_log("sendMessage() Fail, fd = INVALID_SOCKET",-1);
                    /* WARNING: Subroutine does not return */
    __assert_fail("fd != INVALID_SOCKET","udp.cpp",0xa2,
                  "bool sendMessage(Socket, char*, int, unsigned int, short unsigned int)");
  }
  if (dstPort == 0) {
    bVar1 = false;
  }
  else {
                    /* Unresolved local var: sockaddr_in to@[???]
                       Unresolved local var: int toLen@[???] */
    if (dstIp == 0) {
      bVar1 = false;
    }
    else {
      local_20 = 0x10;
      psVar6 = &local_38;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined1 *)&psVar6->sa_family = 0;
        psVar6 = (sockaddr *)((long)&psVar6->sa_family + 1);
      }
      local_38.sa_family = 2;
      local_38.sa_data._0_2_ = htons(dstPort);
      local_38.sa_data._2_4_ = htonl(dstIp);
      sVar2 = sendto(fd,buf,(long)l,0,&local_38,local_20);
      local_24 = (int)sVar2;
      if (local_24 == -1) {
                    /* Unresolved local var: int e@[???] */
        local_1c = getErrno();
        if (local_1c == 0x61) {
          poVar4 = std::operator<<((ostream *)std::cerr,"err EAFNOSUPPORT in send");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        }
        else if ((local_1c < 0x61) || (2 < local_1c - 0x6fU)) {
          pcVar3 = strerror(local_1c);
          poVar4 = std::operator<<((ostream *)std::cerr,"err ");
          poVar4 = (ostream *)std::ostream::operator<<(poVar4,local_1c);
          poVar4 = std::operator<<(poVar4," ");
          poVar4 = std::operator<<(poVar4,pcVar3);
          poVar4 = std::operator<<(poVar4," in send");
          std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        }
        bVar1 = false;
      }
      else if (local_24 == 0) {
        poVar4 = std::operator<<((ostream *)std::cerr,"no data sent in send");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        bVar1 = false;
      }
      else if (local_24 == l) {
        bVar1 = true;
      }
      else {
        poVar4 = std::operator<<((ostream *)std::cerr,"only ");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,local_24);
        poVar4 = std::operator<<(poVar4," out of ");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,l);
        poVar4 = std::operator<<(poVar4," bytes sent");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        bVar1 = false;
      }
    }
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/StunServer/stun_server/udp.cpp, source/DNFServer/StunServer/stun_server/global_func.h, source/DNFServer/StunServer/stun_server/udp.cpp, source/DNFServer/StunServer/stun_server/udp.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
