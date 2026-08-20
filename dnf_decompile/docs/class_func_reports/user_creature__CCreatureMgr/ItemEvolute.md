# ItemEvolute

`_ZN13user_creature12CCreatureMgr11ItemEvoluteEi`

`user_creature::CCreatureMgr::ItemEvolute(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d6c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d6c2  _ZN13user_creature12CCreatureMgr11ItemEvoluteEi
#           user_creature::CCreatureMgr::ItemEvolute(int)
# range [0x0833d6c2, 0x0833d6f9]
0833d6c2 +0x00:  push   %ebp
0833d6c3 +0x01:  mov    %esp,%ebp
0833d6c5 +0x03:  sub    $0x18,%esp
0833d6c8 +0x06:  mov    0x8(%ebp),%eax
0833d6cb +0x09:  mov    0x18(%eax),%eax
0833d6ce +0x0c:  test   %eax,%eax
0833d6d0 +0x0e:  je     0833d6f3 <+0x31>
0833d6d2 +0x10:  mov    0x8(%ebp),%eax
0833d6d5 +0x13:  mov    0x1c(%eax),%edx
0833d6d8 +0x16:  mov    0x8(%ebp),%eax
0833d6db +0x19:  mov    0x18(%eax),%eax
0833d6de +0x1c:  mov    0xc(%ebp),%ecx
0833d6e1 +0x1f:  mov    %ecx,0x8(%esp)
0833d6e5 +0x23:  mov    %edx,0x4(%esp)
0833d6e9 +0x27:  mov    %eax,(%esp)
0833d6ec +0x2a:  call   08338ca0 <_ZN13user_creature9CCreature11ItemEvoluteEP5CUseri>  ; user_creature::CCreature::ItemEvolute(CUser*, int)
0833d6f1 +0x2f:  jmp    0833d6f8 <+0x36>
0833d6f3 +0x31:  mov    $0x0,%eax
0833d6f8 +0x36:  leave
0833d6f9 +0x37:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::ItemEvolute @ 0x833d6c2

/* user_creature::CCreatureMgr::ItemEvolute(int) */

undefined4 __thiscall user_creature::CCreatureMgr::ItemEvolute(CCreatureMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreature::ItemEvolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1);
  }
  return uVar1;
}
```
