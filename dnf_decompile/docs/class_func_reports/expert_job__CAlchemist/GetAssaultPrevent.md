# GetAssaultPrevent

`_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb`

`expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d137c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d137c  _ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb
#           expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
# range [0x085d137c, 0x085d1423]
085d137c +0x00:  push   %ebp
085d137d +0x01:  mov    %esp,%ebp
085d137f +0x03:  sub    $0x28,%esp
085d1382 +0x06:  mov    0x8(%ebp),%eax
085d1385 +0x09:  mov    %eax,(%esp)
085d1388 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085d138d +0x11:  mov    %eax,-0x14(%ebp)
085d1390 +0x14:  movl   $0x27ac4a,0x4(%esp)
085d1398 +0x1c:  mov    0x8(%ebp),%eax
085d139b +0x1f:  mov    %eax,(%esp)
085d139e +0x22:  call   085d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>  ; expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
085d13a3 +0x27:  test   %al,%al
085d13a5 +0x29:  je     085d13ae <+0x32>
085d13a7 +0x2b:  mov    $0x1,%eax
085d13ac +0x30:  jmp    085d1422 <+0xa6>
085d13ae +0x32:  cmpl   $0x0,-0x14(%ebp)
085d13b2 +0x36:  je     085d141d <+0xa1>
085d13b4 +0x38:  movl   $0x0,-0x10(%ebp)
085d13bb +0x3f:  jmp    085d1412 <+0x96>
085d13bd +0x41:  mov    -0x10(%ebp),%eax
085d13c0 +0x44:  mov    %eax,0x4(%esp)
085d13c4 +0x48:  mov    -0x14(%ebp),%eax
085d13c7 +0x4b:  mov    %eax,(%esp)
085d13ca +0x4e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085d13cf +0x53:  mov    %eax,-0xc(%ebp)
085d13d2 +0x56:  cmpl   $0x0,-0xc(%ebp)
085d13d6 +0x5a:  je     085d140a <+0x8e>
085d13d8 +0x5c:  mov    -0xc(%ebp),%eax
085d13db +0x5f:  cmp    0x8(%ebp),%eax
085d13de +0x62:  je     085d140d <+0x91>
085d13e0 +0x64:  movl   $0x27ac4a,0x4(%esp)
085d13e8 +0x6c:  mov    -0xc(%ebp),%eax
085d13eb +0x6f:  mov    %eax,(%esp)
085d13ee +0x72:  call   085d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>  ; expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
085d13f3 +0x77:  test   %al,%al
085d13f5 +0x79:  je     085d140e <+0x92>
085d13f7 +0x7b:  cmpl   $0x0,0xc(%ebp)
085d13fb +0x7f:  je     085d1403 <+0x87>
085d13fd +0x81:  mov    0xc(%ebp),%eax
085d1400 +0x84:  movb   $0x1,(%eax)
085d1403 +0x87:  mov    $0x1,%eax
085d1408 +0x8c:  jmp    085d1422 <+0xa6>
085d140a +0x8e:  nop
085d140b +0x8f:  jmp    085d140e <+0x92>
085d140d +0x91:  nop
085d140e +0x92:  addl   $0x1,-0x10(%ebp)
085d1412 +0x96:  cmpl   $0x3,-0x10(%ebp)
085d1416 +0x9a:  setle  %al
085d1419 +0x9d:  test   %al,%al
085d141b +0x9f:  jne    085d13bd <+0x41>
085d141d +0xa1:  mov    $0x0,%eax
085d1422 +0xa6:  leave
085d1423 +0xa7:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::GetAssaultPrevent @ 0x85d137c

/* expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*) */

undefined4 expert_job::CAlchemist::GetAssaultPrevent(CUser *param_1,bool *param_2)

{
  char cVar1;
  CParty *this;
  undefined4 uVar2;
  CUser *pCVar3;
  int local_14;
  
  this = (CParty *)CUser::GetParty(param_1);
  cVar1 = IsExistContinuousEffectItem(param_1,0x27ac4a);
  if (cVar1 == '\0') {
    if (this != (CParty *)0x0) {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        pCVar3 = (CUser *)CParty::get_user(this,local_14);
        if (((pCVar3 != (CUser *)0x0) && (pCVar3 != param_1)) &&
           (cVar1 = IsExistContinuousEffectItem(pCVar3,0x27ac4a), cVar1 != '\0')) {
          if (param_2 != (bool *)0x0) {
            *param_2 = true;
          }
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
