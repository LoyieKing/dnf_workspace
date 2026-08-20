# RegisterClientCrashDown

`_ZN28CClientCrashDownLogStatistic23RegisterClientCrashDownEi`

`CClientCrashDownLogStatistic::RegisterClientCrashDown(int)`

| 类 | 地址 |
|---|---|
| `CClientCrashDownLogStatistic` | `0x0860d038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d038  _ZN28CClientCrashDownLogStatistic23RegisterClientCrashDownEi
#           CClientCrashDownLogStatistic::RegisterClientCrashDown(int)
# range [0x0860d038, 0x0860d071]
0860d038 +0x00:  push   %ebp
0860d039 +0x01:  mov    %esp,%ebp
0860d03b +0x03:  sub    $0x28,%esp
0860d03e +0x06:  mov    0x8(%ebp),%eax
0860d041 +0x09:  lea    0xc(%ebp),%edx
0860d044 +0x0c:  mov    %edx,0x4(%esp)
0860d048 +0x10:  mov    %eax,(%esp)
0860d04b +0x13:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860d050 +0x18:  mov    (%eax),%eax
0860d052 +0x1a:  mov    %eax,-0xc(%ebp)
0860d055 +0x1d:  mov    0x8(%ebp),%eax
0860d058 +0x20:  lea    0xc(%ebp),%edx
0860d05b +0x23:  mov    %edx,0x4(%esp)
0860d05f +0x27:  mov    %eax,(%esp)
0860d062 +0x2a:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860d067 +0x2f:  addl   $0x1,-0xc(%ebp)
0860d06b +0x33:  mov    -0xc(%ebp),%edx
0860d06e +0x36:  mov    %edx,(%eax)
0860d070 +0x38:  leave
0860d071 +0x39:  ret
```

## 反编译 C

```c
// CClientCrashDownLogStatistic::RegisterClientCrashDown @ 0x860d038

/* CClientCrashDownLogStatistic::RegisterClientCrashDown(int) */

void CClientCrashDownLogStatistic::RegisterClientCrashDown(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )param_1,(int *)&stack0x00000008);
  iVar1 = *piVar2;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )param_1,(int *)&stack0x00000008);
  *piVar2 = iVar1 + 1;
  return;
}
```
