# subQp

`_ZN10CQuestShop5subQpEhh`

`CQuestShop::subQp(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eed2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eed2a  _ZN10CQuestShop5subQpEhh
#           CQuestShop::subQp(unsigned char, unsigned char)
# range [0x085eed2a, 0x085eeda7]
085eed2a +0x00:  push   %ebp
085eed2b +0x01:  mov    %esp,%ebp
085eed2d +0x03:  sub    $0x38,%esp
085eed30 +0x06:  mov    0xc(%ebp),%edx
085eed33 +0x09:  mov    0x10(%ebp),%eax
085eed36 +0x0c:  mov    %dl,-0x1c(%ebp)
085eed39 +0x0f:  mov    %al,-0x20(%ebp)
085eed3c +0x12:  movl   $0x0,-0xc(%ebp)
085eed43 +0x19:  movzbl -0x1c(%ebp),%eax
085eed47 +0x1d:  mov    %eax,0x4(%esp)
085eed4b +0x21:  mov    0x8(%ebp),%eax
085eed4e +0x24:  mov    %eax,(%esp)
085eed51 +0x27:  call   085eeda8 <_ZN10CQuestShop12findStatusQpEh>  ; CQuestShop::findStatusQp(unsigned char)
085eed56 +0x2c:  mov    %eax,-0xc(%ebp)
085eed59 +0x2f:  cmpl   $0x0,-0xc(%ebp)
085eed5d +0x33:  jg     085eed66 <+0x3c>
085eed5f +0x35:  mov    $0x1,%eax
085eed64 +0x3a:  jmp    085eeda6 <+0x7c>
085eed66 +0x3c:  movzbl -0x20(%ebp),%eax
085eed6a +0x40:  mov    -0xc(%ebp),%edx
085eed6d +0x43:  imul   %edx,%eax
085eed70 +0x46:  mov    %eax,-0xc(%ebp)
085eed73 +0x49:  mov    0x8(%ebp),%eax
085eed76 +0x4c:  mov    %eax,(%esp)
085eed79 +0x4f:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085eed7e +0x54:  sub    -0xc(%ebp),%eax
085eed81 +0x57:  shr    $0x1f,%eax
085eed84 +0x5a:  test   %al,%al
085eed86 +0x5c:  je     085eed8f <+0x65>
085eed88 +0x5e:  mov    $0x16,%eax
085eed8d +0x63:  jmp    085eeda6 <+0x7c>
085eed8f +0x65:  mov    -0xc(%ebp),%eax
085eed92 +0x68:  mov    %eax,0x4(%esp)
085eed96 +0x6c:  mov    0x8(%ebp),%eax
085eed99 +0x6f:  mov    %eax,(%esp)
085eed9c +0x72:  call   085efebc <_GLOBAL__I__ZN10CQuestShopC2Ev+0x28>  ; global constructors keyed to CQuestShop::CQuestShop()+0x28
085eeda1 +0x77:  mov    $0x0,%eax
085eeda6 +0x7c:  leave
085eeda7 +0x7d:  ret
```

## 反编译 C

```c
// CQuestShop::subQp @ 0x85eed2a

/* CQuestShop::subQp(unsigned char, unsigned char) */

undefined4 __thiscall CQuestShop::subQp(CQuestShop *this,uchar param_1,uchar param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = findStatusQp(this,param_1);
  if (iVar1 < 1) {
    uVar2 = 1;
  }
  else {
    iVar3 = getQp(this);
    if ((int)(iVar3 - (uint)param_2 * iVar1) < 0) {
      uVar2 = 0x16;
    }
    else {
      subQp(this,(uint)param_2 * iVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
