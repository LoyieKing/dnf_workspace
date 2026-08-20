# incUserLastCrashPlayStatus

`_ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi`

`StatisticsToObserveCrash::incUserLastCrashPlayStatus(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bed4  _ZN24StatisticsToObserveCrash26incUserLastCrashPlayStatusEi
#           StatisticsToObserveCrash::incUserLastCrashPlayStatus(int)
# range [0x0860bed4, 0x0860bfc5]
0860bed4 +0x00:  push   %ebp
0860bed5 +0x01:  mov    %esp,%ebp
0860bed7 +0x03:  push   %esi
0860bed8 +0x04:  push   %ebx
0860bed9 +0x05:  sub    $0x30,%esp
0860bedc +0x08:  mov    0x8(%ebp),%eax
0860bedf +0x0b:  add    $0x4,%eax
0860bee2 +0x0e:  mov    %eax,0x4(%esp)
0860bee6 +0x12:  lea    -0x24(%ebp),%eax
0860bee9 +0x15:  mov    %eax,(%esp)
0860beec +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bef1 +0x1d:  mov    0x8(%ebp),%eax
0860bef4 +0x20:  lea    0x4c(%eax),%ecx
0860bef7 +0x23:  lea    -0x28(%ebp),%eax
0860befa +0x26:  lea    0xc(%ebp),%edx
0860befd +0x29:  mov    %edx,0x8(%esp)
0860bf01 +0x2d:  mov    %ecx,0x4(%esp)
0860bf05 +0x31:  mov    %eax,(%esp)
0860bf08 +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860bf0d +0x39:  sub    $0x4,%esp
0860bf10 +0x3c:  mov    0x8(%ebp),%eax
0860bf13 +0x3f:  lea    0x4c(%eax),%edx
0860bf16 +0x42:  lea    -0x20(%ebp),%eax
0860bf19 +0x45:  mov    %edx,0x4(%esp)
0860bf1d +0x49:  mov    %eax,(%esp)
0860bf20 +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860bf25 +0x51:  sub    $0x4,%esp
0860bf28 +0x54:  lea    -0x20(%ebp),%eax
0860bf2b +0x57:  mov    %eax,0x4(%esp)
0860bf2f +0x5b:  lea    -0x28(%ebp),%eax
0860bf32 +0x5e:  mov    %eax,(%esp)
0860bf35 +0x61:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0860bf3a +0x66:  test   %al,%al
0860bf3c +0x68:  je     0860bf7f <+0xab>
0860bf3e +0x6a:  movl   $0x1,-0xc(%ebp)
0860bf45 +0x71:  lea    -0xc(%ebp),%eax
0860bf48 +0x74:  mov    %eax,0x8(%esp)
0860bf4c +0x78:  lea    0xc(%ebp),%eax
0860bf4f +0x7b:  mov    %eax,0x4(%esp)
0860bf53 +0x7f:  lea    -0x14(%ebp),%eax
0860bf56 +0x82:  mov    %eax,(%esp)
0860bf59 +0x85:  call   08610c38 <_GLOBAL__I__ZN10StatisticsC2Ev+0xcb6>  ; global constructors keyed to Statistics::Statistics()+0xcb6
0860bf5e +0x8a:  mov    0x8(%ebp),%eax
0860bf61 +0x8d:  lea    0x4c(%eax),%ecx
0860bf64 +0x90:  lea    -0x1c(%ebp),%eax
0860bf67 +0x93:  lea    -0x14(%ebp),%edx
0860bf6a +0x96:  mov    %edx,0x8(%esp)
0860bf6e +0x9a:  mov    %ecx,0x4(%esp)
0860bf72 +0x9e:  mov    %eax,(%esp)
0860bf75 +0xa1:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0860bf7a +0xa6:  sub    $0x4,%esp
0860bf7d +0xa9:  jmp    0860bfb0 <+0xdc>
0860bf7f +0xab:  lea    -0x28(%ebp),%eax
0860bf82 +0xae:  mov    %eax,(%esp)
0860bf85 +0xb1:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860bf8a +0xb6:  mov    0x4(%eax),%edx
0860bf8d +0xb9:  add    $0x1,%edx
0860bf90 +0xbc:  mov    %edx,0x4(%eax)
0860bf93 +0xbf:  jmp    0860bfb0 <+0xdc>
0860bf95 +0xc1:  mov    %edx,%ebx
0860bf97 +0xc3:  mov    %eax,%esi
0860bf99 +0xc5:  lea    -0x24(%ebp),%eax
0860bf9c +0xc8:  mov    %eax,(%esp)
0860bf9f +0xcb:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bfa4 +0xd0:  mov    %esi,%eax
0860bfa6 +0xd2:  mov    %ebx,%edx
0860bfa8 +0xd4:  mov    %eax,(%esp)
0860bfab +0xd7:  call   08ae3750 <_Unwind_Resume>
0860bfb0 +0xdc:  lea    -0x24(%ebp),%eax
0860bfb3 +0xdf:  mov    %eax,(%esp)
0860bfb6 +0xe2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bfbb +0xe7:  lea    -0x8(%ebp),%esp
0860bfbe +0xea:  add    $0x0,%esp
0860bfc1 +0xed:  pop    %ebx
0860bfc2 +0xee:  pop    %esi
0860bfc3 +0xef:  pop    %ebp
0860bfc4 +0xf0:  ret
0860bfc5 +0xf1:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::incUserLastCrashPlayStatus @ 0x860bed4

/* StatisticsToObserveCrash::incUserLastCrashPlayStatus(int) */

void StatisticsToObserveCrash::incUserLastCrashPlayStatus(int param_1)

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
                    /* try { // try from 0860bf08 to 0860bf79 has its CatchHandler @ 0860bf95 */
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
