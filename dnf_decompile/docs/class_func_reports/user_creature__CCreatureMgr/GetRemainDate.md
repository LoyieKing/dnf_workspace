# GetRemainDate

`_ZNK13user_creature12CCreatureMgr13GetRemainDateEii`

`user_creature::CCreatureMgr::GetRemainDate(int, int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d78e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d78e  _ZNK13user_creature12CCreatureMgr13GetRemainDateEii
#           user_creature::CCreatureMgr::GetRemainDate(int, int) const
# range [0x0833d78e, 0x0833d7dd]
0833d78e +0x00:  push   %ebp
0833d78f +0x01:  mov    %esp,%ebp
0833d791 +0x03:  sub    $0x28,%esp
0833d794 +0x06:  mov    0x8(%ebp),%eax
0833d797 +0x09:  mov    0x2c(%eax),%eax
0833d79a +0x0c:  cmp    $0xffffffff,%eax
0833d79d +0x0f:  je     0833d7a7 <+0x19>
0833d79f +0x11:  mov    0x8(%ebp),%eax
0833d7a2 +0x14:  mov    0x2c(%eax),%eax
0833d7a5 +0x17:  jmp    0833d7db <+0x4d>
0833d7a7 +0x19:  mov    0xc(%ebp),%eax
0833d7aa +0x1c:  mov    %eax,0x4(%esp)
0833d7ae +0x20:  mov    0x8(%ebp),%eax
0833d7b1 +0x23:  mov    %eax,(%esp)
0833d7b4 +0x26:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833d7b9 +0x2b:  mov    %eax,-0xc(%ebp)
0833d7bc +0x2e:  cmpl   $0x0,-0xc(%ebp)
0833d7c0 +0x32:  jne    0833d7c9 <+0x3b>
0833d7c2 +0x34:  mov    $0xffffffff,%eax
0833d7c7 +0x39:  jmp    0833d7db <+0x4d>
0833d7c9 +0x3b:  mov    0x10(%ebp),%eax
0833d7cc +0x3e:  mov    %eax,0x4(%esp)
0833d7d0 +0x42:  mov    -0xc(%ebp),%eax
0833d7d3 +0x45:  mov    %eax,(%esp)
0833d7d6 +0x48:  call   0833f016 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10e3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10e3
0833d7db +0x4d:  leave
0833d7dc +0x4e:  ret
0833d7dd +0x4f:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetRemainDate @ 0x833d78e

/* user_creature::CCreatureMgr::GetRemainDate(int, int) const */

undefined4 __thiscall
user_creature::CCreatureMgr::GetRemainDate(CCreatureMgr *this,int param_1,int param_2)

{
  CCreatureItem *this_00;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x2c) == -1) {
    this_00 = (CCreatureItem *)FindCreatureItem((int)this);
    if (this_00 == (CCreatureItem *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = CCreatureItem::GetRemainDate(this_00,param_2);
    }
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x2c);
  }
  return uVar1;
}
```
