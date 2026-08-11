# main

`main`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804c2c7` | `0x537` | `0x804c8a3` | `0x553` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,320 +1,323 @@
 push   %ebp
 mov    %esp,%ebp
 and    $0xfffffff0,%esp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x1b4,%esp
+sub    $0x1d4,%esp
 movl   $"**********************************************************",(%esp)
 call   <T> <puts>
 movl   $"* +---   +-+ +  +----         DUNGEON & FIGHTER          *",(%esp)
 call   <T> <puts>
 movl   $0x0,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $"* |   |  | | |  |                  ver %3d.%3d.%3d.%3d   *\n",(%esp)
 call   <T> <printf>
 movl   $"* |   |  | | |  +----                                    *",(%esp)
 call   <T> <puts>
 movl   $"* |   |  | | |  |      Open Beta Test on 2005.08.10~     *",(%esp)
 call   <T> <puts>
 movl   $"* +---   + +-+  |      Copyright(c) 2004,2005 Neople Co. *",(%esp)
 call   <T> <puts>
 movl   $"**********************************************************",(%esp)
 call   <T> <puts>
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReaderC1Ev>
 movl   $"ip",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader7add_tagEPKc>
 movl   $"port",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader7add_tagEPKc>
 movl   $"domain",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader7add_tagEPKc>
 cmpl   $0x3,0x8(%ebp)
-je     <T> <main+0x104>
-movl   $"wrong parameter!",(%esp)
-call   <T> <puts>
-movl   $"[execute filename]  [cfg filename]  [command]",(%esp)
-call   <T> <puts>
-mov    $0x0,%esi
-mov    $0x0,%ebx
-jmp    <T> <main+0x44e>
-lea    0x21(%esp),%edx
-mov    $0xff,%ebx
-mov    $0x0,%eax
-mov    %edx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
+jne    <T> <main+0x43a>
+lea    0x39(%esp),%ebx
+mov    $0xff,%esi
+mov    %ebx,%eax
+and    $0x1,%eax
+mov    %al,0x2f(%esp)
+cmpb   $0x0,0x2f(%esp)
+je     <T> <main+0x10b>
+movb   $0x0,0x39(%esp)
+lea    0x39(%esp),%eax
+lea    0x1(%eax),%ebx
+mov    $0xfe,%esi
+mov    %ebx,%eax
+and    $0x2,%eax
+test   %eax,%eax
 je     <T> <main+0x123>
-mov    %al,(%edx)
-add    $0x1,%edx
-sub    $0x1,%ebx
-mov    %edx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <main+0x135>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-rep stos %eax,%es:(%edi)
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <main+0x14f>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <main+0x15d>
-mov    %al,(%edx)
-add    $0x1,%edx
+movb   $0x0,(%ebx)
+lea    0x1(%ebx),%eax
+movb   $0x0,(%eax)
+add    $0x2,%ebx
+sub    $0x2,%esi
+mov    %esi,%edi
+shr    $0x2,%edi
+jmp    <T> <main+0x145>
+movb   $0x0,(%ebx)
+lea    0x1(%ebx),%eax
+movb   $0x0,(%eax)
+lea    0x2(%ebx),%eax
+movb   $0x0,(%eax)
+lea    0x3(%ebx),%eax
+movb   $0x0,(%eax)
+add    $0x4,%ebx
+sub    $0x1,%edi
+test   %edi,%edi
+setne  %al
+test   %al,%al
+jne    <T> <main+0x12a>
+mov    %esi,%eax
+and    $0x2,%eax
+test   %eax,%eax
+je     <T> <main+0x163>
+movb   $0x0,(%ebx)
+lea    0x1(%ebx),%eax
+movb   $0x0,(%eax)
+add    $0x2,%ebx
+movzbl 0x2f(%esp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <main+0x172>
+movb   $0x0,(%ebx)
 mov    0xc(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"./cfg/%s.cfg",0x4(%esp)
-lea    0x21(%esp),%eax
+lea    0x39(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    0x21(%esp),%eax
+lea    0x39(%esp),%eax
 mov    %eax,0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader14ReadConfigFileEPKc>
 mov    0xc(%ebp),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z7commandPKcS0_>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <main+0x1c6>
-mov    $0x0,%esi
-mov    $0x0,%ebx
-jmp    <T> <main+0x44e>
-lea    0x1aa(%esp),%eax
+je     <T> <main+0x1d6>
+mov    $0x0,%ebx
+jmp    <T> <main+0x472>
+lea    0x1c2(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CCoreDumpC1Ev>
-lea    0x120(%esp),%eax
+lea    0x138(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CSessionManagerC1Ev>
 movl   $0x64,0x4(%esp)
-lea    0x120(%esp),%eax
+lea    0x138(%esp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE12CreateEventsEi>
 movl   $"port",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
 mov    %eax,(%esp)
 call   <T> <atoi>
+mov    %eax,0x1c4(%esp)
+movl   $"ip",0x4(%esp)
+lea    0x180(%esp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
+mov    %eax,0x1c8(%esp)
+mov    0x1c4(%esp),%eax
+mov    %eax,0x8(%esp)
+mov    0x1c8(%esp),%eax
+mov    %eax,0x4(%esp)
+lea    0x138(%esp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE9TryListenEPKci>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <main+0x28b>
+mov    $0x0,%ebx
+jmp    <T> <main+0x3ff>
+movl   $"port",0x4(%esp)
+lea    0x180(%esp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
 mov    %eax,%ebx
 movl   $"ip",0x4(%esp)
-lea    0x168(%esp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    0x120(%esp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE9TryListenEPKci>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <main+0x266>
-mov    $0x0,%esi
-mov    $0x0,%ebx
-jmp    <T> <main+0x3da>
-movl   $"port",0x4(%esp)
-lea    0x168(%esp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
-mov    %eax,%ebx
-movl   $"ip",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"Listen Socket IP:%s, PORT:%s",0x4(%esp)
-lea    0x1ab(%esp),%eax
+lea    0x1c3(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ArchiveLogC1EPKcz>
 movl   $"port",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
 mov    %eax,%ebx
 movl   $"ip",0x4(%esp)
-lea    0x168(%esp),%eax
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReader9get_valueEPKc>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"Community Server(IP:%s, PORT:%s)\nStart\n",(%esp)
 call   <T> <printf>
-jmp    <T> <main+0x332>
+jmp    <T> <main+0x357>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,&_ZN15global_instance12current_timeE
 movl   $0xa,0x4(%esp)
-lea    0x120(%esp),%eax
+lea    0x138(%esp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE19WaitForSessionEventEi>
 movl   $0x1,(%esp)
 call   <T> <_ZN15global_function5sleepEi>
 movzbl &_ZN15global_instance8shutdownE,%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <main+0x2fb>
+jne    <T> <main+0x320>
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    0x18c(%esp),%eax
+lea    0x1a4(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0xc(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"./pid/%s.pid",0x4(%esp)
-lea    0x18c(%esp),%eax
+lea    0x1a4(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    0x18c(%esp),%eax
+lea    0x1a4(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <remove>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <main+0x3ba>
+je     <T> <main+0x3df>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"FAIL TO DELETE PID FILE ERROR: %s\n",(%esp)
 call   <T> <printf>
-mov    $0x1,%ebx
-jmp    <T> <main+0x3da>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    0x120(%esp),%eax
+mov    $0x0,%ebx
+jmp    <T> <main+0x3ff>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    0x138(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CSessionManagerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <main+0x3fb>
-lea    0x120(%esp),%eax
+jmp    <T> <main+0x410>
+lea    0x138(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CSessionManagerD1Ev>
-test   %ebx,%ebx
-jne    <T> <main+0x3f4>
-mov    $0x0,%ebx
-jmp    <T> <main+0x414>
-mov    $0x1,%ebx
-jmp    <T> <main+0x414>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    0x1aa(%esp),%eax
+jmp    <T> <main+0x429>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    0x1c2(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CCoreDumpD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <main+0x435>
-lea    0x1aa(%esp),%eax
+jmp    <T> <main+0x459>
+lea    0x1c2(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CCoreDumpD1Ev>
-test   %ebx,%ebx
-jne    <T> <main+0x42e>
-mov    $0x0,%ebx
-jmp    <T> <main+0x44e>
-mov    $0x1,%ebx
-jmp    <T> <main+0x44e>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    0x168(%esp),%eax
+jmp    <T> <main+0x472>
+movl   $"wrong parameter!",(%esp)
+call   <T> <puts>
+movl   $"[execute filename]  [cfg filename]  [command]",(%esp)
+call   <T> <puts>
+mov    $0x0,%ebx
+jmp    <T> <main+0x472>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReaderD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <main+0x46a>
-lea    0x168(%esp),%eax
+jmp    <T> <main+0x486>
+lea    0x180(%esp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CConfigFileReaderD1Ev>
-test   %ebx,%ebx
-je     <T> <main+0x528>
-jmp    <T> <main+0x523>
+jmp    <T> <main+0x544>
 cmp    $0x2,%edx
-jne    <T> <main+0x4eb>
+jne    <T> <main+0x507>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,0x1ac(%esp)
-mov    0x1ac(%esp),%eax
+mov    %eax,0x1cc(%esp)
+mov    0x1cc(%esp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    0x1ac(%esp),%eax
+mov    0x1cc(%esp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $"error: ",0x4(%esp)
 movl   $&_ZSt4cerr,(%esp)
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
-movl   $&data#1af97452(.rodata),0x4(%esp)
+movl   $&data#16b60b2d(.rodata),0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
-mov    $0x1,%esi
+mov    $0x1,%ebx
 call   <T> <__cxa_end_catch>
-jmp    <T> <main+0x528>
+jmp    <T> <main+0x544>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"Exception of unknown type!\n",0x4(%esp)
 movl   $&_ZSt4cerr,(%esp)
 call   <T> <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
-jmp    <T> <main+0x51e>
-mov    %edx,%ebx
-mov    %eax,%esi
+mov    $0x0,%ebx
 call   <T> <__cxa_end_catch>
+jmp    <T> <main+0x544>
+mov    %edx,%ebx
+mov    %eax,%esi
+call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-mov    $0x0,%esi
-mov    %esi,%eax
-add    $0x1b4,%esp
+mov    %ebx,%eax
+add    $0x1d4,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 mov    %ebp,%esp
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

undefined4 main(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  bool bVar9;
  byte bVar10;
  char local_1af;
  char local_1ae [254];
  CSessionManager local_b0 [4];
  CSessionProxy<CNetworkSession,socket_event::CEpoll> aCStack_ac [68];
  CConfigFileReader local_68 [36];
  char local_44 [30];
  CCoreDump local_26;
  ArchiveLog local_25 [9];
  
  bVar10 = 0;
                    /* try { // try from 0804c2dd to 0804c358 has its CatchHandler @ 0804c731 */
  puts("**********************************************************");
  puts("* +---   +-+ +  +----         DUNGEON & FIGHTER          *");
  printf("* |   |  | | |  |                  ver %3d.%3d.%3d.%3d   *\n",1,0,0,0);
  puts("* |   |  | | |  +----                                    *");
  puts("* |   |  | | |  |      Open Beta Test on 2005.08.10~     *");
  puts("* +---   + +-+  |      Copyright(c) 2004,2005 Neople Co. *");
  puts("**********************************************************");
  CConfigFileReader::_ZN17CConfigFileReaderC2Ev(local_68);
                    /* try { // try from 0804c36b to 0804c49b has its CatchHandler @ 0804c6fc */
  CConfigFileReader::_ZN17CConfigFileReader7add_tagEPKc(local_68,"ip");
  CConfigFileReader::_ZN17CConfigFileReader7add_tagEPKc(local_68,"port");
  CConfigFileReader::_ZN17CConfigFileReader7add_tagEPKc(local_68,"domain");
  if (param_1 == 3) {
    pcVar7 = &local_1af;
    uVar8 = 0xff;
    bVar9 = ((uint)pcVar7 & 1) != 0;
    if (bVar9) {
      local_1af = '\0';
      pcVar7 = local_1ae;
      uVar8 = 0xfe;
    }
    if (((uint)pcVar7 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
      uVar8 = uVar8 - 2;
    }
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
    }
    if ((uVar8 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
    }
    if (!bVar9) {
      *pcVar7 = '\0';
    }
    sprintf(&local_1af,"./cfg/%s.cfg",*(undefined4 *)(param_2 + 4));
    CConfigFileReader::_ZN17CConfigFileReader14ReadConfigFileEPKc(local_68,&local_1af);
    cVar1 = command(*(char **)(param_2 + 4),*(char **)(param_2 + 8));
    if (cVar1 == '\x01') {
      CCoreDump::_ZN9CCoreDumpC2Ev(&local_26);
                    /* try { // try from 0804c4a6 to 0804c4aa has its CatchHandler @ 0804c6c2 */
      CSessionManager::_ZN15CSessionManagerC2Ev(local_b0);
                    /* try { // try from 0804c4c0 to 0804c680 has its CatchHandler @ 0804c688 */
      network_engine::CSessionProxy<CNetworkSession,socket_event::CEpoll>::
      _ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE12CreateEventsEi
                (aCStack_ac,100);
      pcVar7 = (char *)CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"port");
      iVar2 = atoi(pcVar7);
      pcVar7 = (char *)CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"ip");
      cVar1 = network_engine::CSessionProxy<CNetworkSession,socket_event::CEpoll>::
              _ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE9TryListenEPKci
                        (aCStack_ac,pcVar7,iVar2);
      if (cVar1 == '\x01') {
        uVar3 = CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"port");
        uVar4 = CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"ip");
        ArchiveLog::_ZN10ArchiveLogC2EPKcz(local_25,"Listen Socket IP:%s, PORT:%s",uVar4,uVar3);
        uVar3 = CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"port");
        uVar4 = CConfigFileReader::_ZN17CConfigFileReader9get_valueEPKc(local_68,"ip");
        printf("Community Server(IP:%s, PORT:%s)\nStart\n",uVar4,uVar3);
        while (global_instance::shutdown != '\x01') {
          global_instance::current_time = time((time_t *)0x0);
          network_engine::CSessionProxy<CNetworkSession,socket_event::CEpoll>::
          _ZN14network_engine13CSessionProxyI15CNetworkSessionN12socket_event6CEpollEE19WaitForSessionEventEi
                    (aCStack_ac,10);
          global_function::_ZN15global_function5sleepEi(1);
        }
        memset(local_44,0,0x1e);
        sprintf(local_44,"./pid/%s.pid",*(undefined4 *)(param_2 + 4));
        iVar2 = remove(local_44);
        if (iVar2 == -1) {
          piVar5 = __errno_location();
          pcVar7 = strerror(*piVar5);
          printf("FAIL TO DELETE PID FILE ERROR: %s\n",pcVar7);
        }
        bVar9 = true;
      }
      else {
        unaff_ESI = 0;
        bVar9 = false;
      }
                    /* try { // try from 0804c6ab to 0804c6af has its CatchHandler @ 0804c6c2 */
      CSessionManager::_ZN15CSessionManagerD2Ev(local_b0);
                    /* try { // try from 0804c6e5 to 0804c6e9 has its CatchHandler @ 0804c6fc */
      CCoreDump::_ZN9CCoreDumpD2Ev(&local_26);
      if (bVar9) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      unaff_ESI = 0;
      bVar9 = false;
    }
  }
  else {
    puts("wrong parameter!");
    puts("[execute filename]  [cfg filename]  [command]");
    unaff_ESI = 0;
    bVar9 = false;
  }
                    /* try { // try from 0804c71f to 0804c723 has its CatchHandler @ 0804c731 */
  CConfigFileReader::_ZN17CConfigFileReaderD2Ev(local_68);
  if (bVar9) {
    unaff_ESI = 0;
  }
  return unaff_ESI;
}
```

## 3. 我们的源码函数

定义于 [source/Community/CommunityServer.cpp](source/Community/CommunityServer.cpp)（约第 40 行）：

```cpp
int main(int argc, char **argv) {
    try {
        puts("**********************************************************");
        puts("* +---   +-+ +  +----         DUNGEON & FIGHTER          *");
        printf("* |   |  | | |  |                  ver %3d.%3d.%3d.%3d   *\n", 1, 0, 0, 0);
        puts("* |   |  | | |  +----                                    *");
        puts("* |   |  | | |  |      Open Beta Test on 2005.08.10~     *");
        puts("* +---   + +-+  |      Copyright(c) 2004,2005 Neople Co. *");
        puts("**********************************************************");
        CConfigFileReader cfg;
        cfg.add_tag("ip");
        cfg.add_tag("port");
        cfg.add_tag("domain");
        if (argc == 3) {
            char buffer[255];
            // 与原始一致：按地址对齐展开的清 0 循环（非 memset）
            // 原始：p/size 保持在寄存器（edx/ebx），无栈溢写
            register char *p = buffer;
            register unsigned int size = 255;
            register bool odd = ((unsigned int)p & 1) != 0;
            if (odd) {
                buffer[0] = '\0';
                p = buffer + 1;
                size = 254;
            }
            if (((unsigned int)p & 2) != 0) {
                p[0] = '\0';
                p[1] = '\0';
                p += 2;
                size -= 2;
            }
            for (register unsigned int i = size >> 2; i != 0; i--) {
                p[0] = '\0';
                p[1] = '\0';
                p[2] = '\0';
                p[3] = '\0';
                p += 4;
            }
            if ((size & 2) != 0) {
                p[0] = '\0';
                p[1] = '\0';
                p += 2;
            }
            if (!odd) {
                *p = '\0';
            }
            sprintf(buffer, "./cfg/%s.cfg", argv[1]);
            cfg.ReadConfigFile(buffer);
            // 原始：command == false 直接 return 0（xor eax,1; test/je 形态）
            if (command(argv[1], argv[2]) == false) {
                return 0;
            }
            CCoreDump coreDump;
            CSessionManager sessionManager;
            sessionManager.CreateEvents(100);
            int port = atoi(cfg.get_value("port"));
            const char* ip = cfg.get_value("ip");
            // 原始：TryListen == false 直接 return 0
            if (sessionManager.TryListen(ip, port) == false) {
                return 0;
            }
            ArchiveLog("Listen Socket IP:%s, PORT:%s", cfg.get_value("ip"), cfg.get_value("port"));
            printf("Community Server(IP:%s, PORT:%s)\nStart\n", cfg.get_value("ip"), cfg.get_value("port"));
            while (!global_instance::shutdown) {
                global_instance::current_time = time(NULL);
                sessionManager.WaitForSessionEvent(10);
                global_function::sleep(1);
            }
            // 原始：关闭时删除 PID 文件；失败打印错误
            char pidPath[30];
            memset(pidPath, 0, 30);
            sprintf(pidPath, "./pid/%s.pid", argv[1]);
            if (remove(pidPath) == -1) {
                printf("FAIL TO DELETE PID FILE ERROR: %s\n", strerror(errno));
            }
            return 0;
        }
        // 原始：argc != 3 时直落到 puts（if 后无 else）
        puts("wrong parameter!");
        puts("[execute filename]  [cfg filename]  [command]");
        return 0;
    } catch (std::exception& e) {
        // 原始：std::cerr << "error: " << e.what() << "\n"（_ZStls 三次输出）
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    } catch (...) {
        std::cerr << "Exception of unknown type!\n";
        return 0;
    }
}
```
