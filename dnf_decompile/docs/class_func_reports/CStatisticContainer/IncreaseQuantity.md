# IncreaseQuantity

`_ZN19CStatisticContainer16IncreaseQuantityEi`

`CStatisticContainer::IncreaseQuantity(int)`

| 类 | 地址 |
|---|---|
| `CStatisticContainer` | `0x0860e7f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e7f8  _ZN19CStatisticContainer16IncreaseQuantityEi
#           CStatisticContainer::IncreaseQuantity(int)
# range [0x0860e7f8, 0x0860e837]
0860e7f8 +0x00:  push   %ebp
0860e7f9 +0x01:  mov    %esp,%ebp
0860e7fb +0x03:  sub    $0x28,%esp
0860e7fe +0x06:  mov    0x8(%ebp),%eax
0860e801 +0x09:  lea    0x4(%eax),%edx
0860e804 +0x0c:  lea    0xc(%ebp),%eax
0860e807 +0x0f:  mov    %eax,0x4(%esp)
0860e80b +0x13:  mov    %edx,(%esp)
0860e80e +0x16:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860e813 +0x1b:  mov    (%eax),%eax
0860e815 +0x1d:  mov    %eax,-0xc(%ebp)
0860e818 +0x20:  mov    0x8(%ebp),%eax
0860e81b +0x23:  lea    0x4(%eax),%edx
0860e81e +0x26:  lea    0xc(%ebp),%eax
0860e821 +0x29:  mov    %eax,0x4(%esp)
0860e825 +0x2d:  mov    %edx,(%esp)
0860e828 +0x30:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860e82d +0x35:  addl   $0x1,-0xc(%ebp)
0860e831 +0x39:  mov    -0xc(%ebp),%edx
0860e834 +0x3c:  mov    %edx,(%eax)
0860e836 +0x3e:  leave
0860e837 +0x3f:  ret
```

## 反编译 C

```c
// CStatisticContainer::IncreaseQuantity @ 0x860e7f8

/* CStatisticContainer::IncreaseQuantity(int) */

void CStatisticContainer::IncreaseQuantity(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(param_1 + 4),(int *)&stack0x00000008);
  iVar1 = *piVar2;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(param_1 + 4),(int *)&stack0x00000008);
  *piVar2 = iVar1 + 1;
  return;
}
```
