# getExpireDate

`_ZNK13user_creature12CCreatureMgr13getExpireDateEi`

`user_creature::CCreatureMgr::getExpireDate(int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d758` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d758  _ZNK13user_creature12CCreatureMgr13getExpireDateEi
#           user_creature::CCreatureMgr::getExpireDate(int) const
# range [0x0833d758, 0x0833d78d]
0833d758 +0x00:  push   %ebp
0833d759 +0x01:  mov    %esp,%ebp
0833d75b +0x03:  sub    $0x28,%esp
0833d75e +0x06:  mov    0xc(%ebp),%eax
0833d761 +0x09:  mov    %eax,0x4(%esp)
0833d765 +0x0d:  mov    0x8(%ebp),%eax
0833d768 +0x10:  mov    %eax,(%esp)
0833d76b +0x13:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833d770 +0x18:  mov    %eax,-0xc(%ebp)
0833d773 +0x1b:  cmpl   $0x0,-0xc(%ebp)
0833d777 +0x1f:  jne    0833d780 <+0x28>
0833d779 +0x21:  mov    $0xffffffff,%eax
0833d77e +0x26:  jmp    0833d78b <+0x33>
0833d780 +0x28:  mov    -0xc(%ebp),%eax
0833d783 +0x2b:  mov    %eax,(%esp)
0833d786 +0x2e:  call   0833f00a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x10d7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x10d7
0833d78b +0x33:  leave
0833d78c +0x34:  ret
0833d78d +0x35:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::getExpireDate @ 0x833d758

/* user_creature::CCreatureMgr::getExpireDate(int) const */

undefined4 user_creature::CCreatureMgr::getExpireDate(int param_1)

{
  CCreatureItem *this;
  undefined4 uVar1;
  
  this = (CCreatureItem *)FindCreatureItem(param_1);
  if (this == (CCreatureItem *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureItem::getExpireTime(this);
  }
  return uVar1;
}
```
