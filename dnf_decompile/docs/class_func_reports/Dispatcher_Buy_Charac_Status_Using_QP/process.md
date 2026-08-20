# process

`_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Buy_Charac_Status_Using_QP` | `0x081d64b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d64b4  _ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d64b4, 0x081d65c1]
081d64b4 +0x000:  push   %ebp
081d64b5 +0x001:  mov    %esp,%ebp
081d64b7 +0x003:  sub    $0x48,%esp
081d64ba +0x006:  mov    0x10(%ebp),%eax
081d64bd +0x009:  mov    %eax,0x8(%esp)
081d64c1 +0x00d:  mov    0xc(%ebp),%eax
081d64c4 +0x010:  mov    %eax,0x4(%esp)
081d64c8 +0x014:  mov    0x8(%ebp),%eax
081d64cb +0x017:  mov    %eax,(%esp)
081d64ce +0x01a:  call   081d63e6 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Buy_Charac_Status_Using_QP::check_error(CUser*, MSG_BASE&)
081d64d3 +0x01f:  mov    %eax,-0x1c(%ebp)
081d64d6 +0x022:  cmpl   $0x0,-0x1c(%ebp)
081d64da +0x026:  jle    081d64e6 <+0x32>
081d64dc +0x028:  mov    $0xffffffff,%eax
081d64e1 +0x02d:  jmp    081d65bf <+0x10b>
081d64e6 +0x032:  cmpl   $0x0,-0x1c(%ebp)
081d64ea +0x036:  jns    081d6515 <+0x61>
081d64ec +0x038:  movl   $0x0,0xc(%esp)
081d64f4 +0x040:  movl   $0x0,0x8(%esp)
081d64fc +0x048:  movl   $&_ZZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d6504 +0x050:  movl   $0x3fc9,(%esp)
081d650b +0x057:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6510 +0x05c:  jmp    081d65bf <+0x10b>
081d6515 +0x061:  mov    0x14(%ebp),%eax
081d6518 +0x064:  mov    %eax,-0x18(%ebp)
081d651b +0x067:  mov    0x10(%ebp),%eax
081d651e +0x06a:  mov    %eax,-0x14(%ebp)
081d6521 +0x06d:  movl   $0xb,0x4(%esp)
081d6529 +0x075:  mov    0xc(%ebp),%eax
081d652c +0x078:  mov    %eax,(%esp)
081d652f +0x07b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d6534 +0x080:  mov    %eax,-0x10(%ebp)
081d6537 +0x083:  cmpl   $0x0,-0x10(%ebp)
081d653b +0x087:  jne    081d654e <+0x9a>
081d653d +0x089:  mov    -0x18(%ebp),%eax
081d6540 +0x08c:  movl   $0x1,0x8(%eax)
081d6547 +0x093:  mov    $0x0,%eax
081d654c +0x098:  jmp    081d65bf <+0x10b>
081d654e +0x09a:  movw   $0x0,-0x1e(%ebp)
081d6554 +0x0a0:  mov    -0x14(%ebp),%eax
081d6557 +0x0a3:  movzbl 0xe(%eax),%eax
081d655b +0x0a7:  movzbl %al,%edx
081d655e +0x0aa:  mov    -0x14(%ebp),%eax
081d6561 +0x0ad:  movzbl 0xd(%eax),%eax
081d6565 +0x0b1:  movzbl %al,%eax
081d6568 +0x0b4:  lea    -0x1e(%ebp),%ecx
081d656b +0x0b7:  mov    %ecx,0x10(%esp)
081d656f +0x0bb:  mov    %edx,0xc(%esp)
081d6573 +0x0bf:  mov    %eax,0x8(%esp)
081d6577 +0x0c3:  mov    0xc(%ebp),%eax
081d657a +0x0c6:  mov    %eax,0x4(%esp)
081d657e +0x0ca:  mov    -0x10(%ebp),%eax
081d6581 +0x0cd:  mov    %eax,(%esp)
081d6584 +0x0d0:  call   085ef306 <_ZN10CQuestShop9buyStatusEP5CUserhhRs>  ; CQuestShop::buyStatus(CUser*, unsigned char, unsigned char, short&)
081d6589 +0x0d5:  mov    %eax,-0xc(%ebp)
081d658c +0x0d8:  cmpl   $0x0,-0xc(%ebp)
081d6590 +0x0dc:  je     081d65a2 <+0xee>
081d6592 +0x0de:  mov    -0xc(%ebp),%edx
081d6595 +0x0e1:  mov    -0x18(%ebp),%eax
081d6598 +0x0e4:  mov    %edx,0x8(%eax)
081d659b +0x0e7:  mov    $0x0,%eax
081d65a0 +0x0ec:  jmp    081d65bf <+0x10b>
081d65a2 +0x0ee:  mov    -0x14(%ebp),%eax
081d65a5 +0x0f1:  movzbl 0xd(%eax),%edx
081d65a9 +0x0f5:  mov    -0x18(%ebp),%eax
081d65ac +0x0f8:  mov    %dl,0x4(%eax)
081d65af +0x0fb:  movzwl -0x1e(%ebp),%edx
081d65b3 +0x0ff:  mov    -0x18(%ebp),%eax
081d65b6 +0x102:  mov    %dx,0x6(%eax)
081d65ba +0x106:  mov    $0x0,%eax
081d65bf +0x10b:  leave
081d65c0 +0x10c:  ret
081d65c1 +0x10d:  nop
```

## 反编译 C

```c
// Dispatcher_Buy_Charac_Status_Using_QP::process @ 0x81d64b4

/* Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::process
          (Dispatcher_Buy_Charac_Status_Using_QP *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  MSG_BASE *pMVar3;
  short local_22;
  int local_20;
  ParamBase *local_1c;
  MSG_BASE *local_18;
  CQuestShop *local_14;
  
  pMVar3 = param_2;
  local_20 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (local_20 < 1) {
    if (local_20 < 0) {
      uVar1 = LineFunc(0x3fc9,
                       "virtual int Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      local_1c = param_3;
      local_18 = param_2;
      local_14 = (CQuestShop *)CUser::GetCharacExpandData(param_1,0xb,pMVar3);
      if (local_14 == (CQuestShop *)0x0) {
        *(undefined4 *)(local_1c + 8) = 1;
        uVar1 = 0;
      }
      else {
        local_22 = 0;
        iVar2 = CQuestShop::buyStatus
                          (local_14,param_1,(uchar)local_18[0xd],(uchar)local_18[0xe],&local_22);
        if (iVar2 == 0) {
          *(MSG_BASE *)(local_1c + 4) = local_18[0xd];
          *(short *)(local_1c + 6) = local_22;
          uVar1 = 0;
        }
        else {
          *(int *)(local_1c + 8) = iVar2;
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
