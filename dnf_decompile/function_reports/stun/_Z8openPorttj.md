# _Z8openPorttj

`openPort(unsigned short, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | NEAR | `0x401c92` | `0x256` | `0x402b9e` | `0x256` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,144 +1,144 @@
 push   %rbp
 mov    %rsp,%rbp
 push   %rbx
 sub    $0x48,%rsp
 mov    %esi,-0x48(%rbp)
 mov    %di,-0x44(%rbp)
 mov    $0x11,%edx
 mov    $0x2,%esi
 mov    $0x2,%edi
 call   <T> <socket>
 mov    %eax,-0x1c(%rbp)
 cmpl   $0xffffffff,-0x1c(%rbp)
 jne    <T> <_Z8openPorttj+0x68>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x18(%rbp)
 mov    $"Could not create a UDP socket:",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x18(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0xffffffff,-0x4c(%rbp)
 jmp    <T> <_Z8openPorttj+0x24c>
 lea    -0x30(%rbp),%rax
 movq   $0x0,(%rax)
 movq   $0x0,0x8(%rax)
 movw   $0x2,-0x30(%rbp)
 mov    $0x0,%edi
 call   <T> <htonl>
 mov    %eax,-0x2c(%rbp)
 movzwl -0x44(%rbp),%edi
 call   <T> <htons>
 mov    %ax,-0x2e(%rbp)
 cmpl   $0x0,-0x48(%rbp)
 je     <T> <_Z8openPorttj+0xb5>
 cmpl   $0x100007f,-0x48(%rbp)
 je     <T> <_Z8openPorttj+0xb5>
 mov    -0x48(%rbp),%edi
 call   <T> <htonl>
 mov    %eax,-0x2c(%rbp)
 lea    -0x30(%rbp),%rsi
 mov    -0x1c(%rbp),%edi
 mov    $0x10,%edx
 call   <T> <bind>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z8openPorttj+0x1a6>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0x14(%rbp)
 mov    -0x14(%rbp),%eax
 mov    %eax,-0x50(%rbp)
 cmpl   $0x62,-0x50(%rbp)
 je     <T> <_Z8openPorttj+0x101>
 cmpl   $0x63,-0x50(%rbp)
 je     <T> <_Z8openPorttj+0x144>
 cmpl   $0x0,-0x50(%rbp)
 je     <T> <_Z8openPorttj+0xf5>
 jmp    <T> <_Z8openPorttj+0x150>
 movl   $0xffffffff,-0x4c(%rbp)
 jmp    <T> <_Z8openPorttj+0x24c>
 movzwl -0x44(%rbp),%ebx
 mov    $"Port ",%esi
 mov    $&_ZSt4cerr,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    %ebx,%esi
 call   <T> <_ZNSolsEt>
 mov    %rax,%rdi
 mov    $" for receiving UDP is in use",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 movl   $0xffffffff,-0x4c(%rbp)
 jmp    <T> <_Z8openPorttj+0x24c>
 movl   $0xffffffff,-0x4c(%rbp)
 jmp    <T> <_Z8openPorttj+0x24c>
 mov    -0x14(%rbp),%edi
 call   <T> <strerror>
 mov    %rax,%rbx
 mov    $"Could not bind UDP receive port. Error=",%esi
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
 movl   $0xffffffff,-0x4c(%rbp)
 jmp    <T> <_Z8openPorttj+0x24c>
 movq   $0x3,-0x40(%rbp)
 movq   $0x0,-0x38(%rbp)
 lea    -0x40(%rbp),%rcx
 mov    -0x1c(%rbp),%edi
 mov    $0x10,%r8d
 mov    $0x14,%edx
 mov    $0x1,%esi
 call   <T> <setsockopt>
 cmpl   $0xffffffff,-0x1c(%rbp)
 jne    <T> <_Z8openPorttj+0x204>
 mov    -0x1c(%rbp),%esi
 mov    $"openPort() Fail, fd = INVALID_SOCKET",%edi
 call   <T> <_Z9write_logPKci>
 cmpl   $0xffffffff,-0x1c(%rbp)
 jne    <T> <_Z8openPorttj+0x204>
 mov    $"Socket openPort(short unsigned int, unsigned int)",%ecx
-mov    $0x63,%edx
-mov    $"udp.cpp",%esi
+mov    $0x3c,%edx
+mov    $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/StunServer/stun_server/udp.cpp",%esi
 mov    $"fd != INVALID_SOCKET",%edi
 call   <T> <__assert_fail>
 movzwl -0x44(%rbp),%ebx
 mov    $"Opened port ",%esi
 mov    $&_ZSt4clog,%edi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    %ebx,%esi
 call   <T> <_ZNSolsEt>
 mov    %rax,%rdi
 mov    $" with fd ",%esi
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %rax,%rdi
 mov    -0x1c(%rbp),%esi
 call   <T> <_ZNSolsEi>
 mov    %rax,%rdi
-mov    $&data#429eab19(.plt),%esi
+mov    $"�%r?",%esi
 call   <T> <_ZNSolsEPFRSoS_E>
 mov    -0x1c(%rbp),%eax
 mov    %eax,-0x4c(%rbp)
 mov    -0x4c(%rbp),%eax
 add    $0x48,%rsp
 pop    %rbx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

Socket openPort(ushort port,uint interfaceIp)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  ostream *poVar4;
  char *pcVar5;
  Socket local_54;
  undefined8 local_48;
  undefined8 local_40;
  sockaddr local_38;
  int local_24;
  int local_20;
  int local_1c;
  
                    /* Unresolved local var: Socket fd@[???]
                       Unresolved local var: sockaddr_in addr@[???]
                       Unresolved local var: timeval tv_timeo@[???] */
  local_24 = socket(2,2,0x11);
  if (local_24 == -1) {
                    /* Unresolved local var: int err@[???] */
    local_20 = getErrno();
    poVar4 = std::operator<<((ostream *)std::cerr,"Could not create a UDP socket:");
    poVar4 = (ostream *)std::ostream::operator<<(poVar4,local_20);
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    local_54 = -1;
  }
  else {
    local_38.sa_data[6] = '\0';
    local_38.sa_data[7] = '\0';
    local_38.sa_data[8] = '\0';
    local_38.sa_data[9] = '\0';
    local_38.sa_data[10] = '\0';
    local_38.sa_data[0xb] = '\0';
    local_38.sa_data[0xc] = '\0';
    local_38.sa_data[0xd] = '\0';
    local_38.sa_family = 2;
    local_38.sa_data[0] = '\0';
    local_38.sa_data[1] = '\0';
    local_38.sa_data[2] = '\0';
    local_38.sa_data[3] = '\0';
    local_38.sa_data[4] = '\0';
    local_38.sa_data[5] = '\0';
    uVar2 = htonl(0);
    local_38.sa_data._2_4_ = uVar2;
    uVar1 = htons(port);
    local_38.sa_data._0_2_ = uVar1;
    if ((interfaceIp != 0) && (interfaceIp != 0x100007f)) {
      uVar2 = htonl(interfaceIp);
      local_38.sa_data._2_4_ = uVar2;
    }
    iVar3 = bind(local_24,&local_38,0x10);
    if (iVar3 == 0) {
      local_48 = 3;
      local_40 = 0;
      setsockopt(local_24,1,0x14,&local_48,0x10);
      if (local_24 == -1) {
        write_log("openPort() Fail, fd = INVALID_SOCKET",-1);
        if (local_24 == -1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("fd != INVALID_SOCKET","udp.cpp",99,
                        "Socket openPort(short unsigned int, unsigned int)");
        }
      }
      poVar4 = std::operator<<((ostream *)std::clog,"Opened port ");
      poVar4 = (ostream *)std::ostream::operator<<(poVar4,port);
      poVar4 = std::operator<<(poVar4," with fd ");
      poVar4 = (ostream *)std::ostream::operator<<(poVar4,local_24);
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      local_54 = local_24;
    }
    else {
                    /* Unresolved local var: int e@[???] */
      local_1c = getErrno();
      if (local_1c == 0x62) {
        poVar4 = std::operator<<((ostream *)std::cerr,"Port ");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,port);
        poVar4 = std::operator<<(poVar4," for receiving UDP is in use");
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        local_54 = -1;
      }
      else if (local_1c == 99) {
        local_54 = -1;
      }
      else if (local_1c == 0) {
        local_54 = -1;
      }
      else {
        pcVar5 = strerror(local_1c);
        poVar4 = std::operator<<((ostream *)std::cerr,"Could not bind UDP receive port. Error=");
        poVar4 = (ostream *)std::ostream::operator<<(poVar4,local_1c);
        poVar4 = std::operator<<(poVar4," ");
        poVar4 = std::operator<<(poVar4,pcVar5);
        std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
        local_54 = -1;
      }
    }
  }
  return local_54;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/udp.cpp](source/DNFServer/StunServer/stun_server/udp.cpp)（约第 13 行）：

```cpp
Socket openPort(unsigned short port, unsigned int interfaceIp)
{
    Socket fd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (fd == -1)
    {
        int err = getErrno();
        std::cerr << "Could not create a UDP socket:" << err << std::endl;
        return INVALID_SOCKET;
    }

    sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(port);
    // ORIG 对回环的判断常量是网络字节序 0x0100007f（原始工程 INADDR_LOOPBACK 值）
    if (interfaceIp != 0 && interfaceIp != 0x0100007f)
    {
        addr.sin_addr.s_addr = htonl(interfaceIp);
    }

    if (bind(fd, (sockaddr*)&addr, sizeof(addr)) != 0)
    {
        int e = getErrno();
        switch (e)
        {
        case 0:
            return -1;
        case EADDRINUSE:
            std::cerr << "Port " << port << " for receiving UDP is in use" << std::endl;
            return -1;
        case 99:
            return -1;
        default:
            std::cerr << "Could not bind UDP receive port. Error=" << e << " " << strerror(e) << std::endl;
            return -1;
        }
    }

    timeval tv_timeo;
    tv_timeo.tv_sec = 3;
    tv_timeo.tv_usec = 0;
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv_timeo, sizeof(tv_timeo));

    if (fd == INVALID_SOCKET)
    {
        write_log("openPort() Fail, fd = INVALID_SOCKET", fd);
        assert(fd != INVALID_SOCKET);
    }

    std::clog << "Opened port " << port << " with fd " << fd << std::endl;
    return fd;
}
```
