# _SaveAvatarItemOwnerChange

`_ZN11CTradeSpace26_SaveAvatarItemOwnerChangeEjjjh`

`CTradeSpace::_SaveAvatarItemOwnerChange(unsigned int, unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0853084a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853084a  _ZN11CTradeSpace26_SaveAvatarItemOwnerChangeEjjjh
#           CTradeSpace::_SaveAvatarItemOwnerChange(unsigned int, unsigned int, unsigned int, unsigned char)
# range [0x0853084a, 0x08530879]
0853084a +0x00:  push   %ebp
0853084b +0x01:  mov    %esp,%ebp
0853084d +0x03:  sub    $0x28,%esp
08530850 +0x06:  mov    0x18(%ebp),%eax
08530853 +0x09:  mov    %al,-0xc(%ebp)
08530856 +0x0c:  movzbl -0xc(%ebp),%eax
0853085a +0x10:  mov    %eax,0xc(%esp)
0853085e +0x14:  mov    0x14(%ebp),%eax
08530861 +0x17:  mov    %eax,0x8(%esp)
08530865 +0x1b:  mov    0x10(%ebp),%eax
08530868 +0x1e:  mov    %eax,0x4(%esp)
0853086c +0x22:  mov    0xc(%ebp),%eax
0853086f +0x25:  mov    %eax,(%esp)
08530872 +0x28:  call   0840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>  ; DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char)
08530877 +0x2d:  leave
08530878 +0x2e:  ret
08530879 +0x2f:  nop
```

## 反编译 C

```c
// CTradeSpace::_SaveAvatarItemOwnerChange @ 0x853084a

/* CTradeSpace::_SaveAvatarItemOwnerChange(unsigned int, unsigned int, unsigned int, unsigned char)
    */

void __thiscall
CTradeSpace::_SaveAvatarItemOwnerChange
          (CTradeSpace *this,uint param_1,uint param_2,uint param_3,uchar param_4)

{
  DB_AvatarChangeOwner::makeRequest(param_1,param_2,param_3,param_4);
  return;
}
```
