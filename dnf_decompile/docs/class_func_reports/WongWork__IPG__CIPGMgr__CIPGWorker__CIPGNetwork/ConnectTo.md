# ConnectTo

`_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct`

`WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork` | `0x081043e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081043e0  _ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct
#           WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)
# range [0x081043e0, 0x08104493]
081043e0 +0x00:  push   %ebp
081043e1 +0x01:  mov    %esp,%ebp
081043e3 +0x03:  sub    $0x48,%esp
081043e6 +0x06:  mov    0x10(%ebp),%eax
081043e9 +0x09:  mov    %ax,-0x2c(%ebp)
081043ed +0x0d:  movl   $0x0,0x8(%esp)
081043f5 +0x15:  movl   $0x1,0x4(%esp)
081043fd +0x1d:  movl   $0x2,(%esp)
08104404 +0x24:  call   0807dab0 <_init+0x3a8>
08104409 +0x29:  mov    0x8(%ebp),%edx
0810440c +0x2c:  mov    %eax,(%edx)
0810440e +0x2e:  mov    0x8(%ebp),%eax
08104411 +0x31:  mov    (%eax),%eax
08104413 +0x33:  test   %eax,%eax
08104415 +0x35:  jns    0810441e <+0x3e>
08104417 +0x37:  mov    $0xffffffff,%eax
0810441c +0x3c:  jmp    08104492 <+0xb2>
0810441e +0x3e:  movl   $0x10,0x8(%esp)
08104426 +0x46:  movl   $0x0,0x4(%esp)
0810442e +0x4e:  lea    -0x1c(%ebp),%eax
08104431 +0x51:  mov    %eax,(%esp)
08104434 +0x54:  call   0807dcc0 <_init+0x5b8>
08104439 +0x59:  movw   $0x2,-0x1c(%ebp)
0810443f +0x5f:  mov    0xc(%ebp),%eax
08104442 +0x62:  mov    %eax,(%esp)
08104445 +0x65:  call   0807e530 <_init+0xe28>
0810444a +0x6a:  mov    %eax,-0x18(%ebp)
0810444d +0x6d:  movzwl -0x2c(%ebp),%eax
08104451 +0x71:  mov    %eax,(%esp)
08104454 +0x74:  call   0807e680 <_init+0xf78>
08104459 +0x79:  mov    %ax,-0x1a(%ebp)
0810445d +0x7d:  movl   $0x10,-0xc(%ebp)
08104464 +0x84:  mov    -0xc(%ebp),%ecx
08104467 +0x87:  lea    -0x1c(%ebp),%edx
0810446a +0x8a:  mov    0x8(%ebp),%eax
0810446d +0x8d:  mov    (%eax),%eax
0810446f +0x8f:  mov    %ecx,0x8(%esp)
08104473 +0x93:  mov    %edx,0x4(%esp)
08104477 +0x97:  mov    %eax,(%esp)
0810447a +0x9a:  call   0807e230 <_init+0xb28>
0810447f +0x9f:  shr    $0x1f,%eax
08104482 +0xa2:  test   %al,%al
08104484 +0xa4:  je     0810448d <+0xad>
08104486 +0xa6:  mov    $0xfffffffe,%eax
0810448b +0xab:  jmp    08104492 <+0xb2>
0810448d +0xad:  mov    $0x0,%eax
08104492 +0xb2:  leave
08104493 +0xb3:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo @ 0x81043e0

/* WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short) */

undefined4 __thiscall
WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo
          (CIPGNetwork *this,char *param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr local_20;
  undefined4 local_10;
  
  iVar1 = socket(2,1,0);
  *(int *)this = iVar1;
  if (*(int *)this < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._2_4_ = inet_addr(param_1);
    local_20.sa_data._0_2_ = htons(param_2);
    local_10 = 0x10;
    iVar1 = connect(*(int *)this,&local_20,0x10);
    if (iVar1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
