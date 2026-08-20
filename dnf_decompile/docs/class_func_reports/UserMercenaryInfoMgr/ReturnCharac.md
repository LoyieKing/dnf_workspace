# ReturnCharac

`_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result`

`UserMercenaryInfoMgr::ReturnCharac(CUser*, unsigned int, competition_reward_result&)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b44c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b44c0  _ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result
#           UserMercenaryInfoMgr::ReturnCharac(CUser*, unsigned int, competition_reward_result&)
# range [0x081b44c0, 0x081b4535]
081b44c0 +0x00:  push   %ebp
081b44c1 +0x01:  mov    %esp,%ebp
081b44c3 +0x03:  sub    $0x28,%esp
081b44c6 +0x06:  cmpl   $0x0,0xc(%ebp)
081b44ca +0x0a:  jne    081b44d3 <+0x13>
081b44cc +0x0c:  mov    $0x0,%eax
081b44d1 +0x11:  jmp    081b4533 <+0x73>
081b44d3 +0x13:  mov    0x10(%ebp),%eax
081b44d6 +0x16:  mov    %eax,0x4(%esp)
081b44da +0x1a:  mov    0x8(%ebp),%eax
081b44dd +0x1d:  mov    %eax,(%esp)
081b44e0 +0x20:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
081b44e5 +0x25:  mov    %eax,-0xc(%ebp)
081b44e8 +0x28:  mov    -0xc(%ebp),%eax
081b44eb +0x2b:  movzbl %al,%eax
081b44ee +0x2e:  mov    %eax,0x4(%esp)
081b44f2 +0x32:  mov    0x8(%ebp),%eax
081b44f5 +0x35:  mov    %eax,(%esp)
081b44f8 +0x38:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
081b44fd +0x3d:  xor    $0x1,%eax
081b4500 +0x40:  test   %al,%al
081b4502 +0x42:  je     081b450b <+0x4b>
081b4504 +0x44:  mov    $0x0,%eax
081b4509 +0x49:  jmp    081b4533 <+0x73>
081b450b +0x4b:  mov    -0xc(%ebp),%edx
081b450e +0x4e:  mov    0x8(%ebp),%eax
081b4511 +0x51:  mov    %edx,0x4(%esp)
081b4515 +0x55:  mov    %eax,(%esp)
081b4518 +0x58:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b451d +0x5d:  mov    0x14(%ebp),%edx
081b4520 +0x60:  mov    %edx,0x8(%esp)
081b4524 +0x64:  mov    0xc(%ebp),%edx
081b4527 +0x67:  mov    %edx,0x4(%esp)
081b452b +0x6b:  mov    %eax,(%esp)
081b452e +0x6e:  call   081b3b68 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result>  ; CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&)
081b4533 +0x73:  leave
081b4534 +0x74:  ret
081b4535 +0x75:  nop
```

## 反编译 C

```c
// UserMercenaryInfoMgr::ReturnCharac @ 0x81b44c0

/* UserMercenaryInfoMgr::ReturnCharac(CUser*, unsigned int, competition_reward_result&) */

undefined4 __thiscall
UserMercenaryInfoMgr::ReturnCharac
          (UserMercenaryInfoMgr *this,CUser *param_1,uint param_2,competition_reward_result *param_3
          )

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  CHARAC_LOAD_MERCENARY *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = FindIndexByCharacNo(this,param_2);
    cVar1 = CheckCharacIndex(this,(uchar)uVar3);
    if (cVar1 == '\x01') {
      this_00 = (CHARAC_LOAD_MERCENARY *)
                std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                          ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                           this,uVar3);
      uVar2 = CHARAC_LOAD_MERCENARY::Reward(this_00,param_1,param_3);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
