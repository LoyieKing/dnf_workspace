# SetUserConnectP2P

`_ZN11pvp_assault10CAssaulter17SetUserConnectP2PEPci`

`pvp_assault::CAssaulter::SetUserConnectP2P(char*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6a82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6a82  _ZN11pvp_assault10CAssaulter17SetUserConnectP2PEPci
#           pvp_assault::CAssaulter::SetUserConnectP2P(char*, int)
# range [0x082e6a82, 0x082e6ab7]
082e6a82 +0x00:  push   %ebp
082e6a83 +0x01:  mov    %esp,%ebp
082e6a85 +0x03:  sub    $0x18,%esp
082e6a88 +0x06:  movl   $&_ZL14MAX_PVP_PLAYER,0x4(%esp)
082e6a90 +0x0e:  lea    0x10(%ebp),%eax
082e6a93 +0x11:  mov    %eax,(%esp)
082e6a96 +0x14:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
082e6a9b +0x19:  mov    (%eax),%eax
082e6a9d +0x1b:  mov    0x8(%ebp),%edx
082e6aa0 +0x1e:  add    $0x15,%edx
082e6aa3 +0x21:  mov    %eax,0x8(%esp)
082e6aa7 +0x25:  mov    0xc(%ebp),%eax
082e6aaa +0x28:  mov    %eax,0x4(%esp)
082e6aae +0x2c:  mov    %edx,(%esp)
082e6ab1 +0x2f:  call   0807d8a0 <_init+0x198>
082e6ab6 +0x34:  leave
082e6ab7 +0x35:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaulter::SetUserConnectP2P @ 0x82e6a82

/* pvp_assault::CAssaulter::SetUserConnectP2P(char*, int) */

void pvp_assault::CAssaulter::SetUserConnectP2P(char *param_1,int param_2)

{
  size_t *psVar1;
  
  psVar1 = (size_t *)std::min<int>((int *)&stack0x0000000c,&::MAX_PVP_PLAYER);
  memcpy(param_1 + 0x15,(void *)param_2,*psVar1);
  return;
}
```
