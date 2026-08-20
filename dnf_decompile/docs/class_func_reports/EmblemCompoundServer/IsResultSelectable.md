# IsResultSelectable

`_ZN20EmblemCompoundServer18IsResultSelectableEi`

`EmblemCompoundServer::IsResultSelectable(int)`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x08191ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191ad6  _ZN20EmblemCompoundServer18IsResultSelectableEi
#           EmblemCompoundServer::IsResultSelectable(int)
# range [0x08191ad6, 0x08191af9]
08191ad6 +0x00:  push   %ebp
08191ad7 +0x01:  mov    %esp,%ebp
08191ad9 +0x03:  sub    $0x18,%esp
08191adc +0x06:  mov    0x8(%ebp),%eax
08191adf +0x09:  lea    0x1c(%eax),%edx
08191ae2 +0x0c:  lea    0xc(%ebp),%eax
08191ae5 +0x0f:  mov    %eax,0x4(%esp)
08191ae9 +0x13:  mov    %edx,(%esp)
08191aec +0x16:  call   0819363c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x2a4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x2a4
08191af1 +0x1b:  mov    (%eax),%eax
08191af3 +0x1d:  movzbl 0x8(%eax),%eax
08191af7 +0x21:  leave
08191af8 +0x22:  ret
08191af9 +0x23:  nop
```

## 反编译 C

```c
// EmblemCompoundServer::IsResultSelectable @ 0x8191ad6

/* EmblemCompoundServer::IsResultSelectable(int) */

undefined1 EmblemCompoundServer::IsResultSelectable(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)std::
                  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                  ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                                *)(param_1 + 0x1c),(int *)&stack0x00000008);
  return *(undefined1 *)(*piVar1 + 8);
}
```
