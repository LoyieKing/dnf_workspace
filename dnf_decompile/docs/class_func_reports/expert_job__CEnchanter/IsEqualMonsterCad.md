# IsEqualMonsterCad

`_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv`

`expert_job::CEnchanter::IsEqualMonsterCad()`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849ca6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ca6a  _ZN10expert_job10CEnchanter17IsEqualMonsterCadEv
#           expert_job::CEnchanter::IsEqualMonsterCad()
# range [0x0849ca6a, 0x0849cac5]
0849ca6a +0x00:  push   %ebp
0849ca6b +0x01:  mov    %esp,%ebp
0849ca6d +0x03:  push   %ebx
0849ca6e +0x04:  sub    $0x24,%esp
0849ca71 +0x07:  mov    0x8(%ebp),%eax
0849ca74 +0x0a:  mov    0x40(%eax),%eax
0849ca77 +0x0d:  mov    %eax,(%esp)
0849ca7a +0x10:  call   0849be32 <_ZN10expert_job15FindMonsterCardEP5CItem>  ; expert_job::FindMonsterCard(CItem*)
0849ca7f +0x15:  mov    %eax,-0xc(%ebp)
0849ca82 +0x18:  cmpl   $0x0,-0xc(%ebp)
0849ca86 +0x1c:  jne    0849ca8f <+0x25>
0849ca88 +0x1e:  mov    $0x0,%eax
0849ca8d +0x23:  jmp    0849cabf <+0x55>
0849ca8f +0x25:  mov    -0xc(%ebp),%eax
0849ca92 +0x28:  mov    %eax,(%esp)
0849ca95 +0x2b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849ca9a +0x30:  mov    %eax,%ebx
0849ca9c +0x32:  mov    0x8(%ebp),%eax
0849ca9f +0x35:  mov    0x3c(%eax),%eax
0849caa2 +0x38:  mov    %eax,(%esp)
0849caa5 +0x3b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849caaa +0x40:  cmp    %eax,%ebx
0849caac +0x42:  setne  %al
0849caaf +0x45:  test   %al,%al
0849cab1 +0x47:  je     0849caba <+0x50>
0849cab3 +0x49:  mov    $0x0,%eax
0849cab8 +0x4e:  jmp    0849cabf <+0x55>
0849caba +0x50:  mov    $0x1,%eax
0849cabf +0x55:  add    $0x24,%esp
0849cac2 +0x58:  pop    %ebx
0849cac3 +0x59:  pop    %ebp
0849cac4 +0x5a:  ret
0849cac5 +0x5b:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::IsEqualMonsterCad @ 0x849ca6a

/* expert_job::CEnchanter::IsEqualMonsterCad() */

undefined4 __thiscall expert_job::CEnchanter::IsEqualMonsterCad(CEnchanter *this)

{
  CItem *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CItem *)FindMonsterCard(*(CItem **)(this + 0x40));
  if (this_00 == (CItem *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CItem::get_index(this_00);
    iVar3 = CItem::get_index(*(CItem **)(this + 0x3c));
    if (iVar2 == iVar3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
