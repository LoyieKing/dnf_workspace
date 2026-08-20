# SendMail

`_ZN17CAradRyosikaEvent8SendMailEP5CUseriii`

`CAradRyosikaEvent::SendMail(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0fe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0fe4  _ZN17CAradRyosikaEvent8SendMailEP5CUseriii
#           CAradRyosikaEvent::SendMail(CUser*, int, int, int)
# range [0x081a0fe4, 0x081a107b]
081a0fe4 +0x00:  push   %ebp
081a0fe5 +0x01:  mov    %esp,%ebp
081a0fe7 +0x03:  push   %ebx
081a0fe8 +0x04:  sub    $0x24,%esp
081a0feb +0x07:  mov    0x8(%ebp),%eax
081a0fee +0x0a:  mov    0x10(%eax),%eax
081a0ff1 +0x0d:  test   %eax,%eax
081a0ff3 +0x0f:  jns    081a102a <+0x46>
081a0ff5 +0x11:  mov    0x8(%ebp),%eax
081a0ff8 +0x14:  mov    0xc(%eax),%ebx
081a0ffb +0x17:  call   081a1155 <_GLOBAL__I__ZN17CAradRyosikaEventC2Ev+0x1c>  ; global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()+0x1c
081a1000 +0x1c:  mov    %ebx,0x14(%esp)
081a1004 +0x20:  mov    0x18(%ebp),%edx
081a1007 +0x23:  mov    %edx,0x10(%esp)
081a100b +0x27:  mov    0x14(%ebp),%edx
081a100e +0x2a:  mov    %edx,0xc(%esp)
081a1012 +0x2e:  mov    0x10(%ebp),%edx
081a1015 +0x31:  mov    %edx,0x8(%esp)
081a1019 +0x35:  mov    0xc(%ebp),%edx
081a101c +0x38:  mov    %edx,0x4(%esp)
081a1020 +0x3c:  mov    %eax,(%esp)
081a1023 +0x3f:  call   081a329e <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii>  ; Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)
081a1028 +0x44:  jmp    081a1075 <+0x91>
081a102a +0x46:  cmpl   $0x7,0x18(%ebp)
081a102e +0x4a:  jne    081a1037 <+0x53>
081a1030 +0x4c:  movl   $0x5,0x14(%ebp)
081a1037 +0x53:  mov    0x8(%ebp),%eax
081a103a +0x56:  mov    0x10(%eax),%eax
081a103d +0x59:  cmp    0x18(%ebp),%eax
081a1040 +0x5c:  jne    081a1075 <+0x91>
081a1042 +0x5e:  mov    0x8(%ebp),%eax
081a1045 +0x61:  mov    0xc(%eax),%ebx
081a1048 +0x64:  call   081a1155 <_GLOBAL__I__ZN17CAradRyosikaEventC2Ev+0x1c>  ; global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()+0x1c
081a104d +0x69:  mov    %ebx,0x14(%esp)
081a1051 +0x6d:  mov    0x18(%ebp),%edx
081a1054 +0x70:  mov    %edx,0x10(%esp)
081a1058 +0x74:  mov    0x14(%ebp),%edx
081a105b +0x77:  mov    %edx,0xc(%esp)
081a105f +0x7b:  mov    0x10(%ebp),%edx
081a1062 +0x7e:  mov    %edx,0x8(%esp)
081a1066 +0x82:  mov    0xc(%ebp),%edx
081a1069 +0x85:  mov    %edx,0x4(%esp)
081a106d +0x89:  mov    %eax,(%esp)
081a1070 +0x8c:  call   081a329e <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii>  ; Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)
081a1075 +0x91:  add    $0x24,%esp
081a1078 +0x94:  pop    %ebx
081a1079 +0x95:  pop    %ebp
081a107a +0x96:  ret
081a107b +0x97:  nop
```

## 反编译 C

```c
// CAradRyosikaEvent::SendMail @ 0x81a0fe4

/* CAradRyosikaEvent::SendMail(CUser*, int, int, int) */

void __thiscall
CAradRyosikaEvent::SendMail
          (CAradRyosikaEvent *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  Arad_GiftItem_Set *pAVar2;
  
  if (*(int *)(this + 0x10) < 0) {
    iVar1 = *(int *)(this + 0xc);
    pAVar2 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
    Arad_GiftItem_Set::send_mail(pAVar2,param_1,param_2,param_3,param_4,iVar1);
  }
  else {
    if (param_4 == 7) {
      param_3 = 5;
    }
    if (*(int *)(this + 0x10) == param_4) {
      iVar1 = *(int *)(this + 0xc);
      pAVar2 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
      Arad_GiftItem_Set::send_mail(pAVar2,param_1,param_2,param_3,param_4,iVar1);
    }
  }
  return;
}
```
