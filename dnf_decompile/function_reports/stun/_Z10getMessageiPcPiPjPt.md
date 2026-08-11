# _Z10getMessageiPcPiPjPt

`getMessage(int, char*, int*, unsigned int*, unsigned short*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x401ac0` | `0x1d2` | `0x4029cc` | `0x1d2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,122 +1,122 @@
 push   %rbp
 mov    %rsp,%rbp
 push   %rbx
 sub    $0x68,%rsp
 mov    %edi,-0x44(%rbp)
 mov    %rsi,-0x50(%rbp)
 mov    %rdx,-0x58(%rbp)
 mov    %rcx,-0x60(%rbp)
 mov    %r8,-0x68(%rbp)
 cmpl   $0xffffffff,-0x44(%rbp)
 jne    <T> <_Z10getMessageiPcPiPjPt+0x4e>
 mov    -0x44(%rbp),%esi
 mov    $"getMessage() Fail, fd = INVALID_SOCKET",%edi
 call   <T> <_Z9write_logPKci>
 cmpl   $0xffffffff,-0x44(%rbp)
 jne    <T> <_Z10getMessageiPcPiPjPt+0x4e>
 mov    $"bool getMessage(Socket, char*, int*, unsigned int*, short unsigned int*)",%ecx
-mov    $0x71,%edx
-mov    $"udp.cpp",%esi
+mov    $0x48,%edx
+mov    $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/StunServer/stun_server/udp.cpp",%esi
 mov    $"fd != INVALID_SOCKET",%edi
 call   <T> <__assert_fail>
 movl   $0x10,-0x34(%rbp)
 lea    -0x34(%rbp),%rdx
 lea    -0x30(%rbp),%rcx
 mov    -0x58(%rbp),%rax
 mov    (%rax),%eax
 cltq
 mov    -0x50(%rbp),%rsi
 mov    -0x44(%rbp),%edi
 mov    %rdx,%r9
 mov    %rcx,%r8
 mov    $0x0,%ecx
 mov    %rax,%rdx
 call   <T> <recvfrom>
 mov    %eax,-0x18(%rbp)
 cmpl   $0xffffffff,-0x18(%rbp)
 jne    <T> <_Z10getMessageiPcPiPjPt+0x144>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x14(%rbp)
 mov    -0x14(%rbp),%eax
 mov    %eax,-0x70(%rbp)
 cmpl   $0x58,-0x70(%rbp)
 je     <T> <_Z10getMessageiPcPiPjPt+0xb2>
 cmpl   $0x68,-0x70(%rbp)
 je     <T> <_Z10getMessageiPcPiPjPt+0xd0>
 cmpl   $0xb,-0x70(%rbp)
 je     <T> <_Z10getMessageiPcPiPjPt+0x138>
 jmp    <T> <_Z10getMessageiPcPiPjPt+0xee>
 mov    $"Error fd not a socket",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 jmp    <T> <_Z10getMessageiPcPiPjPt+0x138>
 mov    $"Error connection reset - host not reachable",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 jmp    <T> <_Z10getMessageiPcPiPjPt+0x138>
 mov    -0x14(%rbp),%edi
 call   <T> <strerror>
 mov    %rax,%rbx
 mov    $"Socket Error=",%esi
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
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0x0,-0x6c(%rbp)
 jmp    <T> <_Z10getMessageiPcPiPjPt+0x1c8>
 cmpl   $0x0,-0x18(%rbp)
 jg     <T> <_Z10getMessageiPcPiPjPt+0x187>
 mov    $"socket closed? ",%esi
 mov    $&_ZSt4clog,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    $"recv size",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x18(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0x0,-0x6c(%rbp)
 jmp    <T> <_Z10getMessageiPcPiPjPt+0x1c8>
 movzwl -0x2e(%rbp),%eax
 movzwl %ax,%edi
 call   <T> <ntohs>
 mov    %eax,%edx
 mov    -0x68(%rbp),%rax
 mov    %dx,(%rax)
 mov    -0x2c(%rbp),%edi
 call   <T> <ntohl>
 mov    %eax,%edx
 mov    -0x60(%rbp),%rax
 mov    %edx,(%rax)
 mov    -0x18(%rbp),%eax
 cltq
 add    -0x50(%rbp),%rax
 movb   $0x0,(%rax)
 mov    -0x58(%rbp),%rdx
 mov    -0x18(%rbp),%eax
 mov    %eax,(%rdx)
 movl   $0x1,-0x6c(%rbp)
 mov    -0x6c(%rbp),%eax
 add    $0x68,%rsp
 pop    %rbx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

bool getMessage(Socket fd,char *buf,int *len,uint *srcIp,ushort *srcPort)

{
  bool bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  ssize_t sVar4;
  char *pcVar5;
  ostream *poVar6;
  socklen_t local_3c;
  sockaddr local_38;
  int local_20;
  int local_1c;
  
                    /* Unresolved local var: sockaddr_in from@[???]
                       Unresolved local var: int fromLen@[???]
                       Unresolved local var: int ret@[???] */
  if (fd != -1) {
    local_3c = 0x10;
    sVar4 = recvfrom(fd,buf,(long)*len,0,&local_38,&local_3c);
    local_20 = (int)sVar4;
    if (local_20 == -1) {
                    /* Unresolved local var: int err@[???] */
      local_1c = getErrno();
      if (local_1c == 0x58) {
        poVar6 = std::operator<<((ostream *)std::cerr,"Error fd not a socket");
        std::ostream::operator<<(poVar6,std::endl<char,std::char_traits<char>>);
      }
      else if (local_1c == 0x68) {
        poVar6 = std::operator<<((ostream *)std::cerr,"Error connection reset - host not reachable")
        ;
        std::ostream::operator<<(poVar6,std::endl<char,std::char_traits<char>>);
      }
      else if (local_1c != 0xb) {
        pcVar5 = strerror(local_1c);
        poVar6 = std::operator<<((ostream *)std::cerr,"Socket Error=");
        poVar6 = (ostream *)std::ostream::operator<<(poVar6,local_1c);
        poVar6 = std::operator<<(poVar6," ");
        poVar6 = std::operator<<(poVar6,pcVar5);
        std::ostream::operator<<(poVar6,std::endl<char,std::char_traits<char>>);
      }
      bVar1 = false;
    }
    else if (local_20 < 1) {
      poVar6 = std::operator<<((ostream *)std::clog,"socket closed? ");
      poVar6 = std::operator<<(poVar6,"recv size");
      poVar6 = (ostream *)std::ostream::operator<<(poVar6,local_20);
      std::ostream::operator<<(poVar6,std::endl<char,std::char_traits<char>>);
      bVar1 = false;
    }
    else {
      uVar2 = ntohs(local_38.sa_data._0_2_);
      *srcPort = uVar2;
      uVar3 = ntohl(local_38.sa_data._2_4_);
      *srcIp = uVar3;
      buf[local_20] = '\0';
      *len = local_20;
      bVar1 = true;
    }
    return bVar1;
  }
  write_log("getMessage() Fail, fd = INVALID_SOCKET",-1);
                    /* WARNING: Subroutine does not return */
  __assert_fail("fd != INVALID_SOCKET","udp.cpp",0x71,
                "bool getMessage(Socket, char*, int*, unsigned int*, short unsigned int*)");
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/StunServer/stun_server/udp.cpp, source/DNFServer/StunServer/stun_server/global_func.h, source/DNFServer/StunServer/stun_server/udp.cpp, source/DNFServer/StunServer/stun_server/udp.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/Thread.h 等 219 个文件*
