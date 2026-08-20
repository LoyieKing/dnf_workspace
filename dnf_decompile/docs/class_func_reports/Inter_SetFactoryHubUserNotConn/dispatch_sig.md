# dispatch_sig

`_ZN30Inter_SetFactoryHubUserNotConn12dispatch_sigEP5CUserPci`

`Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetFactoryHubUserNotConn` | `0x084dd0c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd0c4  _ZN30Inter_SetFactoryHubUserNotConn12dispatch_sigEP5CUserPci
#           Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser*, char*, int)
# range [0x084dd0c4, 0x084dd12d]
084dd0c4 +0x00:  push   %ebp
084dd0c5 +0x01:  mov    %esp,%ebp
084dd0c7 +0x03:  push   %ebx
084dd0c8 +0x04:  sub    $0x34,%esp
084dd0cb +0x07:  cmpl   $0x0,0xc(%ebp)
084dd0cf +0x0b:  je     084dd122 <+0x5e>
084dd0d1 +0x0d:  mov    0x10(%ebp),%eax
084dd0d4 +0x10:  mov    %eax,-0xc(%ebp)
084dd0d7 +0x13:  mov    0xc(%ebp),%eax
084dd0da +0x16:  mov    %eax,(%esp)
084dd0dd +0x19:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084dd0e2 +0x1e:  mov    0xc(%ebp),%eax
084dd0e5 +0x21:  mov    %eax,(%esp)
084dd0e8 +0x24:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084dd0ed +0x29:  mov    %eax,%ebx
084dd0ef +0x2b:  mov    -0xc(%ebp),%eax
084dd0f2 +0x2e:  movzwl 0x8(%eax),%eax
084dd0f6 +0x32:  movzwl %ax,%ecx
084dd0f9 +0x35:  mov    -0xc(%ebp),%eax
084dd0fc +0x38:  mov    0x4(%eax),%eax
084dd0ff +0x3b:  mov    %eax,%edx
084dd101 +0x3d:  mov    -0xc(%ebp),%eax
084dd104 +0x40:  mov    (%eax),%eax
084dd106 +0x42:  movl   $0x1,0x10(%esp)
084dd10e +0x4a:  mov    %ebx,0xc(%esp)
084dd112 +0x4e:  mov    %ecx,0x8(%esp)
084dd116 +0x52:  mov    %edx,0x4(%esp)
084dd11a +0x56:  mov    %eax,(%esp)
084dd11d +0x59:  call   080f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>  ; WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
084dd122 +0x5e:  mov    $0x0,%eax
084dd127 +0x63:  add    $0x34,%esp
084dd12a +0x66:  pop    %ebx
084dd12b +0x67:  pop    %ebp
084dd12c +0x68:  ret
084dd12d +0x69:  nop
```

## 反编译 C

```c
// Inter_SetFactoryHubUserNotConn::dispatch_sig @ 0x84dd0c4

/* Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    CUser::getHackAnalyzer((CUser *)param_2);
    iVar1 = CUser::get_acc_id((CUser *)param_2);
    WongWork::CHackAnalyzer::ReqDBSaveHackInfo
              (*(uint *)param_3,*(uint *)(param_3 + 4),*(ushort *)(param_3 + 8),iVar1,1);
  }
  return 0;
}
```
