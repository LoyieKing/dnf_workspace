# process

`_ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Clear_Used_QP` | `0x081d6786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d6786  _ZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d6786, 0x081d684f]
081d6786 +0x00:  push   %ebp
081d6787 +0x01:  mov    %esp,%ebp
081d6789 +0x03:  sub    $0x38,%esp
081d678c +0x06:  mov    0x10(%ebp),%eax
081d678f +0x09:  mov    %eax,0x8(%esp)
081d6793 +0x0d:  mov    0xc(%ebp),%eax
081d6796 +0x10:  mov    %eax,0x4(%esp)
081d679a +0x14:  mov    0x8(%ebp),%eax
081d679d +0x17:  mov    %eax,(%esp)
081d67a0 +0x1a:  call   081d6746 <_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Clear_Used_QP::check_error(CUser*, MSG_BASE&)
081d67a5 +0x1f:  mov    %eax,-0x1c(%ebp)
081d67a8 +0x22:  cmpl   $0x0,-0x1c(%ebp)
081d67ac +0x26:  jle    081d67b8 <+0x32>
081d67ae +0x28:  mov    $0xffffffff,%eax
081d67b3 +0x2d:  jmp    081d684d <+0xc7>
081d67b8 +0x32:  cmpl   $0x0,-0x1c(%ebp)
081d67bc +0x36:  jns    081d67e4 <+0x5e>
081d67be +0x38:  movl   $0x0,0xc(%esp)
081d67c6 +0x40:  movl   $0x0,0x8(%esp)
081d67ce +0x48:  movl   $&_ZZN24Dispatcher_Clear_Used_QP7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d67d6 +0x50:  movl   $0x4031,(%esp)
081d67dd +0x57:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d67e2 +0x5c:  jmp    081d684d <+0xc7>
081d67e4 +0x5e:  mov    0x14(%ebp),%eax
081d67e7 +0x61:  mov    %eax,-0x18(%ebp)
081d67ea +0x64:  mov    0x10(%ebp),%eax
081d67ed +0x67:  mov    %eax,-0x14(%ebp)
081d67f0 +0x6a:  movl   $0xb,0x4(%esp)
081d67f8 +0x72:  mov    0xc(%ebp),%eax
081d67fb +0x75:  mov    %eax,(%esp)
081d67fe +0x78:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d6803 +0x7d:  mov    %eax,-0x10(%ebp)
081d6806 +0x80:  cmpl   $0x0,-0x10(%ebp)
081d680a +0x84:  jne    081d681d <+0x97>
081d680c +0x86:  mov    -0x18(%ebp),%eax
081d680f +0x89:  movl   $0x1,0x4(%eax)
081d6816 +0x90:  mov    $0x0,%eax
081d681b +0x95:  jmp    081d684d <+0xc7>
081d681d +0x97:  mov    0xc(%ebp),%eax
081d6820 +0x9a:  mov    %eax,0x4(%esp)
081d6824 +0x9e:  mov    -0x10(%ebp),%eax
081d6827 +0xa1:  mov    %eax,(%esp)
081d682a +0xa4:  call   085ef426 <_ZN10CQuestShop11clearUsedQpEP5CUser>  ; CQuestShop::clearUsedQp(CUser*)
081d682f +0xa9:  mov    %eax,-0xc(%ebp)
081d6832 +0xac:  cmpl   $0x0,-0xc(%ebp)
081d6836 +0xb0:  je     081d6848 <+0xc2>
081d6838 +0xb2:  mov    -0xc(%ebp),%edx
081d683b +0xb5:  mov    -0x18(%ebp),%eax
081d683e +0xb8:  mov    %edx,0x4(%eax)
081d6841 +0xbb:  mov    $0x0,%eax
081d6846 +0xc0:  jmp    081d684d <+0xc7>
081d6848 +0xc2:  mov    $0x0,%eax
081d684d +0xc7:  leave
081d684e +0xc8:  ret
081d684f +0xc9:  nop
```

## 反编译 C

```c
// Dispatcher_Clear_Used_QP::process @ 0x81d6786

/* Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Clear_Used_QP::process
          (Dispatcher_Clear_Used_QP *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  CQuestShop *this_00;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = LineFunc(0x4031,
                       "virtual int Dispatcher_Clear_Used_QP::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      this_00 = (CQuestShop *)CUser::GetCharacExpandData(param_1,0xb,param_2);
      if (this_00 == (CQuestShop *)0x0) {
        *(undefined4 *)(param_3 + 4) = 1;
        uVar2 = 0;
      }
      else {
        iVar1 = CQuestShop::clearUsedQp(this_00,param_1);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          *(int *)(param_3 + 4) = iVar1;
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
