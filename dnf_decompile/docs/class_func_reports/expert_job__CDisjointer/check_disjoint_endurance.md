# check_disjoint_endurance

`_ZN10expert_job11CDisjointer24check_disjoint_enduranceEv`

`expert_job::CDisjointer::check_disjoint_endurance()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1f24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1f24  _ZN10expert_job11CDisjointer24check_disjoint_enduranceEv
#           expert_job::CDisjointer::check_disjoint_endurance()
# range [0x085d1f24, 0x085d1f67]
085d1f24 +0x00:  push   %ebp
085d1f25 +0x01:  mov    %esp,%ebp
085d1f27 +0x03:  sub    $0x18,%esp
085d1f2a +0x06:  mov    0x8(%ebp),%eax
085d1f2d +0x09:  add    $0x8,%eax
085d1f30 +0x0c:  mov    %eax,(%esp)
085d1f33 +0x0f:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d1f38 +0x14:  movl   $0x0,0x4(%esp)
085d1f40 +0x1c:  mov    %eax,(%esp)
085d1f43 +0x1f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d1f48 +0x24:  mov    %eax,(%esp)
085d1f4b +0x27:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d1f50 +0x2c:  test   %eax,%eax
085d1f52 +0x2e:  setle  %al
085d1f55 +0x31:  test   %al,%al
085d1f57 +0x33:  je     085d1f60 <+0x3c>
085d1f59 +0x35:  mov    $0x0,%eax
085d1f5e +0x3a:  jmp    085d1f65 <+0x41>
085d1f60 +0x3c:  mov    $0x1,%eax
085d1f65 +0x41:  leave
085d1f66 +0x42:  ret
085d1f67 +0x43:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::check_disjoint_endurance @ 0x85d1f24

/* expert_job::CDisjointer::check_disjoint_endurance() */

bool __thiscall expert_job::CDisjointer::check_disjoint_endurance(CDisjointer *this)

{
  CUser *pCVar1;
  CCharacExpertJob *this_00;
  int iVar2;
  
  pCVar1 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar1,0);
  iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(this_00);
  return 0 < iVar2;
}
```
