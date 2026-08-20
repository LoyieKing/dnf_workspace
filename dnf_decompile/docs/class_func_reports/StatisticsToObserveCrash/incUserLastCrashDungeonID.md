# incUserLastCrashDungeonID

`_ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi`

`StatisticsToObserveCrash::incUserLastCrashDungeonID(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bd2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bd2e  _ZN24StatisticsToObserveCrash25incUserLastCrashDungeonIDEi
#           StatisticsToObserveCrash::incUserLastCrashDungeonID(int)
# range [0x0860bd2e, 0x0860be1f]
0860bd2e +0x00:  push   %ebp
0860bd2f +0x01:  mov    %esp,%ebp
0860bd31 +0x03:  push   %esi
0860bd32 +0x04:  push   %ebx
0860bd33 +0x05:  sub    $0x30,%esp
0860bd36 +0x08:  mov    0x8(%ebp),%eax
0860bd39 +0x0b:  add    $0x4,%eax
0860bd3c +0x0e:  mov    %eax,0x4(%esp)
0860bd40 +0x12:  lea    -0x24(%ebp),%eax
0860bd43 +0x15:  mov    %eax,(%esp)
0860bd46 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bd4b +0x1d:  mov    0x8(%ebp),%eax
0860bd4e +0x20:  lea    0x34(%eax),%ecx
0860bd51 +0x23:  lea    -0x28(%ebp),%eax
0860bd54 +0x26:  lea    0xc(%ebp),%edx
0860bd57 +0x29:  mov    %edx,0x8(%esp)
0860bd5b +0x2d:  mov    %ecx,0x4(%esp)
0860bd5f +0x31:  mov    %eax,(%esp)
0860bd62 +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860bd67 +0x39:  sub    $0x4,%esp
0860bd6a +0x3c:  mov    0x8(%ebp),%eax
0860bd6d +0x3f:  lea    0x34(%eax),%edx
0860bd70 +0x42:  lea    -0x20(%ebp),%eax
0860bd73 +0x45:  mov    %edx,0x4(%esp)
0860bd77 +0x49:  mov    %eax,(%esp)
0860bd7a +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860bd7f +0x51:  sub    $0x4,%esp
0860bd82 +0x54:  lea    -0x20(%ebp),%eax
0860bd85 +0x57:  mov    %eax,0x4(%esp)
0860bd89 +0x5b:  lea    -0x28(%ebp),%eax
0860bd8c +0x5e:  mov    %eax,(%esp)
0860bd8f +0x61:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
0860bd94 +0x66:  test   %al,%al
0860bd96 +0x68:  je     0860bdd9 <+0xab>
0860bd98 +0x6a:  movl   $0x1,-0xc(%ebp)
0860bd9f +0x71:  lea    -0xc(%ebp),%eax
0860bda2 +0x74:  mov    %eax,0x8(%esp)
0860bda6 +0x78:  lea    0xc(%ebp),%eax
0860bda9 +0x7b:  mov    %eax,0x4(%esp)
0860bdad +0x7f:  lea    -0x14(%ebp),%eax
0860bdb0 +0x82:  mov    %eax,(%esp)
0860bdb3 +0x85:  call   08610c38 <_GLOBAL__I__ZN10StatisticsC2Ev+0xcb6>  ; global constructors keyed to Statistics::Statistics()+0xcb6
0860bdb8 +0x8a:  mov    0x8(%ebp),%eax
0860bdbb +0x8d:  lea    0x34(%eax),%ecx
0860bdbe +0x90:  lea    -0x1c(%ebp),%eax
0860bdc1 +0x93:  lea    -0x14(%ebp),%edx
0860bdc4 +0x96:  mov    %edx,0x8(%esp)
0860bdc8 +0x9a:  mov    %ecx,0x4(%esp)
0860bdcc +0x9e:  mov    %eax,(%esp)
0860bdcf +0xa1:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0860bdd4 +0xa6:  sub    $0x4,%esp
0860bdd7 +0xa9:  jmp    0860be0a <+0xdc>
0860bdd9 +0xab:  lea    -0x28(%ebp),%eax
0860bddc +0xae:  mov    %eax,(%esp)
0860bddf +0xb1:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860bde4 +0xb6:  mov    0x4(%eax),%edx
0860bde7 +0xb9:  add    $0x1,%edx
0860bdea +0xbc:  mov    %edx,0x4(%eax)
0860bded +0xbf:  jmp    0860be0a <+0xdc>
0860bdef +0xc1:  mov    %edx,%ebx
0860bdf1 +0xc3:  mov    %eax,%esi
0860bdf3 +0xc5:  lea    -0x24(%ebp),%eax
0860bdf6 +0xc8:  mov    %eax,(%esp)
0860bdf9 +0xcb:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bdfe +0xd0:  mov    %esi,%eax
0860be00 +0xd2:  mov    %ebx,%edx
0860be02 +0xd4:  mov    %eax,(%esp)
0860be05 +0xd7:  call   08ae3750 <_Unwind_Resume>
0860be0a +0xdc:  lea    -0x24(%ebp),%eax
0860be0d +0xdf:  mov    %eax,(%esp)
0860be10 +0xe2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860be15 +0xe7:  lea    -0x8(%ebp),%esp
0860be18 +0xea:  add    $0x0,%esp
0860be1b +0xed:  pop    %ebx
0860be1c +0xee:  pop    %esi
0860be1d +0xef:  pop    %ebp
0860be1e +0xf0:  ret
0860be1f +0xf1:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::incUserLastCrashDungeonID @ 0x860bd2e

/* StatisticsToObserveCrash::incUserLastCrashDungeonID(int) */

void StatisticsToObserveCrash::incUserLastCrashDungeonID(int param_1)

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
                    /* try { // try from 0860bd62 to 0860bdd3 has its CatchHandler @ 0860bdef */
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
