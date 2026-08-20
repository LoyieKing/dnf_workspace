# incUserLastCrashPacketID

`_ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi`

`StatisticsToObserveCrash::incUserLastCrashPacketID(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bb88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bb88  _ZN24StatisticsToObserveCrash24incUserLastCrashPacketIDEi
#           StatisticsToObserveCrash::incUserLastCrashPacketID(int)
# range [0x0860bb88, 0x0860bc79]
0860bb88 +0x00:  push   %ebp
0860bb89 +0x01:  mov    %esp,%ebp
0860bb8b +0x03:  push   %esi
0860bb8c +0x04:  push   %ebx
0860bb8d +0x05:  sub    $0x30,%esp
0860bb90 +0x08:  mov    0x8(%ebp),%eax
0860bb93 +0x0b:  add    $0x4,%eax
0860bb96 +0x0e:  mov    %eax,0x4(%esp)
0860bb9a +0x12:  lea    -0x24(%ebp),%eax
0860bb9d +0x15:  mov    %eax,(%esp)
0860bba0 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bba5 +0x1d:  mov    0x8(%ebp),%eax
0860bba8 +0x20:  lea    0x1c(%eax),%ecx
0860bbab +0x23:  lea    -0x28(%ebp),%eax
0860bbae +0x26:  lea    0xc(%ebp),%edx
0860bbb1 +0x29:  mov    %edx,0x8(%esp)
0860bbb5 +0x2d:  mov    %ecx,0x4(%esp)
0860bbb9 +0x31:  mov    %eax,(%esp)
0860bbbc +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860bbc1 +0x39:  sub    $0x4,%esp
0860bbc4 +0x3c:  mov    0x8(%ebp),%eax
0860bbc7 +0x3f:  lea    0x1c(%eax),%edx
0860bbca +0x42:  lea    -0x20(%ebp),%eax
0860bbcd +0x45:  mov    %edx,0x4(%esp)
0860bbd1 +0x49:  mov    %eax,(%esp)
0860bbd4 +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860bbd9 +0x51:  sub    $0x4,%esp
0860bbdc +0x54:  lea    -0x20(%ebp),%eax
0860bbdf +0x57:  mov    %eax,0x4(%esp)
0860bbe3 +0x5b:  lea    -0x28(%ebp),%eax
0860bbe6 +0x5e:  mov    %eax,(%esp)
0860bbe9 +0x61:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0860bbee +0x66:  test   %al,%al
0860bbf0 +0x68:  je     0860bc33 <+0xab>
0860bbf2 +0x6a:  movl   $0x1,-0xc(%ebp)
0860bbf9 +0x71:  lea    -0xc(%ebp),%eax
0860bbfc +0x74:  mov    %eax,0x8(%esp)
0860bc00 +0x78:  lea    0xc(%ebp),%eax
0860bc03 +0x7b:  mov    %eax,0x4(%esp)
0860bc07 +0x7f:  lea    -0x14(%ebp),%eax
0860bc0a +0x82:  mov    %eax,(%esp)
0860bc0d +0x85:  call   08610c38 <_GLOBAL__I__ZN10StatisticsC2Ev+0xcb6>  ; global constructors keyed to Statistics::Statistics()+0xcb6
0860bc12 +0x8a:  mov    0x8(%ebp),%eax
0860bc15 +0x8d:  lea    0x1c(%eax),%ecx
0860bc18 +0x90:  lea    -0x1c(%ebp),%eax
0860bc1b +0x93:  lea    -0x14(%ebp),%edx
0860bc1e +0x96:  mov    %edx,0x8(%esp)
0860bc22 +0x9a:  mov    %ecx,0x4(%esp)
0860bc26 +0x9e:  mov    %eax,(%esp)
0860bc29 +0xa1:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0860bc2e +0xa6:  sub    $0x4,%esp
0860bc31 +0xa9:  jmp    0860bc64 <+0xdc>
0860bc33 +0xab:  lea    -0x28(%ebp),%eax
0860bc36 +0xae:  mov    %eax,(%esp)
0860bc39 +0xb1:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860bc3e +0xb6:  mov    0x4(%eax),%edx
0860bc41 +0xb9:  add    $0x1,%edx
0860bc44 +0xbc:  mov    %edx,0x4(%eax)
0860bc47 +0xbf:  jmp    0860bc64 <+0xdc>
0860bc49 +0xc1:  mov    %edx,%ebx
0860bc4b +0xc3:  mov    %eax,%esi
0860bc4d +0xc5:  lea    -0x24(%ebp),%eax
0860bc50 +0xc8:  mov    %eax,(%esp)
0860bc53 +0xcb:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bc58 +0xd0:  mov    %esi,%eax
0860bc5a +0xd2:  mov    %ebx,%edx
0860bc5c +0xd4:  mov    %eax,(%esp)
0860bc5f +0xd7:  call   08ae3750 <_Unwind_Resume>
0860bc64 +0xdc:  lea    -0x24(%ebp),%eax
0860bc67 +0xdf:  mov    %eax,(%esp)
0860bc6a +0xe2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bc6f +0xe7:  lea    -0x8(%ebp),%esp
0860bc72 +0xea:  add    $0x0,%esp
0860bc75 +0xed:  pop    %ebx
0860bc76 +0xee:  pop    %esi
0860bc77 +0xef:  pop    %ebp
0860bc78 +0xf0:  ret
0860bc79 +0xf1:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::incUserLastCrashPacketID @ 0x860bb88

/* StatisticsToObserveCrash::incUserLastCrashPacketID(int) */

void StatisticsToObserveCrash::incUserLastCrashPacketID(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  Guard<Mutex> local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  pair local_20 [8];
  pair<int_const,int> local_18 [8];
  int local_10;
  
  Guard<Mutex>::Guard(local_28,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860bbbc to 0860bc2d has its CatchHandler @ 0860bc49 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_2c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  else {
    local_10 = 1;
    std::pair<int_const,int>::pair<int&,int>(local_18,(int *)&stack0x00000008,&local_10);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_20);
  }
  Guard<Mutex>::~Guard(local_28);
  return;
}
```
