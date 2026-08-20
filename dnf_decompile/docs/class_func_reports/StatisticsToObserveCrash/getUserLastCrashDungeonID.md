# getUserLastCrashDungeonID

`_ZN24StatisticsToObserveCrash25getUserLastCrashDungeonIDEi`

`StatisticsToObserveCrash::getUserLastCrashDungeonID(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860be20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860be20  _ZN24StatisticsToObserveCrash25getUserLastCrashDungeonIDEi
#           StatisticsToObserveCrash::getUserLastCrashDungeonID(int)
# range [0x0860be20, 0x0860bed3]
0860be20 +0x00:  push   %ebp
0860be21 +0x01:  mov    %esp,%ebp
0860be23 +0x03:  push   %esi
0860be24 +0x04:  push   %ebx
0860be25 +0x05:  sub    $0x20,%esp
0860be28 +0x08:  mov    0x8(%ebp),%eax
0860be2b +0x0b:  add    $0x4,%eax
0860be2e +0x0e:  mov    %eax,0x4(%esp)
0860be32 +0x12:  lea    -0x10(%ebp),%eax
0860be35 +0x15:  mov    %eax,(%esp)
0860be38 +0x18:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860be3d +0x1d:  mov    0x8(%ebp),%eax
0860be40 +0x20:  lea    0x34(%eax),%ecx
0860be43 +0x23:  lea    -0x14(%ebp),%eax
0860be46 +0x26:  lea    0xc(%ebp),%edx
0860be49 +0x29:  mov    %edx,0x8(%esp)
0860be4d +0x2d:  mov    %ecx,0x4(%esp)
0860be51 +0x31:  mov    %eax,(%esp)
0860be54 +0x34:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0860be59 +0x39:  sub    $0x4,%esp
0860be5c +0x3c:  mov    0x8(%ebp),%eax
0860be5f +0x3f:  lea    0x34(%eax),%edx
0860be62 +0x42:  lea    -0xc(%ebp),%eax
0860be65 +0x45:  mov    %edx,0x4(%esp)
0860be69 +0x49:  mov    %eax,(%esp)
0860be6c +0x4c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860be71 +0x51:  sub    $0x4,%esp
0860be74 +0x54:  lea    -0xc(%ebp),%eax
0860be77 +0x57:  mov    %eax,0x4(%esp)
0860be7b +0x5b:  lea    -0x14(%ebp),%eax
0860be7e +0x5e:  mov    %eax,(%esp)
0860be81 +0x61:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860be86 +0x66:  test   %al,%al
0860be88 +0x68:  je     0860be9a <+0x7a>
0860be8a +0x6a:  lea    -0x14(%ebp),%eax
0860be8d +0x6d:  mov    %eax,(%esp)
0860be90 +0x70:  call   0819397a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e2>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e2
0860be95 +0x75:  mov    0x4(%eax),%ebx
0860be98 +0x78:  jmp    0860bebc <+0x9c>
0860be9a +0x7a:  mov    $0x0,%ebx
0860be9f +0x7f:  jmp    0860bebc <+0x9c>
0860bea1 +0x81:  mov    %edx,%ebx
0860bea3 +0x83:  mov    %eax,%esi
0860bea5 +0x85:  lea    -0x10(%ebp),%eax
0860bea8 +0x88:  mov    %eax,(%esp)
0860beab +0x8b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860beb0 +0x90:  mov    %esi,%eax
0860beb2 +0x92:  mov    %ebx,%edx
0860beb4 +0x94:  mov    %eax,(%esp)
0860beb7 +0x97:  call   08ae3750 <_Unwind_Resume>
0860bebc +0x9c:  lea    -0x10(%ebp),%eax
0860bebf +0x9f:  mov    %eax,(%esp)
0860bec2 +0xa2:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bec7 +0xa7:  mov    %ebx,%eax
0860bec9 +0xa9:  lea    -0x8(%ebp),%esp
0860becc +0xac:  add    $0x0,%esp
0860becf +0xaf:  pop    %ebx
0860bed0 +0xb0:  pop    %esi
0860bed1 +0xb1:  pop    %ebp
0860bed2 +0xb2:  ret
0860bed3 +0xb3:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::getUserLastCrashDungeonID @ 0x860be20

/* StatisticsToObserveCrash::getUserLastCrashDungeonID(int) */

undefined4 StatisticsToObserveCrash::getUserLastCrashDungeonID(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(param_1 + 4));
                    /* try { // try from 0860be54 to 0860be70 has its CatchHandler @ 0860bea1 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}
```
