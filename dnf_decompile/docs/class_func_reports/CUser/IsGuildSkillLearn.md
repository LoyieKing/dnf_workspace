# IsGuildSkillLearn

`_ZN5CUser17IsGuildSkillLearnEi`

`CUser::IsGuildSkillLearn(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fac4  _ZN5CUser17IsGuildSkillLearnEi
#           CUser::IsGuildSkillLearn(int)
# range [0x0864fac4, 0x0864fb39]
0864fac4 +0x00:  push   %ebp
0864fac5 +0x01:  mov    %esp,%ebp
0864fac7 +0x03:  sub    $0x28,%esp
0864faca +0x06:  mov    0x8(%ebp),%eax
0864facd +0x09:  mov    %eax,(%esp)
0864fad0 +0x0c:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0864fad5 +0x11:  mov    %eax,-0x14(%ebp)
0864fad8 +0x14:  mov    -0x14(%ebp),%eax
0864fadb +0x17:  movzbl 0x44(%eax),%eax
0864fadf +0x1b:  movzbl %al,%eax
0864fae2 +0x1e:  mov    %eax,-0x10(%ebp)
0864fae5 +0x21:  movl   $0x0,-0xc(%ebp)
0864faec +0x28:  jmp    0864fb25 <+0x61>
0864faee +0x2a:  mov    -0xc(%ebp),%edx
0864faf1 +0x2d:  mov    -0x14(%ebp),%ecx
0864faf4 +0x30:  mov    %edx,%eax
0864faf6 +0x32:  shl    $0x2,%eax
0864faf9 +0x35:  add    %edx,%eax
0864fafb +0x37:  lea    (%ecx,%eax,1),%eax
0864fafe +0x3a:  add    $0x40,%eax
0864fb01 +0x3d:  mov    0x5(%eax),%eax
0864fb04 +0x40:  cmp    0xc(%ebp),%eax
0864fb07 +0x43:  jne    0864fb21 <+0x5d>
0864fb09 +0x45:  mov    -0xc(%ebp),%edx
0864fb0c +0x48:  mov    -0x14(%ebp),%ecx
0864fb0f +0x4b:  mov    %edx,%eax
0864fb11 +0x4d:  shl    $0x2,%eax
0864fb14 +0x50:  add    %edx,%eax
0864fb16 +0x52:  lea    (%ecx,%eax,1),%eax
0864fb19 +0x55:  add    $0x49,%eax
0864fb1c +0x58:  movzbl (%eax),%eax
0864fb1f +0x5b:  jmp    0864fb37 <+0x73>
0864fb21 +0x5d:  addl   $0x1,-0xc(%ebp)
0864fb25 +0x61:  mov    -0xc(%ebp),%eax
0864fb28 +0x64:  cmp    -0x10(%ebp),%eax
0864fb2b +0x67:  setl   %al
0864fb2e +0x6a:  test   %al,%al
0864fb30 +0x6c:  jne    0864faee <+0x2a>
0864fb32 +0x6e:  mov    $0x0,%eax
0864fb37 +0x73:  leave
0864fb38 +0x74:  ret
0864fb39 +0x75:  nop
```

## 反编译 C

```c
// CUser::IsGuildSkillLearn @ 0x864fac4

/* CUser::IsGuildSkillLearn(int) */

undefined1 __thiscall CUser::IsGuildSkillLearn(CUser *this,int param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = GetGuildDBInfo(this);
  local_10 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar1 + 0x44) <= local_10) {
      return 0;
    }
    if (*(int *)(iVar1 + local_10 * 5 + 0x45) == param_1) break;
    local_10 = local_10 + 1;
  }
  return *(undefined1 *)(iVar1 + local_10 * 5 + 0x49);
}
```
