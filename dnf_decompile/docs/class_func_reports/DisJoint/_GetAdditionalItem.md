# _GetAdditionalItem

`_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_`

`DisJoint::_GetAdditionalItem(CItem const*, int&, int&)`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x084732b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084732b4  _ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_
#           DisJoint::_GetAdditionalItem(CItem const*, int&, int&)
# range [0x084732b4, 0x084733f5]
084732b4 +0x000:  push   %ebp
084732b5 +0x001:  mov    %esp,%ebp
084732b7 +0x003:  sub    $0x38,%esp
084732ba +0x006:  mov    0xc(%ebp),%eax
084732bd +0x009:  mov    %eax,(%esp)
084732c0 +0x00c:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084732c5 +0x011:  mov    %eax,0x4(%esp)
084732c9 +0x015:  mov    0x8(%ebp),%eax
084732cc +0x018:  mov    %eax,(%esp)
084732cf +0x01b:  call   08473224 <_ZN8DisJoint22_GetAdditionalItemInfoEi>  ; DisJoint::_GetAdditionalItemInfo(int)
084732d4 +0x020:  mov    0x10(%ebp),%edx
084732d7 +0x023:  mov    %eax,(%edx)
084732d9 +0x025:  mov    0x10(%ebp),%eax
084732dc +0x028:  mov    (%eax),%eax
084732de +0x02a:  test   %eax,%eax
084732e0 +0x02c:  setne  %al
084732e3 +0x02f:  test   %al,%al
084732e5 +0x031:  je     084733f4 <+0x140>
084732eb +0x037:  mov    0xc(%ebp),%eax
084732ee +0x03a:  mov    %eax,(%esp)
084732f1 +0x03d:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084732f6 +0x042:  mov    %eax,%edx
084732f8 +0x044:  mov    0x8(%ebp),%ecx
084732fb +0x047:  mov    %edx,%eax
084732fd +0x049:  add    %eax,%eax
084732ff +0x04b:  add    %edx,%eax
08473301 +0x04d:  shl    $0x2,%eax
08473304 +0x050:  lea    (%ecx,%eax,1),%eax
08473307 +0x053:  add    $0x56c,%eax
0847330c +0x058:  mov    (%eax),%eax
0847330e +0x05a:  mov    %eax,-0x18(%ebp)
08473311 +0x05d:  mov    -0x18(%ebp),%eax
08473314 +0x060:  mov    %eax,-0x14(%ebp)
08473317 +0x063:  mov    -0x14(%ebp),%eax
0847331a +0x066:  imul   $0x64,%eax,%eax
0847331d +0x069:  mov    %eax,-0x14(%ebp)
08473320 +0x06c:  movl   $0x2710,(%esp)
08473327 +0x073:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0847332c +0x078:  cmp    -0x14(%ebp),%eax
0847332f +0x07b:  setl   %al
08473332 +0x07e:  test   %al,%al
08473334 +0x080:  je     0847338d <+0xd9>
08473336 +0x082:  mov    0xc(%ebp),%eax
08473339 +0x085:  mov    %eax,(%esp)
0847333c +0x088:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08473341 +0x08d:  mov    %eax,-0x1c(%ebp)
08473344 +0x090:  fildl  -0x1c(%ebp)
08473347 +0x093:  fstps  -0x28(%ebp)
0847334a +0x096:  mov    0xc(%ebp),%eax
0847334d +0x099:  mov    %eax,(%esp)
08473350 +0x09c:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08473355 +0x0a1:  mov    %eax,%edx
08473357 +0x0a3:  mov    0x8(%ebp),%eax
0847335a +0x0a6:  add    $0x150,%edx
08473360 +0x0ac:  flds   0x10(%eax,%edx,4)
08473364 +0x0b0:  fdivrs -0x28(%ebp)
08473367 +0x0b3:  fstps  -0x10(%ebp)
0847336a +0x0b6:  flds   -0x10(%ebp)
0847336d +0x0b9:  fnstcw -0x1e(%ebp)
08473370 +0x0bc:  movzwl -0x1e(%ebp),%eax
08473374 +0x0c0:  mov    $0xc,%ah
08473376 +0x0c2:  mov    %ax,-0x20(%ebp)
0847337a +0x0c6:  fldcw  -0x20(%ebp)
0847337d +0x0c9:  fistpl -0x1c(%ebp)
08473380 +0x0cc:  fldcw  -0x1e(%ebp)
08473383 +0x0cf:  mov    -0x1c(%ebp),%edx
08473386 +0x0d2:  mov    0x14(%ebp),%eax
08473389 +0x0d5:  mov    %edx,(%eax)
0847338b +0x0d7:  jmp    084733e2 <+0x12e>
0847338d +0x0d9:  mov    0xc(%ebp),%eax
08473390 +0x0dc:  mov    %eax,(%esp)
08473393 +0x0df:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08473398 +0x0e4:  mov    %eax,-0x1c(%ebp)
0847339b +0x0e7:  fildl  -0x1c(%ebp)
0847339e +0x0ea:  fstps  -0x24(%ebp)
084733a1 +0x0ed:  mov    0xc(%ebp),%eax
084733a4 +0x0f0:  mov    %eax,(%esp)
084733a7 +0x0f3:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084733ac +0x0f8:  mov    %eax,%edx
084733ae +0x0fa:  mov    0x8(%ebp),%eax
084733b1 +0x0fd:  add    $0x168,%edx
084733b7 +0x103:  flds   0x10(%eax,%edx,4)
084733bb +0x107:  fdivrs -0x24(%ebp)
084733be +0x10a:  fstps  -0xc(%ebp)
084733c1 +0x10d:  flds   -0xc(%ebp)
084733c4 +0x110:  fnstcw -0x1e(%ebp)
084733c7 +0x113:  movzwl -0x1e(%ebp),%eax
084733cb +0x117:  mov    $0xc,%ah
084733cd +0x119:  mov    %ax,-0x20(%ebp)
084733d1 +0x11d:  fldcw  -0x20(%ebp)
084733d4 +0x120:  fistpl -0x1c(%ebp)
084733d7 +0x123:  fldcw  -0x1e(%ebp)
084733da +0x126:  mov    -0x1c(%ebp),%edx
084733dd +0x129:  mov    0x14(%ebp),%eax
084733e0 +0x12c:  mov    %edx,(%eax)
084733e2 +0x12e:  mov    0x14(%ebp),%eax
084733e5 +0x131:  mov    (%eax),%eax
084733e7 +0x133:  test   %eax,%eax
084733e9 +0x135:  jg     084733f4 <+0x140>
084733eb +0x137:  mov    0x14(%ebp),%eax
084733ee +0x13a:  movl   $0x1,(%eax)
084733f4 +0x140:  leave
084733f5 +0x141:  ret
```

## 反编译 C

```c
// DisJoint::_GetAdditionalItem @ 0x84732b4

/* DisJoint::_GetAdditionalItem(CItem const*, int&, int&) */

void __thiscall
DisJoint::_GetAdditionalItem(DisJoint *this,CItem *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CItem::get_rarity(param_1);
  iVar1 = _GetAdditionalItemInfo(this,iVar1);
  *param_2 = iVar1;
  if (*param_2 != 0) {
    iVar1 = CItem::get_rarity(param_1);
    iVar1 = *(int *)(this + iVar1 * 0xc + 0x56c);
    iVar2 = get_rand_int(10000);
    if (iVar2 < iVar1 * 100) {
      iVar1 = CItem::get_grade(param_1);
      iVar2 = CItem::get_rarity(param_1);
      *param_3 = (int)ROUND((float)iVar1 / *(float *)(this + (iVar2 + 0x150) * 4 + 0x10));
    }
    else {
      iVar1 = CItem::get_grade(param_1);
      iVar2 = CItem::get_rarity(param_1);
      *param_3 = (int)ROUND((float)iVar1 / *(float *)(this + (iVar2 + 0x168) * 4 + 0x10));
    }
    if (*param_3 < 1) {
      *param_3 = 1;
    }
  }
  return;
}
```
