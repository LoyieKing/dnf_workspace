# applyItemOption

`_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData`

`eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0d6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0d6e  _ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData
#           eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&)
# range [0x080f0d6e, 0x080f0e3f]
080f0d6e +0x00:  push   %ebp
080f0d6f +0x01:  mov    %esp,%ebp
080f0d71 +0x03:  push   %ebx
080f0d72 +0x04:  sub    $0x14,%esp
080f0d75 +0x07:  mov    0x10(%ebp),%eax
080f0d78 +0x0a:  mov    %eax,(%esp)
080f0d7b +0x0d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
080f0d80 +0x12:  test   %al,%al
080f0d82 +0x14:  je     080f0d95 <+0x27>
080f0d84 +0x16:  mov    0x14(%ebp),%eax
080f0d87 +0x19:  mov    0x8(%eax),%edx
080f0d8a +0x1c:  mov    0xc(%ebp),%eax
080f0d8d +0x1f:  mov    %edx,0x7(%eax)
080f0d90 +0x22:  jmp    080f0e3a <+0xcc>
080f0d95 +0x27:  mov    0x14(%ebp),%eax
080f0d98 +0x2a:  movzbl 0x1(%eax),%edx
080f0d9c +0x2e:  mov    0xc(%ebp),%eax
080f0d9f +0x31:  mov    %dl,(%eax)
080f0da1 +0x33:  mov    0x10(%ebp),%eax
080f0da4 +0x36:  mov    %eax,(%esp)
080f0da7 +0x39:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
080f0dac +0x3e:  cmp    $0x5,%eax
080f0daf +0x41:  ja     080f0dcb <+0x5d>
080f0db1 +0x43:  mov    $0x1,%edx
080f0db6 +0x48:  mov    %edx,%ebx
080f0db8 +0x4a:  mov    %eax,%ecx
080f0dba +0x4c:  shl    %cl,%ebx
080f0dbc +0x4e:  mov    %ebx,%eax
080f0dbe +0x50:  and    $0x27,%eax
080f0dc1 +0x53:  test   %eax,%eax
080f0dc3 +0x55:  je     080f0dcb <+0x5d>
080f0dc5 +0x57:  mov    0xc(%ebp),%eax
080f0dc8 +0x5a:  movb   $0x0,(%eax)
080f0dcb +0x5d:  mov    0x14(%ebp),%eax
080f0dce +0x60:  movzbl (%eax),%eax
080f0dd1 +0x63:  cmp    $0x1,%al
080f0dd3 +0x65:  jle    080f0ded <+0x7f>
080f0dd5 +0x67:  mov    0x14(%ebp),%eax
080f0dd8 +0x6a:  movzbl (%eax),%eax
080f0ddb +0x6d:  movzbl %al,%eax
080f0dde +0x70:  mov    %eax,0x4(%esp)
080f0de2 +0x74:  mov    0xc(%ebp),%eax
080f0de5 +0x77:  mov    %eax,(%esp)
080f0de8 +0x7a:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
080f0ded +0x7f:  mov    0x10(%ebp),%eax
080f0df0 +0x82:  mov    (%eax),%eax
080f0df2 +0x84:  add    $0x4c,%eax
080f0df5 +0x87:  mov    (%eax),%edx
080f0df7 +0x89:  mov    0x10(%ebp),%eax
080f0dfa +0x8c:  mov    %eax,(%esp)
080f0dfd +0x8f:  call   *%edx
080f0dff +0x91:  test   %al,%al
080f0e01 +0x93:  je     080f0e18 <+0xaa>
080f0e03 +0x95:  mov    0x14(%ebp),%eax
080f0e06 +0x98:  movzbl 0x2(%eax),%eax
080f0e0a +0x9c:  xor    $0x1,%eax
080f0e0d +0x9f:  test   %al,%al
080f0e0f +0xa1:  je     080f0e18 <+0xaa>
080f0e11 +0xa3:  mov    $0x1,%eax
080f0e16 +0xa8:  jmp    080f0e1d <+0xaf>
080f0e18 +0xaa:  mov    $0x0,%eax
080f0e1d +0xaf:  test   %al,%al
080f0e1f +0xb1:  je     080f0e3a <+0xcc>
080f0e21 +0xb3:  mov    0xc(%ebp),%eax
080f0e24 +0xb6:  mov    %eax,0x8(%esp)
080f0e28 +0xba:  mov    0x10(%ebp),%eax
080f0e2b +0xbd:  mov    %eax,0x4(%esp)
080f0e2f +0xc1:  mov    0x8(%ebp),%eax
080f0e32 +0xc4:  mov    %eax,(%esp)
080f0e35 +0xc7:  call   080f0e40 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item>  ; eventReward::unsealRandomOption(CItem const*, Inven_Item&)
080f0e3a +0xcc:  add    $0x14,%esp
080f0e3d +0xcf:  pop    %ebx
080f0e3e +0xd0:  pop    %ebp
080f0e3f +0xd1:  ret
```

## 反编译 C

```c
// eventReward::applyItemOption @ 0x80f0d6e

/* eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&) */

void __thiscall
eventReward::applyItemOption(eventReward *this,Inven_Item *param_1,CItem *param_2,itemData *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    *param_1 = *(Inven_Item *)(param_3 + 1);
    uVar3 = CItem::GetAttachType(param_2);
    if ((uVar3 < 6) && ((1 << ((byte)uVar3 & 0x1f) & 0x27U) != 0)) {
      *param_1 = (Inven_Item)0x0;
    }
    if ('\x01' < (char)*param_3) {
      Inven_Item::SetUpgrade(param_1,(uchar)*param_3);
    }
    cVar2 = (**(code **)(*(int *)param_2 + 0x4c))(param_2);
    if ((cVar2 == '\0') || (param_3[2] == (itemData)0x1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      unsealRandomOption(this,param_2,param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 8);
  }
  return;
}
```
