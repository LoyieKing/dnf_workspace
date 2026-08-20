# process

`_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GoldTakeIncreasingAmount::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoldTakeIncreasingAmount` | `0x081d55a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d55a4  _ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GoldTakeIncreasingAmount::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d55a4, 0x081d5655]
081d55a4 +0x00:  push   %ebp
081d55a5 +0x01:  mov    %esp,%ebp
081d55a7 +0x03:  push   %ebx
081d55a8 +0x04:  sub    $0x24,%esp
081d55ab +0x07:  mov    0x10(%ebp),%eax
081d55ae +0x0a:  mov    %eax,0x8(%esp)
081d55b2 +0x0e:  mov    0xc(%ebp),%eax
081d55b5 +0x11:  mov    %eax,0x4(%esp)
081d55b9 +0x15:  mov    0x8(%ebp),%eax
081d55bc +0x18:  mov    %eax,(%esp)
081d55bf +0x1b:  call   081d5656 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&)
081d55c4 +0x20:  mov    %eax,-0x18(%ebp)
081d55c7 +0x23:  cmpl   $0x0,-0x18(%ebp)
081d55cb +0x27:  jle    081d55d2 <+0x2e>
081d55cd +0x29:  mov    -0x18(%ebp),%eax
081d55d0 +0x2c:  jmp    081d5650 <+0xac>
081d55d2 +0x2e:  cmpl   $0x0,-0x18(%ebp)
081d55d6 +0x32:  jns    081d55df <+0x3b>
081d55d8 +0x34:  mov    $0xffffffff,%eax
081d55dd +0x39:  jmp    081d5650 <+0xac>
081d55df +0x3b:  mov    0x10(%ebp),%eax
081d55e2 +0x3e:  mov    %eax,-0x14(%ebp)
081d55e5 +0x41:  mov    0x14(%ebp),%eax
081d55e8 +0x44:  mov    %eax,-0x10(%ebp)
081d55eb +0x47:  mov    -0x14(%ebp),%eax
081d55ee +0x4a:  mov    0xd(%eax),%edx
081d55f1 +0x4d:  mov    -0x10(%ebp),%eax
081d55f4 +0x50:  mov    %edx,0x4(%eax)
081d55f7 +0x53:  mov    -0x10(%ebp),%eax
081d55fa +0x56:  mov    0x4(%eax),%eax
081d55fd +0x59:  cmp    $0xf68a,%eax
081d5602 +0x5e:  jne    081d5644 <+0xa0>
081d5604 +0x60:  mov    -0x10(%ebp),%eax
081d5607 +0x63:  lea    0x4(%eax),%ebx
081d560a +0x66:  mov    0xc(%ebp),%eax
081d560d +0x69:  mov    %eax,(%esp)
081d5610 +0x6c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d5615 +0x71:  mov    %eax,(%esp)
081d5618 +0x74:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081d561d +0x79:  mov    %ebx,0x4(%esp)
081d5621 +0x7d:  mov    %eax,(%esp)
081d5624 +0x80:  call   0833c41e <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi>  ; user_creature::CCreatureMgr::SetOverSkillTime(int const&)
081d5629 +0x85:  mov    %eax,-0xc(%ebp)
081d562c +0x88:  cmpl   $0x0,-0xc(%ebp)
081d5630 +0x8c:  jne    081d563b <+0x97>
081d5632 +0x8e:  mov    -0x10(%ebp),%eax
081d5635 +0x91:  movb   $0x1,0x8(%eax)
081d5639 +0x95:  jmp    081d564b <+0xa7>
081d563b +0x97:  mov    -0x10(%ebp),%eax
081d563e +0x9a:  movb   $0x0,0x8(%eax)
081d5642 +0x9e:  jmp    081d564b <+0xa7>
081d5644 +0xa0:  mov    $0x15,%eax
081d5649 +0xa5:  jmp    081d5650 <+0xac>
081d564b +0xa7:  mov    $0x0,%eax
081d5650 +0xac:  add    $0x24,%esp
081d5653 +0xaf:  pop    %ebx
081d5654 +0xb0:  pop    %ebp
081d5655 +0xb1:  ret
```

## 反编译 C

```c
// Dispatcher_GoldTakeIncreasingAmount::process @ 0x81d55a4

/* Dispatcher_GoldTakeIncreasingAmount::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_GoldTakeIncreasingAmount::process
          (Dispatcher_GoldTakeIncreasingAmount *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0xd);
      if (*(int *)(param_3 + 4) == 0xf68a) {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
        iVar1 = user_creature::CCreatureMgr::SetOverSkillTime(this_01,(int *)(param_3 + 4));
        if (iVar1 == 0) {
          param_3[8] = (ParamBase)0x1;
        }
        else {
          param_3[8] = (ParamBase)0x0;
        }
        iVar1 = 0;
      }
      else {
        iVar1 = 0x15;
      }
    }
  }
  return iVar1;
}
```
