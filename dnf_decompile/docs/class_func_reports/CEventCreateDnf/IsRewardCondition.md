# IsRewardCondition

`_ZN15CEventCreateDnf17IsRewardConditionEv`

`CEventCreateDnf::IsRewardCondition()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08164092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164092  _ZN15CEventCreateDnf17IsRewardConditionEv
#           CEventCreateDnf::IsRewardCondition()
# range [0x08164092, 0x081640d3]
08164092 +0x00:  push   %ebp
08164093 +0x01:  mov    %esp,%ebp
08164095 +0x03:  sub    $0x18,%esp
08164098 +0x06:  mov    0x8(%ebp),%eax
0816409b +0x09:  mov    %eax,(%esp)
0816409e +0x0c:  call   08164246 <_ZN15CEventCreateDnf8GetStateEv>  ; CEventCreateDnf::GetState()
081640a3 +0x11:  cmp    $0x2,%eax
081640a6 +0x14:  jne    081640bc <+0x2a>
081640a8 +0x16:  mov    0x8(%ebp),%eax
081640ab +0x19:  movzwl 0x16(%eax),%eax
081640af +0x1d:  cmp    $0x64,%ax
081640b3 +0x21:  jne    081640bc <+0x2a>
081640b5 +0x23:  mov    $0x1,%eax
081640ba +0x28:  jmp    081640c1 <+0x2f>
081640bc +0x2a:  mov    $0x0,%eax
081640c1 +0x2f:  test   %al,%al
081640c3 +0x31:  je     081640cc <+0x3a>
081640c5 +0x33:  mov    $0x1,%eax
081640ca +0x38:  jmp    081640d1 <+0x3f>
081640cc +0x3a:  mov    $0x0,%eax
081640d1 +0x3f:  leave
081640d2 +0x40:  ret
081640d3 +0x41:  nop
```

## 反编译 C

```c
// CEventCreateDnf::IsRewardCondition @ 0x8164092

/* CEventCreateDnf::IsRewardCondition() */

undefined1 __thiscall CEventCreateDnf::IsRewardCondition(CEventCreateDnf *this)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = GetState(this);
  if ((iVar2 == 2) && (*(short *)(this + 0x16) == 100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
