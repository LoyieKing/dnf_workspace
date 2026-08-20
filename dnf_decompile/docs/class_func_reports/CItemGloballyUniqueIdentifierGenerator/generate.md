# generate

`_ZN38CItemGloballyUniqueIdentifierGenerator8generateEP30itemGloballyUniqueIdentifier_ti`

`CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int)`

| 类 | 地址 |
|---|---|
| `CItemGloballyUniqueIdentifierGenerator` | `0x0889246c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889246c  _ZN38CItemGloballyUniqueIdentifierGenerator8generateEP30itemGloballyUniqueIdentifier_ti
#           CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int)
# range [0x0889246c, 0x088924c0]
0889246c +0x00:  push   %ebp
0889246d +0x01:  mov    %esp,%ebp
0889246f +0x03:  sub    $0x18,%esp
08892472 +0x06:  mov    0x10(%ebp),%eax
08892475 +0x09:  mov    %eax,0x4(%esp)
08892479 +0x0d:  mov    0xc(%ebp),%eax
0889247c +0x10:  mov    %eax,(%esp)
0889247f +0x13:  call   08894782 <_GLOBAL__I_AVTVARIATION_TAG_NAME+0x1d>  ; global constructors keyed to AVTVARIATION_TAG_NAME+0x1d
08892484 +0x18:  movl   $0x0,(%esp)
0889248b +0x1f:  call   0807d750 <_init+0x48>
08892490 +0x24:  mov    %eax,0x4(%esp)
08892494 +0x28:  mov    0xc(%ebp),%eax
08892497 +0x2b:  mov    %eax,(%esp)
0889249a +0x2e:  call   08894798 <_GLOBAL__I_AVTVARIATION_TAG_NAME+0x33>  ; global constructors keyed to AVTVARIATION_TAG_NAME+0x33
0889249f +0x33:  mov    0x8(%ebp),%eax
088924a2 +0x36:  mov    %eax,(%esp)
088924a5 +0x39:  call   088947e2 <_GLOBAL__I_AVTVARIATION_TAG_NAME+0x7d>  ; global constructors keyed to AVTVARIATION_TAG_NAME+0x7d
088924aa +0x3e:  movzwl %ax,%eax
088924ad +0x41:  mov    %eax,0x4(%esp)
088924b1 +0x45:  mov    0xc(%ebp),%eax
088924b4 +0x48:  mov    %eax,(%esp)
088924b7 +0x4b:  call   088947b2 <_GLOBAL__I_AVTVARIATION_TAG_NAME+0x4d>  ; global constructors keyed to AVTVARIATION_TAG_NAME+0x4d
088924bc +0x50:  mov    0xc(%ebp),%eax
088924bf +0x53:  leave
088924c0 +0x54:  ret
```

## 反编译 C

```c
// CItemGloballyUniqueIdentifierGenerator::generate @ 0x889246c

/* CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int) */

itemGloballyUniqueIdentifier_t * __thiscall
CItemGloballyUniqueIdentifierGenerator::generate
          (CItemGloballyUniqueIdentifierGenerator *this,itemGloballyUniqueIdentifier_t *param_1,
          int param_2)

{
  ushort uVar1;
  time_t tVar2;
  
  itemGloballyUniqueIdentifier_t::SetServerId(param_1,param_2);
  tVar2 = time((time_t *)0x0);
  itemGloballyUniqueIdentifier_t::SetDatetime(param_1,tVar2);
  uVar1 = getSeq(this);
  itemGloballyUniqueIdentifier_t::SetSequenceNo(param_1,uVar1);
  return param_1;
}
```
