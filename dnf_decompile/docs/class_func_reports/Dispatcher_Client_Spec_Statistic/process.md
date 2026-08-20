# process

`_ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Client_Spec_Statistic::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Client_Spec_Statistic` | `0x081ce6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce6d4  _ZN32Dispatcher_Client_Spec_Statistic7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Client_Spec_Statistic::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce6d4, 0x081ce759]
081ce6d4 +0x00:  push   %ebp
081ce6d5 +0x01:  mov    %esp,%ebp
081ce6d7 +0x03:  sub    $0x28,%esp
081ce6da +0x06:  mov    0x10(%ebp),%eax
081ce6dd +0x09:  mov    %eax,0x8(%esp)
081ce6e1 +0x0d:  mov    0xc(%ebp),%eax
081ce6e4 +0x10:  mov    %eax,0x4(%esp)
081ce6e8 +0x14:  mov    0x8(%ebp),%eax
081ce6eb +0x17:  mov    %eax,(%esp)
081ce6ee +0x1a:  call   081ce75a <_ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&)
081ce6f3 +0x1f:  mov    %eax,-0x18(%ebp)
081ce6f6 +0x22:  cmpl   $0x0,-0x18(%ebp)
081ce6fa +0x26:  jle    081ce701 <+0x2d>
081ce6fc +0x28:  mov    -0x18(%ebp),%eax
081ce6ff +0x2b:  jmp    081ce757 <+0x83>
081ce701 +0x2d:  cmpl   $0x0,-0x18(%ebp)
081ce705 +0x31:  jns    081ce70e <+0x3a>
081ce707 +0x33:  mov    $0xffffffff,%eax
081ce70c +0x38:  jmp    081ce757 <+0x83>
081ce70e +0x3a:  mov    0x10(%ebp),%eax
081ce711 +0x3d:  mov    %eax,-0x14(%ebp)
081ce714 +0x40:  mov    0x14(%ebp),%eax
081ce717 +0x43:  mov    %eax,-0x10(%ebp)
081ce71a +0x46:  mov    -0x14(%ebp),%eax
081ce71d +0x49:  movzbl 0xd(%eax),%edx
081ce721 +0x4d:  mov    -0x10(%ebp),%eax
081ce724 +0x50:  mov    %dl,0x4(%eax)
081ce727 +0x53:  mov    0xc(%ebp),%eax
081ce72a +0x56:  mov    %eax,(%esp)
081ce72d +0x59:  call   0822fcd6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5380>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5380
081ce732 +0x5e:  mov    %eax,-0xc(%ebp)
081ce735 +0x61:  mov    -0x14(%ebp),%eax
081ce738 +0x64:  add    $0xe,%eax
081ce73b +0x67:  movl   $0xbf8,0x8(%esp)
081ce743 +0x6f:  mov    %eax,0x4(%esp)
081ce747 +0x73:  mov    -0xc(%ebp),%eax
081ce74a +0x76:  mov    %eax,(%esp)
081ce74d +0x79:  call   0807d8a0 <_init+0x198>
081ce752 +0x7e:  mov    $0x0,%eax
081ce757 +0x83:  leave
081ce758 +0x84:  ret
081ce759 +0x85:  nop
```

## 反编译 C

```c
// Dispatcher_Client_Spec_Statistic::process @ 0x81ce6d4

/* Dispatcher_Client_Spec_Statistic::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Client_Spec_Statistic::process
          (Dispatcher_Client_Spec_Statistic *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  void *__dest;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(MSG_BASE *)(param_3 + 4) = param_2[0xd];
      __dest = (void *)CUser::getClientHWSpec(param_1);
      memcpy(__dest,param_2 + 0xe,0xbf8);
      iVar1 = 0;
    }
  }
  return iVar1;
}
```
