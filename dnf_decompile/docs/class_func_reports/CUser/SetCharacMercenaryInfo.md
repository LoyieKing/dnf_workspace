# SetCharacMercenaryInfo

`_ZN5CUser22SetCharacMercenaryInfoEiP21CHARAC_LOAD_MERCENARY`

`CUser::SetCharacMercenaryInfo(int, CHARAC_LOAD_MERCENARY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e544  _ZN5CUser22SetCharacMercenaryInfoEiP21CHARAC_LOAD_MERCENARY
#           CUser::SetCharacMercenaryInfo(int, CHARAC_LOAD_MERCENARY*)
# range [0x0868e544, 0x0868e595]
0868e544 +0x00:  push   %ebp
0868e545 +0x01:  mov    %esp,%ebp
0868e547 +0x03:  sub    $0x28,%esp
0868e54a +0x06:  movl   $0x0,-0xc(%ebp)
0868e551 +0x0d:  jmp    0868e575 <+0x31>
0868e553 +0x0f:  mov    -0xc(%ebp),%eax
0868e556 +0x12:  imul   $0x54,%eax,%eax
0868e559 +0x15:  add    0x10(%ebp),%eax
0868e55c +0x18:  mov    0x8(%ebp),%edx
0868e55f +0x1b:  add    $0x6ef6c,%edx
0868e565 +0x21:  mov    %eax,0x4(%esp)
0868e569 +0x25:  mov    %edx,(%esp)
0868e56c +0x28:  call   081b4300 <_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY>  ; UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&)
0868e571 +0x2d:  addl   $0x1,-0xc(%ebp)
0868e575 +0x31:  mov    -0xc(%ebp),%eax
0868e578 +0x34:  cmp    0xc(%ebp),%eax
0868e57b +0x37:  jge    0868e58a <+0x46>
0868e57d +0x39:  cmpl   $0x23,-0xc(%ebp)
0868e581 +0x3d:  jg     0868e58a <+0x46>
0868e583 +0x3f:  mov    $0x1,%eax
0868e588 +0x44:  jmp    0868e58f <+0x4b>
0868e58a +0x46:  mov    $0x0,%eax
0868e58f +0x4b:  test   %al,%al
0868e591 +0x4d:  jne    0868e553 <+0xf>
0868e593 +0x4f:  leave
0868e594 +0x50:  ret
0868e595 +0x51:  nop
```

## 反编译 C

```c
// CUser::SetCharacMercenaryInfo @ 0x868e544

/* CUser::SetCharacMercenaryInfo(int, CHARAC_LOAD_MERCENARY*) */

void __thiscall
CUser::SetCharacMercenaryInfo(CUser *this,int param_1,CHARAC_LOAD_MERCENARY *param_2)

{
  bool bVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if ((local_10 < param_1) && (local_10 < 0x24)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    UserMercenaryInfoMgr::AddCharac
              ((UserMercenaryInfoMgr *)(this + 0x6ef6c),param_2 + local_10 * 0x54);
    local_10 = local_10 + 1;
  }
  return;
}
```
