# loadData

`_ZN16CItemMakingSkill8loadDataEP5CUserPc`

`CItemMakingSkill::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545202  _ZN16CItemMakingSkill8loadDataEP5CUserPc
#           CItemMakingSkill::loadData(CUser*, char*)
# range [0x08545202, 0x08545275]
08545202 +0x00:  push   %ebp
08545203 +0x01:  mov    %esp,%ebp
08545205 +0x03:  sub    $0x28,%esp
08545208 +0x06:  mov    0x8(%ebp),%eax
0854520b +0x09:  mov    (%eax),%eax
0854520d +0x0b:  add    $0x1c,%eax
08545210 +0x0e:  mov    (%eax),%edx
08545212 +0x10:  mov    0x8(%ebp),%eax
08545215 +0x13:  mov    %eax,(%esp)
08545218 +0x16:  call   *%edx
0854521a +0x18:  mov    0x10(%ebp),%eax
0854521d +0x1b:  mov    %eax,-0x10(%ebp)
08545220 +0x1e:  movl   $0x0,-0xc(%ebp)
08545227 +0x25:  jmp    08545263 <+0x61>
08545229 +0x27:  mov    -0xc(%ebp),%edx
0854522c +0x2a:  mov    -0x10(%ebp),%eax
0854522f +0x2d:  movzwl 0x4(%eax,%edx,2),%eax
08545234 +0x32:  cmp    $0x3e7,%ax
08545238 +0x36:  jle    08545249 <+0x47>
0854523a +0x38:  mov    -0xc(%ebp),%edx
0854523d +0x3b:  mov    0x8(%ebp),%eax
08545240 +0x3e:  movw   $0x3e8,0x6(%eax,%edx,2)
08545247 +0x45:  jmp    0854525f <+0x5d>
08545249 +0x47:  mov    -0xc(%ebp),%edx
0854524c +0x4a:  mov    -0xc(%ebp),%ecx
0854524f +0x4d:  mov    -0x10(%ebp),%eax
08545252 +0x50:  movzwl 0x4(%eax,%ecx,2),%ecx
08545257 +0x55:  mov    0x8(%ebp),%eax
0854525a +0x58:  mov    %cx,0x6(%eax,%edx,2)
0854525f +0x5d:  addl   $0x1,-0xc(%ebp)
08545263 +0x61:  cmpl   $0xa,-0xc(%ebp)
08545267 +0x65:  setle  %al
0854526a +0x68:  test   %al,%al
0854526c +0x6a:  jne    08545229 <+0x27>
0854526e +0x6c:  mov    $0x1,%eax
08545273 +0x71:  leave
08545274 +0x72:  ret
08545275 +0x73:  nop
```

## 反编译 C

```c
// CItemMakingSkill::loadData @ 0x8545202

/* CItemMakingSkill::loadData(CUser*, char*) */

undefined4 __thiscall
CItemMakingSkill::loadData(CItemMakingSkill *this,CUser *param_1,char *param_2)

{
  int local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if (*(short *)(param_2 + local_10 * 2 + 4) < 1000) {
      *(undefined2 *)(this + local_10 * 2 + 6) = *(undefined2 *)(param_2 + local_10 * 2 + 4);
    }
    else {
      *(undefined2 *)(this + local_10 * 2 + 6) = 1000;
    }
  }
  return 1;
}
```
